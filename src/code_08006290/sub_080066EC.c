/* sub_080066EC  (original: 0x080066EC-0x08006718 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080066EC(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}

