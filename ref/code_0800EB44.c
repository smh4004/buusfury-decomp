/* Ghidra reference decompilation of code_0800EB44 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0800EB44 @ 0x0800EB44 */

void sub_0800EB44(int param_1,int param_2)

{
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x1b0);
  *(undefined2 *)(param_1 + 0x1b2) = *(undefined2 *)(param_2 + 0x1b2);
  *(undefined2 *)(param_1 + 0x1b4) = *(undefined2 *)(param_2 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1b6) = *(undefined2 *)(param_2 + 0x1b6);
  return;
}


/* sub_0800EB5E @ 0x0800EB5E */

undefined4 * sub_0800EB5E(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18c), param_1 != (undefined4 *)0x0)) {
    uVar1 = *(undefined2 *)(param_2 + 2);
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = uVar1;
    iVar2 = sub_0801124C(&DAT_03001c4c,uVar1);
    if (iVar2 == -1) {
      sub_08011732(&DAT_03001c4c,uVar1);
      iVar2 = sub_0801124C(&DAT_03001c4c,uVar1);
    }
    *(short *)(param_1 + 3) = (short)iVar2;
    *param_1 = &_0804AC20;
    param_1[5] = param_3;
    param_1[0x16] = param_2;
    param_1[9] = 0;
    param_1[0x13] = 0;
    if (*(undefined4 **)(param_2 + 0x50) != (undefined4 *)0x0) {
      param_1[0x13] = **(undefined4 **)(param_2 + 0x50);
      sub_0804E490(&DAT_03001ba8,&gUnknown_080725F0,0x80);
    }
    param_1[0x14] = *(undefined4 *)(param_2 + 0x54);
    *(undefined2 *)(param_1 + 0x5d) = 0;
    *(undefined2 *)((int)param_1 + 0x176) = 0;
    param_1[0x60] = 0;
    param_1[6] = &DAT_03001ba4;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    iVar2 = param_1[0x16];
    param_1[0xd] = *(undefined4 *)(iVar2 + 4);
    param_1[0xf] = *(undefined4 *)(iVar2 + 4);
    *(undefined1 *)(param_1 + 4) = 0;
    uVar3 = sub_0803D5B8(*(undefined2 *)(iVar2 + 2));
    param_1[0x10] = uVar3;
    iVar2 = sub_08013E38(*(undefined1 *)(param_1[0x16] + 10),*(undefined1 *)(param_1[0x16] + 0xb));
    param_1[0x17] = iVar2;
    if (iVar2 != 0) {
      sub_0804E490(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2))
      ;
    }
    piVar4 = *(int **)param_1[5];
    __call_via_r2((int *)param_1[5],param_1,*piVar4 + (int)piVar4);
  }
  return param_1;
}


/* sub_0800EB60 @ 0x0800EB60 */

undefined4 * sub_0800EB60(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18c), param_1 != (undefined4 *)0x0)) {
    uVar1 = *(undefined2 *)(param_2 + 2);
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = uVar1;
    iVar2 = sub_0801124C(&DAT_03001c4c,uVar1);
    if (iVar2 == -1) {
      sub_08011732(&DAT_03001c4c,uVar1);
      iVar2 = sub_0801124C(&DAT_03001c4c,uVar1);
    }
    *(short *)(param_1 + 3) = (short)iVar2;
    *param_1 = &_0804AC20;
    param_1[5] = param_3;
    param_1[0x16] = param_2;
    param_1[9] = 0;
    param_1[0x13] = 0;
    if (*(undefined4 **)(param_2 + 0x50) != (undefined4 *)0x0) {
      param_1[0x13] = **(undefined4 **)(param_2 + 0x50);
      sub_0804E490(&DAT_03001ba8,&gUnknown_080725F0,0x80);
    }
    param_1[0x14] = *(undefined4 *)(param_2 + 0x54);
    *(undefined2 *)(param_1 + 0x5d) = 0;
    *(undefined2 *)((int)param_1 + 0x176) = 0;
    param_1[0x60] = 0;
    param_1[6] = &DAT_03001ba4;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    iVar2 = param_1[0x16];
    param_1[0xd] = *(undefined4 *)(iVar2 + 4);
    param_1[0xf] = *(undefined4 *)(iVar2 + 4);
    *(undefined1 *)(param_1 + 4) = 0;
    uVar3 = sub_0803D5B8(*(undefined2 *)(iVar2 + 2));
    param_1[0x10] = uVar3;
    iVar2 = sub_08013E38(*(undefined1 *)(param_1[0x16] + 10),*(undefined1 *)(param_1[0x16] + 0xb));
    param_1[0x17] = iVar2;
    if (iVar2 != 0) {
      sub_0804E490(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2))
      ;
    }
    piVar4 = *(int **)param_1[5];
    __call_via_r2((int *)param_1[5],param_1,*piVar4 + (int)piVar4);
  }
  return param_1;
}


/* sub_0800EC34 @ 0x0800EC34 */

void sub_0800EC34(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804AC20;
  if (param_1[0x17] != 0) {
    sub_0804FE20(*(undefined4 *)(param_1[0x17] + 8));
  }
  if (*(int *)(param_1[0x16] + 0x50) != 0) {
    sub_0804FE20(&DAT_03001ba8);
  }
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,param_1,*(int *)(*piVar1 + 0xc) + *piVar1);
  }
  iVar2 = *(int *)param_1[5];
  __call_via_r2((int *)param_1[5],param_1,*(int *)(iVar2 + 0xc) + iVar2);
  iVar2 = *(int *)param_1[6];
  __call_via_r2((int *)param_1[6],param_1,*(int *)(iVar2 + 0xc) + iVar2);
  sub_0803D63C(param_1[0x10]);
  *param_1 = &_08049680;
  if (*(short *)(param_1 + 3) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800ECB0 @ 0x0800ECB0 */

void sub_0800ECB0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    sub_0804FE20(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8));
  }
  iVar1 = sub_08013E38(*param_2,param_2[1]);
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 != 0) {
    sub_0804E490(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 2));
  }
  return;
}


/* sub_0800ECDA @ 0x0800ECDA */

void sub_0800ECDA(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x58) + param_2 * 4 + 0x54);
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x50);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + param_2 * 4);
  }
  return;
}


/* sub_0800ECF0 @ 0x0800ECF0 */

void sub_0800ECF0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (&gUnknown_08072670)[param_2];
  param_1[0x14] = *(int *)(param_1[0x16] + (uint)bVar1 * 4 + 0x54);
  iVar2 = *(int *)(param_1[0x16] + 0x50);
  if (iVar2 != 0) {
    param_1[0x13] = *(int *)(iVar2 + (uint)bVar1 * 4);
  }
  __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x2c) + *param_1);
  return;
}


/* sub_0800ED18 @ 0x0800ED18 */

void sub_0800ED18(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 0xc) + iVar1,param_4,param_4);
  *(int **)(param_1 + 0x14) = param_2;
  __call_via_r2(param_2,param_1,*(int *)*param_2 + *param_2);
  return;
}


/* sub_0800ED3E @ 0x0800ED3E */

void sub_0800ED3E(int param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (&gUnknown_08072670)[param_2];
  *(undefined4 *)(param_1 + 0x50) =
       *(undefined4 *)(*(int *)(param_1 + 0x58) + (uint)bVar1 * 4 + 0x54);
  iVar2 = *(int *)(*(int *)(param_1 + 0x58) + 0x50);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + (uint)bVar1 * 4);
  }
  iVar2 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar2 + 0xc) + iVar2,param_4,param_4);
  *(int ***)(param_1 + 0x14) = &DAT_03001b00;
  __call_via_r2(&DAT_03001b00,param_1,*DAT_03001b00 + (int)DAT_03001b00);
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}


/* sub_0800ED80 @ 0x0800ED80 */

void sub_0800ED80(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 0xc) + iVar1,param_4,param_4);
  *(int **)(param_1 + 0x18) = param_2;
  __call_via_r2(param_2,param_1,*(int *)*param_2 + *param_2);
  return;
}


/* sub_0800EDA6 @ 0x0800EDA6 */

void sub_0800EDA6(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 0xc) + iVar1);
  *(int ***)(param_1 + 0x18) = &DAT_03001ba4;
  __call_via_r2(&DAT_03001ba4,param_1,*DAT_03001ba4 + (int)DAT_03001ba4);
  return;
}


/* sub_0800EDF8 @ 0x0800EDF8 */

void sub_0800EDF8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x50) != 0) {
    sub_0804FE20(&DAT_03001ba8);
  }
  iVar1 = *(int *)(param_2 + 4);
  *(int *)(param_1 + 0x3c) = iVar1;
  if (*(int *)(param_1 + 0x34) != iVar1) {
    *(int *)(param_1 + 0x34) = iVar1;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 0xc) + iVar1);
  *(int ***)(param_1 + 0x18) = &DAT_03001ba4;
  __call_via_r2(&DAT_03001ba4,param_1,*DAT_03001ba4 + (int)DAT_03001ba4);
  if (*(short *)(*(int *)(param_1 + 0x58) + 2) != *(short *)(param_2 + 2)) {
    sub_0803D63C(*(undefined4 *)(param_1 + 0x40));
    uVar2 = sub_0803D5B8(*(undefined2 *)(param_2 + 2));
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    sub_0801183E(param_1,*(undefined2 *)(param_2 + 2));
  }
  *(int *)(param_1 + 0x58) = param_2;
  if (*(int *)(param_2 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    sub_0804E490(&DAT_03001ba8,&gUnknown_080725F0,0x80);
  }
  return;
}


/* sub_0800EE78 @ 0x0800EE78 */

void sub_0800EE78(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 0xc) + iVar1);
  *(int ***)(param_1 + 0x14) = &DAT_03001ba4;
  __call_via_r2(&DAT_03001ba4,param_1,*DAT_03001ba4 + (int)DAT_03001ba4);
  return;
}


/* sub_0800EE9E @ 0x0800EE9E */

bool sub_0800EE9E(int param_1)

{
  return *(undefined4 **)(param_1 + 0x14) == &DAT_03001ba4;
}


/* sub_0800EEB0 @ 0x0800EEB0 */

undefined4 sub_0800EEB0(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x58) + (uint)(byte)(&gUnknown_08072670)[param_2] * 4 + 0x54) ==
      *(int *)(param_1 + 0x50)) {
    return 1;
  }
  return 0;
}


/* sub_0800EECC @ 0x0800EECC */

void sub_0800EECC(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x38) = param_2;
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(int *)(param_1 + 0x34) = param_2;
  }
  else if (param_2 == 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x3c);
  }
  else {
    *(int *)(param_1 + 0x34) = param_1 + 0x74;
    iVar2 = 0;
    do {
      iVar3 = param_1 + iVar2;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x3c) + iVar2);
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar3 + 0x74) = *(undefined1 *)(param_2 + (uint)*pbVar1);
    } while (iVar2 < 0x100);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


