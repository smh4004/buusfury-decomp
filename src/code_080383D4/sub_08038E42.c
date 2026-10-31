/* sub_08038E42  (original: 0x08038E42-0x08038E8A in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B8118;


void sub_08038E42(int param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_34 (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_30 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_2c (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_24 (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_10 (*(int *)((char *)__frame + 0x30))
  do {
    iStack_10 = param_1;
    *(undefined1 *)(iStack_10 + 0x40) = 1;
    param_1 = *(int *)(iStack_10 + 0x48);
  } while (*(int *)(iStack_10 + 0x48) != 0);
  uStack_20 = *(undefined4 *)(iStack_10 + 0x1c);
  uStack_2c = *(undefined1 *)(iStack_10 + 0x10);
  puStack_24 = &gUnknown_086B8118;
  uStack_28 = 0xa00;
  auStack_40[0] = 1;
  uStack_3c = *(undefined4 *)(iStack_10 + 0x28);
  uStack_38 = *(undefined4 *)(iStack_10 + 0x2c);
  uStack_34 = *(undefined4 *)(iStack_10 + 0x30);
  uStack_30 = *(undefined4 *)(iStack_10 + 0x34);
  sub_08011C0C(&DAT_03001c4c,0,auStack_40);
  return;
}

