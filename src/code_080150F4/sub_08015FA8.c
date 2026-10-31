/* sub_08015FA8  (original: 0x08015FA8-0x08015FEA in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08015FA8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      if (*(int *)(iVar1 * 0xc + param_1 + 0x54) == param_2) {
        *(int *)(param_1 + 0x3c) = iVar1;
        *(int *)(param_1 + 0x40) = iVar1;
        if (*(int *)(*(int *)(param_1 + 0x1c) + 0x10) != 0) {
          *(int *)(param_1 + 0x34) = iVar1 + -1;
          if (iVar1 + -1 < 0) {
            *(undefined4 *)(param_1 + 0x34) = 0;
          }
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return;
}

