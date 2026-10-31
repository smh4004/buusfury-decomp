/* Ghidra reference decompilation of code_08036394 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08036394 @ 0x08036394 */

void sub_08036394(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804A6D0;
    param_1[1] = param_2;
    param_1[6] = param_4;
    param_1[5] = param_3;
    param_1[4] = 0;
    param_1[3] = (DAT_03000f94 - param_4) + -1;
  }
  return;
}


/* sub_080363C4 @ 0x080363C4 */

undefined4 sub_080363C4(int param_1)

{
  int iVar1;
  
  if ((DAT_03003304 & 0xf3) == 0) {
    if (*(int *)(param_1 + 0x18) < DAT_03000f94 - *(int *)(param_1 + 0xc)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0xc) = DAT_03000f94;
    iVar1 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar1;
    if (*(int *)(param_1 + 0x14) < iVar1) {
      return 1;
    }
  }
  return 0;
}


/* sub_080363FA @ 0x080363FA */

void sub_080363FA(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x14),param_2,**(undefined4 **)(param_1 + 0x14));
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  puVar2 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804A6D0;
    puVar2[1] = uVar1;
    puVar2[6] = iVar3;
    puVar2[5] = uVar4;
    puVar2[4] = 0;
    puVar2[3] = (DAT_03000f94 - iVar3) + -1;
  }
  return;
}


/* sub_0803643C @ 0x0803643C */

undefined4 * sub_0803643C(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x9c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0xf40;
    uVar1 = sub_0801124C(&DAT_03001c4c,0xf40);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0xf40);
      uVar1 = sub_0801124C(&DAT_03001c4c,0xf40);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804BAF4;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 2) = 0x11;
    param_1[4] = (&DAT_03002a68)[(DAT_03002a64 - param_2) + -1];
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x875a750,0x40);
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      param_1[iVar2 + 6] = 0xffffffff;
      iVar2 = iVar3;
    } while (iVar3 < 0x20);
    param_1[0x26] = 0xffffffff;
  }
  return param_1;
}


/* sub_080364C6 @ 0x080364C6 */

void sub_080364C6(int param_1)

{
  int iVar1;
  int local_58 [4];
  undefined1 local_48 [2];
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_28;
  undefined4 local_24;
  
  sub_0803F540(local_48,0xf0);
  Wfz_LoadContainer(&gUnknown_0807248C,local_24);
  local_3c = &gUnknown_0806E050;
  local_44 = 0x78;
  local_40 = 0xb;
  local_45 = 2;
  local_46 = 1;
  local_28 = 0x803f5a5;
  local_48[0] = 1;
  sub_0803DADA(local_48,*(undefined4 *)(&gUIStringPtrs + *(int *)(param_1 + 0x98) * 4));
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0x20;
  local_58[3] = 0x10;
  iVar1 = 0;
  do {
    sub_0804915C((int)local_48,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + iVar1 * 0x200 + 0x6010040,
                 (int)local_58);
    iVar1 = iVar1 + 1;
    local_58[0] = local_58[0] + 0x20;
    local_58[2] = local_58[2] + 0x20;
  } while (iVar1 < 7);
  local_58[2] = 0xf0;
  sub_0804915C((int)local_48,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e40,(int)local_58);
  sub_0803F58C(local_48,0);
  return;
}


/* sub_0803656C @ 0x0803656C */

void sub_0803656C(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x10);
  sVar1 = *(short *)(iVar6 + 4);
  sVar2 = *(short *)(iVar6 + 6);
  sVar3 = *(short *)(iVar6 + 8);
  sVar4 = *(short *)(iVar6 + 10);
  iVar6 = 0x7fffffff;
  iVar10 = 0;
  if (0 < DAT_03002a64) {
    do {
      iVar9 = (&DAT_03002a68)[iVar10];
      if (iVar9 != iVar5) {
        iVar7 = ((int)*(short *)(iVar9 + 4) + *(short *)(iVar9 + 8) + 0xf >> 1) -
                ((int)sVar1 + sVar3 + 0xf >> 1);
        iVar8 = ((int)*(short *)(iVar9 + 6) + *(short *)(iVar9 + 10) + 7 >> 1) -
                ((int)sVar2 + sVar4 + 7 >> 1);
        iVar11 = *(int *)(&gUnknown_0807268C + param_2 * 8) * iVar7 +
                 *(int *)(&DAT_08072690 + param_2 * 8) * iVar8;
        iVar7 = *(int *)(&DAT_08072690 + param_2 * 8) * iVar7 +
                *(int *)(&gUnknown_0807268C + param_2 * 8) * iVar8;
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if ((iVar7 <= iVar11) && (iVar7 = iVar11 * iVar11 + iVar7 * iVar7 * 9, iVar7 < iVar6)) {
          *(int *)(param_1 + 0x10) = iVar9;
          *(undefined4 *)(param_1 + 0x98) =
               *(undefined4 *)((DAT_03002a64 - iVar10) * 4 + param_1 + 0x14);
          iVar6 = iVar7;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < DAT_03002a64);
  }
  if (*(int *)(param_1 + 0x98) != -1) {
    sub_080364C6();
  }
  return;
}


/* sub_0803669E @ 0x0803669E */

void sub_0803669E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
    sub_0803656C(param_1,2,param_3,param_4,param_4);
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    sub_0803656C(param_1,3);
  }
  if ((int)((uint)DAT_03003304 << 0x19) < 0) {
    sub_0803656C(param_1,1);
  }
  if ((int)((uint)DAT_03003304 << 0x18) < 0) {
    sub_0803656C(param_1,0);
  }
  if ((DAT_03003304 & 1) != 0) {
    iVar1 = **(int **)(param_1 + 0x10);
    __call_via_r2(*(int **)(param_1 + 0x10),DAT_03001c34,*(int *)(iVar1 + 4) + iVar1);
  }
  return;
}


/* sub_08036730 @ 0x08036730 */

undefined4 sub_08036730(int param_1)

{
  *(int *)(param_1 + 4) =
       (int)*(short *)(*(int *)(param_1 + 0x10) + 6) + *(short *)(*(int *)(param_1 + 0x10) + 10) + 7
       >> 1;
  return 1;
}


/* sub_08036780 @ 0x08036780 */

void sub_08036780(int param_1,int *param_2,short *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_3 - DAT_030019cc;
  uVar3 = param_3[1] - DAT_030019d0;
  if ((((-9 < iVar1) && (iVar1 < 0xf0)) && (-9 < (int)uVar3)) && ((int)uVar3 < 0xa0)) {
    *(undefined4 *)*param_2 = param_4;
    uVar4 = *(uint *)*param_2;
    uVar2 = (uint)(iVar1 * 0x800000) >> 7;
    *(uint *)*param_2 = uVar2 | uVar4 & 0xfe00ffff;
    *(uint *)*param_2 = uVar2 | uVar4 & 0xfe00ff00 | uVar3 & 0xff;
    uVar2 = *(uint *)(*param_2 + 4);
    uVar3 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    *(uint *)(*param_2 + 4) = uVar3 | uVar2 & 0xfffff3ff;
    *(uint *)(*param_2 + 4) = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar3 | uVar2 & 0xfffff000;
    *param_2 = *param_2 + 8;
  }
  return;
}


