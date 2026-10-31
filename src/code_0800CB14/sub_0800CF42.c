/* sub_0800CF42  (original: 0x0800CF42-0x0800CF7A in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 17% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030019c4;
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c8;
extern int volatile DAT_030019c0;


undefined4 sub_0800CF42(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  if ((((*(int *)(param_1 + 0x24) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x2c))) &&
      (*(int *)(param_1 + 0x28) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x30))) {
    return 1;
  }
  return 0;
}

