/* Outfit selection on the Switch Character screen. Up and Down cycle the highlighted character's outfits.
   A keeps the choice; B restores every character's form as it was when the screen opened.
   Addresses come from build.py as -D defines. */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;

#define KEYS_NEW (*(volatile u16 *)0x03003304)
#define KEY_UP 0x40
#define KEY_DOWN 0x80
#define RECORDS ((u8 *)0x03001560)
#define RECORD_SIZE 0x68
#define FORM_OF(c) (RECORDS[(c) * RECORD_SIZE + 0x14])
#define OBJ_SELECTED 0x160
#define OBJ_LIST 0x118             /* {character, sprite} pairs */
#define SNAP_OWNER (*(u32 *)0x0203FF20)
#define SNAP_FORMS ((u8 *)0x0203FF24)
#define SNAP_MAGIC 0x4F465431

typedef int (*update_fn)(void *);
typedef int (*input_fn)(void *, void *, int, int);
#define orig_update ((update_fn)0x0802EBA5)
#define orig_input ((input_fn)0x0802ECEB)
#define Form_Sprite ((void *(*)(void *))0x0801713D)
#define Sprite_SetCharacter ((void (*)(void *, void *))0x0800EDF9)
#define Sprite_SetFacing ((void (*)(void *, int))0x0800ECDB)
#define Sprite_SetBehaviour ((void (*)(void *, void *))0x0800ED19)
#define GetFlag ((int (*)(void *, int))0x08004365)
#define PlaySound ((void (*)(void *, void *, int, int))0x0803E379)

struct outfit { u8 form; u8 also; u16 flag; const u16 *name; };  /* flag 0 = always available */
extern const u16 outfit_index[9][2];           /* first entry, count, per character */
extern const struct outfit outfit_table[];
extern const u8 form_table[];

static u32 *field(void *obj, int off) { return (u32 *)((u8 *)obj + off); }

static void snapshot(void *obj) {
    int i;
    if (SNAP_OWNER == ((u32)obj ^ SNAP_MAGIC)) return;
    for (i = 0; i < 9; i++) SNAP_FORMS[i] = FORM_OF(i);
    SNAP_OWNER = (u32)obj ^ SNAP_MAGIC;
}

static void cycle(void *obj, int dir) {
    int sel = *field(obj, OBJ_SELECTED), c = *field(obj, OBJ_LIST + sel * 8), i, at = -1, n, first, cur;
    void *sprite = (void *)*field(obj, OBJ_LIST + 4 + sel * 8);
    if (c < 0 || c > 8) return;
    first = outfit_index[c][0]; n = outfit_index[c][1]; cur = FORM_OF(c);
    for (i = 0; i < n; i++) if (outfit_table[first + i].form == cur || outfit_table[first + i].also == cur) at = i;
    if (at < 0 || n < 2) return;       /* transformed or story form: leave it alone */
    for (i = 1; i < n; i++) {
        const struct outfit *o = &outfit_table[first + (at + dir * i + n * 2) % n];
        if (o->flag && !GetFlag((void *)0x03001068, o->flag)) continue;
        snapshot(obj);
        FORM_OF(c) = o->form;
        Sprite_SetCharacter(sprite, Form_Sprite((void *)(form_table + o->form * 24)));
        Sprite_SetFacing(sprite, 1);
        Sprite_SetBehaviour(sprite, (void *)0x03001B58);
        PlaySound((void *)0x03003E5C, (void *)SOUND_MOVE, 0x40, 0);
        return;
    }
}

#define LABEL_OWNER (*(u32 *)0x0203FF30)
#define LABEL_WIDGET (*(u32 **)0x0203FF34)
#define NewText ((u32 *(*)(void *, void *, int, int, const u16 *, int, int, void *))0x08014125)
#define AddWidget ((void (*)(void *, void *))0x0800664F)
static const u16 no_name[] = {0};

/* The outfit name under the sprites follows the highlighted character. Setting +0x110 to 0 makes the screen redraw. */
static void update_label(void *obj) {
    int sel = *field(obj, OBJ_SELECTED), c = *field(obj, OBJ_LIST + sel * 8), i, first, n;
    const u16 *name = no_name;
    if (LABEL_OWNER != ((u32)obj ^ SNAP_MAGIC)) {
        LABEL_WIDGET = NewText(0, obj, 0x78, 0x70, no_name, 5, 1, (void *)FONT);
        AddWidget(obj, LABEL_WIDGET);
        LABEL_OWNER = (u32)obj ^ SNAP_MAGIC;
    }
    if (c >= 0 && c <= 8) {
        first = outfit_index[c][0]; n = outfit_index[c][1];
        if (n > 1)
            for (i = 0; i < n; i++)
                if (outfit_table[first + i].form == FORM_OF(c) || outfit_table[first + i].also == FORM_OF(c)) name = outfit_table[first + i].name;
    }
    if ((const u16 *)LABEL_WIDGET[5] != name) {
        LABEL_WIDGET[5] = (u32)name;
        *field(obj, 0x110) = 0;
    }
}