/* sub_08036804 @ 0x08036804 */

undefined4 sub_08036804(int param_1,undefined4 *param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int *local_18;
  
  local_18 = (int *)*param_2;
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  if (iVar3 * 0x8000000 < 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    sVar1 = *(short *)(iVar3 + 6);
    local_24 = *(undefined4 *)(iVar3 + 4);
    local_20 = *(short *)(iVar3 + 8) + 0xf;
    local_1c = *(short *)(iVar3 + 10) + 7;
    sub_08036780(param_1,&local_18,&local_24,0x2000,(int)*(short *)(iVar3 + 4),(int)sVar1);
    local_24._2_2_ = (short)local_1c + -8;
    sub_08036780(param_1,&local_18,&local_24,0x20002000);
    local_24 = CONCAT22(local_24._2_2_,(short)local_20 + -8);
    sub_08036780(param_1,&local_18,&local_24,0x30002000);
    local_24 = CONCAT22(sVar1,(undefined2)local_24);
    sub_08036780(param_1,&local_18,&local_24,0x10002000);
  }
  if (*(int *)(param_1 + 0x98) != -1) {
    iVar3 = 0;
    piVar2 = local_18;
    do {
      local_18 = piVar2;
      *local_18 = ((uint)(iVar3 << 0x1c) >> 7 | 0x80006000) + 0x88;
      iVar5 = iVar3 * 0x10;
      iVar3 = iVar3 + 1;
      uVar6 = local_18[1];
      uVar4 = (uint)*(ushort *)(param_1 + 0xc) + iVar5 + 2 & 0x3ff;
      local_18[1] = uVar4 | uVar6 & 0xfffffc00;
      local_18[1] = uVar4 | uVar6 & 0xfffff000 |
                    (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
      piVar2 = local_18 + 2;
    } while (iVar3 < 7);
    local_18[2] = 0x40e02088;
    uVar6 = local_18[3];
    uVar4 = *(ushort *)(param_1 + 0xc) + 0x72 & 0x3ff;
    local_18[3] = uVar4 | uVar6 & 0xfffffc00;
    local_18[3] = uVar4 | uVar6 & 0xfffff000 |
                  (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    local_18 = local_18 + 4;
  }
  *param_2 = local_18;
  return 0;
}


/* sub_08036914 @ 0x08036914 */

undefined4 sub_08036914(int param_1,int param_2,int *param_3)

{
  if (param_2 == 0xb) {
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),0x875a750,0x40);
    return 0;
  }
  if (param_2 == 0x23) {
    *(int *)(*param_3 * 4 + param_1 + 0x18) = param_3[1];
    if ((&DAT_03002a68)[(DAT_03002a64 - *param_3) + -1] == *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x98) = param_3[1];
      sub_080364C6();
    }
    return 1;
  }
  return 0;
}


/* sub_08036988 @ 0x08036988 */

undefined4 sub_08036988(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  sub_08011C70(&DAT_03001c4c,0x22,1);
  uVar1 = sub_0802A028(param_1,param_2);
  sub_08011C70(&DAT_03001c4c,0x22,0);
  return uVar1;
}


/* sub_080369B2 @ 0x080369B2 */

void sub_080369B2(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0x32;
    puVar1[1] = uVar2;
    puVar1[5] = 0;
    *puVar1 = &_0804B080;
  }
  return;
}


/* sub_080369D0 @ 0x080369D0 */

undefined4 sub_080369D0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  sub_08011C70(&DAT_03001c4c,0x22,1);
  uVar1 = sub_08018C3A(param_1,param_2);
  sub_08011C70(&DAT_03001c4c,0x22,0);
  return uVar1;
}


/* sub_080369FA @ 0x080369FA */

undefined4 * sub_080369FA(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AD38;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_08036A1C @ 0x08036A1C */

void sub_08036A1C(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *(char **)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x10) - (int)*pcVar2;
  *(int *)(param_1 + 0x20) = iVar3;
  iVar4 = *(int *)(param_1 + 0x14) - (int)pcVar2[1];
  *(int *)(param_1 + 0x24) = iVar4;
  bVar1 = pcVar2[2];
  *(uint *)(param_1 + 0x2c) = iVar4 + (uint)(byte)pcVar2[3];
  *(uint *)(param_1 + 0x28) = iVar3 + (uint)bVar1;
  return;
}


/* sub_08036A44 @ 0x08036A44 */

undefined4 * sub_08036A44(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x3c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x1000;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x1000);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x1000);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x1000);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804AF50;
    uVar2 = *param_2;
    iVar1 = param_2[1];
    param_1[0xe] = &gUnknown_0875F7AC;
    param_1[4] = uVar2;
    param_1[5] = iVar1;
    *(undefined1 *)(param_1 + 2) = 0x3c;
    param_1[0xc] = 0;
    param_1[1] = iVar1;
    param_1[0xd] = 0;
    param_1[8] = param_1[4];
    param_1[9] = iVar1;
    param_1[0xb] = iVar1 + 0x40;
    param_1[10] = param_1[4] + 0x40;
  }
  return param_1;
}


/* sub_08036AC2 @ 0x08036AC2 */

void sub_08036AC2(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x30) != iVar2) {
    *(int *)(param_1 + 0x30) = iVar2;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar2 + 8),
                 (uint)*(byte *)(iVar2 + 3) * (uint)*(byte *)(iVar2 + 2));
    if (*(undefined **)(param_1 + 0x38) == &DAT_0875f7c4) {
      *(undefined4 *)(param_1 + 0x34) = 0xf0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (0x17 < iVar2 + -0x875f7ac) {
    iVar3 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar3 + -1;
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x38) = iVar2 + 0xc;
      sub_08053080(iVar2 + -0x875f7a0);
      if (extraout_r1 == 6) {
        *(undefined1 **)(param_1 + 0x38) = &gUnknown_0875F7AC;
      }
      else {
        *(undefined4 *)(param_1 + 0x34) = 0x5a;
      }
    }
  }
  piVar1 = DAT_03001c34;
  if ((((DAT_03001c34 != (int *)0x0) && (DAT_03001c34[0x73] != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x38) + -0x875f7ac, 0x17 < iVar2)) && (iVar2 < 0x3c)) {
    iStack_4c = *(int *)(param_1 + 0x10) + 0x10;
    iStack_48 = *(int *)(param_1 + 0x14) + 0x10;
    iStack_38 = *(int *)(param_1 + 0x10) + 0x30;
    iStack_34 = *(int *)(param_1 + 0x14) + 0x30;
    iStack_40 = iStack_4c;
    iStack_3c = iStack_48;
    sub_0800FDFA(&iStack_54,DAT_03001c34);
    if (((iStack_54 < iStack_38) && (iStack_40 < iStack_4c)) &&
       ((iStack_50 < iStack_34 && (iStack_3c < iStack_48)))) {
      uStack_18 = 0x400;
      uStack_20 = 0;
      iVar2 = *piVar1;
      __call_via_r2(piVar1,auStack_30,*(int *)(iVar2 + 0x5c) + iVar2);
    }
  }
  return;
}


