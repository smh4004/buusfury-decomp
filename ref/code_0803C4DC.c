/* Ghidra reference decompilation of code_0803C4DC (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0803C4DC @ 0x0803C4DC */

void sub_0803C4DC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar5 = *(int *)(param_2 + 4);
  sub_0800ECDA(iVar5,0x14);
  sub_0800EE78(iVar5);
  sub_0800FDFA(&local_2c,iVar5);
  iVar2 = *(int *)(param_1 + 8) - (local_2c + local_24 >> 1);
  iVar3 = *(int *)(param_1 + 0xc) - (local_28 + local_20 >> 1);
  iVar4 = iVar2 * 2;
  if (iVar4 + iVar3 * 5 < 0 == SBORROW4(iVar4,iVar3 * -5)) {
    iVar2 = iVar2 * 0xc;
    if (iVar2 + iVar3 * 5 < 0 == SBORROW4(iVar2,iVar3 * -5)) {
      iVar1 = iVar4 + iVar3 * -5;
      if (iVar1 == 0 || iVar1 < 0 != SBORROW4(iVar4,iVar3 * 5)) {
        iVar4 = iVar2 + iVar3 * -5;
        if (iVar4 == 0 || iVar4 < 0 != SBORROW4(iVar2,iVar3 * 5)) {
          *(undefined4 *)(param_1 + 0x14) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x14) = 3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined2 *)(iVar5 + 0x12) = 0;
  *(undefined1 *)(iVar5 + 8) = 0x38;
  *(char *)(iVar5 + 0x11) = (char)*(undefined4 *)(param_1 + 0x14) * '\x02' + '\x01';
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* sub_0803C576 @ 0x0803C576 */

void sub_0803C576(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = *(int *)(param_2 + 4);
  *(short *)(iVar4 + 0x12) = *(short *)(iVar4 + 0x12) + 1;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x18) + -1, *(int *)(param_1 + 0x18) = iVar1, iVar1 == 0)) {
    sub_08011944(&DAT_03001c4c);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(short *)(iVar4 + 0x12) == 8) {
    *(char *)(iVar4 + 0x11) = (char)*(undefined4 *)(param_1 + 0x14) * '\x02' + '\x02';
    iVar1 = *(int *)(param_1 + 0x14) * 8;
    local_18 = (*(int *)(iVar4 + 0x1a0) >> 8) + *(int *)(&DAT_0877c454 + iVar1);
    local_14 = (*(int *)(iVar4 + 0x1a4) >> 8) + *(int *)(&DAT_0877c458 + iVar1);
    iVar1 = *(int *)(param_1 + 8) - local_18;
    local_1c = *(int *)(param_1 + 0xc) - local_14;
    local_20 = iVar1;
    if (iVar1 < 0) {
      local_20 = -iVar1;
    }
    if (local_1c < 0) {
      local_1c = -local_1c;
    }
    piVar2 = &local_1c;
    if (local_1c < local_20) {
      piVar2 = &local_20;
    }
    *(int *)(param_1 + 0x18) = (*piVar2 >> 1) + 1;
    uVar3 = sub_0802E444(0,&local_18,*(undefined1 *)(iVar4 + 0x10),iVar4,param_1 + 8,local_1c,iVar1)
    ;
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    sub_0801191A(&DAT_03001c4c,uVar3);
  }
  else if (*(short *)(iVar4 + 0x12) == 0x10) {
    *(char *)(iVar4 + 0x11) = (char)*(undefined4 *)(param_1 + 0x14) * '\x02' + '\x01';
  }
  return;
}


/* sub_0803C65C @ 0x0803C65C */

undefined4 sub_0803C65C(int param_1,int param_2)

{
  if ((0x17 < *(ushort *)(*(int *)(param_2 + 4) + 0x12)) && (*(int *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}


/* sub_0803C678 @ 0x0803C678 */

void sub_0803C678(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_03001c34 != 0) {
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(DAT_03001c34 + 0x10);
  }
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0803C696 @ 0x0803C696 */

bool sub_0803C696(undefined4 param_1,int *param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = param_2[0x68] >> 8;
  local_18 = param_2[0x69] >> 8;
  iVar1 = local_1c + *(int *)(&gUnknown_0807268C + (uint)*(byte *)(param_2 + 4) * 8) * 2;
  local_24 = local_18 + *(int *)(&DAT_08072690 + (uint)*(byte *)(param_2 + 4) * 8) * 2;
  local_28 = iVar1;
  local_20 = local_24;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  local_28 = iVar1 * 0x100;
  local_24 = local_20 << 8;
  iVar1 = __call_via_r2(param_2,&local_28,*(int *)(*param_2 + 0x54) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  }
  else {
    param_2[0x68] = local_28;
    param_2[0x69] = local_24;
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  }
  return iVar1 == 0;
}


/* sub_0803C72E @ 0x0803C72E */

void sub_0803C72E(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B720;
  }
  return;
}


/* sub_0803C74C @ 0x0803C74C */

void sub_0803C74C(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  undefined *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  sub_0800EDF8(param_2,param_2[0x80]);
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    sub_0800FE34(&local_28,param_2);
    local_18 = local_28 + local_20 >> 1;
    local_2c = (int)local_24 + local_1c >> 1;
    local_14 = local_2c;
    uVar2 = sub_0801952C(0,&local_18,0x37);
    sub_0801191A(&DAT_03001c4c,uVar2);
    sub_0803E378(&DAT_03003e5c,&DAT_083194d0,0x40,0);
  }
  if ((DAT_03001c34 != 0) && (*(char *)(param_1 + 4) != '\0')) {
    local_20 = DAT_03001c34;
    local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(DAT_03001c34 + 0x10));
    local_24 = &gUnknown_086B8098;
    local_28 = 0x1000;
    sub_0800E9D8(param_2,&local_2c);
    __call_via_r2(param_2,&local_2c,*(int *)(*param_2 + 0x58) + *param_2);
  }
  return;
}


/* sub_0803C7FA @ 0x0803C7FA */

undefined4 sub_0803C7FA(void)

{
  return 1;
}


/* sub_0803C7FE @ 0x0803C7FE */

void sub_0803C7FE(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D2B8;
    *(undefined1 *)(puVar2 + 1) = uVar1;
  }
  return;
}


/* sub_0803C82C @ 0x0803C82C */

void sub_0803C82C(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  param_2[0x80] = param_2[0x16];
  uVar1 = sub_08000158(0x122);
  sub_0800EDF8(param_2,uVar1);
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  iVar2 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar2) {
    sub_0800FE34(&local_24,param_2);
    local_14 = local_24 + local_1c >> 1;
    local_10 = local_20 + local_18 >> 1;
    uVar1 = sub_0801952C(0,&local_14,0x37);
    sub_0801191A(&DAT_03001c4c,uVar1);
    sub_0803E378(&DAT_03003e5c,&DAT_083194d0,0x40,0);
  }
  return;
}


/* sub_0803C8BA @ 0x0803C8BA */

undefined4 sub_0803C8BA(void)

{
  return 1;
}


/* sub_0803C8BE @ 0x0803C8BE */

void sub_0803C8BE(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CB10;
  }
  return;
}


/* sub_0803C8E0 @ 0x0803C8E0 */

undefined4 sub_0803C8E0(undefined4 param_1,int param_2,undefined1 *param_3)

{
  *(undefined1 *)(param_2 + 0x290) = *param_3;
  return 1;
}


/* sub_0803C8EE @ 0x0803C8EE */

