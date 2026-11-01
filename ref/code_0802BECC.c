/* Ghidra reference decompilation of code_0802BECC (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0802BECC @ 0x0802BECC */

undefined4 * sub_0802BECC(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int aiStack_68 [3];
  undefined4 uStack_5c;
  undefined1 auStack_58 [2];
  undefined1 uStack_56;
  undefined1 uStack_55;
  int iStack_54;
  undefined4 uStack_50;
  undefined *puStack_4c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  
  puStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  piStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    iVar2 = param_2 * 0x20;
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)iVar2;
    iVar1 = sub_0801124C(&DAT_03001c4c,iVar2);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,iVar2);
      iVar1 = sub_0801124C(&DAT_03001c4c,iVar2);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804B3D8;
    param_1[4] = param_2;
    sub_0803F540(auStack_58,param_2,0x20);
    puStack_4c = &gUnknown_087548DC;
    auStack_58[0] = 1;
    uStack_55 = 2;
    uStack_56 = 1;
    uStack_38 = 0x803f70d;
    iStack_54 = (int)param_1[4] / 2;
    uStack_50 = 0x16;
    sub_08046E40(uStack_34,0,uStack_28);
    sub_0803DADA(auStack_58,uStack_1c);
    param_1[5] = *param_4 - (int)param_1[4] / 2;
    param_1[6] = param_4[1] + -0x10;
    aiStack_68[1] = 0;
    uStack_5c = 0x20;
    if (0 < (int)param_1[4]) {
      iVar1 = 0;
      do {
        iVar2 = iVar1 + 0x20;
        aiStack_68[0] = iVar1;
        aiStack_68[2] = iVar2;
        sub_0804915C((int)auStack_58,
                     (int)(&DAT_06010000 + iVar1 * 0x20 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                     (int)aiStack_68);
        iVar1 = iVar2;
      } while (iVar2 < (int)param_1[4]);
    }
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_0803F58C(auStack_58,0);
  }
  return param_1;
}


/* sub_0802BFBC @ 0x0802BFBC */

void sub_0802BFBC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *(undefined4 *)(&gUIStringPtrs + param_1 * 4);
  iVar1 = sub_0803FFE8(&gUnknown_087548DC,uVar2,param_3,param_4,param_4);
  uVar3 = iVar1 + 0x21U & 0xffffffe0;
  sub_08011732(&DAT_03001c4c,uVar3 << 5);
  sub_0802BECC(0,uVar3,uVar2,param_2);
  return;
}


/* sub_0802BFEC @ 0x0802BFEC */

undefined4 sub_0802BFEC(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      *puVar1 = 0x80002000;
      uVar3 = (uint)((*(int *)(param_1 + 0x14) + iVar2) * 0x800000) >> 7 | 0x80002000;
      *puVar1 = uVar3;
      *puVar1 = uVar3 | *(uint *)(param_1 + 0x18) & 0xff;
      puVar1[1] = (uint)*(ushort *)(param_1 + 0xc) + iVar2 & 0x3ff | puVar1[1] & 0xfffff000;
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  *param_2 = puVar1;
  return 0;
}


/* sub_0802C040 @ 0x0802C040 */

undefined4 sub_0802C040(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x27) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  return 0;
}


/* sub_0802C074 @ 0x0802C074 */

void sub_0802C074(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x13,0,param_4,param_4);
  return;
}


/* sub_0802C08A @ 0x0802C08A */

