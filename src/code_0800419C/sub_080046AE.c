/* sub_080046AE  (original: 0x080046AE-0x080046F4 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 25% of instructions covered.
 */
#include "ghidra_types.h"


void sub_080046AE(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4dc) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + *(int *)(param_1 + 0x4e0);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + *(int *)(param_1 + 0x4e4);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_1 + 0x4e8);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + *(int *)(param_1 + 0x4e8);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + *(int *)(param_1 + 0x4ec);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_1 + 0x4f0);
  }
  return;
}

