/* Headless mGBA harness for smoke/shift tests.
 *
 * usage: harness rom.gba script.txt outdir
 * script commands (one per line, '#' comments):
 *   keys A,START,...   set held keys (empty = none)
 *   run N              run N frames with the held keys
 *   tap KEY [N]        hold KEY for 4 frames then release, wait N frames (default 30)
 *   shot NAME          write outdir/NAME.png and print a frame hash
 *   hash               print frame hash only
 *   dump NAME ADDR LEN write raw bus memory to outdir/NAME.bin
 *   pc                 print the CPU PC
 * Original code for the buusfury disassembly project.
 */
#include <mgba/core/core.h>
#include <mgba/core/config.h>
#include <mgba/core/log.h>
#include <mgba/internal/arm/arm.h>
#include <mgba-util/vfs.h>
#include <png.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

static unsigned W, H;
static color_t* vbuf;
static uint64_t frame_no;

static void quiet_log(struct mLogger* l, int cat, enum mLogLevel lvl, const char* fmt, va_list a) {
    (void) l; (void) cat; (void) lvl; (void) fmt; (void) a;
}
static struct mLogger logger = { .log = quiet_log };

static const char* KEYN[] = { "A", "B", "SELECT", "START", "RIGHT", "LEFT", "UP", "DOWN", "R", "L" };
static uint32_t parse_keys(const char* s) {
    uint32_t k = 0;
    char buf[256]; strncpy(buf, s, 255); buf[255] = 0;
    for (char* t = strtok(buf, ", \t\n"); t; t = strtok(NULL, ", \t\n"))
        for (int i = 0; i < 10; i++) if (!strcmp(t, KEYN[i])) k |= 1u << i;
    return k;
}

static uint64_t fhash(void) {
    uint64_t h = 1469598103934665603ull;
    for (unsigned y = 0; y < H; y++)
        for (unsigned x = 0; x < W; x++) { h ^= (uint32_t) vbuf[y * 256 + x] & 0xFFFFFF; h *= 1099511628211ull; }
    return h;
}

static void shot(const char* path) {
    FILE* f = fopen(path, "wb");
    if (!f) return;
    png_structp p = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
    png_infop info = png_create_info_struct(p);
    png_init_io(p, f);
    png_set_IHDR(p, info, W, H, 8, PNG_COLOR_TYPE_RGB, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);
    png_write_info(p, info);
    unsigned char* row = malloc(W * 3);
    for (unsigned y = 0; y < H; y++) {
        for (unsigned x = 0; x < W; x++) {
            uint32_t c = vbuf[y * 256 + x];
            row[x * 3] = c & 0xFF; row[x * 3 + 1] = (c >> 8) & 0xFF; row[x * 3 + 2] = (c >> 16) & 0xFF;
        }
        png_write_row(p, row);
    }
    png_write_end(p, NULL);
    png_destroy_write_struct(&p, &info);
    free(row); fclose(f);
}

int main(int argc, char** argv) {
    if (argc < 4) { fprintf(stderr, "usage: %s rom script outdir\n", argv[0]); return 1; }
    mLogSetDefaultLogger(&logger);
    struct mCore* core = mCoreFind(argv[1]);
    if (!core || !core->init(core)) { fprintf(stderr, "core init failed\n"); return 1; }
    mCoreInitConfig(core, NULL);
    core->desiredVideoDimensions(core, &W, &H);
    vbuf = calloc(256 * 256, sizeof(color_t));
    core->setVideoBuffer(core, vbuf, 256);
    if (!mCoreLoadFile(core, argv[1])) { fprintf(stderr, "load failed\n"); return 1; }
    core->reset(core);
    FILE* sc = fopen(argv[2], "r");
    if (!sc) { perror("script"); return 1; }
    char line[512];
    uint32_t keys = 0;
    while (fgets(line, sizeof line, sc)) {
        char* c = strchr(line, '#'); if (c) *c = 0;
        char cmd[64] = "", a1[256] = "", a2[64] = "", a3[64] = "";
        if (sscanf(line, "%63s %255s %63s %63s", cmd, a1, a2, a3) < 1) continue;
        if (!strcmp(cmd, "keys")) { keys = parse_keys(a1); core->setKeys(core, keys); }
        else if (!strcmp(cmd, "run")) { int n = atoi(a1); for (int i = 0; i < n; i++) { core->runFrame(core); frame_no++; } }
        else if (!strcmp(cmd, "tap")) {
            int n = a2[0] ? atoi(a2) : 30;
            core->setKeys(core, keys | parse_keys(a1));
            for (int i = 0; i < 4; i++) { core->runFrame(core); frame_no++; }
            core->setKeys(core, keys);
            for (int i = 0; i < n; i++) { core->runFrame(core); frame_no++; }
        }
        else if (!strcmp(cmd, "shot")) {
            char p[600]; snprintf(p, sizeof p, "%s/%s.png", argv[3], a1); shot(p);
            printf("shot %s frame %llu hash %016llx\n", a1, (unsigned long long) frame_no, (unsigned long long) fhash());
        }
        else if (!strcmp(cmd, "hash")) printf("hash frame %llu %016llx\n", (unsigned long long) frame_no, (unsigned long long) fhash());
        else if (!strcmp(cmd, "pc")) {
            struct ARMCore* cpu = core->cpu;
            printf("pc %08x frame %llu\n", (unsigned) cpu->gprs[15], (unsigned long long) frame_no);
        }
        else if (!strcmp(cmd, "dump")) {
            char p[600]; snprintf(p, sizeof p, "%s/%s.bin", argv[3], a1);
            uint32_t ad = strtoul(a2, 0, 16), n = strtoul(a3, 0, 16);
            FILE* f = fopen(p, "wb");
            for (uint32_t i = 0; i < n; i++) fputc(core->busRead8(core, ad + i), f);
            fclose(f);
        }
        fflush(stdout);
    }
    core->deinit(core);
    return 0;
}
