/* Ghidra reference decompilation of code_0800884C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0800884C @ 0x0800884C */

void sub_0800884C(undefined4 param_1,int *param_2)

{
  int local_14;
  int local_10;
  
  local_14 = *param_2 >> 0x12;
  local_10 = param_2[1] >> 0x12;
  sub_08008598(param_1,&local_14);
  sub_08008192(param_1,param_2);
  sub_080086D8(param_1,param_2);
  return;
}


/* sub_0800887C @ 0x0800887C */

void sub_0800887C(int param_1,int *param_2)

{
  int local_14;
  int local_10;
  
  local_14 = *param_2 >> 0x12;
  local_10 = param_2[1] >> 0x12;
  if ((local_14 != *(int *)(param_1 + 0x50)) || (local_10 != *(int *)(param_1 + 0x54))) {
    sub_08008598(param_1,&local_14);
  }
  sub_08008192(param_1,param_2);
  sub_080086D8(param_1,param_2);
  return;
}


/* sub_080088BC @ 0x080088BC */

void sub_080088BC(void)

{
  sub_080080C0(0);
  return;
}


/* sub_080088C6 @ 0x080088C6 */

void sub_080088C6(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_080498B0;
    param_1[2] = param_3;
  }
  return;
}


/* sub_080088C8 @ 0x080088C8 */

void sub_080088C8(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_080498B0;
    param_1[2] = param_3;
  }
  return;
}


/* sub_080088E6 @ 0x080088E6 */

void sub_080088E6(int *param_1,undefined4 param_2)

{
  undefined1 auStack_810 [2048];
  
  Wfz_LoadContainer(*(undefined4 *)(param_1[2] + 0x1c),auStack_810);
  sub_08049138((int)(&DAT_0600e000 + (uint)*(byte *)(param_1 + 1) * 0x800),(int)auStack_810,0x800);
  __call_via_r2(param_1,param_2,*(int *)(*param_1 + 8) + *param_1);
  return;
}


/* sub_08008924 @ 0x08008924 */

void sub_08008924(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar5 = *(int *)(iVar4 + 4);
  iVar7 = *(int *)(iVar4 + 0x10);
  iVar8 = *(int *)(param_2 + 0x34);
  iVar2 = *(int *)(param_2 + 0x40);
  iVar4 = *(int *)(iVar4 + 0x18);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] =
       (short)(*(int *)(param_2 + 0x18) * *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc) +
               *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x40) * *(int *)(iVar3 + 0x14) >> 10);
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)(iVar6 * iVar5 + iVar7 + iVar8 + iVar2 * iVar4 >> 10);
  return;
}


/* sub_0800897A @ 0x0800897A */

void sub_0800897A(undefined1 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_1;
    *puVar1 = &_080498B0;
    puVar1[2] = param_2;
  }
  return;
}


/* sub_080089A0 @ 0x080089A0 */

int sub_080089A0(int param_1,int param_2)

{
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_2c;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      param_2 = 1;
    }
    else {
      uStack_70 = 0;
      uStack_2c = 0;
      ScriptVM_Run(&uStack_70,*(undefined4 *)(param_1 + 0x28),0);
      param_2 = iStack_6c;
    }
  }
  return param_2;
}


/* sub_080089CC @ 0x080089CC */

undefined4 sub_080089CC(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x2c) + param_2 * 4 + -4);
}


/* sub_080089D8 @ 0x080089D8 */

uint sub_080089D8(int param_1)

{
  uint uVar1;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_2c;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 >> 0x10 != 0) {
    uStack_70 = 0;
    uStack_2c = 0;
    ScriptVM_Run(&uStack_70,*(undefined4 *)(param_1 + 0x24),0);
    uVar1 = uStack_6c;
  }
  return uVar1;
}


/* Area_Lookup @ 0x080089FC */

byte * Area_Lookup(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = sub_080125E0();
  iVar3 = 0;
  pbVar2 = &gAreaTable;
  if (0 < iVar1) {
    do {
      if ((*pbVar2 == param_1) && (pbVar2[1] == param_2)) {
        return pbVar2;
      }
      pbVar2 = pbVar2 + 0x38;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  sub_0803DF14(0x8008a74,sub_08008A5C,0x3a,0,param_4);
  return (byte *)0x0;
}


/* sub_08008A36 @ 0x08008A36 */

uint sub_08008A36(int param_1)

{
  uint uVar1;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_2c;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0xc) >> 0x10 != 0) {
    local_70 = 0;
    local_2c = 0;
    ScriptVM_Run(&local_70,*(undefined4 *)(param_1 + 0xc),0);
    uVar1 = local_6c;
  }
  return uVar1;
}


/* sub_08008A5C @ 0x08008A5C */

void sub_08008A5C(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r4;
  int iVar4;
  uint uVar5;
  int unaff_r5;
  int unaff_r6;
  undefined4 *puVar6;
  undefined1 unaff_r7;
  
  *(short *)(param_4 + unaff_r5) = (short)unaff_r4;
  *(undefined1 *)(unaff_r5 + 0x15) = unaff_r7;
  *(int *)(unaff_r6 + 0x34) = param_3 + -0x54;
  bVar1 = *(byte *)(unaff_r4 + param_2);
  *(char *)(param_1 + 9) = (char)param_2;
  *(uint *)(unaff_r4 + 0x14) = (uint)bVar1;
  *(char *)(unaff_r6 + 9) = (char)unaff_r4;
  *(char *)(unaff_r4 + 1) = (char)param_4;
  iVar4 = unaff_r4 * 0x10;
  if ((unaff_r4 & 0x7ffffff) == 0) {
    sub_08012900(&DAT_03002a64,0,iVar4,param_4,param_4,iVar4,unaff_r4 << 5,unaff_r4 << 4,
                 unaff_r4 << 4);
  }
  else {
    sub_08012628();
  }
  uVar2 = sub_080089CC(*(undefined4 *)(iVar4 + 4),*(undefined1 *)(iVar4 + 2));
  sub_08009670(&DAT_030019a4,uVar2);
  uVar5 = (uint)*(byte *)(*(int *)(iVar4 + 4) + 3);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    puVar6 = (undefined4 *)(*(int *)(*(int *)(iVar4 + 4) + 0x10) + uVar5 * 8);
    iVar3 = sub_08004784(*puVar6);
    if (iVar3 != 0) {
      puVar6 = (undefined4 *)puVar6[1];
      uVar2 = __call_via_r1(puVar6,*puVar6);
      puVar6 = &DAT_03002a68 + DAT_03002a64;
      DAT_03002a64 = DAT_03002a64 + 1;
      *puVar6 = uVar2;
    }
  }
  return;
}


/* sub_08008AA0 @ 0x08008AA0 */

void sub_08008AA0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    sub_08012900(&DAT_03002a64);
  }
  else {
    sub_08012628();
  }
  uVar1 = sub_080089CC(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 2));
  sub_08009670(&DAT_030019a4,uVar1);
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 4) + 3);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + uVar3 * 8);
    iVar2 = sub_08004784(*puVar4);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)puVar4[1];
      uVar1 = __call_via_r1(puVar4,*puVar4);
      puVar4 = &DAT_03002a68 + DAT_03002a64;
      DAT_03002a64 = DAT_03002a64 + 1;
      *puVar4 = uVar1;
    }
  }
  return;
}


/* sub_08008AFE @ 0x08008AFE */

void sub_08008AFE(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 5) != '\0') {
    do {
      puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar2 * 4);
      iVar1 = sub_08004784(*puVar3);
      if (iVar1 != 0) {
        sub_0800C7E2(puVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 5));
  }
  return;
}


/* sub_08008B30 @ 0x08008B30 */