void sub_0802C08A(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  int iStack_10;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if ((*(short *)((int)param_2 + 0x12) == 8) &&
       (iVar2 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar2)) {
      iStack_14 = (param_2[0x68] >> 8) + *(int *)(&DAT_087548f0 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_10 = (param_2[0x69] >> 8) + *(int *)(&DAT_087548f4 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_0802C790(0,&iStack_14,(char)param_2[4],param_2);
      sub_0801191A(&DAT_03001c4c,uVar3);
      sub_0803E378(&DAT_03003e5c,&DAT_08319584,0x40,0);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802C12E @ 0x0802C12E */

void sub_0802C12E(undefined4 param_1,int param_2)

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
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03003074);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_0802C17C @ 0x0802C17C */

bool sub_0802C17C(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003074;
}


/* sub_0802C18E @ 0x0802C18E */

undefined4 * sub_0802C18E(void)

{
  return &DAT_03003078;
}


/* sub_0802C1B0 @ 0x0802C1B0 */

void sub_0802C1B0(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  
  sub_0800ECDA(param_2,0x12);
  uVar1 = sub_0803FACC(**(undefined4 **)(param_2 + 0x50));
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  sub_0800ED18(param_2,&DAT_03001b00);
  return;
}


/* sub_0802C1D0 @ 0x0802C1D0 */

undefined4 * sub_0802C1D0(void)

{
  return &DAT_0300307c;
}


/* sub_0802C1DC @ 0x0802C1DC */

undefined4 sub_0802C1DC(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  iVar4 = 0;
  do {
    piVar3 = &local_24;
    do {
      iVar1 = sub_0803FACC(0xc9,piVar3);
      local_1c = (iVar1 + -100) * 0x100;
      iVar1 = sub_0803FACC(0xc9);
      local_18 = (iVar1 + -100) * 0x100;
      local_34 = param_2[0x68] + local_1c;
      local_30 = param_2[0x69] + local_18;
      piVar3 = (int *)0xffffba00;
      local_2c = local_34;
      local_28 = local_30;
      local_24 = local_34;
      local_20 = local_30;
      if (((local_1c < -0x45ff) || (0x45ff < local_1c)) || (local_18 < -0x45ff)) break;
    } while (local_18 < 0x4600);
    iVar1 = __call_via_r2(param_2,&local_24,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar1 != 0) {
      iVar4 = sub_080116FC(&DAT_03001c4c);
      if (0x3ff < iVar4) {
        iVar4 = sub_0803FACC(0x1000);
        iVar4 = iVar4 + 0x1000;
        sub_0800FE34(&local_3c,param_2);
        local_2c = local_3c + local_34 >> 1;
        local_28 = local_38 + local_30 >> 1;
        uVar2 = sub_0802A81C(0,&local_2c,&gUnknown_086FD9D0,4,iVar4,0x400,0x37,local_28);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      param_2[0x68] = local_24;
      param_2[0x69] = local_20;
      iVar4 = sub_080116FC(&DAT_03001c4c);
      if (0x3ff < iVar4) {
        iVar4 = sub_0803FACC(0x1000);
        sub_0800FE34(&local_3c,param_2);
        local_28 = local_38 + local_30 >> 1;
        local_2c = local_3c + local_34 >> 1;
        uVar2 = sub_0802A81C(0,&local_2c,&gUnknown_086FD9D0,4,iVar4 + 0x1000,0x400,0x37,local_2c,
                             local_28);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      goto _0802C328;
    }
    iVar4 = iVar4 + 1;
    if (0xf < iVar4) {
_0802C328:
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      return 1;
    }
  } while( true );
}


/* sub_0802C33C @ 0x0802C33C */

undefined4 * sub_0802C33C(void)

{
  return &DAT_03003080;
}


/* sub_0802C350 @ 0x0802C350 */

void sub_0802C350(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  return;
}


/* sub_0802C36A @ 0x0802C36A */

void sub_0802C36A(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(ushort *)((int)param_2 + 0x12) + 1;
  *(short *)((int)param_2 + 0x12) = (short)iVar1;
  if (-1 < iVar1 * -0x80000000) {
    iVar1 = sub_0803FACC(3);
    iVar2 = sub_0803FACC(3);
    iVar3 = *(int *)(param_1 + 8);
    param_2[0x68] = *(int *)(param_1 + 4) + (iVar1 + -1) * 0x100;
    param_2[0x69] = iVar3 + (iVar2 + -1) * 0x100;
  }
  if (*(short *)((int)param_2 + 0x12) == 0x40) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802C3D2 @ 0x0802C3D2 */

undefined4 sub_0802C3D2(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*(int *)(param_2 + 0x14) == *(int *)(param_1 + 4)) {
    uVar1 = 0;
  }
  else {
    iVar2 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar2) {
      iVar2 = sub_0803FACC(0x1000);
      sub_0800FE34(&iStack_2c,param_2);
      iStack_18 = iStack_28 + iStack_20 >> 1;
      iStack_1c = iStack_2c + iStack_24 >> 1;
      uVar1 = sub_0802A81C(0,&iStack_1c,&gUnknown_086FD9D0,4,iVar2 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0802C446 @ 0x0802C446 */

void sub_0802C446(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BD98;
  }
  return;
}


/* sub_0802C464 @ 0x0802C464 */

void sub_0802C464(undefined4 param_1,int param_2)

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
  sub_0800ED18(param_2,&DAT_0300308c);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_0802C4B2 @ 0x0802C4B2 */

undefined4 * sub_0802C4B2(void)

{
  return &DAT_03003088;
}


/* sub_0802C4C8 @ 0x0802C4C8 */

void sub_0802C4C8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(DAT_03001c34 + 0x1a4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(DAT_03001c34 + 0x1a0);
  *(undefined4 *)(param_1 + 0x10) = *puVar4;
  if (DAT_03003094 == 0) {
    DAT_03003094 = 1;
    DAT_03003098 = 0x800;
    DAT_0300309c = -0x1000;
  }
  sub_0800ECDA(DAT_03001c34,0x14);
  iVar1 = DAT_03001c34;
  *(undefined1 *)(DAT_03001c34 + 0x11) = 0;
  sub_0800ED18(iVar1,&DAT_03001b00);
  iVar1 = DAT_03001c34;
  iVar3 = *(int *)(param_2 + 0x1a4) + DAT_0300309c;
  *(int *)(DAT_03001c34 + 0x1a0) = *(int *)(param_2 + 0x1a0) + DAT_03003098;
  *(int *)(iVar1 + 0x1a4) = iVar3;
  *(char *)(DAT_03001c34 + 8) = *(char *)(DAT_03001c34 + 8) + -1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  uVar2 = sub_08000158(0x12f);
  uVar2 = sub_08011C70(&DAT_03001c4c,5,uVar2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}


/* sub_0802C630 @ 0x0802C630 */

undefined4 sub_0802C630(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x15);
  *(char *)(param_1 + 0x15) = cVar1 + -1;
  if (cVar1 == '\0') {
    return 1;
  }
  return 0;
}


/* sub_0802C644 @ 0x0802C644 */

undefined4 sub_0802C644(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar3 = **(int **)(param_1 + 4);
    iVar3 = __call_via_r2(*(int **)(param_1 + 4),9,*(int *)(iVar3 + 0x34) + iVar3,param_4,param_4);
    piVar2 = DAT_03001c34;
    if (iVar3 == 0) {
      iVar3 = sub_0800EEB0(*(undefined4 *)(param_1 + 4),0x11);
      if (iVar3 == 0) {
        if ((DAT_03003304 & 0xf0) != 0) {
          *(byte *)((int)DAT_03001c34 + 0x11) = *(byte *)((int)DAT_03001c34 + 0x11) ^ 1;
        }
        iVar3 = sub_08040284(&DAT_03003300,0xf0,0x14,0x5a);
        if ((iVar3 != 0) &&
           (iVar3 = *(int *)(param_1 + 8) + 1, *(int *)(param_1 + 8) = iVar3, piVar2 = DAT_03001c34,
           iVar3 == 5)) {
          DAT_03001c34[0x68] = *(int *)(param_1 + 0xc);
          piVar2[0x69] = *(int *)(param_1 + 0x10);
          __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
          __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
          *(undefined1 *)(param_1 + 0x14) = 1;
          *(undefined1 *)(param_1 + 0x15) = 0x3c;
        }
      }
    }
    else {
      DAT_03001c34[0x68] = *(int *)(param_1 + 0xc);
      piVar2[0x69] = *(int *)(param_1 + 0x10);
      __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
      __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
      *(undefined1 *)(param_1 + 0x14) = 1;
      *(undefined1 *)(param_1 + 0x15) = 0x3c;
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x14) != '\x01') {
    return 1;
  }
  cVar1 = *(char *)(param_1 + 0x15);
  *(char *)(param_1 + 0x15) = cVar1 + -1;
  if (cVar1 != '\0') {
    return 0;
  }
  return 1;
}


/* sub_0802C672 @ 0x0802C672 */

void sub_0802C672(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B1E0;
  }
  return;
}


/* sub_0802C69C @ 0x0802C69C */

undefined4 * sub_0802C69C(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804B640;
    iVar1 = sub_0803FACC(3);
    iVar2 = sub_0803FACC(0x100);
    param_1[1] = (iVar1 + 1) *
                 *(int *)(&gUnknown_087B6EEC + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x16)) >> 10;
    param_1[2] = (iVar1 + 1) * *(int *)(&gUnknown_087B6EEC + ((uint)(iVar2 << 0x18) >> 0x16)) >> 10;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}


/* sub_0802C6EC @ 0x0802C6EC */

undefined4 sub_0802C6EC(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [16];
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  int iStack_28;
  int iStack_18;
  
  piVar1 = DAT_03001c34;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (DAT_03001c34 == (int *)0x0) {
      uVar2 = 1;
    }
    else {
      piVar3 = (int *)(param_2 + 0x1a0);
      if (*(int *)(param_1 + 0x10) == 0) {
        *piVar3 = *piVar3 + *(int *)(param_1 + 4);
        *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(param_1 + 8);
        uStack_34 = *(undefined1 *)(param_2 + 0x10);
        puStack_2c = &gUnknown_086B8098;
        uStack_30 = 0x400;
        auStack_48[0] = 0;
        iStack_28 = param_2;
        iStack_18 = param_2;
        sub_0800FE78(auStack_44);
        iVar4 = *piVar1;
        iVar4 = __call_via_r3(piVar1,1,auStack_48,*(int *)(iVar4 + 0x24) + iVar4);
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 0x10;
        }
      }
      else {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        *piVar3 = *piVar3 - *(int *)(param_1 + 4);
        *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) - *(int *)(param_1 + 8);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0802C77A @ 0x0802C77A */

undefined4 * sub_0802C77A(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B640;
    iVar2 = sub_0803FACC(3);
    iVar3 = sub_0803FACC(0x100);
    puVar1[1] = (iVar2 + 1) *
                *(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x16)) >> 10;
    puVar1[2] = (iVar2 + 1) * *(int *)(&gUnknown_087B6EEC + ((uint)(iVar3 << 0x18) >> 0x16)) >> 10;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  return puVar1;
}


/* sub_0802C790 @ 0x0802C790 */

undefined4 * sub_0802C790(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x40,param_4);
    *param_1 = &_0804BAA0;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar2 << 8;
    param_1[6] = &gUnknown_08754A1C;
    param_1[0x10] = *(undefined4 *)(&gUnknown_0875497C + param_3 * 8);
    param_1[0x11] = *(undefined4 *)(&DAT_08754980 + param_3 * 8);
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_0802C7EA @ 0x0802C7EA */

void sub_0802C7EA(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  int iStack_18;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  *(undefined **)(param_1 + 0x18) = &gUnknown_08754A1C + (iVar1 * 0x10000000 >> 0x1f) * -0xc;
  sub_08019B4E(param_1);
  if ((((DAT_030019bc < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x28) < DAT_030019c4)) &&
      (DAT_030019c0 < *(int *)(param_1 + 0x34))) && (*(int *)(param_1 + 0x2c) < DAT_030019c8)) {
    iVar1 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        return;
      }
      uStack_28 = *(undefined4 *)(param_1 + 0x1c);
      uStack_34 = *(undefined1 *)(param_1 + 0x10);
      puStack_2c = &gUnknown_086B8090;
      uStack_30 = 0x400;
      uStack_44 = *(undefined4 *)(param_1 + 0x28);
      uStack_40 = *(undefined4 *)(param_1 + 0x2c);
      uStack_3c = *(undefined4 *)(param_1 + 0x30);
      uStack_38 = *(undefined4 *)(param_1 + 0x34);
      auStack_48[0] = 0;
      iStack_18 = param_1;
      iVar1 = sub_08011C70(&DAT_03001c4c,0,auStack_48);
      if (iVar1 == 0) {
        return;
      }
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
  }
  sub_08011944(&DAT_03001c4c,param_1);
  return;
}


/* sub_0802C8AE @ 0x0802C8AE */

undefined4 sub_0802C8AE(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30)) &&
              (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
             (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
            (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))) {
      sub_08011944(&DAT_03001c4c,param_1,*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x34),param_4);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}


