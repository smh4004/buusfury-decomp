/* Ghidra reference decompilation of code_0801D420 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801D420 @ 0x0801D420 */

undefined4 sub_0801D420(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_38 [36];
  
  puVar7 = auStack_38;
  if (param_3 == 0) {
    uVar8 = 0x801d453;
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    iVar1 = *(int *)(param_1 + 0x10c);
    puVar4 = *(undefined4 **)(param_1 + 0x124);
    iVar2 = iVar1;
    if (puVar4 == (undefined4 *)0x0) {
      iVar2 = iVar1 + 1;
    }
    if (puVar4 == (undefined4 *)0x0 && iVar1 != -1) {
      puVar7 = (undefined1 *)((uint)puVar4 & iVar2 << 0x16);
    }
    else {
      *(undefined4 *)(iVar2 + -4) = uVar8;
      *(undefined1 **)(iVar2 + -8) = auStack_38;
      *(undefined4 *)(iVar2 + -0xc) = unaff_r11;
      *(undefined4 *)(iVar2 + -0x10) = unaff_r9;
      *(undefined4 **)(iVar2 + -0x14) = &gUnknown_0871E9A8;
      *(undefined4 *)(iVar2 + -0x18) = unaff_r5;
      *(int *)(iVar2 + -0x1c) = iVar2;
      *puVar4 = 0x801d46c;
      puVar4[-1] = uVar8;
      puVar4[-2] = in_r12;
      puVar4[-3] = unaff_r8;
      puVar4[-4] = puVar4;
    }
    if (iVar2 == 2) {
      iVar2 = sub_08011C70(DAT_03002844,9,0);
      if ((((DAT_03001a34 == 0) && (iVar2 != 0)) &&
          (iVar1 = *(int *)(DAT_03002844 + 0x610) + DAT_03001afc, iVar1 < 8)) &&
         (iVar3 = sub_080116FC(DAT_03002844,iVar1,&gUnknown_0871E9A8), iVar1 = DAT_03002844,
         0xff < iVar3)) {
        sub_0800FDFA(puVar7 + 0xc,iVar2);
        *(int *)(puVar7 + 4) = *(int *)(puVar7 + 0xc) + *(int *)(puVar7 + 0x14);
        iVar3 = *(int *)(puVar7 + 0xc) + *(int *)(puVar7 + 0x14) >> 1;
        *(int *)(puVar7 + 8) = *(int *)(puVar7 + 0x10) + *(int *)(puVar7 + 0x18);
        iVar2 = *(int *)(puVar7 + 0x10) + *(int *)(puVar7 + 0x18) >> 1;
        *(int *)(puVar7 + 8) = iVar2;
        *(int *)(puVar7 + 0x20) = iVar2;
        *(int *)(puVar7 + 4) = iVar3;
        *(int *)(puVar7 + 0x1c) = iVar3;
        uVar8 = *(undefined4 *)(param_1 + 0x118);
        puVar4 = (undefined4 *)sub_0803D5B8(0x14);
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[1] = 1;
          *puVar4 = &_08049ABC;
          uVar6 = *(undefined4 *)(puVar7 + 0x20);
          puVar4[2] = *(undefined4 *)(puVar7 + 0x1c);
          puVar4[3] = uVar6;
          puVar4[4] = uVar8;
        }
        piVar5 = (int *)(iVar1 + 0x610);
        iVar2 = *piVar5;
        *piVar5 = iVar2 + 1;
        piVar5[iVar2 + 1] = (int)puVar4;
        sub_08004656(&DAT_03001068,*(undefined4 *)(param_1 + 0x114));
        sub_0803D876(2);
      }
      else {
        sub_0803D876(4);
      }
      return 1;
    }
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(3);
    return 1;
  }
  return 0;
}


/* sub_0801D576 @ 0x0801D576 */

undefined4 sub_0801D576(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((int)((uint)DAT_03003304 << 0x19) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
    iVar1 = *(int *)(param_1 + 0x10c) + -1;
    *(int *)(param_1 + 0x10c) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 300);
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if ((int)((uint)DAT_03003304 << 0x18) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
    iVar1 = *(int *)(param_1 + 0x10c) + 1;
    *(int *)(param_1 + 0x10c) = iVar1;
    if (*(int *)(param_1 + 300) < iVar1) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_0801D5F8 @ 0x0801D5F8 */

void sub_0801D5F8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  iVar3 = (uint)DAT_03001068 * 0x68;
  puVar5 = &DAT_03001560 + iVar3;
  puVar4 = (uint *)(puVar5 + *(int *)(param_1 + 0x114) * 4 + 0x3c);
  uVar6 = *puVar4;
  if (*(int *)(param_1 + 0x150) != 0) {
    uVar2 = ((int *)(param_1 + 0x150))[*(int *)(param_1 + 0x13c) * 2 + 1] & 0xfffffff;
    do {
      *puVar4 = uVar2;
    } while (*puVar4 != uVar2);
  }
  sub_08013C66(puVar5);
  iVar1 = *(int *)(param_1 + 0x114);
  do {
    *(uint *)(puVar5 + iVar1 * 4 + 0x3c) = uVar6;
  } while (*(uint *)(puVar5 + iVar1 * 4 + 0x3c) != uVar6);
  *(uint *)(param_1 + 0x128) = (uint)*(ushort *)(&DAT_030015ac + iVar3);
  *(uint *)(param_1 + 300) = (uint)*(ushort *)(&DAT_030015ae + iVar3);
  *(uint *)(param_1 + 0x130) = (uint)*(ushort *)(&DAT_030015b0 + iVar3);
  *(uint *)(param_1 + 0x134) = (uint)*(ushort *)(&DAT_030015b4 + iVar3);
  return;
}


/* sub_0801D674 @ 0x0801D674 */

undefined4 * sub_0801D674(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x924), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    *param_1 = &_0804A8F4;
    piVar5 = param_1 + 0x54;
    *piVar5 = 0;
    param_1[0x45] = param_2;
    iVar2 = (uint)DAT_03001068 * 0x68;
    sub_08013C66(&DAT_03001560 + iVar2);
    uVar1 = *(ushort *)(&DAT_030015ac + iVar2);
    param_1[0x4a] = (uint)uVar1;
    param_1[0x46] = (uint)uVar1;
    uVar1 = *(ushort *)(&DAT_030015ae + iVar2);
    param_1[0x4b] = (uint)uVar1;
    param_1[0x47] = (uint)uVar1;
    uVar1 = *(ushort *)(&DAT_030015b0 + iVar2);
    param_1[0x4c] = (uint)uVar1;
    param_1[0x48] = (uint)uVar1;
    uVar1 = *(ushort *)(&DAT_030015b4 + iVar2);
    param_1[0x4d] = (uint)uVar1;
    param_1[0x49] = (uint)uVar1;
    iVar2 = 0;
    param_1[0x4f] = 0;
    if (0 < DAT_0300114c) {
      do {
        uVar3 = (&DAT_03001150)[iVar2];
        if ((uint)(byte)(&DAT_086f8300)[(uVar3 & 0xfffffff) * 0x2c] == param_1[0x45]) {
          if ((uVar3 >> 0x1c) - 1 == (uint)DAT_03001068) {
            param_1[0x4f] = *piVar5;
          }
          iVar4 = *piVar5;
          *piVar5 = iVar4 + 1;
          uVar3 = (&DAT_03001150)[iVar2];
          piVar5[iVar4 * 2 + 2] = iVar2;
          piVar5[iVar4 * 2 + 1] = uVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_0300114c);
    }
    param_1[0x4e] = param_1[0x4f] + -2;
    if (param_1[0x4f] + -2 < 0) {
      param_1[0x4e] = 0;
    }
    sub_0801D5F8(param_1);
  }
  return param_1;
}


