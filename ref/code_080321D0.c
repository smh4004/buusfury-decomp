/* Ghidra reference decompilation of code_080321D0 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_080321D0 @ 0x080321D0 */

void sub_080321D0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *unaff_r7;
  int *piVar8;
  int iStack_474;
  int iStack_470;
  int iStack_46c;
  int iStack_468;
  undefined1 auStack_464 [972];
  undefined1 auStack_98 [52];
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 *local_4c [5];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_24;
  int iStack_20;
  int *local_1c;
  int local_18;
  
  local_18 = param_1;
  sub_0803F540(&uStack_58,0xf0,0xa0);
  sub_08004F1C(&uStack_58,0,0,local_30,local_2c);
  sub_08004F50(&uStack_58,&gUnknown_087591C8);
  local_4c[0] = &gUnknown_0807012C;
  uStack_58._1_1_ = 0xe;
  uStack_58._3_1_ = 2;
  uStack_58._2_1_ = 1;
  local_38 = 0x803f5a5;
  sub_08005154(&uStack_58,0x10,0x42,0xe0);
  sub_08005154(&uStack_58,0x10,0x84,0xe0);
  sub_080051B0(&uStack_58,0xa8,0x46,0x80);
  sub_080051B0(&uStack_58,0xdc,0x1b,0x31);
  iVar3 = local_18;
  piVar7 = (int *)(local_18 + 0x8c0);
  iVar5 = *piVar7 + -1;
  *(int *)(local_18 + 0x8c4) = iVar5;
  local_1c = (int *)(local_18 + 0x114);
  if (*local_1c + -3 < iVar5) {
    *(int *)(local_18 + 0x8c4) = *local_1c + -3;
  }
  if (*(int *)(local_18 + 0x8c4) < 0) {
    *(undefined4 *)(local_18 + 0x8c4) = 0;
  }
  *(uint *)(*(int *)(local_18 + 0x8f4) + 8) = (uint)(0 < *piVar7);
  iVar5 = 0;
  *(uint *)(*(int *)(local_18 + 0x8f8) + 8) = (uint)(*piVar7 < *local_1c + -1);
  do {
    piVar2 = local_1c;
    iVar6 = *(int *)(iVar3 + 0x8c4) + iVar5;
    iStack_64 = iVar6;
    if (*local_1c <= iVar6) break;
    if ((char)local_1c[iVar6 * 2 + 1] == '\0') {
      iVar4 = (uint)*(ushort *)((int)local_1c + iVar6 * 8 + 6) * 0x34;
      uStack_5c = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_083bd2fc + iVar4) * 4);
      uStack_60 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_083bd300 + iVar4) * 4);
      unaff_r7 = (int *)(&DAT_083bd314 + iVar4);
    }
    else if ((char)local_1c[iVar6 * 2 + 1] == '\x01') {
      iVar4 = (uint)*(ushort *)((int)local_1c + iVar6 * 8 + 6) * 0x2c;
      uStack_5c = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&gEquipmentTable + iVar4) * 4);
      uStack_60 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_086f82ee + iVar4) * 4);
      unaff_r7 = (int *)(&UNK_086f82f0 + iVar4);
    }
    if (*piVar7 == iVar6) {
      uStack_58._3_1_ = 6;
    }
    else {
      uStack_58._3_1_ = 2;
    }
    Wfz_LoadContainer(unaff_r7[3],auStack_464);
    iStack_474 = 0x25 - *unaff_r7 / 2;
    iStack_20 = iVar5 * 0x10;
    iStack_470 = (iVar5 * 0x10 + 0x17) - unaff_r7[1] / 2;
    piVar8 = unaff_r7 + 1;
    iStack_46c = iStack_474 + *unaff_r7;
    unaff_r7 = &uStack_58;
    iStack_468 = iStack_470 + *piVar8;
    sub_0803F922(unaff_r7,auStack_464,&iStack_474);
    iStack_50 = iStack_20 + 0x19;
    iStack_54 = 0xd4;
    uStack_58._0_1_ = 2;
    iStack_24 = iStack_50;
    sub_0803DC96(unaff_r7,L"%d Z",piVar2[iVar6 * 2 + 2]);
    iStack_54 = 0x36;
    iStack_50 = iStack_24;
    uStack_58._0_1_ = 0;
    sub_0803DCC4(unaff_r7,0x58,uStack_5c);
    sub_0803DC96(unaff_r7,L" x %d",*(undefined1 *)((int)piVar2 + iVar6 * 8 + 5));
    if (*piVar7 == iStack_64) {
      iStack_54 = 0x10;
      iStack_50 = 0x4f;
      uStack_58._3_1_ = 2;
      sub_0803DD66(unaff_r7,0x94,uStack_60);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uStack_58._2_1_ = 1;
  local_38 = 0x803f5a5;
  iStack_54 = 0xaf;
  iStack_50 = 0x4e;
  if (*(int *)(iVar3 + 0x8dc) == *(int *)(iVar3 + 0x8cc)) {
    iVar5 = 0x37;
  }
  else if (*(int *)(iVar3 + 0x8cc) < *(int *)(iVar3 + 0x8dc)) {
    iVar5 = 0x38;
  }
  else {
    iVar5 = 0x39;
  }
  sub_0803DC96(&uStack_58,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  iStack_50 = 0x5a;
  iStack_54 = 0xaf;
  if (*(int *)(iVar3 + 0x8e0) == *(int *)(iVar3 + 0x8d0)) {
    iVar5 = 0x3a;
  }
  else if (*(int *)(iVar3 + 0x8d0) < *(int *)(iVar3 + 0x8e0)) {
    iVar5 = 0x3b;
  }
  else {
    iVar5 = 0x3c;
  }
  sub_0803DC96(&uStack_58,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  iStack_50 = 0x66;
  iStack_54 = 0xaf;
  if (*(int *)(iVar3 + 0x8e4) == *(int *)(iVar3 + 0x8d4)) {
    iVar5 = 0x3d;
  }
  else if (*(int *)(iVar3 + 0x8d4) < *(int *)(iVar3 + 0x8e4)) {
    iVar5 = 0x3e;
  }
  else {
    iVar5 = 0x3f;
  }
  sub_0803DC96(&uStack_58,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  iStack_50 = 0x72;
  iStack_54 = 0xaf;
  if (*(int *)(iVar3 + 0x8e8) == *(int *)(iVar3 + 0x8d8)) {
    iVar5 = 0x40;
  }
  else if (*(int *)(iVar3 + 0x8d8) < *(int *)(iVar3 + 0x8e8)) {
    iVar5 = 0x41;
  }
  else {
    iVar5 = 0x42;
  }
  sub_0803DC96(&uStack_58,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  if ((char)local_1c[*piVar7 * 2 + 1] == '\x01') {
    uVar1 = *(ushort *)((int)local_1c + *piVar7 * 8 + 6);
    iStack_54 = 0xaf;
    iStack_50 = 0x7e;
    iVar5 = Player_GetLevel(&DAT_03001560 + (uint)DAT_03001068 * 0x68);
    if (iVar5 < (int)(uint)(byte)(&DAT_086f8301)[(uint)uVar1 * 0x2c]) {
      iVar5 = 0x44;
    }
    else {
      iVar5 = 0x43;
    }
    sub_0803DC96(&uStack_58,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  }
  uStack_58._3_1_ = 5;
  sub_0803DEFA(auStack_98,L"Sell x %d",*(undefined4 *)(iVar3 + 0x8c8));
  iStack_54 = 0x1c;
  iStack_50 = 0x91;
  sub_0803DADA(&uStack_58,auStack_98);
  iVar5 = sub_0803FFE8(local_4c[0],auStack_98);
  sub_08013F0C(*(undefined4 *)(iVar3 + 0x8ec),iVar5 + 0x1e,0x86);
  iStack_54 = iVar5 + 0x2e;
  iStack_50 = 0x91;
  sub_0803DADA(&uStack_58,L"Cancel");
  uStack_58._3_1_ = 2;
  uStack_58._0_1_ = 2;
  iStack_54 = 0xe0;
  iStack_50 = 0x91;
  sub_0803DC96(&uStack_58,L"%d ZENIE",DAT_0300155c,local_4c);
  sub_080066EC(local_18,&uStack_58);
  sub_08049150((int)&uStack_58,0x6000040);
  sub_0803F58C(&uStack_58,0);
  return;
}


/* sub_080325C0 @ 0x080325C0 */

undefined4 sub_080325C0(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(param_1 + 0x8c0);
  if (param_3 == 0) {
    piVar2 = (int *)(param_1 + 0x114);
    if (*piVar2 != 0) {
      iVar3 = *piVar4;
      DAT_0300155c = DAT_0300155c + *(int *)(param_1 + 0x8c8) * piVar2[iVar3 * 2 + 2];
      if ((char)piVar2[iVar3 * 2 + 1] == '\0') {
        uVar1 = *(ushort *)((int)piVar2 + iVar3 * 8 + 6);
        (&DAT_0300106a)[uVar1] = (&DAT_0300106a)[uVar1] - (char)*(undefined4 *)(param_1 + 0x8c8);
      }
      else if (((char)piVar2[iVar3 * 2 + 1] == '\x01') && (iVar5 = 0, 0 < *(int *)(param_1 + 0x8c8))
              ) {
        do {
          sub_08004468(&DAT_03001068,*(undefined2 *)((int)piVar2 + iVar3 * 8 + 6));
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x8c8));
      }
      *(char *)((int)piVar2 + iVar3 * 8 + 5) =
           *(char *)((int)piVar2 + iVar3 * 8 + 5) - (char)*(undefined4 *)(param_1 + 0x8c8);
      *(undefined4 *)(param_1 + 0x8c8) = 1;
      if (*(char *)((int)piVar2 + iVar3 * 8 + 5) == '\0') {
        iVar3 = *piVar4;
        iVar5 = *piVar2;
        *piVar2 = iVar5 + -1;
        iVar5 = (iVar5 + -1) - iVar3;
        if (iVar5 != 0) {
          sub_08049138((int)(piVar2 + iVar3 * 2 + 1),(int)(piVar2 + iVar3 * 2 + 3),iVar5 * 8);
        }
        if ((*piVar2 <= *piVar4) && (iVar3 = *piVar2 + -1, *piVar4 = iVar3, iVar3 < 0)) {
          *piVar4 = 0;
        }
      }
      *(undefined4 *)(param_1 + 0x110) = 0;
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319494,0x40);
    }
  }
  else {
    if (param_3 == 1) {
      sub_0803D876(1);
      return 1;
    }
    if (param_3 == 2) {
      *(undefined4 *)(param_1 + 0x8c8) = 1;
      *piVar4 = *piVar4 + -1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      sub_08031FCE(param_1);
    }
    else if (param_3 == 3) {
      *(undefined4 *)(param_1 + 0x8c8) = 1;
      *piVar4 = *piVar4 + 1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      sub_08031FCE(param_1);
    }
  }
  return 0;
}


/* sub_080326F4 @ 0x080326F4 */

undefined4 sub_080326F4(int param_1)

{
  if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
    if (*(int *)(param_1 + 0x8c8) < 2) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0);
    }
    else {
      *(int *)(param_1 + 0x8c8) = *(int *)(param_1 + 0x8c8) + -1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    if (*(int *)(param_1 + 0x8c8) <
        (int)(uint)*(byte *)(*(int *)(param_1 + 0x8c0) * 8 + param_1 + 0x119)) {
      *(int *)(param_1 + 0x8c8) = *(int *)(param_1 + 0x8c8) + 1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0);
    }
  }
  return 0;
}