/* sub_08036B9C @ 0x08036B9C */

undefined4 sub_08036B9C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined **)(param_1 + 0x38) == &DAT_0875f7c4) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24) - DAT_030019c0;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) - DAT_030019bc;
    *(int *)(param_1 + 0x1c) = iVar2;
    if ((((*(int *)(param_1 + 0x20) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x28))) &&
        (*(int *)(param_1 + 0x24) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x2c))) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_08036BF6 @ 0x08036BF6 */

bool sub_08036BF6(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x38) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x18) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x1c) & 0xff;
  uVar2 = puVar1[1];
  puVar1[1] = uVar2 | 0xc00;
  puVar1[1] = uVar2 & 0xfffffc00 | 0xc00 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  return *(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x30);
}


/* sub_08036C4E @ 0x08036C4E */

bool sub_08036C4E(int *param_1,int param_2,int *param_3)

{
  int extraout_r1;
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_2 == 0xb) {
    iVar2 = param_1[0xe];
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),*(int *)(iVar2 + 8),
                 (uint)*(byte *)(iVar2 + 3) * (uint)*(byte *)(iVar2 + 2));
    bVar6 = false;
  }
  else if (param_2 == 0xc) {
    __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
    bVar6 = false;
  }
  else if (param_2 == 0x21) {
    iVar2 = param_1[4] + 0x10;
    iVar5 = param_1[5] + 0x10;
    iVar3 = param_1[4] + 0x30;
    iVar4 = param_1[5] + 0x30;
    if ((((*param_3 < iVar3) && (iVar2 < param_3[2])) && (param_3[1] < iVar4)) &&
       (iVar5 < param_3[3])) {
      puVar1 = &UNK_0875f7b8;
      if ((undefined1 *)param_1[0xe] != &gUnknown_0875F7AC) {
        puVar1 = &DAT_0875f7c4;
      }
      param_1[0xe] = (int)puVar1;
      *param_3 = iVar2;
      param_3[1] = iVar5;
      param_3[2] = iVar3;
      param_3[3] = iVar4;
      bVar6 = (undefined *)param_1[0xe] == &DAT_0875f7c4;
    }
    else {
      bVar6 = false;
    }
  }
  else if (param_2 == 0x22) {
    local_24 = param_1[4] + 0x10;
    local_20 = param_1[5] + 0x10;
    local_1c = param_1[4] + 0x30;
    local_18 = param_1[5] + 0x30;
    sub_08053080(param_1[0xe] + -0x875f7ac);
    if ((extraout_r1 < 2) || (extraout_r1 == 5)) {
      sub_08009930(&local_24,DAT_03001a4c,1);
      sub_08009930(&local_24,DAT_03001a54,1);
      bVar6 = false;
    }
    else {
      sub_08009930(&local_24,DAT_03001a4c,param_3 == (int *)0x0);
      sub_08009930(&local_24,DAT_03001a54,param_3 == (int *)0x0);
      bVar6 = false;
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


/* sub_08036D84 @ 0x08036D84 */

void sub_08036D84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_080210B6(&DAT_03002bd8);
  DAT_030019ac = *(int *)(param_1 + 8) << 10;
  uVar1 = sub_08054ADC(*(undefined4 *)(param_1 + 8));
  sub_08054B3C(uVar1,0x3bb7e762);
  sub_080549B4();
  sub_08049198();
  uVar1 = sub_080532E8();
  uVar1 = sub_08054B3C(uVar1,0x4222f9db);
  sub_08054B3C(uVar1,0x44800000);
  iVar2 = sub_08054A64();
  DAT_030019b4 = iVar2 + 0x4400;
  sub_0802ED98(&DAT_030019a4);
  return;
}


/* sub_08036DD6 @ 0x08036DD6 */

void sub_08036DD6(int param_1)

{
  sub_080210B6(&DAT_03002bd8);
  DAT_030019b0 = *(int *)(param_1 + 8) << 10;
  sub_0802ED98(&DAT_030019a4);
  return;
}


/* sub_08036DF2 @ 0x08036DF2 */

void sub_08036DF2(int param_1)

{
  sub_080210B6(&DAT_03002bd8);
  if (DAT_03001a34 == 0) {
    sub_080094F0(&DAT_030019a4,param_1 + 8);
  }
  else {
    DAT_030019a4 = *(int *)(param_1 + 8) << 10;
    DAT_030019a8 = *(int *)(param_1 + 0xc) << 10;
    sub_0802ED98(&DAT_030019a4);
  }
  return;
}


/* sub_08036E2A @ 0x08036E2A */

void sub_08036E2A(int param_1)

{
  sub_080210B6(&DAT_03002bd8);
  DAT_030019a4 = *(int *)(param_1 + 8) << 10;
  DAT_030019a8 = *(int *)(param_1 + 0xc) << 10;
  DAT_030019ac = *(int *)(param_1 + 0x10) << 10;
  sub_0802ED98(&DAT_030019a4);
  return;
}


/* sub_08036E60 @ 0x08036E60 */

undefined4 sub_08036E60(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_2,1,0,*(int *)(*param_2 + 0x74) + *param_2,param_4);
  return 1;
}


/* sub_08036E76 @ 0x08036E76 */

undefined4 * sub_08036E76(void)

{
  return &DAT_03003280;
}


/* sub_08036E7A @ 0x08036E7A */

undefined4 sub_08036E7A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_2,1,param_3,*(int *)(*param_2 + 0x74) + *param_2,param_4);
  return 1;
}


/* sub_08036E8E @ 0x08036E8E */

void sub_08036E8E(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_2,1,param_3,*(int *)(*param_2 + 0x74) + *param_2,param_4);
  return;
}


/* sub_08036EA4 @ 0x08036EA4 */

