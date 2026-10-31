/* sub_08020CB8  (original: 0x08020CB8-0x08020CC8 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08020CB8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}

