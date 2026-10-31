/* sub_0800800A  (original: 0x0800800A-0x08008086 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_0800800A(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2 + *(int *)(param_1 + 0x34) >> 8;
  iVar2 = param_2[1] + *(int *)(param_1 + 0x38) >> 8;
  if ((((iVar3 < 0) || (iVar2 < 0)) || (1 < iVar3)) || (1 < iVar2)) {
    uVar1 = 0;
  }
  else if (*(short *)(((uint)((param_2[1] + *(int *)(param_1 + 0x38) >> 3) << 0x1b) >> 0x15) +
                      *(int *)((iVar2 * 2 + iVar3) * 4 + param_1 + 0x10) +
                     ((uint)((*param_2 + *(int *)(param_1 + 0x34) >> 3) << 0x1b) >> 0x1a)) == 0) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_1 + 0xc);
    uVar1 = 1;
  }
  return uVar1;
}