void sub_0803C8EE(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0803C8F0 @ 0x0803C8F0 */

void sub_0803C8F0(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0803C8FC @ 0x0803C8FC */

void sub_0803C8FC(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int local_68;
  int iStack_64;
  int local_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  int iStack_50;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  piVar2 = DAT_03001b94;
  if ((DAT_03001b94 != (int *)0x0) && (DAT_03001b94[0x73] != 0)) {
    sub_0800FE78(&local_24,param_2);
    local_44 = local_24 + local_1c >> 1;
    iVar3 = local_20 + local_18 >> 1;
    local_40 = iVar3;
    local_2c = local_44;
    local_28 = iVar3;
    sub_0800FDFA(&iStack_3c,param_2);
    cVar1 = *(char *)(param_2 + 0x10);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      iStack_6c = iStack_3c;
      iStack_64 = iStack_34;
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      local_60 = local_18 + 3;
      local_68 = iVar3;
    }
    cVar1 = *(char *)(param_2 + 0x10);
    if (cVar1 == '\0') {
      local_68 = local_20;
      local_60 = local_18 + -6;
    }
    else if (cVar1 == '\x01') {
      local_68 = local_20;
      local_60 = iStack_38;
    }
    else if (cVar1 == '\x02') {
      iStack_6c = local_24 + -4;
      iStack_64 = local_2c;
    }
    else if (cVar1 == '\x03') {
      iStack_6c = local_2c;
      iStack_64 = local_1c + 3;
    }
    uStack_5c = *(undefined1 *)(param_2 + 0x10);
    puStack_54 = &gUnknown_086B8098;
    uStack_58 = 0x400;
    auStack_70[0] = 0;
    iVar3 = *piVar2;
    iStack_50 = param_2;
    local_40 = param_2;
    iVar3 = __call_via_r3(piVar2,0,auStack_70,*(int *)(iVar3 + 0x24) + iVar3);
    if (iVar3 != 0) {
      iVar3 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
    }
  }
  return;
}


/* sub_0803C9F8 @ 0x0803C9F8 */

void sub_0803C9F8(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x10) {
    *(undefined1 *)((int)param_2 + 0x11) = 0;
  }
  else {
    *(char *)((int)param_2 + 0x11) = (char)((int)(uVar2 - 0x10) >> 3) + '\x01';
  }
  if (uVar2 == 0x10) {
    sub_0803C8FC(param_1,param_2);
  }
  if (3 < *(byte *)((int)param_2 + 0x11)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0803CA3A @ 0x0803CA3A */

void sub_0803CA3A(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((DAT_03001b94 != 0) && (*(int *)(DAT_03001b94 + 0x1cc) != 0)) {
    sub_0800FE78(&local_20);
    sub_0800FE78(&local_30,param_2);
    iVar1 = (local_20 + local_18 >> 1) - (local_30 + local_28 >> 1);
    iVar3 = (local_1c + local_14 >> 1) - (local_2c + local_24 >> 1);
    iVar4 = iVar1;
    if (iVar1 < 0) {
      iVar4 = -iVar1;
    }
    iVar5 = iVar3;
    if (iVar3 < 0) {
      iVar5 = -iVar3;
    }
    if (iVar5 < iVar4) {
      if (iVar1 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 2;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 3;
      }
    }
    else if (iVar3 < 1) {
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
    puVar2 = (undefined4 *)sub_0803D5B8(4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804C6B4;
    }
    sub_0800ECDA(param_2,4);
    sub_0800ED18(param_2,puVar2);
  }
  return;
}


/* sub_0803CAFE @ 0x0803CAFE */

bool sub_0803CAFE(undefined4 param_1,int param_2)

{
  return *(int *)(*(int *)(param_2 + 0x58) + 100) != *(int *)(param_2 + 0x50);
}


/* sub_0803CB14 @ 0x0803CB14 */

void sub_0803CB14(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AD08;
  }
  return;
}


/* sub_0803CB44 @ 0x0803CB44 */

void sub_0803CB44(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0803CB50 @ 0x0803CB50 */

void sub_0803CB50(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = 0;
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  if (0x2f < uVar2) {
    iVar1 = (int)(uVar2 - 0x30) >> 3;
  }
  if (iVar1 < *(int *)param_2[0x14]) {
    *(char *)((int)param_2 + 0x11) = (char)iVar1;
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}


/* sub_0803CB82 @ 0x0803CB82 */

void sub_0803CB82(undefined4 param_1,int param_2)

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
  sub_0800ECDA(param_2,4);
  sub_0800ED18(param_2,&DAT_030032f4);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_0803CBD0 @ 0x0803CBD0 */

undefined4 sub_0803CBD0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  int iStack_50;
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
  
  piVar1 = DAT_03001c34;
  if (*(int *)(*(int *)(param_2 + 0x58) + 100) == *(int *)(param_2 + 0x50)) {
    if (*(short *)(param_2 + 0x12) == 0x30) {
      if ((DAT_03001c34 == (int *)0x0) || (DAT_03001c34[0x73] == 0)) {
        return 0;
      }
      sub_0800FE78(&iStack_24,DAT_03001c34);
      sub_0800FE78(&iStack_34,param_2);
      iStack_44 = iStack_34 + iStack_2c >> 1;
      iStack_68 = iStack_30 + iStack_28 >> 1;
      iStack_74 = iStack_20 + iStack_18 >> 1;
      iStack_78 = iStack_24 + iStack_1c >> 1;
      iStack_80 = iStack_78 - iStack_44;
      iVar5 = iStack_74 - iStack_68;
      iVar3 = iStack_80;
      if (iStack_80 < 0) {
        iVar3 = -iStack_80;
      }
      iVar4 = iVar5;
      if (iVar5 < 0) {
        iVar4 = -iVar5;
      }
      iStack_7c = iVar5;
      iStack_3c = iStack_44;
      iStack_38 = iStack_68;
      if (iVar4 < iVar3) {
        iStack_60 = iStack_28 + 3;
        if (iStack_80 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 2;
          iStack_6c = iStack_34 + -4;
          iStack_64 = iStack_44;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 3;
          iStack_6c = iStack_44;
          iStack_64 = iStack_2c + 3;
        }
      }
      else {
        iStack_40 = iStack_68;
        sub_0800FDFA(&iStack_80,param_2);
        iStack_6c = iStack_80;
        iStack_64 = iStack_78;
        if (iVar5 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 1;
          iStack_68 = iStack_30;
          iStack_60 = iStack_7c;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 0;
          iStack_68 = iStack_30;
          iStack_60 = iStack_28 + -6;
        }
      }
      uStack_5c = *(undefined1 *)(param_2 + 0x10);
      puStack_54 = &gUnknown_086B8098;
      uStack_58 = 0x600;
      auStack_70[0] = 0;
      iVar3 = *piVar1;
      iStack_50 = param_2;
      iStack_40 = param_2;
      iVar3 = __call_via_r3(piVar1,0,auStack_70,*(int *)(iVar3 + 0x24) + iVar3);
      if (iVar3 != 0) {
        iVar3 = sub_0803FACC(2);
        sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0803CD1E @ 0x0803CD1E */

undefined4 * sub_0803CD1E(void)

{
  return &DAT_030032f8;
}


/* sub_0803CD44 @ 0x0803CD44 */

void sub_0803CD44(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0803CD52 @ 0x0803CD52 */

void sub_0803CD52(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_1c;
  int iStack_18;
  
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  uVar1 = uVar2 >> 3;
  *(char *)((int)param_2 + 0x11) = (char)uVar1;
  if ((*(int *)(param_1 + 4) == 0) && (uVar2 == 0x18)) {
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (iVar3 < 0x600) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    iStack_1c = (param_2[0x68] >> 8) + *(int *)(&DAT_0877c4d4 + (uint)*(byte *)(param_2 + 4) * 8);
    iStack_18 = (param_2[0x69] >> 8) + *(int *)(&DAT_0877c4d8 + (uint)*(byte *)(param_2 + 4) * 8);
    uVar4 = sub_08036FA2(0,&iStack_1c,param_2,2);
    *(undefined4 *)(param_1 + 4) = uVar4;
    sub_0801191A(&DAT_03001c4c,uVar4);
  }
  if (*(int *)param_2[0x14] <= (int)(uint)uVar1) {
    *(char *)((int)param_2 + 0x11) = '\x03' - (char)((int)((uVar1 + 1) * -0x80000000) >> 0x1f);
  }
  if (0xb4 < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0803CE0E @ 0x0803CE0E */

bool sub_0803CE0E(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D7D0;
    }
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,puVar1);
  }
  return *(int *)(*(int *)(param_2 + 0x58) + 0xa0) != *(int *)(param_2 + 0x50);
}


/* sub_0803CE52 @ 0x0803CE52 */

void sub_0803CE52(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C20C;
  }
  return;
}


/* sub_0803CE70 @ 0x0803CE70 */

undefined4 * sub_0803CE70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804BC50;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0803CE94 @ 0x0803CE94 */

void sub_0803CE94(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 500) + 0x1a4);
  *(int *)(param_2 + 0x1a0) = *(int *)(*(int *)(param_2 + 500) + 0x1a0) + 0x1000;
  *(int *)(param_2 + 0x1a4) = iVar1 + -0x2800;
  iVar1 = *(int *)(param_2 + 0x1f8);
  iVar2 = *(int *)(*(int *)(param_2 + 500) + 0x1a4);
  *(int *)(iVar1 + 0x1a0) = *(int *)(*(int *)(param_2 + 500) + 0x1a0) + -0xc00;
  *(int *)(iVar1 + 0x1a4) = iVar2 + -0x1500;
  iVar1 = *(int *)(*(int *)(param_2 + 0x1f8) + 0x1f8);
  iVar2 = *(int *)(*(int *)(param_2 + 500) + 0x1a4);
  *(int *)(iVar1 + 0x1a0) = *(int *)(*(int *)(param_2 + 500) + 0x1a0) + 0x2c00;
  *(int *)(iVar1 + 0x1a4) = iVar2 + -0x1500;
  *(char *)(param_2 + 8) = *(char *)(*(int *)(param_2 + 500) + 8) + -1;
  return;
}


/* sub_0803CF46 @ 0x0803CF46 */

void sub_0803CF46(undefined4 param_1,int param_2)

{
  int *piVar1;
  int local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  local_1c = 0xffffff00;
  sub_08050484(auStack_18,0xfffffffe);
  sub_08050484(auStack_14,0xffffffff);
  sub_0803CE94(param_1,param_2);
  *(int *)(param_2 + 0x1a4) =
       *(int *)(param_2 + 0x1a4) +
       *(int *)(auStack_18 + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4);
  piVar1 = (int *)(*(int *)(param_2 + 0x1f8) + 0x1a4);
  *piVar1 = *piVar1 + *(int *)(auStack_18 + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4
                              );
  piVar1 = (int *)(*(int *)(*(int *)(param_2 + 0x1f8) + 0x1f8) + 0x1a4);
  *piVar1 = *piVar1 + *(int *)(auStack_18 + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4
                              );
  return;
}


/* sub_0803CFC2 @ 0x0803CFC2 */

void sub_0803CFC2(undefined4 param_1,int param_2)

{
  int *piVar1;
  int local_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  local_20 = 0;
  sub_08050484(auStack_1c,1);
  sub_08050484(auStack_18,0);
  sub_08050484(auStack_14,0xffffffff);
  sub_0803CE94(param_1,param_2);
  *(int *)(param_2 + 0x1a4) =
       *(int *)(param_2 + 0x1a4) +
       *(int *)(auStack_1c + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4);
  piVar1 = (int *)(*(int *)(param_2 + 0x1f8) + 0x1a4);
  *piVar1 = *piVar1 + *(int *)(auStack_1c + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4
                              );
  piVar1 = (int *)(*(int *)(*(int *)(param_2 + 0x1f8) + 0x1f8) + 0x1a4);
  *piVar1 = *piVar1 + *(int *)(auStack_1c + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4
                              );
  return;
}


/* sub_0803D046 @ 0x0803D046 */

void sub_0803D046(undefined4 param_1,int param_2)

{
  int *piVar1;
  int local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  local_1c = 0xf00;
  sub_08050484(auStack_18,0xfffffffd);
  sub_08050484(auStack_14,0xfffffffb);
  sub_0803CE94(param_1,param_2);
  *(int *)(param_2 + 0x1a4) =
       *(int *)(param_2 + 0x1a4) +
       *(int *)(auStack_18 + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4);
  piVar1 = (int *)(*(int *)(param_2 + 0x1f8) + 0x1a4);
  *piVar1 = *piVar1 + *(int *)(auStack_18 + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4
                              );
  piVar1 = (int *)(*(int *)(*(int *)(param_2 + 0x1f8) + 0x1f8) + 0x1a4);
  *piVar1 = *piVar1 + *(int *)(auStack_18 + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4
                              );
  return;
}


/* sub_0803D0C4 @ 0x0803D0C4 */

undefined4 sub_0803D0C4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 500);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(iVar1 + 0x58) + 0x78) == *(int *)(iVar1 + 0x50)) {
    sub_0803CF46();
  }
  else if (*(int *)(*(int *)(iVar1 + 0x58) + 0xa0) == *(int *)(iVar1 + 0x50)) {
    sub_0803D046();
  }
  else {
    sub_0803CFC2();
  }
  return 0;
}