/* sub_0802C90C @ 0x0802C90C */

void sub_0802C90C(char param_1)

{
  REG_MOSAIC = param_1 * '\x11';
  DAT_0400004d = param_1 * '\x11';
  return;
}


/* sub_0802C918 @ 0x0802C918 */

void sub_0802C918(void)

{
  ushort uVar1;
  
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 | 0x40;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 | 0x40;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 | 0x40;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 | 0x40;
  return;
}


/* sub_0802C93E @ 0x0802C93E */

void sub_0802C93E(void)

{
  ushort uVar1;
  
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 & 0xffbf;
  return;
}


/* sub_0802C964 @ 0x0802C964 */

bool sub_0802C964(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar3;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar3 < iVar2) {
    cVar1 = __16__rt_sdiv(iVar2,iVar3 * 0x10,param_3,param_4,param_4);
    cVar1 = ('\x0f' - cVar1) * '\x11';
    REG_MOSAIC = cVar1;
    DAT_0400004d = cVar1;
  }
  return iVar3 >= iVar2;
}


/* sub_0802C98E @ 0x0802C98E */

void sub_0802C98E(void)

{
  ushort uVar1;
  
  REG_MOSAIC = 0xff;
  DAT_0400004d = 0xff;
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 | 0x40;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 | 0x40;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 | 0x40;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 | 0x40;
  sub_08049144(0x5000000,0x805632c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}


/* sub_0802C9DA @ 0x0802C9DA */

void sub_0802C9DA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  REG_MOSAIC = 0;
  DAT_0400004d = 0;
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 & 0xffbf;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,&REG_BG3CNT,param_4);
  }
  return;
}


/* sub_0802CA1C @ 0x0802CA1C */

bool sub_0802CA1C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar3;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar3 < iVar2) {
    cVar1 = __16__rt_sdiv(iVar2,iVar3 * 0x10,param_3,param_4,param_4);
    REG_MOSAIC = cVar1 * '\x11';
    DAT_0400004d = cVar1 * '\x11';
  }
  return iVar3 >= iVar2;
}


/* sub_0802CA42 @ 0x0802CA42 */

void sub_0802CA42(void)

{
  ushort uVar1;
  
  REG_MOSAIC = 0;
  DAT_0400004d = 0;
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 | 0x40;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 | 0x40;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 | 0x40;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 | 0x40;
  return;
}


/* sub_0802CA72 @ 0x0802CA72 */

void sub_0802CA72(int *param_1)

{
  sub_0804912C(0x5000000,0,0x200);
  sub_0804912C(0x5000200,0,0x200);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_0802CAB8 @ 0x0802CAB8 */

void sub_0802CAB8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + (*(int *)(param_1 + 8) - *(int *)(iVar1 + 0x24))
  ;
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + (iVar3 - *(int *)(iVar1 + 0x28));
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x18);
  return;
}


/* sub_0802CAF8 @ 0x0802CAF8 */

void sub_0802CAF8(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0802CB04 @ 0x0802CB04 */

void sub_0802CB04(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = __16__rt_sdiv();
  if (iVar2 < *(int *)(param_1 + 0x14)) {
    *(char *)(param_2 + 0x11) = (char)iVar2;
    return;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)(param_1 + 0xc) + -1, *(int *)(param_1 + 0xc) = iVar2, iVar2 == 0)) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 1;
    }
    sub_0800EE78(param_2);
    return;
  }
  *(short *)(param_2 + 0x12) = (short)uVar1 * (short)*(undefined4 *)(param_1 + 0x10);
  *(char *)(param_2 + 0x11) = (char)*(undefined4 *)(param_1 + 0x10);
  return;
}


/* sub_0802CB52 @ 0x0802CB52 */

void sub_0802CB52(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = param_1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DE58;
    puVar1[1] = iVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
  }
  sub_0800ECDA(uVar5,(&gUnknown_08072670)[*(byte *)(param_1 + 8)]);
  sub_0800ED18(uVar5,puVar1);
  return;
}


/* sub_0802CBB4 @ 0x0802CBB4 */

void sub_0802CBB4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  sub_0800ECB0(iVar2,param_1 + 8,param_3,param_4,param_4);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x178) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x17c) = uVar1;
  return;
}


/* sub_0802CBD2 @ 0x0802CBD2 */

void sub_0802CBD2(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [12];
  undefined2 uStack_2c;
  short sStack_2a;
  int iStack_18;
  
  sub_08049138((int)auStack_38,0x8756a2c,0x20);
  uStack_2c = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1a0) >> 8);
  iStack_18 = param_2 + 0x1c0;
  *(undefined4 *)(param_2 + 500) = 0;
  sStack_2a = (short)((uint)*(undefined4 *)(param_2 + 0x1a4) >> 8) + -0xc;
  iVar1 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar1);
  *(int *)(iStack_18 + 0x30) = iVar1;
  *(int *)(iVar1 + 500) = param_2;
  sStack_2a = sStack_2a + -0xc;
  iVar2 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar2);
  *(int *)(iVar1 + 0x1f0) = iVar2;
  *(int *)(iVar2 + 500) = iVar1;
  sStack_2a = sStack_2a + -0xc;
  iVar1 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar1);
  *(int *)(iVar2 + 0x1f0) = iVar1;
  *(int *)(iVar1 + 500) = iVar2;
  sStack_2a = sStack_2a + -0xc;
  iVar2 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar2);
  *(int *)(iVar1 + 0x1f0) = iVar2;
  *(int *)(iVar2 + 500) = iVar1;
  sStack_2a = sStack_2a + -0xc;
  iVar1 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar1);
  *(int *)(iVar2 + 0x1f0) = iVar1;
  *(undefined4 *)(iVar1 + 0x1f0) = 0;
  *(int *)(iVar1 + 500) = iVar2;
  return;
}


