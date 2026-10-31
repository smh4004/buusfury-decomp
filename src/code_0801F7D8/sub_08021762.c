/* sub_08021762  (original: 0x08021762-0x080217AC in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08021762(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = *(char **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x20) - (int)*pcVar3;
  *(int *)(param_1 + 0x10) = iVar5;
  iVar6 = *(int *)(param_1 + 0x24) - (int)pcVar3[1];
  *(int *)(param_1 + 0x14) = iVar6;
  bVar1 = pcVar3[2];
  iVar4 = iVar6 + (uint)(byte)pcVar3[3];
  *(int *)(param_1 + 0x1c) = iVar4;
  *(uint *)(param_1 + 0x18) = iVar5 + (uint)bVar1;
  if ((((iVar5 < 0xf0) && (0 < (int)(iVar5 + (uint)bVar1))) && (iVar6 < 0xa0)) && (0 < iVar4)) {
    *(int *)(param_1 + 4) = iVar4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