/* sub_0801D762 @ 0x0801D762 */

void sub_0801D762(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0x144) + 8) = (uint)(0 < *(int *)(param_1 + 0x13c));
  *(uint *)(*(int *)(param_1 + 0x148) + 8) =
       (uint)(*(int *)(param_1 + 0x13c) < *(int *)(param_1 + 0x150) + -1);
  return;
}


/* sub_0801D798 @ 0x0801D798 */

void sub_0801D798(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  wchar16 *pwVar3;
  
  pwVar3 = L"Cancel";
  iVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0,L"Cancel");
  *(int *)(param_1 + 0x140) = iVar1;
  sub_0800664E(param_1,iVar1);
  uVar2 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  iVar1 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar2 = sub_08013E64(0,param_1,1,iVar1 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08014124(0,param_1,iVar1 + 0x2e,0x90,pwVar3,5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08014124(0,param_1,0x22,0x14,L"Inventory",2,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08014124(0,param_1,0xce,0x14,L"Options",2,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  if (*(int *)(param_1 + 0x150) == 0) {
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 8) = 0;
  }
  else {
    uVar2 = sub_08013E64(0,param_1,2,0x9e,0x1e,2,1,1);
    *(undefined4 *)(param_1 + 0x144) = uVar2;
    sub_0800664E(param_1,uVar2);
    uVar2 = sub_08013E64(0,param_1,3,0x9e,0x4b,3,1,1);
    *(undefined4 *)(param_1 + 0x148) = uVar2;
    sub_0800664E(param_1,uVar2);
    uVar2 = sub_08016208(0,param_1);
    *(undefined4 *)(param_1 + 0x14c) = uVar2;
    sub_0800664E(param_1,uVar2);
  }
  return;
}


/* sub_0801D970 @ 0x0801D970 */

undefined4 sub_0801D970(int param_1,undefined4 *param_2)

{
  param_2[1] = (*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x138)) * 0x10 + 0x24;
  *param_2 = 0x12;
  return 1;
}


/* sub_0801D988 @ 0x0801D988 */

void sub_0801D988(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  undefined1 auStack_168 [256];
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_34;
  int iStack_20;
  int *local_1c;
  int local_18;
  
  local_18 = param_1;
  sub_0803F540(&uStack_54,0xf0,0xa0);
  sub_08006718(local_18,&uStack_54,0x24,0);
  iVar1 = local_18;
  local_1c = (int *)(local_18 + 0x150);
  if (*local_1c == 0) {
    puStack_48 = &gUnknown_0807012C;
    uStack_54 = 1;
    uStack_50 = 0x78;
    iStack_4c = 0x58;
    uStack_52 = 1;
    uStack_34 = 0x803f5a5;
    uStack_51 = 2;
    sub_0803DADA(&uStack_54,&gUnknown_08057F82);
  }
  else {
    *(uint *)(*(int *)(local_18 + 0x144) + 8) = (uint)(0 < *(int *)(local_18 + 0x13c));
    *(uint *)(*(int *)(local_18 + 0x148) + 8) = (uint)(*(int *)(local_18 + 0x13c) < *local_1c + -1);
    sub_080051B0(&uStack_54,0xa5,0x2d,0x4b);
    sub_08005154(&uStack_54,0x10,0x5e,0xe0);
    puStack_58 = &DAT_03001560 + (uint)DAT_03001068 * 0x68;
    sub_08013C66();
    puStack_48 = &gUnknown_0807012C;
    uStack_54 = 0;
    uStack_52 = 1;
    uStack_34 = 0x803f5a5;
    iStack_4c = 0x28;
    uStack_50 = 0xaf;
    if (*(int *)(iVar1 + 0x128) == *(int *)(iVar1 + 0x118)) {
      iVar2 = 0x37;
    }
    else if (*(int *)(iVar1 + 0x118) < *(int *)(iVar1 + 0x128)) {
      iVar2 = 0x38;
    }
    else {
      iVar2 = 0x39;
    }
    sub_0803DC96(&uStack_54,*(undefined4 *)(&gUIStringPtrs + iVar2 * 4));
    iStack_4c = 0x34;
    uStack_50 = 0xaf;
    if (*(int *)(iVar1 + 300) == *(int *)(iVar1 + 0x11c)) {
      iVar2 = 0x3a;
    }
    else if (*(int *)(iVar1 + 0x11c) < *(int *)(iVar1 + 300)) {
      iVar2 = 0x3b;
    }
    else {
      iVar2 = 0x3c;
    }
    sub_0803DC96(&uStack_54,*(undefined4 *)(&gUIStringPtrs + iVar2 * 4));
    iStack_4c = 0x40;
    uStack_50 = 0xaf;
    if (*(int *)(iVar1 + 0x130) == *(int *)(iVar1 + 0x120)) {
      iVar2 = 0x3d;
    }
    else if (*(int *)(iVar1 + 0x120) < *(int *)(iVar1 + 0x130)) {
      iVar2 = 0x3e;
    }
    else {
      iVar2 = 0x3f;
    }
    sub_0803DC96(&uStack_54,*(undefined4 *)(&gUIStringPtrs + iVar2 * 4));
    uStack_50 = 0xaf;
    iStack_4c = 0x4c;
    if (*(int *)(iVar1 + 0x134) == *(int *)(iVar1 + 0x124)) {
      iVar2 = 0x40;
    }
    else if (*(int *)(iVar1 + 0x124) < *(int *)(iVar1 + 0x134)) {
      iVar2 = 0x41;
    }
    else {
      iVar2 = 0x42;
    }
    sub_0803DC96(&uStack_54,*(undefined4 *)(&gUIStringPtrs + iVar2 * 4));
    uVar3 = local_1c[*(int *)(iVar1 + 0x13c) * 2 + 1];
    uStack_50 = 0xaf;
    iStack_4c = 0x58;
    iVar2 = sub_080135D2(puStack_58);
    if (iVar2 < (int)(uint)(byte)(&DAT_086f8301)[(uVar3 & 0xfffffff) * 0x2c]) {
      iVar2 = 0x44;
    }
    else {
      iVar2 = 0x43;
    }
    sub_0803DC96(&uStack_54,*(undefined4 *)(&gUIStringPtrs + iVar2 * 4));
    iVar2 = *(int *)(iVar1 + 0x13c);
    if (*(int *)(iVar1 + 0x138) < iVar2 + -3) {
      *(int *)(iVar1 + 0x138) = iVar2 + -3;
    }
    if (iVar2 < *(int *)(iVar1 + 0x138)) {
      *(int *)(iVar1 + 0x138) = iVar2;
    }
    iVar2 = 0;
    do {
      iVar4 = *(int *)(iVar1 + 0x138) + iVar2;
      if (*local_1c <= iVar4) break;
      puVar7 = (uint *)(local_1c + iVar4 * 2 + 1);
      iVar6 = (*puVar7 & 0xfffffff) * 0x2c;
      if (*(int *)(iVar1 + 0x13c) == iVar4) {
        uStack_51 = 2;
        uStack_50 = 0x13;
        iStack_4c = 0x6a;
        uStack_53 = 0xc;
        sub_0803DD66(&uStack_54,0xcc,
                     *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_086f82ee + iVar6) * 4))
        ;
        iVar4 = sub_080135D2(puStack_58);
        if (iVar4 < (int)(uint)(byte)(&DAT_086f8301)[iVar6]) {
          uStack_51 = 0x75;
        }
        else {
          uStack_51 = 6;
        }
      }
      else {
        iVar4 = sub_080135D2(puStack_58);
        if (iVar4 < (int)(uint)(byte)(&DAT_086f8301)[iVar6]) {
          uStack_51 = 0x75;
        }
        else {
          uStack_51 = 2;
        }
      }
      iStack_20 = iVar2 * 0x10;
      iStack_64 = iStack_20 + 0x1c;
      uStack_60 = 0x20;
      iStack_5c = iStack_20 + 0x2c;
      uStack_68 = 0x10;
      Wfz_LoadContainer(*(undefined4 *)(&DAT_086f82fc + iVar6),auStack_168);
      sub_0803F922(&uStack_54,auStack_168,&uStack_68);
      iStack_4c = iStack_20 + 0x28;
      uStack_50 = 0x22;
      if (*puVar7 >> 0x1c == 0) {
        sub_0803DCC4(&uStack_54,0x7a,
                     *(undefined4 *)
                      (&gUIStringPtrs + (uint)*(ushort *)(&gEquipmentTable + iVar6) * 4));
      }
      else {
        uVar5 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&gEquipmentTable + iVar6) * 4);
        iVar4 = sub_0803FFE8(puStack_48,&gUnknown_08057F3A);
        sub_0803DCC4(&uStack_54,0x7a - iVar4,uVar5);
        uStack_51 = *(undefined1 *)
                     ((int)L"\"Unable to find sprite index in character state data\"" +
                     (*puVar7 >> 0x1c) + 0x6b);
        sub_0803DADA(&uStack_54,&gUnknown_08057F3A);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  sub_080066EC(local_18,&uStack_54);
  sub_08049150((int)&uStack_54,0x6000040);
  sub_0803F58C(&uStack_54,0);
  return;
}


