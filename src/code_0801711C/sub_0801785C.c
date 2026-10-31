/* sub_0801785C  (original: 0x0801785C-0x08017888 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_080070DA();


undefined4 sub_0801785C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = __16__rt_sdiv(*(undefined4 *)(param_1 + 8),iVar1 * 0x100);
  sub_080070DA(0x100 - iVar1);
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}