void sub_08008B30(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_fc [17];
  undefined4 uStack_b8;
  byte local_2c;
  char local_2b;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 *puStack_24;
  int iStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_28 = DAT_0e000000;
  local_27 = DAT_0e000001;
  iVar4 = 0;
  do {
    local_2c = (char)iVar4 * '>' ^ 0x9c;
    local_2b = (char)iVar4 * -0x1d + '%';
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  __iwram_end._0_1_ = 1;
  iVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x34);
  }
  *(int *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 0xc) = (uint)(*(char *)(param_2 + 8) != '\0');
  puStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  uVar1 = sub_080089A0(param_2,param_4);
  param_1[2] = uVar1;
  sub_08004A88(&DAT_03001068,*param_1,param_1[1]);
  uVar2 = sub_080089CC(*(undefined4 *)(param_1 + 4),param_1[2]);
  sub_0800953E(&DAT_030019a4,uVar2,local_1c,param_5);
  iVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 7) != '\0') {
    do {
      uVar2 = sub_0800C300(0,*(int *)(*(int *)(param_1 + 4) + 0x20) + iVar5 * 8);
      sub_0801191A(&DAT_03001c4c,uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 7));
  }
  iVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 5) != '\0') {
    do {
      puVar6 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar5 * 4);
      iVar3 = sub_08004784(*puVar6);
      if (iVar3 != 0) {
        sub_0800C7E2(puVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 5));
  }
  iVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 6) != '\0') {
    do {
      puVar6 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + iVar5 * 4);
      iVar3 = sub_08004784(*puVar6);
      if (iVar3 != 0) {
        uVar2 = sub_0800DD2C(0,puVar6);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 6));
  }
  sub_08008AA0(param_1,1);
  iVar5 = sub_080089D8(*(undefined4 *)(param_1 + 4));
  if (iVar5 == 0xff) {
    DAT_030038a9 = '\0';
  }
  else if ((DAT_030038a9 != '\x01') || (DAT_030038b0 != &gUnknown_083BB78C + iVar5 * 5)) {
    sub_0803F110();
  }
  iVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 4) != '\0') {
    do {
      puVar6 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + iVar5 * 4);
      iVar3 = sub_08004784(puVar6[1]);
      if (iVar3 != 0) {
        uVar2 = __call_via_r2(puVar6,iVar5,*puVar6);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4));
  }
  if (iVar4 != 0) {
    auStack_fc[0] = 0;
    uStack_b8 = 0;
    ScriptVM_Run(auStack_fc,iVar4,0);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x30) != 0) {
    auStack_fc[0] = 0;
    uStack_b8 = 0;
    ScriptVM_Run(auStack_fc,*(int *)(*(int *)(param_1 + 4) + 0x30),0);
  }
  return;
}


/* sub_08008D14 @ 0x08008D14 */

void sub_08008D14(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = Area_Lookup();
  sub_08008B30(param_1,uVar1,param_4,param_5,param_6);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


/* sub_08008D44 @ 0x08008D44 */

undefined4
sub_08008D44(undefined1 *param_1,undefined1 param_2,undefined1 param_3,short *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  undefined *local_18;
  
  local_20 = *param_4 + -0x70;
  local_1c = param_4[1] + -0x4c;
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = Area_Lookup();
  sub_08008B30(param_1,uVar1,&local_20,param_5,param_6);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  uVar1 = sub_0801713C(&gUnknown_086B82EC +
                       (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
  local_18 = &DAT_03001a24;
  if (DAT_03001a34 == 0) {
    uVar1 = sub_080109AA(0,uVar1,param_4,1);
    puVar2 = (undefined4 *)sub_0803D5B8(8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804D300;
      puVar2[1] = uVar1;
    }
    sub_08021094(&DAT_03002bd8,puVar2);
    sub_0801191A(&DAT_03001c4c,uVar1);
    if ((int)((uint)DAT_03001069 << 0x1e) < 0) {
      uVar4 = sub_0800B854(0);
      sub_0801191A(&DAT_03001c4c,uVar4);
    }
  }
  else {
    uVar1 = sub_080104F2(0,uVar1,param_4);
    puVar2 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804E324;
      puVar2[1] = uVar1;
      puVar2[2] = 0xffffffff;
    }
    sub_08021094(&DAT_03002bd8,puVar2);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  uVar3 = sub_08008A36(*(undefined4 *)(param_1 + 4));
  if (*(int *)(local_18 + 0x10) == 0) {
    if ((*(ushort *)(param_1 + 8) != uVar3) && (*(short *)(param_1 + 8) = (short)uVar3, uVar3 != 0))
    {
      uVar4 = sub_0800BF34(0,uVar3);
      sub_0801191A(&DAT_03001c4c,uVar4);
    }
  }
  else {
    uVar4 = sub_0800C0C8(0);
    sub_0801191A(&DAT_03001c4c,uVar4);
    *(short *)(param_1 + 8) = (short)uVar3;
  }
  return uVar1;
}


/* sub_08008E70 @ 0x08008E70 */

void sub_08008E70(undefined1 *param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined1 *puStack_24;
  short *psStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_2c = *param_2 + -0x70;
  local_28 = param_2[1] + -0x4c;
  *param_1 = 0;
  param_1[1] = 0x5a;
  puStack_24 = param_1;
  psStack_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  uVar1 = Area_Lookup(0);
  local_30 = 1;
  sub_08008B30(param_1,uVar1,&local_2c,0);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  local_30 = CONCAT22(param_2[1],*param_2 + -0x32);
  iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)sub_0803D5B8(0x2a8);
    if (puVar3 != (undefined4 *)0x0) {
      sub_08010A3A(puVar3,uStack_18,&local_30,param_8);
      *puVar3 = &_0804DD94;
    }
  }
  else {
    puVar3 = (undefined4 *)sub_0803D5B8(0x2a8);
    if (puVar3 != (undefined4 *)0x0) {
      sub_08010A3A(puVar3,local_1c,&local_30,param_7);
      *puVar3 = &_0804DB18;
    }
  }
  local_30 = CONCAT22(param_2[1],*param_2 + 0x32);
  iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)sub_0803D5B8(0x2a8);
    if (puVar4 != (undefined4 *)0x0) {
      sub_08010A3A(puVar4,local_1c,&local_30,param_7);
      *puVar4 = &_0804DB18;
    }
  }
  else {
    puVar4 = (undefined4 *)sub_0803D5B8(0x2a8);
    if (puVar4 != (undefined4 *)0x0) {
      sub_08010A3A(puVar4,uStack_18,&local_30,param_8);
      *puVar4 = &_0804DD94;
    }
  }
  iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
  puVar7 = puVar4;
  if (iVar2 != 0) {
    puVar7 = puVar3;
  }
  puVar5 = (undefined4 *)sub_0803D5B8(8);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &_0804D300;
    puVar5[1] = puVar7;
  }
  sub_08021094(&DAT_03002bd8,puVar5);
  sub_0801191A(&DAT_03001c4c,puVar3);
  sub_0801191A(&DAT_03001c4c,puVar4);
  if ((int)((uint)DAT_03001069 << 0x1e) < 0) {
    uVar1 = sub_0800B854(0);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  uVar6 = sub_08008A36(*(undefined4 *)(param_1 + 4));
  if ((*(ushort *)(param_1 + 8) != uVar6) && (*(short *)(param_1 + 8) = (short)uVar6, uVar6 != 0)) {
    uVar1 = sub_0800BF34(0,uVar6);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
  if (iVar2 == 0) {
    *param_5 = puVar4;
    *param_6 = puVar3;
  }
  else {
    *param_5 = puVar3;
    *param_6 = puVar4;
  }
  return;
}


/* Scene_Load @ 0x08009030 */

void Scene_Load(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_fc [17];
  undefined4 local_b8;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x34);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *param_1 = (char)param_2;
  param_1[1] = (char)param_3;
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  uVar2 = Area_Lookup();
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar1 = sub_080089A0(uVar2,local_18);
  param_1[2] = uVar1;
  uVar2 = sub_080089CC(*(undefined4 *)(param_1 + 4));
  sub_0800953E(&DAT_030019a4,uVar2,param_5,param_7);
  if (iVar4 != 0) {
    local_fc[0] = 0;
    local_b8 = 0;
    ScriptVM_Run(local_fc,iVar4,0);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x30) != 0) {
    local_fc[0] = 0;
    local_b8 = 0;
    ScriptVM_Run(local_fc,*(int *)(*(int *)(param_1 + 4) + 0x30),0);
  }
  if ((param_6 != 0) && (iVar4 = 0, *(char *)(*(int *)(param_1 + 4) + 4) != '\0')) {
    do {
      puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + iVar4 * 4);
      iVar3 = sub_08004784(puVar5[1]);
      if (iVar3 != 0) {
        uVar2 = __call_via_r2(puVar5,iVar4,*puVar5);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4));
  }
  return;
}


