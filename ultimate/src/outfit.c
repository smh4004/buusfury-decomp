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

struct outfit { u8 form; u8 pad; u16 flag; };  /* flag 0 = always available */
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

int picker_update(void *obj) {
    if (KEYS_NEW & KEY_UP) cycle(obj, -1);
    else if (KEYS_NEW & KEY_DOWN) cycle(obj, 1);
    return orig_update(obj);
}

int picker_input(void *obj, void *widget, int id, int extra) {
    if ((id == 0 || id == 1) && SNAP_OWNER == ((u32)obj ^ SNAP_MAGIC)) {
        if (id == 1) { int i; for (i = 0; i < 9; i++) FORM_OF(i) = SNAP_FORMS[i]; }
        SNAP_OWNER = 0;
    }
    return orig_input(obj, widget, id, extra);
}
