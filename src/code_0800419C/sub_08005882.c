/* sub_08005882  (original: 0x08005882-0x0800589C in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_08005882(int param_1,undefined4 *param_2)

{
  *param_2 = 0x10;
  param_2[1] = (*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x128)) * 0x34 + 0x26;
  return 1;
}

