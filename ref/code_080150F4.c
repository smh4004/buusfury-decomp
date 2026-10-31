/* Ghidra reference decompilation of code_080150F4 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_080150F4 @ 0x080150F4 */

void sub_080150F4(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    uVar1 = *(int *)(param_1 + 0x154) + 1;
    *(uint *)(param_1 + 0x154) = uVar1;
    if ((uVar1 & 7) == 0) {
      if (*(short *)(&DAT_0300158c +
                    *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc +
                             *(int *)(param_1 + 300) + 0x54) * 0x68) != 0) {
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
    }
  }
  sub_080067D6();
  return;
}


/* sub_0801514A @ 0x0801514A */

void sub_0801514A(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 uVar5;
  undefined4 extraout_r1;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auStack_1020 [4096];
  int local_20;
  int local_1c;
  undefined1 *puStack_18;
  
  local_20 = param_1 + 0x100;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc + *(int *)(param_1 + 300) + 0x54);
  iVar2 = iVar1 * 0x68;
  *(undefined **)(param_2 + 0xc) = &gUnknown_082B9BA0;
  *param_2 = 0;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  *(undefined4 *)(param_2 + 4) = 0x10;
  *(undefined4 *)(param_2 + 8) = 0x37;
  local_1c = param_1;
  puStack_18 = param_2;
  uVar3 = sub_080135D2(&DAT_03001560 + iVar2);
  sub_0803DC96(param_2,&gUnknown_08057C10,
               *(undefined4 *)
                (&gUIStringPtrs +
                (uint)*(ushort *)(&DAT_086b82f0 + (uint)(byte)(&DAT_03001574)[iVar2] * 0x18) * 4),
               uVar3);
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  *(undefined4 *)(param_2 + 4) = 0x52;
  *(undefined4 *)(param_2 + 8) = 0x43;
  sub_0803DC96(param_2,&gUnknown_08057C34,(int)(short)(&DAT_03001576)[iVar1 * 0x34],
               (int)(short)(&DAT_03001578)[iVar1 * 0x34]);
  *(undefined4 *)(param_2 + 4) = 0x52;
  *(undefined4 *)(param_2 + 8) = 0x4f;
  sub_0803DC96(param_2,&gUnknown_08057C60,(int)(short)(&DAT_0300157a)[iVar1 * 0x34],
               (int)(short)(&DAT_0300157c)[iVar1 * 0x34]);
  *(undefined4 *)(param_2 + 4) = 0x52;
  *(undefined4 *)(param_2 + 8) = 0x5b;
  sub_0803DC96(param_2,&gUnknown_08057C8C,(&DAT_03001584)[iVar1 * 0x1a]);
  *(undefined4 *)(param_2 + 4) = 0x52;
  *(undefined4 *)(param_2 + 8) = 0x67;
  uVar3 = sub_0801361C(&DAT_03001560 + iVar2);
  sub_0803DC96(param_2,&gUnknown_08057CAA,uVar3);
  *(undefined4 *)(param_2 + 4) = 0x52;
  *(undefined4 *)(param_2 + 8) = 0x73;
  sub_0803DC96(param_2,&gUnknown_08057CD2,DAT_0300155c);
  sub_080530C8(DAT_03000f94 + DAT_03001538);
  *(undefined4 *)(param_2 + 4) = 0x52;
  *(undefined4 *)(param_2 + 8) = 0x7f;
  uVar7 = sub_080530F4(extraout_r1);
  sub_0803DC96(param_2,&gUnknown_08057CF2,(int)((ulonglong)uVar7 >> 0x20),(int)uVar7);
  sub_080051B0(param_2,0xa8,0x46,0x7a);
  iVar1 = local_1c;
  piVar6 = (int *)(local_1c + 0x140);
  if (*(char *)(local_1c + 0x130) == '\0') {
    if (*(short *)(&DAT_0300158c + iVar2) != 0) {
      if (*(int *)(local_1c + 0x154) << 0x1c < 0) {
        *(undefined4 *)(param_2 + 4) = 0xb2;
        *(undefined4 *)(param_2 + 8) = 0x35;
        sub_0803DADA(param_2,L"LevelUp!");
      }
      *(undefined4 *)(param_2 + 4) = 0xb2;
      *(undefined4 *)(param_2 + 8) = 0x43;
      sub_0803DADA(param_2,&gUnknown_08057D74);
      *param_2 = 2;
      param_2[3] = 0x75;
      *(undefined4 *)(param_2 + 4) = 0xe0;
      *(undefined4 *)(param_2 + 8) = 0x43;
      sub_0803DC96(param_2,&_080154C8,*(short *)(&DAT_0300158c + iVar2));
    }
    *param_2 = 2;
    *(undefined4 *)(param_2 + 8) = 0x4f;
    puVar4 = (ushort *)(&DAT_030015ac + iVar2);
    *(undefined4 *)(param_2 + 4) = 0xe0;
    if (*puVar4 == (ushort)(byte)(&DAT_03001588)[iVar2]) {
      uVar5 = 0x75;
    }
    else if ((ushort)(byte)(&DAT_03001588)[iVar2] < *puVar4) {
      uVar5 = 6;
    }
    else {
      uVar5 = 3;
    }
    param_2[3] = uVar5;
    sub_0803DC96(param_2,&_080154C8,*puVar4);
    *(undefined4 *)(param_2 + 8) = 0x5b;
    puVar4 = (ushort *)(&DAT_030015ae + iVar2);
    *(undefined4 *)(param_2 + 4) = 0xe0;
    if (*puVar4 == (ushort)(byte)(&DAT_03001589)[iVar2]) {
      uVar5 = 0x75;
    }
    else if ((ushort)(byte)(&DAT_03001589)[iVar2] < *puVar4) {
      uVar5 = 6;
    }
    else {
      uVar5 = 3;
    }
    param_2[3] = uVar5;
    sub_0803DC96(param_2,&_080154C8,*puVar4);
    *(undefined4 *)(param_2 + 8) = 0x67;
    puVar4 = (ushort *)(&DAT_030015b0 + iVar2);
    *(undefined4 *)(param_2 + 4) = 0xe0;
    if (*puVar4 == (ushort)(byte)(&DAT_0300158a)[iVar2]) {
      uVar5 = 0x75;
    }
    else if ((ushort)(byte)(&DAT_0300158a)[iVar2] < *puVar4) {
      uVar5 = 6;
    }
    else {
      uVar5 = 3;
    }
    param_2[3] = uVar5;
    sub_0803DC96(param_2,&_080154C8,*puVar4);
  }
  else if (*(char *)(local_1c + 0x130) == '\x01') {
    *(undefined4 *)(param_2 + 4) = 0xb2;
    *(undefined4 *)(param_2 + 8) = 0x43;
    sub_0803DADA(param_2,&gUnknown_08057D74);
    *param_2 = 2;
    param_2[3] = 6;
    *(undefined4 *)(param_2 + 8) = 0x43;
    *(undefined4 *)(param_2 + 4) = 0xe0;
    sub_0803DC96(param_2,&_080154C8,*(undefined4 *)(iVar1 + 0x150));
    *(undefined4 *)(param_2 + 8) = 0x4f;
    *(undefined4 *)(param_2 + 4) = 0xe0;
    if (*(int *)(iVar1 + 0x144) == *(int *)(local_20 + 0x38)) {
      uVar5 = 2;
    }
    else {
      uVar5 = 6;
    }
    param_2[3] = uVar5;
    sub_0803DC96(param_2,&_080154C8,*(undefined4 *)(iVar1 + 0x144));
    *(undefined4 *)(param_2 + 8) = 0x5b;
    *(undefined4 *)(param_2 + 4) = 0xe0;
    if (*(int *)(iVar1 + 0x148) == *(int *)(local_20 + 0x3c)) {
      uVar5 = 2;
    }
    else {
      uVar5 = 6;
    }
    param_2[3] = uVar5;
    sub_0803DC96(param_2,&_080154C8,*(undefined4 *)(iVar1 + 0x148));
    *(undefined4 *)(param_2 + 8) = 0x67;
    *(undefined4 *)(param_2 + 4) = 0xe0;
    if (*(int *)(iVar1 + 0x14c) == *piVar6) {
      uVar5 = 2;
    }
    else {
      uVar5 = 6;
    }
    param_2[3] = uVar5;
    sub_0803DC96(param_2,&_080154C8,*(undefined4 *)(iVar1 + 0x14c));
  }
  *(undefined4 *)(param_2 + 4) = 0xe0;
  *(undefined4 *)(param_2 + 8) = 0x73;
  puVar4 = (ushort *)(&DAT_030015b4 + iVar2);
  if (*puVar4 == (ushort)(byte)(&DAT_0300158b)[iVar2]) {
    uVar5 = 0x75;
  }
  else if ((ushort)(byte)(&DAT_0300158b)[iVar2] < *puVar4) {
    uVar5 = 6;
  }
  else {
    uVar5 = 3;
  }
  param_2[3] = uVar5;
  sub_0803DC96(param_2,&_080154C8,*puVar4);
  uVar3 = sub_08011F20((&DAT_086b82fc)[(uint)(byte)(&DAT_03001574)[iVar2] * 0x18]);
  Wfz_LoadContainer(uVar3,auStack_1020);
  sub_0803F922(param_2,auStack_1020,&DAT_086b805c);
  return;
}