/* sub_0801DC80 @ 0x0801DC80 */

void sub_0801DC80(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x150);
  iVar1 = 0;
  *piVar3 = 0;
  if (0 < DAT_0300114c) {
    do {
      if ((uint)(byte)(&DAT_086f8300)[((&DAT_03001150)[iVar1] & 0xfffffff) * 0x2c] ==
          *(uint *)(param_1 + 0x114)) {
        iVar2 = *piVar3;
        *piVar3 = iVar2 + 1;
        piVar3[iVar2 * 2 + 1] = (&DAT_03001150)[iVar1];
        piVar3[iVar2 * 2 + 2] = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0300114c);
  }
  return;
}


/* sub_0801DCD4 @ 0x0801DCD4 */

undefined4 sub_0801DCD4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  
  switch(param_3) {
  case 0:
    piVar6 = (int *)(param_1 + 0x150);
    if (*piVar6 != 0) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
      puVar5 = (uint *)(piVar6 + *(int *)(param_1 + 0x13c) * 2 + 1);
      sub_0801D0A8(0,piVar6[*(int *)(param_1 + 0x13c) * 2 + 2],*puVar5 & 0xfffffff);
      iVar1 = sub_0803D8A0();
      if (iVar1 == 1) {
        uVar4 = *(undefined4 *)(param_1 + 0x114);
        puVar2 = (undefined4 *)sub_0803D5B8(0x118);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &_0804920C;
          puVar2[1] = 0;
          puVar2[0x43] = 0;
          puVar2[0x42] = 0;
          puVar2[0x44] = 0;
          *puVar2 = &_08049588;
          puVar2[0x45] = uVar4;
        }
        sub_0803D850();
        return 1;
      }
      if (iVar1 == 2) {
        iVar3 = *piVar6;
        iVar1 = *(int *)(param_1 + 0x13c);
        *piVar6 = iVar3 + -1;
        iVar3 = (iVar3 + -1) - iVar1;
        if (iVar3 != 0) {
          sub_08049138((int)(piVar6 + iVar1 * 2 + 1),(int)(piVar6 + iVar1 * 2 + 3),iVar3 * 8);
        }
        sub_0801DC80(param_1);
        if (*piVar6 <= *(int *)(param_1 + 0x13c)) {
          *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -1;
        }
        if (*piVar6 == 0) {
          sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x144));
          sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x148));
          sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x14c));
          *(undefined4 *)(*(int *)(param_1 + 0x140) + 8) = 0;
        }
        else {
          sub_0801D5F8(param_1);
        }
      }
      else if (iVar1 == 3) {
        if ((*puVar5 >> 0x1c) - 1 == (uint)DAT_03001068) {
          uVar4 = *(undefined4 *)(param_1 + 0x114);
          puVar2 = (undefined4 *)sub_0803D5B8(0x118);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = &_0804920C;
            puVar2[1] = 0;
            puVar2[0x43] = 0;
            puVar2[0x42] = 0;
            puVar2[0x44] = 0;
            *puVar2 = &_08049588;
            puVar2[0x45] = uVar4;
          }
          sub_0803D850();
        }
        else {
          *puVar5 = *puVar5 & 0xfffffff;
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
      }
      else if (iVar1 == 4) {
        puVar2 = (undefined4 *)sub_0803D5B8(0x114);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &_0804920C;
          puVar2[1] = 0;
          puVar2[0x43] = 0;
          puVar2[0x42] = 0;
          puVar2[0x44] = 0;
          *puVar2 = &_0804A8C8;
        }
        sub_0803D8A0();
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
    }
    break;
  case 1:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    uVar4 = *(undefined4 *)(param_1 + 0x114);
    puVar2 = (undefined4 *)sub_0803D5B8(0x118);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804920C;
      puVar2[1] = 0;
      puVar2[0x43] = 0;
      puVar2[0x42] = 0;
      puVar2[0x44] = 0;
      *puVar2 = &_08049588;
      puVar2[0x45] = uVar4;
    }
    sub_0803D850();
    return 1;
  case 2:
    if (*(int *)(param_1 + 0x13c) != 0) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -1;
      sub_0801D5F8(param_1);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x13c) < *(int *)(param_1 + 0x150) + -1) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
      sub_0801D5F8(param_1);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    break;
  case 6:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    sub_08016524(0);
    sub_0803D850();
    return 1;
  case 7:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    puVar2 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804920C;
      puVar2[1] = 0;
      puVar2[0x43] = 0;
      puVar2[0x42] = 0;
      puVar2[0x44] = 0;
      puVar2[0x45] = &_0804BF28;
      *puVar2 = &_080498F0;
      puVar2[0x45] = &UNK_08049928;
      *(undefined1 *)(puVar2 + 0x46) = (undefined1)DAT_03001914;
      *(undefined1 *)((int)puVar2 + 0x119) = DAT_03001914._1_1_;
      *(undefined1 *)((int)puVar2 + 0x11a) = DAT_03001914._2_1_;
      *(undefined1 *)((int)puVar2 + 0x11b) = DAT_03001914._3_1_;
    }
    sub_0803D850();
    return 1;
  }
  return 0;
}


/* sub_0801DFAC @ 0x0801DFAC */

undefined4 sub_0801DFAC(void)

{
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    return 1;
  }
  return 0;
}


/* sub_0801DFE0 @ 0x0801DFE0 */

undefined4 * sub_0801DFE0(undefined4 *param_1,undefined4 param_2)

