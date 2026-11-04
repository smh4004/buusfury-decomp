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

/* The guest slot has one skill list but different fighters, so the list follows the outfit. A story form (Hercule, say) leaves it alone. */
static void guest_sync(void) {
    static const u8 broly[] = {3, 7, 8, ERASER_SKILL}, thirteen[] = {3, 7, 8, BOMBER_SKILL}, piccolo[] = {3, 7, 17, BEAM_SKILL},
        fighter[] = {2, 7, 8}, a17[] = {3, 7, 8, BLITZ_SKILL}, a18[] = {3, 7, BLITZ_SKILL, DISC_SKILL}, krillin[] = {3, 7, 15, DISC_SKILL}, videl[] = {1, 7},
        trunks[] = {4, 7, 20, 4, 11};            /* Future Trunks: the same moves as Trunks */
    u8 *r = RECORDS + 8 * RECORD_SIZE;
    int form = FORM_OF(8), i;
    const u8 *list;
    if (form == FORM_BROLY || form == FORM_FP) list = broly;
    else if (form == FORM_A13 || form == FORM_S13) list = thirteen;
    else if (form == FORM_PICCOLO) list = piccolo;
    else if (form == FORM_ANDROID17) list = a17;
    else if (form == FORM_ANDROID18) list = a18;
    else if (form == FORM_KRILLIN) list = krillin;
    else if (form == FORM_VIDEL) list = videl;
    else if (form == FORM_FUTURE_TRUNKS) list = trunks;
    else if (form == FORM_KID_BUU || form == FORM_MAJIN_BUU || form == FORM_JANEMBA) list = fighter;
    else return;
    r[0x0C] = list[0];
    for (i = 0; i < list[0]; i++) r[0x0D + i] = list[i + 1];
    if (r[0x15] >= r[0x0C]) r[0x15] = 0;
}

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
        guest_sync();
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

/* The story borrows the guest slot for Hercule and Android 18. Afterwards it holds that form, which the guest's outfit list doesn't have,
   so a joined guest comes back in the first outfit it has unlocked when the screen opens. Skipped if that form is the one being played. */
static void restore_borrowed(void *obj) {
    int n = *field(obj, OBJ_COUNT), s, i;
    for (s = 0; s < n; s++) {
        int c = *field(obj, OBJ_LIST + s * 8), first, count, have = 0;
        if (c != 7 && c != 8) continue;
        if (c == *(u8 *)0x03001068) continue;
        first = outfit_index[c][0]; count = outfit_index[c][1];
        for (i = 0; i < count; i++) if (outfit_table[first + i].form == FORM_OF(c) || outfit_table[first + i].also == FORM_OF(c)) have = 1;
        if (have) continue;
        for (i = 0; i < count; i++) {
            const struct outfit *o = &outfit_table[first + i];
            if (o->flag && !GetFlag((void *)0x03001068, o->flag)) continue;
            FORM_OF(c) = o->form;
            guest_sync();
            Sprite_SetCharacter((void *)*field(obj, OBJ_LIST + 4 + s * 8), Form_Sprite((void *)(form_table + o->form * 24)));
            Sprite_SetFacing((void *)*field(obj, OBJ_LIST + 4 + s * 8), 1);
            Sprite_SetBehaviour((void *)*field(obj, OBJ_LIST + 4 + s * 8), (void *)0x03001B58);
            break;
        }
    }
}

