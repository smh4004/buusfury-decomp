/* sub_08018F0C  (original: 0x08018F0C-0x08018F74 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_08018F0C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
  iVar2 = *piVar1;
  iVar2 = __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 4) + iVar2);
  if (iVar2 != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
    iVar2 = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 4) = iVar2;
    if (*(int *)(param_1 + 8) <= iVar2) {
      *(undefined4 *)(param_1 + 4) = 0;
      return 1;
    }
    piVar1 = *(int **)(iVar2 * 4 + param_1 + 0xc);
    piVar3 = (int *)*piVar1;
    __call_via_r2(piVar1,param_2,*piVar3 + (int)piVar3);
  }
  return 0;
}

