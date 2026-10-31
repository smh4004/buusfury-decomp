/* sub_0800FE34  (original: 0x0800FE34-0x0800FE78 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int * sub_0800FE34(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(int *)(param_2 + 0x1a0) >> 8) + (int)*(char *)(*(int *)(param_2 + 0x54) + 4);
  iVar4 = (*(int *)(param_2 + 0x1a4) >> 8) + (int)*(char *)(*(int *)(param_2 + 0x54) + 5);
  bVar1 = *(byte *)(*(int *)(param_2 + 0x54) + 6);
  bVar2 = *(byte *)(*(int *)(param_2 + 0x54) + 7);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar3 + (uint)bVar1;
  param_1[3] = iVar4 + (uint)bVar2;
  return param_1 + 4;
}