/* sub_0802CBD4 @ 0x0802CBD4 */

void sub_0802CBD4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [12];
  undefined2 local_2c;
  short local_2a;
  int local_18;
  
  sub_08049138((int)auStack_38,0x8756a2c,0x20);
  local_2c = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1a0) >> 8);
  local_18 = param_2 + 0x1c0;
  *(undefined4 *)(param_2 + 500) = 0;
  local_2a = (short)((uint)*(undefined4 *)(param_2 + 0x1a4) >> 8) + -0xc;
  iVar1 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar1);
  *(int *)(local_18 + 0x30) = iVar1;
  *(int *)(iVar1 + 500) = param_2;
  local_2a = local_2a + -0xc;
  iVar2 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar2);
  *(int *)(iVar1 + 0x1f0) = iVar2;
  *(int *)(iVar2 + 500) = iVar1;
  local_2a = local_2a + -0xc;
  iVar1 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar1);
  *(int *)(iVar2 + 0x1f0) = iVar1;
  *(int *)(iVar1 + 500) = iVar2;
  local_2a = local_2a + -0xc;
  iVar2 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar2);
  *(int *)(iVar1 + 0x1f0) = iVar2;
  *(int *)(iVar2 + 500) = iVar1;
  local_2a = local_2a + -0xc;
  iVar1 = Enemy_Create(0,auStack_38,&DAT_08712218,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar1);
  *(int *)(iVar2 + 0x1f0) = iVar1;
  *(undefined4 *)(iVar1 + 0x1f0) = 0;
  *(int *)(iVar1 + 500) = iVar2;
  return;
}


/* sub_0802CCFE @ 0x0802CCFE */

void sub_0802CCFE(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C21C;
  }
  return;
}


/* sub_0802CD20 @ 0x0802CD20 */

void sub_0802CD20(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xb0);
    if (iVar3 == iVar1) {
      uVar2 = sub_08000158(0xaf);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0x101);
      if (iVar3 == iVar1) {
        uVar2 = sub_08000158(0xb2);
        sub_0800EDF8(param_2,uVar2);
      }
      else {
        iVar3 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0x56);
        if (iVar3 == iVar1) {
          uVar2 = sub_08000158(0xac);
          sub_0800EDF8(param_2,uVar2);
        }
      }
    }
  }
  return;
}


/* sub_0802CD7C @ 0x0802CD7C */

undefined4 * sub_0802CD7C(void)

{
  return &DAT_030030a0;
}


/* sub_0802CD84 @ 0x0802CD84 */

void sub_0802CD84(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xaf);
    if (iVar3 == iVar1) {
      uVar2 = sub_08000158(0xb0);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0xb2);
      if (iVar3 == iVar1) {
        uVar2 = sub_08000158(0x101);
        sub_0800EDF8(param_2,uVar2);
      }
      else {
        iVar3 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0xac);
        if (iVar3 == iVar1) {
          uVar2 = sub_08000158(0x56);
          sub_0800EDF8(param_2,uVar2);
        }
      }
    }
  }
  return;
}


/* sub_0802CDE0 @ 0x0802CDE0 */

undefined4 * sub_0802CDE0(void)

{
  return &DAT_030030a4;
}


/* sub_0802CDE8 @ 0x0802CDE8 */

undefined4 sub_0802CDE8(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  
  if (((*(char *)((int)param_2 + 0x11) != '\x01') && (*(char *)((int)param_2 + 0x11) != '\x04')) &&
     (DAT_03001b94 != 0)) {
    sub_0800FDFA(&iStack_50);
    iStack_3c = iStack_4c + iStack_44 >> 1;
    iStack_40 = iStack_50 + iStack_48 >> 1;
    sub_0800FDFA(&iStack_38,param_2);
    iStack_20 = iStack_40 - (iStack_38 + iStack_30 >> 1);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_28 = iStack_20;
    if (iStack_20 < 0) {
      iStack_28 = -iStack_20;
    }
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    if (iStack_24 < iStack_28) {
      uVar1 = 3;
      if (iStack_20 < 1) {
        uVar1 = 2;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar3 = iStack_28;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_1c < 1;
      iVar3 = iStack_24;
    }
    if (7 < iVar3) {
      iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_28 = iStack_20 * 0x100;
      iStack_24 = iStack_1c * 0x100;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      iStack_50 = *(int *)(param_1 + 4) * iStack_28 >> 8;
      piVar4 = param_2 + 0x68;
      iStack_48 = iStack_50;
      iStack_44 = iStack_4c;
      iVar2 = __16__rt_sdiv(iVar3 * 0x100,iStack_50 << 8);
      iStack_3c = __16__rt_sdiv(iVar3 * 0x100,iStack_44 << 8);
      piVar5 = param_2 + 0x69;
      iStack_50 = *piVar4 + iVar2;
      iStack_4c = param_2[0x69] + iStack_3c;
      iStack_34 = 0;
      iStack_40 = iVar2;
      iStack_38 = iStack_50;
      iStack_30 = iStack_50;
      iStack_2c = iStack_4c;
      if (*(int *)(param_1 + 8) == 0) {
        iVar3 = __call_via_r2(param_2,&iStack_30,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar3 == 0) {
          iStack_3c = iStack_30;
          piStack_18 = param_2 + 0x69;
          iStack_38 = *piStack_18;
          iStack_40 = iStack_30 - *piVar4;
          iVar3 = iStack_40;
          if (iStack_40 < 0) {
            iVar3 = -iStack_40;
          }
          if ((iVar3 < 0x401) ||
             (iVar3 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2),
             iVar3 == 0)) {
            iStack_3c = *piVar4;
            iStack_38 = iStack_2c;
            iStack_40 = iStack_2c - *piStack_18;
            iVar3 = iStack_40;
            if (iStack_40 < 0) {
              iVar3 = -iStack_40;
            }
            if ((0x400 < iVar3) &&
               (iVar3 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2),
               iVar3 != 0)) {
              *piVar4 = iStack_3c;
              *piVar5 = iStack_38;
              iStack_34 = 1;
            }
          }
          else {
            *piVar4 = iStack_3c;
            *piVar5 = iStack_38;
            iStack_34 = 1;
          }
        }
        else {
          *piVar4 = iStack_30;
          *piVar5 = iStack_2c;
          iStack_34 = 1;
        }
      }
      if (iStack_34 == 0) {
        if (*(int *)(param_1 + 8) == 0) {
          iVar3 = sub_0803FACC(0x20);
          *(int *)(param_1 + 8) = iVar3 + -0x10;
        }
        iStack_38 = param_2[0x69];
        iStack_3c = *piVar4;
        iVar3 = iStack_20;
        if (iStack_20 < 0) {
          iVar3 = -iStack_20;
        }
        iVar2 = iStack_1c;
        if (iStack_1c < 0) {
          iVar2 = -iStack_1c;
        }
        if (iVar3 < iVar2) {
          if (*(int *)(param_1 + 8) < 0) {
            iStack_3c = iStack_3c - *(int *)(param_1 + 4);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          }
          else {
            iStack_3c = iStack_3c + *(int *)(param_1 + 4);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          }
        }
        else if (*(int *)(param_1 + 8) < 0) {
          iStack_38 = iStack_38 - *(int *)(param_1 + 4);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        else {
          iStack_38 = iStack_38 + *(int *)(param_1 + 4);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        iVar3 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        else {
          *piVar4 = iStack_3c;
          *piVar5 = iStack_38;
        }
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    }
  }
  return 0;
}


/* sub_0802D090 @ 0x0802D090 */

void sub_0802D090(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C670;
    puVar1[1] = uVar2;
    puVar1[2] = 0;
  }
  return;
}


/* sub_0802D0B0 @ 0x0802D0B0 */

void sub_0802D0B0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12);
  iVar1 = sub_08011CCA(&DAT_03001c4c,0x24,0);
  if (0xb < iVar1) {
    *(undefined2 *)(param_2 + 0x12) = 0x18;
  }
  return;
}


