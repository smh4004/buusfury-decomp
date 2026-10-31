/* sub_0800664E  (original: 0x0800664E-0x0800666C in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800664E(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  iVar3 = iVar2 + 1;
  *piVar1 = iVar3;
  piVar1[iVar2 + 1] = (int)param_2;
  iVar2 = *param_2;
  __call_via_r2(param_2,iVar2,*(int *)(iVar2 + 0xc) + iVar2,iVar3,param_4);
  return;
}