/* sub_080154D4 @ 0x080154D4 */

void sub_080154D4(undefined4 param_1)

{
  undefined1 auStack_40 [52];
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  sub_08006718(param_1,auStack_40,0x1c,0);
  sub_0801514A(param_1,auStack_40);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_08015516 @ 0x08015516 */

undefined4 sub_08015516(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_3 == 6) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_08014188(0);
    sub_0803D850();
    return 1;
  }
  if (param_3 < 7) {
    pcVar3 = (char *)(param_1 + 0x130);
    if (param_3 == 0) {
      if (*pcVar3 == '\0') {
        *(undefined4 *)(param_1 + 0x10c) = 1;
        uVar2 = sub_08016208(0,param_1);
        *(undefined4 *)(param_1 + 0x128) = uVar2;
        sub_0800664E(param_1,uVar2);
        *pcVar3 = '\x01';
        *(undefined4 *)(*(int *)(param_1 + 0x11c) + 8) = 0;
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc + *(int *)(param_1 + 300) +
                        0x54) * 0x68;
        *(uint *)(param_1 + 0x134) = (uint)*(ushort *)(&DAT_0300158c + iVar1);
        *(uint *)(param_1 + 0x150) = (uint)*(ushort *)(&DAT_0300158c + iVar1);
        *(uint *)(param_1 + 0x138) = (uint)(byte)(&DAT_03001588)[iVar1];
        *(uint *)(param_1 + 0x144) = (uint)(byte)(&DAT_03001588)[iVar1];
        *(uint *)(param_1 + 0x13c) = (uint)(byte)(&DAT_03001589)[iVar1];
        *(uint *)(param_1 + 0x148) = (uint)(byte)(&DAT_03001589)[iVar1];
        *(uint *)(param_1 + 0x140) = (uint)(byte)(&DAT_0300158a)[iVar1];
        *(uint *)(param_1 + 0x14c) = (uint)(byte)(&DAT_0300158a)[iVar1];
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
      }
      else if (*pcVar3 == '\x01') {
        sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x128));
        *(undefined4 *)(param_1 + 0x10c) = 0;
        *pcVar3 = '\0';
        *(undefined4 *)(*(int *)(param_1 + 0x11c) + 8) = 1;
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc + *(int *)(param_1 + 300) +
                        0x54) * 0x68;
        uVar4 = *(uint *)(param_1 + 0x144);
        do {
          (&DAT_03001588)[iVar1] = (byte)uVar4;
        } while ((uint)(byte)(&DAT_03001588)[iVar1] != (uVar4 & 0xff));
        uVar4 = *(uint *)(param_1 + 0x148);
        do {
          (&DAT_03001589)[iVar1] = (byte)uVar4;
        } while ((uint)(byte)(&DAT_03001589)[iVar1] != (uVar4 & 0xff));
        uVar4 = *(uint *)(param_1 + 0x14c);
        do {
          (&DAT_0300158a)[iVar1] = (byte)uVar4;
        } while ((uint)(byte)(&DAT_0300158a)[iVar1] != (uVar4 & 0xff));
        uVar4 = *(uint *)(param_1 + 0x150);
        do {
          *(ushort *)(&DAT_0300158c + iVar1) = (ushort)uVar4;
        } while ((uint)*(ushort *)(&DAT_0300158c + iVar1) != (uVar4 & 0xffff));
        sub_08013C66();
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319494,0x40,0);
      }
      sub_08014D56(param_1);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else if (param_3 == 1) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
      if (*pcVar3 == '\0') {
        sub_0803D876(1);
        return 1;
      }
      if (*pcVar3 == '\x01') {
        *pcVar3 = '\0';
        *(undefined4 *)(*(int *)(param_1 + 0x11c) + 8) = 1;
        sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x128));
        *(undefined4 *)(param_1 + 0x10c) = 0;
        sub_08014D56(param_1);
        *(undefined4 *)(param_1 + 0x110) = 0;
        return 0;
      }
    }
    else if (param_3 == 3) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
      sub_08017160(0,*(undefined4 *)
                      (*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc + *(int *)(param_1 + 300) +
                      0x54));
      iVar1 = sub_0803D8A0();
      if (iVar1 == 2) {
        sub_08014188(0);
        sub_0803D850();
        return 1;
      }
      if (iVar1 == 3) {
        sub_08016524(0);
        sub_0803D850();
        return 1;
      }
      if (iVar1 == 4) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
        sub_0803D876(1);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  else {
    if (param_3 == 7) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
      sub_08016524(0);
      sub_0803D850();
      return 1;
    }
    if (param_3 == 100) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      sub_08015FEA(*(undefined4 *)(param_1 + 300),param_2);
      *(undefined4 *)(*(int *)(param_1 + 300) + 0x40) =
           *(undefined4 *)(*(int *)(param_1 + 300) + 0x3c);
      sub_08014D56(param_1);
    }
  }
  return 0;
}


