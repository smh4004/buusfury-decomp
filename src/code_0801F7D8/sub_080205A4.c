/* sub_080205A4  (original: 0x080205A4-0x080205E0 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 58% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080205A4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)(iVar1 + 0x1a0);
  *piVar2 = *piVar2 + param_1[3];
  *(int *)(iVar1 + 0x1a4) = *(int *)(iVar1 + 0x1a4) + param_1[4];
  iVar3 = param_1[7];
  param_1[7] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    iVar3 = param_1[6];
    *piVar2 = param_1[5] << 8;
    *(int *)(iVar1 + 0x1a4) = iVar3 << 8;
    param_1[8] = 1;
    iVar1 = *(int *)(*param_1 + 0x14);
    __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  }
  return;
}