/* sub_0800EF08 @ 0x0800EF08 */

void sub_0800EF08(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 4) + iVar1);
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 4) + iVar1);
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 8) + iVar1);
  return;
}


/* sub_0800EF38 @ 0x0800EF38 */

undefined4 sub_0800EF38(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) =
       *(undefined4 *)
        (*(int *)(param_1 + 0x50) + (uint)*(byte *)(param_1 + 0x11) * 0x10 +
         (uint)*(byte *)(param_1 + 0x10) * 4 + 4);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 100) = 1;
  return 1;
}


/* sub_0800EF66 @ 0x0800EF66 */

void sub_0800EF66(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(*(int *)(param_2 + 0x58) + 8);
  iVar2 = *(int *)(param_2 + 0x6c);
  param_1[1] = *(int *)(param_2 + 0x70) +
               (int)*(char *)(*(int *)(*(int *)(param_2 + 0x50) +
                                       (uint)*(byte *)(param_2 + 0x11) * 0x10 +
                                       (uint)*(byte *)(param_2 + 0x10) * 4 + 4) + 5);
  *param_1 = iVar2 + (uint)bVar1 + -8;
  return;
}


/* sub_0800EF94 @ 0x0800EF94 */

undefined4 sub_0800EF94(int param_1,int *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  int iStack_1050;
  int iStack_104c;
  int iStack_1048;
  int iStack_1044;
  int iStack_1038;
  int local_1034;
  undefined1 auStack_1030 [4096];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int *local_1c;
  undefined *local_18;
  
  local_1034 = 0;
  local_18 = &DAT_03001a24;
  local_1c = (int *)(param_1 + 0x180);
  if (DAT_03001a34 == 0) {
    if (*local_1c != 0) {
      iStack_1038 = param_2[2];
      if (0xf < iStack_1038) {
        return 0;
      }
      local_1034 = 1;
      iVar7 = param_2[1];
      param_2[1] = iVar7 + 0x20;
      param_2[2] = iStack_1038 + 1;
      sub_08046FF4(&iStack_1050,&iStack_1038,8,0x8050761);
      sub_0803FCF4(&iStack_1050,local_1c);
      *(short *)(iVar7 + 6) = (short)(iStack_1050 >> 2);
      *(short *)(iVar7 + 0xe) = (short)(iStack_1048 >> 2);
      *(short *)(iVar7 + 0x16) = (short)(iStack_104c >> 2);
      *(short *)(iVar7 + 0x1e) = (short)(iStack_1044 >> 2);
    }
  }
  else {
    iStack_1038 = param_2[2];
    if (0xf < iStack_1038) {
      return 0;
    }
    local_1034 = 1;
    iVar7 = param_2[1];
    param_2[1] = iVar7 + 0x20;
    param_2[2] = iStack_1038 + 1;
    sub_08046FF4(&iStack_1050,&iStack_1038,8,0x8050761);
    sub_0803FCF4(&iStack_1050,local_1c);
    *(short *)(iVar7 + 6) = (short)*(undefined4 *)(param_1 + 0x68);
    *(undefined2 *)(iVar7 + 0xe) = 0;
    *(undefined2 *)(iVar7 + 0x16) = 0;
    *(short *)(iVar7 + 0x1e) = (short)*(undefined4 *)(param_1 + 0x68);
    if (*(int *)(*(int *)(param_1 + 0x54) + 0xc) << 3 < 0) {
      *(short *)(iVar7 + 6) = -*(short *)(iVar7 + 6);
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      puVar2 = (uint *)*param_2;
      *param_2 = (int)(puVar2 + 2);
      pcVar12 = (char *)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x11) * 8 +
                        (uint)*(byte *)(param_1 + 0x10) * 2);
      if (*pcVar12 != -0x80) {
        if (local_1034 == 0) {
          *puVar2 = 0x6000;
          uVar3 = (uint)((*(int *)(param_1 + 0x6c) + (int)*pcVar12) * 0x800000) >> 7 | 0x6000;
          *puVar2 = uVar3;
          *puVar2 = uVar3 | *(int *)(param_1 + 0x70) + (uint)(byte)pcVar12[1] & 0xff;
          puVar2[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 |
                      puVar2[1] & 0xfffff000 | DAT_03001baa & 0x3ff;
        }
        else {
          *puVar2 = (uint)(iStack_1038 << 0x1b) >> 2 | 0x6300;
          software_interrupt(6);
          *puVar2 = (uint)((*pcVar12 * 0xc0 + *(int *)(param_1 + 0x6c) + -8) * 0x800000) >> 7 |
                    *puVar2 & 0xfe00ffff;
          software_interrupt(6);
          *puVar2 = pcVar12[1] * 0xc0 + *(int *)(param_1 + 0x70) + 0xf4U & 0xff |
                    *puVar2 & 0xffffff00;
          puVar2[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 |
                      puVar2[1] & 0xfffff000 | DAT_03001baa & 0x3ff;
        }
      }
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0xc);
    iVar7 = 0;
    if (0 < **(int **)(param_1 + 0x54)) {
      uStack_20 = (uint)(iStack_1038 << 0x1b) >> 2;
      do {
        puVar2 = (uint *)*param_2;
        *param_2 = (int)(puVar2 + 2);
        iVar4 = *(int *)(param_1 + 0x54) + iVar7 * 0xc;
        if (local_1034 == 0) {
          uStack_2c = *(uint *)(iVar4 + 0xc);
          *puVar2 = uStack_2c;
          uVar8 = (*(int *)(param_1 + 0x6c) + (uint)*(ushort *)(param_1 + 0x174) +
                  (int)*(char *)(iVar4 + 8)) * 0x800000 >> 7;
          *puVar2 = uStack_2c & 0xfe00ffff | uVar8;
          uStack_30 = *(int *)(param_1 + 0x70) + (uint)*(ushort *)(param_1 + 0x176) +
                      (uint)*(byte *)(iVar4 + 9);
          *puVar2 = uStack_2c & 0xfe00ff00 | uVar8 | uStack_30 & 0xff;
        }
        else {
          uVar8 = *(uint *)(iVar4 + 0xc);
          uStack_24 = uVar8 & 0xc1ffffff | 0x300 | uStack_20;
          *puVar2 = uStack_24;
          uVar9 = ((*(int *)(param_1 + 0x6c) + (uint)*(ushort *)(param_1 + 0x174) +
                   (int)*(char *)(iVar4 + 8)) - (uint)(*(byte *)(iVar4 + 10) >> 1)) * 0x800000 >> 7;
          *puVar2 = uVar8 & 0xc000ffff | 0x300 | uStack_20 | uVar9;
          uStack_28 = (*(int *)(param_1 + 0x70) + (uint)*(ushort *)(param_1 + 0x176) +
                      (uint)*(byte *)(iVar4 + 9)) - (uint)(*(byte *)(iVar4 + 0xb) >> 1);
          *puVar2 = uVar8 & 0xc000ff00 | 0x300 | uStack_20 | uVar9 | uStack_28 & 0xff;
        }
        puVar2[1] = puVar2[1] & 0xfffff000 | (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10
                    | uVar3 & 0x3ff;
        iVar7 = iVar7 + 1;
        uVar3 = uVar3 + ((int)((uint)*(byte *)(iVar4 + 0xb) * (uint)*(byte *)(iVar4 + 10)) >> 5);
      } while (iVar7 < **(int **)(param_1 + 0x54));
    }
  }
  if ((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 100) != 0)) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x58) + 0xd);
    iVar7 = *(int *)(param_1 + 0x70);
    uVar3 = (uint)((*(int *)(param_1 + 0x6c) + (int)*(char *)(*(int *)(param_1 + 0x58) + 0xc) +
                   local_1c[1]) * 0x800000) >> 7;
    iVar4 = local_1c[2];
    puVar2 = (uint *)*param_2;
    *param_2 = (int)(puVar2 + 2);
    uVar8 = iVar7 + (uint)bVar1 + iVar4 & 0xff;
    uVar10 = *(uint *)(*(int *)(param_1 + 0x5c) + 0xc);
    *puVar2 = uVar3 | uVar10 & 0xfe00ff00 | uVar8;
    uVar11 = puVar2[1];
    uVar9 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    puVar2[1] = uVar9 | uVar11 & 0xfffff3ff;
    puVar2[1] = uVar9 | uVar11 & 0xffff0000 |
                *(ushort *)(*(int *)(*(int *)(param_1 + 0x5c) + 8) + 2) & 0x3ff;
    if (*(int *)(local_18 + 0x10) != 0) {
      *puVar2 = uVar3 | uVar10 & 0xc000ff00 | uVar8 | 0x100 | (uint)(iStack_1038 << 0x1b) >> 2;
    }
  }
  piVar5 = *(int **)(param_1 + 0x54);
  if (*(int **)(param_1 + 0x30) == piVar5) {
    uVar6 = 0;
  }
  else {
    *(int **)(param_1 + 0x30) = piVar5;
    *(uint *)(param_1 + 0x48) = (uint)*(byte *)((int)piVar5 + 7) * (uint)*(byte *)((int)piVar5 + 6);
    if (((*(int *)(param_1 + 0x34) == 0) && (*piVar5 == 1)) && (*(int *)piVar5[4] == 0)) {
      *(int **)(param_1 + 0x44) = (int *)piVar5[4] + 2;
      uVar6 = 1;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x40);
      iVar7 = 0;
      *(int *)(param_1 + 0x44) = iVar4;
      if (0 < *piVar5) {
        do {
          iVar13 = *(int *)(param_1 + 0x54) + iVar7 * 0xc;
          sub_0803D966(*(undefined4 *)(iVar13 + 0x10),auStack_1030,*(undefined4 *)(param_1 + 0x34));
          iVar13 = (uint)*(byte *)(iVar13 + 0xb) * (uint)*(byte *)(iVar13 + 10);
          sub_08049138(iVar4,(int)auStack_1030,iVar13);
          iVar4 = iVar4 + iVar13;
          iVar7 = iVar7 + 1;
        } while (iVar7 < **(int **)(param_1 + 0x54));
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}


/* sub_0800F0EE @ 0x0800F0EE */

undefined4 sub_0800F0EE(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_r3;
  uint uVar8;
  uint uVar9;
  int unaff_r4;
  int *unaff_r5;
  uint uVar10;
  uint *unaff_r6;
  int unaff_r7;
  int iVar11;
  int iVar12;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000103c;
  int in_stack_00001040;
  
  software_interrupt(6);
  *unaff_r6 = *(char *)(unaff_r7 + in_r3) * 0xc0 + *(int *)(unaff_r4 + 0x70) + 0xf4U & 0xff |
              *unaff_r6 & 0xffffff00;
  unaff_r6[1] = (((uint)*(byte *)(unaff_r4 + 8) << 0x1a) >> 0x1e) << 10 | unaff_r6[1] & 0xfffff000 |
                DAT_03001baa & 0x3ff;
  uVar2 = (uint)*(ushort *)(unaff_r4 + 0xc);
  iVar12 = 0;
  if (0 < **(int **)(unaff_r4 + 0x54)) {
    uVar3 = (uint)(in_stack_00000020 << 0x1b) >> 2;
    do {
      puVar4 = (uint *)*unaff_r5;
      *unaff_r5 = (int)(puVar4 + 2);
      iVar5 = *(int *)(unaff_r4 + 0x54) + iVar12 * 0xc;
      if (in_stack_00000024 == 0) {
        uVar9 = *(uint *)(iVar5 + 0xc);
        *puVar4 = uVar9;
        uVar8 = (*(int *)(unaff_r4 + 0x6c) + (uint)*(ushort *)(unaff_r4 + 0x174) +
                (int)*(char *)(iVar5 + 8)) * 0x800000 >> 7;
        *puVar4 = uVar9 & 0xfe00ffff | uVar8;
        *puVar4 = uVar9 & 0xfe00ff00 | uVar8 |
                  *(int *)(unaff_r4 + 0x70) + (uint)*(ushort *)(unaff_r4 + 0x176) +
                  (uint)*(byte *)(iVar5 + 9) & 0xff;
      }
      else {
        uVar8 = *(uint *)(iVar5 + 0xc);
        *puVar4 = uVar8 & 0xc1ffffff | 0x300 | uVar3;
        uVar9 = ((*(int *)(unaff_r4 + 0x6c) + (uint)*(ushort *)(unaff_r4 + 0x174) +
                 (int)*(char *)(iVar5 + 8)) - (uint)(*(byte *)(iVar5 + 10) >> 1)) * 0x800000 >> 7;
        *puVar4 = uVar8 & 0xc000ffff | 0x300 | uVar3 | uVar9;
        *puVar4 = uVar8 & 0xc000ff00 | 0x300 | uVar3 | uVar9 |
                  (*(int *)(unaff_r4 + 0x70) + (uint)*(ushort *)(unaff_r4 + 0x176) +
                  (uint)*(byte *)(iVar5 + 9)) - (uint)(*(byte *)(iVar5 + 0xb) >> 1) & 0xff;
      }
      puVar4[1] = puVar4[1] & 0xfffff000 | (((uint)*(byte *)(unaff_r4 + 8) << 0x1a) >> 0x1e) << 10 |
                  uVar2 & 0x3ff;
      iVar12 = iVar12 + 1;
      uVar2 = uVar2 + ((int)((uint)*(byte *)(iVar5 + 0xb) * (uint)*(byte *)(iVar5 + 10)) >> 5);
    } while (iVar12 < **(int **)(unaff_r4 + 0x54));
  }
  if ((*(int *)(unaff_r4 + 0x5c) != 0) && (*(int *)(unaff_r4 + 100) != 0)) {
    bVar1 = *(byte *)(*(int *)(unaff_r4 + 0x58) + 0xd);
    iVar12 = *(int *)(unaff_r4 + 0x70);
    uVar2 = (uint)((*(int *)(unaff_r4 + 0x6c) + (int)*(char *)(*(int *)(unaff_r4 + 0x58) + 0xc) +
                   *(int *)(in_stack_0000103c + 4)) * 0x800000) >> 7;
    iVar5 = *(int *)(in_stack_0000103c + 8);
    puVar4 = (uint *)*unaff_r5;
    *unaff_r5 = (int)(puVar4 + 2);
    uVar3 = iVar12 + (uint)bVar1 + iVar5 & 0xff;
    uVar9 = *(uint *)(*(int *)(unaff_r4 + 0x5c) + 0xc);
    *puVar4 = uVar2 | uVar9 & 0xfe00ff00 | uVar3;
    uVar10 = puVar4[1];
    uVar8 = (((uint)*(byte *)(unaff_r4 + 8) << 0x1a) >> 0x1e) << 10;
    puVar4[1] = uVar8 | uVar10 & 0xfffff3ff;
    puVar4[1] = uVar8 | uVar10 & 0xffff0000 |
                *(ushort *)(*(int *)(*(int *)(unaff_r4 + 0x5c) + 8) + 2) & 0x3ff;
    if (*(int *)(in_stack_00001040 + 0x10) != 0) {
      *puVar4 = uVar2 | uVar9 & 0xc000ff00 | uVar3 | 0x100 | (uint)(in_stack_00000020 << 0x1b) >> 2;
    }
  }
  piVar6 = *(int **)(unaff_r4 + 0x54);
  if (*(int **)(unaff_r4 + 0x30) == piVar6) {
    uVar7 = 0;
  }
  else {
    *(int **)(unaff_r4 + 0x30) = piVar6;
    *(uint *)(unaff_r4 + 0x48) = (uint)*(byte *)((int)piVar6 + 7) * (uint)*(byte *)((int)piVar6 + 6)
    ;
    if (((*(int *)(unaff_r4 + 0x34) == 0) && (*piVar6 == 1)) && (*(int *)piVar6[4] == 0)) {
      *(int **)(unaff_r4 + 0x44) = (int *)piVar6[4] + 2;
      uVar7 = 1;
    }
    else {
      iVar5 = *(int *)(unaff_r4 + 0x40);
      iVar12 = 0;
      *(int *)(unaff_r4 + 0x44) = iVar5;
      if (0 < *piVar6) {
        do {
          iVar11 = *(int *)(unaff_r4 + 0x54) + iVar12 * 0xc;
          sub_0803D966(*(undefined4 *)(iVar11 + 0x10),&stack0x00000028,
                       *(undefined4 *)(unaff_r4 + 0x34));
          iVar11 = (uint)*(byte *)(iVar11 + 0xb) * (uint)*(byte *)(iVar11 + 10);
          sub_08049138(iVar5,(int)&stack0x00000028,iVar11);
          iVar5 = iVar5 + iVar11;
          iVar12 = iVar12 + 1;
        } while (iVar12 < **(int **)(unaff_r4 + 0x54));
      }
      uVar7 = 1;
    }
  }
  return uVar7;
}


/* sub_0800F3F8 @ 0x0800F3F8 */

void sub_0800F3F8(int param_1)

{
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
               *(int *)(param_1 + 0x44),*(int *)(param_1 + 0x48));
  return;
}


