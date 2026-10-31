/* sub_080159F4  (original: 0x080159F4-0x08015A04 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_080159F4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