{
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x400,param_2);
    *param_1 = &_0804B480;
    param_1[0x10] = 0;
    param_1[0x11] = 1;
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_0800FE34(&iStack_24,param_1[7]);
    iStack_10 = iStack_20 + iStack_18 >> 1;
    iStack_14 = iStack_24 + iStack_1c >> 1;
    param_1[6] = &gUnknown_087202E8;
    param_1[8] = iStack_14 << 8;
    param_1[9] = iStack_10 << 8;
    sub_08019B4E(param_1);
    param_1[1] = (*(int *)(param_1[7] + 0x1a4) >> 8) + (uint)(*(byte *)(param_1[7] + 0x19d) >> 1) +
                 1;
  }
  return param_1;
}


/* sub_0801E080 @ 0x0801E080 */

void sub_0801E080(int param_1)

{
  int iVar1;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x44) == 0) {
    if (iVar1 < 0x18) {
      if (0 < iVar1) {
        *(int *)(param_1 + 0x40) = iVar1 + -1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0x17;
    }
  }
  else {
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (0x37 < iVar1 + 1) {
      *(undefined4 *)(param_1 + 0x40) = 0x18;
    }
  }
  sub_0800FE34(&iStack_20,*(undefined4 *)(param_1 + 0x1c));
  iStack_c = iStack_1c + iStack_14 >> 1;
  iStack_10 = iStack_20 + iStack_18 >> 1;
  *(int *)(param_1 + 0x20) = iStack_10 << 8;
  *(int *)(param_1 + 0x24) = iStack_c << 8;
  *(undefined **)(param_1 + 0x18) = &gUnknown_087202E8 + (*(int *)(param_1 + 0x40) >> 3) * 0xc;
  sub_08019B4E(param_1);
  *(uint *)(param_1 + 4) =
       (*(int *)(*(int *)(param_1 + 0x1c) + 0x1a4) >> 8) +
       (uint)(*(byte *)(*(int *)(param_1 + 0x1c) + 0x19d) >> 1) + 1;
  return;
}


/* sub_0801E122 @ 0x0801E122 */

undefined4 sub_0801E122(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x40) << 0x1f < 0) {
    uVar1 = 0;
  }
  else if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08019BF4();
  }
  return uVar1;
}


/* sub_0801E14C @ 0x0801E14C */

void sub_0801E14C(int param_1)

{
  undefined4 local_70 [17];
  undefined4 local_2c;
  
  local_70[0] = 0;
  local_2c = 0;
  ScriptVM_Run(local_70,*(undefined4 *)(param_1 + 0x30),0);
  return;
}


/* sub_0801E164 @ 0x0801E164 */

void sub_0801E164(byte *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_7c [17];
  undefined4 local_38;
  
  piVar3 = (int *)0x0;
  if ((int)((uint)*param_1 << 0x1e) < 0) {
    local_7c[0] = 0;
    local_38 = 0;
    ScriptVM_Run(local_7c,*(undefined4 *)(param_1 + 0x30),0);
  }
  else {
    puVar1 = (undefined4 *)sub_0803D5B8(0x14);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804C83C;
      puVar1[1] = 0;
      puVar1[3] = param_2;
      puVar1[2] = 0;
    }
    if (param_3 != (int *)0x0) {
      piVar3 = param_3 + 99;
    }
    sub_0801936A(&DAT_03002bac,puVar1,piVar3);
    iVar2 = __call_via_r1(param_3,*(int *)(*param_3 + 0x88) + *param_3);
    if (iVar2 != 0) {
      if ((byte)(&DAT_0300106a)[param_2] + 1 < 0x100) {
        (&DAT_0300106a)[param_2] = (char)((byte)(&DAT_0300106a)[param_2] + 1);
      }
      else {
        (&DAT_0300106a)[param_2] = 0xff;
      }
    }
  }
  return;
}


/* sub_0801E1E8 @ 0x0801E1E8 */

void sub_0801E1E8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&DAT_083bd328 + *(int *)(param_1 + 0x114) * 0x34);
  local_1c = (undefined4 *)0x0;
  local_20 = 1;
  local_24 = 0;
  iVar3 = sub_08013E64(0,param_1,0,0xc,0x4c);
  *(uint *)(iVar3 + 8) = (uint)(iVar2 != 0);
  sub_0800664E(param_1,iVar3);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  uVar4 = sub_08014124(0,param_1,0x1c,0x58,&gUnknown_08058008);
  sub_0800664E(param_1,uVar4);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,&gUnknown_08058008);
  local_1c = (undefined4 *)0x0;
  local_24 = 1;
  local_20 = 1;
  uVar4 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x4c);
  sub_0800664E(param_1,uVar4);
  local_1c = &gUnknown_0807012C;
  local_20 = 0;
  local_24 = 5;
  uVar4 = sub_08014124(0,param_1,iVar2 + 0x2e,0x58,L"Cancel");
  sub_0800664E(param_1,uVar4);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x5480);
  local_24 = 2;
  local_20 = 5;
  local_1c = (undefined4 *)0x1c;
  uStack_18 = 0x12;
  sub_0803DA10(&local_24,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f83;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  return;
}


/* sub_0801E2F0 @ 0x0801E2F0 */

void sub_0801E2F0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_0801E310 @ 0x0801E310 */

void sub_0801E310(void)

{
  sub_080067A0();
  return;
}


/* sub_0801E318 @ 0x0801E318 */

void sub_0801E318(int param_1)

{
  int iVar1;
  undefined4 local_458;
  undefined4 local_454;
  int local_450;
  int local_44c;
  undefined1 auStack_448 [1024];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 local_28;
  
  sub_0803F540(&local_48,0xd0,0x68);
  sub_08005096(&local_48);
  iVar1 = *(int *)(param_1 + 0x114) * 0x34;
  Wfz_LoadContainer(*(undefined4 *)(&DAT_083bd310 + iVar1),auStack_448);
  local_458 = 0x10;
  local_454 = 6;
  local_450 = *(int *)(&DAT_083bd304 + iVar1) + 0x10;
  local_44c = *(int *)(&DAT_083bd308 + iVar1) + 6;
  sub_0803F922(&local_48,auStack_448,&local_458);
  local_46 = 1;
  local_28 = 0x803f5a5;
  local_48 = 0;
  local_47 = 0xc;
  local_3c = &gUnknown_0807012C;
  local_45 = 5;
  local_40 = *(int *)(&DAT_083bd308 + iVar1) / 2 + 0xc;
  local_44 = *(int *)(&DAT_083bd304 + iVar1) + 0x12;
  sub_0803DADA(&local_48,
               *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_083bd2fc + iVar1) * 4));
  local_45 = 0x75;
  local_40 = *(int *)(&DAT_083bd308 + iVar1) + 0x12;
  local_44 = 0x12;
  sub_0803DD66(&local_48,0xb0,
               *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_083bd300 + iVar1) * 4));
  sub_080066EC(param_1,&local_48);
  sub_08049150((int)&local_48,0x6009640);
  sub_0803F58C(&local_48,0);
  return;
}


/* sub_0801E3EA @ 0x0801E3EA */

undefined4 sub_0801E3EA(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319494,0x40,0);
    sub_0801E14C(&gUnknown_083BD2F8 + *(int *)(param_1 + 0x114) * 0x34);
    sub_0803D876(1);
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(2);
    return 1;
  }
  return 0;
}


/* sub_0801E43C @ 0x0801E43C */

undefined4 sub_0801E43C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((DAT_03003304 & 0xc0) != 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) ^ 1;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_0801E4A0 @ 0x0801E4A0 */

void sub_0801E4A0(undefined4 param_1)

