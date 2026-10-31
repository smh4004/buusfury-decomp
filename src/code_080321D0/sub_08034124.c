/* sub_08034124  (original: 0x08034124-0x08034294 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802ED98();
extern int sub_08046BA4();
extern int sub_08046B64();
extern int sub_08046B18();
extern int sub_08046B38();
extern int sub_08046C28();
extern undefined4 volatile DAT_030019b0;
extern uint volatile DAT_030019b4;
extern int volatile DAT_030019ac;
extern undefined4 volatile DAT_030019a4;
extern int volatile DAT_030019a8;
extern undefined volatile gUnknown_087B6EEC;


void sub_08034124(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  DAT_030019b0 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1ac);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1a8);
  if (*(int *)(param_1 + 8) != iVar1) {
    *(int *)(param_1 + 8) = iVar1;
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1a8);
    iVar4 = iVar1 >> 0x1f;
    uVar6 = sub_08046B38(iVar1,iVar4,iVar1,iVar4);
    lVar7 = sub_08046BA4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0xdb7,0);
    lVar8 = sub_08046B64(iVar1,iVar4,0xda);
    uVar6 = sub_08046B18((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),0x10f3333);
    DAT_030019b4 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  }
  iVar4 = (int)DAT_030019b4 >> 10;
  uVar2 = DAT_030019b4 & 0x3ff;
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + 0x1ac);
  iVar1 = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar4 + 0x40) * 0x1000000) >> 0x16)) *
                (0x400 - uVar2) +
               *(int *)(&gUnknown_087B6EEC + ((uint)((iVar4 + 0x41) * 0x1000000) >> 0x16)) * uVar2)
          >> 0x10;
  iVar3 = (int)uVar5 >> 10;
  uVar5 = uVar5 & 0x3ff;
  DAT_030019a4 = *(int *)(*(int *)(param_1 + 4) + 0x1a0) * 4 -
                 (iVar1 * ((int)(*(int *)(&gUnknown_087B6EEC + ((uint)(iVar3 << 0x18) >> 0x16)) *
                                 (0x400 - uVar5) +
                                *(int *)(&gUnknown_087B6EEC +
                                        ((uint)((iVar3 + 1) * 0x1000000) >> 0x16)) * uVar5) >> 0x10)
                  * 0x1e >> 10);
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + 0x1ac);
  iVar3 = (int)uVar5 >> 10;
  uVar5 = uVar5 & 0x3ff;
  DAT_030019a8 = (iVar1 * ((int)(*(int *)(&gUnknown_087B6EEC +
                                         ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x16)) *
                                 (0x400 - uVar5) +
                                *(int *)(&gUnknown_087B6EEC +
                                        ((uint)((iVar3 + 0x41) * 0x1000000) >> 0x16)) * uVar5) >>
                          0x10) * 0x1e >> 10) + *(int *)(*(int *)(param_1 + 4) + 0x1a4) * 4;
  DAT_030019ac = *(int *)(*(int *)(param_1 + 4) + 0x1a8) +
                 ((int)(*(int *)(&gUnknown_087B6EEC + ((uint)(iVar4 << 0x18) >> 0x16)) *
                        (0x400 - uVar2) +
                       uVar2 * *(int *)(&gUnknown_087B6EEC +
                                       ((uint)((iVar4 + 1) * 0x1000000) >> 0x16))) >> 0x10) * 0x1e;
  sub_0802ED98(&DAT_030019a4);
  return;
}

