/* sub_0800AE64  (original: 0x0800AE64-0x0800AE74 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_0800AE64(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50) + -1;
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

