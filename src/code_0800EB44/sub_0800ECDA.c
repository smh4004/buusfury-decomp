/* sub_0800ECDA  (original: 0x0800ECDA-0x0800ECF0 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0800ECDA(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x58) + param_2 * 4 + 0x54);
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x50);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + param_2 * 4);
  }
  return;
}

