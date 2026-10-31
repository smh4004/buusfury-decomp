/* Phase 4 experiment: script VM opcode handlers 0x08003C74.. (see docs/decomp_scope.md) */
struct VMStack { int sp; int v[1]; };
typedef void (*NativeFn)(struct VMStack *);
extern NativeFn gScriptNativeFuncs[];

void ScriptOp_00(struct VMStack *s, unsigned char **ip)      /* push u8 */
{
    unsigned char *p = *ip;
    *ip = p + 1;
    s->v[s->sp++] = *p;
}

void ScriptOp_01(struct VMStack *s, unsigned char **ip)      /* push varint */
{
    int v = 0;
    unsigned char c;
    do {
        c = *(*ip)++;
        v = (v << 7) + (c & 0x7F);
    } while (c & 0x80);
    if (v & 1) v = -(v >> 1); else v >>= 1;
    s->v[s->sp++] = v;
}

void ScriptOp_02(struct VMStack *s, unsigned char **ip)      /* call native[u8] */
{
    gScriptNativeFuncs[*(*ip)++](s);
}
