/* sub_08019108  (original: 0x08019108-0x08019138 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


uint sub_08019108(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 1;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
      iVar3 = *piVar1;
      uVar2 = __call_via_r2(piVar1,param_2,*(int *)(iVar3 + 4) + iVar3);
      uVar5 = uVar5 & uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  return uVar5;
}

