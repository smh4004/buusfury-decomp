/* sub_0800ED18  (original: 0x0800ED18-0x0800ED3E in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800ED18(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 0xc) + iVar1,param_4,param_4);
  *(int **)(param_1 + 0x14) = param_2;
  __call_via_r2(param_2,param_1,*(int *)*param_2 + *param_2);
  return;
}

