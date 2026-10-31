/* sub_08016928  (original: 0x08016928-0x08016962 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 48% of instructions covered.
 */
#include "ghidra_types.h"


int sub_08016928(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x134);
  if (*(int *)(param_1 + 0x11c) != 0) {
    piVar2 = (int *)(param_1 + 0x284);
  }
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    *param_2 = 0x14;
    param_2[1] = (*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120)) * 0x12 + 0x36;
    iVar1 = 1;
  }
  return iVar1;
}