/* sub_080327A2 @ 0x080327A2 */

undefined4 sub_080327A2(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x114) == 0) {
    return 0;
  }
  *param_2 = 0x14;
  param_2[1] = (*(int *)(param_1 + 0x8c0) - *(int *)(param_1 + 0x8c4)) * 0x10 + 0x17;
  return 1;
}


/* sub_080327E0 @ 0x080327E0 */

int sub_080327E0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08000158(0x2f);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  if (iVar2 != 1) {
    iVar2 = 0;
  }
  return iVar2;
}


/* sub_080327FE @ 0x080327FE */

undefined4 * sub_080327FE(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D2E8;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08032824 @ 0x08032824 */

void sub_08032824(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0803282A @ 0x0803282A */

undefined4 sub_0803282A(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  if (*(byte *)(param_2 + 4) == param_3) {
    return 1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  *(undefined4 *)(param_1 + 4) = 0x3c;
  if ((*(byte *)(param_2 + 4) ^ 1) != param_3) {
    *(char *)(param_2 + 4) = (char)param_3;
    return 1;
  }
  return 0;
}


/* sub_0803287E @ 0x0803287E */

void sub_0803287E(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  iVar2 = sub_0803282A();
  if (iVar2 != 0) {
    local_14 = param_2[0x69];
    local_18 = param_2[0x68];
    cVar1 = (char)param_2[4];
    if (cVar1 == '\0') {
      local_14 = local_14 + 0x40;
    }
    else if (cVar1 == '\x01') {
      local_14 = local_14 + -0x40;
    }
    else if (cVar1 == '\x02') {
      local_18 = local_18 + -0x40;
    }
    else if (cVar1 == '\x03') {
      local_18 = local_18 + 0x40;
    }
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iVar2 = __call_via_r2(param_2,&local_18,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    else {
      param_2[0x68] = local_18;
      param_2[0x69] = local_14;
      iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  }
  return;
}


/* sub_08032948 @ 0x08032948 */

undefined4 sub_08032948(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = param_2[4];
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  *(char *)(param_2 + 4) = (char)param_3;
  local_1c = 0;
  local_18 = 0;
  piVar2 = param_2 + 0x68;
  if (param_3 == 0) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a4) - param_2[0x69];
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_3 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + (iVar4 >> 8)) >> 3;
    local_18 = 0x800;
  }
  else if (param_3 == 1) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a0) - *piVar2;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_3 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + (iVar4 >> 8)) >> 3;
    local_18 = -0x800;
  }
  else if (param_3 == 2) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a0) - *piVar2;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_3 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + (iVar4 >> 8)) >> 3;
    local_1c = -0x800;
  }
  else if (param_3 == 3) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a0) - *piVar2;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_3 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + (iVar4 >> 8)) >> 3;
    local_1c = 0x800;
  }
  iStack_24 = *piVar2;
  local_20 = param_2[0x69];
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iStack_24 = iStack_24 + local_1c;
      local_20 = local_20 + local_18;
      iVar3 = __call_via_r2(param_2,&iStack_24,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar3 == 0) {
        *(char *)(param_2 + 4) = (char)iVar1;
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  *(char *)(param_2 + 4) = (char)iVar1;
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  return 1;
}