/* sub_0800F40E @ 0x0800F40E */

int sub_0800F40E(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 10) {
    if (*(int *)(*(int *)(param_1 + 0x58) + 0x50) != 0) {
      sub_0804FE20(&DAT_03001ba8);
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      sub_0804FE20(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8));
    }
    return 0;
  }
  if (param_2 < 0xb) {
    if (param_2 == 5) {
      if (*(int **)(param_1 + 0x58) == param_3) {
        return param_1;
      }
      return 0;
    }
    if (param_2 == 6) {
      if (*(int *)(param_1 + 0x58) == *param_3) {
        iVar1 = param_3[1];
        if (iVar1 != 0x10) {
          param_3[1] = iVar1 + 1;
          (param_3 + 1)[iVar1 + 1] = param_1;
        }
      }
      return 0;
    }
  }
  else {
    if (param_2 == 0xb) {
      if (*(int *)(*(int *)(param_1 + 0x58) + 0x50) != 0) {
        sub_0804E490(&DAT_03001ba8,&gUnknown_080725F0,0x80,param_4,param_4);
      }
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 != 0) {
        sub_0804E490(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4),
                     *(undefined2 *)(iVar1 + 2));
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      return 0;
    }
    if (param_2 == 0xf) {
      iVar1 = **(int **)(param_1 + 0x14);
      __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 0x10) + iVar1);
      return 0;
    }
  }
  return 0;
}


/* sub_0800F4C0 @ 0x0800F4C0 */

undefined4 sub_0800F4C0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
  if (iVar1 == 0) {
    if (0xc < param_2) {
      return 2;
    }
  }
  else if (0xd < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800F4E6 @ 0x0800F4E6 */

void sub_0800F4E6(int param_1)

{
  int iVar1;
  
  sub_08011818();
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x50) != 0) {
    sub_0804E490(&DAT_03001ba8,&gUnknown_080725F0,0x80);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    sub_0804E490(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 2));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


/* sub_0800F516 @ 0x0800F516 */

void sub_0800F516(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x50) != 0) {
    sub_0804FE20(&DAT_03001ba8);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    sub_0804FE20(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8));
  }
  sub_08011568(param_1);
  return;
}


/* sub_0800F53C @ 0x0800F53C */

void sub_0800F53C(int param_1)

{
  *(uint *)(param_1 + 0x1c) = (uint)*(byte *)(param_1 + 0x11);
  *(uint *)(param_1 + 0x20) = (uint)*(ushort *)(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 **)(param_1 + 0x14) = &DAT_03001ba4;
  return;
}


/* sub_0800F558 @ 0x0800F558 */

void sub_0800F558(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 0xc) + iVar1);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x24);
  *(char *)(param_1 + 0x11) = (char)*(undefined4 *)(param_1 + 0x1c);
  *(short *)(param_1 + 0x12) = (short)*(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


/* sub_0800F58C @ 0x0800F58C */

undefined4 * sub_0800F58C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x194), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800EB60(param_1,param_2,param_3);
  param_1[99] = 0;
  *param_1 = &_0804D174;
  param_1[100] = param_1;
  return param_1;
}


/* sub_0800F5C6 @ 0x0800F5C6 */

int sub_0800F5C6(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0xc) {
    iVar1 = **(int **)(param_1 + 0x14);
    __call_via_r2(*(int **)(param_1 + 0x14),param_1,*(int *)(iVar1 + 4) + iVar1);
    iVar1 = **(int **)(param_1 + 0x18);
    __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 4) + iVar1);
  }
  iVar1 = sub_080193AE(param_1 + 0x18c,param_2);
  if (iVar1 != 0) {
    return iVar1 + -1;
  }
  iVar1 = sub_0800F40E(param_1,param_2,param_3);
  return iVar1;
}


/* sub_0800F60E @ 0x0800F60E */

void sub_0800F60E(int param_1)

{
  if (param_1 == DAT_03001bac) {
    sub_0801155C();
  }
  else {
    sub_0800F4C0();
  }
  return;
}


/* sub_0800F62C @ 0x0800F62C */

