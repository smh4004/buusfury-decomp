/* sub_0803AF58  (original: 0x0803AF58-0x0803AFA6 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


bool sub_0803AF58(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar2 = iVar1;
  if (iVar1 < *param_2) {
    iVar2 = *param_2;
  }
  if (param_2[2] < iVar2) {
    iVar2 = param_2[2];
  }
  iVar4 = iVar3;
  if (iVar3 < param_2[1]) {
    iVar4 = param_2[1];
  }
  if (param_2[3] < iVar4) {
    iVar4 = param_2[3];
  }
  return (iVar1 - iVar2) * (iVar1 - iVar2) + (iVar3 - iVar4) * (iVar3 - iVar4) <
         *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x10) >> 0x10;
}