/* sub_0803D0FA @ 0x0803D0FA */

undefined4 * sub_0803D0FA(void)

{
  return &DAT_030032fc;
}


/* sub_0803D110 @ 0x0803D110 */

undefined4 sub_0803D110(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
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
  int iStack_18;
  
  if (DAT_03001c34 == 0) {
    uVar1 = 0;
  }
  else {
    sub_0800FDFA(&iStack_4c);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800FDFA(&iStack_34,param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iVar2 = iStack_1c;
    if (iStack_1c < 0) {
      iVar2 = -iStack_1c;
    }
    iVar3 = iStack_18;
    if (iStack_18 < 0) {
      iVar3 = -iStack_18;
    }
    uVar5 = 3;
    iStack_20 = 0;
    iStack_24 = 0;
    if (iVar3 < iVar2) {
      if (iVar3 < 3) {
        iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
        if (iVar2 != 0) {
          __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        }
        if (iStack_1c < 1) {
          uVar5 = 2;
        }
        *(undefined1 *)(param_2 + 4) = uVar5;
        return 1;
      }
      if (iStack_18 < 1) {
        *(undefined1 *)(param_2 + 4) = 1;
        iStack_20 = -*(int *)(param_1 + 4);
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
        iStack_20 = *(int *)(param_1 + 4);
      }
    }
    else {
      if (iStack_18 < 0) {
        iStack_1c = iStack_1c + 0xc;
      }
      else {
        iStack_1c = iStack_1c + -8;
      }
      iStack_2c = iStack_1c;
      if (iStack_1c < 0) {
        iStack_2c = -iStack_1c;
      }
      iStack_28 = iVar3;
      if (iStack_2c < 3) {
        iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
        if (iVar2 != 0) {
          __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        }
        *(bool *)(param_2 + 4) = iStack_18 < 1;
        return 1;
      }
      iVar2 = iStack_18;
      if (iStack_1c < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        iStack_24 = -*(int *)(param_1 + 4);
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        iStack_24 = *(int *)(param_1 + 4);
      }
    }
    iVar4 = param_2[0x16];
    iVar2 = sub_08000158(0x4e,iVar3,iVar2);
    if ((((iVar2 == iVar4) || (iVar2 = sub_08000158(0x11), iVar2 == iVar4)) ||
        (iVar2 = sub_08000158(0x4c), iVar2 == iVar4)) &&
       ((*(short *)((int)param_2 + 0x12) == 0 || (*(short *)((int)param_2 + 0x12) == 0x10)))) {
      sub_0803E378(&DAT_03003e5c,&DAT_08319518,0x40,0);
    }
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iStack_3c = param_2[0x68] + iStack_24;
    iStack_38 = param_2[0x69] + iStack_20;
    iStack_34 = iStack_3c;
    iStack_30 = iStack_38;
    iStack_2c = iStack_3c;
    iStack_28 = iStack_38;
    iVar2 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar2 != 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      uVar1 = 1;
    }
    else {
      iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      param_2[0x68] = iStack_2c;
      param_2[0x69] = iStack_28;
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_0803D34A @ 0x0803D34A */

undefined4 * sub_0803D34A(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A0E0;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0803D374 @ 0x0803D374 */

undefined4 sub_0803D374(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  int iStack_18;
  
  if (DAT_03001b94 == 0) {
    uVar1 = 0;
  }
  else {
    sub_0800FE78(&iStack_24);
    sub_0800FE78(&iStack_34,param_2);
    iStack_38 = iStack_30 + iStack_28 >> 1;
    iStack_48 = iStack_34 + iStack_2c >> 1;
    iStack_50 = iStack_34 + -4;
    if ((((iStack_50 < iStack_1c) && (iStack_24 < iStack_2c + 3)) && (iStack_30 < iStack_18)) &&
       (iStack_20 < iStack_28 + -6)) {
      iStack_44 = iStack_20 + iStack_18 >> 1;
      iVar3 = iStack_24 + iStack_1c >> 1;
      iVar2 = iVar3 - iStack_48;
      iStack_4c = iStack_44 - iStack_38;
      iVar4 = iVar2;
      if (iVar2 < 0) {
        iVar4 = -iVar2;
      }
      iVar5 = iStack_4c;
      if (iStack_4c < 0) {
        iVar5 = -iStack_4c;
      }
      if (iVar5 < iVar4) {
        iStack_4c = iStack_28 + 3;
        iStack_30 = iStack_38;
        if (iVar2 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 2;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 3;
          iStack_50 = iStack_48;
          iStack_48 = iStack_2c + 3;
        }
      }
      else {
        iStack_50 = iVar2;
        iStack_3c = iStack_48;
        iStack_48 = iVar3;
        iStack_40 = iStack_4c;
        sub_0800FDFA(&iStack_50,param_2);
        if (iStack_40 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 1;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 0;
          iStack_4c = iStack_28 + -6;
        }
      }
      if (((iStack_50 < iStack_1c) && (iStack_24 < iStack_48)) &&
         ((iStack_30 < iStack_18 && (iStack_20 < iStack_4c)))) {
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
  return uVar1;
}


/* sub_0803D478 @ 0x0803D478 */

undefined4 * sub_0803D478(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804B0C0;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0803D4A0 @ 0x0803D4A0 */

void sub_0803D4A0(int param_1)

{
  ushort uVar1;
  
  uVar1 = REG_KEYINPUT;
  sub_0804023C(param_1,~(uint)uVar1);
  if ((((~*(ushort *)(param_1 + 2) & 0xf) == 0) && (*(char *)(param_1 + 1) != '\0')) &&
     ((*(ushort *)(param_1 + 4) & 0xf) != 0)) {
    sub_0803FA0C();
  }
  return;
}


/* sub_0803D4D0 @ 0x0803D4D0 */

void sub_0803D4D0(void)

{
  DAT_03003488 = &DAT_02000800;
  DAT_02000800 = 0;
  DAT_02000802 = 0xfdfe;
  DAT_02000804 = 0;
  DAT_02000806 = 0;
  DAT_02000808 = 0;
  DAT_0200080a = 0;
  return;
}


/* sub_0803D4E8 @ 0x0803D4E8 */

void sub_0803D4E8(int param_1)

{
  ushort uVar1;
  
  *(undefined1 *)(param_1 + 6) = 1;
  uVar1 = *(ushort *)(param_1 + 8);
  if (*(ushort *)(param_1 + 10) == 0) {
    if (uVar1 == 0) {
      DAT_03003488 = 0;
    }
    else {
      DAT_03003488 = (uint)uVar1 * 4 + 0x2000000;
    }
  }
  else {
    *(ushort *)(&DAT_02000008 + (uint)*(ushort *)(param_1 + 10) * 4) = uVar1;
  }
  if (*(ushort *)(param_1 + 8) != 0) {
    *(undefined2 *)((uint)*(ushort *)(param_1 + 8) * 4 + 0x200000a) = *(undefined2 *)(param_1 + 10);
  }
  return;
}


/* sub_0803D520 @ 0x0803D520 */

void sub_0803D520(int param_1)

{
  if (DAT_03003488 == 0) {
    *(undefined2 *)(param_1 + 8) = 0;
  }
  else {
    *(short *)(param_1 + 8) = (short)(DAT_03003488 + -0x2000000 >> 2);
    *(short *)(DAT_03003488 + 10) = (short)(param_1 + -0x2000000 >> 2);
  }
  *(undefined2 *)(param_1 + 10) = 0;
  DAT_03003488 = param_1;
  return;
}


/* sub_0803D548 @ 0x0803D548 */

void sub_0803D548(ushort *param_1,ushort *param_2)

{
  param_1[1] = param_1[1] + param_2[1] + 2;
  *param_1 = *param_2;
  if (*param_2 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)*param_2 * 4) = param_2[2];
  }
  return;
}


/* sub_0803D56A @ 0x0803D56A */

void sub_0803D56A(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = param_2[2];
  param_1[1] = param_1[1] + param_2[1] + 2;
  *param_1 = *param_2;
  if (*param_2 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)*param_2 * 4) = param_2[2];
  }
  param_1[5] = param_2[5];
  puVar2 = param_1;
  if (param_2[5] != 0) {
    *(ushort *)(&DAT_02000008 + (uint)param_2[5] * 4) = uVar1;
    puVar2 = DAT_03003488;
  }
  DAT_03003488 = puVar2;
  param_1[4] = param_2[4];
  if (param_2[4] != 0) {
    *(ushort *)((uint)param_2[4] * 4 + 0x200000a) = uVar1;
  }
  return;
}


/* sub_0803D5B8 @ 0x0803D5B8 */

ushort * sub_0803D5B8(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  uVar3 = param_1 + 3 >> 2;
  puVar7 = (ushort *)0x0;
  uVar5 = 0x7fffffff;
  puVar8 = DAT_03003488;
  while( true ) {
    uVar4 = (uint)puVar8[1];
    if (uVar4 < uVar5) {
      if (uVar4 == uVar3) {
        sub_0803D4E8(puVar8);
        return puVar8 + 4;
      }
      if ((int)uVar3 < (int)uVar4) {
        uVar5 = uVar4;
        puVar7 = puVar8;
      }
    }
    if (puVar8[4] == 0) break;
    puVar8 = (ushort *)((uint)puVar8[4] * 4 + 0x2000000);
  }
  iVar6 = (puVar7[1] - uVar3) + -2;
  if (iVar6 < 1) {
    sub_0803D4E8(puVar7);
    return puVar7 + 4;
  }
  uVar1 = *puVar7;
  puVar7[iVar6 * 2 + 4] = uVar1;
  uVar2 = (ushort)((int)(puVar7 + iVar6 * 2 + -0xfffffc) >> 2);
  if (uVar1 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)uVar1 * 4) = uVar2;
  }
  puVar7[iVar6 * 2 + 5] = (ushort)uVar3;
  puVar7[iVar6 * 2 + 6] = (ushort)((int)(puVar7 + -0x1000000) >> 2);
  *(undefined1 *)(puVar7 + iVar6 * 2 + 7) = 1;
  *puVar7 = uVar2;
  puVar7[1] = (ushort)iVar6;
  return puVar7 + iVar6 * 2 + 8;
}


/* sub_0803D63C @ 0x0803D63C */

void sub_0803D63C(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  puVar3 = param_1 + -4;
  *(undefined1 *)(param_1 + -1) = 0;
  if (*puVar3 == 0) {
    if ((ushort)param_1[-2] == 0) {
      DAT_03003488 = puVar3;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    iVar1 = (uint)(ushort)param_1[-2] * 4;
    if ((&DAT_02000006)[iVar1] != '\0') {
      sub_0803D520(puVar3);
      return;
    }
    *(short *)(&DAT_02000002 + iVar1) = *(short *)(&DAT_02000002 + iVar1) + param_1[-3] + 2;
    *(undefined2 *)(iVar1 + 0x2000000) = 0;
    return;
  }
  iVar1 = (uint)*puVar3 * 4;
  puVar4 = (ushort *)(iVar1 + 0x2000000);
  if ((ushort)param_1[-2] == 0) {
    if ((&DAT_02000006)[iVar1] != '\0') {
      sub_0803D520(puVar3);
      return;
    }
    sub_0803D56A(puVar3,puVar4);
    return;
  }
  iVar2 = (uint)(ushort)param_1[-2] * 4;
  if ((&DAT_02000006)[iVar1] == '\0') {
    if ((&DAT_02000006)[iVar2] == '\0') {
      sub_0803D4E8(puVar4);
      *(short *)(&DAT_02000002 + iVar2) =
           param_1[-3] + *(short *)(&DAT_02000002 + iVar1) + *(short *)(&DAT_02000002 + iVar2) + 4;
      *(ushort *)(iVar2 + 0x2000000) = *puVar4;
      if (*puVar4 == 0) {
        return;
      }
      *(undefined2 *)(&DAT_02000004 + (uint)*puVar4 * 4) = param_1[-2];
      return;
    }
    sub_0803D56A(puVar3,puVar4);
  }
  else {
    if ((&DAT_02000006)[iVar2] != '\0') {
      sub_0803D520(puVar3);
      return;
    }
    *(short *)(&DAT_02000002 + iVar2) = *(short *)(&DAT_02000002 + iVar2) + param_1[-3] + 2;
    *(ushort *)(iVar2 + 0x2000000) = *puVar3;
    if (*puVar3 != 0) {
      *(undefined2 *)(&DAT_02000004 + (uint)*puVar3 * 4) = param_1[-2];
      return;
    }
  }
  return;
}


/* sub_0803D712 @ 0x0803D712 */

int sub_0803D712(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_03003488;
  while( true ) {
    iVar1 = (uint)*(ushort *)(iVar2 + 2) * 4 + iVar1;
    if (*(ushort *)(iVar2 + 8) == 0) break;
    iVar2 = (uint)*(ushort *)(iVar2 + 8) * 4 + 0x2000000;
  }
  return iVar1;
}


/* sub_0803D740 @ 0x0803D740 */

int sub_0803D740(void)

{
  int iVar1;
  ushort *puVar2;
  
  puVar2 = &DAT_02000800;
  iVar1 = 0;
  while( true ) {
    iVar1 = iVar1 + 1;
    if (*puVar2 == 0) break;
    puVar2 = (ushort *)((uint)*puVar2 * 4 + 0x2000000);
  }
  return iVar1;
}


/* sub_0803D756 @ 0x0803D756 */

int sub_0803D756(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = DAT_03003488;
  if (DAT_03003488 != 0) {
    do {
      if (uVar2 < *(ushort *)(iVar1 + 2)) {
        uVar2 = (uint)*(ushort *)(iVar1 + 2);
      }
    } while ((*(ushort *)(iVar1 + 8) != 0) &&
            (iVar1 = (uint)*(ushort *)(iVar1 + 8) * 4 + 0x2000000, iVar1 != 0));
  }
  return uVar2 << 2;
}


/* sub_0803D784 @ 0x0803D784 */

void sub_0803D784(void)

{
  int iVar1;
  undefined4 in_r3;
  
  if (DAT_03004a8c != (int *)0x0) {
    iVar1 = *(int *)(*DAT_03004a8c + 0x18);
    __call_via_r1(DAT_03004a8c,iVar1 + *DAT_03004a8c,iVar1,in_r3,in_r3);
  }
  __call_via_r1(_03000F90,*(int *)(*_03000F90 + 0x10) + *_03000F90);
  return;
}


/* sub_0803D786 @ 0x0803D786 */

void sub_0803D786(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 0x18);
    __call_via_r1(piVar1,iVar2 + *piVar1,iVar2,param_4,param_4);
  }
  __call_via_r1(_03000F90,*(int *)(*_03000F90 + 0x10) + *_03000F90);
  return;
}


/* sub_0803D7AA @ 0x0803D7AA */

int sub_0803D7AA(int param_1)

{
  ushort uVar1;
  
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(1), param_1 != 0)) {
    sub_080402D6(&DAT_03003300);
    sub_0803D4D0();
    sub_0803F3DA(&DAT_03000fb0);
    sub_080400D8();
    DAT_03000fb0 = 0x803d785;
    uVar1 = REG_IE;
    REG_IE = uVar1 | 1;
    sub_0803F1B8(&DAT_03003898);
    sub_0803FB7C(&DAT_03004a68);
    sub_0803D4A0(&DAT_03003300);
  }
  return param_1;
}


