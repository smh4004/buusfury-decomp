/* sub_08033CF0  (original: 0x08033CF0-0x08033D60 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08033BC4();


void sub_08033CF0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  uVar3 = (uint)uVar1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  piVar2 = *(int **)(param_2 + 0x50);
  if (uVar3 < 0x20) {
    iVar5 = 0;
    uVar4 = 1;
    *(undefined4 *)(param_2 + 0x1cc) = 1;
  }
  else {
    iVar5 = (*piVar2 + -2 << (sbyte)param_1[1]) + 0x20;
    if ((int)uVar3 < iVar5) {
      iVar5 = ((int)(uVar3 - 0x20) >> (sbyte)param_1[1]) + 1;
      uVar4 = 0;
      *(undefined4 *)(param_2 + 0x1cc) = 0;
    }
    else {
      iVar5 = *piVar2 + ((int)(uVar3 - iVar5) >> 5) + -1;
      uVar4 = 1;
      *(undefined4 *)(param_2 + 0x1cc) = 1;
    }
  }
  if (iVar5 < *piVar2) {
    if ((iVar5 == 1) && (*(char *)(param_2 + 0x11) == '\0')) {
      sub_08033BC4(param_1,param_2,piVar2,uVar4,param_4);
    }
    *(char *)(param_2 + 0x11) = (char)iVar5;
  }
  else {
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x24) + *param_1);
  }
  return;
}

