/* sub_0800FE78  (original: 0x0800FE78-0x0800FEE2 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0800FE78(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 0x58) + (uint)*(byte *)(param_2 + 0x10) * 0x10;
  iVar5 = *(int *)(param_2 + 0x1a0) >> 8;
  iVar3 = *(int *)(param_2 + 0x1a4) >> 8;
  iVar6 = *(int *)(iVar1 + 0x14);
  iVar4 = *(int *)(iVar1 + 0x18);
  iVar2 = *(int *)(iVar1 + 0x1c);
  *param_1 = *(int *)(iVar1 + 0x10) + iVar5;
  param_1[1] = iVar6 + iVar3;
  param_1[2] = iVar4 + iVar5;
  param_1[3] = iVar2 + iVar3;
  return;
}