{
  undefined1 auStack_40 [36];
  undefined4 local_1c;
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  Wfz_LoadContainer(&gUnknown_083BE3D4,local_1c);
  sub_0803F9D4(auStack_40,&gUnknown_0872080C,&gUnknown_08056A2C);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_0801E4E0 @ 0x0801E4E0 */

void sub_0801E4E0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = sub_08050878(0,param_1,0,1,1,0xffffffff,0xffffffff,3,0x78,0x78,0,1);
  sub_0800664E(param_1,uVar1);
  puVar2 = (undefined4 *)sub_0803D5B8(0x34);
  if (puVar2 != (undefined4 *)0x0) {
    sub_080060A8(puVar2,param_1,1,0,0,0xffffffff,0xffffffff,4,0x78,0x86,1,1);
    *puVar2 = &_0804E358;
    puVar2[0xc] = 1;
  }
  *(undefined4 **)(param_1 + 0x114) = puVar2;
  sub_0800664E(param_1,puVar2);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}


/* sub_0801E578 @ 0x0801E578 */

undefined4 sub_0801E578(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    sub_080400D8();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
    if (puVar1 != (undefined4 *)0x0) {
      sub_08005460(puVar1,9,10,1);
      *puVar1 = &_0804947C;
      puVar1[0xbe] = 0;
    }
    sub_0803D850(puVar1);
    uVar2 = 1;
  }
  else if (param_3 == 1) {
    sub_08040096();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    uVar2 = 1;
  }
  else if (param_3 == 2) {
    sub_080400AC();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    uVar2 = 1;
  }
  else if (param_3 == 3) {
    sub_080400C2();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0801E68A @ 0x0801E68A */

undefined4 sub_0801E68A(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  
  if ((int)((uint)DAT_03003304 << 0x1e) < 0) {
    sub_080400D8();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,in_r3);
    puVar1 = (undefined4 *)sub_0803D5B8(0x11c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_080494D8;
    }
    sub_0803D850();
  }
  return 0;
}


/* sub_0801E6DA @ 0x0801E6DA */

void sub_0801E6DA(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x114) + 0x30) == 0) && (*(int *)(param_1 + 0x10c) == 1)) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  sub_080067D6();
  return;
}


/* sub_0801E6FC @ 0x0801E6FC */

void sub_0801E6FC(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_2 = 1;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f70d;
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    uVar1 = 6;
  }
  else {
    uVar1 = 2;
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar1 = 0x75;
    }
  }
  param_2[3] = uVar1;
  *(undefined **)(param_2 + 0xc) = &gUnknown_0806E050;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 8) = uVar2;
  sub_0803DADA(param_2,*(undefined4 *)(param_1 + 0x1c));
  return;
}


/* sub_0801E774 @ 0x0801E774 */

void sub_0801E774(undefined4 param_1)

{
  undefined1 auStack_40 [36];
  undefined4 local_1c;
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  Wfz_LoadContainer(&gUnknown_083BE3D4,local_1c);
  sub_0803F9D4(auStack_40,&gUnknown_0872081C,&gUnknown_08056A2C);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_0801E7B4 @ 0x0801E7B4 */

void sub_0801E7B4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_08050878(0,param_1,0,1,1,0xffffffff,0xffffffff,0x5f,0x78,0x78,0,1);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08050878(0,param_1,1,0,0,0xffffffff,0xffffffff,0x4f,0x78,0x86,1,1);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  sub_080401C2();
  sub_080502FC(0,0);
  sub_08040160();
  return;
}


/* sub_0801E84A @ 0x0801E84A */

undefined4 sub_0801E84A(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *(undefined1 *)(puVar1 + 0x45) = 0;
      *puVar1 = &_0804AEBC;
      puVar1[0x46] = 0;
      *(undefined1 *)(puVar1 + 0x47) = 2;
    }
    iVar2 = sub_0803D8A0();
    if (iVar2 == 2) {
      sub_0804019A(&DAT_03002bd4);
      puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
      if (puVar1 != (undefined4 *)0x0) {
        sub_08005460(puVar1,0x5e,0xd,1);
        *puVar1 = &_08049B2C;
        puVar1[0xbe] = 1;
      }
      sub_0803D850(puVar1);
      return 1;
    }
    sub_080502FC(0,0);
    sub_08040160();
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *(undefined1 *)(puVar1 + 0x45) = 0;
      *puVar1 = &_0804AEBC;
      puVar1[0x46] = 0;
      *(undefined1 *)(puVar1 + 0x47) = 1;
    }
    iVar2 = sub_0803D8A0();
    if (iVar2 == 2) {
      sub_0804019A(&DAT_03002bd4);
      puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
      if (puVar1 != (undefined4 *)0x0) {
        sub_08005460(puVar1,0x5e,0xd,1);
        *puVar1 = &_08049B2C;
        puVar1[0xbe] = 0;
      }
      sub_0803D850(puVar1);
      return 1;
    }
    sub_080502FC(0,0);
    sub_08040160();
  }
  return 0;
}


/* sub_0801E970 @ 0x0801E970 */

undefined4 sub_0801E970(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  
  if ((int)((uint)DAT_03003304 << 0x1e) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,in_r3);
    sub_080401C2();
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_08049B00;
    }
    sub_0803D850();
  }
  return 0;
}


/* sub_0801E9C0 @ 0x0801E9C0 */

void sub_0801E9C0(void)

{
  sub_080401C2();
  sub_080400D8();
  sub_08009680(&DAT_030019a4);
  sub_08012588(&gUnknown_0877C5FC,0);
  return;
}


/* sub_0801EA0C @ 0x0801EA0C */

void sub_0801EA0C(int param_1)

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
  uVar1 = sub_08015C62(0,param_1,0,0xffffffff,0xffffffff,0xffffffff,1,0x55,0x40,0x78,1,0);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,1,0xffffffff,0xffffffff,0,0xffffffff,0x56,0x82,0x78,0,1);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  sub_080505B0(0);
  sub_08040160();
  return;
}


/* sub_0801EB40 @ 0x0801EB40 */

void sub_0801EB40(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  sub_080051B0(param_2,0x75,0x1e,0x6e,param_4);
  param_2[3] = 2;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  *param_2 = 0;
  param_2[1] = 0xe;
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  *(undefined4 *)(param_2 + 4) = 0x16;
  *(undefined4 *)(param_2 + 8) = 0x28;
  sub_0803DADA(param_2,&gUnknown_08058034);
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x114) + 0xba0) <= iVar1) break;
    *(int *)(param_2 + 8) = iVar1 * 0xe + 0x36;
    *(undefined4 *)(param_2 + 4) = 0x16;
    sub_0801F810(iVar1 * 8 + *(int *)(param_1 + 0x114) + 0xba4,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  *(undefined4 *)(param_2 + 8) = 0x28;
  *(undefined4 *)(param_2 + 4) = 0x8c;
  sub_0803DADA(param_2,&gUnknown_08058054);
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x114) + 0xbcc) <= iVar1) {
      return;
    }
    *(int *)(param_2 + 8) = iVar1 * 0xe + 0x36;
    *(undefined4 *)(param_2 + 4) = 0x8c;
    sub_0801F810(iVar1 * 8 + *(int *)(param_1 + 0x114) + 0xbd0,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}


/* sub_0801EBFE @ 0x0801EBFE */

void sub_0801EBFE(undefined4 param_1)

{
  undefined1 auStack_40 [52];
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  sub_08006718(param_1,auStack_40,0x4f,1);
  sub_0801EB40(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_0801EC38 @ 0x0801EC38 */

/* WARNING: Removing unreachable block (ram,0x0801ec76) */

undefined4 sub_0801EC38(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40);
    uVar3 = 1;
    if (*(int *)(param_1 + 0x10c) != 0) {
      uVar3 = 2;
    }
    puVar1 = (undefined4 *)sub_0803D5B8();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *(undefined1 *)(puVar1 + 0x45) = 0;
      *puVar1 = &_0804C0F0;
      *(undefined1 *)(puVar1 + 0x46) = uVar3;
    }
    iVar2 = sub_0803D8A0();
    if (1 < iVar2) {
      sub_0803D876();
      return 1;
    }
    sub_080505B0(0);
    sub_08040160();
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40);
    sub_0803D876(1);
    return 1;
  }
  return 0;
}


