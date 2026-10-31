/* sub_08009220  (original: 0x08009220-0x0800924C in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08007A40();
extern int __call_via_r2();


void sub_08009220(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = iVar3 * 4;
    piVar1 = *(int **)(param_1 + iVar4);
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
    }
    uVar2 = sub_08007A40(iVar3,0);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar4) = uVar2;
  } while (iVar3 < 4);
  return;
}

