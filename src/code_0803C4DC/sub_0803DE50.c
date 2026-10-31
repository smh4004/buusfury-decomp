/* sub_0803DE50  (original: 0x0803DE50-0x0803DE6A in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_0803DE50(int param_1,undefined4 param_2)

{
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(undefined4 *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  local_c = *(undefined4 *)(param_1 + 4);
  local_8 = *(int *)(param_1 + 8) + -0xc;
  __call_via_r3(param_1,param_2,&local_c,*(undefined4 *)(param_1 + 0x20));
  return;
}