/* sub_0802D0DC @ 0x0802D0DC */

void sub_0802D0DC(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  int iStack_10;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x18) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if ((*(short *)((int)param_2 + 0x12) == 8) &&
       (iVar2 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar2)) {
      iStack_14 = (param_2[0x68] >> 8) + *(int *)(&DAT_08756a74 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_10 = (param_2[0x69] >> 8) + *(int *)(&DAT_08756a78 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_0802D79C(0,&iStack_14,(char)param_2[4],param_2,0,iStack_14);
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802D16C @ 0x0802D16C */

void sub_0802D16C(undefined4 param_1,int param_2)

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
  sub_0800ED18(param_2,&DAT_030030a8);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_0802D1BA @ 0x0802D1BA */

bool sub_0802D1BA(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_030030a8;
}


/* sub_0802D1CC @ 0x0802D1CC */

undefined4 * sub_0802D1CC(void)

{
  return &DAT_030030ac;
}


/* sub_0802D1E8 @ 0x0802D1E8 */

void sub_0802D1E8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12);
  iVar1 = sub_08011CCA(&DAT_03001c4c,0x24,0);
  if (0x1f < iVar1) {
    *(undefined2 *)(param_2 + 0x12) = 0x18;
  }
  return;
}


/* sub_0802D214 @ 0x0802D214 */

void sub_0802D214(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x18) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if (*(short *)((int)param_2 + 0x12) == 8) {
      iVar4 = 0;
      do {
        iVar2 = sub_080116FC(&DAT_03001c4c);
        if (iVar2 < 0x100) {
          return;
        }
        piStack_18 = &DAT_08756aa4 + iVar4 * 4;
        iStack_20 = (param_2[0x68] >> 8) + *piStack_18;
        iStack_1c = (param_2[0x69] >> 8) + (&DAT_08756aa8)[iVar4 * 4];
        uVar3 = sub_0802D79C(0,&iStack_20,iVar4,param_2,0,iStack_1c);
        sub_0801191A(&DAT_03001c4c,uVar3);
        iStack_20 = (param_2[0x68] >> 8) + piStack_18[2];
        iStack_1c = (param_2[0x69] >> 8) + piStack_18[3];
        uVar3 = sub_0802D79C(0,&iStack_20,iVar4,param_2,1,iStack_1c);
        sub_0801191A(&DAT_03001c4c,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802D2F0 @ 0x0802D2F0 */

void sub_0802D2F0(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_030030b0);
  return;
}


/* sub_0802D306 @ 0x0802D306 */

bool sub_0802D306(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_030030b0;
}


/* sub_0802D318 @ 0x0802D318 */

undefined4 * sub_0802D318(void)

{
  return &DAT_030030b4;
}


/* sub_0802D328 @ 0x0802D328 */

undefined4 sub_0802D328(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  if (param_2[0x7d] == 0) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) ^ 1;
    if (param_2 != (int *)0x0) {
      do {
        param_2[0x73] = 0;
        param_2[0x81] = 0xf;
        param_2 = (int *)param_2[0x7c];
      } while (param_2 != (int *)0x0);
    }
  }
  else {
    do {
      piVar1 = (int *)piVar1[0x7d];
    } while (piVar1[0x7d] != 0);
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7c]) {
      piVar1[0x73] = 0;
      param_2[0x81] = 0xf;
    }
    *(undefined4 *)(param_2[0x7d] + 0x1f0) = 0;
    param_2[0x7d] = 0;
    uVar2 = sub_08000158(0x128);
    sub_0800EDF8(param_2,uVar2);
    sub_0800FA16(param_2,0x8e);
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return 1;
}


/* sub_0802D3BA @ 0x0802D3BA */

int sub_0802D3BA(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xb0);
    if ((iVar3 == iVar1) ||
       (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xaf), iVar3 == iVar1)) {
      uVar2 = sub_08000158(0xb1);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0x101);
      if ((iVar3 == iVar1) ||
         (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xb2), iVar3 == iVar1)) {
        uVar2 = sub_08000158(0x100);
        sub_0800EDF8(param_2,uVar2);
      }
      else {
        iVar3 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0x56);
        if ((iVar3 == iVar1) ||
           (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xac), iVar3 == iVar1)) {
          uVar2 = sub_08000158(0x55);
          sub_0800EDF8(param_2,uVar2);
        }
      }
    }
    param_1 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < param_1) {
      iVar1 = sub_0803FACC(0x1000);
      sub_0800FE34(&iStack_2c,param_2);
      iStack_18 = iStack_28 + iStack_20 >> 1;
      iStack_1c = iStack_2c + iStack_24 >> 1;
      uVar2 = sub_0802A81C(0,&iStack_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
      param_1 = sub_0801191A(&DAT_03001c4c,uVar2);
    }
  }
  return param_1;
}


/* sub_0802D3BC @ 0x0802D3BC */

void sub_0802D3BC(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xb0);
    if ((iVar3 == iVar1) ||
       (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xaf), iVar3 == iVar1)) {
      uVar2 = sub_08000158(0xb1);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0x101);
      if ((iVar3 == iVar1) ||
         (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xb2), iVar3 == iVar1)) {
        uVar2 = sub_08000158(0x100);
        sub_0800EDF8(param_2,uVar2);
      }
      else {
        iVar3 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0x56);
        if ((iVar3 == iVar1) ||
           (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xac), iVar3 == iVar1)) {
          uVar2 = sub_08000158(0x55);
          sub_0800EDF8(param_2,uVar2);
        }
      }
    }
    iVar1 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar1) {
      iVar1 = sub_0803FACC(0x1000);
      sub_0800FE34(&iStack_2c,param_2);
      iStack_18 = iStack_28 + iStack_20 >> 1;
      iStack_1c = iStack_2c + iStack_24 >> 1;
      uVar2 = sub_0802A81C(0,&iStack_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
  }
  return;
}