undefined4 sub_08036EA4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_03001c34 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) - (*(int *)(param_2 + 0x1a0) >> 8);
    iVar3 = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) - (*(int *)(param_2 + 0x1a4) >> 8);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if ((iVar2 < 0x11) && (iVar3 < 0x11)) {
      iVar2 = *(int *)(DAT_03001c34 + 0x1a8) - *(int *)(param_2 + 0x1a8) >> 10;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      uVar1 = 1;
      if (0xf < iVar2) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_08036F44 @ 0x08036F44 */

undefined4 * sub_08036F44(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804BDE0;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08036F6C @ 0x08036F6C */

void sub_08036F6C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
               (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
  iVar1 = *(int *)(param_1 + 0x3c);
  sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200,*(int *)(iVar1 + 0x14),
               (uint)*(byte *)(iVar1 + 0xf) * (uint)*(byte *)(iVar1 + 0xe));
  return;
}


/* sub_08036FA2 @ 0x08036FA2 */

undefined4 * sub_08036FA2(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  
  puStack_24 = param_1;
  piStack_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x600;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x600);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x600);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x600);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804AF24;
    iVar1 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = iVar1;
    param_1[0xe] = (uint)*(byte *)(param_3 + 0x10);
    *(undefined1 *)(param_1 + 2) = 0x37;
    param_1[1] = param_2[1];
    param_1[0x11] = param_3;
    param_1[6] = 0x20;
    *(undefined1 *)(param_1 + 4) = 0;
    iStack_34 = *param_2 + -0xc;
    iStack_30 = param_2[1] + -0xc;
    iStack_2c = *param_2 + 0xc;
    iStack_28 = param_2[1] + 0xc;
    param_1[0xd] = 8;
    iVar1 = sub_08009324(&iStack_34,DAT_03001a50);
    if (iVar1 != 0) {
      do {
        iStack_34 = iStack_34 + *(int *)(&gUnknown_0807268C + param_1[0xe] * 8) * 8;
        iStack_30 = iStack_30 + *(int *)(&DAT_08072690 + param_1[0xe] * 8) * 8;
        iStack_2c = iStack_2c + *(int *)(&gUnknown_0807268C + param_1[0xe] * 8) * 8;
        iStack_28 = iStack_28 + *(int *)(&DAT_08072690 + param_1[0xe] * 8) * 8;
        param_1[0xd] = param_1[0xd] + 8;
        iVar1 = sub_08009324(&iStack_34,DAT_03001a50);
      } while (iVar1 != 0);
    }
    param_1[0x10] = &gUnknown_0876174C + iStack_18 * 0xc;
    param_1[0xf] = *(int *)(&gUnknown_0876174C + iStack_18 * 0xc) + param_1[0xe] * 0x18;
    iVar1 = param_1[0xe] * 8;
    param_1[5] = DAT_03000f94;
    uVar2 = *(undefined4 *)(&gUnknown_0807268C + iVar1);
    param_1[0xc] = *(undefined4 *)(&DAT_08072690 + iVar1);
    param_1[0xb] = uVar2;
    sub_08036F6C(param_1);
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319428,0x40,0);
  }
  return param_1;
}


/* sub_080370CC @ 0x080370CC */

void sub_080370CC(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804AF24;
  sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
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


/* sub_08037106 @ 0x08037106 */

void sub_08037106(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 2;
  return;
}


/* sub_0803710C @ 0x0803710C */

void sub_0803710C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0x18) < 0x100) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x02') {
    iVar1 = *(int *)(param_1 + 0x18) + -0x20;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 != 0) {
      return;
    }
    sub_08011944(&DAT_03001c4c,param_1);
    return;
  }
  if (param_2 != 0) {
    iStack_24 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
    iStack_18 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
    iStack_1c = iStack_24;
    uStack_30 = *(undefined4 *)(param_1 + 0x44);
    iStack_40 = *(int *)(param_1 + 0x18) * *(int *)(*(int *)(param_1 + 0x40) + 4) >> 8;
    piVar4 = (int *)(param_1 + 0x1c);
    uStack_3c = (undefined1)*(undefined4 *)(param_1 + 0x38);
    puStack_34 = &gUnknown_086B80E0;
    uStack_38 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
    auStack_50[0] = (undefined1)*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x1d0);
    piVar3 = piVar4;
    if (iStack_24 < *(int *)(param_1 + 0x1c)) {
      piVar3 = &iStack_1c;
    }
    iStack_4c = *piVar3 - iStack_40;
    piVar3 = (int *)(param_1 + 0x20);
    piVar5 = piVar3;
    if (iStack_18 < *(int *)(param_1 + 0x20)) {
      piVar5 = &iStack_18;
    }
    iStack_48 = *piVar5 - iStack_40;
    if (*piVar4 < iStack_24) {
      piVar4 = &iStack_1c;
    }
    iStack_44 = *piVar4 + iStack_40;
    if (*piVar3 < iStack_18) {
      piVar3 = &iStack_18;
    }
    iStack_40 = *piVar3 + iStack_40;
    iStack_20 = param_1;
    iVar2 = sub_08011C0C(&DAT_03001c4c,0,auStack_50);
    iVar1 = DAT_03000f94;
    if ((iVar2 != 0) && (0 < DAT_03000f94 - *(int *)(param_1 + 0x14))) {
      iVar2 = sub_0803FACC(5);
      *(int *)(param_1 + 0x14) = iVar1 + iVar2 + 3;
      iVar1 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar1 + 0x30) * 0xc,0x40,0);
    }
  }
  return;
}


/* sub_08037264 @ 0x08037264 */

void sub_08037264(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_08037274 @ 0x08037274 */

undefined4 sub_08037274(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) - DAT_030019c0;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x1c) - DAT_030019bc;
  *(int *)(param_1 + 0x28) = iVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return 1;
}


/* sub_080372A4 @ 0x080372A4 */

void sub_080372A4(int param_1,int param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x3c) + param_2 * 0xc);
  iVar4 = (*(int *)(param_1 + 0x24) - (int)*pcVar1) + *param_5;
  uVar2 = (*(int *)(param_1 + 0x28) - (int)pcVar1[1]) + param_5[1];
  if ((((iVar4 < 0xf0) && (0 < (int)(iVar4 + (uint)(byte)pcVar1[2]))) && ((int)uVar2 < 0xa0)) &&
     (0 < (int)(uVar2 + (byte)pcVar1[3]))) {
    *(undefined4 *)*param_3 = *(undefined4 *)(pcVar1 + 4);
    uVar6 = *(uint *)*param_3;
    uVar5 = (uint)(iVar4 * 0x800000) >> 7;
    *(uint *)*param_3 = uVar5 | uVar6 & 0xfe00ffff;
    uVar3 = uVar2 & 0xff | uVar5 | uVar6 & 0xfe00ff00;
    *(uint *)*param_3 = uVar3;
    if (param_6 != -1) {
      *(uint *)*param_3 = uVar3 | 0x100;
      *(uint *)*param_3 =
           uVar2 & 0xff | uVar5 | uVar6 & 0xc000ff00 | 0x100 | (uint)(param_6 << 0x1b) >> 2;
    }
    uVar3 = *(uint *)(*param_3 + 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) + param_4 & 0x3ff;
    *(uint *)(*param_3 + 4) = uVar2 | uVar3 & 0xfffffc00;
    *(uint *)(*param_3 + 4) =
         (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar3 & 0xfffff000;
    *param_3 = *param_3 + 8;
  }
  return;
}


/* sub_08037376 @ 0x08037376 */