/* sub_0801ECE0 @ 0x0801ECE0 */

undefined4 sub_0801ECE0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __call_via_r1(_03000FF0,*(int *)(*_03000FF0 + 0x14) + *_03000FF0);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = sub_080067F4(param_1);
  return uVar2;
}


/* sub_0801ED02 @ 0x0801ED02 */

undefined4 sub_0801ED02(void)

{
  return 0;
}


/* sub_0801ED06 @ 0x0801ED06 */

void sub_0801ED06(int param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_3) {
  case 3:
    *(undefined4 *)(param_1 + 300) = 1;
    break;
  case 7:
    *(undefined4 *)(param_1 + 300) = 1;
    return;
  }
  return;
}


/* sub_0801ED34 @ 0x0801ED34 */

void sub_0801ED34(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  wchar16 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  wchar16 *local_18;
  
  local_18 = L"Cancel";
  local_1c = (undefined4 *)0x0;
  local_28 = (wchar16 *)0x36;
  local_20 = 1;
  local_24 = 0;
  uVar2 = sub_08013E64(0,param_1,0,0xc);
  sub_0800664E(param_1,uVar2);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  local_28 = L"Select";
  uVar2 = sub_08014124(0,param_1,0x1c,0x42);
  sub_0800664E(param_1,uVar2);
  iVar3 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  local_1c = (undefined4 *)0x0;
  local_28 = (wchar16 *)0x36;
  local_24 = 1;
  local_20 = 1;
  uVar2 = sub_08013E64(0,param_1,1,iVar3 + 0x1e);
  sub_0800664E(param_1,uVar2);
  local_1c = &gUnknown_0807012C;
  local_20 = 0;
  local_28 = local_18;
  local_24 = 5;
  uVar2 = sub_08014124(0,param_1,iVar3 + 0x2e,0x42);
  sub_0800664E(param_1,uVar2);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  local_28 = L"How many to trade?";
  uVar2 = sub_08014124(0,param_1,0x10,0x1c);
  sub_0800664E(param_1,uVar2);
  local_1c = (undefined4 *)0x0;
  local_20 = 1;
  local_28 = (wchar16 *)0x24;
  local_24 = 4;
  uVar2 = sub_08013E64(0,param_1,4,0x24);
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  sub_0800664E(param_1,uVar2);
  local_1c = (undefined4 *)0x0;
  local_20 = 1;
  local_28 = (wchar16 *)0x24;
  local_24 = 5;
  uVar2 = sub_08013E64(0,param_1,5,0x56);
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  sub_0800664E(param_1,uVar2);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x2a80);
  local_28 = (wchar16 *)0x7;
  local_24 = 6;
  local_20 = 0x18;
  local_1c = (undefined4 *)0x10;
  sub_0803DA10(&local_28,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f83;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 1;
  return;
}


/* sub_0801EEAA @ 0x0801EEAA */

void sub_0801EEAA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_0801EECA @ 0x0801EECA */

void sub_0801EECA(int param_1)

{
  uint uVar1;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  sub_0803F540(auStack_48,0x88,0x50);
  sub_08005096(auStack_48);
  *(uint *)(*(int *)(param_1 + 0x130) + 8) = (uint)(0 < *(int *)(param_1 + 0x11c));
  uVar1 = 50000;
  if (*(uint *)(param_1 + 0x114) < 50000) {
    uVar1 = *(uint *)(param_1 + 0x114);
  }
  *(uint *)(*(int *)(param_1 + 0x134) + 8) = (uint)(*(uint *)(param_1 + 0x11c) < uVar1);
  sub_080066EC(param_1,auStack_48);
  auStack_48[0] = 0;
  uStack_44 = 0x10;
  uStack_40 = 0x10;
  sub_0801F810(param_1 + 0x114,auStack_48);
  auStack_48[0] = 1;
  uStack_44 = 0x44;
  uStack_40 = 0x2f;
  sub_0803DC96(auStack_48,sub_0801F07C,*(undefined4 *)(param_1 + 0x11c));
  sub_08049150((int)auStack_48,0x6009640);
  sub_0803F58C(auStack_48,0);
  return;
}


/* sub_0801EF5C @ 0x0801EF5C */

undefined4 sub_0801EF5C(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = -1;
    if (0 < *(int *)(param_1 + 0x11c)) {
      iVar2 = *(int *)(param_1 + 0x11c);
    }
    sub_0803D876(iVar2);
    uVar1 = 1;
  }
  else if (param_3 == 1) {
    sub_0803D876(0xffffffff);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801EF8E @ 0x0801EF8E */

void sub_0801EF8E(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((int)((uint)DAT_03003302 << 0x1a) < 0) || ((int)((uint)DAT_03003302 << 0x1b) < 0)) {
    if (*(int *)(param_1 + 300) == 0) {
      iVar1 = *(int *)(param_1 + 0x120) + 1;
      *(int *)(param_1 + 0x120) = iVar1;
      if (0x32 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x124);
        if ((iVar1 == 1) && (iVar2 = sub_08053034(*(undefined4 *)(param_1 + 0x11c)), iVar2 == 0)) {
          *(undefined4 *)(param_1 + 0x124) = 10;
          *(undefined4 *)(param_1 + 0x120) = 0;
        }
        else if ((iVar1 == 10) &&
                (iVar1 = sub_08053058(*(undefined4 *)(param_1 + 0x11c)), iVar1 == 0)) {
          *(undefined4 *)(param_1 + 0x124) = 100;
          *(undefined4 *)(param_1 + 0x120) = 0;
        }
      }
      if ((int)((uint)DAT_03003302 << 0x1a) < 0) {
        if (*(int *)(param_1 + 0x124) < *(int *)(param_1 + 0x11c)) {
          *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x124);
        }
        else {
          *(undefined4 *)(param_1 + 0x11c) = 0;
        }
      }
      if ((int)((uint)DAT_03003302 << 0x1b) < 0) {
        uVar4 = *(int *)(param_1 + 0x11c) + *(int *)(param_1 + 0x124);
        uVar3 = 50000;
        if (*(uint *)(param_1 + 0x114) < 50000) {
          uVar3 = *(uint *)(param_1 + 0x114);
        }
        if (uVar4 < uVar3) {
          *(uint *)(param_1 + 0x11c) = uVar4;
        }
        else {
          *(uint *)(param_1 + 0x11c) = uVar3;
        }
      }
      if (*(int *)(param_1 + 0x128) != 0) {
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
      }
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x128);
      *(undefined4 *)(param_1 + 0x110) = 0;
      sub_080067F4(param_1);
      return;
    }
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 10;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x124) = 1;
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  sub_080067F4(param_1);
  return;
}


/* sub_0801F07C @ 0x0801F07C */

void sub_0801F07C(void)

{
  undefined4 *puVar1;
  int unaff_r4;
  undefined4 uVar2;
  
  sub_08024120();
  uVar2 = *(undefined4 *)(unaff_r4 + 0x118);
  puVar1 = (undefined4 *)sub_0803D5B8(0x134);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080492EC;
    *(undefined1 *)(puVar1 + 0x45) = 4;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x46] = 0;
    sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar1 + 0x41),0,0x10);
    puVar1[0x49] = 0xffff;
    DAT_03002f50 = 0;
    *puVar1 = &_0804C5E8;
    puVar1[0x4b] = 0;
    DAT_03002f54 = 0;
    puVar1[0x4c] = uVar2;
  }
  sub_08040160(puVar1);
  return;
}


