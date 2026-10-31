/* sub_08015E94  (original: 0x08015E94-0x08015F1C in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 11% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08015E94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar2 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar2;
    if ((iVar2 < *(int *)(param_1 + 0x34)) &&
       (*(int *)(param_1 + 0x34) = iVar2, *(int *)(*(int *)(param_1 + 0x1c) + 0x10) != 0)) {
      *(int *)(param_1 + 0x38) = iVar2;
      iVar2 = -4;
      while ((iVar3 = *(int *)(param_1 + 0x38), iVar3 < *(int *)(param_1 + 0x4c) &&
             (iVar1 = *(int *)(iVar3 * 0xc + param_1 + 0x58) + iVar2 + 10,
             iVar1 <= (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + -0x28))) {
        *(int *)(param_1 + 0x38) = iVar3 + 1;
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0x48) =
           (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) >> 1) - iVar2 / 2;
    }
  }
  return;
}

