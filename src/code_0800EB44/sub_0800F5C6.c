/* sub_0800F5C6  (original: 0x0800F5C6-0x0800F60E in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 56% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800F40E();
extern int sub_080193AE();
extern int __call_via_r2();


int sub_0800F5C6(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0xc) {
    iVar1 = **(int **)(param_1 + 0x14);
    __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 4) + iVar1);
    iVar1 = **(int **)(param_1 + 0x18);
    __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 4) + iVar1);
  }
  iVar1 = sub_080193AE(param_1 + 0x18c,param_2);
  if (iVar1 != 0) {
    return iVar1 + -1;
  }
  iVar1 = sub_0800F40E(param_1,param_2,param_3);
  return iVar1;
}

