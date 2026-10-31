/* sub_080077EC  (original: 0x080077EC-0x08007858 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_08009744();
extern int sub_0800FDFA();
extern undefined4 volatile DAT_030019a4;
extern int volatile DAT_030019a8;


void sub_080077EC(int param_1)

{
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(int *)((char *)__frame + 0x0))
#define local_18 (*(int *)((char *)__frame + 0x4))
#define local_14 (*(int *)((char *)__frame + 0x8))
#define local_10 (*(int *)((char *)__frame + 0xc))
#define local_c (*(int *)((char *)__frame + 0x10))
#define local_8 (*(int *)((char *)__frame + 0x14))
  sub_0800FDFA(&local_14,*(undefined4 *)(param_1 + 4));
  local_1c = ((((local_14 + local_c) / 2 + -0x78) * 0x400 - DAT_030019a4) * 3 >> 6) + DAT_030019a4;
  local_18 = ((((local_10 + local_8) / 2 + -0x54) * 0x400 - DAT_030019a8) * 9 >> 7) + DAT_030019a8;
  sub_08009744(&DAT_030019a4,&local_1c);
  return;
}

