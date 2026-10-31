/* sub_08010BD2  (original: 0x08010BD2-0x08010BF2 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800EF08();


void sub_08010BD2(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x22c);
  __call_via_r2(*(int **)(param_1 + 0x22c),param_1,*(int *)(iVar1 + 8) + iVar1);
  sub_0800EF08(param_1);
  return;
}