int picker_update(void *obj) {
    int first = LABEL_OWNER != ((u32)obj ^ SNAP_MAGIC), r;
    if (first) restore_borrowed(obj);
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
        if (id == 1) { int i; for (i = 0; i < 9; i++) FORM_OF(i) = SNAP_FORMS[i]; guest_sync(); }
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
static int spirit_tick(void *player);
#define WRAP(name, addr) void name(void *s, void *p, int a, int b) { if (spirit_tick(p)) return; charged_melee(p); ((state_fn)(addr))(s, p, a, b); }
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


/* Spirit Bomb (skill 19). Goku holds his arms up while the game's own ending disc grows over his head, then it flies the way he
   faces and bursts, hitting everything nearby hard. It needs no action object: the movement states call spirit_tick each frame.
   The disc takes effect slot 0; whatever was there goes back afterwards. */
#define Enough ((int (*)(void *, int))0x080134B9)
#define Spend ((void (*)(void *, int))0x08013599)
#define NativeDisc ((void (*)(int *))0x08003B95)
#define NativeAlpha ((void (*)(int *))0x08000959)
#define NativeFlash ((void (*)(int *))0x08001305)
#define SetEffect ((void (*)(void *, int, void *))0x0800927F)
#define EFFECTS (*(u32 **)(*(u32 *)0x08003C44 + 0x10))
#define ALPHA_MIRROR (*(u8 **)0x08009900)
struct spirit { u16 frame; u16 phase; int x, y, r; void *old, *old3; u32 ticker[2]; u8 eva, evb; u16 backdrop; u8 dir, speed; u16 travelled; };
extern const int spirit_vt[6];
#define SB (*(struct spirit *)0x0203FF40)
#define GROW_FRAMES 90
#define WINDUP_FRAMES 10
#define THROW_HOLD 22
#define THROW_DISTANCE 130
#define BURST_FRAMES 24
#define SPIRIT_POWER 0x8000
static const int BURST_RECT[4] = {-100, -80, 200, 160};   /* x, y, width, height */

static int spirit_cost(u8 *rec) { int c = *(u16 *)(rec + 0x1C) / 2; return c < 30 ? 30 : c; }

int spirit_usable(u8 *rec)
{
    if (!COMBAT_AREA || SB.phase) return 0;
    return Enough(rec, spirit_cost(rec));
}

/* The disc is filled with one palette colour, the game's 80 by default, which is pale. Its own entry (BOMB_INDEX) pulses deep blue to pale for the
   bomb's life, and goes back afterwards. */
#define BLDCNT (*(volatile u16 *)0x04000050)
#define BLDY (*(volatile u16 *)0x04000054)
#define BOMB_PAL ((volatile u16 *)0x05000000)[BOMB_INDEX]
#define BOMB_INDEX 255
static u16 *const BOMB_OLD = (u16 *)0x0203FF78;
static void bomb_glow(int frame)
{
    BOMB_PAL = 0x7F80;          /* a steady cyan */
    (void)frame;
}

static void spirit_draw(void)
{
    int st[5] = {4, SB.x, SB.y, SB.r, BOMB_INDEX};
    NativeDisc(st);
    bomb_glow(SB.frame);
}

/* Impact frames: the whole screen white, black, then white, a few frames each. Keep BLDCNT's other bits for afterwards. */
static void impact(int step)
{
    if (step == 0) { *BOMB_OLD = BLDCNT; }
    if (step < 3 || (step >= 6 && step < 9)) { BLDCNT = 0x00BF; BLDY = 16; }
    else if (step < 6) { BLDCNT = 0x00FF; BLDY = 16; }
    else { BLDCNT = *BOMB_OLD; BLDY = 0; }
}

#define SLOT_ARMS_UP 12
#define SLOT_THROW 8
static void slot_pose(void *player, int slot) {
    u8 *actor = (u8 *)*(u32 *)((u8 *)player + 0x58);
    if (!has_slot(player, slot)) return;
    if (*(u32 *)((u8 *)player + 0x50) == *(u32 *)(actor + 0x54 + slot * 4)) return;
    play_slot(player, slot);
}

/* Script native bomb_fx(n) for the story's Spirit Bomb: 1 glow on, 0 glow off, 2 one frame of the impact sequence starting over */
void bomb_fx(int *sp)
{
    int n = *sp, v = sp[n];
    if (v == 1) {
        void *player = *(void **)0x03001C34;
        if (!SB.phase) SB.phase = 9;
        SB.frame++; bomb_glow(SB.frame);
        if (player) slot_pose(player, SLOT_ARMS_UP);
    }
    else if (v == 0) { SB.phase = 0; BLDY = 0; }      /* the next room reloads the palette; restoring it here would turn the disc dull during the fade */
    else { impact(v - 2); }
    *sp = n - 1;
}

static void spirit_end(void)
{
    BOMB_PAL = SB.backdrop;
    SetEffect(EFFECTS, 0, SB.old);
    ALPHA_MIRROR[2] = SB.eva; ALPHA_MIRROR[3] = SB.evb;
    SB.phase = 0;
    EFFECTS[3] = SB.old3;
    { int st[6] = {5, 5, 200, 200, 255, 10}; NativeFlash(st); }      /* takes an effect slot itself, so only once the bomb has let go */
}

const int spirit_vt[6] = {0x53A1, 0x53A2, 0x53A3, 0x53A4, 0x53A5, 0x53A6};   /* offsets from itself, filled in by build.py */

void spirit_use(u8 *rec, void *player)
{
    int *p = (int *)player, st[3] = {2, 100, 15};
    Spend(rec, spirit_cost(rec));
    SB.old = (void *)EFFECTS[0];
    EFFECTS[0] = 0;
    SB.eva = ALPHA_MIRROR[2]; SB.evb = ALPHA_MIRROR[3]; SB.backdrop = BOMB_PAL;
    NativeAlpha(st);
    SB.x = p[0x68] >> 8; SB.y = (p[0x69] >> 8) - 58; SB.r = 4;
    SB.frame = 0; SB.phase = 1;
    SB.old3 = (void *)EFFECTS[3];
    SB.ticker[0] = (u32)spirit_vt;
    EFFECTS[3] = (u32)SB.ticker;
    PlaySound((void *)0x03003E5C, (void *)SOUND_MOVE, 0x40, 0);
    spirit_draw();
}

static void spirit_burst(void *player)
{
    u32 hit[16];
    int pos[2], i;
    for (i = 0; i < 16; i++) hit[i] = 0;
    pos[0] = SB.x; pos[1] = SB.y;
    *(u8 *)&hit[0] = 1;
    RectAt(&hit[1], BURST_RECT, pos);
    *(u8 *)&hit[5] = *((u8 *)player + 0x10);
    hit[6] = SPIRIT_POWER;
    hit[7] = 0x086B8098;
    hit[8] = (u32)player;
    hit[12] = (u32)player;
    HitObjects((void *)0x03001C4C, 0, hit);
    Quake(0x20, 0x4B);
    PlaySound((void *)0x03003E5C, (u8 *)SOUND_HIT + 0x30 * 12, 0x40, 0);
}

/* The bomb keeps going even if Goku is knocked about, so it runs from an effect slot, which the game updates every frame. */
void spirit_nop(void) {}

void spirit_update(void)
{
    void *player = *(void **)0x03001C34;
    SB.frame++;
    if (SB.phase == 1) {
        if (SB.r < 48 && SB.frame % 2 == 0) SB.r++;
        spirit_draw();
        if (SB.frame >= GROW_FRAMES) { SB.phase = 2; SB.frame = 0; SB.dir = *((u8 *)player + 0x10); SB.speed = 0; SB.travelled = 0; }
    } else if (SB.phase == 2) {
        /* The throw: the bomb rises a little over the raised arms, then goes the way Goku faced, picking up speed until it lands. */
        if (SB.frame <= WINDUP_FRAMES) SB.y -= 1;
        else {
            if (SB.speed < 7 && SB.frame % 3 == 0) SB.speed++;
            if (SB.dir == 0) SB.y += SB.speed; else if (SB.dir == 1) SB.y -= SB.speed; else if (SB.dir == 2) SB.x -= SB.speed; else SB.x += SB.speed;
            SB.travelled += SB.speed;
        }
        spirit_draw();
        if (SB.travelled >= THROW_DISTANCE) { spirit_burst(player); SB.phase = 3; SB.frame = 0; }
    } else if (SB.phase == 3) {
        if (SB.r < 96) SB.r += 4;                         /* much larger than this hangs the disc code */
        spirit_draw();
        if (SB.frame <= 10) impact(SB.frame - 1);
        if (SB.frame % 6 == 0) spirit_burst(player);      /* it keeps hitting as it bursts */
        if (SB.frame >= BURST_FRAMES) spirit_end();
    }
}

void spirit_destroyed(void) { SB.phase = 0; }     /* a new area clears every effect, this one included */

/* Non-zero while Goku is busy with the bomb: the state's normal update is skipped so he stands still. */
static int spirit_tick(void *player)
{
    if (SB.phase == 1) { slot_pose(player, SLOT_ARMS_UP); return 1; }     /* the arms-up pose of the Kid Buu fight */
    if (SB.phase == 2) {
        if (SB.frame <= WINDUP_FRAMES) { slot_pose(player, SLOT_ARMS_UP); return 1; }
        if (SB.frame <= WINDUP_FRAMES + THROW_HOLD) { slot_pose(player, SLOT_THROW); return 1; }
    }
    return 0;
}

/* Script native add_zenie(amount): the World Tournament's prize. */
void add_zenie(int *sp) {
    int n = *sp;
    *(u32 *)0x0300155C += sp[n];
    *sp = n - 1;
}

/* World Tournament bracket: each round's opponent lives in three story flags, kept with the save. */
#define FLAG_BYTE(f) (*(volatile u8 *)(0x03001068 + 0x55 + (f) / 8))
void tour_pick(int *sp) {
    int n = *sp, round = sp[n - 1], place = sp[n], i;
    for (i = 0; i < 3; i++) {
        int f = TOUR_PICK_FLAG + 3 * round + i;
        if (place >> i & 1) FLAG_BYTE(f) |= 1 << (f % 8);
        else FLAG_BYTE(f) &= ~(1 << (f % 8));
    }
    *sp = n - 2;
}
void tour_get(int *sp) {
    int n = *sp, round = sp[n], place = 0, i;
    for (i = 0; i < 3; i++) {
        int f = TOUR_PICK_FLAG + 3 * round + i;
        place |= (FLAG_BYTE(f) >> (f % 8) & 1) << i;
    }
    sp[n] = place;
}

/* Trailer build only: push a warp's arguments (world, area, 1, x, y) from RAM a filming script pokes. */
void trailer_warp(int *sp) {
    int n = *sp, i;
    for (i = 0; i < 5; i++) sp[n + 1 + i] = ((volatile int *)0x0203FF60)[i];
    *sp = n + 5;
}

void trailer_slot(int *sp) {
    int n = *sp;
    sp[n + 1] = ((volatile int *)0x0203FF60)[5];
    *sp = n + 1;
}

/* Script native party_join(character, form). The first time a post-game character joins, they start level with whoever is playing, leaning towards
   how they fight, with their own skills. Later calls change nothing, so an outfit chosen earlier stays on. */
#define REC(c) (RECORDS + (c) * RECORD_SIZE)
#define R16(r, o) (*(u16 *)((r) + (o)))
#define EXP(r) (*(u32 *)((r) + 0x24))
static const u8 gogeta_skills[] = {5, 7, 3, 5, 20, 21};     /* count, his own three, Super Saiyan, Super Saiyan Blue */
static int scale(int v, int pct) { v = v * pct / 100; return v > 255 ? 255 : v; }
void party_join(int *sp) {
    int n = *sp, form = sp[n], c = sp[n - 1], i;
    u8 *r = REC(c), *cur = REC(*(u8 *)0x03001068);
    const u8 *skills = gogeta_skills;
    static const u8 lean[2][3] = {{110, 110, 110}, {120, 85, 110}};    /* strength, power, endurance: Gogeta, Broly */
    const u8 *l = lean[c == 8];
    *sp = n - 2;
    if (r[0] & 1) return;
    r[0] |= 1;
    FORM_OF(c) = form;
    if (EXP(cur) > EXP(r)) EXP(r) = EXP(cur);
    if (R16(cur, 0x18) > R16(r, 0x18)) R16(r, 0x18) = R16(cur, 0x18);
    if (R16(cur, 0x1C) > R16(r, 0x1C)) R16(r, 0x1C) = R16(cur, 0x1C);
    R16(r, 0x16) = R16(r, 0x18); R16(r, 0x1A) = R16(r, 0x1C);
    for (i = 0; i < 3; i++) {
        int v = scale(cur[0x28 + i], l[i]);
        if (v > r[0x28 + i]) r[0x28 + i] = v;
    }
    if (cur[0x2C] > r[0x2C]) r[0x2C] = cur[0x2C];   /* unspent stat points */
    if (c != 8) {
        r[0x0C] = skills[0];
        for (i = 0; i < skills[0]; i++) r[0x0D + i] = skills[1 + i];
    }
    r[0x15] = 0;
    guest_sync();
}

/* Eraser Cannon and SS Deadly Bomber: Big Bang's code with their own frames and strength. Big Bang's start makes the ball from its parameter table, so this runs it,
   then points the ball at the same entry of the move's table (the last word of an entry scales the damage). */
#define BigBang_Start ((void (*)(u32 *, void *))0x0801A7C1)
#define Alloc ((u32 *(*)(int))0x0803D5B9)
const u32 eraser_params[12] = {1}, bomber_params[12] = {1}, blitz_params[12] = {1}, disc_params[12] = {1};   /* build.py fills these */
const int eraser_vt[9] = {1}, bomber_vt[9] = {1}, blitz_vt[9] = {1}, disc_vt[9] = {1};
static void ball_start(u32 *self, void *player, const u32 *table) {
    u32 *ball;
    BigBang_Start(self, player);
    ball = (u32 *)self[1];
    if (ball) {
        const u32 *mine = &table[self[2] * 4];
        u32 *old = (u32 *)ball[0x4C / 4];
        int shift = (int)mine[2] - (int)old[2];
        ball[0x4C / 4] = (u32)mine;
        ball[0x50 / 4] += shift;
        ball[0x18 / 4] += shift;
    }
}
static void ball_use(u8 *record, void *sprite, const int *vt) {
    int level = record[record[0x15] * 2 + 0x2E];
    u32 *b = Alloc(0x14);
    if (b) { b[0] = (u32)vt; b[2] = level; b[3] = 0; b[4] = 0; }
    Sprite_SetFacing(sprite, 0x12);
    Sprite_SetBehaviour(sprite, b);
}
void blitz_start(u32 *self, void *player) { ball_start(self, player, blitz_params); }
void disc_start(u32 *self, void *player) {     /* a thrown disc flies six times as fast as Big Bang's slow ball */
    ball_start(self, player, disc_params);
    if (self[1]) { u32 *ball = (u32 *)self[1]; ball[0x44 / 4] *= 6; ball[0x48 / 4] *= 6; }
}
void eraser_start(u32 *self, void *player) { ball_start(self, player, eraser_params); }
void bomber_start(u32 *self, void *player) { ball_start(self, player, bomber_params); }
void blitz_use(u8 *record, void *sprite) { ball_use(record, sprite, blitz_vt); }
void disc_use(u8 *record, void *sprite) { ball_use(record, sprite, disc_vt); }
void eraser_use(u8 *record, void *sprite) { ball_use(record, sprite, eraser_vt); }
void bomber_use(u8 *record, void *sprite) { ball_use(record, sprite, bomber_vt); }

/* Special Beam Cannon: the Kamehameha's code with its own frames, the same way. */
#define MemCopy ((void (*)(void *, const void *, int))0x08049139)
#define Kamehameha_Start ((void (*)(u32 *, void *))0x0801BDD5)
const u32 beam_params[12] = {1};
const int beam_vt[9] = {1};
void beam_start(u32 *self, void *player) {
    u32 *beam;
    Kamehameha_Start(self, player);
    beam = (u32 *)self[2];
    if (beam) {                                /* the charging ball's frames, and its first frame already copied to VRAM */
        const u32 *mine = &beam_params[self[3] * 4];
        beam[0x40 / 4] = (u32)mine;
        beam[0x44 / 4] = beam[0x48 / 4] = beam[0x4C / 4] = mine[2];
        MemCopy((u8 *)0x06010000 + *(u16 *)(beam + 3) * 0x20, (void *)((u32 *)mine[2])[2], 0x40);
    }
}
void beam_use(u8 *record, void *sprite) {
    int level = record[record[0x15] * 2 + 0x2E];
    u32 *b = Alloc(0x10);
    if (b) { b[0] = (u32)beam_vt; b[1] = 0; b[3] = level; }
    Sprite_SetFacing(sprite, 0x12);
    Sprite_SetBehaviour(sprite, b);
}

/* Super Saiyan 2 sits between Super Saiyan and the next form with no skill of its own (a character holds six at most): pressing Super Saiyan again goes up to it.
   Forms chain through the table's up: a Super Saiyan form whose up is also Super Saiyan-class (flag bit 0) has SS2 above it. */
#define SS_Use ((void (*)(u8 *, void *))0x0801A513)
#define SS3_Use ((void (*)(u8 *, void *))0x0801A5BD)
#define SS3_Can ((int (*)(u8 *))0x0801A55F)
extern const u8 ss2_rows[];
static int is_ss2(int form) {
    const u8 *p;
    for (p = ss2_rows; *p != 255; p++) if (*p == form) return 1;
    return 0;
}
/* The story sets SS2_FLAG + owner when that character reaches it. Goku learns Super Saiyan 3 in the same scene, so a save made after it counts too. */
static int ss2_open(const u8 *record, int owner) {
    int i;
    if (GetFlag((void *)0x03001068, SS2_FLAG + owner)) return 1;
    for (i = 0; i < record[0x0C]; i++) if (record[0x0D + i] == 22) return 1;
    return 0;
}
static int has_ss2_above(const u8 *record) {
    const u8 *row = form_table + record[0x14] * 24;
    return (row[0] & 1) && row[0x16] != 255 && is_ss2(row[0x16]) && ss2_open(record, row[0x0C]);
}
void ss_use(u8 *record, void *sprite) {
    if (has_ss2_above(record)) SS3_Use(record, sprite);
    else SS_Use(record, sprite);
}
int ss3_can(u8 *record) {       /* Super Saiyan 3 starts from Super Saiyan 2, not from Super Saiyan */
    return has_ss2_above(record) ? 0 : SS3_Can(record);
}
/* Against Super Saiyan's damage, Super Saiyan 2 hits 1.5x as hard and Super Saiyan 3 1.75x. hit[1] is the attack's damage scale (1024 = normal); team 2 is the player's side.
   Damage grows with the cube of the Strength stat, so scaling the stat itself would give about three times the damage.
   Super Saiyan 3 adds 15 to the stats where Super Saiyan adds 5: its attacks count from the Super Saiyan figure, and it keeps the extra Endurance and Speed. */
void combat_orig(void *defender, int *hit);
__asm__(".syntax unified\n.thumb\n.thumb_func\ncombat_orig:\npush {r4, r5, r6, r7, lr}\nadds r6, r0, #0\nadds r4, r1, #0\nadds r1, #8\nldr r3, =0x0800E9E1\nbx r3\n.ltorg\n");
void combat_hook(void *defender, int *hit) {
    int scale = hit[1], form = FORM_OF(*(u8 *)0x03001068);
    u16 *stats = (u16 *)((u8 *)hit[3] + 0x1B0), strength = stats[0], power = stats[1];
    if ((hit[0] & 255) == 2) {
        if (is_ss2(form)) hit[1] = scale + (scale >> 1);
        else if ((form_table[form * 24] & 2) && strength > 10 && power > 10) {
            hit[1] = scale + (scale >> 1) + (scale >> 2);
            stats[0] = strength - 10; stats[1] = power - 10;
        }
    }
    combat_orig(defender, hit);
    hit[1] = scale; stats[0] = strength; stats[1] = power;
}