/* sub_08032A64 @ 0x08032A64 */

undefined4 sub_08032A64(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
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
  int iStack_18;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  if (DAT_03001c34 != 0) {
    sub_0800FDFA(&iStack_48);
    iStack_34 = iStack_44 + iStack_3c >> 1;
    iStack_38 = iStack_48 + iStack_40 >> 1;
    sub_0800FDFA(&iStack_30,param_2);
    iStack_1c = iStack_2c + iStack_24 >> 1;
    iStack_20 = iStack_30 + iStack_28 >> 1;
    iVar1 = iStack_38 - iStack_20;
    iVar2 = iStack_34 - iStack_1c;
    iStack_18 = 0;
    if ((iVar1 + 1U < 3) || (iVar2 + 1U < 3)) {
      iStack_18 = 1;
    }
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = -iVar1;
    }
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = -iVar2;
    }
    if (iVar3 < iVar4) {
      if (iVar1 < 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 3;
      }
      if (iVar2 < 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar6 = iVar2 < 0;
      if (iVar1 < 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
    }
    if (iStack_18 == 0) {
      iVar1 = sub_08032948(param_1,param_2,uVar6,iVar4,iVar1,iVar2);
      if (iVar1 == 0) {
        iVar1 = sub_08032948(param_1,param_2,uVar5);
        if (iVar1 == 0) {
          iStack_18 = 1;
        }
        else {
          sub_0803287E(param_1,param_2,uVar5);
        }
      }
      else {
        sub_0803287E(param_1,param_2,uVar6);
      }
    }
    if (iStack_18 == 1) {
      sub_0803282A(param_1,param_2,uVar5);
    }
  }
  return 0;
}


/* sub_08032B7C @ 0x08032B7C */

void sub_08032B7C(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049E20;
  }
  return;
}


/* sub_08032D2A @ 0x08032D2A */

undefined4 * sub_08032D2A(void)

{
  return &DAT_030031f8;
}


/* sub_08032D44 @ 0x08032D44 */

void sub_08032D44(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = sub_08000158(0x2f);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  if (iVar2 < 2) {
    __call_via_r3(param_2,1,param_3,*(int *)(*param_2 + 0x74) + *param_2);
  }
  else {
    sub_0800FE34(&local_20,param_2);
    sub_08011944(&DAT_03001c4c,param_2);
    iVar2 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar2) {
      local_28 = local_20 + local_18 >> 1;
      local_24 = local_1c + local_14 >> 1;
      uVar1 = sub_0801952C(0,&local_28,0x38,local_14,local_28,local_24);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
  }
  return;
}


/* sub_08032DC8 @ 0x08032DC8 */

