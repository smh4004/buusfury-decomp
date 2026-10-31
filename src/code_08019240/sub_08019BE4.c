/* sub_08019BE4  (original: 0x08019BE4-0x08019BF4 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08019BE4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}