/* sub_080157A4 @ 0x080157A4 */

undefined4 sub_080157A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x130) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x10c) * 4 + param_1;
      piVar3 = (int *)(iVar2 + 0x140);
      if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
        if (*(int *)(iVar2 + 0x134) < *piVar3) {
          *piVar3 = *piVar3 + -1;
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
      }
      if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
        iVar2 = sub_080135D2(&DAT_03001560 +
                             *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc +
                                      *(int *)(param_1 + 300) + 0x54) * 0x68);
        if ((*piVar3 < iVar2) && (0 < *(int *)(param_1 + 0x150))) {
          *piVar3 = *piVar3 + 1;
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08015882 @ 0x08015882 */

void sub_08015882(void)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  sub_0804912C(0x6000000,0,0x18000);
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BLDCNT = 0;
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0x400;
  sub_0804912C(0x6000000,0,0x9640);
  uStack_10 = 0x1e;
  uStack_c = 0x14;
  uStack_18 = 0;
  uStack_14 = 0;
  sub_0803DA10(&uStack_18,&DAT_0600f000,1);
  return;
}


/* sub_080158F4 @ 0x080158F4 */

void sub_080158F4(undefined4 param_1)

{
  sub_08015882();
  sub_08014DC2(param_1);
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}


/* sub_08015944 @ 0x08015944 */

void sub_08015944(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_2 + 4);
  __call_via_r2(*(int **)(param_2 + 4),*(undefined1 *)(param_1 + 8),*(int *)(iVar1 + 0x28) + iVar1,
                param_1,param_4);
  return;
}


/* sub_08015958 @ 0x08015958 */

int sub_08015958(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = 1;
  }
  else {
    iVar1 = **(int **)(param_2 + 4);
    iVar2 = *(int *)(iVar1 + 0x34);
    iVar1 = __call_via_r2(*(int **)(param_2 + 4),*(char *)(param_1 + 8),iVar2 + iVar1,iVar2,param_4)
    ;
    iVar1 = 1 - iVar1;
  }
  return iVar1;
}


/* sub_08015978 @ 0x08015978 */

void sub_08015978(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A7A0;
    *(undefined1 *)(puVar1 + 1) = 0xc;
  }
  sub_0800ED80(uVar2,puVar1);
  return;
}


/* sub_0801599C @ 0x0801599C */

void sub_0801599C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    iVar2 = *(int *)(iVar3 + 0x1a0) - *(int *)(iVar1 + 0x1a0);
    iVar4 = *(int *)(iVar3 + 0x1a4) - *(int *)(iVar1 + 0x1a4);
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = -iVar2;
    }
    iVar5 = iVar4;
    if (iVar4 < 0) {
      iVar5 = -iVar4;
    }
    if (iVar3 < iVar5) {
      if (iVar4 < 1) {
        *(undefined1 *)(iVar1 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(iVar1 + 0x10) = 0;
      }
    }
    else if (iVar2 < 1) {
      *(undefined1 *)(iVar1 + 0x10) = 2;
    }
    else {
      *(undefined1 *)(iVar1 + 0x10) = 3;
    }
  }
  return;
}


/* sub_080159F2 @ 0x080159F2 */

undefined4 sub_080159F2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_080159F4 @ 0x080159F4 */

undefined4 sub_080159F4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_08015A04 @ 0x08015A04 */

void sub_08015A04(int param_1)

{
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + *(int *)(param_1 + 8) * 0xc,0x40,0);
  return;
}


/* sub_08015A30 @ 0x08015A30 */

void sub_08015A30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x14) - iVar1;
  }
  Palette_Fade(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),iVar1 * *(int *)(param_1 + 0x20),param_4);
  return;
}


/* sub_08015A50 @ 0x08015A50 */

bool sub_08015A50(int param_1)

{
  return *(int *)(param_1 + 0x18) == 0;
}


/* sub_08015A5E @ 0x08015A5E */

void sub_08015A5E(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 == DAT_03001bac) {
    DAT_03002a58 = 1;
  }
  sub_08011C0C(&DAT_03001c4c,0x12,piVar1,param_4,param_4);
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x3c) + *piVar1);
  sub_08011944(&DAT_03001c4c,piVar1);
  return;
}


/* sub_08015A60 @ 0x08015A60 */

void sub_08015A60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 == DAT_03001bac) {
    DAT_03002a58 = 1;
  }
  sub_08011C0C(&DAT_03001c4c,0x12,piVar1,param_4,param_4);
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x3c) + *piVar1);
  sub_08011944(&DAT_03001c4c,piVar1);
  return;
}


/* sub_08015AA0 @ 0x08015AA0 */

void sub_08015AA0(int param_1,int param_2)

{
  *(undefined1 *)(*(int *)(param_2 + 4) + 0x10) = *(undefined1 *)(param_1 + 8);
  return;
}


/* sub_08015AA8 @ 0x08015AA8 */

void sub_08015AA8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800797C(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),param_3,param_4,param_4);
  return;
}


/* sub_08015AB4 @ 0x08015AB4 */

void sub_08015AB4(int param_1)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return;
}


/* sub_08015ABC @ 0x08015ABC */

void sub_08015ABC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 4);
  iVar2 = *(int *)(*piVar1 + 0x3c);
  __call_via_r1(piVar1,iVar2 + *piVar1,iVar2,param_4,param_4);
  piVar1[0x68] = *(int *)(param_1 + 8) << 8;
  piVar1[0x69] = *(int *)(param_1 + 0xc) << 8;
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x40) + *piVar1);
  return;
}


/* sub_08015AEE @ 0x08015AEE */

void sub_08015AEE(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    *param_1 = &_0804D4BC;
    param_1[10] = param_2;
    uVar1 = param_3[1];
    param_1[0xb] = *param_3;
    param_1[0xc] = uVar1;
  }
  return;
}


/* sub_08015AF0 @ 0x08015AF0 */

void sub_08015AF0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    *param_1 = &_0804D4BC;
    param_1[10] = param_2;
    uVar1 = param_3[1];
    param_1[0xb] = *param_3;
    param_1[0xc] = uVar1;
  }
  return;
}


/* sub_08015B1E @ 0x08015B1E */