/* sub_080090E6 @ 0x080090E6 */

void sub_080090E6(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 6)) {
    uVar1 = sub_0800DCDC(0,*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + param_2 * 4));
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return;
}


/* sub_08009108 @ 0x08009108 */

void sub_08009108(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 4);
  uVar2 = __call_via_r2(puVar1,param_2,*puVar1,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_08009124 @ 0x08009124 */

int * sub_08009124(int param_1,int param_2,int *param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 4);
  piVar2 = (int *)__call_via_r2(puVar1,param_2,*puVar1);
  __call_via_r1(piVar2,*(int *)(*piVar2 + 0x3c) + *piVar2);
  piVar2[0x68] = *param_3 << 8;
  piVar2[0x69] = param_3[1] << 8;
  __call_via_r1(piVar2,*(int *)(*piVar2 + 0x40) + *piVar2);
  *(undefined1 *)(piVar2 + 4) = param_4;
  sub_0801191A(&DAT_03001c4c,piVar2);
  return piVar2;
}


/* sub_08009172 @ 0x08009172 */

void sub_08009172(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x10) + param_2 * 8 + 4);
  uVar2 = __call_via_r1(puVar1,*puVar1);
  puVar1 = &DAT_03002a68 + DAT_03002a64;
  DAT_03002a64 = DAT_03002a64 + 1;
  *puVar1 = uVar2;
  return;
}


/* sub_08009196 @ 0x08009196 */

void sub_08009196(undefined4 *param_1)

{
  DAT_03001968 = *param_1;
  DAT_0300196c = param_1[1];
  DAT_03001970 = param_1[2];
  DAT_03001974 = param_1[3];
  DAT_03001978 = param_1[4];
  sub_080210D6(&DAT_03002bd8);
  sub_080099B6(&DAT_030019a4);
  sub_08011DB4(&DAT_03001c4c);
  return;
}


/* sub_080091B8 @ 0x080091B8 */

void sub_080091B8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_e4 [17];
  undefined4 local_a0;
  
  uVar2 = DAT_03001970;
  uVar1 = DAT_0300196c;
  iVar3 = 0;
  if (param_1[1] != 0) {
    iVar3 = *(int *)(param_1[1] + 0x34);
  }
  *param_1 = DAT_03001968;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = DAT_03001978;
  param_1[3] = DAT_03001974;
  param_1[4] = uVar1;
  if (iVar3 != 0) {
    local_e4[0] = 0;
    local_a0 = 0;
    ScriptVM_Run(local_e4,iVar3,0);
  }
  sub_08009A2A(&DAT_030019a4);
  sub_08011E0E(&DAT_03001c4c);
  sub_080210F2(&DAT_03002bd8);
  return;
}


/* sub_08009204 @ 0x08009204 */

void sub_08009204(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


/* sub_08009220 @ 0x08009220 */

void sub_08009220(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = iVar3 * 4;
    piVar1 = *(int **)(param_1 + iVar4);
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
    }
    uVar2 = sub_08007A40(iVar3,0);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar4) = uVar2;
  } while (iVar3 < 4);
  return;
}


/* sub_0800924C @ 0x0800924C */

void sub_0800924C(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = iVar4 * 4;
    piVar1 = *(int **)(param_1 + iVar5);
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
    }
    puVar3 = *(undefined4 **)(iVar5 + param_2 + 0x14);
    uVar2 = __call_via_r2(iVar4,puVar3,*puVar3);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar5) = uVar2;
  } while (iVar4 < 4);
  return;
}


/* sub_0800927E @ 0x0800927E */

void sub_0800927E(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  *(undefined4 *)(param_1 + param_2 * 4) = param_3;
  return;
}


/* sub_0800929C @ 0x0800929C */

void sub_0800929C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 4) + iVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}


/* sub_080092BC @ 0x080092BC */

void sub_080092BC(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x1c);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}


/* sub_080092EA @ 0x080092EA */

undefined4 sub_080092EA(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  int local_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  local_28 = 0;
  iVar3 = 0;
  local_24 = param_1;
  uStack_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  while ((*(int *)(param_4 + iVar3 * 4) < param_3 ||
         (piVar1 = *(int **)(local_24 + iVar3 * 4), iVar2 = *piVar1,
         iVar2 = __call_via_r3(piVar1,param_2,&local_28,*(int *)(iVar2 + 0x10) + iVar2), iVar2 == 0)
         )) {
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return local_28;
    }
  }
  return local_28;
}


/* sub_08009324 @ 0x08009324 */