undefined4 sub_08037376(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  undefined4 local_18;
  
  local_18 = *param_2;
  iVar3 = -1;
  if (*(int *)(param_1 + 0x18) != 0x100) {
    iVar1 = param_2[1];
    param_2[1] = iVar1 + 0x20;
    iVar3 = param_2[2];
    param_2[2] = iVar3 + 1;
    software_interrupt(6);
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      *(undefined2 *)(iVar1 + 6) = 0;
      *(undefined2 *)(iVar1 + 0xe) = 0;
      *(undefined2 *)(iVar1 + 0x16) = 0;
      *(undefined2 *)(iVar1 + 0x1e) = 0xff80;
    }
    else if (iVar2 == 1) {
      *(undefined2 *)(iVar1 + 6) = 0;
      *(undefined2 *)(iVar1 + 0xe) = 0;
      *(undefined2 *)(iVar1 + 0x16) = 0;
      *(undefined2 *)(iVar1 + 0x1e) = 0x100;
    }
    else if (iVar2 == 2) {
      *(undefined2 *)(iVar1 + 6) = 0xff80;
      *(undefined2 *)(iVar1 + 0xe) = 0;
      *(undefined2 *)(iVar1 + 0x16) = 0;
      *(undefined2 *)(iVar1 + 0x1e) = 0;
    }
    else if (iVar2 == 3) {
      *(undefined2 *)(iVar1 + 6) = 0x100;
      *(undefined2 *)(iVar1 + 0xe) = 0;
      *(undefined2 *)(iVar1 + 0x16) = 0;
      *(undefined2 *)(iVar1 + 0x1e) = 0;
    }
  }
  sub_080372A4(param_1,0,&local_18,0,&DAT_0875f814,iVar3);
  iVar1 = 0x10;
  if (0x10 < *(int *)(param_1 + 0x34) + -1) {
    do {
      iStack_20 = iVar1 * *(int *)(param_1 + 0x2c);
      iStack_1c = iVar1 * *(int *)(param_1 + 0x30);
      sub_080372A4(param_1,1,&local_18,0x10,&iStack_20,iVar3);
      iVar1 = iVar1 + 0x20;
    } while (iVar1 < *(int *)(param_1 + 0x34) + -1);
  }
  *param_2 = local_18;
  return 0;
}


/* sub_08037446 @ 0x08037446 */

undefined4 sub_08037446(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0xb) {
    sub_08036F6C();
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  }
  return 0;
}


/* sub_0803746C @ 0x0803746C */

undefined4 sub_0803746C(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_08037480 @ 0x08037480 */

undefined4 * sub_08037480(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x70), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x1000,param_2);
    *param_1 = &_0804A26C;
    iVar1 = param_3[1];
    param_1[8] = *param_3 << 8;
    param_1[9] = iVar1 << 8;
    param_1[0x13] = param_4;
    iVar1 = (uint)*(byte *)(param_1 + 4) * 8;
    param_1[0x11] = *(int *)(&gUnknown_0807268C + iVar1) << 7;
    param_1[0x12] = *(int *)(&DAT_08072690 + iVar1) << 7;
    *(undefined1 *)(param_1 + 2) = 0x37;
    iVar1 = *(int *)(param_4 + 8) + (uint)*(byte *)(param_1 + 4) * 0x78;
    param_1[0x14] = iVar1;
    param_1[6] = iVar1;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    sub_08019B4E(param_1);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0,iVar2);
    DAT_03003284 = DAT_03003284 + '\x01';
  }
  return param_1;
}


/* sub_0803750E @ 0x0803750E */

void sub_0803750E(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804A26C;
  DAT_03003284 = DAT_03003284 + -1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
  }
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


/* sub_0803756E @ 0x0803756E */

void sub_0803756E(int param_1)

{
  char cVar1;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 local_44;
  int local_40;
  undefined *local_3c;
  undefined4 local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == '\0') {
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
  else if (cVar1 == '\x01') {
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x3c;
  *(char *)(param_1 + 0x40) = '\x02';
  sub_0804F900(&local_1c,param_1 + 0x28);
  *(int *)(param_1 + 0x6c) = *(int *)(&DAT_0876ad04 + *(int *)(param_1 + 0x58) * 4) * 3 >> 1;
  local_24 = *(int *)(param_1 + 0x6c);
  local_20 = *(int *)(param_1 + 0x6c);
  local_38 = *(undefined4 *)(param_1 + 0x1c);
  local_44 = *(undefined1 *)(param_1 + 0x10);
  local_3c = &gUnknown_086B80F0;
  local_40 = (*(int *)(*(int *)(param_1 + 0x4c) + 0xc) * 0xf0 >> 0x10) * *(int *)(param_1 + 0x60);
  local_54 = local_1c - local_24;
  local_50 = local_18 - local_20;
  local_4c = local_1c + local_24;
  local_48 = local_18 + local_20;
  local_58[0] = *(undefined1 *)(param_1 + 0x11);
  local_28 = param_1;
  sub_08011C0C(&DAT_03001c4c,0,local_58);
  sub_0803E378(&DAT_03003e5c,&DAT_083193bc,0x40,0);
  *(int *)(param_1 + 100) = local_54;
  *(int *)(param_1 + 0x68) = local_50;
  return;
}


/* sub_08037650 @ 0x08037650 */

void sub_08037650(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  undefined1 auStack_64 [4];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 uStack_50;
  int iStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  char *local_20;
  int iStack_1c;
  int iStack_18;
  
  local_20 = (char *)(param_1 + 0x40);
  cVar1 = *local_20;
  iStack_1c = param_1;
  iStack_18 = param_2;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < 0x10) {
      *(int *)(param_1 + 0x58) = (iVar3 >> 3) - (iVar3 * 0x40000000 >> 0x1f);
    }
    else {
      if (iVar3 == 0x10) {
        *(undefined4 *)(param_1 + 0x54) = 0x60;
      }
      *(int *)(param_1 + 0x58) =
           (*(int *)(param_1 + 0x54) >> 5) - ((*(int *)(param_1 + 0x54) << 0x1c) >> 0x1f);
    }
    iVar3 = **(int **)(param_1 + 0x4c);
    if (iVar3 <= *(int *)(param_1 + 0x58)) {
      iVar5 = (*(int **)(param_1 + 0x4c))[1] - iVar3;
      if (iVar5 == 0) {
        *(int *)(param_1 + 0x58) = iVar3;
      }
      else {
        __16__rt_sdiv(iVar5,*(int *)(param_1 + 0x54) >> 2);
        *(int *)(param_1 + 0x58) = extraout_r1 + iVar3;
      }
    }
  }
  else if (cVar1 == '\x01') {
    iVar5 = **(int **)(param_1 + 0x4c);
    iVar3 = (*(int **)(param_1 + 0x4c))[1] - iVar5;
    if ((iVar3 != 0) && (iVar5 <= *(int *)(param_1 + 0x58))) {
      __16__rt_sdiv(iVar3,*(int *)(param_1 + 0x54) >> 2);
      *(int *)(param_1 + 0x58) = extraout_r1_00 + iVar5;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    sub_0804F900(&iStack_38,param_1 + 0x28);
    iStack_30 = iStack_38 + -4;
    iStack_2c = iStack_34 + -4;
    iStack_40 = iStack_38 + 4;
    iStack_3c = iStack_34 + 4;
    iStack_28 = iStack_40;
    iStack_24 = iStack_3c;
    iVar3 = sub_08009324(&iStack_30,DAT_03001a50);
    if (iVar3 == 0) {
      sub_0803756E(param_1);
      return;
    }
  }
  else if (cVar1 == '\x02') {
    uVar2 = *(int *)(param_1 + 0x5c) - 1;
    *(uint *)(param_1 + 0x5c) = uVar2;
    if (uVar2 == 0) {
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
    if ((uVar2 & 7) != 0) {
      return;
    }
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (iVar3 < 0x400) {
      return;
    }
    iStack_28 = sub_0803FACC(*(int *)(param_1 + 0x6c) << 1);
    iStack_28 = iStack_28 + *(int *)(param_1 + 100);
    iStack_24 = sub_0803FACC(*(int *)(param_1 + 0x6c) << 1);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x68);
    uVar4 = sub_0801952C(0,&iStack_28,0x38);
    sub_0801191A(&DAT_03001c4c,uVar4);
    return;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 0xc;
  sub_08019B4E(param_1);
  iVar3 = sub_08019B7C(param_1);
  if (iVar3 == 0) {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  else if ((((*local_20 == '\x01') && (iStack_18 != 0)) && (*(int *)(param_1 + 0x1c) != 0)) &&
          ((*(uint *)(param_1 + 0x54) & 3) == 0)) {
    sub_0804F900(&iStack_28,param_1 + 0x28);
    iStack_30 = *(int *)(&DAT_0876ad04 + *(int *)(param_1 + 0x58) * 4);
    iStack_2c = *(int *)(&DAT_0876ad04 + *(int *)(param_1 + 0x58) * 4);
    uStack_44 = *(undefined4 *)(param_1 + 0x1c);
    uStack_50 = *(undefined1 *)(param_1 + 0x10);
    puStack_48 = &gUnknown_086B80F0;
    iStack_4c = *(int *)(*(int *)(param_1 + 0x4c) + 0xc) * *(int *)(param_1 + 0x60) + 0xffff >> 0x10
    ;
    iStack_60 = iStack_28 - iStack_30;
    iStack_5c = iStack_24 - iStack_2c;
    iStack_58 = iStack_28 + iStack_30;
    iStack_54 = iStack_24 + iStack_2c;
    auStack_64[0] = *(undefined1 *)(param_1 + 0x11);
    iStack_34 = param_1;
    iVar3 = sub_08011C0C(&DAT_03001c4c,0,auStack_64);
    if (iVar3 != 0) {
      iVar3 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
    }
  }
  return;
}


/* sub_080378A0 @ 0x080378A0 */

void sub_080378A0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  if (*(int *)(param_1 + 0x54) < 0x3c) {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 1;
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC,0x5c4,param_4,param_4);
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319428,0x40,0);
  }
  return;
}


