/* sub_08016E36  (original: 0x08016E36-0x08016E4A in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_08016E36(int param_1,undefined4 *param_2)

{
  param_2[1] = *(int *)(param_1 + 0x114) * 0x10 + 0x24;
  *param_2 = 0x12;
  return 1;
}