undefined4 sub_08009324(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((((-1 < *param_1) && (-1 < param_1[1])) && (param_1[2] < 0x801)) && (param_1[3] < 0x801)) {
    iVar2 = param_1[1] >> 3;
    do {
      if (param_1[3] + 7 >> 3 <= iVar2) {
        return 1;
      }
      for (uVar1 = *param_1 >> 3; (int)uVar1 < param_1[2] + 7 >> 3; uVar1 = uVar1 + 1) {
        if ((*(uint *)(iVar2 * 0x20 + param_2 + ((int)uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) == 0)
        {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while( true );
  }
  return 0;
}


/* sub_0800938C @ 0x0800938C */

void sub_0800938C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    sub_0804912C(0x5000000,0,0x200);
    sub_0804912C(0x5000200,0,0x200);
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  Tiles_Animate2(&DAT_03001a68,iVar1);
  sub_0800924C(&DAT_03001990,iVar1);
  Tiles_UploadLoop(&DAT_03001a68,iVar1);
  sub_0800929C(&DAT_03001990,param_1);
  iVar1 = *(int *)(iVar1 + 0x3c) * 8;
  REG_BG0CNT = *(short *)(&DAT_080716d8 + iVar1) + (short)*(undefined4 *)(param_1 + 0xb4);
  REG_BG1CNT = *(short *)(&DAT_080716da + iVar1) + (short)*(undefined4 *)(param_1 + 0xb8);
  REG_BG2CNT = *(short *)(&DAT_080716dc + iVar1) + (short)*(undefined4 *)(param_1 + 0xbc);
  REG_BG3CNT = *(short *)(&DAT_080716de + iVar1) + (short)*(undefined4 *)(param_1 + 0xc0);
  REG_BLDCNT = *(undefined2 *)(param_1 + 0xa4);
  REG_BLDALPHA = *(undefined1 *)(param_1 + 0xa1);
  DAT_04000053 = *(undefined1 *)(param_1 + 0xa0);
  REG_DISPCNT = *(undefined2 *)(param_1 + 0xa2);
  return;
}


/* sub_08009420 @ 0x08009420 */

void sub_08009420(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  sub_08011B04(&DAT_03001c4c);
  if (*(int *)(param_2 + 0x24) != 0) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      uVar1 = sub_0800D15A(0,param_2);
      sub_0801191A(&DAT_03001c4c,uVar1);
      iVar3 = 1;
      if (1 < *(int *)(param_2 + 0x24)) {
        do {
          uVar2 = sub_0800D09E(0,*(int *)(param_2 + 0x28) + iVar3 * 0x18,uVar1,iVar3,param_4);
          sub_0801191A(&DAT_03001c4c,uVar2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_2 + 0x24));
      }
    }
    else {
      uVar1 = sub_0800CE1A(0,param_2);
      sub_0801191A(&DAT_03001c4c,uVar1);
      iVar3 = 1;
      if (1 < *(int *)(param_2 + 0x24)) {
        do {
          uVar2 = sub_0800CD78(0,*(int *)(param_2 + 0x28) + iVar3 * 0x18,uVar1,iVar3);
          sub_0801191A(&DAT_03001c4c,uVar2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_2 + 0x24));
      }
    }
  }
  return;
}


/* sub_080094B8 @ 0x080094B8 */

void sub_080094B8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = *param_2;
  iVar2 = param_2[1];
  param_1[6] = iVar1 >> 10;
  param_1[7] = iVar2 >> 10;
  param_1[8] = (iVar1 >> 10) + 0xf0;
  param_1[9] = (iVar2 >> 10) + 0xa0;
  param_1[10] = *param_1 + param_1[0xc] >> 10;
  param_1[0xb] = param_1[1] + param_1[0xd] >> 10;
  return;
}


/* sub_080094F0 @ 0x080094F0 */

undefined4 sub_080094F0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_18;
  int local_14;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x9c) < (int)uVar2) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x9c);
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x9e) < (int)uVar3) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x9e);
  }
  local_18 = uVar2 << 10;
  local_14 = uVar3 << 10;
  sub_080094B8(param_1,&local_18);
  if ((uVar2 == *param_2) && (uVar3 == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0800953E @ 0x0800953E */

void sub_0800953E(int *param_1,undefined2 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  param_1[3] = 0;
  param_1[0x10] = 0;
  param_1[0x23] = (int)param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x24] = *(int *)(param_2 + 0x1e);
  if (param_1[0x2a] == 0) {
    iVar1 = sub_0803D5B8(0x2000);
    param_1[0x2a] = iVar1;
  }
  if (param_1[0x2b] == 0) {
    iVar1 = sub_0803D5B8(0x2000);
    param_1[0x2b] = iVar1;
  }
  if (param_1[0x2c] == 0) {
    iVar1 = sub_0803D5B8(0x2000);
    param_1[0x2c] = iVar1;
  }
  *(short *)(param_1 + 0x27) = param_2[4] + -1;
  *(short *)((int)param_1 + 0x9e) = param_2[5] + -1;
  param_1[0x25] = (ushort)param_2[4] + 0xef;
  param_1[0x26] = (ushort)param_2[5] + 0x9f;
  sub_08009420(param_1,param_2);
  Wfz_LoadContainer(*(undefined4 *)(param_2 + 0x1a),param_1[0x2a]);
  Wfz_LoadContainer(*(undefined4 *)(param_2 + 0x1c),param_1[0x2b]);
  sub_08049138(param_1[0x2c],param_1[0x2a],0x2000);
  sub_080210B6(&DAT_03002bd8);
  if (*(int *)(param_2 + 0x1e) == 0) {
    sub_080094F0(param_1,param_3);
    param_1[0xe] = param_1[6];
    param_1[0xf] = param_1[7];
    *(undefined2 *)((int)param_1 + 0xa2) = 8000;
  }
  else {
    iVar1 = *param_3;
    iVar2 = param_3[1];
    param_1[4] = 0x7c00;
    param_1[2] = 0xf000;
    *param_1 = (iVar1 + 0x70) * 0x400;
    param_1[1] = (iVar2 + 0x4c) * 0x400;
    sub_0802ED98(param_1);
    *(undefined2 *)((int)param_1 + 0xa2) = 0x1741;
  }
  param_1[0x2d] = (uint)*(byte *)(param_2 + 2);
  param_1[0x2e] = (uint)*(byte *)((int)param_2 + 5);
  param_1[0x2f] = (uint)*(byte *)(param_2 + 3);
  param_1[0x30] = (uint)*(byte *)((int)param_2 + 7);
  *(undefined2 *)(param_1 + 0x29) = *param_2;
  *(undefined1 *)((int)param_1 + 0xa1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)((int)param_2 + 3);
  sub_0800938C(param_1,param_4);
  return;
}


/* sub_0800965C @ 0x0800965C */

void sub_0800965C(undefined4 param_1)

{
  sub_080092BC(&DAT_03001990,param_1);
  sub_08009CC2(&DAT_03001a68);
  return;
}


/* sub_08009670 @ 0x08009670 */

void sub_08009670(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08012664(&DAT_03002a64,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),param_4
               ,param_4);
  return;
}


/* sub_08009680 @ 0x08009680 */

void sub_08009680(int param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  sub_08009220(&DAT_03001990);
  return;
}


/* sub_08009692 @ 0x08009692 */

void sub_08009692(int param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xa2) & ~(ushort)(0x100 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0xa2) = uVar1;
  REG_DISPCNT = uVar1;
  return;
}


/* sub_080096AC @ 0x080096AC */

void sub_080096AC(int param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xa2) | (ushort)(0x100 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0xa2) = uVar1;
  REG_DISPCNT = uVar1;
  return;
}


/* sub_080096C4 @ 0x080096C4 */

void sub_080096C4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 4 + param_1 + 0xb4) = param_3;
  (&REG_BG0CNT)[param_2] =
       *(short *)(&DAT_080716d8 + param_2 * 2 + *(int *)(*(int *)(param_1 + 0x8c) + 0x3c) * 8) +
       (short)param_3;
  return;
}


/* sub_080096EA @ 0x080096EA */

void sub_080096EA(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  
  uVar1 = (ushort)(1 << (param_2 & 0xff));
  if ((param_3 & 1) == 0) {
    *(ushort *)(param_1 + 0xa4) = *(ushort *)(param_1 + 0xa4) & ~uVar1;
  }
  else {
    *(ushort *)(param_1 + 0xa4) = uVar1 | *(ushort *)(param_1 + 0xa4);
  }
  uVar1 = (ushort)(0x100 << (param_2 & 0xff));
  if ((int)(param_3 * 0x40000000) < 0) {
    *(ushort *)(param_1 + 0xa4) = uVar1 | *(ushort *)(param_1 + 0xa4);
  }
  else {
    *(ushort *)(param_1 + 0xa4) = *(ushort *)(param_1 + 0xa4) & ~uVar1;
  }
  REG_BLDCNT = *(undefined2 *)(param_1 + 0xa4);
  return;
}


/* sub_08009728 @ 0x08009728 */

void sub_08009728(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(param_2 * 0x290 >> 0xc);
  *(undefined1 *)(param_1 + 0xa1) = uVar1;
  *(undefined1 *)(param_1 + 0xa0) = (char)(param_3 * 0x290 >> 0xc);
  REG_BLDALPHA = uVar1;
  DAT_04000053 = *(undefined1 *)(param_1 + 0xa0);
  return;
}


/* sub_08009744 @ 0x08009744 */

undefined4 sub_08009744(int param_1,int *param_2)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (local_10 < 0) {
    local_10 = 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x9c) < local_14 >> 10) {
    local_14 = (uint)*(ushort *)(param_1 + 0x9c) << 10;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x9e) < local_10 >> 10) {
    local_10 = (uint)*(ushort *)(param_1 + 0x9e) << 10;
  }
  sub_080094B8(param_1,&local_14);
  if ((local_14 == *param_2) && (local_10 == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_080097A6 @ 0x080097A6 */

void sub_080097A6(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  param_1[0xc] = iVar1;
  param_1[0xd] = param_2[1];
  param_1[10] = *param_1 + iVar1 >> 10;
  param_1[0xb] = param_1[1] + param_1[0xd] >> 10;
  return;
}


/* sub_080097C2 @ 0x080097C2 */

void sub_080097C2(int param_1,int *param_2,byte *param_3)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = local_14 + (uint)*param_3;
  local_8 = local_10 + (uint)param_3[1];
  sub_08009324(&local_14,*(undefined4 *)(param_1 + 0xa8));
  return;
}


/* sub_080097EA @ 0x080097EA */

void sub_080097EA(int param_1,int *param_2,byte *param_3)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2 >> 8;
  local_10 = param_2[1] >> 8;
  local_c = local_14 + (uint)*param_3;
  local_8 = local_10 + (uint)param_3[1];
  sub_08009324(&local_14,*(undefined4 *)(param_1 + 0xa8));
  return;
}


/* sub_08009816 @ 0x08009816 */

