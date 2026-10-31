/* sub_0803F9D4  (original: 0x0803F9D4-0x0803FA0A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0804918C();


void sub_0803F9D4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int a0;
  int iVar3;
  
  iVar2 = param_2[2];
  iVar1 = *param_2;
  a0 = *(int *)(param_1 + 0x28) * param_2[1] + *(int *)(param_1 + 0x24) + iVar1;
  for (iVar3 = param_2[3] - param_2[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    sub_0804918C(a0,a0,param_3,iVar2 - iVar1);
    a0 = *(int *)(param_1 + 0x28) + a0;
  }
  return;
}

