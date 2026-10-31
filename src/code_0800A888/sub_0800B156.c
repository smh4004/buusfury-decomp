/* sub_0800B156  (original: 0x0800B156-0x0800B188 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 28% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_0800B156(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar1;
  if (7 < iVar1) {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    if (**(short **)(param_1 + 0x14) == 0x5e) {
      *(short **)(param_1 + 0x14) = *(short **)(param_1 + 0x14) + 1;
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0xb4) = 0x800b0a9;
  }
  return 0;
}

