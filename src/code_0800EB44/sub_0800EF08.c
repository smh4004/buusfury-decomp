/* sub_0800EF08  (original: 0x0800EF08-0x0800EF38 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800EF08(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 4) + iVar1);
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 4) + iVar1);
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 8) + iVar1);
  return;
}