/* sub_0801F084 @ 0x0801F084 */

void sub_0801F084(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  sub_08024120();
  uVar2 = *(undefined4 *)(param_1 + 0x118);
  puVar1 = (undefined4 *)sub_0803D5B8(0x134);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080492EC;
    *(undefined1 *)(puVar1 + 0x45) = 4;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x46] = 0;
    sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar1 + 0x41),0,0x10);
    puVar1[0x49] = 0xffff;
    DAT_03002f50 = 0;
    *puVar1 = &_0804C5E8;
    puVar1[0x4b] = 0;
    DAT_03002f54 = 0;
    puVar1[0x4c] = uVar2;
  }
  sub_08040160(puVar1);
  return;
}


/* sub_0801F0F6 @ 0x0801F0F6 */

void sub_0801F0F6(void)

{
  sub_0802426E();
  return;
}


/* sub_0801F0FE @ 0x0801F0FE */

undefined4 sub_0801F0FE(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __call_via_r1(_03000FF0,*(int *)(*_03000FF0 + 0x14) + *_03000FF0);
  if (iVar1 != 0) {
    return 2;
  }
  uVar2 = sub_080067F4(param_1);
  return uVar2;
}


/* sub_0801F120 @ 0x0801F120 */

void sub_0801F120(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = (byte)*(undefined4 *)(*(int *)(param_1 + 0x130) + 0xba0);
  iVar1 = 2;
  param_2[1] = (byte)DAT_03002f54;
  iVar2 = 0;
  if (*param_2 != 0) {
    do {
      iVar3 = iVar2 * 8;
      param_2[iVar1] = (byte)*(undefined4 *)(iVar3 + *(int *)(param_1 + 0x130) + 0xba4);
      iVar2 = iVar2 + 1;
      param_2[iVar1 + 1] =
           (byte)((uint)*(undefined4 *)(iVar3 + *(int *)(param_1 + 0x130) + 0xba4) >> 8);
      iVar4 = iVar1 + 3;
      param_2[iVar1 + 2] = *(byte *)(iVar3 + *(int *)(param_1 + 0x130) + 0xba8);
      iVar1 = iVar1 + 4;
      param_2[iVar4] = *(byte *)(iVar3 + *(int *)(param_1 + 0x130) + 0xba9);
    } while (iVar2 < (int)(uint)*param_2);
  }
  return;
}


/* sub_0801F184 @ 0x0801F184 */

void sub_0801F184(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined2 uStack_14;
  
  switch(param_3) {
  case 4:
    bVar1 = *param_2;
    iVar5 = 2;
    *(uint *)(param_1 + 300) = (uint)(param_2[1] != 0);
    if (DAT_03002f54 == 0) {
      iVar4 = 0;
      if (bVar1 != 0) {
        do {
          bVar2 = param_2[iVar5];
          iVar7 = iVar5 + 2;
          bVar3 = param_2[iVar5 + 1];
          iVar6 = iVar5 + 3;
          iVar5 = iVar5 + 4;
          uStack_14 = CONCAT11(param_2[iVar6],param_2[iVar7]);
          iVar4 = iVar4 + 1;
          piVar8 = (int *)(*(int *)(param_1 + 0x130) + 0xbcc);
          iVar6 = *piVar8;
          *piVar8 = iVar6 + 1;
          *(ushort *)(piVar8 + iVar6 * 2 + 1) = CONCAT11(bVar3,bVar2);
          *(undefined2 *)((int)piVar8 + iVar6 * 8 + 6) = 0;
          *(undefined2 *)(piVar8 + iVar6 * 2 + 2) = uStack_14;
        } while (iVar4 < (int)(uint)bVar1);
      }
      DAT_03002f54 = 1;
    }
    break;
  case 5:
  case 6:
  case 7:
    *(undefined4 *)(param_1 + 300) = 1;
  }
  return;
}


/* sub_0801F22A @ 0x0801F22A */

void sub_0801F22A(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x130) + 0xbcc);
  while (iVar1 != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x130) + 0xbcc);
    *piVar2 = *piVar2 + -1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x130) + 0xbcc);
  }
  return;
}


/* sub_0801F270 @ 0x0801F270 */

void sub_0801F270(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  sub_08024120();
  uVar1 = *(undefined1 *)(param_1 + 0x118);
  puVar2 = (undefined4 *)sub_0803D5B8(0x130);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_080492EC;
    *(undefined1 *)(puVar2 + 0x45) = 6;
    puVar2[0x47] = 0;
    puVar2[0x48] = 0;
    puVar2[0x46] = 0;
    sub_0804912C((int)(puVar2 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar2 + 0x41),0,0x10);
    puVar2[0x49] = 0xffff;
    DAT_03002f50 = 0;
    DAT_03002f54 = 0;
    *puVar2 = &_0804BC30;
    *(undefined1 *)((int)puVar2 + 0x12e) = 0;
    *(undefined1 *)((int)puVar2 + 0x12f) = 0;
    *(undefined1 *)((int)puVar2 + 0x12d) = 0;
    *(undefined1 *)(puVar2 + 0x4b) = uVar1;
  }
  sub_08040160(puVar2);
  return;
}


/* sub_0801F2DE @ 0x0801F2DE */

void sub_0801F2DE(void)

{
  sub_0802426E();
  return;
}


/* sub_0801F2E6 @ 0x0801F2E6 */

undefined4 sub_0801F2E6(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = __call_via_r1(_03000FF0,*(int *)(*_03000FF0 + 0x14) + *_03000FF0);
  if (cVar1 != '\0') {
    uVar2 = 2;
    if (cVar1 != '\x01') {
      uVar2 = 3;
    }
    return uVar2;
  }
  uVar2 = sub_080067F4(param_1);
  return uVar2;
}


/* sub_0801F310 @ 0x0801F310 */

undefined4 sub_0801F310(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 300);
  param_2[1] = *(undefined1 *)(param_1 + 0x12d);
  return 2;
}


/* sub_0801F320 @ 0x0801F320 */

void sub_0801F320(int param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  switch(param_3) {
  case 3:
  case 4:
    *(undefined1 *)(param_1 + 0x12d) = 2;
    *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_1 + 300);
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x12d) = *param_2;
    *(undefined1 *)(param_1 + 0x12e) = param_2[1];
    break;
  case 7:
    *(undefined1 *)(param_1 + 0x12d) = 1;
    *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_1 + 300);
  }
  if (((*(char *)(param_1 + 0x12d) != '\0') && (cVar1 = *(char *)(param_1 + 300), cVar1 != '\0')) &&
     (cVar1 == *(char *)(param_1 + 0x12e))) {
    if ((cVar1 == '\x01') && (*(char *)(param_1 + 0x12d) == '\x01')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined1 *)(param_1 + 0x12f) = uVar2;
  }
  return;
}


/* sub_0801F3A4 @ 0x0801F3A4 */

int sub_0801F3A4(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_3 + 4) != '\0') {
    iVar1 = 0;
    if (0 < *param_2) {
      do {
        if (((char)param_2[iVar1 * 2 + 2] == *(char *)(param_3 + 4)) &&
           (*(char *)((int)param_2 + iVar1 * 8 + 9) == *(char *)(param_3 + 5))) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *param_2);
    }
  }
  return -1;
}