void sub_08015B1E(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x1a0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x1a4);
  *(undefined4 *)(param_1 + 8) = 100;
  *(int *)(param_1 + 0x14) = (iVar2 >> 8) + *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x18) = (iVar1 >> 8) + *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x20) = 0;
  sub_08020610();
  return;
}


/* sub_08015B68 @ 0x08015B68 */

undefined4 * sub_08015B68(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804D27C;
  uVar1 = sub_08007858(0,param_2,param_3);
  sub_08021094(&DAT_03002bd8,uVar1);
  return param_1;
}


/* sub_08015B9E @ 0x08015B9E */

int sub_08015B9E(void)

{
  int iVar1;
  
  iVar1 = sub_08021084(&DAT_03002bd8);
  return 1 - iVar1;
}


/* sub_08015BB8 @ 0x08015BB8 */

void sub_08015BB8(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  
  param_5 = param_5 * 4;
  iVar3 = param_2[2] - *param_2;
  iVar4 = param_2[3];
  iVar2 = param_2[1];
  iVar6 = *(int *)(param_1 + 0x28) * iVar2 + *(int *)(param_1 + 0x24) + *param_2;
  *(undefined *)(iVar6 + 1) = (&gUnknown_086B8080)[param_5];
  sub_08046E40(iVar6 + 2,(&DAT_086b8081)[param_5],iVar3 + -3);
  iVar8 = 0;
  puVar7 = (undefined1 *)(*(int *)(param_1 + 0x28) + iVar6);
  uVar1 = (&gUnknown_086B8080)[param_5];
  iVar2 = (iVar4 - iVar2) + -2;
  if (0 < iVar2) {
    do {
      *puVar7 = uVar1;
      sub_08046E40(puVar7 + 1,(&DAT_086b8082)[param_5],iVar3 + -2);
      iVar8 = iVar8 + 1;
      puVar7[iVar3 + -1] = (&DAT_086b8083)[param_5];
      puVar7 = puVar7 + *(int *)(param_1 + 0x28);
      uVar1 = (&DAT_086b8081)[param_5];
    } while (iVar8 < iVar2);
  }
  sub_08046E40(puVar7 + 1,(&DAT_086b8083)[param_5],iVar3 + -2);
  *(undefined **)(param_1 + 0xc) = &gUnknown_0806E050;
  *(undefined4 *)(param_1 + 0x20) = 0x803f445;
  param_1[3] = 2;
  *param_1 = 0;
  uVar5 = *param_3;
  *(undefined4 *)(param_1 + 8) = param_3[1];
  *(undefined4 *)(param_1 + 4) = uVar5;
  sub_0803DADA(param_1,param_4);
  return;
}


/* sub_08015C62 @ 0x08015C62 */

undefined4 *
sub_08015C62(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
            int param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x40), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar2);
    *param_1 = &_080493F4;
    param_1[8] = param_9;
    param_1[9] = param_10;
    param_1[0xc] = param_9 + 3;
    param_1[0xd] = param_10 + 8;
    param_1[7] = *(undefined4 *)(&gUIStringPtrs + param_8 * 4);
    param_1[0xe] = param_11;
    param_1[0xf] = param_12;
    iVar1 = sub_0803FFE8(&gUnknown_0806E050);
    param_1[10] = param_1[8] + iVar1 + 6;
    param_1[0xb] = param_1[9] + 10;
  }
  return param_1;
}


/* sub_08015CD2 @ 0x08015CD2 */

undefined4 sub_08015CD2(int param_1,undefined4 *param_2)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) != *(int *)(param_1 + 8)) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = *(int *)(param_1 + 0x34) + -3;
  return 1;
}


/* sub_08015CF2 @ 0x08015CF2 */

void sub_08015CF2(int param_1,undefined4 param_2)

{
  sub_08015BB8(param_2,param_1 + 0x20,param_1 + 0x30,*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x38));
  return;
}


/* sub_08015D10 @ 0x08015D10 */

undefined4 *
sub_08015D10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x114), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,0xffffffff,0xffffffff);
    *param_1 = &_08049C68;
    uVar1 = param_6[1];
    uVar2 = param_6[2];
    uVar3 = param_6[3];
    param_1[9] = *param_6;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
    param_1[0x13] = 0;
    param_1[0x11] = param_7;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x44] = 0;
    uVar1 = sub_08013E64(0,param_1[1],4,param_1[9],param_1[10],param_7,1,0);
    param_1[7] = uVar1;
    uVar1 = sub_08013E64(0,param_1[1],5,param_1[0xb] + -0x10,param_1[10],param_1[0x11],1,0);
    param_1[8] = uVar1;
  }
  return param_1;
}


/* sub_08015DA8 @ 0x08015DA8 */

void sub_08015DA8(int param_1)

{
  sub_0800664E(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x1c));
  sub_0800664E(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x20));
  return;
}


/* sub_08015DBE @ 0x08015DBE */

void sub_08015DBE(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x110) = 1;
  iVar4 = -4;
  iVar1 = 0;
  iVar2 = iVar4;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar3 = iVar1 * 0xc;
      iVar1 = iVar1 + 1;
      iVar2 = *(int *)(iVar3 + param_1 + 0x4c + 0xc) + iVar2 + 10;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24) < iVar2) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar2 + 0x10) = 1;
    *(undefined4 *)(iVar2 + 8) = 1;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    while ((iVar2 = *(int *)(param_1 + 0x38), iVar2 < *(int *)(param_1 + 0x4c) &&
           (iVar1 = *(int *)(iVar2 * 0xc + param_1 + 0x4c + 0xc) + iVar4 + 10,
           iVar1 <= (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + -0x28))) {
      *(int *)(param_1 + 0x38) = iVar2 + 1;
      iVar4 = iVar1;
    }
    *(int *)(param_1 + 0x48) =
         (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) >> 1) - iVar4 / 2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}


/* sub_08015E94 @ 0x08015E94 */

void sub_08015E94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar2 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar2;
    if ((iVar2 < *(int *)(param_1 + 0x34)) &&
       (*(int *)(param_1 + 0x34) = iVar2, *(int *)(*(int *)(param_1 + 0x1c) + 0x10) != 0)) {
      *(int *)(param_1 + 0x38) = iVar2;
      iVar2 = -4;
      while ((iVar3 = *(int *)(param_1 + 0x38), iVar3 < *(int *)(param_1 + 0x4c) &&
             (iVar1 = *(int *)(iVar3 * 0xc + param_1 + 0x58) + iVar2 + 10,
             iVar1 <= (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + -0x28))) {
        *(int *)(param_1 + 0x38) = iVar3 + 1;
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0x48) =
           (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) >> 1) - iVar2 / 2;
    }
  }
  return;
}


/* sub_08015F1C @ 0x08015F1C */

