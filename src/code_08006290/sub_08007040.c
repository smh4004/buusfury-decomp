/* sub_08007040  (original: 0x08007040-0x08007064 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800965C();
extern undefined4 volatile DAT_030019a4;


void sub_08007040(int *param_1)

{
  __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
  sub_0800965C(&DAT_030019a4);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x28) + *param_1);
  return;
}