/* sub_080378E0 @ 0x080378E0 */

undefined4 sub_080378E0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x02') {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08019BF4();
  }
  return uVar1;
}


/* sub_080378F4 @ 0x080378F4 */

undefined4 sub_080378F4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      if (*(int *)(param_3 + 0x30) == param_1) {
        return 0;
      }
      if ((((*(char *)(*(int *)(param_3 + 0x1c) + 1) == '\x04') &&
           (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
          (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
         ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34) &&
          (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))) {
        iVar2 = *(int *)(&DAT_0876ad04 + *(int *)(param_1 + 0x58) * 4) * 3 >> 2;
        sub_0804F900(&iStack_18,param_1 + 0x28);
        if (((*(int *)(param_3 + 4) < iStack_18 + iVar2) &&
            ((iStack_18 - iVar2 < *(int *)(param_3 + 0xc) &&
             (*(int *)(param_3 + 8) < iStack_14 + iVar2)))) &&
           (iStack_14 - iVar2 < *(int *)(param_3 + 0x10))) {
          sub_0803756E(param_1);
          return 1;
        }
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08019CC4(param_1);
  }
  return uVar1;
}


/* sub_080379C8 @ 0x080379C8 */

undefined4 sub_080379C8(void)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  sub_0800FE78(&local_18);
  if ((((DAT_030019bc < local_10) && (local_18 < DAT_030019c4)) && (DAT_030019c0 < local_c)) &&
     (local_14 < DAT_030019c8)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08037A04 @ 0x08037A04 */

undefined4 * sub_08037A04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08049E08;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08037A2C @ 0x08037A2C */

void sub_08037A2C(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(ushort *)(param_2 + 0x12) - 1;
  if (iVar1 < 0) {
    iVar1 = **(int **)(param_2 + 0x50) * 8 + -1;
  }
  *(short *)(param_2 + 0x12) = (short)iVar1;
  *(char *)(param_2 + 0x11) = (char)(iVar1 >> 3);
  return;
}


/* sub_08037A42 @ 0x08037A42 */

void sub_08037A42(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_2,4,0,*(int *)(*param_2 + 0x30) + *param_2,param_4);
  return;
}


/* sub_08037A56 @ 0x08037A56 */

undefined4 sub_08037A56(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined *puStack_20;
  int *piStack_1c;
  int iStack_18;
  
  if (DAT_03001c34 == 0) {
    uVar1 = 1;
  }
  else {
    piVar4 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = DAT_03001c34;
    puStack_20 = &_0804AE70;
    if (param_2 != (int *)0x0) {
      piVar4 = param_2 + 99;
    }
    sub_0801599C(&puStack_20,piVar4);
    iVar6 = *(int *)(&gUnknown_0876BA40 + (uint)*(byte *)(param_2 + 4) * 8);
    iVar7 = *(int *)(&DAT_0876ba44 + (uint)*(byte *)(param_2 + 4) * 8);
    iVar2 = sub_0800EEB0(param_2,4);
    if (iVar2 == 0) {
      puStack_20 = &_08049ACC;
      if (piStack_1c != (int *)0x0) {
        __call_via_r2(piStack_1c,1,*(int *)*piStack_1c + *piStack_1c);
      }
      uVar1 = 0;
    }
    else {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_28 = iVar6 * 0x100;
      iStack_24 = iVar7 * 0x100;
      iVar7 = param_2[0x68] + iStack_28;
      iVar5 = param_2[0x69] + iStack_24;
      iVar2 = iVar7;
      iVar6 = iVar5;
      iStack_30 = iVar7;
      iStack_2c = iVar5;
      iVar3 = __call_via_r2(param_2,&iStack_30,*(int *)(*param_2 + 0x54) + *param_2,param_4,iVar7,
                            iVar5,iVar7,iVar5);
      if (iVar3 != 0) {
        param_2[0x68] = iStack_30;
        param_2[0x69] = iStack_2c;
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2,param_4,iVar7,iVar5,iVar2,iVar6);
      puStack_20 = &_08049ACC;
      if (piStack_1c != (int *)0x0) {
        __call_via_r2(piStack_1c,1,*(int *)*piStack_1c + *piStack_1c,param_4,iVar7,iVar5,iVar2,iVar6
                     );
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_08037B2E @ 0x08037B2E */

undefined4 * sub_08037B2E(void)

{
  return &DAT_03003288;
}


/* sub_08037B48 @ 0x08037B48 */

undefined4 sub_08037B48(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  sub_0800FE78(&local_18,DAT_03001c34);
  local_18 = local_18 + 6;
  local_10 = local_10 + -6;
  sub_0800FE78(&local_28,param_2);
  if ((((local_18 < local_20) && (local_28 < local_10)) && (local_14 < local_1c)) &&
     (local_24 < local_c)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08037B96 @ 0x08037B96 */

undefined4 * sub_08037B96(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804B0F8;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08037BBC @ 0x08037BBC */

undefined4 sub_08037BBC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = sub_0803FACC(3);
  iVar2 = sub_0803FACC(3);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_2 + 0x1a0) = *(int *)(param_1 + 4) + (iVar1 + -1) * 0x100;
  *(int *)(param_2 + 0x1a4) = iVar3 + (iVar2 + -1) * 0x100;
  return 0;
}


/* sub_08037C06 @ 0x08037C06 */

void sub_08037C06(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B1C0;
  }
  return;
}


/* sub_08037C1C @ 0x08037C1C */

undefined4 * sub_08037C1C(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08019B04(param_1,0x400,param_2);
  *param_1 = &_0804B4AC;
  iVar1 = *param_3;
  iVar2 = param_3[1];
  param_1[0x10] = 0;
  param_1[8] = iVar1 << 8;
  param_1[9] = iVar2 << 8;
  iVar1 = 0x3c;
  if (*(char *)(param_2 + 0x10) != '\x03') {
    iVar1 = 0;
  }
  param_1[0x11] = &gUnknown_0876CBD8 + iVar1;
  param_1[6] = &gUnknown_0876CBD8 + iVar1;
  sub_08019B4E(param_1);
  return param_1;
}


/* sub_08037C72 @ 0x08037C72 */

void sub_08037C72(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  undefined1 auStack_36 [6];
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0xd0c0b0a;
  local_18 = 0x11100f0e;
  local_20 = 0xf10110a;
  local_24 = 0xb0c0d0e;
  if (*(char *)(param_2 + 0x10) == '\x03') {
    bVar1 = *(byte *)((int)&uStack_28 + *(byte *)(param_2 + 0x11) + 2);
  }
  else {
    bVar1 = *(byte *)((int)&local_20 + *(byte *)(param_2 + 0x11) + 2);
  }
  *(undefined **)(param_1 + 0x18) = &gUnknown_0876CBD8 + (uint)bVar1 * 0xc;
  sub_08019B4E(param_1);
  uStack_28 = 0x1010103;
  uStack_2c = 2;
  uStack_40 = *(undefined4 *)(param_1 + 0x1c);
  uStack_4c = auStack_36[bVar1];
  puStack_44 = &gUnknown_086B8100;
  uStack_48 = 0x2800;
  uStack_5c = *(undefined4 *)(param_1 + 0x28);
  uStack_58 = *(undefined4 *)(param_1 + 0x2c);
  uStack_54 = *(undefined4 *)(param_1 + 0x30);
  uStack_50 = *(undefined4 *)(param_1 + 0x34);
  auStack_60[0] = *(undefined1 *)(param_1 + 0x11);
  iStack_30 = param_1;
  iVar2 = sub_08011C70(&DAT_03001c4c,0,auStack_60);
  if (iVar2 != 0) {
    iVar2 = sub_0803FACC(2);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
  }
  return;
}


/* sub_08037D1E @ 0x08037D1E */

void sub_08037D1E(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 < 0x50) {
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    *(int *)(param_1 + 0x18) = (iVar1 >> 4) * 0xc + *(int *)(param_1 + 0x44);
    sub_08019B4E();
  }
  return;
}


/* sub_08037D58 @ 0x08037D58 */

void sub_08037D58(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_08037D64 @ 0x08037D64 */

void sub_08037D64(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iStack_18;
  int iStack_14;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x18) {
    *(byte *)((int)param_2 + 0x11) = (byte)((uVar2 << 0x1d) >> 0x1f);
  }
  else if (uVar2 < 0x1c) {
    *(undefined1 *)((int)param_2 + 0x11) = 2;
  }
  else if (uVar2 < 0x20) {
    *(undefined1 *)((int)param_2 + 0x11) = 3;
    if ((*(short *)((int)param_2 + 0x12) == 0x1c) &&
       (iVar3 = sub_080116FC(&DAT_03001c4c), 0x6ff < iVar3)) {
      iStack_18 = (param_2[0x68] >> 8) + *(int *)(&DAT_0876ccb4 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_14 = (param_2[0x69] >> 8) + *(int *)(&DAT_0876ccb8 + (uint)*(byte *)(param_2 + 4) * 8);
      DAT_03003298 = sub_08037EA8(0,&iStack_18,(char)param_2[4],param_2,iStack_18);
      sub_0801191A(&DAT_03001c4c,DAT_03003298);
    }
  }
  else {
    iVar3 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[iVar3] == DAT_03003298) {
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_03001c50);
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08037E2C @ 0x08037E2C */

void sub_08037E2C(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *local_14;
  int *local_10;
  undefined4 local_c;
  
  iVar1 = 0;
  local_10 = (int *)0x0;
  local_c = DAT_03001c34;
  local_14 = &_0804AE70;
  if (param_2 != 0) {
    iVar1 = param_2 + 0x18c;
  }
  sub_0801599C(&local_14,iVar1);
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03003294);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_08037E7A @ 0x08037E7A */

bool sub_08037E7A(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003294;
}


/* sub_08037E8C @ 0x08037E8C */

undefined4 * sub_08037E8C(void)

{
  return &DAT_0300329c;
}


/* sub_08037EA8 @ 0x08037EA8 */

undefined4 *
sub_08037EA8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int a2;
  undefined *a0;
  int iStack_28;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x5c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x700;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x700);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x700);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x700);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804B380;
    uVar3 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[1] = param_2[1];
    param_1[0x16] = param_4;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xf] = 8;
    param_1[6] = 0xffffffff;
    param_1[0x10] = param_3;
    uVar3 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar3;
    param_1[0x15] = &gUnknown_0876DFF8 + param_1[0x10] * 0x30;
    iVar1 = param_1[0x10] * 8;
    uVar3 = *(undefined4 *)(&DAT_0876cce8 + iVar1);
    param_1[0xc] = *(undefined4 *)(&DAT_0876ccec + iVar1);
    param_1[0xb] = uVar3;
    iStack_28 = 0;
    a0 = &DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20;
    iVar1 = 0;
    do {
      param_1[iVar1 + 0x11] = iStack_28;
      iVar2 = param_1[0x15] + iVar1 * 0xc;
      a2 = (uint)*(byte *)(iVar2 + 3) * (uint)*(byte *)(iVar2 + 2);
      sub_08049138((int)a0,*(int *)(iVar2 + 8),a2);
      iStack_28 = (a2 >> 5) + iStack_28;
      a0 = a0 + a2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  return param_1;
}


/* sub_08037F8A @ 0x08037F8A */

void sub_08037F8A(undefined4 *param_1,int param_2)

{
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


/* sub_08037FB4 @ 0x08037FB4 */

void sub_08037FB4(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_4c [4];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int iStack_20;
  int local_1c;
  int local_18;
  
  piVar2 = DAT_03001c34;
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    if (param_2 != 0) {
      iVar3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x2c);
      local_18 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x30);
      uStack_2c = *(undefined4 *)(param_1 + 0x58);
      uStack_38 = (undefined1)*(undefined4 *)(param_1 + 0x40);
      puStack_30 = &gUnknown_086B8088;
      uStack_34 = 0x400;
      auStack_4c[0] = 0;
      iStack_44 = local_18 + -0xc;
      iStack_40 = iVar3 + 0x20;
      iStack_3c = local_18 + 0xc;
      iStack_48 = iVar3;
      iStack_20 = iVar3;
      local_1c = param_1;
      iVar4 = sub_08009324(&iStack_48,DAT_03001a50);
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        iVar4 = sub_08011C0C(&DAT_03001c4c,0,auStack_4c);
        if (iVar4 == 0) {
          if (*(int *)(param_1 + 0x3c) < 0x50) {
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
          }
          else {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        else {
          iVar4 = __call_via_r1(piVar2,*(int *)(*piVar2 + 0x80) + *piVar2);
          if (*(short *)(iVar4 + 0x16) < 1) {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x10) = 2;
            iVar4 = *(int *)(param_1 + 0x40) * 8;
            iVar5 = *(int *)(&DAT_0876cd0c + iVar4);
            *(int *)(param_1 + 0x34) = iVar3 + *(int *)(&DAT_0876cd08 + iVar4);
            *(int *)(param_1 + 0x38) = local_18 + iVar5;
            if ((piVar2[0x72] == 0) ||
               ((uint)*(byte *)(piVar2 + 4) != (*(uint *)(param_1 + 0x40) ^ 1))) {
              iVar3 = sub_080097C2(&DAT_030019a4,param_1 + 0x34,piVar2 + 0x67);
              if (iVar3 == 0) {
                *(undefined1 *)(param_1 + 0x10) = 1;
              }
              else {
                sub_0800ED18(piVar2,&DAT_03001b00);
                piVar2[0x68] = *(int *)(param_1 + 0x34) << 8;
                piVar2[0x69] = *(int *)(param_1 + 0x38) << 8;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x10) = 1;
            }
          }
        }
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return;
      }
      local_1c = *(int *)(param_1 + 0x2c) * 4;
      local_18 = *(int *)(param_1 + 0x30) * 4;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x2c) * -4;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x30) * -4;
      iVar3 = sub_080097C2(&DAT_030019a4,(int *)(param_1 + 0x34),piVar2 + 0x67);
      if (iVar3 == 0) {
        __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        piVar2[0x68] = *(int *)(param_1 + 0x34) << 8;
        piVar2[0x69] = *(int *)(param_1 + 0x38) << 8;
      }
    }
    iVar3 = *(int *)(param_1 + 0x3c) + -4;
    *(int *)(param_1 + 0x3c) = iVar3;
    if (iVar3 < 1) {
      if (*(char *)(param_1 + 0x10) == '\x02') {
        __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
      }
      sub_08011944(&DAT_03001c4c,param_1);
    }
  }
  return;
}