void sub_0800F62C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_ec [17];
  undefined4 uStack_a8;
  
  DAT_03001010 = *(undefined4 *)(param_1 + 8);
  DAT_03001014 = *(undefined4 *)(param_1 + 0xc);
  DAT_03001018 = *(undefined4 *)(param_1 + 0x10);
  DAT_0300101c = *(undefined4 *)(param_1 + 0x14);
  iVar2 = 0;
  iVar1 = DAT_03001bac;
  if (0 < DAT_03001c50) {
    do {
      iVar1 = *(int *)(param_1 + 0x20);
      if ((&DAT_03001c54)[iVar2] == *(int *)(param_1 + 0x20)) break;
      iVar2 = iVar2 + 1;
      iVar1 = DAT_03001bac;
    } while (iVar2 < DAT_03001c50);
  }
  DAT_03001bac = iVar1;
  if (*(int *)(param_1 + 0x18) != 0) {
    auStack_ec[0] = 0;
    uStack_a8 = 0;
    ScriptVM_Run(auStack_ec,*(int *)(param_1 + 0x18),0);
  }
  __call_via_r1(*(undefined4 **)(param_1 + 0x1c),**(undefined4 **)(param_1 + 0x1c));
  DAT_03001bac = 0;
  return;
}


/* Enemy_Create @ 0x0800F68C */

undefined4 * Enemy_Create(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_24 [4];
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x29c), param_1 != (undefined4 *)0x0)) {
    uVar2 = sub_08000158(*(undefined4 *)(param_2 + 0x10));
    auStack_24[0] = param_4;
    sub_0800E754(param_1,uVar2,&DAT_03001b0c,param_3,param_2 + 0xc);
    *param_1 = &_0804C484;
    sub_0800A93C(param_1 + 0x8b,param_2 + 0x18);
    param_1[0x8f] = 0;
    param_1[0x9a] = 0;
    param_1[0x89] = param_3;
    param_1[0x8a] = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)((int)param_1 + 0x291) = 0;
    *(undefined1 *)(param_1 + 0xa4) = 0;
    param_1[0xa3] = *(int *)(param_3 + 4) << 10;
    sub_0800FDFA(auStack_24,param_1);
    sub_08009930(auStack_24,DAT_03001a54,0);
    param_1[0x8e] = param_1;
    sub_0800AA9C(param_1 + 0x8e,*(undefined4 *)(param_1[0x89] + 8));
    puVar1 = &DAT_03001bb4 + DAT_03001bb0;
    DAT_03001bb0 = DAT_03001bb0 + 1;
    *puVar1 = param_1;
  }
  return param_1;
}


/* sub_0800F740 @ 0x0800F740 */

void sub_0800F740(int param_1,undefined4 param_2)

{
  undefined1 auStack_1c [16];
  
  if (*(char *)(param_1 + 0x291) == '\0') {
    sub_0800FDFA(auStack_1c,param_1);
    sub_08009930(auStack_1c,DAT_03001a54,param_2);
  }
  return;
}


/* sub_0800F76E @ 0x0800F76E */

void sub_0800F76E(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_20 [16];
  
  *param_1 = &_0804C484;
  if (*(char *)((int)param_1 + 0x291) == '\0') {
    sub_0800FDFA(auStack_20,param_1);
    sub_08009930(auStack_20,DAT_03001a54,1);
  }
  iVar1 = 0;
  if (0 < DAT_03001bb0) {
    do {
      if ((undefined4 *)(&DAT_03001bb4)[iVar1] == param_1) goto _0800F7BC;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_03001bb0);
  }
  iVar1 = -1;
_0800F7BC:
  DAT_03001bb0 = DAT_03001bb0 + -1;
  if (DAT_03001bb0 - iVar1 != 0) {
    sub_08049138((int)(&DAT_03001bb4 + iVar1),(int)(&DAT_03001bb8 + iVar1),
                 (DAT_03001bb0 - iVar1) * 4);
  }
  sub_0800A9FE(param_1 + 0x8e,0);
  piVar2 = (int *)param_1[0x8b];
  if (piVar2 != (int *)0x0) {
    __call_via_r1(piVar2,*(int *)(*piVar2 + 4) + *piVar2);
  }
  sub_0800E85E(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800F7F2 @ 0x0800F7F2 */

void sub_0800F7F2(void)

{
  undefined4 unaff_r4;
  int unaff_r6;
  
  __call_via_r1();
  sub_0800E85E(unaff_r4,0);
  if (unaff_r6 != 0) {
    sub_0803D63C(unaff_r4);
  }
  return;
}


/* sub_0800F80C @ 0x0800F80C */

void sub_0800F80C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((**(int **)(param_1 + 0x224) != 0) &&
     (iVar2 = **(int **)(param_1 + 0x224) *
              (int)*(short *)(&DAT_030015b8 + (uint)DAT_03001068 * 0x68) + 0xff >> 8, iVar2 != 0)) {
    puVar1 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 1;
      *puVar1 = &_0804A820;
      puVar1[2] = iVar2;
    }
    iVar2 = DAT_0300225c * 4;
    DAT_0300225c = DAT_0300225c + 1;
    *(undefined4 **)(&DAT_03002260 + iVar2) = puVar1;
  }
  return;
}


/* sub_0800F866 @ 0x0800F866 */

void sub_0800F866(int param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_38;
  int local_34;
  int local_30 [2];
  int local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  byte *pbStack_18;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  pbStack_18 = param_3;
  sub_0800FDFA(local_30,param_1);
  if (param_3 == (byte *)0x0) {
    local_38 = 0;
    local_34 = 0;
  }
  else {
    local_38 = *(int *)(&gUnknown_0807268C + (uint)*param_3 * 8) << 8;
    local_34 = *(int *)(&DAT_08072690 + (uint)*param_3 * 8) << 8;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x224) + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x228);
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = uStack_1c;
    *puVar1 = &_0804955C;
    puVar1[2] = local_30[0] + local_28 >> 1;
    puVar1[3] = local_24;
    puVar1[4] = local_38;
    puVar1[5] = local_34;
    puVar1[8] = param_1;
    puVar1[6] = uVar2;
    puVar1[7] = uVar4;
  }
  iVar3 = DAT_0300225c * 4;
  DAT_0300225c = DAT_0300225c + 1;
  *(undefined4 **)(&DAT_03002260 + iVar3) = puVar1;
  sub_0800F80C(param_1);
  return;
}


/* sub_0800F924 @ 0x0800F924 */

void sub_0800F924(int param_1)

{
  undefined1 auStack_18 [16];
  
  if (*(char *)(param_1 + 0x291) == '\0') {
    *(undefined1 *)(param_1 + 0x291) = 1;
    sub_0800FDFA(auStack_18,param_1);
    sub_08009930(auStack_18,DAT_03001a54,1);
  }
  return;
}


/* sub_0800F954 @ 0x0800F954 */

int sub_0800F954(int param_1)

{
  int iVar1;
  undefined1 auStack_24 [16];
  
  if (*(char *)(param_1 + 0x291) == '\0') {
    iVar1 = 1;
  }
  else {
    sub_0800FDFA(auStack_24,param_1);
    iVar1 = sub_08009324(auStack_24,DAT_03001a54);
    iVar1 = 1 - iVar1;
    *(undefined1 *)(param_1 + 0x291) = 0;
    sub_0800FDFA(auStack_24,param_1);
    sub_08009930(auStack_24,DAT_03001a54,0);
  }
  return iVar1;
}


/* sub_0800F9A2 @ 0x0800F9A2 */

void sub_0800F9A2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x291) == '\0') {
    sub_08009930(param_2,DAT_03001a54,param_3,param_1,param_4);
  }
  return;
}


/* sub_0800F9C2 @ 0x0800F9C2 */