/* sub_0801F3DC @ 0x0801F3DC */

undefined4 sub_0801F3DC(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_3 + 4) == '\0') {
      iVar2 = -1;
    }
    else {
      iVar2 = 0;
      if (0 < *param_2) {
        do {
          if (((char)param_2[iVar2 * 2 + 2] == *(char *)(param_3 + 4)) &&
             (*(char *)((int)param_2 + iVar2 * 8 + 9) == *(char *)(param_3 + 5))) goto _0801F418;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *param_2);
      }
      iVar2 = -1;
    }
_0801F418:
    if (iVar2 < 0) {
      iVar2 = *param_2;
      if (iVar2 == 0x14e) {
        uVar1 = 0;
      }
      else {
        *param_2 = iVar2 + 1;
        param_2[iVar2 * 2 + 2] = *(int *)(param_3 + 4);
        param_2[iVar2 * 2 + 1] = param_4;
        uVar1 = 1;
      }
    }
    else {
      param_2[iVar2 * 2 + 1] = param_2[iVar2 * 2 + 1] + param_4;
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* sub_0801F44E @ 0x0801F44E */

void sub_0801F44E(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 *local_1c;
  int *local_18;
  
  *(undefined1 *)(param_1 + 0x114) = 2;
  local_18 = &DAT_0300114c;
  iVar2 = param_1 + 300;
  iVar1 = 0;
  if (0 < DAT_0300114c) {
    do {
      local_20 = 0;
      local_1f = (undefined1)local_18[iVar1 + 1];
      sub_0801F3DC(param_1,iVar2,auStack_24,1);
      *(undefined1 *)(param_1 + 0x114) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *local_18);
  }
  iVar1 = 0;
  do {
    if (((&gUnknown_083BD2F8)[iVar1 * 0x34] & 1) == 0) {
      local_20 = 1;
      local_1f = (undefined1)iVar1;
      local_1c = &DAT_03001068 + iVar1;
      sub_0801F3DC(param_1,iVar2,auStack_24,(&DAT_0300106a)[iVar1]);
      if (local_1c[2] != '\0') {
        *(undefined1 *)(param_1 + 0x114) = 0;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x53);
  if (DAT_0300155c != 0) {
    local_20 = 2;
    local_1f = 0;
    sub_0801F3DC(param_1,iVar2,auStack_24,DAT_0300155c);
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  return;
}


/* sub_0801F4FC @ 0x0801F4FC */

void sub_0801F4FC(void)

{
  undefined1 unaff_r4;
  int unaff_r6;
  
  sub_0801F3DC();
  *(undefined1 *)(unaff_r6 + 4) = unaff_r4;
  return;
}


/* sub_0801F506 @ 0x0801F506 */

undefined4 * sub_0801F506(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0xbf8), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804920C;
  param_1[1] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  *param_1 = &_0804A60C;
  param_1[0x4b] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2f3] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  sub_0801F44E(param_1);
  return param_1;
}


/* sub_0801F556 @ 0x0801F556 */

void sub_0801F556(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0xba0);
  iVar4 = 0;
  if (0 < *piVar5) {
    do {
      cVar1 = (char)piVar5[iVar4 * 2 + 2];
      if (cVar1 == '\0') {
        sub_08004468(&DAT_03001068,*(undefined1 *)((int)piVar5 + iVar4 * 8 + 9));
      }
      else if (cVar1 == '\x01') {
        bVar2 = *(byte *)((int)piVar5 + iVar4 * 8 + 9);
        (&DAT_0300106a)[bVar2] = (&DAT_0300106a)[bVar2] - (char)piVar5[iVar4 * 2 + 1];
      }
      else if (cVar1 == '\x02') {
        DAT_0300155c = DAT_0300155c - piVar5[iVar4 * 2 + 1];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar5);
  }
  iVar4 = 0;
  piVar5 = (int *)(param_1 + 0xbcc);
  if (0 < *piVar5) {
    do {
      cVar1 = (char)piVar5[iVar4 * 2 + 2];
      if (cVar1 == '\0') {
        sub_08004448(&DAT_03001068,*(undefined1 *)((int)piVar5 + iVar4 * 8 + 9));
      }
      else if (cVar1 == '\x01') {
        bVar2 = *(byte *)((int)piVar5 + iVar4 * 8 + 9);
        iVar3 = (uint)(byte)(&DAT_0300106a)[bVar2] + piVar5[iVar4 * 2 + 1];
        if (iVar3 < 0x100) {
          (&DAT_0300106a)[bVar2] = (char)iVar3;
        }
        else {
          (&DAT_0300106a)[bVar2] = 0xff;
        }
      }
      else if (cVar1 == '\x02') {
        DAT_0300155c = DAT_0300155c + piVar5[iVar4 * 2 + 1];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar5);
  }
  return;
}


/* sub_0801F5DC @ 0x0801F5DC */

void sub_0801F5DC(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int *unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  
  do {
    iVar2 = *param_1;
    iVar3 = *unaff_r6;
    do {
      *unaff_r6 = iVar3 + iVar2;
    } while (*unaff_r6 != iVar3 + iVar2);
    do {
      while( true ) {
        while( true ) {
          unaff_r4 = unaff_r4 + 1;
          if (*unaff_r5 <= unaff_r4) {
            return;
          }
          param_1 = unaff_r5 + unaff_r4 * 2 + 1;
          cVar1 = (char)unaff_r5[unaff_r4 * 2 + 2];
          if (cVar1 != '\0') break;
          sub_08004448(*(undefined4 *)(unaff_r7 + 0xc),
                       *(undefined1 *)((int)unaff_r5 + unaff_r4 * 8 + 9));
        }
        if (cVar1 != '\x01') break;
        iVar3 = *(int *)(unaff_r7 + 0xc) + (uint)*(byte *)((int)unaff_r5 + unaff_r4 * 8 + 9);
        iVar2 = (uint)*(byte *)(iVar3 + 2) + *param_1;
        if (iVar2 < 0x100) {
          *(char *)(iVar3 + 2) = (char)iVar2;
        }
        else {
          *(undefined1 *)(iVar3 + 2) = 0xff;
        }
      }
    } while (cVar1 != '\x02');
  } while( true );
}


/* sub_0801F61E @ 0x0801F61E */

void sub_0801F61E(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  sub_0800664E(param_1,iVar1);
  uVar2 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  iVar3 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar2 = sub_08013E64(0,param_1,1,iVar3 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08014124(0,param_1,iVar3 + 0x2e,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  iVar4 = sub_0803FFE8(&gUnknown_0807012C,L"Cancel");
  iVar4 = iVar4 + iVar3 + 0x1e;
  uVar2 = sub_08013E64(0,param_1,7,iVar4 + 0x14,0x84,7,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08014124(0,param_1,iVar4 + 0x2e,0x90,L"Propose Trade",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  iVar3 = sub_08013E64(0,param_1,2,0x6e,0x28,2,1,0);
  param_1[0x46] = iVar3;
  iVar3 = sub_08013E64(0,param_1,3,0x6e,0x70,3,1,0);
  param_1[0x47] = iVar3;
  sub_0800664E(param_1,param_1[0x46]);
  sub_0800664E(param_1,param_1[0x47]);
  if ((char)param_1[0x45] == '\x02') {
    *(undefined4 *)(iVar1 + 8) = 0;
    __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
  }
  else {
    uVar2 = sub_08016208(0,param_1);
    sub_0800664E(param_1,uVar2);
  }
  sub_08050414(0);
  sub_08040160();
  return;
}


