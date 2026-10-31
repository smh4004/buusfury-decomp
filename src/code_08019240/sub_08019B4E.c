/* sub_08019B4E  (original: 0x08019B4E-0x08019B7C in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08019B4E(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  iVar4 = (*(int *)(param_1 + 0x20) >> 8) - (int)*pcVar2;
  *(int *)(param_1 + 0x28) = iVar4;
  iVar3 = *(int *)(param_1 + 0x24) >> 8;
  iVar5 = iVar3 - pcVar2[1];
  *(int *)(param_1 + 0x2c) = iVar5;
  bVar1 = pcVar2[2];
  *(uint *)(param_1 + 0x34) = iVar5 + (uint)(byte)pcVar2[3];
  *(int *)(param_1 + 4) = iVar3;
  *(uint *)(param_1 + 0x30) = iVar4 + (uint)bVar1;
  return;
}

