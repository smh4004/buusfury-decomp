/* sub_08015F1C  (original: 0x08015F1C-0x08015FA8 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 14% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08015F1C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((iVar1 < *(int *)(param_1 + 0x4c) + -1) &&
     (*(int *)(param_1 + 0x3c) = iVar1 + 1, *(int *)(param_1 + 0x38) <= iVar1 + 1)) {
    *(int *)(param_1 + 0x38) = iVar1 + 2;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x10) != 0) {
      *(int *)(param_1 + 0x34) = iVar1 + 2;
      iVar1 = -4;
      while (0 < *(int *)(param_1 + 0x34)) {
        iVar3 = *(int *)(param_1 + 0x34) + -1;
        iVar2 = *(int *)(iVar3 * 0xc + param_1 + 0x58) + iVar1 + 10;
        if ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + -0x28 < iVar2) break;
        *(int *)(param_1 + 0x34) = iVar3;
        iVar1 = iVar2;
      }
      *(int *)(param_1 + 0x48) =
           (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) >> 1) - iVar1 / 2;
    }
  }
  return;
}

