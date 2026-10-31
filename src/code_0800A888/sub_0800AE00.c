/* sub_0800AE00  (original: 0x0800AE00-0x0800AE64 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 42% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_0800AE00(int param_1,int *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_2;
  if (*psVar4 == 10) {
    *param_2 = (int)(psVar4 + 1);
  }
  else if (psVar4 != *(short **)(param_1 + 0x10)) {
    return 0;
  }
  sVar1 = *(short *)*param_2;
  while (sVar1 == 8) {
    if (param_3 != 0) {
      *(char *)(param_1 + 0x83) = (char)*(undefined2 *)(*param_2 + 2);
    }
    iVar2 = *param_2;
    *param_2 = iVar2 + 4;
    sVar1 = *(short *)(iVar2 + 4);
  }
  if (*(short *)*param_2 == 0x2d) {
    psVar4 = (short *)*param_2 + 1;
    *param_2 = (int)psVar4;
    sVar1 = *psVar4;
    while (sVar1 == 0x20) {
      iVar2 = *param_2;
      *param_2 = iVar2 + 2;
      sVar1 = *(short *)(iVar2 + 2);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