/* sub_0802D49E @ 0x0802D49E */

undefined4 * sub_0802D49E(void)

{
  return &DAT_030030b8;
}


/* sub_0802D4B0 @ 0x0802D4B0 */

undefined4 sub_0802D4B0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [16];
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined *puStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  int *local_20;
  int iStack_1c;
  int *piStack_18;
  
  local_20 = param_2 + 0x70;
  if (param_2[0x7c] != 0) {
    *(undefined4 *)(param_2[0x7c] + 0x1e4) = 0;
  }
  if (param_2[0x81] == 0) {
    param_2[0x73] = 1;
  }
  else {
    param_2[0x81] = param_2[0x81] + -1;
  }
  piVar6 = param_2 + 0x68;
  iStack_1c = param_1;
  piStack_18 = param_2;
  if (*(char *)((int)param_2 + 0x291) != '\0') {
    *(undefined1 *)((int)param_2 + 0x291) = 0;
    iVar1 = __call_via_r2(param_2,piVar6,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_2 + 0x291) = 1;
      return 0;
    }
  }
  uVar2 = sub_08000158(0x128);
  sub_0800EDF8(param_2,uVar2);
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  uVar4 = (uint)*(byte *)(param_2 + 4);
  iVar1 = sub_0803FACC(200);
  uVar5 = uVar4;
  if (iVar1 == 0) {
    uVar5 = uVar4 ^ 2;
    iVar1 = sub_0803FACC(2);
    if (iVar1 == 0) {
      uVar5 = uVar4 ^ 3;
    }
  }
  iVar1 = 0;
  piStack_24 = param_2 + 0x69;
  while( true ) {
    iStack_3c = *piVar6 + *(int *)(&gUnknown_08756B0C + uVar5 * 8);
    iStack_38 = *piStack_24 + *(int *)(&DAT_08756b10 + uVar5 * 8);
    iStack_34 = iStack_3c;
    piStack_30 = (int *)iStack_38;
    iStack_2c = iStack_3c;
    iStack_28 = iStack_38;
    iVar3 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar3 != 0) break;
    uVar5 = uVar5 + 1 & 3;
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      if (local_20[0xc] != 0) {
        *(undefined4 *)(local_20[0xc] + 0x1e4) = 0;
      }
      return 0;
    }
  }
  *piVar6 = iStack_2c;
  *piStack_24 = iStack_28;
  *(char *)(param_2 + 4) = (char)uVar5;
  if (local_20[0xc] != 0) {
    *(uint *)(local_20[0xc] + 0x1e4) = uVar5 | 0x80;
  }
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  piVar6 = DAT_03001c34;
  if (*(int *)(iStack_1c + 4) == 0) {
    uStack_4c = (undefined1)param_2[4];
    puStack_44 = &gUnknown_086B8098;
    uStack_48 = 0x400;
    auStack_60[0] = 0;
    piStack_40 = param_2;
    piStack_30 = param_2;
    sub_0800FE78(auStack_5c,param_2);
    iVar1 = *piVar6;
    iVar1 = __call_via_r3(piVar6,1,auStack_60,*(int *)(iVar1 + 0x24) + iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(iStack_1c + 4) = 0x14;
    return 0;
  }
  *(int *)(iStack_1c + 4) = *(int *)(iStack_1c + 4) + -1;
  return 0;
}


/* sub_0802D62C @ 0x0802D62C */

void sub_0802D62C(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804ADE0;
  }
  return;
}


/* sub_0802D650 @ 0x0802D650 */

int sub_0802D650(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [16];
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  
  if (param_2[0x81] == 0) {
    param_2[0x73] = 1;
  }
  else {
    param_2[0x81] = param_2[0x81] + -1;
  }
  if (param_2[0x7c] == 0) {
    uVar2 = sub_08000158(0x12a);
    sub_0800EDF8(param_2,uVar2);
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  iVar3 = param_2[0x79];
  if (iVar3 != 0) {
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(*(int *)(param_1 + 0x10) + param_1 + 4);
    *(byte *)(*(int *)(param_1 + 0x10) + param_1 + 4) = (byte)iVar3 & 0x7f;
    param_2[0x79] = 0;
    iVar3 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 0xc) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iStack_24 = param_2[0x68] + *(int *)(&gUnknown_08756B38 + (uint)*(byte *)(param_2 + 4) * 8);
    iStack_20 = param_2[0x69] + *(int *)(&DAT_08756b3c + (uint)*(byte *)(param_2 + 4) * 8);
    param_2[0x68] = iStack_24;
    param_2[0x69] = iStack_20;
    iStack_1c = iStack_24;
    piStack_18 = (int *)iStack_20;
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    if (param_2[0x7c] != 0) {
      *(uint *)(param_2[0x7c] + 0x1e4) = *(byte *)(param_2 + 4) | 0x80;
    }
    piVar1 = DAT_03001c34;
    if (*(int *)(param_1 + 0x14) == 0) {
      uStack_34 = (undefined1)param_2[4];
      puStack_2c = &gUnknown_086B8098;
      uStack_30 = 0x400;
      auStack_48[0] = 0;
      piStack_28 = param_2;
      piStack_18 = param_2;
      sub_0800FE78(auStack_44,param_2);
      iVar3 = *piVar1;
      iVar3 = __call_via_r3(piVar1,1,auStack_48,*(int *)(iVar3 + 0x24) + iVar3);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 0x14;
      }
    }
    else {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
    iVar3 = 0;
  }
  return iVar3;
}


/* sub_0802D76C @ 0x0802D76C */

undefined4 * sub_0802D76C(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804ADD0;
    sub_0800F924(param_2);
  }
  return puVar1;
}


/* sub_0802D79C @ 0x0802D79C */

undefined4 *
sub_0802D79C(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,param_4);
    *param_1 = &_0804A830;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar2 << 8;
    iVar1 = (param_3 >> 1) * 0x24;
    if (param_5 == 0) {
      param_1[6] = &gUnknown_087571F4 + iVar1;
    }
    else {
      param_1[6] = &UNK_0875723c + iVar1;
    }
    param_1[0x14] = 0;
    param_1[0x13] = param_1[6];
    param_1[0x15] = 0;
    param_3 = param_3 * 0x10;
    if (param_5 == 0) {
      param_1[0x10] = *(undefined4 *)(&gUnknown_08756B74 + param_3);
      param_1[0x11] = *(undefined4 *)(&DAT_08756b78 + param_3);
    }
    else {
      param_1[0x10] = *(undefined4 *)(&UNK_08756b7c + param_3);
      param_1[0x11] = *(undefined4 *)(&UNK_08756b80 + param_3);
    }
    *(undefined1 *)(param_1 + 2) = 0x37;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_0802D826 @ 0x0802D826 */

