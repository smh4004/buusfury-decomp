/* sub_08006290  (original: 0x08006290-0x080062D8 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803F58C();
extern int sub_0803F540();
extern int sub_08049150();
extern int sub_08006718();


void sub_08006290(int param_1)

{
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_44 ((undefined1 *)((char *)__frame + 0x0))
  *(uint *)(*(int *)(param_1 + 0x11c) + 8) = (uint)(2 < *(int *)(param_1 + 0x10c));
  sub_0803F540(auStack_44,0xf0,0xa0);
  sub_08006718(param_1,auStack_44,2,1);
  sub_08049150((int)auStack_44,0x6000040);
  sub_0803F58C(auStack_44,0);
  return;
}