undefined4 sub_0800F9C2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x291) == '\0') &&
     (iVar1 = sub_08009324(param_2,DAT_03001a54,0x290,param_4,param_4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0800F9EE @ 0x0800F9EE */

undefined4 sub_0800F9EE(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x291) == '\0') &&
     (iVar1 = sub_08009904(&DAT_030019a4,param_2,param_1 + 0x19c,param_4,param_4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0800F9F2 @ 0x0800F9F2 */

undefined4 sub_0800F9F2(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + param_3 + 1) == '\0') &&
     (iVar1 = sub_08009904(&DAT_030019a4,param_2,param_1 + 0x19c,param_4,param_4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0800F9F4 @ 0x0800F9F4 */

undefined4 sub_0800F9F4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_3 + 1) == '\0') &&
     (iVar1 = sub_08009904(&DAT_030019a4,param_2,param_1 + 0x19c,param_4,param_4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0800F9F8 @ 0x0800F9F8 */

undefined4 sub_0800F9F8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 == 0) && (iVar1 = sub_08009904(&DAT_030019a4,param_2,param_1 + 0x19c), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0800FA16 @ 0x0800FA16 */

void sub_0800FA16(int param_1,int param_2)

{
  *(undefined **)(param_1 + 0x224) = &gEnemyStats + param_2 * 0x1c;
  return;
}


/* sub_0800FA2A @ 0x0800FA2A */

undefined4 sub_0800FA2A(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x28c);
  if (*piVar3 == 0) {
    uVar1 = 1;
  }
  else {
    sub_0800E8E6(param_1,param_2,param_3,param_4,param_4);
    iVar2 = *piVar3 - *(int *)(param_2 + 0x18);
    *piVar3 = iVar2;
    if (iVar2 < 1) {
      *piVar3 = 0;
      sub_08011C0C(&DAT_03001c4c,0x11,param_1);
      iVar2 = *(int *)(*(int *)(param_1 + 0x224) + 0x14);
      __call_via_r3(iVar2,param_1,param_2,*(undefined4 *)(iVar2 + 8));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_0800FA80 @ 0x0800FA80 */

void sub_0800FA80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sub_0800E97E();
  piVar1 = (int *)(param_1 + 0x28c);
  *piVar1 = *piVar1 + (*param_2 + 0x3ff >> 10) * 0x400;
  iVar2 = *(int *)(*(int *)(param_1 + 0x224) + 4);
  iVar4 = *piVar1;
  iVar3 = iVar2 * 0x400;
  if (iVar4 != iVar3 && iVar4 + iVar2 * -0x400 < 0 == SBORROW4(iVar4,iVar3)) {
    *piVar1 = iVar3;
  }
  return;
}


/* sub_0800FAB6 @ 0x0800FAB6 */

void sub_0800FAB6(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_1,(&PTR_DAT_080726b8)[param_2],&PTR_DAT_080726b8,param_4,param_4);
  return;
}


/* sub_0800FAC6 @ 0x0800FAC6 */

undefined4 sub_0800FAC6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(undefined **)(param_1 + 0x14) == (&PTR_DAT_080726b8)[param_2]) &&
     (iVar1 = sub_0800EEB0(), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0800FAE6 @ 0x0800FAE6 */

void sub_0800FAE6(int param_1)

{
  sub_0800EF08();
  sub_0800AB0C(param_1 + 0x238);
  return;
}


/* sub_0800FAF2 @ 0x0800FAF2 */

void sub_0800FAF2(int param_1)

{
  int unaff_r4;
  
  sub_0800AB0C(unaff_r4 + param_1);
  return;
}


/* sub_0800FAFA @ 0x0800FAFA */

undefined4 sub_0800FAFA(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_90 [108];
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (param_2 == 0) {
    if (((((char)*param_3 != '\x01') && ((char)*param_3 != '\x02')) || (param_1[0x73] == 0)) ||
       (((sub_0800FE78(&uStack_24,param_1), iStack_1c <= param_3[1] ||
         (param_3[3] <= (int)uStack_24)) ||
        ((iStack_18 <= param_3[2] || (param_3[4] <= (int)uStack_20)))))) {
      return 0;
    }
    Combat_Damage(param_1);
    if (param_3[0xb] != 0) {
      uStack_24 = (uint)*(byte *)param_3[7];
      uStack_20 = (uint)*(byte *)(param_3[7] + 1);
      iStack_1c = param_3[0xb] + 0x3ff >> 10;
      iStack_18 = param_3[9];
      sub_08004098(auStack_90,&gUnknown_0877C678,&uStack_24);
    }
    param_1[0xa5] = param_3[9];
    param_1[0xa6] = (uint)(*(char *)(param_3[7] + 1) == '\x03');
    sub_0800AB2E(param_1 + 0x8e,param_3 + 5);
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 0x16) {
        if (param_2 != 0x19) {
          uVar2 = sub_080102D8(param_1,param_2,param_3);
          return uVar2;
        }
        sub_0800FE78(&uStack_24,param_1);
        if ((((int)uStack_24 < DAT_030019c4) && (DAT_030019bc < iStack_1c)) &&
           (((int)uStack_20 < DAT_030019c8 && (DAT_030019c0 < iStack_18)))) {
          iVar1 = *param_3;
          if (iVar1 == 0x10) {
            return 0;
          }
          *param_3 = iVar1 + 1;
          param_3[iVar1 * 7 + 5] = 0;
          param_3[iVar1 * 7 + 1] = uStack_24;
          param_3[iVar1 * 7 + 2] = uStack_20;
          param_3[iVar1 * 7 + 3] = iStack_1c;
          param_3[iVar1 * 7 + 4] = iStack_18;
          *(char *)(param_3 + iVar1 * 7 + 6) = '\0';
          param_3[iVar1 * 7 + 7] = (int)param_1;
        }
        return 0;
      }
      iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sub_08027948(param_1[0x16],param_1[0x89]);
      if (iVar1 == -1) {
        return 0;
      }
      iVar3 = *param_3;
      *param_3 = iVar3 + 1;
      param_3[iVar3 * 10 + 1] = iVar1;
      param_3[iVar3 * 10 + 2] = param_1[0xa3] + 0x3ff >> 10;
      param_3[iVar3 * 10 + 3] = (uint)*(byte *)(param_1 + 4);
      iVar1 = (param_1[0x69] >> 8) - DAT_030019d0;
      param_3[iVar3 * 10 + 4] = (param_1[0x68] >> 8) - DAT_030019cc;
      param_3[iVar3 * 10 + 5] = iVar1;
      return 0;
    }
    if ((((((char)*param_3 != '\x01') && ((char)*param_3 != '\x02')) || (param_1[0x73] == 0)) ||
        ((sub_0800FE78(&uStack_24,param_1), iStack_1c <= param_3[1] ||
         (param_3[3] <= (int)uStack_24)))) ||
       ((iStack_18 <= param_3[2] || (param_3[4] <= (int)uStack_20)))) {
      uVar2 = sub_080102D8(param_1,2,param_3);
      return uVar2;
    }
    if (*(char *)param_3[7] == '\0') {
      if ((char)param_1[0x6e] == '\0') {
        return 0;
      }
    }
    else if (*(char *)((int)param_1 + 0x1b9) == '\0') {
      return 0;
    }
  }
  return 1;
}


/* sub_0800FB06 @ 0x0800FB06 */

undefined4 sub_0800FB06(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_r4;
  int unaff_r6;
  int *unaff_r7;
  undefined1 auStack_7c [108];
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  if (param_2 == 0) {
    if (((((char)*param_3 != '\x01') && ((char)*param_3 != '\x02')) ||
        (*(int *)(param_1 + 0xc) == 0)) ||
       (((sub_0800FE78(&local_10,unaff_r4), local_8 <= *unaff_r7 || (unaff_r7[2] <= (int)local_10))
        || ((local_4 <= unaff_r7[1] || (unaff_r7[3] <= (int)local_c)))))) {
      return 0;
    }
    Combat_Damage(unaff_r4);
    if (param_3[0xb] != 0) {
      local_10 = (uint)*(byte *)param_3[7];
      local_c = (uint)*(byte *)(param_3[7] + 1);
      local_8 = param_3[0xb] + 0x3ff >> 10;
      local_4 = param_3[9];
      sub_08004098(auStack_7c,&gUnknown_0877C678,&local_10);
    }
    unaff_r4[0xa5] = param_3[9];
    unaff_r4[0xa6] = (uint)(*(char *)(param_3[7] + 1) == '\x03');
    sub_0800AB2E(unaff_r4 + 0x8e,param_3 + 5);
  }
  else {
    if (unaff_r6 != 2) {
      if (unaff_r6 != 0x16) {
        if (unaff_r6 != 0x19) {
          uVar2 = sub_080102D8(unaff_r4,unaff_r6,param_3);
          return uVar2;
        }
        sub_0800FE78(&local_10,unaff_r4);
        if ((((int)local_10 < DAT_030019c4) && (DAT_030019bc < local_8)) &&
           (((int)local_c < DAT_030019c8 && (DAT_030019c0 < local_4)))) {
          iVar1 = *param_3;
          if (iVar1 == 0x10) {
            return 0;
          }
          *param_3 = iVar1 + 1;
          param_3[iVar1 * 7 + 5] = 0;
          param_3[iVar1 * 7 + 1] = local_10;
          param_3[iVar1 * 7 + 2] = local_c;
          param_3[iVar1 * 7 + 3] = local_8;
          param_3[iVar1 * 7 + 4] = local_4;
          *(char *)(param_3 + iVar1 * 7 + 6) = '\0';
          param_3[iVar1 * 7 + 7] = (int)unaff_r4;
        }
        return 0;
      }
      iVar1 = __call_via_r1(unaff_r4,*(int *)(*unaff_r4 + 0xc) + *unaff_r4);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sub_08027948(unaff_r4[0x16],unaff_r4[0x89]);
      if (iVar1 == -1) {
        return 0;
      }
      iVar3 = *param_3;
      *param_3 = iVar3 + 1;
      param_3[iVar3 * 10 + 1] = iVar1;
      param_3[iVar3 * 10 + 2] = unaff_r4[0xa3] + 0x3ff >> 10;
      param_3[iVar3 * 10 + 3] = (uint)*(byte *)(unaff_r4 + 4);
      iVar1 = (unaff_r4[0x69] >> 8) - DAT_030019d0;
      param_3[iVar3 * 10 + 4] = (unaff_r4[0x68] >> 8) - DAT_030019cc;
      param_3[iVar3 * 10 + 5] = iVar1;
      return 0;
    }
    if ((((((char)*param_3 != '\x01') && ((char)*param_3 != '\x02')) ||
         (*(int *)(param_1 + 0xc) == 0)) ||
        ((sub_0800FE78(&local_10,unaff_r4), local_8 <= *unaff_r7 || (unaff_r7[2] <= (int)local_10)))
        ) || ((local_4 <= unaff_r7[1] || (unaff_r7[3] <= (int)local_c)))) {
      uVar2 = sub_080102D8(unaff_r4,2,param_3);
      return uVar2;
    }
    if (*(char *)param_3[7] == '\0') {
      if ((char)unaff_r4[0x6e] == '\0') {
        return 0;
      }
    }
    else if (*(char *)((int)unaff_r4 + 0x1b9) == '\0') {
      return 0;
    }
  }
  return 1;
}


/* sub_0800FCFE @ 0x0800FCFE */

void sub_0800FCFE(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  
  sub_080102D8(unaff_r4,unaff_r6);
  return;
}


/* sub_0800FD00 @ 0x0800FD00 */

void sub_0800FD00(void)

{
  undefined4 unaff_r4;
  
  sub_080102D8(unaff_r4);
  return;
}


/* sub_0800FD34 @ 0x0800FD34 */

void sub_0800FD34(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x48) + *param_1,param_4,param_4);
  return;
}


/* sub_0800FD44 @ 0x0800FD44 */

void sub_0800FD44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,0,*(int *)(*param_1 + 0x48) + *param_1,param_4,param_4);
  return;
}


/* Enemy_Spawn @ 0x0800FD54 */

void Enemy_Spawn(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Enemy_Create(0,param_1,&gEnemyStats + *(int *)(param_1 + 8) * 0x1c,param_2,param_4);
  return;
}


/* sub_0800FD74 @ 0x0800FD74 */

undefined4 *
sub_0800FD74(undefined4 *param_1,undefined4 param_2,undefined4 param_3,short *param_4,
            undefined4 param_5)

{
  short sVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1b0), param_1 != (undefined4 *)0x0)) {
    sub_0800F58C(param_1,param_2,param_3);
    *param_1 = &_0804BA08;
    param_1[0x6a] = 0xf000;
    param_1[0x6b] = 0;
    param_1[0x66] = param_5;
    *(undefined2 *)(param_1 + 0x67) = *(undefined2 *)(param_1[0x16] + 8);
    sVar1 = param_4[1];
    param_1[0x68] = (int)*param_4 << 8;
    param_1[0x69] = (int)sVar1 << 8;
    iVar2 = param_1[0x16];
    *(byte *)((int)param_1 + 0x19e) = *(char *)(iVar2 + 0xc) + (*(byte *)(iVar2 + 10) >> 1);
    *(byte *)((int)param_1 + 0x19f) = *(char *)(iVar2 + 0xd) + (*(byte *)(iVar2 + 0xb) >> 1);
  }
  return param_1;
}


/* sub_0800FDFA @ 0x0800FDFA */

int * sub_0800FDFA(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 0x1a0) >> 8;
  iVar4 = *(int *)(param_2 + 0x1a4) >> 8;
  bVar1 = *(byte *)(param_2 + 0x19c);
  bVar2 = *(byte *)(param_2 + 0x19d);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar3 + (uint)bVar1;
  param_1[3] = iVar4 + (uint)bVar2;
  return param_1 + 4;
}


/* sub_0800FE00 @ 0x0800FE00 */

int * sub_0800FE00(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_3 + param_2) >> 8;
  iVar4 = *(int *)(param_2 + 0x1a4) >> 8;
  bVar1 = *(byte *)(param_2 + 0x19c);
  bVar2 = *(byte *)(param_2 + 0x19d);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar3 + (uint)bVar1;
  param_1[3] = iVar4 + (uint)bVar2;
  return param_1 + 4;
}