/* sub_0803D7FA @ 0x0803D7FA */

void sub_0803D7FA(void)

{
  int iVar1;
  
  do {
    __call_via_r1(_03000F90,*(int *)(*_03000F90 + 0xc) + *_03000F90);
    sub_0803F296(&DAT_03003898);
    sub_0803F3F4(&DAT_03000fb0,1);
    DAT_03000f94 = DAT_03000f94 + 1;
    sub_0803D4A0(&DAT_03003300);
    iVar1 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x14) + *DAT_03004a8c);
    if (iVar1 == 0) {
      sub_0804014E();
    }
    iVar1 = __call_via_r1(_03000F90,*(int *)(*_03000F90 + 0x14) + *_03000F90);
  } while (iVar1 == 0);
  return;
}


/* sub_0803D850 @ 0x0803D850 */

void sub_0803D850(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _03000F90;
  _03000F90 = &DAT_0300348c;
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 8);
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
  _03000F90 = param_1;
  return;
}


/* sub_0803D876 @ 0x0803D876 */

void sub_0803D876(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _03000F90;
  _03000F90 = &DAT_0300348c;
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 8);
  DAT_03003494 = param_1;
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  __call_via_r1(&DAT_03003490,*(int *)(DAT_03003490 + 4) + DAT_03003490);
  _03000F90 = &DAT_03003490;
  return;
}