void sub_0802D826(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x20) = *(int *)(DAT_03001c34 + 0x1a0) + 0x400;
  *(int *)(param_1 + 0x24) =
       *(int *)(DAT_03001c34 + 0x1a4) + *(int *)(&DAT_08756bb4 + DAT_030030bc * 4) * -0x100;
  DAT_030030bc = DAT_030030bc + 1 & 7;
  *(undefined **)(param_1 + 0x4c) = &DAT_08757218;
  *(undefined4 *)(param_1 + 0x50) = 1;
  iVar1 = *(int *)(DAT_03001c34 + 0x1a4);
  *(int *)(param_1 + 0x58) = *(int *)(DAT_03001c34 + 0x1a0) - *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x5c) = iVar1 - *(int *)(param_1 + 0x24);
  return;
}


/* sub_0802D89A @ 0x0802D89A */

void sub_0802D89A(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(param_1 + 0x20) >> 8;
  local_c = *(int *)(param_1 + 0x24) >> 8;
  sub_08011944(&DAT_03001c4c,param_1);
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    uVar2 = sub_0802A81C(0,&local_10,&gUnknown_08712FDC,4,0x2000,0x400,0x38);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_0802D8E6 @ 0x0802D8E6 */

void sub_0802D8E6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = DAT_03001c34;
  if ((DAT_03001c34 != 0) && (*(int *)(DAT_03001c34 + 0x1cc) != 0)) {
    piVar4 = (int *)**(int **)(DAT_03001c34 + 0x22c);
    __call_via_r2(*(int **)(DAT_03001c34 + 0x22c),DAT_03001c34,*piVar4 + (int)piVar4);
    iVar2 = sub_08011CCA(&DAT_03001c4c,0x25,0);
    iVar3 = *(int *)(iVar1 + 0x238);
    if (iVar3 + iVar2 * -0x30 < 0 == SBORROW4(iVar3,iVar2 * 0x30)) {
      *(int *)(iVar1 + 0x238) = iVar3 + iVar2 * -0x30;
    }
    else {
      *(undefined4 *)(iVar1 + 0x238) = 0;
    }
    iVar3 = *(int *)(iVar1 + 0x23c);
    if (iVar3 + iVar2 * -0x30 < 0 != SBORROW4(iVar3,iVar2 * 0x30)) {
      *(undefined4 *)(iVar1 + 0x23c) = 0;
      return;
    }
    *(int *)(iVar1 + 0x23c) = iVar3 + iVar2 * -0x30;
  }
  return;
}


/* sub_0802D940 @ 0x0802D940 */

void sub_0802D940(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  sub_0802D8E6();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x4c) + (*(int *)(param_1 + 0x48) >> 3) * 0xc;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar1 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x48) = iVar1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
    if (iVar1 == 0x18) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  else {
    local_24 = *(int *)(DAT_03001c34 + 0x1a0) - *(int *)(param_1 + 0x58);
    local_20 = *(int *)(DAT_03001c34 + 0x1a4) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x20) = local_24;
    *(int *)(param_1 + 0x24) = local_20;
    local_1c = local_24;
    local_18 = local_20;
    iVar1 = sub_08040284(&DAT_03003300,0xf0,8,0x3c);
    if (iVar1 != 0) {
      sub_08011944(&DAT_03001c4c,param_1);
      sub_0802D8E6(param_1);
      return;
    }
  }
  sub_08019B4E(param_1);
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x54) + -1, *(int *)(param_1 + 0x54) = iVar1, iVar1 == 0)) {
    sub_0802D826(param_1);
  }
  if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x54) < 1)) {
    if ((DAT_030019bc < *(int *)(param_1 + 0x30)) &&
       (((*(int *)(param_1 + 0x28) < DAT_030019c4 && (DAT_030019c0 < *(int *)(param_1 + 0x34))) &&
        (*(int *)(param_1 + 0x2c) < DAT_030019c8)))) {
      iVar1 = sub_08009324((int *)(param_1 + 0x28),DAT_03001a50);
      if (iVar1 == 0) {
        sub_08011944(&DAT_03001c4c,param_1);
      }
      else if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        uStack_28 = *(undefined4 *)(param_1 + 0x1c);
        uStack_34 = *(undefined1 *)(param_1 + 0x10);
        puStack_2c = &gUnknown_086B8090;
        uStack_30 = 0x400;
        iStack_44 = *(int *)(param_1 + 0x28);
        iStack_40 = *(int *)(param_1 + 0x2c);
        iStack_3c = *(int *)(param_1 + 0x30);
        iStack_38 = *(int *)(param_1 + 0x34);
        auStack_48[0] = 0;
        local_18 = param_1;
        iVar1 = sub_08011C70(&DAT_03001c4c,0,auStack_48);
        if (iVar1 != 0) {
          iVar1 = sub_08011CCA(&DAT_03001c4c,0x25,0);
          sub_0800FE78(&iStack_58,DAT_03001c34);
          if (((iStack_44 < iStack_50) && (iStack_58 < iStack_3c)) &&
             ((iStack_40 < iStack_4c && (iStack_54 < iStack_38)))) {
            iVar2 = sub_0803FACC(2);
            sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
            if (iVar1 < 8) {
              *(undefined4 *)(param_1 + 0x54) = 4;
            }
            else {
              sub_0802D89A(param_1);
            }
          }
          else {
            sub_0802D89A(param_1);
          }
        }
      }
    }
    else {
      sub_08011944(&DAT_03001c4c,param_1);
    }
  }
  return;
}


/* sub_0802DB10 @ 0x0802DB10 */

undefined4 sub_0802DB10(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30)) &&
              (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
             (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
            ((*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10) && (*(int *)(param_1 + 0x50) == 0)
             ))) {
      sub_0802D89A();
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0x24) {
    uVar1 = 1;
  }
  else if (param_2 == 0x25) {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}


/* sub_0802DB6A @ 0x0802DB6A */

undefined4 *
sub_0802DB6A(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 *param_5,int param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(100), param_1 != (undefined4 *)0x0)) {
    uVar1 = 0x400;
    if (param_8 != 0) {
      uVar1 = 0x100;
    }
    sub_08019B04(param_1,uVar1,param_3);
    *param_1 = &_0804C99C;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = param_2;
    param_1[0x18] = param_6;
    uVar1 = *param_5;
    param_1[0x17] = param_5[1];
    param_1[0x16] = uVar1;
    iVar2 = param_4[1];
    param_1[8] = *param_4 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x11] = param_7;
    param_1[0x12] = param_8;
    *(undefined1 *)(param_1 + 2) = 0x37;
    uVar1 = *(undefined4 *)(param_6 + 4);
    param_1[0x14] = 0;
    param_1[6] = uVar1;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_0802DB6C @ 0x0802DB6C */

undefined4 *
sub_0802DB6C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 *param_5,int param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(100), param_1 != (undefined4 *)0x0)) {
    uVar1 = 0x400;
    if (param_8 != 0) {
      uVar1 = 0x100;
    }
    sub_08019B04(param_1,uVar1,param_3);
    *param_1 = &_0804C99C;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = param_2;
    param_1[0x18] = param_6;
    uVar1 = *param_5;
    param_1[0x17] = param_5[1];
    param_1[0x16] = uVar1;
    iVar2 = param_4[1];
    param_1[8] = *param_4 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x11] = param_7;
    param_1[0x12] = param_8;
    *(undefined1 *)(param_1 + 2) = 0x37;
    uVar1 = *(undefined4 *)(param_6 + 4);
    param_1[0x14] = 0;
    param_1[6] = uVar1;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_0802DBDE @ 0x0802DBDE */

