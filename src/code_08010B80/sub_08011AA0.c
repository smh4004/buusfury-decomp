/* sub_08011AA0  (original: 0x08011AA0-0x08011B04 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 17% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08049138();


void sub_08011AA0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x610);
  iVar1 = *piVar5;
  while (iVar2 = iVar1, iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)piVar5[iVar2];
    iVar4 = __call_via_r1(piVar3,*(int *)(*piVar3 + 4) + *piVar3);
    if ((iVar4 != 0) && (iVar4 = piVar3[1], piVar3[1] = iVar4 + -1, iVar4 + -1 == 0)) {
      iVar4 = *piVar5;
      *piVar5 = iVar4 + -1;
      iVar4 = (iVar4 + -1) - iVar1;
      if (iVar4 != 0) {
        sub_08049138((int)(piVar5 + iVar2),(int)(piVar5 + iVar2 + 1),iVar4 * 4);
      }
      __call_via_r1(piVar3,*(int *)(*piVar3 + 0xc) + *piVar3);
      __call_via_r1(piVar3,*(int *)(*piVar3 + 8) + *piVar3);
    }
  }
  return;
}