/* sub_0800FE08 @ 0x0800FE08 */

int * sub_0800FE08(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x19c);
  bVar2 = *(byte *)(param_2 + 0x19d);
  *param_1 = param_3 >> 8;
  param_1[1] = param_4 >> 8;
  param_1[2] = (param_3 >> 8) + (uint)bVar1;
  param_1[3] = (param_4 >> 8) + (uint)bVar2;
  return param_1 + 4;
}


/* sub_0800FE34 @ 0x0800FE34 */

int * sub_0800FE34(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(int *)(param_2 + 0x1a0) >> 8) + (int)*(char *)(*(int *)(param_2 + 0x54) + 4);
  iVar4 = (*(int *)(param_2 + 0x1a4) >> 8) + (int)*(char *)(*(int *)(param_2 + 0x54) + 5);
  bVar1 = *(byte *)(*(int *)(param_2 + 0x54) + 6);
  bVar2 = *(byte *)(*(int *)(param_2 + 0x54) + 7);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar3 + (uint)bVar1;
  param_1[3] = iVar4 + (uint)bVar2;
  return param_1 + 4;
}


/* sub_0800FE78 @ 0x0800FE78 */

void sub_0800FE78(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 0x58) + (uint)*(byte *)(param_2 + 0x10) * 0x10;
  iVar5 = *(int *)(param_2 + 0x1a0) >> 8;
  iVar3 = *(int *)(param_2 + 0x1a4) >> 8;
  iVar6 = *(int *)(iVar1 + 0x14);
  iVar4 = *(int *)(iVar1 + 0x18);
  iVar2 = *(int *)(iVar1 + 0x1c);
  *param_1 = *(int *)(iVar1 + 0x10) + iVar5;
  param_1[1] = iVar6 + iVar3;
  param_1[2] = iVar4 + iVar5;
  param_1[3] = iVar2 + iVar3;
  return;
}


/* sub_0800FEE2 @ 0x0800FEE2 */

void sub_0800FEE2(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x1a0);
  iVar1 = *piVar2;
  if (*(int *)(param_1 + 0x1a0) < 0) {
    *piVar2 = iVar1 + DAT_03001a38 * 0x100;
  }
  else if (DAT_03001a38 <= iVar1 >> 8) {
    *piVar2 = iVar1 + DAT_03001a38 * -0x100;
  }
  piVar2 = (int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x1a4) < 0) {
    *piVar2 = *piVar2 + DAT_03001a3c * 0x100;
  }
  else if (DAT_03001a3c <= *piVar2 >> 8) {
    *piVar2 = *piVar2 + DAT_03001a3c * -0x100;
  }
  return;
}


/* sub_0800FEFC @ 0x0800FEFC */

void sub_0800FEFC(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  iVar2 = *param_3;
  iVar3 = *param_4;
  if (unaff_r6 < 0) {
    *param_3 = iVar2 + iVar3 * 0x100;
  }
  else if (iVar3 <= iVar2 >> 8) {
    *param_3 = iVar2 + iVar3 * -0x100;
  }
  piVar1 = (int *)(param_1 + 0x1a4);
  if (*(int *)(unaff_r5 + 0x24) < 0) {
    *piVar1 = *piVar1 + *(int *)(unaff_r4 + 0x98) * 0x100;
  }
  else if (*(int *)(unaff_r4 + 0x98) <= *piVar1 >> 8) {
    *piVar1 = *piVar1 + *(int *)(unaff_r4 + 0x98) * -0x100;
  }
  return;
}


/* sub_0800FF44 @ 0x0800FF44 */

void sub_0800FF44(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_0800FE78(&local_1c);
  iVar2 = local_18 + local_10 >> 1;
  iVar4 = local_1c + local_14 >> 1;
  cVar1 = *(char *)(param_2 + 0x10);
  iVar3 = iVar4;
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_2 + 0x1a4) >> 8;
  }
  else {
    iVar5 = iVar2;
    if (((cVar1 != '\x01') && (iVar3 = local_1c, cVar1 != '\x02')) &&
       (iVar3 = iVar2, iVar5 = iVar4, cVar1 == '\x03')) {
      iVar3 = local_14;
      iVar5 = iVar2;
    }
  }
  *param_1 = iVar3;
  param_1[1] = iVar5;
  return;
}


/* sub_0800FFA2 @ 0x0800FFA2 */

int * sub_0800FFA2(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_2 + 0x1a4) >> 8) - DAT_030019d0;
  cVar1 = *(char *)(*(int *)(*(int *)(param_2 + 0x50) + (uint)*(byte *)(param_2 + 0x11) * 0x10 +
                             (uint)*(byte *)(param_2 + 0x10) * 4 + 4) + 5);
  *param_1 = ((*(int *)(param_2 + 0x1a0) >> 8) - DAT_030019cc) +
             (uint)*(byte *)(*(int *)(param_2 + 0x58) + 8) + -8;
  param_1[1] = iVar2 + cVar1;
  return param_1 + 2;
}


/* sub_0800FFFE @ 0x0800FFFE */

undefined4 * sub_0800FFFE(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  
  *param_1 = param_2;
  param_1[1] = param_3 + unaff_r4;
  return param_1 + 2;
}


/* sub_08010000 @ 0x08010000 */

undefined4 * sub_08010000(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1 + 2;
}


/* sub_08010004 @ 0x08010004 */

void sub_08010004(void)

{
  return;
}


/* sub_08010010 @ 0x08010010 */

void sub_08010010(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0x1020200;
  local_8 = 0x30301;
  *(undefined1 *)(param_1 + 0x10) =
       *(undefined1 *)
        ((int)&local_8 +
        ((uint)(((*(int *)(param_1 + 0x1ac) >> 10) - (DAT_030019b0 >> 10)) * 0x1000000) >> 0x1d));
  return;
}


/* sub_0801003A @ 0x0801003A */