void sub_0802DBDE(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804C99C;
  if (param_1[0x14] != 0) {
    sub_08011944(&DAT_03001c4c,param_1[0x14]);
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


/* sub_0802DC1A @ 0x0802DC1A */

void sub_0802DC1A(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 uStack_38;
  int local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  undefined *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar3 = *(int *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 0x40) = iVar3;
  uVar1 = iVar3 >> 2;
  *(uint *)(param_1 + 0x4c) = uVar1;
  piVar5 = (int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x48) == 0) {
    if ((6 < (int)uVar1) && (iVar3 = (uVar1 & 3) + 4, *(int *)(param_1 + 0x4c) = iVar3, iVar3 == 7))
    {
      *(undefined4 *)(param_1 + 0x4c) = 5;
    }
  }
  else {
    if (iVar3 == 8) {
      local_2c = (undefined *)(*piVar5 >> 8);
      local_28 = *(int *)(param_1 + 0x24) >> 8;
      iVar3 = (uint)*(byte *)(param_1 + 0x10) * 8;
      local_24 = local_2c + *(int *)(&DAT_0875728c + iVar3);
      local_20 = local_28 + *(int *)(&DAT_08757290 + iVar3);
      iVar3 = (uint)*(byte *)(param_1 + 0x10) * 8;
      local_34 = *(int *)(param_1 + 0x58) + *(int *)(&DAT_0875728c + iVar3);
      local_30 = *(int *)(param_1 + 0x5c) + *(int *)(&DAT_08757290 + iVar3);
      local_44 = *(undefined4 *)(param_1 + 0x60);
      local_3c = *(int *)(param_1 + 0x48) + -1;
      local_40 = *(int *)(param_1 + 0x44) + 1;
      local_48 = &local_1c;
      local_1c = local_34;
      local_18 = local_30;
      uVar2 = sub_0802DB6C(0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x1c),
                           &local_24);
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
    if ((3 < (int)*(uint *)(param_1 + 0x4c)) &&
       (uVar1 = *(uint *)(param_1 + 0x4c) & 3, *(uint *)(param_1 + 0x4c) = uVar1, uVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 2;
    }
  }
  *(uint *)(param_1 + 0x18) =
       *(int *)(*(int *)(param_1 + 0x60) + 4) + (uint)*(byte *)(param_1 + 0x10) * 0x54 +
       *(int *)(param_1 + 0x4c) * 0xc;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x44) + 1;
    iVar3 = iVar3 * iVar3;
    if (*(byte *)(param_1 + 0x10) < 2) {
      uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x54) + 2);
      if ((int)(uVar1 << 0x1a) < 0) {
        iVar4 = *(int *)(param_1 + 0x20) - (iVar3 * 0x100 >> 1);
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar3 < *(int *)(param_1 + 0x58) * 0x100 - iVar4 >> 8) {
          *piVar5 = (*(int *)(param_1 + 0x58) - iVar3) * 0x100;
        }
      }
      else if ((int)(uVar1 << 0x1b) < 0) {
        iVar4 = *(int *)(param_1 + 0x20) + (iVar3 * 0x100 >> 1);
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar3 < iVar4 + *(int *)(param_1 + 0x58) * -0x100 >> 8) {
          *piVar5 = (*(int *)(param_1 + 0x58) + iVar3) * 0x100;
        }
      }
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x54) + 2);
      if ((int)(uVar1 << 0x19) < 0) {
        iVar4 = *(int *)(param_1 + 0x24) - (iVar3 * 0x100 >> 1);
        *(int *)(param_1 + 0x24) = iVar4;
        if (iVar3 < *(int *)(param_1 + 0x5c) * 0x100 - iVar4 >> 8) {
          *(int *)(param_1 + 0x24) = (*(int *)(param_1 + 0x5c) - iVar3) * 0x100;
        }
      }
      else if ((int)(uVar1 << 0x18) < 0) {
        iVar4 = *(int *)(param_1 + 0x24) + (iVar3 * 0x100 >> 1);
        *(int *)(param_1 + 0x24) = iVar4;
        if (iVar3 < iVar4 + *(int *)(param_1 + 0x5c) * -0x100 >> 8) {
          *(int *)(param_1 + 0x24) = (*(int *)(param_1 + 0x5c) + iVar3) * 0x100;
        }
      }
    }
    local_28 = *(int *)(param_1 + 0x1c);
    local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_1 + 0x10));
    local_2c = &gUnknown_086B80E8;
    local_30 = *(int *)(*(int *)(param_1 + 0x60) + 8);
    local_44 = *(undefined4 *)(param_1 + 0x28);
    local_40 = *(int *)(param_1 + 0x2c);
    local_3c = *(int *)(param_1 + 0x30);
    uStack_38 = *(undefined4 *)(param_1 + 0x34);
    local_48 = (int *)CONCAT31(local_48._1_3_,1);
    local_18 = param_1;
    iVar3 = sub_08011C70(&DAT_03001c4c,0,&local_48);
    if (iVar3 != 0) {
      iVar3 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
    }
  }
  sub_08019B4E(param_1);
  return;
}


/* sub_0802DE28 @ 0x0802DE28 */

undefined4 sub_0802DE28(undefined4 param_1,int param_2)

{
  if (*(int *)(*(int *)(param_2 + 0x58) + 0x9c) != *(int *)(param_2 + 0x50)) {
    sub_0800ECDA(param_2,0x12);
    sub_0800ED18(param_2,&DAT_03001b20);
  }
  if (-0x14 < *(short *)(param_2 + 0x176)) {
    *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + -1;
    return 0;
  }
  return 1;
}


/* sub_0802DE66 @ 0x0802DE66 */

undefined4 * sub_0802DE66(void)

{
  return &DAT_030030c0;
}


/* sub_0802DE74 @ 0x0802DE74 */

undefined4 * sub_0802DE74(void)

{
  return &DAT_030030c4;
}


/* sub_0802DE7C @ 0x0802DE7C */

void sub_0802DE7C(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(short *)(param_2 + 0x12) == 0) {
    *(char *)(param_2 + 0x11) = *(char *)(param_2 + 0x11) + '\x01';
    iVar1 = sub_080116FC(&DAT_03001c4c);
    if (0xff < iVar1) {
      iVar1 = ((int)(*(byte *)(param_2 + 0x11) - 1) >> 1) * 8;
      local_30 = (*(int *)(param_2 + 0x1a0) >> 8) + *(int *)(&DAT_087572c8 + iVar1);
      local_2c = (*(int *)(param_2 + 0x1a4) >> 8) + *(int *)(&DAT_087572cc + iVar1);
      sub_0800FDFA(&local_28,DAT_03001c34);
      local_18 = local_28 + local_20 >> 1;
      local_14 = local_24 + local_1c >> 1;
      uVar2 = sub_0802E444(0,&local_30,*(undefined1 *)(param_2 + 0x10),param_2,&local_18,local_14);
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
  }
  else if (*(short *)(param_2 + 0x12) == 8) {
    *(char *)(param_2 + 0x11) = *(char *)(param_2 + 0x11) + -1;
  }
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  return;
}


/* sub_0802DF32 @ 0x0802DF32 */

undefined4 * sub_0802DF32(void)

{
  return &DAT_030030cc;
}