/* sub_0803D8A0 @ 0x0803D8A0 */

undefined4 sub_0803D8A0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_03000f98 * 4;
  DAT_03000f98 = DAT_03000f98 + 1;
  *(int **)(&DAT_03000f9c + iVar2) = _03000F90;
  _03000F90 = &DAT_0300348c;
  __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
  _03000F90 = param_1;
  uVar3 = sub_0803D7FA();
  piVar1 = _03000F90;
  if (DAT_03000f98 != 0) {
    _03000F90 = &DAT_0300348c;
    iVar2 = *piVar1;
    __call_via_r1(piVar1,*(int *)(iVar2 + 8) + iVar2);
    DAT_03000f98 = DAT_03000f98 + -1;
    _03000F90 = *(int **)(&DAT_03000f9c + DAT_03000f98 * 4);
  }
  return uVar3;
}


/* sub_0803D8F2 @ 0x0803D8F2 */

void sub_0803D8F2(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _03000F90;
  _03000F90 = &DAT_0300348c;
  iVar2 = *piVar1;
  __call_via_r1(piVar1,*(int *)(iVar2 + 8) + iVar2);
  while (DAT_03000f98 != 0) {
    DAT_03000f98 = DAT_03000f98 + -1;
    iVar2 = **(int **)(&DAT_03000f9c + DAT_03000f98 * 4);
    __call_via_r1(*(int **)(&DAT_03000f9c + DAT_03000f98 * 4),*(int *)(iVar2 + 8) + iVar2);
  }
  return;
}


/* Wfz_LoadContainer @ 0x0803D940 */

void Wfz_LoadContainer(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int a3;
  
  a3 = *param_1;
  if (a3 == 0) {
    sub_08046D18(param_2,param_1 + 2,param_1[1],0,param_4);
  }
  else if ((a3 == 1) || (a3 == 2)) {
    sub_08049120(param_2,(int)(param_1 + 2),(int)param_1,a3);
  }
  return;
}


/* sub_0803D966 @ 0x0803D966 */

void sub_0803D966(int *param_1,int param_2,int param_3)

{
  int *a1;
  int iVar1;
  
  a1 = param_1 + 2;
  iVar1 = *param_1;
  if (param_3 == 0) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        sub_08049120(param_2,(int)a1,0,(int)param_1);
      }
      return;
    }
    sub_08049138(param_2,(int)a1,param_1[1]);
  }
  else {
    if (iVar1 == 0) {
      sub_0804918C(param_2,(int)a1,param_3,param_1[1]);
      return;
    }
    if (iVar1 == 1) {
      sub_080491A8(param_2,(int)a1,param_3,(int)param_1);
      return;
    }
  }
  return;
}


/* sub_0803D9AC @ 0x0803D9AC */

undefined * sub_0803D9AC(void)

{
  char in_NG;
  
  if (in_NG != '\0') {
    return (undefined *)0x6000000;
  }
  return &DAT_0600a000;
}


/* sub_0803D9C0 @ 0x0803D9C0 */

undefined * sub_0803D9C0(void)

{
  char in_NG;
  
  if (in_NG != '\0') {
    return &DAT_0600a000;
  }
  return (undefined *)0x6000000;
}


/* sub_0803D9CC @ 0x0803D9CC */

