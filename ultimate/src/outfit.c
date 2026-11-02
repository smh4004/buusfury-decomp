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

struct outfit { u8 form; u8 pad; u16 flag; const u16 *name; };  /* flag 0 = always available */
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
    for (i = 0; i < n; i++) if (outfit_table[first + i].form == cur) at = i;
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
                if (outfit_table[first + i].form == FORM_OF(c)) name = outfit_table[first + i].name;
    }
    if ((const u16 *)LABEL_WIDGET[5] != name) {
        LABEL_WIDGET[5] = (u32)name;
        *field(obj, 0x110) = 0;
    }
}

int picker_update(void *obj) {
    if (KEYS_NEW & KEY_UP) cycle(obj, -1);
    else if (KEYS_NEW & KEY_DOWN) cycle(obj, 1);
    update_label(obj);
    return orig_update(obj);
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