uint * sub_08009816(uint *param_1,int param_2,uint *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  int iStack_20;
  uint *puStack_1c;
  int *piStack_18;
  
  local_34 = *param_3;
  local_30 = param_3[1];
  local_2c = local_34 + *param_4;
  local_28 = local_30 + param_4[1];
  local_24 = param_1;
  iStack_20 = param_2;
  puStack_1c = param_3;
  piStack_18 = param_4;
  iVar1 = sub_08009324(&local_34,*(undefined4 *)(param_2 + 0xa8));
  if (iVar1 == 0) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    iVar1 = 0;
    do {
      iVar4 = sub_0803FAF6(iVar1);
      if (iVar4 << 0x1f < 0) {
        iVar7 = iVar4 * iVar4;
        if (iVar7 + iVar4 < iVar1) {
          iVar6 = iVar4 + 1 >> 1;
          iVar5 = (iVar6 - iVar1) + iVar7 + iVar4;
        }
        else {
          iVar5 = iVar4 + 1 >> 1;
          iVar6 = ((iVar1 - iVar7) - iVar5) + 1;
        }
      }
      else {
        iVar7 = iVar4 * iVar4;
        if (iVar7 + iVar4 < iVar1) {
          iVar6 = -iVar4 >> 1;
          iVar5 = ((iVar1 - iVar7) - iVar4) + iVar6;
        }
        else {
          iVar5 = -iVar4 >> 1;
          iVar6 = (iVar5 - iVar1) + iVar7 + iVar4;
        }
      }
      local_34 = (uVar2 & 0xfffffff8) + iVar5 * 8;
      local_30 = (uVar3 & 0xfffffff8) + iVar6 * 8;
      local_2c = local_34 + *param_4;
      local_28 = local_30 + param_4[1];
      iVar4 = sub_08009324(&local_34,*(undefined4 *)(param_2 + 0xa8));
      iVar1 = iVar1 + 1;
    } while (iVar4 == 0);
    *local_24 = local_34;
    local_24[1] = local_30;
    local_24[2] = local_2c;
    local_24[3] = local_28;
  }
  else {
    *local_24 = local_34;
    local_24[1] = local_30;
    local_24[2] = local_2c;
    local_24[3] = local_28;
  }
  return local_24 + 4;
}


/* sub_08009904 @ 0x08009904 */

void sub_08009904(int param_1,int *param_2,byte *param_3)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2 >> 8;
  local_10 = param_2[1] >> 8;
  local_c = local_14 + (uint)*param_3;
  local_8 = local_10 + (uint)param_3[1];
  sub_08009324(&local_14,*(undefined4 *)(param_1 + 0xb0));
  return;
}


/* sub_08009930 @ 0x08009930 */

void sub_08009930(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar2 = 0;
  if (-1 < *param_1) {
    uVar2 = *param_1 >> 3;
  }
  if (-1 < param_1[1]) {
    iVar6 = param_1[1] >> 3;
  }
  iVar3 = 0x100;
  iVar7 = iVar3;
  if (param_1[2] < 0x800) {
    iVar7 = param_1[2] + 7 >> 3;
  }
  if (param_1[3] < 0x800) {
    iVar3 = param_1[3] + 7 >> 3;
  }
  for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
    for (uVar1 = uVar2; (int)uVar1 < iVar7; uVar1 = uVar1 + 1) {
      puVar4 = (uint *)(((int)uVar1 >> 5) * 4 + iVar6 * 0x20 + param_2);
      uVar5 = 1 << (uVar1 & 0x1f);
      if (param_3 == 0) {
        *puVar4 = *puVar4 & ~uVar5;
      }
      else {
        *puVar4 = uVar5 | *puVar4;
      }
    }
  }
  return;
}


/* sub_080099A4 @ 0x080099A4 */

void sub_080099A4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  sub_080092EA(&DAT_03001990,param_2,param_3 >> 4,param_1 + 0xb4,param_4);
  return;
}


/* sub_080099B6 @ 0x080099B6 */

void sub_080099B6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_0803D5B8(0xc4);
  if (iVar1 != 0) {
    sub_08046DD0(iVar1,param_1,0x5c);
    sub_08047018(iVar1 + 0x5c,param_1 + 0x5c,param_1 + 0x8c,0xc,0x8050771);
    *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
    sub_08046DD0(iVar1 + 0x90,param_1 + 0x90,0x34);
  }
  DAT_030019a0 = iVar1;
  uVar2 = sub_0803D5B8(0x2000);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  uVar2 = sub_0803D5B8(0x2000);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar2 = sub_0803D5B8(0x2000);
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}


/* sub_08009A2A @ 0x08009A2A */

void sub_08009A2A(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  sub_0803D63C(param_1[0x2a]);
  sub_0803D63C(param_1[0x2b]);
  sub_0803D63C(param_1[0x2c]);
  puVar1 = DAT_030019a0;
  *param_1 = *DAT_030019a0;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  uVar2 = puVar1[7];
  uVar3 = puVar1[8];
  param_1[6] = puVar1[6];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  uVar2 = puVar1[10];
  uVar3 = puVar1[0xb];
  param_1[9] = puVar1[9];
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = puVar1[0xc];
  param_1[0xd] = puVar1[0xd];
  uVar2 = puVar1[0xf];
  uVar3 = puVar1[0x10];
  param_1[0xe] = puVar1[0xe];
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar3;
  sub_08047018(param_1 + 0x11,puVar1 + 0x11,puVar1 + 0x17,8,0x80502a1);
  sub_08047018(param_1 + 0x17,puVar1 + 0x17,puVar1 + 0x23,0xc,0x80502ad);
  param_1[0x23] = puVar1[0x23];
  sub_08046DD0(param_1 + 0x24,puVar1 + 0x24,0x34);
  sub_0803D63C(DAT_030019a0);
  DAT_030019a0 = (undefined4 *)0x0;
  sub_0800938C(param_1,0);
  return;
}


/* sub_08009AEC @ 0x08009AEC */

undefined4 * sub_08009AEC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &_0804E444;
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  uVar1 = __call_via_r0(*(undefined4 *)(param_2 + 4));
  param_1[3] = uVar1;
  return param_1;
}


/* sub_08009B08 @ 0x08009B08 */

void sub_08009B08(undefined2 *param_1,undefined4 param_2,undefined2 param_3)

{
  *param_1 = 0;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_2;
  return;
}


/* Tiles_Animate1 @ 0x08009B12 */

void Tiles_Animate1(short *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_100c [4096];
  
  sub_08049120((int)auStack_100c,*(int *)(*(int *)(param_1 + 2) + *param_1 * 4 + 4) + 4,param_3,0);
  sub_08049138((uint)*(ushort *)(*(int *)(param_1 + 2) + 2) * 0x40 + 0x6000000,(int)auStack_100c,
               (uint)*(byte *)(*(int *)(param_1 + 2) + 1) << 6);
  return;
}


/* sub_08009B4C @ 0x08009B4C */

void sub_08009B4C(ushort *param_1)

{
  int iVar1;
  undefined1 auStack_100c [4096];
  
  iVar1 = (param_1[1] - 1) * 0x10000;
  param_1[1] = (ushort)((uint)iVar1 >> 0x10);
  if (iVar1 >> 0x10 == 0) {
    iVar1 = (*param_1 + 1) * 0x10000;
    *param_1 = (ushort)((uint)iVar1 >> 0x10);
    if ((int)(uint)**(byte **)(param_1 + 2) <= iVar1 >> 0x10) {
      *param_1 = 0;
    }
    param_1[1] = (ushort)**(undefined4 **)(*(byte **)(param_1 + 2) + (short)*param_1 * 4 + 4);
    sub_08049120((int)auStack_100c,*(int *)(*(int *)(param_1 + 2) + (short)*param_1 * 4 + 4) + 4,
                 (short)*param_1 * 4,0);
    sub_08049138((uint)*(ushort *)(*(int *)(param_1 + 2) + 2) * 0x40 + 0x6000000,(int)auStack_100c,
                 (uint)*(byte *)(*(int *)(param_1 + 2) + 1) << 6);
    return;
  }
  return;
}


/* Tiles_Animate2 @ 0x08009B80 */

