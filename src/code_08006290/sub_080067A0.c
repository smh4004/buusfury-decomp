/* sub_080067A0  (original: 0x080067A0-0x080067D6 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 76% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_080067A0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      iVar2 = __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 4) + iVar2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return 0;
}

