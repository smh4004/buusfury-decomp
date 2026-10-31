/* sub_08011C0C  (original: 0x08011C0C-0x08011C70 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 39% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


uint sub_08011C0C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = 0;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
    iVar3 = *piVar1;
    uVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    uVar5 = uVar5 | uVar2;
  }
  iVar4 = *(int *)(param_1 + 0x40c);
  while (-1 < iVar4 + -1) {
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar4];
    iVar3 = *piVar1;
    uVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    uVar5 = uVar5 | uVar2;
    iVar4 = iVar4 + -1;
  }
  return uVar5;
}

