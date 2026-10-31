/* sub_0800ED80  (original: 0x0800ED80-0x0800EDA6 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800ED80(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 0xc) + iVar1,param_4,param_4);
  *(int **)(param_1 + 0x18) = param_2;
  __call_via_r2(param_2,param_1,*(int *)*param_2 + *param_2);
  return;
}