void sub_08015F1C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((iVar1 < *(int *)(param_1 + 0x4c) + -1) &&
     (*(int *)(param_1 + 0x3c) = iVar1 + 1, *(int *)(param_1 + 0x38) <= iVar1 + 1)) {
    *(int *)(param_1 + 0x38) = iVar1 + 2;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x10) != 0) {
      *(int *)(param_1 + 0x34) = iVar1 + 2;
      iVar1 = -4;
      while (0 < *(int *)(param_1 + 0x34)) {
        iVar3 = *(int *)(param_1 + 0x34) + -1;
        iVar2 = *(int *)(iVar3 * 0xc + param_1 + 0x58) + iVar1 + 10;
        if ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + -0x28 < iVar2) break;
        *(int *)(param_1 + 0x34) = iVar3;
        iVar1 = iVar2;
      }
      *(int *)(param_1 + 0x48) =
           (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) >> 1) - iVar1 / 2;
    }
  }
  return;
}


/* sub_08015FA8 @ 0x08015FA8 */

void sub_08015FA8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      if (*(int *)(iVar1 * 0xc + param_1 + 0x54) == param_2) {
        *(int *)(param_1 + 0x3c) = iVar1;
        *(int *)(param_1 + 0x40) = iVar1;
        if (*(int *)(*(int *)(param_1 + 0x1c) + 0x10) != 0) {
          *(int *)(param_1 + 0x34) = iVar1 + -1;
          if (iVar1 + -1 < 0) {
            *(undefined4 *)(param_1 + 0x34) = 0;
          }
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return;
}


/* sub_08015FEA @ 0x08015FEA */

void sub_08015FEA(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) == param_2) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar2 = *(int *)(param_1 + 0x3c) + -1;
      *(int *)(param_1 + 0x3c) = iVar2;
      if ((iVar2 < *(int *)(param_1 + 0x34)) &&
         (*(int *)(param_1 + 0x34) = iVar2, *(int *)(*(int *)(param_1 + 0x1c) + 0x10) != 0)) {
        *(int *)(param_1 + 0x38) = iVar2;
        iVar2 = -4;
        while ((iVar3 = *(int *)(param_1 + 0x38), iVar3 < *(int *)(param_1 + 0x4c) &&
               (iVar1 = *(int *)(iVar3 * 0xc + param_1 + 0x58) + iVar2 + 10,
               iVar1 <= (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + -0x28))) {
          *(int *)(param_1 + 0x38) = iVar3 + 1;
          iVar2 = iVar1;
        }
        *(int *)(param_1 + 0x48) =
             (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) >> 1) - iVar2 / 2;
      }
    }
    return;
  }
  if (*(int *)(param_1 + 0x20) != param_2) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if ((iVar2 < *(int *)(param_1 + 0x4c) + -1) &&
     (*(int *)(param_1 + 0x3c) = iVar2 + 1, *(int *)(param_1 + 0x38) <= iVar2 + 1)) {
    *(int *)(param_1 + 0x38) = iVar2 + 2;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x10) != 0) {
      *(int *)(param_1 + 0x34) = iVar2 + 2;
      iVar2 = -4;
      while (0 < *(int *)(param_1 + 0x34)) {
        iVar1 = *(int *)(param_1 + 0x34) + -1;
        iVar3 = *(int *)(iVar1 * 0xc + param_1 + 0x58) + iVar2 + 10;
        if ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + -0x28 < iVar3) break;
        *(int *)(param_1 + 0x34) = iVar1;
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 0x48) =
           (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) >> 1) - iVar2 / 2;
    }
  }
  return;
}


/* sub_08015FFC @ 0x08015FFC */

void sub_08015FFC(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x4c);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  piVar1[iVar3 * 3 + 1] = param_2;
  piVar1[iVar3 * 3 + 2] = param_3;
  iVar2 = sub_0803FFE8(&gUnknown_0806E050);
  piVar1[iVar3 * 3 + 3] = iVar2;
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}


/* sub_0801602C @ 0x0801602C */

void sub_0801602C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar3 = (int *)(param_1 + 0x4c);
    do {
      if (piVar3[iVar1 * 3 + 1] == param_2) {
        iVar2 = *piVar3;
        *piVar3 = iVar2 + -1;
        iVar2 = (iVar2 + -1) - iVar1;
        if (iVar2 != 0) {
          sub_08049138((int)(piVar3 + iVar1 * 3 + 1),(int)(piVar3 + iVar1 * 3 + 4),iVar2 * 0xc);
        }
        *(undefined4 *)(param_1 + 0x110) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return;
}


/* sub_08016080 @ 0x08016080 */

undefined4 sub_08016080(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    *param_2 = *(int *)(param_1 + 0x48);
    param_2[1] = *(int *)(param_1 + 0x30) + -8;
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 < *(int *)(param_1 + 0x3c)) {
      do {
        iVar3 = iVar2 * 0xc;
        iVar2 = iVar2 + 1;
        *param_2 = *(int *)(iVar3 + param_1 + 0x58) + *param_2 + 10;
      } while (iVar2 < *(int *)(param_1 + 0x3c));
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_080160CA @ 0x080160CA */

void sub_080160CA(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    sub_08015DBE(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar2 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
      *(uint *)(iVar2 + 8) = (uint)(*(int *)(param_1 + 0x3c) != 0);
      *(uint *)(*(int *)(param_1 + 0x20) + 8) =
           (uint)(*(int *)(param_1 + 0x4c) + -1 != *(int *)(param_1 + 0x3c));
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = 0;
    }
  }
  iStack_24 = *(int *)(param_1 + 0x48);
  iStack_20 = *(int *)(param_1 + 0x28) + 3;
  iStack_18 = *(int *)(param_1 + 0x30) + -3;
  iStack_28 = *(int *)(param_1 + 0x30) + -5;
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 < *(int *)(param_1 + 0x38)) {
    do {
      iVar1 = iVar2 * 0xc + param_1;
      iStack_1c = iStack_24 + *(int *)(iVar1 + 0x58) + 6;
      iStack_2c = iStack_24 + 3;
      sub_08015BB8(param_2,&iStack_24,&iStack_2c,*(undefined4 *)(iVar1 + 0x50),
                   *(int *)(param_1 + 0x40) == iVar2);
      iVar2 = iVar2 + 1;
      iStack_24 = iStack_1c + 4;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}


/* sub_08016188 @ 0x08016188 */

undefined4 sub_08016188(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(*(int *)(param_1 + 0x1c) + 0x10) == 0) &&
     (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8))) {
    if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
      sub_08015E94(param_1);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
      iVar1 = **(int **)(param_1 + 4);
      __call_via_r3(*(int **)(param_1 + 4),param_1,*(undefined4 *)(param_1 + 0x44),
                    *(int *)(iVar1 + 0x20) + iVar1,param_4);
    }
    else if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
      sub_08015F1C(param_1);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
      iVar1 = **(int **)(param_1 + 4);
      __call_via_r3(*(int **)(param_1 + 4),param_1,*(undefined4 *)(param_1 + 0x44),
                    *(int *)(iVar1 + 0x20) + iVar1);
    }
  }
  return 0;
}