/* sub_080381A0 @ 0x080381A0 */

void sub_080381A0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_080381B0 @ 0x080381B0 */

undefined4 sub_080381B0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030019bc;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20) - DAT_030019c0;
  *(int *)(param_1 + 0x24) = iVar1;
  return 1;
}


/* sub_080381DC @ 0x080381DC */

void sub_080381DC(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x54) + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x24) + (int)*pcVar1 + *param_5;
  uVar2 = *(int *)(param_1 + 0x28) + (int)pcVar1[1] + param_5[1];
  if ((((iVar3 < 0xf0) && (0 < (int)(iVar3 + (uint)(byte)pcVar1[2]))) && ((int)uVar2 < 0xa0)) &&
     (0 < (int)(uVar2 + (byte)pcVar1[3]))) {
    *(undefined4 *)*param_3 = *(undefined4 *)(pcVar1 + 4);
    uVar5 = *(uint *)*param_3;
    uVar4 = (uint)(iVar3 * 0x800000) >> 7;
    *(uint *)*param_3 = uVar4 | uVar5 & 0xfe00ffff;
    *(uint *)*param_3 = uVar2 & 0xff | uVar4 | uVar5 & 0xfe00ff00;
    uVar4 = *(uint *)(*param_3 + 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) + param_4 & 0x3ff;
    *(uint *)(*param_3 + 4) = uVar2 | uVar4 & 0xfffffc00;
    *(uint *)(*param_3 + 4) =
         (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar4 & 0xfffff000;
    *param_3 = *param_3 + 8;
  }
  return;
}