/* Scrolling row: the highlighted character sits in the middle, neighbours at one spacing, and the rest off screen. */
#define SCROLL (*(int *)0x0203FF38)
#define SPACING 0x48
#define CENTRE 0x78
#define OBJ_COUNT 0x114
#define SPRITE_X 0x6C

static void scroll_row(void *obj, int first_frame) {
    int sel = *field(obj, OBJ_SELECTED), n = *field(obj, OBJ_COUNT), want = sel * SPACING, i;
    if (first_frame) SCROLL = want;
    if (SCROLL < want) { SCROLL += 8; if (SCROLL > want) SCROLL = want; }
    if (SCROLL > want) { SCROLL -= 8; if (SCROLL < want) SCROLL = want; }
    for (i = 0; i < n; i++) {
        u8 *sprite = (u8 *)*field(obj, OBJ_LIST + 4 + i * 8);
        int x = CENTRE + i * SPACING - SCROLL;
        *(int *)(sprite + SPRITE_X) = (x < 0x28 || x > 0xC8) ? 0x100 : x;
    }
}

int picker_update(void *obj) {
    int first = LABEL_OWNER != ((u32)obj ^ SNAP_MAGIC), r;
    if (KEYS_NEW & KEY_UP) cycle(obj, -1);
    else if (KEYS_NEW & KEY_DOWN) cycle(obj, 1);
    update_label(obj);
    r = orig_update(obj);
    scroll_row(obj, first);
    return r;
}

int picker_input(void *obj, void *widget, int id, int extra) {
    if (id == 0 || id == 1) LABEL_OWNER = 0;
    if ((id == 0 || id == 1) && SNAP_OWNER == ((u32)obj ^ SNAP_MAGIC)) {
        if (id == 1) { int i; for (i = 0; i < 9; i++) FORM_OF(i) = SNAP_FORMS[i]; }
        SNAP_OWNER = 0;
    }
    return orig_input(obj, widget, id, extra);
}

/* Great Saiyaman stays a skill. It returns to whichever outfit Gohan wore, so the outfit survives the costume change and saving. */
extern const u8 saiyaman_map[][2];
extern const int saiyaman_count;
int saiyaman_in(int cur) {
    int i;
    for (i = 0; i < saiyaman_count; i++) if (saiyaman_map[i][0] == cur) return saiyaman_map[i][1];
    return 14;
}
int saiyaman_out(int cur) { return form_table[cur * 24 + 0x17]; }
__asm__(
".syntax unified\n.thumb\n.global saiyaman_hook_in, saiyaman_hook_out\n.thumb_func\nsaiyaman_hook_in:\n"
"push {lr}\nldrb r0, [r5, #0x14]\nbl saiyaman_in\nstrb r0, [r5, #0x14]\nmovs r1, #24\nmuls r0, r1\nadds r0, r0, r6\npop {r1}\nadds r1, #5\nbx r1\n"
".thumb_func\nsaiyaman_hook_out:\npush {lr}\nldrb r0, [r5, #0x14]\nbl saiyaman_out\nstrb r0, [r5, #0x14]\nmovs r1, #24\nmuls r0, r1\nadds r0, r0, r6\nldr r2, =0x0801711D\nbl 1f\npop {r1}\nadds r1, #7\nbx r1\n1: bx r2\n.ltorg\n");

/* Charged melee, from Legacy of Goku II: hold A until charged, release for one strong hit. Melee and movement states
   call these wrappers once per frame. The hit reuses the game's melee code with temporarily raised strength. */
#define CHARGE_FRAMES 30
#define CHARGE_COUNT (*(u16 *)0x0203FF3C)
#define CURRENT_CHARACTER (*(u8 *)0x03001068)
#define COMBAT_AREA (*(u32 *)0x03001988)
#define Melee ((void (*)(void *))0x08012A25)
#define SpriteSlot ((void (*)(void *, int))0x0800ECDB)
#define CALL_V(obj, off) ((u32 (*)(void *, ...))(*(u32 *)(obj) + *(int *)(*(u32 *)(obj) + (off))))