/* sub_08016208 @ 0x08016208 */

undefined4 * sub_08016208(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049898;
    param_1[1] = param_2;
    param_1[2] = 0;
    uVar1 = sub_0803D5B8(0x100);
    param_1[3] = uVar1;
    Wfz_LoadContainer(&gUnknown_086B7E8C,uVar1);
  }
  return param_1;
}


/* sub_08016240 @ 0x08016240 */

void sub_08016240(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049898;
  sub_0803D63C(param_1[3]);
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08016260 @ 0x08016260 */

void sub_08016260(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_14;
  
  if ((-1 < *(int *)(param_1 + 8) << 0x1c) &&
     (iVar1 = **(int **)(param_1 + 4),
     iVar1 = __call_via_r2(*(int **)(param_1 + 4),&local_20,*(int *)(iVar1 + 0x1c) + iVar1),
     iVar1 != 0)) {
    local_20 = local_20 + -0x10;
    local_14 = local_1c + 8;
    local_1c = local_1c + -8;
    sub_0803F922(param_2,*(undefined4 *)(param_1 + 0xc),&local_20);
  }
  return;
}


/* sub_080162A8 @ 0x080162A8 */

void sub_080162A8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar1;
  if ((uVar1 & 7) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
  }
  return;
}


/* sub_080162CC @ 0x080162CC */

void sub_080162CC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = sub_08016304(0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),param_1,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_080162E6 @ 0x080162E6 */

void sub_080162E6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = sub_08016304(0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),0,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08016304 @ 0x08016304 */

undefined4 * sub_08016304(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x40;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x40);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804A298;
    param_1[4] = param_3;
    param_1[5] = param_4;
    puVar3 = (&PTR_gUnknown_086B814C_086b8128)[param_2];
    param_1[7] = (int)(((uint)(*(int *)(puVar3 + 4) >> 0x1f) >> 0x1a) + *(int *)(puVar3 + 4)) >> 6;
    uVar2 = sub_0803D5B8(*(undefined4 *)(puVar3 + 4));
    param_1[9] = uVar2;
    Wfz_LoadContainer(puVar3,uVar2);
    param_1[6] = 0;
    param_1[8] = 0xffffffff;
  }
  return param_1;
}


/* sub_08016384 @ 0x08016384 */

void sub_08016384(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804A298;
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1[5] + 0xc) = 1;
  }
  sub_0803D63C(param_1[9]);
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


/* sub_080163C4 @ 0x080163C4 */

void sub_080163C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) <= (int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3) {
    sub_08011944(&DAT_03001c4c,param_1,*(int *)(param_1 + 0x1c),param_4,param_4);
  }
  return;
}


/* sub_080163E6 @ 0x080163E6 */

undefined4 sub_080163E6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  iVar1 = **(int **)(param_1 + 0x10);
  __call_via_r2(&local_10,*(int **)(param_1 + 0x10),*(int *)(iVar1 + 0x38) + iVar1);
  *(int *)(param_1 + 0x2c) = local_c;
  *(int *)(param_1 + 0x28) = local_10;
  if ((((local_10 < -7) || (0xef < local_10)) || (local_c < -7)) || (0x9f < local_c)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_08016428 @ 0x08016428 */

undefined4 sub_08016428(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x2000;
  uVar2 = (uint)(*(int *)(param_1 + 0x28) << 0x17) >> 7 | 0x2000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | *(uint *)(param_1 + 0x2c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(*(int *)(param_1 + 0x10) + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  iVar4 = (int)(((uint)(*(int *)(param_1 + 0x18) >> 0x1f) >> 0x1d) + *(int *)(param_1 + 0x18)) >> 3;
  if (*(int *)(param_1 + 0x20) != iVar4) {
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(param_1 + 0x24) + iVar4 * 0x40,0x40);
    *(int *)(param_1 + 0x20) = iVar4;
  }
  return 0;
}


/* sub_080164A0 @ 0x080164A0 */

undefined4 sub_080164A0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0xc) {
    iVar1 = *(int *)(*param_1 + 8);
    __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  }
  return 0;
}


/* sub_080164D0 @ 0x080164D0 */

void sub_080164D0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 0x134);
  piVar3 = (int *)(param_1 + 0x284);
  *piVar2 = 0;
  *piVar3 = 0;
  iVar1 = 0;
  do {
    if ((&DAT_0300106a)[iVar1] != '\0') {
      if (((&gUnknown_083BD2F8)[iVar1 * 0x34] & 1) == 0) {
        iVar4 = *piVar2;
        *piVar2 = iVar4 + 1;
        piVar2[iVar4 + 1] = iVar1;
      }
      else {
        iVar4 = *piVar3;
        *piVar3 = iVar4 + 1;
        piVar3[iVar4 + 1] = iVar1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x53);
  return;
}


/* sub_08016524 @ 0x08016524 */

undefined4 * sub_08016524(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x3d4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804920C;
  param_1[1] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  *param_1 = &_08049D48;
  param_1[0x4d] = 0;
  param_1[0xa1] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x43] = 2;
  sub_080164D0(param_1);
  return param_1;
}


/* sub_08016574 @ 0x08016574 */

void sub_08016574(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar1 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,iVar2 + 0x2e,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x22,0x14,L"Status",2,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0xce,0x14,L"Equip",2,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,2,0xd4,0x28,2,1,1);
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,3,0xd4,0x70,3,1,1);
  *(undefined4 *)(param_1 + 300) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,0,0xffffffff,0xffffffff,0xffffffff,1,0x22,0x18,0x20,1,0);
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,1,0xffffffff,0xffffffff,0,0xffffffff,0x23,
                       (*(int *)(*(int *)(param_1 + 0x114) + 0x28) -
                       *(int *)(*(int *)(param_1 + 0x114) + 0x20)) + 0x1c,0x20,0,1);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  sub_0800664E(param_1,uVar1);
  return;
}


/* sub_080167A0 @ 0x080167A0 */