undefined4 sub_0801003A(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  piVar1 = param_1 + 0x69;
  if (DAT_03001a34 == 0) {
    param_1[0x15] =
         *(int *)(param_1[0x14] + (uint)*(byte *)((int)param_1 + 0x11) * 0x10 +
                  (uint)*(byte *)(param_1 + 4) * 4 + 4);
    local_1c = param_1[0x68] >> 8;
    local_18 = *piVar1 >> 8;
    param_1[1] = local_18 + (uint)(*(byte *)((int)param_1 + 0x19d) >> 1);
    local_24 = local_1c + *(char *)((int)param_1 + 0x19e);
    local_20 = local_18 + *(char *)((int)param_1 + 0x19f);
    iVar3 = param_1[0x15];
    iVar5 = local_1c + *(char *)(iVar3 + 4) + (int)(short)param_1[0x5d];
    iVar4 = local_18 + *(char *)(iVar3 + 5) + (int)*(short *)((int)param_1 + 0x176);
    if ((((iVar5 < DAT_030019c4) && (DAT_030019bc < (int)((uint)*(byte *)(iVar3 + 6) + iVar5))) &&
        (iVar4 < DAT_030019c8)) && (DAT_030019c0 < (int)(iVar4 + (uint)*(byte *)(iVar3 + 7)))) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
    param_1[0x18] = iVar3;
    iStack_2c = local_1c - DAT_030019cc;
    iStack_28 = local_18 - DAT_030019d0;
    param_1[0x1b] = iStack_2c;
    param_1[0x1c] = iStack_28;
    if (param_1[0x17] == 0) {
      param_1[0x19] = 0;
    }
    else {
      param_1[0x61] = param_1[0x5e];
      iVar3 = sub_080099A4(&DAT_030019a4,&local_24,(char)param_1[2]);
      param_1[0x62] = iVar3 + param_1[0x5f];
      iVar4 = local_1c + *(char *)(param_1[0x16] + 0xc) + param_1[0x61];
      iVar3 = local_18 + *(char *)(param_1[0x16] + 0xd) + iVar3 + param_1[0x5f];
      if (((iVar4 < DAT_030019c4) && (DAT_030019bc < (int)(iVar4 + (uint)*(byte *)param_1[0x17])))
         && ((iVar3 < DAT_030019c8 &&
             (DAT_030019c0 < (int)(iVar3 + (uint)((byte *)param_1[0x17])[1]))))) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
      param_1[0x19] = iVar3;
    }
  }
  else {
    local_24 = param_1[0x68] >> 8;
    local_20 = *piVar1 >> 8;
    if (((local_24 < DAT_030019bc) || (DAT_030019c4 <= local_24)) ||
       ((local_20 < DAT_030019c0 || (DAT_030019c8 <= local_20)))) {
      return 0;
    }
    local_1c = local_24;
    local_18 = local_20;
    __call_via_r1(param_1,*(int *)(*param_1 + 0x44) + *param_1);
    param_1[0x15] =
         *(int *)(param_1[0x14] + (uint)*(byte *)((int)param_1 + 0x11) * 0x10 +
                  (uint)*(byte *)(param_1 + 4) * 4 + 4);
    local_20 = param_1[0x68] << 2;
    local_1c = *piVar1 << 2;
    local_18 = param_1[0x6a];
    sub_0802F1C6(&DAT_030019a4,&local_20,param_1 + 0x18,&iStack_28,param_1 + 0x65);
    if (param_1[0x18] != 0) {
      if ((((iStack_28 < -0x40) || (0x130 < iStack_28)) || (local_24 < -0x40)) || (0xe0 < local_24))
      {
        param_1[0x18] = 0;
      }
      else {
        param_1[0x1b] = iStack_28 - (uint)(*(byte *)(param_1[0x16] + 8) >> 1);
        param_1[0x1c] = local_24 - (uint)(*(byte *)(param_1[0x16] + 9) >> 1);
      }
    }
    iVar3 = param_1[0x65] * 0x222 >> 0x11;
    param_1[0x1a] = iVar3;
    if (iVar3 < 0x80) {
      param_1[0x1a] = 0x80;
    }
    param_1[1] = -param_1[0x65];
    if (param_1[0x17] == 0) {
      param_1[0x19] = 0;
    }
    else {
      local_18 = 0;
      sub_0802F1C6(&DAT_030019a4,&local_20,param_1 + 0x19,&iStack_30,param_1 + 0x65);
      if (param_1[0x19] != 0) {
        if (((iStack_30 < -0x20) || (0x110 < iStack_30)) ||
           ((iStack_2c < -0x20 || (0xc0 < iStack_2c)))) {
          param_1[0x19] = 0;
        }
        else {
          param_1[0x61] = 0;
          param_1[0x62] = iStack_2c - local_24;
        }
      }
    }
  }
  if ((param_1[0x18] == 0) && (param_1[0x19] == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_080100F4 @ 0x080100F4 */

undefined4 sub_080100F4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (((in_stack_00000010 < 0x131) && (param_1 <= in_stack_00000014)) && (in_stack_00000014 < 0xe1))
  {
    *(uint *)(unaff_r4 + 0x6c) =
         in_stack_00000010 - (uint)(*(byte *)(*(int *)(unaff_r4 + 0x58) + 8) >> 1);
    *(uint *)(unaff_r4 + 0x70) =
         in_stack_00000014 - (uint)(*(byte *)(*(int *)(unaff_r4 + 0x58) + 9) >> 1);
  }
  else {
    *(undefined4 *)(unaff_r4 + 0x60) = unaff_r6;
  }
  iVar1 = *(int *)(unaff_r5 + 0x14);
  iVar3 = iVar1 * 0x222 >> 0x11;
  *(int *)(unaff_r4 + 0x68) = iVar3;
  if (iVar3 < 0x80) {
    *(undefined4 *)(unaff_r4 + 0x68) = 0x80;
  }
  *(int *)(unaff_r4 + 4) = -iVar1;
  if (*(int *)(unaff_r4 + 0x5c) == 0) {
    *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
  }
  else {
    sub_0802F1C6(&DAT_030019a4,&stack0x00000018,unaff_r4 + 100,&stack0x00000008);
    if (*(int *)(unaff_r4 + 100) != 0) {
      if (((in_stack_00000008 < -0x20) || (0x110 < in_stack_00000008)) ||
         ((in_stack_0000000c < -0x20 || (0xc0 < in_stack_0000000c)))) {
        *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
      }
      else {
        *(undefined4 *)(unaff_r5 + 4) = unaff_r6;
        *(int *)(unaff_r5 + 8) = in_stack_0000000c - in_stack_00000014;
      }
    }
  }
  if ((*(int *)(unaff_r4 + 0x60) == 0) && (*(int *)(unaff_r4 + 100) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_080100FA @ 0x080100FA */

undefined4 sub_080100FA(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (((param_3 < param_2) || (in_stack_00000014 < param_1)) || (0xe0 < in_stack_00000014)) {
    *(undefined4 *)(unaff_r4 + 0x60) = unaff_r6;
  }
  else {
    *(uint *)(unaff_r4 + 0x6c) =
         in_stack_00000010 - (uint)(*(byte *)(*(int *)(unaff_r4 + 0x58) + 8) >> 1);
    *(uint *)(unaff_r4 + 0x70) =
         in_stack_00000014 - (uint)(*(byte *)(*(int *)(unaff_r4 + 0x58) + 9) >> 1);
  }
  iVar1 = *(int *)(unaff_r5 + 0x14);
  iVar3 = iVar1 * 0x222 >> 0x11;
  *(int *)(unaff_r4 + 0x68) = iVar3;
  if (iVar3 < 0x80) {
    *(undefined4 *)(unaff_r4 + 0x68) = 0x80;
  }
  *(int *)(unaff_r4 + 4) = -iVar1;
  if (*(int *)(unaff_r4 + 0x5c) == 0) {
    *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
  }
  else {
    sub_0802F1C6(&DAT_030019a4,&stack0x00000018,unaff_r4 + 100,&stack0x00000008);
    if (*(int *)(unaff_r4 + 100) != 0) {
      if (((in_stack_00000008 < -0x20) || (0x110 < in_stack_00000008)) ||
         ((in_stack_0000000c < -0x20 || (0xc0 < in_stack_0000000c)))) {
        *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
      }
      else {
        *(undefined4 *)(unaff_r5 + 4) = unaff_r6;
        *(int *)(unaff_r5 + 8) = in_stack_0000000c - in_stack_00000014;
      }
    }
  }
  if ((*(int *)(unaff_r4 + 0x60) == 0) && (*(int *)(unaff_r4 + 100) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_080100FC @ 0x080100FC */

undefined4 sub_080100FC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (((in_ZR || in_NG != in_OV) && (param_1 <= in_stack_00000014)) && (in_stack_00000014 < 0xe1)) {
    *(uint *)(unaff_r4 + 0x6c) =
         in_stack_00000010 - (uint)(*(byte *)(*(int *)(unaff_r4 + 0x58) + 8) >> 1);
    *(uint *)(unaff_r4 + 0x70) =
         in_stack_00000014 - (uint)(*(byte *)(*(int *)(unaff_r4 + 0x58) + 9) >> 1);
  }
  else {
    *(undefined4 *)(unaff_r4 + 0x60) = unaff_r6;
  }
  iVar1 = *(int *)(unaff_r5 + 0x14);
  iVar3 = iVar1 * 0x222 >> 0x11;
  *(int *)(unaff_r4 + 0x68) = iVar3;
  if (iVar3 < 0x80) {
    *(undefined4 *)(unaff_r4 + 0x68) = 0x80;
  }
  *(int *)(unaff_r4 + 4) = -iVar1;
  if (*(int *)(unaff_r4 + 0x5c) == 0) {
    *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
  }
  else {
    sub_0802F1C6(&DAT_030019a4,&stack0x00000018,unaff_r4 + 100,&stack0x00000008);
    if (*(int *)(unaff_r4 + 100) != 0) {
      if (((in_stack_00000008 < -0x20) || (0x110 < in_stack_00000008)) ||
         ((in_stack_0000000c < -0x20 || (0xc0 < in_stack_0000000c)))) {
        *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
      }
      else {
        *(undefined4 *)(unaff_r5 + 4) = unaff_r6;
        *(int *)(unaff_r5 + 8) = in_stack_0000000c - in_stack_00000014;
      }
    }
  }
  if ((*(int *)(unaff_r4 + 0x60) == 0) && (*(int *)(unaff_r4 + 100) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_080100FE @ 0x080100FE */

undefined4 sub_080100FE(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if ((in_stack_00000014 < param_1) || (0xe0 < in_stack_00000014)) {
    *(undefined4 *)(unaff_r4 + 0x60) = unaff_r6;
  }
  else {
    *(uint *)(unaff_r4 + 0x6c) =
         in_stack_00000010 - (uint)(*(byte *)(*(int *)(unaff_r4 + 0x58) + 8) >> 1);
    *(uint *)(unaff_r4 + 0x70) =
         in_stack_00000014 - (uint)(*(byte *)(*(int *)(unaff_r4 + 0x58) + 9) >> 1);
  }
  iVar1 = *(int *)(unaff_r5 + 0x14);
  iVar3 = iVar1 * 0x222 >> 0x11;
  *(int *)(unaff_r4 + 0x68) = iVar3;
  if (iVar3 < 0x80) {
    *(undefined4 *)(unaff_r4 + 0x68) = 0x80;
  }
  *(int *)(unaff_r4 + 4) = -iVar1;
  if (*(int *)(unaff_r4 + 0x5c) == 0) {
    *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
  }
  else {
    sub_0802F1C6(&DAT_030019a4,&stack0x00000018,unaff_r4 + 100,&stack0x00000008);
    if (*(int *)(unaff_r4 + 100) != 0) {
      if ((((in_stack_00000008 < -0x20) || (0x110 < in_stack_00000008)) ||
          (in_stack_0000000c < -0x20)) || (0xc0 < in_stack_0000000c)) {
        *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
      }
      else {
        *(undefined4 *)(unaff_r5 + 4) = unaff_r6;
        *(int *)(unaff_r5 + 8) = in_stack_0000000c - in_stack_00000014;
      }
    }
  }
  if ((*(int *)(unaff_r4 + 0x60) == 0) && (*(int *)(unaff_r4 + 100) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_080102D8 @ 0x080102D8 */

int * sub_080102D8(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 7) {
    piVar1 = param_1;
    if ((int *)param_1[0x66] != param_3) {
      piVar1 = (int *)0x0;
    }
  }
  else if (param_2 == 0x16) {
    piVar1 = (int *)__call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
    if (piVar1 != (int *)0x0) {
      iVar2 = sub_08027948(param_1[0x16],0);
      if (iVar2 == -1) {
        piVar1 = (int *)0x0;
      }
      else {
        iVar3 = *param_3;
        *param_3 = iVar3 + 1;
        param_3[iVar3 * 10 + 1] = iVar2;
        param_3[iVar3 * 10 + 2] = -1;
        param_3[iVar3 * 10 + 3] = (uint)*(byte *)(param_1 + 4);
        iVar2 = (param_1[0x69] >> 8) - DAT_030019d0;
        param_3[iVar3 * 10 + 4] = (param_1[0x68] >> 8) - DAT_030019cc;
        param_3[iVar3 * 10 + 5] = iVar2;
        piVar1 = (int *)0x0;
      }
    }
  }
  else {
    piVar1 = (int *)sub_0800F5C6(param_1,param_2,param_3);
  }
  return piVar1;
}


/* sub_08010302 @ 0x08010302 */

undefined4 sub_08010302(int param_1)

{
  undefined4 unaff_r4;
  int unaff_r5;
  
  if (param_1 != unaff_r5) {
    unaff_r4 = 0;
  }
  return unaff_r4;
}


/* sub_08010388 @ 0x08010388 */

void sub_08010388(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}


/* sub_08010398 @ 0x08010398 */

void sub_08010398(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(ushort *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = (short)iVar1;
  *(byte *)(param_2 + 0x11) = (byte)((uint)(iVar1 * 0x8000000) >> 0x1e);
  return;
}


/* sub_080103A6 @ 0x080103A6 */

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


/* sub_080104F2 @ 0x080104F2 */

undefined4 * sub_080104F2(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x240), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080109AA(param_1,param_2,param_3,1);
  *param_1 = &_0804E1B4;
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D038;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
  }
  sub_0800ED18(param_1,puVar1);
  sub_0800ECDA(param_1,0xf);
  return param_1;
}


/* sub_080104FC @ 0x080104FC */

undefined4 * sub_080104FC(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char in_ZR;
  
  if ((in_ZR != '\0') &&
     (unaff_r4 = (undefined4 *)sub_0803D5B8(0x240), unaff_r4 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080109AA(unaff_r4,unaff_r5,unaff_r6,1);
  *unaff_r4 = &_0804E1B4;
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D038;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
  }
  sub_0800ED18(unaff_r4,puVar1);
  sub_0800ECDA(unaff_r4,0xf);
  return unaff_r4;
}


/* sub_08010548 @ 0x08010548 */

void sub_08010548(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D038;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
  }
  sub_0800ED18(param_1,puVar1);
  return;
}


/* sub_0801056C @ 0x0801056C */

void sub_0801056C(void)

{
  sub_0800EF08();
  return;
}


/* sub_08010574 @ 0x08010574 */

void sub_08010574(void)

{
  return;
}


/* sub_08010588 @ 0x08010588 */

void sub_08010588(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (uint)DAT_03001068 * 0x68;
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar2] * 0x18] << 0x19) < 0
     ) {
    do {
      *(short *)(&DAT_0300157e + iVar2) = 0;
    } while (*(short *)(&DAT_0300157e + iVar2) != 0);
    do {
      *(short *)(&DAT_03001580 + iVar2) = 0;
    } while (*(short *)(&DAT_03001580 + iVar2) != 0);
    (&DAT_03001574)[iVar2] = (&DAT_086b8303)[(uint)(byte)(&DAT_03001574)[iVar2] * 0x18];
  }
  uVar1 = sub_0801713C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[iVar2] * 0x18);
  sub_0800EDF8(DAT_03001c34,uVar1);
  sub_08012588(&gUnknown_0877C5A4,0);
  return;
}


/* sub_080105FA @ 0x080105FA */

undefined4 sub_080105FA(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,param_3,*(int *)(*param_2 + 0x5c) + *param_2);
  if (iVar1 != 0) {
    return 1;
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    return 0;
  }
  __call_via_r3(param_1,param_2,param_3,*(int *)(*param_1 + 0xc) + *param_1);
  return 0;
}


/* sub_08010634 @ 0x08010634 */

void sub_08010634(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x22c) + 4);
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 4);
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  return;
}


/* sub_0801064C @ 0x0801064C */

void sub_0801064C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
  iVar3 = *(int *)param_1[0x8b];
  __call_via_r2((int *)param_1[0x8b],param_1,*(int *)(iVar3 + 4) + iVar3);
  piVar2 = (int *)sub_0801714A(&gUnknown_086B82EC + (uint)*(byte *)(iVar1 + 0x14) * 0x18);
  param_1[0x8b] = (int)piVar2;
  __call_via_r2(piVar2,param_1,*(int *)*piVar2 + *piVar2);
  return;
}


/* sub_08010692 @ 0x08010692 */

void sub_08010692(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = sub_0801713C(&gUnknown_086B82EC + (uint)*(byte *)(param_2 + 0x14) * 0x18);
  sub_0800EDF8(param_1,uVar1);
  iVar3 = *(int *)param_1[0x8b];
  __call_via_r2((int *)param_1[0x8b],param_1,*(int *)(iVar3 + 4) + iVar3);
  piVar2 = (int *)sub_0801714A(&gUnknown_086B82EC + (uint)*(byte *)(param_2 + 0x14) * 0x18);
  param_1[0x8b] = (int)piVar2;
  __call_via_r2(piVar2,param_1,*(int *)*piVar2 + *piVar2);
  sub_0801064C(param_1);
  __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
  return;
}


/* sub_080106F6 @ 0x080106F6 */

void sub_080106F6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x22c) + 4);
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 8);
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  return;
}