undefined4 sub_08032DC8(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  int *local_50;
  
  local_58 = 0;
  local_5c = sub_08000158(0x2f);
  sub_08011C70(&DAT_03001c4c,6,&local_5c);
  piVar3 = local_54;
  if (local_54 == param_2) {
    piVar3 = local_50;
  }
  param_2[0xa3] = param_2[0xa3] + piVar3[0xa3];
  piVar4 = param_2 + 0x68;
  local_7c = *piVar4 + piVar3[0x68];
  local_78 = param_2[0x69] + piVar3[0x69];
  local_74 = local_7c;
  local_70 = local_78;
  iVar1 = __16__rt_sdiv(0x200,local_7c * 0x100);
  local_78 = __16__rt_sdiv(0x200,local_70 << 8);
  local_7c = iVar1;
  local_6c = iVar1;
  local_68 = local_78;
  local_64 = iVar1;
  local_60 = local_78;
  iVar1 = sub_08000158(0x2f);
  iVar1 = sub_08009904(&DAT_030019a4,&local_64,iVar1 + 8);
  if (iVar1 == 0) {
    local_64 = *piVar4;
    local_60 = param_2[0x69];
  }
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  *piVar4 = local_64;
  param_2[0x69] = local_60;
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    iVar1 = sub_0803FACC(0x1000);
    iVar1 = iVar1 + 0x1000;
    sub_0800FE34(&local_7c,param_2);
    local_6c = local_7c + local_74 >> 1;
    local_68 = local_78 + local_70 >> 1;
    uVar2 = sub_0802A81C(0,&local_6c,&gUnknown_086FD9D0,4,iVar1,0x400,0x37,local_68);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    iVar1 = sub_0803FACC(0x1000);
    sub_0800FE34(&local_7c,piVar3);
    local_6c = local_7c + local_74 >> 1;
    local_68 = local_78 + local_70 >> 1;
    uVar2 = sub_0802A81C(0,&local_6c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37,local_6c,
                         local_68);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  sub_08011944(&DAT_03001c4c,piVar3);
  sub_08011C0C(&DAT_03001c4c,0x20,param_2);
  return 1;
}


/* sub_08032F6C @ 0x08032F6C */

undefined4 * sub_08032F6C(void)

{
  return &DAT_030031fc;
}


/* sub_08032F7C @ 0x08032F7C */

undefined4 * sub_08032F7C(void)

{
  return &DAT_03003200;
}


/* sub_08032F84 @ 0x08032F84 */

undefined4 sub_08032F84(undefined4 param_1,int *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uStack_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)(param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 8);
    uStack_1c = *(undefined4 *)(param_3 + 0xc);
    uStack_18 = *(undefined4 *)(param_3 + 0x10);
    uStack_14 = *(undefined4 *)(param_3 + 0x14);
    uStack_10 = *(undefined4 *)(param_3 + 0x18);
    *(char *)(param_2 + 0xa4) = *param_3;
    if ((char)param_2[4] == *param_3) {
      uStack_10 = __16__rt_sdiv(4,uStack_10);
    }
    iVar2 = __call_via_r2(param_2,&uStack_28,*(int *)(*param_2 + 0x58) + *param_2);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}


/* sub_08032FE0 @ 0x08032FE0 */

void sub_08032FE0(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    param_1[3] = 0;
    param_1[1] = 0;
    *param_1 = &_0804C690;
    param_1[5] = param_2;
    param_1[4] = 0;
  }
  return;
}


/* sub_08033002 @ 0x08033002 */

void sub_08033002(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 2) = 0x38;
  *(undefined1 *)((int)param_2 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(param_2 + 4) * 0xc;
  iVar2 = sub_080116FC(&DAT_03001c4c);
  if (0x2ff < iVar2) {
    local_1c = (param_2[0x68] >> 8) + *(int *)(&gUnknown_0875925C + iVar1);
    local_18 = (param_2[0x69] >> 8) + *(int *)(&DAT_08759260 + iVar1);
    iVar1 = sub_080206B8(0,&local_1c,*(undefined4 *)(&DAT_08759264 + iVar1),param_2,
                         &gUnknown_0871DA68,local_1c,local_18,param_2[0x68] >> 8);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) goto _08033080;
    sub_0801191A(&DAT_03001c4c,iVar1);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
_08033080:
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  return;
}


/* sub_08033092 @ 0x08033092 */

void sub_08033092(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (0x5a < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}


/* sub_080330AA @ 0x080330AA */

void sub_080330AA(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iStack_10;
  int iStack_c;
  
  if (*(ushort *)(param_2 + 0x12) < 8) {
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  else {
    *(char *)(param_2 + 0x11) =
         '\x01' - (char)((int)((*(ushort *)(param_2 + 0x12) + 8) * 0x10000000) >> 0x1f);
  }
  if (*(short *)(param_2 + 0x12) == 8) {
    iVar1 = *(int *)(param_2 + 0x1a4) >> 8;
    iVar2 = (uint)*(byte *)(param_2 + 0x10) * 8;
    iStack_10 = (*(int *)(param_2 + 0x1a0) >> 8) + *(int *)(&DAT_0875928c + iVar2);
    iStack_c = iVar1 + *(int *)(&DAT_08759290 + iVar2);
    sub_080207D2(*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_2 + 0x10),&iStack_10,iVar1,
                 iStack_10);
  }
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  return;
}


/* sub_0803311C @ 0x0803311C */

void sub_0803311C(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    sub_0802082A();
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_08033132 @ 0x08033132 */

void sub_08033132(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *local_20;
  int *local_1c;
  undefined4 local_18;
  
  iVar2 = 0;
  local_1c = (int *)0x0;
  local_18 = DAT_03001c34;
  local_20 = &_0804AE70;
  if (param_2 != 0) {
    iVar2 = param_2 + 0x18c;
  }
  sub_0801599C(&local_20,iVar2);
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    *puVar1 = &_0804C690;
    puVar1[1] = 0;
    puVar1[5] = uVar3;
    puVar1[4] = 0;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  sub_0800ECDA(param_2,3);
  sub_0800ED18(param_2,puVar1);
  local_20 = &_08049ACC;
  if (local_1c != (int *)0x0) {
    __call_via_r2(local_1c,1,*(int *)*local_1c + *local_1c);
  }
  return;
}


/* sub_080331A0 @ 0x080331A0 */

undefined4 sub_080331A0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_2 + 0x14) == *(int *)(param_1 + 8))) {
    return 0;
  }
  return 1;
}


/* sub_080331B4 @ 0x080331B4 */

void sub_080331B4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A6C0;
    puVar1[2] = 0;
    puVar1[1] = param_1;
  }
  return;
}


/* sub_080331EC @ 0x080331EC */

