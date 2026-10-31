/* sub_08017806  (original: 0x08017806-0x0801782C in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080070CC();
extern int __16__rt_sdiv();


undefined4 sub_08017806(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  __16__rt_sdiv(*(undefined4 *)(param_1 + 8),iVar1 * 0x100);
  sub_080070CC();
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}