void sub_0803D9CC(int *param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  puVar3 = (undefined2 *)((iVar5 * 0x20 + iVar2) * 2 + param_2);
  if (iVar5 < param_1[3]) {
    do {
      iVar1 = *param_1;
      if (iVar1 < param_1[2]) {
        do {
          *puVar3 = param_3;
          puVar3 = puVar3 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      puVar3 = puVar3 + (0x20 - (iVar4 - iVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}


/* sub_0803DA10 @ 0x0803DA10 */

void sub_0803DA10(int *param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  psVar3 = (short *)((iVar5 * 0x20 + iVar2) * 2 + param_2);
  if (iVar5 < param_1[3]) {
    do {
      iVar1 = *param_1;
      if (iVar1 < param_1[2]) {
        do {
          *psVar3 = param_3;
          psVar3 = psVar3 + 1;
          param_3 = param_3 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      psVar3 = psVar3 + (0x20 - (iVar4 - iVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}


/* sub_0803DA54 @ 0x0803DA54 */

void sub_0803DA54(int param_1)

{
  sub_0804912C(param_1,0x200,0x400);
  return;
}


/* sub_0803DA62 @ 0x0803DA62 */

void sub_0803DA62(int param_1)

{
  sub_08049138(0x7000000,param_1,0x400);
  return;
}


/* sub_0803DA78 @ 0x0803DA78 */

void sub_0803DA78(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)sub_0803D5B8(0x24), param_1 != (undefined1 *)0x0)) {
    uVar1 = param_3[1];
    uVar3 = param_3[2];
    *(undefined4 *)(param_1 + 0x10) = *param_3;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = param_3[3];
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    iVar2 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(int *)(param_1 + 8) = iVar2 + 0xc;
  }
  return;
}


/* sub_0803DAAC @ 0x0803DAAC */

void sub_0803DAAC(int param_1,short *param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  do {
    psVar2 = param_2 + 1;
    if (*param_2 == 8) {
      sVar1 = *psVar2;
      psVar2 = param_2 + 2;
      param_3 = param_3 + -1;
      *(char *)(param_1 + 3) = (char)sVar1;
    }
    else {
      __call_via_r3(param_1,*param_2,param_4,*(undefined4 *)(param_1 + 0x20),uVar3);
    }
    param_3 = param_3 + -1;
    param_2 = psVar2;
  } while (0 < param_3);
  return;
}


/* sub_0803DADA @ 0x0803DADA */

void sub_0803DADA(byte *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iStack_1c;
  int iStack_18;
  
  psVar5 = param_2;
  while( true ) {
    for (; (*param_2 != 0 && (*param_2 != 10)); param_2 = param_2 + 1) {
    }
    iVar4 = (int)param_2 - (int)psVar5 >> 1;
    if (iVar4 != 0) {
      iVar2 = sub_0804001A(*(undefined4 *)(param_1 + 0xc),psVar5,iVar4);
      iStack_18 = *(int *)(param_1 + 8) + -0xc;
      bVar3 = *param_1 & 3;
      if ((*param_1 & 3) == 0) {
        iStack_1c = *(int *)(param_1 + 4);
        if (*param_2 == 0) {
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar2;
        }
      }
      else if (bVar3 == 1) {
        iStack_1c = *(int *)(param_1 + 4) - (iVar2 + 1 >> 1);
      }
      else if (bVar3 == 2) {
        iStack_1c = *(int *)(param_1 + 4) - iVar2;
      }
      do {
        psVar6 = psVar5 + 1;
        if (*psVar5 == 8) {
          sVar1 = *psVar6;
          psVar6 = psVar5 + 2;
          iVar4 = iVar4 + -1;
          param_1[3] = (byte)sVar1;
        }
        else {
          __call_via_r3(param_1,*psVar5,&iStack_1c,*(undefined4 *)(param_1 + 0x20));
        }
        iVar4 = iVar4 + -1;
        psVar5 = psVar6;
      } while (0 < iVar4);
    }
    if (((int)((uint)*param_1 << 0x1d) < 0) || (*param_2 == 0)) break;
    param_2 = param_2 + 1;
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)param_1[1];
    psVar5 = param_2;
  }
  return;
}


/* sub_0803DB7C @ 0x0803DB7C */

void sub_0803DB7C(ushort *param_1,ushort *param_2,undefined4 *param_3)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  int extraout_r1;
  int iVar7;
  int iVar8;
  undefined4 uStack_30;
  char acStack_2c [16];
  undefined4 local_1c;
  int local_18;
  
  uVar2 = *param_2;
  do {
    if (uVar2 == 0) {
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x25) {
      local_1c = 0x20;
      local_18 = 0;
      puVar4 = param_2 + 1;
      if (*puVar4 == 0x30) {
        local_1c = 0x30;
        puVar4 = param_2 + 2;
      }
      uVar2 = *puVar4;
      param_2 = puVar4;
      while (uVar2 - 0x30 < 10) {
        local_18 = local_18 * 10 + (uint)*param_2 + -0x30;
        param_2 = param_2 + 1;
        uVar2 = *param_2;
      }
      uVar2 = *param_2;
      if (uVar2 == 0) {
        *param_1 = 0;
        return;
      }
      if (uVar2 == 0x53) {
        pbVar5 = *(byte **)*param_3;
        *param_3 = (undefined4 *)*param_3 + 1;
        bVar1 = *pbVar5;
        while (bVar1 != 0) {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          *param_1 = (ushort)bVar1;
          param_1 = param_1 + 1;
          bVar1 = *pbVar5;
        }
      }
      else if (uVar2 == 100) {
        uStack_30 = 0;
        iVar6 = *(int *)*param_3;
        *param_3 = (int *)*param_3 + 1;
        iVar8 = 0;
        if (iVar6 < 0) {
          iVar6 = -iVar6;
          uStack_30 = 1;
        }
        do {
          iVar7 = iVar8;
          cVar3 = sub_0805311C(iVar6);
          acStack_2c[iVar7] = cVar3 + '0';
          iVar8 = iVar7 + 1;
          iVar6 = extraout_r1;
        } while (extraout_r1 != 0);
        if (uStack_30 != 0) {
          acStack_2c[iVar7 + 1] = '-';
          iVar8 = iVar7 + 2;
        }
        for (local_18 = local_18 - iVar8; 0 < local_18; local_18 = local_18 + -1) {
          *param_1 = (ushort)local_1c;
          param_1 = param_1 + 1;
        }
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          *param_1 = (ushort)(byte)acStack_2c[iVar8 + -1];
          param_1 = param_1 + 1;
        }
      }
      else if (uVar2 == 0x73) {
        puVar4 = *(ushort **)*param_3;
        *param_3 = (undefined4 *)*param_3 + 1;
        uVar2 = *puVar4;
        while (uVar2 != 0) {
          uVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          *param_1 = uVar2;
          param_1 = param_1 + 1;
          uVar2 = *puVar4;
        }
      }
    }
    else {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
    }
    param_2 = param_2 + 1;
    uVar2 = *param_2;
  } while( true );
}


/* sub_0803DC96 @ 0x0803DC96 */

void sub_0803DC96(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_220 [512];
  undefined4 *local_20;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_20 = &uStack_8;
  uStack_8 = param_3;
  uStack_4 = param_4;
  sub_0803DB7C(auStack_220,param_2,&local_20);
  sub_0803DADA(param_1,auStack_220);
  return;
}


/* sub_0803DCC4 @ 0x0803DCC4 */

void sub_0803DCC4(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  ushort auStack_114 [128];
  
  iVar2 = sub_0803FFE8(*(undefined4 *)(param_1 + 0xc),param_3);
  if (param_2 < iVar2) {
    puVar3 = auStack_114;
    iVar2 = (*(ushort *)
              (**(int **)(param_1 + 0xc) + (uint)*(ushort *)(**(int **)(param_1 + 0xc) + 0x5c) * 2)
            + 1) * 2;
    while( true ) {
      uVar1 = *param_3;
      if (uVar1 < 0xff) {
        iVar5 = **(int **)(param_1 + 0xc);
        uVar4 = (uint)*(ushort *)(iVar5 + (uint)*(ushort *)(iVar5 + (uint)uVar1 * 2) * 2);
      }
      else {
        uVar4 = (*(int **)(param_1 + 0xc))[1];
      }
      iVar2 = iVar2 + uVar4 + 1;
      if (param_2 < iVar2) break;
      param_3 = param_3 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    }
    *puVar3 = 0x2e;
    puVar3[1] = 0x2e;
    puVar3[2] = 0;
    sub_0803DADA(param_1,auStack_114);
  }
  else {
    sub_0803DADA(param_1,param_3);
  }
  return;
}


/* sub_0803DD38 @ 0x0803DD38 */

void sub_0803DD38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_124 [256];
  undefined4 *puStack_24;
  undefined4 uStack_4;
  
  puStack_24 = &uStack_4;
  uStack_4 = param_4;
  sub_0803DB7C(auStack_124,param_3,&puStack_24);
  sub_0803DCC4(param_1,param_2,auStack_124);
  return;
}


/* sub_0803DD3A @ 0x0803DD3A */

void sub_0803DD3A(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_00000008;
  undefined1 auStack_114 [256];
  undefined1 *local_14;
  
  local_14 = &stack0x0000000c;
  sub_0803DB7C(auStack_114,in_stack_00000008,&local_14);
  sub_0803DCC4(param_1,param_2,auStack_114);
  return;
}


/* sub_0803DD66 @ 0x0803DD66 */

void sub_0803DD66(char *param_1,int param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iStack_28;
  int local_24;
  char *pcStack_20;
  int iStack_1c;
  ushort *puStack_18;
  
  local_24 = *(int *)(param_1 + 8) + -0xc;
  pcStack_20 = param_1;
  iStack_1c = param_2;
  puStack_18 = param_3;
  do {
    puVar7 = param_3;
    if (*(int *)(param_1 + 0x1c) <= local_24) {
      return;
    }
    while( true ) {
      if (*puVar7 == 0) {
        return;
      }
      if (*puVar7 != 0x20) break;
      puVar7 = puVar7 + 1;
    }
    iVar3 = 0;
    puVar6 = (ushort *)0x0;
    param_3 = puVar7;
    while (uVar5 = (uint)*param_3, uVar5 != 0) {
      if (uVar5 == 10) {
        param_3 = param_3 + 1;
        break;
      }
      if (uVar5 == 8) {
        param_3 = param_3 + 2;
      }
      else {
        if (uVar5 == 0x20) {
          puVar6 = param_3;
        }
        if (uVar5 < 0xff) {
          iVar4 = **(int **)(param_1 + 0xc);
          uVar5 = (uint)*(ushort *)(iVar4 + (uint)*(ushort *)(iVar4 + uVar5 * 2) * 2);
        }
        else {
          uVar5 = (*(int **)(param_1 + 0xc))[1];
        }
        iVar3 = uVar5 + 1 + iVar3;
        if (iStack_1c < iVar3) {
          if (puVar6 != (ushort *)0x0) {
            param_3 = puVar6;
          }
          break;
        }
        param_3 = param_3 + 1;
      }
    }
    iVar3 = (int)param_3 - (int)puVar7 >> 1;
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x14) + -0x10 < local_24)) {
      iVar4 = sub_0804001A(*(undefined4 *)(param_1 + 0xc),puVar7,iVar3);
      cVar1 = *param_1;
      if (cVar1 == '\0') {
        iStack_28 = *(int *)(param_1 + 4);
      }
      else if (cVar1 == '\x01') {
        iStack_28 = *(int *)(param_1 + 4) - (iVar4 + 1 >> 1);
      }
      else if (cVar1 == '\x02') {
        iStack_28 = *(int *)(param_1 + 4) - iVar4;
      }
      do {
        puVar6 = puVar7 + 1;
        if (*puVar7 == 8) {
          uVar2 = *puVar6;
          puVar6 = puVar7 + 2;
          iVar3 = iVar3 + -1;
          param_1[3] = (char)uVar2;
        }
        else {
          __call_via_r3(param_1,*puVar7,&iStack_28,*(undefined4 *)(param_1 + 0x20));
        }
        iVar3 = iVar3 + -1;
        puVar7 = puVar6;
      } while (0 < iVar3);
    }
    local_24 = local_24 + (uint)(byte)param_1[1];
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)(byte)param_1[1];
  } while( true );
}


/* sub_0803DE50 @ 0x0803DE50 */

void sub_0803DE50(int param_1,undefined4 param_2)

{
  undefined4 local_c;
  int local_8;
  
  local_c = *(undefined4 *)(param_1 + 4);
  local_8 = *(int *)(param_1 + 8) + -0xc;
  __call_via_r3(param_1,param_2,&local_c,*(undefined4 *)(param_1 + 0x20));
  return;
}


/* sub_0803DE6A @ 0x0803DE6A */

void sub_0803DE6A(int param_1,short *param_2,int param_3,undefined4 *param_4)

{
  short sVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  
  for (; sVar1 = *param_2, sVar1 != 0; param_2 = param_2 + 1) {
    if (((sVar1 != 0x20) && (sVar1 != 10)) && (sVar1 != 0xb)) goto _0803DE88;
  }
  param_4[3] = 1;
_0803DE88:
  *param_4 = param_2;
  param_4[1] = param_2;
  param_4[3] = 0;
  puVar5 = (ushort *)0x0;
  uVar6 = 0;
  param_4[2] = 0;
_0803DE96:
  do {
    puVar2 = (ushort *)param_4[1];
    uVar3 = (uint)*puVar2;
    if (uVar3 == 0) {
      param_4[3] = 1;
      return;
    }
    if (uVar3 == 0x20) {
      uVar6 = param_4[2];
      puVar5 = puVar2;
    }
    else {
      if (uVar3 == 10) {
        return;
      }
      if (uVar3 == 0xb) {
        param_4[3] = 1;
        return;
      }
      if (uVar3 == 8) {
        param_4[1] = puVar2 + 2;
        goto _0803DE96;
      }
    }
    if (uVar3 < 0xff) {
      iVar4 = **(int **)(param_1 + 0xc);
      uVar3 = (uint)*(ushort *)(iVar4 + (uint)*(ushort *)(iVar4 + uVar3 * 2) * 2);
    }
    else {
      uVar3 = (*(int **)(param_1 + 0xc))[1];
    }
    iVar4 = param_4[2] + uVar3 + 1;
    if (param_3 < iVar4) {
      if (puVar5 == (ushort *)0x0) {
        return;
      }
      param_4[1] = puVar5;
      param_4[2] = uVar6;
      return;
    }
    param_4[1] = puVar2 + 1;
    param_4[2] = iVar4;
  } while( true );
}


/* sub_0803DEFA @ 0x0803DEFA */

void sub_0803DEFA(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_18 [2];
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_18[0] = &uStack_8;
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  sub_0803DB7C(param_1,param_2,local_18);
  return;
}


/* sub_0803DF12 @ 0x0803DF12 */

void sub_0803DF12(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_258 [512];
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined *puStack_4c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  REG_IME = 0;
  uStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  iStack_18 = param_4;
  sub_0803F26A(&DAT_03003898);
  sub_0803D4D0();
  REG_DISPCNT = 0x404;
  Ram04000020 = 0x100;
  DAT_04000022 = 0;
  Ram04000024 = 0;
  DAT_04000026 = 0x100;
  DAT_04000028 = 0;
  DAT_0400002c = 0;
  sub_0803F540(&uStack_58,0xf0,0xa0);
  sub_08046E40(iStack_34,0,uStack_28);
  puStack_4c = &DAT_087b5ba4;
  uStack_56 = 1;
  uStack_38 = 0x803f5a5;
  uStack_57 = 10;
  uStack_50 = 10;
  uStack_54 = 0x78;
  uStack_58 = 1;
  uStack_55 = 4;
  sub_0803DADA(&uStack_58,sub_0803E024);
  sub_0803DEFA(auStack_258,0x803e04c,param_2);
  uStack_50 = 0x1e;
  uStack_54 = 3;
  uStack_58 = 0;
  uStack_55 = 3;
  sub_0803DADA(&uStack_58,0x803e054);
  uStack_55 = 2;
  sub_0803DD66(&uStack_58,0xdc,auStack_258);
  uStack_55 = 3;
  uStack_54 = 3;
  sub_0803DADA(&uStack_58,0x803e064);
  uStack_55 = 2;
  sub_0803DC96(&uStack_58,0x803e074,uStack_1c);
  uStack_55 = 3;
  if (iStack_18 == 0) {
    uVar1 = 0x803e0a0;
  }
  else {
    uVar1 = 0x803e084;
  }
  sub_0803DADA(&uStack_58,uVar1);
  uStack_55 = 2;
  sub_0803DD66(&uStack_58,0xdc,uStack_24);
  sub_08049144(0x5000000,0x87b5b98,0x20);
  sub_08049138(0x6000000,iStack_34,0x9600);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* sub_0803DF14 @ 0x0803DF14 */

void sub_0803DF14(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_258 [512];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_38;
  int local_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int local_18;
  
  REG_IME = 0;
  uStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  sub_0803F26A(&DAT_03003898);
  sub_0803D4D0();
  REG_DISPCNT = 0x404;
  Ram04000020 = 0x100;
  DAT_04000022 = 0;
  Ram04000024 = 0;
  DAT_04000026 = 0x100;
  DAT_04000028 = 0;
  DAT_0400002c = 0;
  sub_0803F540(&local_58,0xf0,0xa0);
  sub_08046E40(local_34,0,local_28);
  local_4c = &DAT_087b5ba4;
  local_56 = 1;
  local_38 = 0x803f5a5;
  local_57 = 10;
  local_50 = 10;
  local_54 = 0x78;
  local_58 = 1;
  local_55 = 4;
  sub_0803DADA(&local_58,sub_0803E024);
  sub_0803DEFA(auStack_258,0x803e04c,param_2);
  local_50 = 0x1e;
  local_54 = 3;
  local_58 = 0;
  local_55 = 3;
  sub_0803DADA(&local_58,0x803e054);
  local_55 = 2;
  sub_0803DD66(&local_58,0xdc,auStack_258);
  local_55 = 3;
  local_54 = 3;
  sub_0803DADA(&local_58,0x803e064);
  local_55 = 2;
  sub_0803DC96(&local_58,0x803e074,local_1c);
  local_55 = 3;
  if (local_18 == 0) {
    uVar1 = 0x803e0a0;
  }
  else {
    uVar1 = 0x803e084;
  }
  sub_0803DADA(&local_58,uVar1);
  local_55 = 2;
  sub_0803DD66(&local_58,0xdc,uStack_24);
  sub_08049144(0x5000000,0x87b5b98,0x20);
  sub_08049138(0x6000000,local_34,0x9600);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* sub_0803E024 @ 0x0803E024 */

undefined8 sub_0803E024(void)

{
  int unaff_r4;
  
  return CONCAT44(unaff_r4 << 5,unaff_r4 << 6);
}


/* sub_0803E0B4 @ 0x0803E0B4 */

void sub_0803E0B4(void)

{
  return;
}


/* sub_0803E0B6 @ 0x0803E0B6 */

void sub_0803E0B6(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = (uint)*(byte *)(param_1 + 4);
  if ((int)(uVar1 << 0x1f) < 0) {
    if ((int)(uVar1 << 0x1b) < 0) {
      iVar2 = (uint)*(byte *)((int)param_1 + 0x12) * (uint)*(byte *)(param_1 + 0xd);
      uVar5 = iVar2 * (0x40 - *(char *)((int)param_1 + 0x13)) >> 10;
      uVar3 = iVar2 * (*(char *)((int)param_1 + 0x13) + 0x40) >> 10;
      *(short *)(param_1 + 3) = (short)uVar5;
      *(short *)((int)param_1 + 0xe) = (short)uVar3;
      if ((uVar3 & 0xffff) == 0 && (uVar5 & 0xffff) == 0) {
        param_1[6] = 0x803e0b5;
      }
      else {
        param_1[6] = &_03000868;
      }
    }
    if ((int)(uVar1 << 0x1c) < 0) {
      puVar4 = (undefined4 *)param_1[10];
      param_1[2] = *puVar4;
      param_1[8] = (uint)*(ushort *)((int)puVar4 + 6) << 0xe;
      param_1[9] = (uint)*(ushort *)(puVar4 + 2) << 0xe;
      *(undefined2 *)(param_1 + 5) = *(undefined2 *)((int)puVar4 + 10);
      *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)(puVar4 + 1);
    }
    if ((int)(uVar1 << 0x1d) < 0) {
      *param_1 = 0;
      *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
    }
    if ((int)(uVar1 << 0x1e) < 0) {
      uVar1 = ((uint)*(ushort *)(param_1 + 5) * param_1[0xc] >> 0xe) * 0x1063 + 0x7ff >> 0xc;
      param_1[7] = uVar1;
      if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1d) < 0) {
        param_1[1] = -uVar1;
      }
      else {
        param_1[1] = uVar1;
      }
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}


/* sub_0803E152 @ 0x0803E152 */

void sub_0803E152(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 4) << 0x1f) < 0) {
    if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1f) < 0) {
      if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1e) < 0) {
        do {
          iVar1 = *param_1;
          iVar2 = iVar1 + param_3 * param_1[1];
          if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1d) < 0) {
            if (param_1[8] <= iVar2) {
              __call_via_r3(param_1,param_2,param_3,param_1[6],param_4);
              *param_1 = iVar2;
              return;
            }
            iVar1 = (iVar1 + param_1[7] + -1) - param_1[8];
            software_interrupt(6);
            param_4 = (param_1[8] * 2 - *param_1) + iVar1 * param_1[7];
            __call_via_r3(param_1,param_2,iVar1,param_1[6]);
            *param_1 = param_4;
            *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
            param_1[1] = param_1[7];
          }
          else {
            if (iVar2 < param_1[9]) {
              __call_via_r3(param_1,param_2,param_3,param_1[6],param_4);
              *param_1 = iVar2;
              return;
            }
            iVar1 = (param_1[9] + param_1[7] + -1) - iVar1;
            software_interrupt(6);
            param_4 = ((param_1[9] * 2 - *param_1) - iVar1 * param_1[7]) + -1;
            __call_via_r3(param_1,param_2,iVar1,param_1[6]);
            *param_1 = param_4;
            *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) | 4;
            param_1[1] = -param_1[7];
          }
          param_2 = iVar1 * 4 + param_2;
          param_3 = param_3 - iVar1;
        } while (0 < param_3);
      }
      else {
        do {
          iVar1 = *param_1 + param_3 * param_1[1];
          if (iVar1 < param_1[9]) {
            __call_via_r3(param_1,param_2,param_3,param_1[6],param_4);
            *param_1 = iVar1;
            return;
          }
          iVar1 = (param_1[9] + param_1[7] + -1) - *param_1;
          software_interrupt(6);
          param_4 = (*param_1 + iVar1 * param_1[7]) - (param_1[9] - param_1[8]);
          __call_via_r3(param_1,param_2,iVar1,param_1[6]);
          param_2 = iVar1 * 4 + param_2;
          param_3 = param_3 - iVar1;
          *param_1 = param_4;
        } while (0 < param_3);
      }
    }
    else {
      iVar1 = *param_1 + param_3 * param_1[1];
      if (iVar1 < param_1[9]) {
        __call_via_r3(param_1,param_2,param_3,param_1[6],param_4);
        *param_1 = iVar1;
      }
      else {
        software_interrupt(6);
        __call_via_r3(param_1,param_2,(param_1[9] + param_1[7] + -1) - *param_1,param_1[6],param_4);
        *(undefined1 *)(param_1 + 4) = 0;
        iVar1 = param_1[0xb];
        if (iVar1 != 0) {
          *(byte *)(iVar1 + 0x4a) = *(byte *)(iVar1 + 0x4a) & 0xfb;
        }
      }
    }
  }
  return;
}