/* sub_0803828A @ 0x0803828A */

undefined4 sub_0803828A(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  local_20 = *param_2;
  local_28 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x2c);
  local_24 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x30);
  local_1c = local_28;
  local_18 = local_24;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_080381DC(param_1,2,&local_20,*(undefined4 *)(param_1 + 0x4c),&local_1c);
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -10;
    sub_080381DC(param_1,3,&local_20,*(undefined4 *)(param_1 + 0x50),&local_1c);
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\n';
  }
  else {
    sub_080381DC(param_1,1,&local_20,*(undefined4 *)(param_1 + 0x48),&local_1c);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3c) + -1) {
    do {
      local_28 = iVar1 * *(int *)(param_1 + 0x2c);
      local_24 = iVar1 * *(int *)(param_1 + 0x30);
      sub_080381DC(param_1,0,&local_20,*(undefined4 *)(param_1 + 0x44),&local_28,local_24);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x3c) + -1);
  }
  *param_2 = local_20;
  return 0;
}


/* sub_0803832A @ 0x0803832A */

undefined4 sub_0803832A(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 0x14) == (param_1[0x10] ^ 1U)) {
      iVar3 = param_1[7] + param_1[0xf] * param_1[0xb];
      iVar2 = param_1[8] + param_1[0xf] * param_1[0xc];
      if ((((*(int *)(param_3 + 4) < iVar3 + 0xc) && (iVar3 + -0xc < *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_3 + 8) < iVar2 + 0xc)) && (iVar2 + -0xc < *(int *)(param_3 + 0x10))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0xb) {
    uVar1 = 0;
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_080383BE @ 0x080383BE */

undefined4 sub_080383BE(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


