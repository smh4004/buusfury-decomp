/* sub_08004364  (original: 0x08004364-0x08004380 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_08004364(int param_1,uint param_2)

{
  if (((uint)*(byte *)(((int)param_2 >> 3) + param_1 + 0x55) & 1 << (param_2 & 7)) != 0) {
    return 1;
  }
  return 0;
}