void sub_080167A0(int param_1,undefined1 *param_2,int *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_440;
  int iStack_43c;
  int iStack_438;
  int iStack_434;
  undefined1 auStack_430 [1024];
  int iStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  int *local_18;
  
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  iStack_20 = param_1;
  puStack_1c = param_2;
  local_18 = param_3;
  if (*param_3 == 0) {
    *param_2 = 1;
    *(undefined4 *)(param_2 + 4) = 0x78;
    *(undefined4 *)(param_2 + 8) = 0x58;
    iVar3 = 0x4b;
    if (*(int *)(param_1 + 0x11c) != 0) {
      iVar3 = 0x4c;
    }
    sub_0803DADA(param_2,*(undefined4 *)(&gUIStringPtrs + iVar3 * 4));
    iVar3 = *(int *)(param_1 + 0x128);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    iVar3 = *(int *)(param_1 + 300);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x10) = 1;
    *(uint *)(*(int *)(param_1 + 0x128) + 8) = (uint)(*(int *)(param_1 + 0x124) != 0);
    *(undefined4 *)(*(int *)(param_1 + 300) + 0x10) = 1;
    *(uint *)(*(int *)(param_1 + 300) + 8) = (uint)(*param_3 + -1 != *(int *)(param_1 + 0x124));
    iVar3 = *(int *)(param_1 + 0x124);
    if (iVar3 < *(int *)(param_1 + 0x120)) {
      *(int *)(param_1 + 0x120) = iVar3;
    }
    if (*(int *)(param_1 + 0x120) < iVar3 + -4) {
      *(int *)(param_1 + 0x120) = iVar3 + -4;
    }
    sub_080051B0(param_2,0xdb,0x37,0x70);
    *param_2 = 0;
    iVar3 = 0;
    do {
      iStack_2c = *(int *)(param_1 + 0x120) + iVar3;
      if (*local_18 <= iStack_2c) {
        return;
      }
      iStack_30 = local_18[iStack_2c + 1];
      iVar4 = iStack_30 * 0x34;
      Wfz_LoadContainer(*(undefined4 *)(&DAT_083bd320 + iVar4),auStack_430);
      iStack_440 = 0x25 - *(int *)(&DAT_083bd314 + iVar4) / 2;
      iStack_24 = iVar3 * 0x12;
      iStack_43c = (iStack_24 + 0x34) - *(int *)(&DAT_083bd318 + iVar4) / 2;
      iStack_438 = iStack_440 + *(int *)(&DAT_083bd314 + iVar4);
      iStack_434 = iStack_43c + *(int *)(&DAT_083bd318 + iVar4);
      sub_0803F922(param_2,auStack_430,&iStack_440);
      puStack_28 = &DAT_03001068 + iStack_30;
      if ((byte)(&DAT_0300106a)[iStack_30] < 2) {
        uVar1 = *(ushort *)(&DAT_083bd2fc + iVar4);
      }
      else {
        uVar1 = *(ushort *)(&DAT_083bd2fe + iVar4);
      }
      uVar5 = *(undefined4 *)(&gUIStringPtrs + (uint)uVar1 * 4);
      if ((*(int *)(param_1 + 0x10c) == 2) && (*(int *)(param_1 + 0x124) == iStack_2c)) {
        uVar2 = 6;
      }
      else {
        uVar2 = 2;
      }
      param_2[3] = uVar2;
      *(int *)(param_2 + 8) = iStack_24 + 0x38;
      *(undefined4 *)(param_2 + 4) = 0x38;
      sub_0803DADA(param_2,uVar5);
      if (1 < (byte)puStack_28[2]) {
        sub_0803DC96(param_2,L" x %d");
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  return;
}


/* sub_08016928 @ 0x08016928 */

int sub_08016928(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x134);
  if (*(int *)(param_1 + 0x11c) != 0) {
    piVar2 = (int *)(param_1 + 0x284);
  }
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    *param_2 = 0x14;
    param_2[1] = (*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120)) * 0x12 + 0x36;
    iVar1 = 1;
  }
  return iVar1;
}


/* sub_08016962 @ 0x08016962 */

void sub_08016962(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_228 [62];
  undefined1 auStack_1ea [52];
  undefined1 auStack_1b6 [52];
  undefined1 auStack_182 [104];
  undefined1 auStack_11a [52];
  undefined1 auStack_e6 [52];
  undefined1 auStack_b2 [106];
  undefined1 auStack_48 [52];
  
  sub_0803F540(auStack_48,0xf0,0xa0);
  sub_08006718(param_1,auStack_48,0x21,0);
  if (*(int *)(param_1 + 0x11c) == 0) {
    sub_080167A0(param_1,auStack_48,param_1 + 0x134);
  }
  else {
    sub_080167A0(param_1,auStack_48,param_1 + 0x284);
  }
  sub_080066EC(param_1,auStack_48);
  Wfz_LoadContainer(&DAT_086b8294,auStack_228);
  iVar2 = (short)(&DAT_03001576)[(uint)DAT_03001068 * 0x34] * 0x29;
  software_interrupt(6);
  sVar1 = (&DAT_0300157a)[(uint)DAT_03001068 * 0x34];
  iVar3 = sVar1 * 0x29;
  software_interrupt(6);
  iVar4 = (short)(&DAT_03001576)[(uint)DAT_03001068 * 0x34] * -0x29 + 0x29;
  if (iVar4 != 0) {
    sub_08046E40(auStack_1ea + iVar2,1,iVar4);
    sub_08046E40(auStack_1b6 + iVar2,1,iVar4);
    sub_08046E40(auStack_182 + iVar2,1,iVar4);
  }
  iVar2 = sVar1 * -0x29 + 0x29;
  if (iVar2 != 0) {
    sub_08046E40(auStack_11a + iVar3,1,iVar2);
    sub_08046E40(auStack_e6 + iVar3,1,iVar2);
    sub_08046E40(auStack_b2 + iVar3,1,iVar2);
  }
  uStack_238 = 0xac;
  uStack_234 = 0x88;
  uStack_230 = 0xe1;
  uStack_22c = 0x91;
  sub_0803F922(auStack_48,auStack_228,&uStack_238);
  sub_08049150((int)auStack_48,0x6000040);
  sub_0803F58C(auStack_48,0);
  return;
}


/* sub_08016AA8 @ 0x08016AA8 */

undefined4 * sub_08016AA8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 unaff_r11;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  int iStack_18;
  
  iStack_18 = param_4;
  switch(param_3) {
  case 0:
    uVar4 = 0x8016ae1;
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    piVar3 = param_1 + 0x4d;
    puVar2 = (undefined4 *)param_1[0x47];
    bVar5 = puVar2 == (undefined4 *)0x0;
    bVar6 = bVar5;
    if (!bVar5) {
      puVar2 = (undefined4 *)0x284;
      piVar3 = param_1 + 0xa1;
      bVar6 = piVar3 == (int *)0x0;
    }
    if (bVar5 || (int *)0xfffffd7b < param_1) {
      *puVar2 = uVar4;
      puVar2[-1] = &iStack_18;
      puVar2[-2] = unaff_r11;
      puVar2[-3] = param_1 + 0x40;
      puVar2[-4] = param_1;
    }
    if (!bVar6) {
      *(undefined4 *)(param_1[0x4c] + 8) = 8;
      __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
      iStack_18 = piVar3[param_1[0x49] + 1];
      puVar2 = (undefined4 *)sub_0803D5B8(0x118);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804ACB4;
        puVar2[0x45] = iStack_18;
      }
      iVar1 = sub_0803D8A0();
      if (iVar1 == 1) {
        sub_080164D0(param_1);
        if (*piVar3 <= param_1[0x49]) {
          param_1[0x49] = *piVar3 + -1;
        }
        if (param_1[0x49] < 0) {
          param_1[0x49] = 0;
        }
      }
      puVar2 = (undefined4 *)0x0;
    }
    break;
  case 1:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(1);
    puVar2 = (undefined4 *)0x1;
    break;
  case 2:
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    param_1[0x49] = param_1[0x49] + -1;
    param_1[0x44] = 0;
  default:
_08016C58:
    puVar2 = (undefined4 *)0x0;
    break;
  case 3:
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    param_1[0x49] = param_1[0x49] + 1;
    param_1[0x44] = 0;
    goto _08016C58;
  case 6:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar2 = (undefined4 *)sub_0803D5B8(0x158);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804920C;
      puVar2[1] = 0;
      puVar2[0x43] = 0;
      puVar2[0x42] = 0;
      puVar2[0x44] = 0;
      *puVar2 = &_08049758;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      puVar2[0x48] = 0;
      puVar2[0x49] = 0;
      puVar2[0x55] = 0;
    }
    sub_0803D850();
    puVar2 = (undefined4 *)0x1;
    break;
  case 7:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar2 = (undefined4 *)sub_0803D5B8(0x118);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804920C;
      puVar2[1] = 0;
      puVar2[0x43] = 0;
      puVar2[0x42] = 0;
      puVar2[0x44] = 0;
      *puVar2 = &_08049588;
      puVar2[0x45] = 0;
    }
    sub_0803D850();
    puVar2 = (undefined4 *)0x1;
  }
  return puVar2;
}


/* sub_08016C5C @ 0x08016C5C */

undefined4 sub_08016C5C(int param_1)

{
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    return 1;
  }
  if (((int)((uint)DAT_03003304 << 0x1a) < 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x38) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (((int)((uint)DAT_03003304 << 0x1b) < 0) && (*(int *)(param_1 + 0x11c) != 1)) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 1;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x38) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_08016CE8 @ 0x08016CE8 */

void sub_08016CE8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar1 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,iVar2 + 0x2e,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x22,0x14,L"Inventory",2,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0xce,0x14,L"Options",2,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}


/* sub_08016E36 @ 0x08016E36 */

undefined4 sub_08016E36(int param_1,undefined4 *param_2)

{
  param_2[1] = *(int *)(param_1 + 0x114) * 0x10 + 0x24;
  *param_2 = 0x12;
  return 1;
}


/* sub_08016E4A @ 0x08016E4A */

void sub_08016E4A(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_15c [256];
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined4 local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 local_2c;
  int local_18;
  
  sub_0803F540(&local_4c,0xf0,0xa0);
  sub_08006718(param_1,&local_4c,0x24,1);
  sub_080051B0(&local_4c,0xa5,0x21,0x56);
  sub_08005154(&local_4c,0x10,0x5e,0xe0);
  iVar2 = (uint)DAT_03001068 * 0x68;
  sub_08013C66(&DAT_03001560 + iVar2);
  local_40 = &gUnknown_0807012C;
  local_4c = 0;
  local_4a = 1;
  local_2c = 0x803f5a5;
  local_48 = 0xaf;
  local_44 = 0x2d;
  sub_0803DC96(&local_4c,&gUnknown_08057DAA,*(undefined2 *)(&DAT_030015ac + iVar2));
  local_48 = 0xaf;
  local_44 = 0x39;
  sub_0803DC96(&local_4c,&gUnknown_08057DFE,*(undefined2 *)(&DAT_030015ae + iVar2));
  local_48 = 0xaf;
  local_44 = 0x45;
  sub_0803DC96(&local_4c,&gUnknown_08057E52,*(undefined2 *)(&DAT_030015b0 + iVar2));
  local_48 = 0xaf;
  local_44 = 0x51;
  sub_0803DC96(&local_4c,&gUnknown_08057EA6,*(undefined2 *)(&DAT_030015b4 + iVar2));
  iVar3 = 0;
  local_18 = param_1 + 0x100;
  do {
    iVar1 = *(int *)(&DAT_03001560 + iVar2 + iVar3 * 4 + 0x3c) * 0x2c;
    iVar4 = iVar3 * 0x10;
    local_44 = iVar4 + 0x28;
    local_48 = 0x22;
    sub_0803DCC4(&local_4c,0x7a,
                 *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&gEquipmentTable + iVar1) * 4));
    local_58 = iVar4 + 0x1c;
    local_54 = 0x20;
    local_50 = iVar4 + 0x2c;
    local_5c = 0x10;
    Wfz_LoadContainer(*(undefined4 *)(&DAT_086f82fc + iVar1),auStack_15c);
    sub_0803F922(&local_4c,auStack_15c,&local_5c);
    if (*(int *)(local_18 + 0x14) == iVar3) {
      local_48 = 0x13;
      local_44 = 0x6a;
      local_4b = 0xc;
      sub_0803DD66(&local_4c,0xcc,
                   *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_086f82ee + iVar1) * 4));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  sub_08049150((int)&local_4c,0x6000040);
  sub_0803F58C(&local_4c,0);
  return;
}


/* sub_08016FC4 @ 0x08016FC4 */

undefined4 sub_08016FC4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    sub_0801D674(0,*(undefined4 *)(param_1 + 0x114));
    sub_0803D850();
    uVar2 = 1;
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    sub_0803D876(1);
    uVar2 = 1;
  }
  else if (param_3 == 6) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    sub_08016524(0);
    sub_0803D850();
    uVar2 = 1;
  }
  else if (param_3 == 7) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      puVar1[0x45] = &_0804BF28;
      *puVar1 = &_080498F0;
      puVar1[0x45] = &UNK_08049928;
      *(undefined1 *)(puVar1 + 0x46) = (undefined1)DAT_03001914;
      *(undefined1 *)((int)puVar1 + 0x119) = DAT_03001914._1_1_;
      *(undefined1 *)((int)puVar1 + 0x11a) = DAT_03001914._2_1_;
      *(undefined1 *)((int)puVar1 + 0x11b) = DAT_03001914._3_1_;
    }
    sub_0803D850();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_08017078 @ 0x08017078 */

undefined4 sub_08017078(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    uVar1 = 1;
  }
  else {
    if ((int)((uint)DAT_03003304 << 0x19) < 0) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(uint *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 3U & 3;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    if ((int)((uint)DAT_03003304 << 0x18) < 0) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(uint *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1U & 3;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}