int sub_080331EC(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
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
  
  iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar2 != 0) {
    sub_0800FDFA(&iStack_40,DAT_03001c34);
    iStack_2c = iStack_3c + iStack_34 >> 1;
    iStack_30 = iStack_40 + iStack_38 >> 1;
    sub_0800FDFA(&iStack_28,param_2);
    iStack_30 = iStack_30 - (iStack_28 + iStack_20 >> 1);
    iStack_2c = iStack_2c - (iStack_24 + iStack_1c >> 1);
    iVar2 = iStack_30;
    if (iStack_30 < 0) {
      iVar2 = -iStack_30;
    }
    iVar3 = iStack_2c;
    if (iStack_2c < 0) {
      iVar3 = -iStack_2c;
    }
    cVar1 = (char)param_2[4];
    if (cVar1 == '\0') {
      if ((iVar2 < 0x10) && (0x10 < iStack_2c)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else if (cVar1 == '\x01') {
      if ((iVar2 < 0x10) && (iStack_2c < -0x10)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else if (cVar1 == '\x02') {
      if ((iVar3 < 0x10) && (iStack_30 < -0x10)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else if (cVar1 == '\x03') {
      if ((iVar3 < 0x10) && (0x10 < iStack_30)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


/* sub_080332E0 @ 0x080332E0 */

undefined4 * sub_080332E0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804BDB8;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08033308 @ 0x08033308 */

undefined4 sub_08033308(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_70;
  int local_6c;
  undefined4 local_2c;
  
  local_70 = 0;
  local_2c = 0;
  ScriptVM_Run(&local_70,*(undefined4 *)(param_1 + 4),param_2 + 0x214);
  if (local_70 == 1) {
    if (local_6c == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0803333C @ 0x0803333C */

undefined4 * sub_0803333C(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049DC8;
    puVar1[1] = param_1 + 0xc;
  }
  return puVar1;
}


/* sub_08033354 @ 0x08033354 */

uint sub_08033354(int param_1,int param_2)

{
  int iStack_70;
  uint uStack_6c;
  undefined4 uStack_2c;
  
  iStack_70 = 0;
  uStack_2c = 0;
  ScriptVM_Run(&iStack_70,param_1 + 0xc,param_2 + 0x214);
  if (iStack_70 == 1) {
    uStack_6c = uStack_6c & 0xff;
  }
  else {
    uStack_6c = 0;
  }
  return uStack_6c;
}


/* sub_08033360 @ 0x08033360 */

uint sub_08033360(void)

{
  int local_70;
  uint local_6c;
  undefined4 local_2c;
  
  local_70 = 0;
  local_2c = 0;
  ScriptVM_Run(&local_70);
  if (local_70 == 1) {
    local_6c = local_6c & 0xff;
  }
  else {
    local_6c = 0;
  }
  return local_6c;
}


/* sub_08033384 @ 0x08033384 */

void sub_08033384(int param_1,int param_2)

{
  undefined4 auStack_70 [17];
  undefined4 uStack_2c;
  
  auStack_70[0] = 0;
  uStack_2c = 0;
  ScriptVM_Run(auStack_70,param_1 + 0xc,param_2 + 0x214);
  return;
}


/* sub_08033390 @ 0x08033390 */

void sub_08033390(void)

{
  undefined4 local_70 [17];
  undefined4 local_2c;
  
  local_70[0] = 0;
  local_2c = 0;
  ScriptVM_Run(local_70);
  return;
}


/* sub_080333A8 @ 0x080333A8 */

void sub_080333A8(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(&gUnknown_087592DC + param_1 * 4 + param_3 * 0xc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(&UNK_087592f4 + param_1 * 4 + param_3 * 0xc);
  return;
}


/* sub_080333C4 @ 0x080333C4 */

void sub_080333C4(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_4c [8];
  int local_44;
  short local_40;
  ushort local_3e;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  short local_2c;
  ushort local_2a;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  sub_0800FE34(&local_28);
  local_2c = (short)((uint)param_2[0x68] >> 8);
  local_2a = (ushort)((uint)param_2[0x69] >> 8);
  __call_via_r3(param_2,*(undefined4 *)(param_1 + 0x10),param_3,*(int *)(*param_2 + 0x74) + *param_2
               );
  sub_08011944(&DAT_03001c4c,param_2);
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    local_3c = local_28 + local_20 >> 1;
    local_38 = local_24 + local_1c >> 1;
    local_34 = local_3c;
    local_30 = local_38;
    uVar2 = sub_0801952C(0,&local_34,0x38);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  sub_08049138((int)auStack_4c,0x87592bc,0x20);
  local_40 = local_2c;
  local_3e = local_2a;
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = sub_0803FACC(2);
  iVar3 = iVar3 * 4;
  local_44 = *(int *)(&gUnknown_087592DC + iVar3 + iVar1 * 0xc);
  local_3c = *(int *)(&UNK_087592f4 + iVar3 + iVar1 * 0xc);
  uVar2 = Enemy_Create(0,auStack_4c,&gEnemyStats + local_44 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,uVar2);
  sub_08049138((int)auStack_4c,0x87592bc,0x20);
  local_40 = local_2c + 0x18;
  local_3e = local_2a;
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = sub_0803FACC(2);
  iVar3 = iVar3 * 4;
  local_44 = *(int *)(&gUnknown_087592DC + iVar3 + iVar1 * 0xc);
  local_3c = *(int *)(&UNK_087592f4 + iVar3 + iVar1 * 0xc);
  uVar2 = Enemy_Create(0,auStack_4c,&gEnemyStats + local_44 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,uVar2);
  sub_08049138((int)auStack_4c,0x87592bc,0x20);
  local_40 = local_2c + 0x18;
  local_18 = local_2a + 0x18;
  local_3e = (ushort)local_18;
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = sub_0803FACC(2);
  iVar3 = iVar3 * 4;
  local_44 = *(int *)(&gUnknown_087592DC + iVar3 + iVar1 * 0xc);
  local_3c = *(int *)(&UNK_087592f4 + iVar3 + iVar1 * 0xc);
  uVar2 = Enemy_Create(0,auStack_4c,&gEnemyStats + local_44 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,uVar2);
  sub_08049138((int)auStack_4c,0x87592bc,0x20);
  local_40 = local_2c;
  local_3e = (ushort)local_18;
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = sub_0803FACC(2);
  iVar3 = iVar3 * 4;
  local_44 = *(int *)(&gUnknown_087592DC + iVar3 + iVar1 * 0xc);
  local_3c = *(int *)(&UNK_087592f4 + iVar3 + iVar1 * 0xc);
  uVar2 = Enemy_Create(0,auStack_4c,&gEnemyStats + local_44 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_080335BC @ 0x080335BC */

undefined4 * sub_080335BC(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049338;
  sub_0803F540(param_1 + 5,0xf0,0x40);
  param_1[4] = 0x54b;
  param_1[1] = 0x90;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined1 *)((int)param_1 + 0x17) = 2;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  param_1[0xd] = 0x803f5a5;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}


/* sub_08033606 @ 0x08033606 */

void sub_08033606(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_08049338;
  sub_0803F58C(param_1 + 5,0,param_3,param_4,param_4);
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0803362A @ 0x0803362A */

void sub_0803362A(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08046E40(*(undefined4 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x44),param_4,param_4);
  *(undefined **)(param_1 + 0x20) = &gUnknown_0806E050;
  *(undefined4 *)(param_1 + 0x18) = 0x78;
  *(undefined4 *)(param_1 + 0x1c) = 0x10;
  *(undefined1 *)(param_1 + 0x15) = 8;
  if (param_2 != 0) {
    sub_0803DADA(param_1 + 0x14,param_2);
  }
  sub_08049150(param_1 + 0x14,0x6003c40);
  return;
}


/* sub_08033664 @ 0x08033664 */

void sub_08033664(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08046E40(*(undefined4 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x44),param_4,param_4);
  *(undefined4 **)(param_1 + 0x20) = &gUnknown_0806EE6C;
  *(undefined4 *)(param_1 + 0x18) = 0x78;
  *(undefined4 *)(param_1 + 0x1c) = 0x18;
  *(undefined1 *)(param_1 + 0x15) = 0x10;
  if (param_2 != 0) {
    sub_0803DADA(param_1 + 0x14,param_2);
  }
  sub_08049150(param_1 + 0x14,0x6000040);
  return;
}


/* sub_0803369E @ 0x0803369E */

void sub_0803369E(int param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  sub_0804912C(0x6000000,0,0x18000);
  sub_0804912C(0x6000000,0,0x40);
  sub_0804912C(0x600f000,0,0x1000);
  uStack_1c = 6;
  uStack_14 = 0xe;
  uStack_18 = 0x1e;
  uStack_20 = 0;
  sub_0803DA10(&uStack_20,&DAT_0600f800,1);
  uStack_1c = 10;
  uStack_14 = 0x12;
  uStack_20 = 0;
  uStack_18 = 0x1e;
  sub_0803DA10(&uStack_20,&DAT_0600f000,0xf1);
  REG_BG0CNT = 0x1e83;
  REG_BG1CNT = 0x1f83;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BLDCNT = 0x2043;
  REG_DISPCNT = 0x300;
  sub_08033664(param_1,*(undefined4 *)(&gUIStringPtrs + *(int *)(param_1 + 0x10) * 4));
  sub_0803362A(param_1,*(undefined4 *)(&gUIStringPtrs + (*(int *)(param_1 + 0x10) + 1) * 4));
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}


/* sub_0803377A @ 0x0803377A */

void sub_0803377A(void)

{
  return;
}


/* sub_0803377C @ 0x0803377C */

undefined4 sub_0803377C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 8) == 0)) &&
     (((DAT_03003304 & 1) != 0 || ((int)((uint)DAT_03003304 << 0x1e) < 0)))) {
    *(undefined4 *)(param_1 + 8) = 1;
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0,param_4);
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = iVar1 + 1;
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 < 0x80) {
    if ((*(int *)(param_1 + 8) != 0) || ((int)((uint)DAT_03003302 << 0x18) < 0)) {
      *(undefined4 *)(param_1 + 4) = 0x7f;
    }
  }
  else if (iVar2 == 0x80) {
    iVar1 = *(int *)(param_1 + 0x10) + 2;
    *(int *)(param_1 + 0x10) = iVar1;
    if (0x5a8 < iVar1) {
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0x10) = 0x54b;
    }
  }
  else if (iVar2 < 0x91) {
    REG_BLDALPHA = -0x70 - (char)iVar2;
    if (*(int *)(param_1 + 4) == 0x90) {
      if (*(int *)(param_1 + 8) != 0) {
        return 1;
      }
      sub_08033664(param_1,*(undefined4 *)(&gUIStringPtrs + *(int *)(param_1 + 0x10) * 4));
      sub_0803362A(param_1,*(undefined4 *)(&gUIStringPtrs + (*(int *)(param_1 + 0x10) + 1) * 4));
    }
  }
  else if ((iVar2 < 0xa1) && (REG_BLDALPHA = (char)iVar1 + 'q', *(int *)(param_1 + 4) == 0xa0)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}


/* sub_0803388C @ 0x0803388C */

undefined4 sub_0803388C(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    *puVar1 = &_08049264;
    puVar1[2] = uVar3;
    puVar1[3] = param_2;
  }
  iVar2 = DAT_0300225c * 4;
  DAT_0300225c = DAT_0300225c + 1;
  *(undefined4 **)(&DAT_03002260 + iVar2) = puVar1;
  return 1;
}


/* sub_080338C4 @ 0x080338C4 */

undefined4 * sub_080338C4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049A0C;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_080338DA @ 0x080338DA */

undefined4 sub_080338DA(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08012588(*(undefined4 *)(param_1 + 0xc),param_2 + 0x214,0x214,param_4,param_4);
  return 1;
}


/* sub_080338DE @ 0x080338DE */

undefined4 sub_080338DE(int param_1,int param_2,int param_3,undefined4 param_4)

{
  sub_08012588(*(undefined4 *)(param_1 + 0xc),param_2 + param_3,param_3,param_4,param_4);
  return 1;
}


/* sub_080338EC @ 0x080338EC */

void sub_080338EC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08012588(*(undefined4 *)(param_1 + 0xc),param_2 + 0x214,0x214,param_4,param_4);
  return;
}


/* sub_080338F0 @ 0x080338F0 */

void sub_080338F0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  sub_08012588(*(undefined4 *)(param_1 + 0xc),param_2 + param_3,param_3,param_4,param_4);
  return;
}


/* sub_08033908 @ 0x08033908 */

void sub_08033908(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x58);
  iVar1 = sub_08000158(0x114);
  if (iVar3 == iVar1) {
    uVar2 = sub_08000158(0x112);
    sub_0800EDF8(param_2,uVar2);
  }
  else {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xcb);
    if (iVar3 == iVar1) {
      uVar2 = sub_08000158(0xca);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0x121);
      if (iVar3 == iVar1) {
        uVar2 = sub_08000158(0x120);
        sub_0800EDF8(param_2,uVar2);
      }
    }
  }
  sub_0800F954(param_2);
  return;
}


/* sub_0803396E @ 0x0803396E */

undefined4 * sub_0803396E(void)

{
  return &DAT_03003204;
}


/* sub_08033978 @ 0x08033978 */

void sub_08033978(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_08033984 @ 0x08033984 */

void sub_08033984(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (0x1f < uVar1) {
    *(undefined2 *)(param_2 + 0x12) = 0x10;
  }
  *(char *)(param_2 + 0x11) = (char)(*(ushort *)(param_2 + 0x12) >> 3);
  return;
}


/* sub_0803399E @ 0x0803399E */

void sub_0803399E(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_30 [8];
  
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = DAT_03001c34;
  sub_0800ECDA(DAT_03001c34,9);
  *(undefined1 *)(iVar1 + 0x11) = 0;
  *(byte *)(iVar1 + 0x10) = *(byte *)(param_2 + 0x10) ^ 1;
  sub_0800ED18(iVar1,&DAT_03001b00);
  local_30[0] = 0;
  local_30[1] = 0x1000;
  local_30[2] = 0;
  local_30[3] = 0xfffff000;
  local_30[4] = 0xfffff000;
  local_30[5] = 0;
  local_30[6] = 0x1000;
  local_30[7] = 0;
  iVar3 = *(int *)(iVar1 + 0x1a4);
  iVar4 = local_30[(uint)*(byte *)(param_2 + 0x10) * 2 + 1];
  *(int *)(param_2 + 0x1a0) =
       *(int *)(iVar1 + 0x1a0) - local_30[(uint)*(byte *)(param_2 + 0x10) * 2];
  *(int *)(param_2 + 0x1a4) = iVar3 - iVar4;
  puVar2 = (undefined4 *)sub_0803D5B8(4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804C3CC;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_08033A2A @ 0x08033A2A */

undefined4 sub_08033A2A(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  int iStack_18;
  
  piVar1 = DAT_03001c34;
  if (DAT_03001c34 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    iVar3 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
    if (*(short *)(iVar3 + 0x16) < 1) {
      uVar2 = 1;
    }
    else if ((undefined4 *)piVar1[5] == &DAT_03001b00) {
      if ((DAT_03003304 & 0xf3) == 0) {
        if (10 < (int)(DAT_03000f94 - *(int *)(param_1 + 4))) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
      }
      else {
        *(uint *)(param_1 + 4) = DAT_03000f94;
        iVar3 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar3;
        if (8 < iVar3) {
          __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
          return 1;
        }
      }
      if ((DAT_03000f94 & 0xf) == 0) {
        uStack_20 = 0;
        iStack_18 = (uint)*(ushort *)((int)param_2 + 0x1b2) << 10;
        __call_via_r2(piVar1,auStack_30,*(int *)(*piVar1 + 0x5c) + *piVar1);
        __call_via_r2(param_2,&iStack_18,*(int *)(*param_2 + 0x60) + *param_2);
      }
      iVar3 = __call_via_r1(piVar1,*(int *)(*piVar1 + 0x80) + *piVar1);
      if (*(short *)(iVar3 + 0x16) < 1) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* sub_08033AF6 @ 0x08033AF6 */

void sub_08033AF6(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  param_2[0xa5] = 0;
  *(byte *)(param_2 + 0xa4) = *(byte *)(param_2 + 4) ^ 1;
  __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_08033B20 @ 0x08033B20 */

void sub_08033B20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AB04;
  }
  return;
}


/* sub_08033B4C @ 0x08033B4C */

void sub_08033B4C(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x58);
  iVar1 = sub_08000158(0x112);
  if (iVar3 == iVar1) {
    uVar2 = sub_08000158(0x114);
    sub_0800EDF8(param_2,uVar2);
  }
  else {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xca);
    if (iVar3 == iVar1) {
      uVar2 = sub_08000158(0xcb);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0x120);
      if (iVar3 == iVar1) {
        uVar2 = sub_08000158(0x121);
        sub_0800EDF8(param_2,uVar2);
      }
    }
  }
  sub_0800F924(param_2);
  return;
}


/* sub_08033BB2 @ 0x08033BB2 */

undefined4 * sub_08033BB2(void)

{
  return &DAT_03003208;
}


/* sub_08033BBC @ 0x08033BBC */

undefined4 * sub_08033BBC(void)

{
  return &DAT_0300320c;
}


/* sub_08033BC4 @ 0x08033BC4 */

void sub_08033BC4(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 auStack_70 [4];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  int iStack_50;
  int local_44;
  int local_40;
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
  
  piVar1 = DAT_03001c34;
  if ((DAT_03001c34 != (int *)0x0) && (DAT_03001c34[0x73] != 0)) {
    sub_0800FE78(&local_24,DAT_03001c34);
    sub_0800FE78(&local_34,param_2);
    local_44 = local_34 + local_2c >> 1;
    local_68 = local_30 + local_28 >> 1;
    local_74 = local_20 + local_18 >> 1;
    local_78 = local_24 + local_1c >> 1;
    local_80 = local_78 - local_44;
    iVar4 = local_74 - local_68;
    iVar2 = local_80;
    if (local_80 < 0) {
      iVar2 = -local_80;
    }
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    local_7c = iVar4;
    local_3c = local_44;
    local_38 = local_68;
    if (iVar3 < iVar2) {
      local_60 = local_28 + 3;
      if (local_80 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 2;
        local_6c = local_34 + -4;
        local_64 = local_44;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 3;
        local_6c = local_44;
        local_64 = local_2c + 3;
      }
    }
    else {
      local_40 = local_68;
      sub_0800FDFA(&local_80,param_2);
      local_6c = local_80;
      local_64 = local_78;
      if (iVar4 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
        local_68 = local_30;
        local_60 = local_7c;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
        local_68 = local_30;
        local_60 = local_28 + -6;
      }
    }
    uStack_5c = *(undefined1 *)(param_2 + 0x10);
    puStack_54 = &gUnknown_086B8098;
    uStack_58 = 0x400;
    auStack_70[0] = 0;
    iVar2 = *piVar1;
    iStack_50 = param_2;
    local_40 = param_2;
    iVar2 = __call_via_r3(piVar1,0,auStack_70,*(int *)(iVar2 + 0x24) + iVar2);
    if (iVar2 != 0) {
      sub_0803E378(&DAT_03003e5c,&DAT_08319590,0x40,0);
    }
  }
  return;
}


/* sub_08033CF0 @ 0x08033CF0 */

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


/* sub_08033D60 @ 0x08033D60 */

undefined4 * sub_08033D60(void)

{
  return &DAT_03003210;
}


/* sub_08033D7C @ 0x08033D7C */

undefined4 * sub_08033D7C(void)

{
  return &DAT_0300321c;
}


/* sub_08033D84 @ 0x08033D84 */

void sub_08033D84(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x13,0,param_4,param_4);
  return;
}


/* sub_08033D9A @ 0x08033D9A */

void sub_08033D9A(undefined4 param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  if (uVar2 < 0x20) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar2 >> 3);
    iVar1 = DAT_03001c34;
    if ((*(short *)((int)param_2 + 0x12) == 8) && (DAT_03001c34 != 0)) {
      iVar3 = sub_0803FACC(0x40);
      iVar4 = sub_0803FACC(0x40);
      iVar5 = sub_080116FC(&DAT_03001c4c);
      if (0x7f < iVar5) {
        iStack_3c = (param_2[0x68] >> 8) +
                    *(int *)(&DAT_0875939c + (uint)*(byte *)(param_2 + 4) * 8);
        iStack_38 = (param_2[0x69] >> 8) +
                    *(int *)(&DAT_087593a0 + (uint)*(byte *)(param_2 + 4) * 8);
        sub_0800FDFA(&iStack_34,iVar1);
        iStack_20 = iStack_30 + iStack_28 >> 1;
        iStack_24 = iStack_34 + iStack_2c >> 1;
        iStack_1c = iStack_24 + iVar3 + -0x20;
        iStack_18 = iStack_20 + iVar4 + -0x20;
        uVar6 = sub_08033F28(0,&iStack_3c,&iStack_1c,param_2);
        sub_0801191A(&DAT_03001c4c,uVar6);
      }
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08033E78 @ 0x08033E78 */

void sub_08033E78(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  iVar2 = 0;
  local_14 = (int *)0x0;
  local_10 = DAT_03001c34;
  local_18 = &_0804AE70;
  if (param_2 != 0) {
    iVar2 = param_2 + 0x18c;
  }
  sub_0801599C(&local_18,iVar2);
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804E030;
  }
  sub_0800ECDA(param_2,4);
  sub_0800ED18(param_2,puVar1);
  local_18 = &_08049ACC;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
  }
  return;
}


/* sub_08033ED6 @ 0x08033ED6 */

void sub_08033ED6(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  return;
}


/* sub_08033EE8 @ 0x08033EE8 */

undefined4 * sub_08033EE8(void)

{
  return &DAT_03003220;
}


/* sub_08033F04 @ 0x08033F04 */

undefined4 * sub_08033F04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804B6F8;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08033F28 @ 0x08033F28 */

undefined4 * sub_08033F28(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x40,param_4);
    *param_1 = &_0804CE50;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_1[0x12] = 0x16;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar2 << 8;
    iVar1 = param_3[1];
    iVar2 = param_2[1];
    param_1[0x10] = (*param_3 - *param_2) * 0x5d3 >> 8;
    param_1[0x11] = ((iVar1 - iVar2) * 0x5d3 + -0xba60 >> 8) + -0x200;
    param_1[6] = &gUnknown_087593D8;
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_08033FA4 @ 0x08033FA4 */

void sub_08033FA4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar4 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = iVar4 + 0x20;
  iVar5 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x20) = iVar5;
  iVar1 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x24) = iVar1;
  *(int *)(param_1 + 0x44) = iVar4 + 0x40;
  *(int *)(param_1 + 0x20) = iVar5 + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x24) = iVar1 + *(int *)(param_1 + 0x44);
  sub_08019B4E(param_1);
  iVar1 = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x48) = iVar1;
  if (iVar1 == 0) {
    if (param_2 != 0) {
      local_24 = *(int *)(param_1 + 0x20) >> 8;
      local_18 = *(int *)(param_1 + 0x24) >> 8;
      uStack_30 = *(undefined4 *)(param_1 + 0x1c);
      uStack_3c = *(undefined1 *)(param_1 + 0x10);
      uStack_38 = 0;
      puStack_34 = &gUnknown_086B8090;
      iStack_4c = local_24 + -0xc;
      iStack_48 = local_18 + -0xc;
      iStack_44 = local_24 + 0xc;
      iStack_40 = local_18 + 0xc;
      local_50 = local_50 & 0xffffff00;
      local_20 = param_1;
      local_1c = local_24;
      iVar1 = sub_08011C70(&DAT_03001c4c,1,&local_50);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)sub_0803D5B8(0x10);
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[1] = 1;
          *puVar2 = &_08049264;
          puVar2[2] = &gUnknown_08783084;
          puVar2[3] = 0;
        }
        iVar1 = DAT_0300225c * 4;
        DAT_0300225c = DAT_0300225c + 1;
        *(undefined4 **)(&DAT_03002260 + iVar1) = puVar2;
      }
    }
    iVar1 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar1) {
      sub_0803FACC(0x1000);
      local_24 = *(int *)(param_1 + 0x20) >> 8;
      local_20 = *(int *)(param_1 + 0x24) >> 8;
      local_50 = 0x38;
      local_1c = local_24;
      local_18 = local_20;
      uVar3 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4);
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}


/* sub_08034108 @ 0x08034108 */

undefined4 sub_08034108(undefined4 param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_2 + 0x10) == (*param_3 ^ 1)) {
    uVar1 = __call_via_r3();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08034124 @ 0x08034124 */

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