static int has_slot(void *player, int slot) {
    u8 *actor = (u8 *)*(u32 *)((u8 *)player + 0x58);
    return (*(u32 *)actor & 0xFF) > (u32)slot && *(u32 *)(actor + 0x54 + slot * 4) != 0;
}

#define SLOT_CHARGE 22
#define SLOT_HIT 23
static int has_slot(void *player, int slot);
static void play_slot(void *player, int slot);
/* Same hit as the game's melee (sub_08012A24), with its 0x400 power value raised. */
#define CHARGED_POWER 0xA00
#define RectAt ((void (*)(void *, const void *, int *))0x08052FD5)
#define HitObjects ((int (*)(void *, int, void *))0x08011C0D)
#define Random ((int (*)(int))0x0803FACD)
#define Quake ((void (*)(int, int))0x0800797D)
static void charged_hit(void *player) {
    u32 hit[16];
    int pos[2], i, *p = (int *)player;
    for (i = 0; i < 16; i++) hit[i] = 0;
    pos[0] = p[0x68] >> 8; pos[1] = p[0x69] >> 8;
    *(u8 *)&hit[0] = 1;
    RectAt(&hit[1], (const u8 *)MELEE_RECTS + *((u8 *)player + 0x10) * 0x10, pos);
    *(u8 *)&hit[5] = *((u8 *)player + 0x10);
    hit[6] = CHARGED_POWER;
    hit[7] = 0x086B8098;
    hit[8] = (u32)player;
    hit[12] = (u32)player;
    if (HitObjects((void *)0x03001C4C, 0, hit)) {
        PlaySound((void *)0x03003E5C, (u8 *)SOUND_HIT + (Random(2) + 0x30) * 12, 0x40, 0);
        Quake(0xF, 0x4B);
    }
    CALL_V(player, 0x28)(player, 4 + Random(3));
    if (has_slot(player, SLOT_HIT)) play_slot(player, SLOT_HIT);
}


static void play_slot(void *player, int slot) {
    SpriteSlot(player, slot);
    *(u32 *)((u8 *)player + 0x4C) = 0;      /* the halo table has no entries past slot 21 */
    *((u8 *)player + 0x11) = 0;
    *(u16 *)((u8 *)player + 0x12) = 0;
}

/* The arms-raised or LoG2 charge pose, shown while standing still. */
static void charge_pose(void *player) {
    int slot = has_slot(player, SLOT_CHARGE) ? SLOT_CHARGE : 13;
    u8 *actor = (u8 *)*(u32 *)((u8 *)player + 0x58);
    if (!has_slot(player, slot)) return;
    if (*(u32 *)((u8 *)player + 0x50) == *(u32 *)(actor + 0x54 + slot * 4)) return;
    play_slot(player, slot);
}

static void charged_melee(void *player) {
    u8 *input = (u8 *)CALL_V(player, 0x84)(player);
    int held = *(u16 *)(input + 2) & 1, n = CHARGE_COUNT;
    if (!COMBAT_AREA) { CHARGE_COUNT = 0; return; }
    if (held) {
        if (n < 255) CHARGE_COUNT = ++n;
        if (n == CHARGE_FRAMES) PlaySound((void *)0x03003E5C, (void *)SOUND_MOVE, 0x40, 0);
        if (n >= CHARGE_FRAMES && !(*(u16 *)(input + 2) & 0xF0)) charge_pose(player);
        return;
    }
    CHARGE_COUNT = 0;
    if (n >= CHARGE_FRAMES) charged_hit(player);
}

typedef void (*state_fn)(void *, void *, int, int);
#define WRAP(name, addr) void name(void *s, void *p, int a, int b) { charged_melee(p); ((state_fn)(addr))(s, p, a, b); }
WRAP(state_a, 0x08012D8B)
WRAP(state_b, 0x08012DEF)
WRAP(state_c, 0x08013023)
WRAP(state_d, 0x080131BB)


/* Select Game: a save this ROM can't place (say another game's save that the emulator attached) used to stop the game with
   "Unable to find area". Such a slot now reads as empty, so it shows New Game. */
int slot_read(u8 *buffer, int slot)
{
    int result = ((int (*)(u8 *, int))0x080048A1)(buffer, slot);
    if (buffer[1] & 1) {
        const u8 *row = *(const u8 **)0x08008A58;
        int n = ((int (*)(void))0x080125E1)();
        while (n > 0 && (row[0] != buffer[0x8A0] || row[1] != buffer[0x8A1])) { row += 56; n--; }
        if (n <= 0) buffer[1] &= ~1;
    }
    return result;
}

void *slot_area(u8 *buffer)
{
    return ((void *(*)(int, int))0x080089FD)(buffer[0x8A0], buffer[0x8A1]);
}
