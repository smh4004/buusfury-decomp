/* sub_08039EB8  (original: 0x08039EB8-0x08039F08 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


bool sub_08039EB8(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x18) + -1;
  piVar2 = (int *)(param_2 + 0x1a0);
  piVar3 = (int *)(param_2 + 0x1a8);
  *(int *)(param_1 + 0x18) = iVar4;
  if (iVar4 != 0) {
    *piVar2 = *piVar2 + *(int *)(param_1 + 0xc);
    *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(param_1 + 0x10);
    *piVar3 = *piVar3 + *(int *)(param_1 + 0x14);
  }
  else {
    sVar1 = *(short *)(param_1 + 6);
    *piVar2 = (int)*(short *)(param_1 + 4) << 8;
    *(int *)(param_2 + 0x1a4) = (int)sVar1 << 8;
    *piVar3 = (int)*(short *)(param_1 + 8) << 10;
  }
  return iVar4 == 0;
}