/* sub_0803E2D6 @ 0x0803E2D6 */

void sub_0803E2D6(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0x4000;
  *(undefined1 *)(param_1 + 0x12) = param_3;
  *(undefined1 *)(param_1 + 0x13) = param_4;
  *(undefined1 *)(param_1 + 0x10) = 0x1f;
  return;
}


/* sub_0803E2EC @ 0x0803E2EC */

void sub_0803E2EC(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x40 + param_1;
    iVar1 = iVar1 + 1;
    *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) & 0xfe;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0803E302 @ 0x0803E302 */

void sub_0803E302(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xf;
  while ((iVar2 = iVar1 * 0x40 + param_1, (*(byte *)(iVar2 + 0x10) & 1) == 0 ||
         (*(int *)(iVar2 + 0x28) != param_2))) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return;
    }
  }
  param_1 = iVar1 * 0x40 + param_1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  return;
}


/* sub_0803E32C @ 0x0803E32C */

void sub_0803E32C(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xf;
  while ((((iVar1 = iVar2 * 0x40 + param_1, (*(byte *)(iVar1 + 0x10) & 1) == 0 ||
           (*(int *)(iVar1 + 0x28) != param_2)) || (*(byte *)(iVar1 + 0x12) != param_3)) ||
         (*(char *)(iVar1 + 0x13) != param_4))) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return;
    }
  }
  param_1 = iVar2 * 0x40 + param_1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  return;
}


