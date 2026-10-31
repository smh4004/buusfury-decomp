/* sub_080103A6  (original: 0x080103A6-0x080104F2 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800FEE2();
extern ushort volatile DAT_03003302;
extern undefined volatile gUnknown_087B6EEC;


void sub_080103A6(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_2 + 0x1a8);
  iVar2 = 0;
  if ((DAT_03003302 & 1) == 0) {
    if (((int)((uint)DAT_03003302 << 0x1e) < 0) && (*piVar5 < 0x1e000)) {
      *piVar5 = *piVar5 + 0x400;
    }
  }
  else if (0x1400 < *piVar5) {
    *piVar5 = *piVar5 + -0x400;
  }
  uVar3 = (uint)DAT_03003302;
  if ((int)(uVar3 << 0x1b) < 0) {
    iVar2 = 0x80;
  }
  else if ((int)(uVar3 << 0x1a) < 0) {
    iVar2 = -0x80;
  }
  if ((int)(uVar3 << 0x19) < 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc0;
  }
  else if ((int)(uVar3 << 0x18) < 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0xc0;
  }
  iVar4 = *(int *)(param_1 + 8) * 0xf;
  iVar4 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1c) + iVar4) >> 4;
  *(int *)(param_1 + 8) = iVar4;
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      *(undefined4 *)(param_1 + 4) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = -iVar2;
  }
  iVar2 = *(int *)(param_1 + 0xc) + iVar2;
  iVar2 = iVar2 - (iVar2 >> 3);
  *(int *)(param_1 + 0xc) = iVar2;
  if (0 < iVar2) {
    *(int *)(param_1 + 0xc) = iVar2 + -1;
  }
  *(int *)(param_2 + 0x1ac) = *(int *)(param_2 + 0x1ac) + *(int *)(param_1 + 0xc);
  *(int *)(param_2 + 0x1a0) =
       (*(int *)(param_1 + 8) *
        *(int *)(&gUnknown_087B6EEC + ((uint)((*(int *)(param_2 + 0x1ac) >> 10) << 0x18) >> 0x16))
       >> 0x12) + *(int *)(param_2 + 0x1a0);
  *(int *)(param_2 + 0x1a4) =
       *(int *)(param_2 + 0x1a4) -
       (*(int *)(param_1 + 8) *
        *(int *)(&gUnknown_087B6EEC +
                ((uint)(((*(int *)(param_2 + 0x1ac) >> 10) + 0x40) * 0x1000000) >> 0x16)) >> 0x12);
  sub_0800FEE2();
  if (*(int *)(param_1 + 0xc) < 0x81) {
    if (*(int *)(param_1 + 0xc) < -0x80) {
      sub_0800ECDA(param_2,0x10);
      uVar1 = 0;
      if (*(int *)(param_1 + 4) == 0) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar1;
    }
    else {
      sub_0800ECDA(param_2,0xf);
      *(bool *)(param_2 + 0x10) = *(int *)(param_1 + 4) == 0;
    }
  }
  else {
    sub_0800ECDA(param_2,0x10);
    uVar1 = 2;
    if (*(int *)(param_1 + 4) == 0) {
      uVar1 = 1;
    }
    *(undefined1 *)(param_2 + 0x10) = uVar1;
  }
  return;
}