void Tiles_Animate2(short *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = 0;
  *param_1 = (short)(*(int *)(*(int *)(param_2 + 0x48) + 4) / 2);
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = 0x380;
  if (0 < *(int *)(param_2 + 0xc)) {
    piVar6 = (int *)(param_1 + 2);
    do {
      iVar2 = *piVar6;
      *piVar6 = iVar2 + 1;
      iVar5 = *(int *)(*(int *)(param_2 + 0x10) + iVar4 * 4);
      *(short *)(piVar6 + iVar2 * 2 + 1) = 0;
      iVar4 = iVar4 + 1;
      *(short *)((int)piVar6 + iVar2 * 8 + 6) = (short)iVar4;
      piVar6[iVar2 * 2 + 2] = iVar5;
      uVar1 = *(ushort *)(iVar5 + 2);
      if (uVar1 < uVar3) {
        uVar3 = uVar1;
      }
    } while (iVar4 < *(int *)(param_2 + 0xc));
  }
  param_1[1] = uVar3 - *param_1;
  return;
}


/* Tiles_UploadLoop @ 0x08009BD4 */

void Tiles_UploadLoop(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort local_71c [896];
  int iStack_1c;
  int local_18;
  
  iVar5 = *(int *)(*(int *)(param_2 + 0x48) + 4) / 2;
  iStack_1c = param_1;
  local_18 = param_2;
  Wfz_LoadContainer(*(undefined4 *)(param_2 + 0x48),local_71c);
  iVar1 = 1;
  if (1 < iVar5) {
    do {
      iVar2 = iVar1 + 1;
      local_71c[iVar1] = local_71c[iVar1] + local_71c[iVar1 + -1] + 1;
      iVar1 = iVar2;
    } while (iVar2 < iVar5);
  }
  iVar3 = sub_0803D5B8(0x4000);
  iVar2 = 0x6000000;
  iVar1 = 0;
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      while ((iVar4 < iVar5 && ((uint)(local_71c[iVar4] >> 8) == (uint)(local_71c[iVar1] >> 8)))) {
        iVar4 = iVar4 + 1;
      }
      Wfz_LoadContainer(*(undefined4 *)
                         (*(int *)(local_18 + 0x4c) + (uint)(local_71c[iVar1] >> 8) * 4),iVar3);
      for (; iVar1 < iVar4; iVar1 = iVar1 + 1) {
        sub_08049138(iVar2,(((uint)local_71c[iVar1] << 0x18) >> 0x12) + iVar3,0x40);
        iVar2 = iVar2 + 0x40;
      }
    } while (iVar1 < iVar5);
  }
  sub_0803D63C(iVar3);
  iVar1 = iStack_1c;
  iVar5 = 0;
  if (0 < *(int *)(iStack_1c + 4)) {
    do {
      Tiles_Animate1(iVar5 * 8 + iVar1 + 8);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iStack_1c + 4));
  }
  return;
}


/* sub_08009CC2 @ 0x08009CC2 */

void sub_08009CC2(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar1 = iVar4 * 8 + param_1;
      puVar2 = (ushort *)(iVar1 + 8);
      iVar3 = (*(ushort *)(iVar1 + 10) - 1) * 0x10000;
      *(short *)(iVar1 + 10) = (short)((uint)iVar3 >> 0x10);
      if (iVar3 >> 0x10 == 0) {
        iVar3 = (*puVar2 + 1) * 0x10000;
        *puVar2 = (ushort)((uint)iVar3 >> 0x10);
        if ((int)(uint)**(byte **)(iVar1 + 0xc) <= iVar3 >> 0x10) {
          *puVar2 = 0;
        }
        *(short *)(iVar1 + 10) =
             (short)**(undefined4 **)(*(int *)(iVar1 + 0xc) + (short)*puVar2 * 4 + 4);
        Tiles_Animate1();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  return;
}


/* sub_08009D24 @ 0x08009D24 */

undefined4 * sub_08009D24(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  *param_1 = &_08049EBC;
  iVar2 = *(short *)(param_2 + 4) * 0x100 - *(int *)(param_3 + 0x1a0);
  iVar6 = *(short *)(param_2 + 6) * 0x100 - *(int *)(param_3 + 0x1a4);
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = -iVar2;
  }
  iVar7 = iVar6;
  if (iVar6 < 0) {
    iVar7 = -iVar6;
  }
  param_1[3] = *(undefined4 *)(param_2 + 4);
  if (iVar3 < iVar7) {
    if (iVar6 < 0) {
      *(undefined1 *)((int)param_1 + 0x12) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x12) = 0;
    }
  }
  else {
    iVar7 = iVar3;
    if (iVar2 < 0) {
      *(undefined1 *)((int)param_1 + 0x12) = 2;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x12) = 3;
    }
  }
  __16__rt_sdiv(*(undefined2 *)(param_2 + 8),iVar7 << 8);
  *(undefined2 *)(param_1 + 4) = extraout_var;
  *(undefined1 *)(param_3 + 0x10) = *(undefined1 *)((int)param_1 + 0x12);
  if (*(short *)(param_1 + 4) == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 4) = 1;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 4);
    uVar4 = __16__rt_sdiv((uint)uVar1 * 0x100,iVar2 * 0x100);
    uVar5 = __16__rt_sdiv((uint)uVar1 * 0x100,iVar6 * 0x100);
    param_1[1] = uVar4;
    param_1[2] = uVar5;
  }
  return param_1;
}


/* sub_08009E18 @ 0x08009E18 */

bool sub_08009E18(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  
  piVar2 = (int *)(param_2 + 0x1a0);
  *piVar2 = *piVar2 + *(int *)(param_1 + 4);
  *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(param_1 + 8);
  sVar3 = *(short *)(param_1 + 0x10) + -1;
  *(short *)(param_1 + 0x10) = sVar3;
  if (sVar3 == 0) {
    sVar1 = *(short *)(param_1 + 0xe);
    *piVar2 = (int)*(short *)(param_1 + 0xc) << 8;
    *(int *)(param_2 + 0x1a4) = (int)sVar1 << 8;
  }
  return sVar3 == 0;
}


/* sub_08009E54 @ 0x08009E54 */

