/* sub_0800924C  (original: 0x0800924C-0x0800927E in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800924C(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = iVar4 * 4;
    piVar1 = *(int **)(param_1 + iVar5);
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
    }
    puVar3 = *(undefined4 **)(iVar5 + param_2 + 0x14);
    uVar2 = __call_via_r2(iVar4,puVar3,*puVar3);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar5) = uVar2;
  } while (iVar4 < 4);
  return;
}