/* sub_0803E378 @ 0x0803E378 */

int sub_0803E378(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
      param_1 = iVar1 * 0x40 + param_1;
      *(undefined4 *)(param_1 + 0x28) = param_2;
      *(undefined4 *)(param_1 + 0x30) = 0x4000;
      *(undefined1 *)(param_1 + 0x12) = param_3;
      *(undefined1 *)(param_1 + 0x13) = param_4;
      *(undefined1 *)(param_1 + 0x10) = 0x1f;
      return param_1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}


/* sub_0803E3A8 @ 0x0803E3A8 */

void sub_0803E3A8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
      sub_08049138(iVar1 * 0x40 + param_1,param_2,0x40);
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0803E3CA @ 0x0803E3CA */

int sub_0803E3CA(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((*(byte *)(iVar2 * 0x40 + param_1 + 0x10) & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return iVar1;
}


/* sub_0803E3E4 @ 0x0803E3E4 */

void sub_0803E3E4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x40;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + param_1 + 0x10) = 0;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0803E3F6 @ 0x0803E3F6 */

void sub_0803E3F6(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0803E0B6(iVar1 * 0x40 + param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0803E40C @ 0x0803E40C */

void sub_0803E40C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0803E152(iVar1 * 0x40 + param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0803E42A @ 0x0803E42A */

void sub_0803E42A(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x40 + param_1;
    *(undefined1 *)(iVar1 + 0x34) = param_2;
    iVar2 = iVar2 + 1;
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 0x10;
  } while (iVar2 < 0x10);
  return;
}


/* sub_0803E44C @ 0x0803E44C */

int sub_0803E44C(int param_1)

{
  int iVar1;
  int iVar2;
  int a1;
  int iVar3;
  
  iVar1 = sub_0803D5B8(0x400);
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x40;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar3 + iVar1 + 0x10) = 0;
  } while (iVar2 < 0x10);
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    a1 = iVar3 * 0x40 + param_1;
    if ((~*(ushort *)(a1 + 0x10) & 0x101) == 0) {
      *(byte *)(a1 + 0x10) = *(byte *)(a1 + 0x10) & 0xfe;
      sub_08049138(iVar2,a1,0x40);
      *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) | 1;
      iVar2 = iVar2 + 0x40;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return iVar1;
}


/* sub_0803E4A0 @ 0x0803E4A0 */

void sub_0803E4A0(int param_1,int param_2)

{
  int iVar1;
  int a1;
  int iVar2;
  
  iVar2 = 0;
  do {
    a1 = iVar2 * 0x40 + param_2;
    if ((~*(ushort *)(a1 + 0x10) & 0x101) == 0) {
      iVar1 = 0;
      do {
        if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
          sub_08049138(iVar1 * 0x40 + param_1,a1,0x40);
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x10);
    }
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      sub_0803D63C(param_2);
      return;
    }
  } while( true );
}