undefined4 sub_08009E54(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  
  sub_0800FDFA(&local_30);
  local_18 = param_2 + 0x68;
  local_1c = (int *)(param_1 + 4);
  local_20 = (int *)(param_1 + 8);
  *local_18 = *local_18 + *(int *)(param_1 + 4);
  param_2[0x69] = param_2[0x69] + *local_20;
  sub_0800FDFA(&local_40,param_2);
  local_44 = &local_40;
  if (DAT_03001c34 != 0) {
    sub_0800FDFA(&local_54);
    uVar4 = local_4c + 7U & 0xfffffff8;
    uVar5 = local_48 + 7U & 0xfffffff8;
    if ((((((int)(local_54 & 0xfffffff8) < local_28) && (local_30 < (int)uVar4)) &&
         ((int)(local_50 & 0xfffffff8) < local_24)) && (local_2c < (int)uVar5)) ||
       ((((int)(local_54 & 0xfffffff8) < local_38 && (local_40 < (int)uVar4)) &&
        (((int)(local_50 & 0xfffffff8) < local_34 && (local_3c < (int)uVar5)))))) {
      *local_18 = *local_18 - *local_1c;
      local_18[1] = local_18[1] - *local_20;
      return 0;
    }
  }
  sub_08009930(&local_30,DAT_03001a4c,1);
  sub_08009930(&local_30,DAT_03001a54,1);
  iVar2 = sub_08009324(local_44,DAT_03001a4c);
  if (iVar2 == 0) {
    sub_08009930(&local_30,DAT_03001a4c,0);
    sub_08009930(&local_30,DAT_03001a54,0);
    iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    *local_18 = *local_18 - *local_1c;
    local_18[1] = local_18[1] - *local_20;
    uVar3 = 0;
  }
  else {
    iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x12);
    sub_08009930(local_44,DAT_03001a4c,0);
    sub_08009930(local_44,DAT_03001a54,0);
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 == 0) {
      sub_0800FDFA(&local_54,param_2);
      sub_08009930(&local_54,DAT_03001a4c,1);
      sub_08009930(&local_54,DAT_03001a54,1);
      sVar1 = *(short *)(param_1 + 0xe);
      *local_18 = (int)*(short *)(param_1 + 0xc) << 8;
      local_18[1] = (int)sVar1 << 8;
      sub_0800FDFA(&local_54,param_2);
      sub_08009930(&local_54,DAT_03001a4c,0);
      sub_08009930(&local_54,DAT_03001a54,0);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* sub_0800A01C @ 0x0800A01C */

undefined4 sub_0800A01C(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_40 [16];
  undefined1 *local_30;
  undefined1 auStack_2c [16];
  int *local_1c;
  int *local_18;
  
  sub_0800FDFA(auStack_2c);
  local_18 = (int *)(param_1 + 4);
  piVar4 = param_2 + 0x68;
  local_1c = (int *)(param_1 + 8);
  *piVar4 = *piVar4 + *(int *)(param_1 + 4);
  param_2[0x69] = param_2[0x69] + *local_1c;
  local_30 = auStack_2c;
  sub_0800FDFA(auStack_40,param_2);
  __call_via_r3(param_2,local_30,1,*(int *)(*param_2 + 0x4c) + *param_2);
  iVar2 = __call_via_r2(param_2,auStack_40,*(int *)(*param_2 + 0x50) + *param_2);
  if (iVar2 == 0) {
    __call_via_r3(param_2,local_30,0,*(int *)(*param_2 + 0x4c) + *param_2);
    iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    *piVar4 = *piVar4 - *local_18;
    param_2[0x69] = param_2[0x69] - *local_1c;
    uVar3 = 0;
  }
  else {
    iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x12);
    __call_via_r3(param_2,auStack_40,0,*(int *)(*param_2 + 0x4c) + *param_2);
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 == 0) {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      sVar1 = *(short *)(param_1 + 0xe);
      *piVar4 = (int)*(short *)(param_1 + 0xc) << 8;
      param_2[0x69] = (int)sVar1 << 8;
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* sub_0800A134 @ 0x0800A134 */

undefined4 * sub_0800A134(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_08009D24(puVar1,param_1,param_2);
  *puVar1 = &_0804BF70;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  return puVar1;
}


/* sub_0800A168 @ 0x0800A168 */

undefined4 * sub_0800A168(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_08009D24(puVar1,param_1,param_2);
  *puVar1 = &_0804BF70;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  *puVar1 = &_0804B954;
  __call_via_r2(param_2,0xf,*(int *)(*param_2 + 0x28) + *param_2);
  return puVar1;
}


/* sub_0800A1AE @ 0x0800A1AE */

undefined4 * sub_0800A1AE(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_08009D24(puVar1,param_1,param_2);
  *puVar1 = &_0804B964;
  return puVar1;
}


/* sub_0800A1D4 @ 0x0800A1D4 */

undefined4 * sub_0800A1D4(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_08009D24(puVar1,param_1,param_2);
  *puVar1 = &_0804B308;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  return puVar1;
}


/* sub_0800A218 @ 0x0800A218 */

uint sub_0800A218(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) - 1;
  *(uint *)(param_1 + 4) = uVar1;
  return uVar1 >> 0x1f;
}


/* sub_0800A222 @ 0x0800A222 */

undefined4 * sub_0800A222(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  if (iVar2 == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 6);
  sVar1 = *(short *)(param_1 + 4);
  puVar3 = (undefined4 *)sub_0803D5B8(8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_0804D4D4;
    puVar3[1] = (int)sVar1;
  }
  return puVar3;
}


/* sub_0800A268 @ 0x0800A268 */

void sub_0800A268(void)

{
  return;
}


/* sub_0800A26A @ 0x0800A26A */

undefined4 sub_0800A26A(void)

{
  return 0;
}


/* sub_0800A26E @ 0x0800A26E */

undefined4 * sub_0800A26E(void)

{
  return &DAT_03001af0;
}


/* sub_0800A278 @ 0x0800A278 */

undefined4 * sub_0800A278(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  *param_1 = &_08049ECC;
  uVar1 = param_2 * 0x20 + 0x7ffU & 0xfffff800;
  *(char *)((int)param_1 + 5) = (char)(uVar1 >> 8);
  param_1[5] = param_2;
  uVar2 = __16__rt_sdiv(param_2,uVar1 + param_2 + -1,param_3,param_4,param_4);
  param_1[3] = uVar2;
  param_1[2] = 0;
  param_1[4] = param_2 << 4;
  return param_1;
}


/* sub_0800A2A8 @ 0x0800A2A8 */

undefined4 sub_0800A2A8(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  
  piVar4 = (int *)(param_2 + 0x1a0);
  piVar7 = param_1 + 6;
  piVar5 = param_1 + 7;
  if (param_1[2] == 0) {
    iVar2 = sub_0803FADE(param_1[4]);
    if (iVar2 != 0) {
      sub_0800FDFA(param_1 + 10,param_2);
      uVar3 = sub_0803FACC(5);
      if ((int)uVar3 < 4) {
        *(char *)(param_2 + 0x10) = (char)uVar3;
      }
      uVar6 = *piVar4 >> 8;
      iVar2 = *(int *)(param_2 + 0x1a4);
      param_1[8] = uVar6;
      param_1[9] = iVar2 >> 8;
      cVar1 = *(char *)(param_2 + 0x10);
      if (cVar1 == '\0') {
        *piVar7 = 0;
        *piVar5 = param_1[5];
        uVar6 = (uint)*(byte *)((int)param_1 + 5);
        uVar3 = 0;
      }
      else if (cVar1 == '\x01') {
        *piVar7 = 0;
        *piVar5 = -param_1[5];
        uVar6 = -(uint)*(byte *)((int)param_1 + 5);
        uVar3 = 0;
      }
      else if (cVar1 == '\x02') {
        *piVar7 = -param_1[5];
        *piVar5 = 0;
        uVar3 = -(uint)*(byte *)((int)param_1 + 5);
        uVar6 = 0;
      }
      else if (cVar1 == '\x03') {
        *piVar7 = param_1[5];
        *piVar5 = 0;
        uVar3 = (uint)*(byte *)((int)param_1 + 5);
        uVar6 = 0;
      }
      param_1[8] = param_1[8] + uVar3;
      param_1[9] = param_1[9] + uVar6;
      iVar2 = param_1[0xd] + uVar6;
      param_1[0xe] = param_1[10] + uVar3;
      param_1[0xf] = param_1[0xb] + uVar6;
      param_1[0x10] = param_1[0xc] + uVar3;
      param_1[0x11] = iVar2;
      iVar2 = __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x10) + *param_1,iVar2,
                            param_1[0xc] + uVar3,iVar2);
      if (iVar2 != 0) {
        param_1[2] = param_1[3];
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x10);
        __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x18) + *param_1);
      }
    }
    if (param_1[2] == 0) {
      return 0;
    }
  }
  *piVar4 = *piVar4 + *piVar7;
  *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *piVar5;
  *(char *)(param_2 + 0x10) = (char)param_1[1];
  iVar2 = param_1[2];
  param_1[2] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    iVar2 = param_1[9];
    *piVar4 = param_1[8] << 8;
    *(int *)(param_2 + 0x1a4) = iVar2 << 8;
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x14) + *param_1);
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x1c) + *param_1);
  }
  else {
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x18) + *param_1);
  }
  return 0;
}


/* sub_0800A432 @ 0x0800A432 */

void sub_0800A432(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1[2] != 0) {
    iVar1 = *(int *)(*param_1 + 0x14);
    __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  }
  return;
}


/* sub_0800A446 @ 0x0800A446 */