/* sub_0801070E @ 0x0801070E */

void sub_0801070E(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*param_2 + 0x80);
  iVar3 = __call_via_r1(param_2,iVar3 + *param_2,iVar3,param_4,param_4);
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(iVar3 + 0x14) * 0x18] << 0x1a) < 0) {
    iVar4 = *(int *)(*param_2 + 0x80);
    iVar3 = __call_via_r1(param_2,iVar4 + *param_2,iVar4,(uint)*(byte *)(iVar3 + 0x14) * 2,param_4);
    uVar1 = *(undefined2 *)(iVar3 + 2);
    iVar3 = **(int **)(param_2[0x8b] + 4);
    __call_via_r1(*(int **)(param_2[0x8b] + 4),*(int *)(iVar3 + 8) + iVar3);
    DAT_03001068 = (byte)((ushort)uVar1 >> 8);
    DAT_03001544 = 0;
    sub_08010692(param_2,&DAT_03001560 + (uint)DAT_03001068 * 0x68);
    iVar3 = **(int **)(param_2[0x8b] + 4);
    __call_via_r1(*(int **)(param_2[0x8b] + 4),*(int *)(iVar3 + 4) + iVar3);
  }
  param_2[0x73] = 0;
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 5;
    *puVar2 = &_0804C768;
  }
  sub_0800ECDA(param_2,0x11);
  sub_0800ED18(param_2,puVar2);
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 200;
    *puVar2 = &_080496BC;
  }
  iVar3 = DAT_0300225c * 4;
  DAT_0300225c = DAT_0300225c + 1;
  *(undefined4 **)(&DAT_03002260 + iVar3) = puVar2;
  return;
}


/* sub_080107FC @ 0x080107FC */

void sub_080107FC(undefined4 param_1,int param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18;
  int local_14;
  
  if ((*(int *)(param_2 + 0x1c8) == 0) || (*(byte *)(param_2 + 0x10) != (*param_3 ^ 1))) {
    *(byte *)(param_2 + 0x10) = *param_3 ^ 1;
    puVar2 = (undefined4 *)sub_0803D5B8(8);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar2 + 1) = 3;
      *puVar2 = &_0804D75C;
    }
    sub_0800ECDA(param_2,9);
    sub_0800ED18(param_2,puVar2);
  }
  else {
    iVar1 = (uint)*(byte *)(param_2 + 0x10) * 8;
    local_18 = *(int *)(param_2 + 0x1a0) + *(int *)(&gUnknown_080727A0 + iVar1);
    local_14 = *(int *)(param_2 + 0x1a4) + *(int *)(&DAT_080727a4 + iVar1);
    iVar1 = sub_080097EA(&DAT_030019a4,&local_18,param_2 + 0x19c,param_4,local_18,local_14,local_18,
                         local_14);
    if (iVar1 != 0) {
      *(int *)(param_2 + 0x1a0) = local_18;
      *(int *)(param_2 + 0x1a4) = local_14;
    }
  }
  return;
}


/* sub_0801088A @ 0x0801088A */

void sub_0801088A(undefined4 param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_88 [84];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_2[0x73] = 0;
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 5;
    *puVar2 = &_0804C768;
  }
  sub_0800ECDA(param_2,0x11);
  sub_0800ED18(param_2,puVar2);
  bVar1 = false;
  iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x88) + *param_2);
  if (iVar3 == 0) {
    if (DAT_03002f5c >> 1 < (int)(DAT_03002bfc + 1)) {
      bVar1 = true;
    }
  }
  else if (DAT_03002f5c >> 1 < (int)(DAT_03002bfd + 1)) {
    bVar1 = true;
  }
  if (bVar1) {
    __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    uStack_1c = Player_GetLevel();
    uStack_18 = 0xffffffff;
    sub_0800FDFA(&iStack_2c,param_2);
    DAT_03001010 = iStack_2c + iStack_24 >> 1;
    DAT_03001014 = iStack_28 + iStack_20 >> 1;
    iStack_34 = DAT_03001010;
    iStack_30 = DAT_03001014;
    iVar3 = sub_0803FACC(0x40);
    DAT_03001018 = ((int)(((uint)(iVar3 + -0x20 >> 0x1f) >> 0x1b) + iVar3 + -0x20) >> 5) << 8;
    iVar3 = sub_0803FACC(0x40);
    DAT_0300101c = ((int)(((uint)(iVar3 + -0x20 >> 0x1f) >> 0x1b) + iVar3 + -0x20) >> 5) << 8;
    sub_08004098(auStack_88,&gUnknown_08799D0C,&uStack_1c);
  }
  return;
}


/* sub_08010974 @ 0x08010974 */

void sub_08010974(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x22c) + 4);
    iVar3 = *piVar1;
    uVar2 = __call_via_r1(piVar1,*(int *)(iVar3 + 0xc) + iVar3);
    sub_0800ED18(param_1,uVar2);
    return;
  }
  sub_0800ED18(param_1,(&gUnknown_0807273C)[param_2]);
  return;
}


/* sub_080109AA @ 0x080109AA */

undefined4 * sub_080109AA(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x240), param_1 != (undefined4 *)0x0)) {
    sub_0800E6B8(param_1,param_2,&DAT_03001b0c,param_3,iVar2);
    *param_1 = &_0804C9F0;
    DAT_03001c34 = param_1;
    param_1[0x89] = &DAT_03001c3c;
    *(undefined2 *)(param_1 + 0x8c) = 0;
    param_1[0x8d] = 0;
    param_1[0x8a] = 0;
    if (param_4 != 0) {
      piVar1 = (int *)sub_0801714A(&gUnknown_086B82EC +
                                   (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
      param_1[0x8b] = piVar1;
      __call_via_r2(piVar1,param_1,*(int *)*piVar1 + *piVar1);
      sub_08010974(param_1,0);
    }
  }
  return param_1;
}


/* sub_08010A3A @ 0x08010A3A */

undefined4 * sub_08010A3A(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x2a8), param_1 != (undefined4 *)0x0)) {
    sub_080109AA(param_1,param_2,param_3,0);
    *param_1 = &_0804DA88;
    sub_08046FF4((int)param_1 + 0x26e,(int)param_1 + 0x27a,2,0x8050869);
    sub_08046FF4(param_1 + 0x9f,param_1 + 0xa3,4,0x8050535);
    sub_08046DD0(param_1 + 0x90,param_4,0x56);
    *(undefined1 *)((int)param_1 + 0x296) = *(undefined1 *)(param_4 + 0x56);
    *(undefined1 *)((int)param_1 + 0x297) = *(undefined1 *)(param_4 + 0x57);
    *(undefined2 *)(param_1 + 0xa6) = *(undefined2 *)(param_4 + 0x58);
    *(undefined2 *)((int)param_1 + 0x29a) = *(undefined2 *)(param_4 + 0x5a);
    *(undefined2 *)(param_1 + 0xa7) = *(undefined2 *)(param_4 + 0x5c);
    *(undefined2 *)((int)param_1 + 0x29e) = *(undefined2 *)(param_4 + 0x5e);
    *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_4 + 0x60);
    *(undefined2 *)((int)param_1 + 0x2a2) = *(undefined2 *)(param_4 + 0x62);
    *(undefined2 *)(param_1 + 0xa9) = *(undefined2 *)(param_4 + 100);
    *(undefined2 *)((int)param_1 + 0x2a6) = *(undefined2 *)(param_4 + 0x66);
    piVar1 = (int *)sub_0801714A(&gUnknown_086B82EC + (uint)*(byte *)(param_1 + 0x95) * 0x18);
    param_1[0x8b] = piVar1;
    __call_via_r2(piVar1,param_1,*(int *)*piVar1 + *piVar1);
    sub_08010974(param_1,0);
  }
  return param_1;
}


/* sub_08010B10 @ 0x08010B10 */

int sub_08010B10(undefined2 param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int unaff_r5;
  int unaff_r6;
  
  *(undefined2 *)(param_4 + 0x66) = param_1;
  piVar1 = (int *)sub_0801714A((uint)*(byte *)(unaff_r6 + 0x14) * 0x18 + param_2);
  *(int **)(unaff_r5 + 0x22c) = piVar1;
  __call_via_r2(piVar1,unaff_r5,*(int *)*piVar1 + *piVar1);
  sub_08010974(unaff_r5,0);
  return unaff_r5;
}