void sub_0800A446(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0800A46C @ 0x0800A46C */

void sub_0800A46C(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0800A492 @ 0x0800A492 */

void sub_0800A492(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08009324(param_1 + 0x38,DAT_03001a4c,param_3,param_4,param_4);
  return;
}


/* sub_0800A4A4 @ 0x0800A4A4 */

undefined4 * sub_0800A4A4(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x58), param_1 != (undefined4 *)0x0)) {
    sub_0800A278(param_1,*(undefined4 *)(param_2 + 4));
    *param_1 = &_0804D848;
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = *(ushort *)(param_2 + 0xe);
    param_1[0x12] = (uint)*(ushort *)(param_2 + 8);
    param_1[0x13] = (uint)uVar1;
    param_1[0x14] = (uint)uVar2;
    param_1[0x15] = (uint)uVar3;
    param_1[4] = param_1[4] << 3;
  }
  return param_1;
}


/* sub_0800A4F0 @ 0x0800A4F0 */

undefined4 sub_0800A4F0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((((*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x48)) ||
       (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x4c))) ||
      (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x40))) ||
     (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x44))) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08009324(param_1 + 0x38,DAT_03001a4c,*(int *)(param_1 + 0x44),param_4,param_4);
  }
  return uVar1;
}


/* sub_0800A526 @ 0x0800A526 */

int sub_0800A526(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if ((((DAT_03001c34 == 0) || (sub_0800FDFA(&local_24), *(int *)(param_1 + 0x40) <= local_24)) ||
      (local_1c <= *(int *)(param_1 + 0x38))) ||
     ((*(int *)(param_1 + 0x44) <= local_20 || (local_18 <= *(int *)(param_1 + 0x3c))))) {
    iVar3 = param_1 + 0x28;
    sub_08009930(iVar3,DAT_03001a4c,1);
    sub_08009930(iVar3,DAT_03001a54,1);
    iVar1 = sub_08009324(param_1 + 0x38,DAT_03001a4c);
    iVar2 = param_1 + 0x38;
    if (iVar1 == 0) {
      iVar2 = iVar3;
    }
    sub_08009930(iVar2,DAT_03001a4c,0);
    sub_08009930(iVar2,DAT_03001a54,0);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* sub_0800A5A8 @ 0x0800A5A8 */

void sub_0800A5A8(int param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  
  sub_08009930(param_1 + 0x38,DAT_03001a4c,1);
  sub_08009930(param_1 + 0x38,DAT_03001a54,1);
  sub_0800FDFA(auStack_20,param_2);
  sub_08009930(auStack_20,DAT_03001a4c,0);
  sub_08009930(auStack_20,DAT_03001a54,0);
  return;
}


/* sub_0800A5EE @ 0x0800A5EE */

undefined4 * sub_0800A5EE(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x58), param_1 != (undefined4 *)0x0)) {
    sub_0800A278(param_1,*(undefined4 *)(param_2 + 4));
    *param_1 = &_0804D4E4;
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = *(ushort *)(param_2 + 0xe);
    param_1[0x12] = (uint)*(ushort *)(param_2 + 8);
    param_1[0x13] = (uint)uVar1;
    param_1[0x14] = (uint)uVar2;
    param_1[0x15] = (uint)uVar3;
  }
  return param_1;
}


/* sub_0800A624 @ 0x0800A624 */

int sub_0800A624(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (((*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x38)) &&
      (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0x3c))) &&
     (*(int *)(param_1 + 0x40) <= *(int *)(param_1 + 0x50))) {
    if (*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x54)) {
      if (((DAT_03001c34 == 0) || (sub_0800FDFA(&iStack_24), *(int *)(param_1 + 0x40) <= iStack_24))
         || ((iStack_1c <= *(int *)(param_1 + 0x38) ||
             ((*(int *)(param_1 + 0x44) <= iStack_20 || (iStack_18 <= *(int *)(param_1 + 0x3c)))))))
      {
        iVar3 = param_1 + 0x28;
        sub_08009930(iVar3,DAT_03001a4c,1);
        sub_08009930(iVar3,DAT_03001a54,1);
        iVar1 = sub_08009324(param_1 + 0x38,DAT_03001a4c);
        iVar2 = param_1 + 0x38;
        if (iVar1 == 0) {
          iVar2 = iVar3;
        }
        sub_08009930(iVar2,DAT_03001a4c,0);
        sub_08009930(iVar2,DAT_03001a54,0);
      }
      else {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  return 0;
}


/* sub_0800A64A @ 0x0800A64A */

int sub_0800A64A(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  __call_via_r3(param_2,param_1 + 0x28,1,*(int *)(*param_2 + 0x4c) + *param_2,param_4);
  iVar1 = __call_via_r2(param_2,param_1 + 0x38,*(int *)(*param_2 + 0x50) + *param_2);
  iVar2 = param_1 + 0x38;
  if (iVar1 == 0) {
    iVar2 = param_1 + 0x28;
  }
  __call_via_r3(param_2,iVar2,0,*(int *)(*param_2 + 0x4c) + *param_2,param_4);
  return iVar1;
}


/* sub_0800A692 @ 0x0800A692 */

void sub_0800A692(int param_1,int *param_2)

{
  __call_via_r3(param_2,param_1 + 0x38,1,*(int *)(*param_2 + 0x4c) + *param_2);
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  return;
}


/* sub_0800A6B8 @ 0x0800A6B8 */

undefined4 * sub_0800A6B8(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x58), param_1 != (undefined4 *)0x0)) {
    sub_0800A278(param_1,*(undefined4 *)(param_2 + 4));
    *param_1 = &_0804D0C8;
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = *(ushort *)(param_2 + 0xe);
    param_1[0x12] = (uint)*(ushort *)(param_2 + 8);
    param_1[0x13] = (uint)uVar1;
    param_1[0x14] = (uint)uVar2;
    param_1[0x15] = (uint)uVar3;
  }
  return param_1;
}


/* sub_0800A6EE @ 0x0800A6EE */

int sub_0800A6EE(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x48)) ||
       (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x4c))) ||
      (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x40))) ||
     (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x44))) {
    iVar1 = 0;
  }
  else {
    __call_via_r3(param_2,param_1 + 0x28,1,*(int *)(*param_2 + 0x4c) + *param_2,param_4);
    iVar1 = __call_via_r2(param_2,param_1 + 0x38,*(int *)(*param_2 + 0x50) + *param_2);
    iVar2 = param_1 + 0x38;
    if (iVar1 == 0) {
      iVar2 = param_1 + 0x28;
    }
    __call_via_r3(param_2,iVar2,0,*(int *)(*param_2 + 0x4c) + *param_2,param_4);
  }
  return iVar1;
}


/* sub_0800A75A @ 0x0800A75A */

undefined4 * sub_0800A75A(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800A278(puVar1,uVar2);
    *puVar1 = &_0804B974;
  }
  return puVar1;
}


/* sub_0800A7A0 @ 0x0800A7A0 */

undefined4 * sub_0800A7A0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  puVar4 = (undefined4 *)sub_0803D5B8(0x58);
  if (puVar4 != (undefined4 *)0x0) {
    sub_0800A278(puVar4,*(undefined4 *)(param_1 + 4));
    *puVar4 = &_0804D4E4;
    uVar1 = *(ushort *)(param_1 + 10);
    uVar2 = *(ushort *)(param_1 + 0xc);
    uVar3 = *(ushort *)(param_1 + 0xe);
    puVar4[0x12] = (uint)*(ushort *)(param_1 + 8);
    puVar4[0x13] = (uint)uVar1;
    puVar4[0x14] = (uint)uVar2;
    puVar4[0x15] = (uint)uVar3;
  }
  return puVar4;
}


/* sub_0800A7DE @ 0x0800A7DE */

undefined4 * sub_0800A7DE(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800A278(puVar1,uVar2);
    *puVar1 = &_0804BF80;
  }
  return puVar1;
}


/* sub_0800A810 @ 0x0800A810 */

void sub_0800A810(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  sub_0800A4A4(0,param_1);
  return;
}


/* sub_0800A82C @ 0x0800A82C */

undefined4 * sub_0800A82C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800A278(puVar1,uVar2);
    *puVar1 = &_0804B318;
  }
  return puVar1;
}


/* sub_0800A85E @ 0x0800A85E */

void sub_0800A85E(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  sub_0800A4A4(0,param_1);
  return;
}


