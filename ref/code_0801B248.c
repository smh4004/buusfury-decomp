/* Ghidra reference decompilation of code_0801B248 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801B248 @ 0x0801B248 */

void sub_0801B248(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801B25A @ 0x0801B25A */

void sub_0801B25A(void)

{
  sub_0800DE60();
  sub_0803E378(&DAT_03003e5c,&DAT_083194dc,0x40,0);
  return;
}


/* sub_0801B27A @ 0x0801B27A */

void sub_0801B27A(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0xc));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801B296 @ 0x0801B296 */

void sub_0801B296(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  int *piStack_28;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  int *piStack_18;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 8) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 2);
  }
  else if ((uVar1 < 0x3c) &&
          (iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2),
          (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e) < 0)) {
    *(char *)((int)param_2 + 0x11) =
         '\x02' - (char)((int)((uint)*(ushort *)((int)param_2 + 0x12) << 0x1d) >> 0x1f);
    if ((*(short *)((int)param_2 + 0x12) == 8) && (1 < *(int *)(param_1 + 4))) {
      *(undefined **)(param_1 + 8) = &gUnknown_08762270 + (uint)*(byte *)(param_2 + 4) * 0x24;
      sub_0804F944(auStack_24,param_2);
      sub_08052FB4(auStack_1c,auStack_24,&gUnknown_0871DF70 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_70 = 0x37;
      uVar3 = sub_080507A0(0,*(undefined4 *)(param_1 + 8),auStack_1c,0x200);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = *(ushort *)((int)param_2 + 0x12);
      if ((0x33 < uVar1) && ((uVar1 & 3) == 0)) {
        sub_08021740(*(int *)(param_1 + 0xc),
                     *(int *)(param_1 + 8) + ((int)(uVar1 - 0x34) >> 2) * 0xc);
      }
    }
    uStack_34 = (undefined1)param_2[4];
    puStack_2c = &gUnknown_086B80D0;
    uStack_30 = *(undefined4 *)(&DAT_0871df90 + *(int *)(param_1 + 4) * 4);
    auStack_48[0] = 1;
    if (*(int *)(param_1 + 0xc) == 0) {
      puVar4 = &UNK_0871def0 + (uint)*(byte *)(param_2 + 4) * 0x10;
    }
    else {
      puVar4 = &UNK_0871df30 + (uint)*(byte *)(param_2 + 4) * 0x10;
    }
    piStack_28 = param_2;
    piStack_18 = param_2;
    sub_0804F944(&iStack_50,param_2);
    sub_08052FB4(&iStack_70,puVar4,&iStack_50);
    sub_08052FB4(&iStack_68,puVar4 + 8,&iStack_50);
    iStack_60 = iStack_70;
    iStack_5c = uStack_6c;
    iStack_58 = iStack_68;
    iStack_54 = uStack_64;
    iStack_44 = iStack_70;
    uStack_40 = uStack_6c;
    iStack_3c = iStack_68;
    uStack_38 = uStack_64;
    sub_08011C0C(&DAT_03001c4c,0,auStack_48);
    if (0 < *(int *)(param_1 + 4)) {
      iStack_50 = param_2[0x68] +
                  *(int *)(&gUnknown_0807268C + (uint)*(byte *)(param_2 + 4) * 8) * 0x60;
      iStack_4c = param_2[0x69] + *(int *)(&DAT_08072690 + (uint)*(byte *)(param_2 + 4) * 8) * 0x60;
      iStack_60 = iStack_50 >> 8;
      iStack_5c = iStack_4c >> 8;
      iStack_58 = iStack_60;
      iStack_54 = iStack_5c;
      iVar2 = sub_080097C2(&DAT_030019a4,&iStack_58,param_2 + 0x67);
      if (iVar2 != 0) {
        param_2[0x68] = iStack_50;
        param_2[0x69] = iStack_4c;
        if (*(int *)(param_1 + 0xc) != 0) {
          iVar2 = *(int *)(param_1 + 0xc);
          sub_0804F944(&iStack_60,param_2);
          sub_08052FB4(&iStack_58,&iStack_60,&gUnknown_0871DF70 + (uint)*(byte *)(param_2 + 4) * 8);
          *(int *)(iVar2 + 0x2c) = iStack_58;
          *(int *)(iVar2 + 0x30) = iStack_54;
        }
      }
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0801B470 @ 0x0801B470 */

void sub_0801B470(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801B482 @ 0x0801B482 */

void sub_0801B482(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40);
  return;
}


/* sub_0801B4A4 @ 0x0801B4A4 */

void sub_0801B4A4(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
  else {
    sub_08011944(&DAT_03001c4c);
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801B4EC @ 0x0801B4EC */

void sub_0801B4EC(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x18) {
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x1e) < 0) {
      if (*(ushort *)((int)param_2 + 0x12) < 0x14) {
        *(byte *)((int)param_2 + 0x11) =
             (byte)(((uint)*(ushort *)((int)param_2 + 0x12) << 0x1d) >> 0x1f);
      }
      else {
        *(undefined1 *)((int)param_2 + 0x11) = 2;
      }
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  else {
    if (uVar1 == 0x18) {
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        return;
      }
      sub_0804F944(auStack_20,param_2);
      sub_08052FB4(auStack_18,auStack_20,&gUnknown_0871DF9C + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_08036FA2(0,auStack_18,param_2,*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 4) = uVar3;
      sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
      sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
    }
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar4 = ((int)((uint)*(byte *)(iVar2 + 0x56) *
                  *(int *)(&DAT_0871dfbc + *(int *)(param_1 + 0xc) * 4)) >> 4) +
            *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar4;
    sub_08013504(iVar2,iVar4 >> 8);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xff;
    iVar2 = sub_08013492(iVar2);
    if ((iVar2 == 0) ||
       (iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2),
       -1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e))) {
      sub_08037106(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(char *)((int)param_2 + 0x11) =
           '\x03' - (char)((int)((uint)*(ushort *)((int)param_2 + 0x12) << 0x1c) >> 0x1f);
    }
  }
  return;
}


/* sub_0801B626 @ 0x0801B626 */

void sub_0801B626(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801B638 @ 0x0801B638 */

void sub_0801B638(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 0x14) + 3;
  *(undefined **)(param_1 + 8) = &gUnknown_08756A04 + *(int *)(param_1 + 0x14) * 0xc;
  sub_0804F944(auStack_24);
  sub_08052FB4(auStack_1c,auStack_24,&UNK_0871dfc8 + iVar1);
  uVar2 = sub_080507A0(0,**(undefined4 **)(param_1 + 8),auStack_1c,0x100,
                       *(undefined4 *)(&DAT_0871dfd0 + iVar1));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  sub_0801191A(&DAT_03001c4c,uVar2);
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0);
  return;
}


/* sub_0801B6B0 @ 0x0801B6B0 */

void sub_0801B6B0(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int aiStack_24 [2];
  undefined1 auStack_1c [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x18) {
    uVar5 = (uint)(uVar1 >> 3);
    if (3 < uVar5) {
      uVar5 = 2 - ((int)(uVar5 << 0x1f) >> 0x1f);
    }
    sub_08021740(*(undefined4 *)(param_1 + 0xc),**(int **)(param_1 + 8) + uVar5 * 0xc);
  }
  else if (uVar1 == 0x18) {
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x1e) < 0) {
      sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
      sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319428,0x40,0);
      sub_0804F944(aiStack_24,param_2);
      sub_08052FB4(auStack_1c,aiStack_24,&UNK_0871dff8 + (uint)*(byte *)(param_2 + 4) * 8);
      aiStack_24[0] = *(int *)(param_1 + 4) + -1;
      uVar3 = sub_0802DB6C(0,iVar2,param_2,auStack_1c,auStack_1c,*(undefined4 *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  else {
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar4 = ((int)((uint)*(byte *)(iVar2 + 0x56) *
                  *(int *)(&DAT_0871e018 + *(int *)(param_1 + 0x14) * 4)) >> 4) +
            *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar4;
    sub_08013504(iVar2,iVar4 >> 8);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xff;
    iVar2 = sub_08013492(iVar2);
    if ((iVar2 == 0) ||
       (iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2),
       -1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e))) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      iVar2 = *(ushort *)((int)param_2 + 0x12) + 1;
      *(short *)((int)param_2 + 0x12) = (short)iVar2;
      *(char *)((int)param_2 + 0x11) = '\x01' - (char)(iVar2 * 0x10000000 >> 0x1f);
    }
  }
  return;
}


/* sub_0801B818 @ 0x0801B818 */

void sub_0801B818(void)

{
  return;
}


/* sub_0801B81A @ 0x0801B81A */

void sub_0801B81A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0xc),&DAT_03003898,param_4,param_4);
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x10));
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801B862 @ 0x0801B862 */

void sub_0801B862(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801B874 @ 0x0801B874 */

void sub_0801B874(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0801B880 @ 0x0801B880 */

void sub_0801B880(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_3c;
  int local_38;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  
  iVar2 = 0;
  local_1c = param_2;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      puVar3 = (undefined4 *)(iVar2 * 4 + param_1 + 8 + 4);
      sub_0800EB44(*puVar3,local_1c);
      sub_080391AC(*puVar3,0x11b);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  if (iVar2 < *(int *)(param_1 + 8)) {
    local_18 = auStack_2c;
    do {
      puVar3 = (undefined4 *)(iVar2 * 4 + param_1 + 8 + 4);
      sub_0800FE34(auStack_34,*puVar3);
      sub_08052FB4(&local_3c,auStack_34,local_18);
      local_24 = local_3c >> 1;
      local_20 = local_38 >> 1;
      sub_08011944(&DAT_03001c4c,*puVar3);
      uVar1 = sub_0801952C(0,&local_24,0x38);
      sub_0801191A(&DAT_03001c4c,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801B914 @ 0x0801B914 */

void sub_0801B914(void)

{
  return;
}


/* sub_0801B916 @ 0x0801B916 */

void sub_0801B916(int param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_34 [8];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  
  local_18 = (int *)(param_1 + 8);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      local_1c = local_18 + iVar3 + 1;
      iVar4 = *local_1c;
      sub_0804F944(auStack_34,param_2);
      sub_08052FB4(&local_2c,&gUnknown_0871E024 + iVar3 * 8 + (uint)*(byte *)(param_2 + 4) * 0x18,
                   auStack_34);
      local_24 = *(int *)(iVar4 + 0x1a0) * 0x1f + local_2c * 0x100 >> 5;
      local_20 = *(int *)(iVar4 + 0x1a4) * 0x1f + local_28 * 0x100 >> 5;
      iVar3 = iVar3 + 1;
      iVar4 = *local_1c;
      *(int *)(iVar4 + 0x1a0) = local_24;
      *(int *)(iVar4 + 0x1a4) = local_20;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x28) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if (uVar1 == 0x10) {
      uVar2 = sub_08000158(0x9d);
      sub_0804F944(&local_2c,param_2);
      sub_08052FB4(&local_24,&local_2c,&UNK_0871e084 + (uint)*(byte *)(param_2 + 4) * 8);
      iVar3 = sub_08039134(0,uVar2,&DAT_08711ba4,&local_24);
      sub_0800ECDA(iVar3,0x12);
      sub_0800ED18(iVar3,&DAT_03001b10);
      *(char *)(iVar3 + 0x10) = (char)param_2[4];
      iVar4 = *local_18;
      *local_18 = iVar4 + 1;
      local_18[iVar4 + 1] = iVar3;
      sub_0801191A(&DAT_03001c4c,iVar3);
    }
  }
  else {
    if (*(int *)(param_1 + 4) < *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 8);
    }
    iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((int)((uint)*(ushort *)(iVar3 + 2) << 0x1e) < 0) {
      *(undefined1 *)((int)param_2 + 0x11) = 0;
      if (*(int *)(param_1 + 8) < 3) {
        uVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
        iVar3 = sub_080134B8(uVar2,0xa0);
        if (iVar3 != 0) {
          uVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
          sub_08013598(uVar2,0xa0);
          *(undefined2 *)((int)param_2 + 0x12) = 0;
        }
      }
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}


/* sub_0801BA98 @ 0x0801BA98 */

void sub_0801BA98(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = 0;
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_1,param_4);
  return;
}


/* sub_0801BAB0 @ 0x0801BAB0 */

undefined4 * sub_0801BAB0(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804E334;
    sub_08046DD0(param_1 + 2,param_2,0x34);
    param_1[0x11] = 0xffffffe8;
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  return param_1;
}


/* sub_0801BAE6 @ 0x0801BAE6 */

void sub_0801BAE6(int param_1,int param_2)

{
  sub_0804F944(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  sub_0800ECDA(param_2,0x13);
  return;
}


/* sub_0801BB08 @ 0x0801BB08 */

void sub_0801BB08(void)

{
  DAT_03002b34 = 1;
  sub_0803D63C();
  return;
}


/* sub_0801BB1A @ 0x0801BB1A */

void sub_0801BB1A(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [4];
  undefined4 auStack_50 [2];
  undefined *puStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined *puStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  undefined *local_1c;
  int *local_18;
  
  local_18 = param_2 + 0x70;
  param_2[0x73] = 0;
  iVar5 = *(int *)(param_1 + 0x44);
  iVar6 = iVar5 + 1;
  *(int *)(param_1 + 0x44) = iVar6;
  local_1c = &DAT_03003e5c;
  if (iVar6 < 0) {
    if (iVar5 == -0x18) {
      if ((int)(uint)*(byte *)(param_1 + 5) < *(int *)(param_1 + 8)) {
        uVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
        sub_08013598(uVar3,*(undefined4 *)(&gUnknown_0871E0A4 + (uint)*(byte *)(param_1 + 5) * 4));
      }
      sub_0803E378(local_1c,&gUnknown_0831941C,0x40,0);
    }
    DAT_03002b34 = 0;
    sub_0800ECDA(param_2,0x13);
    *(char *)((int)param_2 + 0x11) = (char)(-*(int *)(param_1 + 0x44) >> 3);
  }
  else if (iVar6 == 0) {
    iStack_20 = *(int *)(param_1 + 8);
    while( true ) {
      bVar1 = *(byte *)(param_1 + 5);
      if (iStack_20 <= (int)(uint)bVar1) break;
      iVar5 = (uint)bVar1 * 8 + param_1 + 8;
      if (*(char *)(iVar5 + 4) == '\x01') {
        iVar5 = *(int *)(iVar5 + 8);
        iVar6 = 0;
        if (0 < DAT_03002a64) {
          do {
            if ((&DAT_03002a68)[iVar6] == iVar5) {
              puStack_48 = (undefined *)(int)*(short *)(iVar5 + 4);
              iStack_44 = (int)*(short *)(iVar5 + 6);
              iStack_40 = *(short *)(iVar5 + 8) + 0xf;
              iStack_3c = *(short *)(iVar5 + 10) + 7;
              puStack_38 = puStack_48;
              piStack_34 = (int *)iStack_44;
              iStack_30 = iStack_40;
              iStack_2c = iStack_3c;
              sub_08052FB4(&iStack_40,&puStack_38,&iStack_30);
              param_2[0x68] = ((iStack_40 >> 1) + -8) * 0x100;
              param_2[0x69] = ((iStack_3c >> 1) + 4) * 0x100;
              *(undefined1 *)(param_2 + 4) = 1;
              return;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < DAT_03002a64);
        }
        *(byte *)(param_1 + 5) = bVar1 + 1;
      }
      else {
        iVar6 = 0;
        if (0 < DAT_03001c50) {
          do {
            if ((&DAT_03001c54)[iVar6] == *(int *)(iVar5 + 8)) {
              sub_0800FDFA(&iStack_30);
              param_2[0x68] = ((iStack_30 + iStack_28) / 2 + -8) * 0x100;
              param_2[0x69] = (int)(piStack_24 + 2) * 0x100;
              *(undefined1 *)(param_2 + 4) = 1;
              return;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < DAT_03001c50);
        }
        *(byte *)(param_1 + 5) = bVar1 + 1;
      }
    }
    iVar5 = *(int *)(param_1 + 0x40);
    param_2[0x68] = *(int *)(param_1 + 0x3c) << 8;
    param_2[0x69] = iVar5 << 8;
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 4);
  }
  else if (iVar6 < 0x18) {
    *(char *)((int)param_2 + 0x11) = (char)(0x18 - iVar6 >> 3);
  }
  else {
    DAT_03002b34 = 1;
    if ((int)(uint)*(byte *)(param_1 + 5) < *(int *)(param_1 + 8)) {
      iVar5 = (uint)*(byte *)(param_1 + 5) * 8 + param_1 + 8;
      if (*(char *)(iVar5 + 4) == '\x01') {
        sub_080125FA(*(undefined4 *)(iVar5 + 8));
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        *(undefined4 *)(param_1 + 0x44) = 0xffffffe8;
      }
      else {
        if (*(int *)(param_1 + 0x44) == 0x18) {
          puStack_60 = auStack_50;
          iStack_40 = CONCAT31(iStack_40._1_3_,(char)param_2[4]);
          puStack_38 = &gUnknown_086B8098;
          iStack_3c = 0x600;
          auStack_54[0] = 1;
          bVar1 = *(byte *)(param_2 + 4);
          piStack_34 = param_2;
          piStack_24 = param_2;
          sub_0804F944(auStack_5c,param_2);
          sub_08052FB4(&uStack_80,&UNK_0871e0b8 + (uint)bVar1 * 0x10,auStack_5c);
          sub_08052FB4(&uStack_78,&UNK_0871e0c0 + (uint)bVar1 * 0x10,auStack_5c);
          puVar2 = puStack_60;
          uStack_70 = uStack_80;
          uStack_6c = uStack_7c;
          uStack_68 = uStack_78;
          uStack_64 = uStack_74;
          *puStack_60 = uStack_80;
          puVar2[1] = uStack_7c;
          puVar2[2] = uStack_78;
          puVar2[3] = uStack_74;
          iVar5 = sub_08011C0C(&DAT_03001c4c,0,auStack_54);
          if (iVar5 != 0) {
            iVar5 = sub_0803FACC(2);
            sub_0803E378(local_1c,&gUnknown_083192A8 + (iVar5 + 0x30) * 0xc,0x40,0);
          }
          local_18[3] = 0;
        }
        uVar4 = *(int *)(param_1 + 0x44) + -0x18 >> 2;
        *(char *)((int)param_2 + 0x11) = (char)uVar4;
        if (*(int *)param_2[0x14] <= (int)(uVar4 & 0xff)) {
          *(undefined1 *)((int)param_2 + 0x11) = 0;
          sub_0800ECDA(param_2,0x13);
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          *(undefined4 *)(param_1 + 0x44) = 0xffffffe8;
        }
      }
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}


/* sub_0801BDD4 @ 0x0801BDD4 */

void sub_0801BDD4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0804F944(auStack_24,param_2);
  sub_08052FB4(auStack_1c,auStack_24,&gUnknown_0871E0F8 + iVar1);
  uVar2 = sub_080206B8(0,auStack_1c,*(undefined4 *)(&DAT_0871e100 + iVar1),param_2,
                       &gUnknown_0871DA68 + *(int *)(param_1 + 0xc) * 0x10);
  *(undefined4 *)(param_1 + 8) = uVar2;
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_0801BE2E @ 0x0801BE2E */

void sub_0801BE2E(int param_1)

{
  sub_0802082A(*(undefined4 *)(param_1 + 8));
  sub_0803D63C(param_1);
  return;
}


/* sub_0801BE40 @ 0x0801BE40 */

void sub_0801BE40(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        return;
      }
      sub_0804F944(auStack_20,param_2);
      sub_08052FB4(auStack_18,auStack_20,&UNK_0871e128 + (uint)*(byte *)(param_2 + 4) * 8);
      sub_080207D2(*(undefined4 *)(param_1 + 8),(char)param_2[4],auStack_18);
    }
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar3 = ((int)((uint)*(byte *)(iVar2 + 0x56) *
                  *(int *)(&DAT_0871e148 + *(int *)(param_1 + 0xc) * 4)) >> 4) +
            *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar3;
    sub_08013504(iVar2,iVar3 >> 8);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
    iVar2 = sub_08013492(iVar2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(char *)((int)param_2 + 0x11) =
           '\x01' - (char)((int)((uint)*(ushort *)((int)param_2 + 0x12) << 0x1c) >> 0x1f);
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
  }
  return;
}


/* sub_0801BF2C @ 0x0801BF2C */

void sub_0801BF2C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801BF3E @ 0x0801BF3E */

void sub_0801BF3E(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0804F944(auStack_24,param_2);
  sub_08052FB4(auStack_1c,auStack_24,&UNK_0871e154 + iVar1);
  uVar2 = sub_080206B8(0,auStack_1c,*(undefined4 *)(&DAT_0871e15c + iVar1),param_2,
                       &gUnknown_087315A8 + *(int *)(param_1 + 0xc) * 0x10);
  *(undefined4 *)(param_1 + 8) = uVar2;
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_0801BF9A @ 0x0801BF9A */

void sub_0801BF9A(int param_1)

{
  sub_0802082A(*(undefined4 *)(param_1 + 8));
  sub_0803D63C(param_1);
  return;
}


/* sub_0801BFAC @ 0x0801BFAC */

void sub_0801BFAC(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        return;
      }
      sub_0804F944(auStack_20,param_2);
      sub_08052FB4(auStack_18,auStack_20,&UNK_0871e184 + (uint)*(byte *)(param_2 + 4) * 8);
      sub_080207D2(*(undefined4 *)(param_1 + 8),(char)param_2[4],auStack_18);
    }
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar3 = ((int)((uint)*(byte *)(iVar2 + 0x56) *
                  *(int *)(&DAT_0871e1a4 + *(int *)(param_1 + 0xc) * 4)) >> 4) +
            *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar3;
    sub_08013504(iVar2,iVar3 >> 8);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
    iVar2 = sub_08013492(iVar2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(char *)((int)param_2 + 0x11) =
           '\x01' - (char)((int)((uint)*(ushort *)((int)param_2 + 0x12) << 0x1c) >> 0x1f);
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
  }
  return;
}


/* sub_0801C0A8 @ 0x0801C0A8 */

void sub_0801C0A8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801C0BA @ 0x0801C0BA */

void sub_0801C0BA(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int local_34;
  int local_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  int local_1c;
  int local_18;
  
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 2) = 0x38;
  *(undefined1 *)((int)param_2 + 0x11) = 0;
  bVar1 = *(byte *)(param_2 + 4);
  sub_0804F944(auStack_24,param_2);
  sub_08052FB4(&local_1c,auStack_24,&gUnknown_0871E1B0 + (uint)bVar1 * 0xc);
  puVar3 = &gUnknown_0872A690 + *(int *)(param_1 + 0x10) * 0xc;
  uVar2 = sub_08021280(0,&local_1c,*(undefined4 *)(&DAT_0871e1b8 + (uint)bVar1 * 0xc),param_2,puVar3
                      );
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) == 2) {
    uVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  }
  sub_0800FDFA(auStack_2c,param_2);
  sub_08052FB4(&local_34,auStack_2c,auStack_24);
  local_1c = local_34 >> 1;
  local_18 = local_30 >> 1;
  uVar2 = sub_08021594(0,&local_1c,(char)param_2[4],uVar2,puVar3,local_1c,local_18);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 8));
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 0xc));
  return;
}


/* sub_0801C168 @ 0x0801C168 */

void sub_0801C168(void)

{
  return;
}


/* sub_0801C16A @ 0x0801C16A */

void sub_0801C16A(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)((int)param_2 + 0x12);
  if (sVar1 == 0) {
    iVar2 = *(int *)(*param_2 + 0x84);
    iVar2 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
    if ((int)((uint)*(ushort *)(iVar2 + 6) << 0x1e) < 0) {
      *(undefined2 *)((int)param_2 + 0x12) = 1;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      sub_08021452(*(undefined4 *)(param_1 + 8),(char)param_2[4],
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x34));
      *(undefined4 *)(param_1 + 8) = 0;
      sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    *(short *)((int)param_2 + 0x12) = sVar1 + 1;
    if (0x1f < (ushort)(sVar1 + 1U)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}


/* sub_0801C1CC @ 0x0801C1CC */

void sub_0801C1CC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 8) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 8),param_3,param_4,param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0xc));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801C1F6 @ 0x0801C1F6 */

void sub_0801C1F6(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  sub_0800DE60();
  return;
}


/* sub_0801C206 @ 0x0801C206 */

void sub_0801C206(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_2 + 0x80);
  iVar4 = __call_via_r1(param_2,iVar4 + *param_2,iVar4,param_4,param_4);
  iVar2 = (uint)*(byte *)(iVar4 + 0x14) * 0x18;
  if ((&DAT_086b8303)[iVar2] == -1) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  else {
    if ((((&gUnknown_086B82EC)[iVar2] & 1) != 0) ||
       ((int)((uint)(byte)(&gUnknown_086B82EC)[iVar2] << 0x1e) < 0)) {
      do {
        *(short *)(iVar4 + 0x1e) = 0;
      } while (*(short *)(iVar4 + 0x1e) != 0);
      do {
        *(short *)(iVar4 + 0x20) = 0;
      } while (*(short *)(iVar4 + 0x20) != 0);
    }
    sub_0801712C(&gUnknown_086B82EC + (uint)*(byte *)(iVar4 + 0x14) * 0x18);
    bVar1 = (&DAT_086b8303)[iVar2];
    *(byte *)(iVar4 + 0x14) = bVar1;
    sub_0801711C(&gUnknown_086B82EC + (uint)bVar1 * 0x18);
    uVar3 = sub_0801713C(&gUnknown_086B82EC + (uint)*(byte *)(iVar4 + 0x14) * 0x18);
    sub_0800EDF8(param_2,uVar3);
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    sub_0801064C(param_2);
  }
  return;
}


/* sub_0801C2AC @ 0x0801C2AC */

void sub_0801C2AC(void)

{
  return;
}


/* sub_0801C2AE @ 0x0801C2AE */

void sub_0801C2AE(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  sub_0801712C(&gUnknown_086B82EC + (uint)*(byte *)(iVar1 + 0x14) * 0x18);
  *(undefined1 *)(iVar1 + 0x14) = 10;
  sub_0801711C(&DAT_086b83dc);
  uVar2 = sub_0801713C(&gUnknown_086B82EC + (uint)*(byte *)(iVar1 + 0x14) * 0x18);
  sub_0800EDF8(param_2,uVar2);
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  sub_0801064C(param_2);
  return;
}


/* sub_0801C30A @ 0x0801C30A */

void sub_0801C30A(void)

{
  sub_0803D63C();
  return;
}


/* sub_0801C312 @ 0x0801C312 */

void sub_0801C312(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 8) = 1;
  iVar3 = *(int *)(*param_2 + 0x80);
  iVar3 = __call_via_r1(param_2,iVar3 + *param_2,iVar3,param_4,param_4);
  bVar1 = *(byte *)(iVar3 + 0x14);
  *(undefined4 *)(&DAT_03001564 + (uint)DAT_03001068 * 0x68) = 0x37fff;
  sub_0801712C(&gUnknown_086B82EC + (uint)*(byte *)(iVar3 + 0x14) * 0x18);
  bVar1 = (&DAT_086b8302)[(uint)bVar1 * 0x18];
  *(byte *)(iVar3 + 0x14) = bVar1;
  sub_0801711C(&gUnknown_086B82EC + (uint)bVar1 * 0x18);
  uVar2 = sub_0801713C(&gUnknown_086B82EC + (uint)*(byte *)(iVar3 + 0x14) * 0x18);
  sub_0800EDF8(param_2,uVar2);
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  sub_0801064C(param_2);
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(iVar3 + 0x14) * 0x18] << 0x1e) < 0) {
    do {
      *(short *)(iVar3 + 0x20) = *(short *)(iVar3 + 0x1c);
    } while (*(short *)(iVar3 + 0x20) != *(short *)(iVar3 + 0x1c));
  }
  else if (((&gUnknown_086B82EC)[(uint)*(byte *)(iVar3 + 0x14) * 0x18] & 1) != 0) {
    do {
      *(short *)(iVar3 + 0x1e) = *(short *)(iVar3 + 0x1c);
    } while (*(short *)(iVar3 + 0x1e) != *(short *)(iVar3 + 0x1c));
  }
  return;
}


/* sub_0801C3EC @ 0x0801C3EC */

void sub_0801C3EC(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int iStack_24;
  int iStack_20;
  undefined1 auStack_1c [8];
  
  *(undefined4 *)(param_1 + 8) = 0;
  sub_0800DE60();
  sub_0803E378(&DAT_03003e5c,&DAT_08319530,0x40,0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (DAT_03002bb0 == '\0') {
    sub_0800FDFA(auStack_34,param_2);
    sub_08052FB4(&iStack_44,auStack_34,auStack_2c);
    iStack_24 = iStack_44 >> 1;
    iStack_20 = iStack_40 >> 1;
    uStack_3c = 0;
    uStack_38 = 1;
    sub_08052FB4(auStack_1c,&iStack_24,&uStack_3c);
    puVar2 = (undefined4 *)sub_0803D5B8(0x48);
    if (puVar2 != (undefined4 *)0x0) {
      sub_0802A81C(puVar2,auStack_1c,&gUnknown_08752D28,3,0x4000,0x400,0x38);
      *puVar2 = &_0804B9E0;
      puVar2[0x11] = &gUnknown_08752D28;
    }
    *(undefined4 **)(param_1 + 0xc) = puVar2;
    sub_0801191A(&DAT_03001c4c,puVar2);
  }
  else if (DAT_03002bb0 == '\x01') {
    sub_0800FDFA(auStack_34,param_2);
    sub_08052FB4(&iStack_44,auStack_34,auStack_2c);
    iStack_24 = iStack_44 >> 1;
    iStack_20 = iStack_40 >> 1;
    uStack_3c = 0;
    uStack_38 = 2;
    sub_08052FB4(auStack_1c,&iStack_24,&uStack_3c);
    uVar1 = sub_0802A81C(0,auStack_1c,&gUnknown_087520D4,7,0xc88,0x400,0x38);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return;
}


/* sub_0801C4F4 @ 0x0801C4F4 */

void sub_0801C4F4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  iVar2 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sVar1 = *(short *)((int)param_2 + 0x12) * *(short *)(iVar2 + 0x1c);
  software_interrupt(6);
  if (((&gUnknown_086B82EC)[(uint)*(byte *)(iVar2 + 0x14) * 0x18] & 1) == 0) {
    do {
      *(short *)(iVar2 + 0x1e) = sVar1;
    } while (*(short *)(iVar2 + 0x1e) != sVar1);
  }
  else {
    do {
      *(short *)(iVar2 + 0x20) = sVar1;
    } while (*(short *)(iVar2 + 0x20) != sVar1);
  }
  return;
}


/* sub_0801C552 @ 0x0801C552 */

void sub_0801C552(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    if (((&gUnknown_086B82EC)[(uint)*(byte *)(iVar1 + 0x14) * 0x18] & 1) == 0) {
      do {
        *(short *)(iVar1 + 0x1e) = 0;
      } while (*(short *)(iVar1 + 0x1e) != 0);
    }
    else {
      do {
        *(short *)(iVar1 + 0x20) = 0;
      } while (*(short *)(iVar1 + 0x20) != 0);
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0xc));
  }
  sub_0803E302(&DAT_03003e5c,&DAT_08319530);
  return;
}


/* sub_0801C5BC @ 0x0801C5BC */

void sub_0801C5BC(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801C5CE @ 0x0801C5CE */

void sub_0801C5CE(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  sub_0801712C(&gUnknown_086B82EC + (uint)*(byte *)(iVar1 + 0x14) * 0x18);
  *(undefined1 *)(iVar1 + 0x14) = 0xe;
  sub_0801711C(&DAT_086b843c);
  uVar2 = sub_0801713C(&gUnknown_086B82EC + (uint)*(byte *)(iVar1 + 0x14) * 0x18);
  sub_0800EDF8(param_2,uVar2);
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  sub_0801064C(param_2);
  return;
}


/* sub_0801C62C @ 0x0801C62C */

void sub_0801C62C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0801C634 @ 0x0801C634 */

void sub_0801C634(void)

{
  sub_0800DE60();
  return;
}


/* sub_0801C63C @ 0x0801C63C */

void sub_0801C63C(void)

{
  return;
}


/* sub_0801C63E @ 0x0801C63E */

void sub_0801C63E(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x21) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 4);
    if (*(short *)((int)param_2 + 0x12) == 0x10) {
      sub_0804F944(auStack_1c,param_2);
      sub_08052FB4(auStack_14,auStack_1c,&gUnknown_0871E1E0 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar2 = sub_080383D4(0,auStack_14,param_2);
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0801C6C8 @ 0x0801C6C8 */

void sub_0801C6C8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0801C6D0 @ 0x0801C6D0 */

void sub_0801C6D0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801C6E2 @ 0x0801C6E2 */

undefined4 * sub_0801C6E2(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,param_4);
    *param_1 = &_0804A2E8;
    uVar1 = param_3[1];
    param_1[0x10] = *param_3;
    param_1[0x11] = uVar1;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x12] = 0;
    param_1[0x13] = 0x800;
    param_1[0x14] = 0x200;
    param_1[6] = &gUnknown_0871E984;
    *(undefined1 *)(param_1 + 2) = 0x37;
    param_1[0x11] = param_1[0x11] + -0x200;
    sub_08019B4E(param_1);
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return param_1;
}


/* sub_0801C6E4 @ 0x0801C6E4 */

undefined4 * sub_0801C6E4(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,param_4);
    *param_1 = &_0804A2E8;
    uVar1 = param_3[1];
    param_1[0x10] = *param_3;
    param_1[0x11] = uVar1;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x12] = 0;
    param_1[0x13] = 0x800;
    param_1[0x14] = 0x200;
    param_1[6] = &gUnknown_0871E984;
    *(undefined1 *)(param_1 + 2) = 0x37;
    param_1[0x11] = param_1[0x11] + -0x200;
    sub_08019B4E(param_1);
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return param_1;
}


/* sub_0801C750 @ 0x0801C750 */

void sub_0801C750(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30);
  local_14 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) >> 1;
  local_18 = iVar2 >> 1;
  sub_08011944(&DAT_03001c4c,param_1,local_18,iVar2,local_18,local_14);
  uVar1 = sub_0800C454(0,&local_18,&DAT_0871e208);
  sub_0801191A(&DAT_03001c4c,uVar1);
  uVar1 = sub_0800C454(0,&local_18,&DAT_0871e210);
  sub_0801191A(&DAT_03001c4c,uVar1);
  uVar1 = sub_0800C454(0,&local_18,&DAT_0871e218);
  sub_0801191A(&DAT_03001c4c,uVar1);
  uVar1 = sub_0800C454(0,&local_18,&DAT_0871e220);
  sub_0801191A(&DAT_03001c4c,uVar1);
  iVar2 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar2) {
    uVar1 = sub_0801952C(0,&local_18,0x38);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  sub_0803E378(&DAT_03003e5c,&gUnknown_083193C8,0x40,0);
  return;
}


/* sub_0801C80A @ 0x0801C80A */

void sub_0801C80A(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  int local_18;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 0x20;
  }
  else if ((*(char *)(param_1 + 0x54) == '\x01') &&
          (iVar1 = *(int *)(param_1 + 0x5c) + -1, *(int *)(param_1 + 0x5c) = iVar1, iVar1 < 0)) {
    *(undefined4 *)(param_1 + 0x5c) = 0xb;
  }
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  uVar2 = (uint)(iVar1 * 0x10000000) >> 0x1e;
  if (uVar2 == 3) {
    uVar2 = 1;
  }
  *(undefined **)(param_1 + 0x18) = &gUnknown_0871E984 + uVar2 * 0xc;
  sub_08019B4E(param_1);
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar1 = *(int *)(param_1 + 0x50) + -0x20;
    *(int *)(param_1 + 0x50) = iVar1;
    iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 < -0xc00) {
      *(undefined1 *)(param_1 + 0x54) = 1;
      *(undefined4 *)(param_1 + 0x58) = 0x1e;
      *(undefined4 *)(param_1 + 0x5c) = 0xb;
    }
  }
  else if ((*(char *)(param_1 + 0x54) == '\x01') &&
          (iVar1 = *(int *)(param_1 + 0x58) + -1, *(int *)(param_1 + 0x58) = iVar1, iVar1 < 0)) {
    if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      local_28 = *(undefined4 *)(param_1 + 0x1c);
      local_34 = *(undefined1 *)(param_1 + 0x10);
      local_2c = &gUnknown_086B8090;
      local_30 = 0x400;
      local_44 = *(undefined4 *)(param_1 + 0x28);
      uStack_40 = *(undefined4 *)(param_1 + 0x2c);
      uStack_3c = *(undefined4 *)(param_1 + 0x30);
      uStack_38 = *(undefined4 *)(param_1 + 0x34);
      local_48[0] = 2;
      local_18 = param_1;
      sub_08011C0C(&DAT_03001c4c,0,local_48);
    }
    sub_0801C750(param_1);
  }
  return;
}


/* sub_0801C8DC @ 0x0801C8DC */

void sub_0801C8DC(void)

{
  sub_08019CC4();
  return;
}


/* sub_0801C900 @ 0x0801C900 */

undefined4 * sub_0801C900(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,param_4);
    *param_1 = &_0804A368;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    param_1[6] = &gUnknown_0871E630 + param_3 * 0xc;
    param_1[0x12] = 0;
    param_1[0x10] = *(undefined4 *)(&gUnknown_0871E234 + param_3 * 8);
    param_1[0x11] = *(undefined4 *)(&DAT_0871e238 + param_3 * 8);
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_0803E378(&DAT_03003e5c,&gUnknown_083193F8,0x40,0,uVar2);
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_0801C978 @ 0x0801C978 */

void sub_0801C978(int param_1)

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


/* sub_0801C9C4 @ 0x0801C9C4 */

void sub_0801C9C4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  int local_38;
  undefined *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  uVar1 = *(int *)(param_1 + 0x48) + 1;
  *(uint *)(param_1 + 0x48) = uVar1;
  piVar4 = (int *)(param_1 + 0x40);
  iStack_1c = param_1;
  iStack_18 = param_2;
  if (((uVar1 & 3) == 0) && (iVar2 = sub_080116FC(&DAT_03001c4c), 0x3f < iVar2)) {
    local_24 = *(int *)(param_1 + 0x20) - ((*piVar4 << 0xb) >> 8) >> 8;
    local_30 = (*(int *)(param_1 + 0x44) << 0xb) >> 8;
    local_34 = (undefined *)((*piVar4 << 0xb) >> 8);
    local_3c = *(int *)(param_1 + 0x20) - (int)local_34;
    local_38 = *(int *)(param_1 + 0x24) - local_30;
    local_20 = local_38 >> 8;
    local_48 = 0x38;
    local_4c = 0x40;
    local_50 = 0x2aaa;
    local_2c = local_3c;
    local_28 = local_38;
    uVar3 = sub_0802A81C(0,&local_24,&DAT_0871e660,3);
    sub_0801191A(&DAT_03001c4c,uVar3);
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *piVar4;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  sub_08019B4E(param_1);
  if ((((DAT_030019bc < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x28) < DAT_030019c4)) &&
      (DAT_030019c0 < *(int *)(param_1 + 0x34))) && (*(int *)(param_1 + 0x2c) < DAT_030019c8)) {
    iVar2 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
    if (iVar2 == 0) {
      sub_0801C978(param_1);
    }
    else if ((iStack_18 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      local_30 = *(undefined4 *)(param_1 + 0x1c);
      local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)(param_1 + 0x10));
      local_34 = &gUnknown_086B8090;
      local_38 = 0x400;
      local_4c = *(undefined4 *)(param_1 + 0x28);
      local_48 = *(undefined4 *)(param_1 + 0x2c);
      uStack_44 = *(undefined4 *)(param_1 + 0x30);
      uStack_40 = *(undefined4 *)(param_1 + 0x34);
      local_50 = local_50 & 0xffffff00;
      local_20 = param_1;
      iVar2 = sub_08011C70(&DAT_03001c4c,0,&local_50);
      if (iVar2 != 0) {
        iVar2 = sub_0803FACC(2);
        sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
        sub_0801C978(param_1);
      }
    }
  }
  else {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}


/* sub_0801CB38 @ 0x0801CB38 */

undefined4 sub_0801CB38(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else {
      if ((((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30)) &&
           (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
         (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))) {
        sub_0801C978();
        return 1;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}


/* sub_0801CBA0 @ 0x0801CBA0 */

undefined4 sub_0801CBA0(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iStack_54;
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
  int *piStack_1c;
  int *piStack_18;
  
  if (DAT_03001c34 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800FDFA(&iStack_54);
    iStack_40 = iStack_50 + iStack_48 >> 1;
    iStack_44 = iStack_54 + iStack_4c >> 1;
    sub_0800FDFA(&iStack_3c,param_2);
    iStack_24 = iStack_44 - (iStack_3c + iStack_34 >> 1);
    iStack_20 = iStack_40 - (iStack_38 + iStack_30 >> 1);
    iStack_2c = iStack_24;
    if (iStack_24 < 0) {
      iStack_2c = -iStack_24;
    }
    iStack_28 = iStack_20;
    if (iStack_20 < 0) {
      iStack_28 = -iStack_20;
    }
    if (iStack_28 < iStack_2c) {
      uVar1 = 2;
      if (iStack_24 < 1) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar4 = iStack_2c;
    }
    else {
      *(bool *)(param_2 + 4) = 0 < iStack_20;
      iVar4 = iStack_28;
    }
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_2c = iStack_24 * 0x100;
      iStack_28 = iStack_20 * 0x100;
      iStack_50 = *(int *)(param_1 + 4) * iStack_28 >> 8;
      iStack_54 = *(int *)(param_1 + 4) * iStack_2c >> 8;
      piVar6 = param_2 + 0x68;
      iStack_4c = iStack_54;
      iStack_48 = iStack_50;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_54 << 8);
      iStack_40 = __16__rt_sdiv(iVar4 * 0x100,iStack_48 << 8);
      piVar7 = param_2 + 0x69;
      iStack_54 = *piVar6 - iVar3;
      iStack_50 = param_2[0x69] - iStack_40;
      iStack_44 = iVar3;
      iStack_3c = iStack_54;
      iStack_38 = iStack_50;
      iStack_34 = iStack_54;
      iStack_30 = iStack_50;
      iVar4 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar4 == 0) {
        piVar5 = (int *)(param_1 + 4);
        piStack_18 = piVar5;
        if (iStack_24 < 0) {
          iStack_40 = -*(int *)(param_1 + 4);
          piVar5 = &iStack_40;
        }
        iStack_3c = *piVar6 - *piVar5;
        piStack_1c = param_2 + 0x69;
        iStack_38 = *piStack_1c;
        iVar4 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar4 == 0) {
          iStack_3c = *piVar6;
          piVar5 = piStack_18;
          if (iStack_20 < 0) {
            iStack_40 = -*(int *)(param_1 + 4);
            piVar5 = &iStack_40;
          }
          iStack_38 = *piStack_1c - *piVar5;
          iVar4 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
          if (iVar4 == 0) {
            __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
            return 1;
          }
          *piVar6 = iStack_3c;
          *piVar7 = iStack_38;
        }
        else {
          *piVar6 = iStack_3c;
          *piVar7 = iStack_38;
        }
      }
      else {
        *piVar6 = iStack_34;
        *piVar7 = iStack_30;
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* sub_0801CDA0 @ 0x0801CDA0 */

undefined4 * sub_0801CDA0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080495E4;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801CDC0 @ 0x0801CDC0 */

undefined4 sub_0801CDC0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
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
    uVar4 = 3;
    iStack_20 = 0;
    iStack_24 = 0;
    if (iVar3 < iVar2) {
      if (iVar3 < 3) {
        iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
        if (iVar2 != 0) {
          __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        }
        if (iStack_1c < 1) {
          uVar4 = 2;
        }
        *(undefined1 *)(param_2 + 4) = uVar4;
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
      if (iVar2 < 3) {
        iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
        if (iVar2 != 0) {
          __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        }
        *(bool *)(param_2 + 4) = iStack_18 < 1;
        return 1;
      }
      if (iStack_1c < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        iStack_24 = -*(int *)(param_1 + 4);
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        iStack_24 = *(int *)(param_1 + 4);
      }
    }
    iVar3 = param_2[0x16];
    iVar2 = sub_08000158(0x4e);
    if ((((iVar2 == iVar3) || (iVar2 = sub_08000158(0x11), iVar2 == iVar3)) ||
        (iVar2 = sub_08000158(0x4c), iVar2 == iVar3)) &&
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


/* sub_0801CFDA @ 0x0801CFDA */

undefined4 * sub_0801CFDA(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049A2C;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801D004 @ 0x0801D004 */

undefined4 sub_0801D004(undefined4 param_1,int param_2)

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
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return 1;
}


/* sub_0801D046 @ 0x0801D046 */

undefined4 * sub_0801D046(void)

{
  return &DAT_03002bcc;
}


/* sub_0801D04A @ 0x0801D04A */

undefined4 sub_0801D04A(undefined4 param_1,int param_2)

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
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return 1;
}


/* sub_0801D09C @ 0x0801D09C */

undefined4 * sub_0801D09C(void)

{
  return &DAT_03002bd0;
}


/* sub_0801D0A0 @ 0x0801D0A0 */

undefined4 sub_0801D0A0(void)

{
  return 2;
}


/* sub_0801D0A8 @ 0x0801D0A8 */

undefined4 * sub_0801D0A8(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x134), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    *param_1 = &_0804AFCC;
    param_1[0x4c] = &DAT_03001150 + param_2;
    param_1[0x45] = param_2;
    param_1[0x46] = param_3;
    uVar3 = (uint)DAT_03001068;
    iVar1 = sub_080135D2(&DAT_03001560 + uVar3 * 0x68);
    if ((iVar1 < (int)(uint)(byte)(&DAT_086f8301)[param_3 * 0x2c]) ||
       ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[uVar3 * 0x68] * 0x18] <<
             0x1d) < 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    param_1[0x48] = uVar2;
    uVar3 = (uint)((*(uint *)param_1[0x4c] >> 0x1c) - 1 != (uint)DAT_03001068);
    param_1[0x49] = uVar3;
    uVar4 = (uint)(*(uint *)param_1[0x4c] >> 0x1c != 0);
    param_1[0x4b] = uVar3 + uVar4;
    param_1[0x4a] = uVar4;
  }
  return param_1;
}


/* sub_0801D15C @ 0x0801D15C */

void sub_0801D15C(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  
  local_1c = (undefined4 *)0x0;
  local_20 = 1;
  local_24 = 0;
  uVar2 = sub_08013E64(0,param_1,0,0xc,0x44);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  sub_0800664E(param_1,uVar2);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  uVar2 = sub_08014124(0,param_1,0x1c,0x50,L"Select");
  sub_0800664E(param_1,uVar2);
  iVar3 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  local_1c = (undefined4 *)0x0;
  local_24 = 1;
  local_20 = 1;
  uVar2 = sub_08013E64(0,param_1,1,iVar3 + 0x1e,0x44);
  sub_0800664E(param_1,uVar2);
  local_1c = &gUnknown_0807012C;
  local_20 = 0;
  local_24 = 5;
  uVar2 = sub_08014124(0,param_1,iVar3 + 0x2e,0x50,L"Cancel");
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar2);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x4800);
  local_24 = 3;
  local_20 = 5;
  local_1c = (undefined4 *)0x1b;
  uStack_18 = 0x11;
  sub_0803DA10(&local_24,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f83;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  return;
}


/* sub_0801D25C @ 0x0801D25C */

void sub_0801D25C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_0801D27C @ 0x0801D27C */

undefined4 sub_0801D27C(int param_1,undefined4 *param_2)

{
  param_2[1] = *(int *)(param_1 + 0x10c) * 0xc + 0x1f;
  *param_2 = 0x12;
  return 1;
}


/* sub_0801D294 @ 0x0801D294 */

void sub_0801D294(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_14c [256];
  undefined1 local_4c [2];
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 local_2c;
  int local_18;
  
  local_18 = param_1;
  sub_0803F540(local_4c,0xc0,0x60);
  sub_08005096(local_4c);
  iVar1 = local_18;
  local_40 = &gUnknown_0807012C;
  local_4c[0] = 0;
  local_4a = 1;
  local_2c = 0x803f5a5;
  local_49 = 5;
  iVar2 = *(int *)(local_18 + 0x118) * 0x2c;
  Wfz_LoadContainer(*(undefined4 *)(&DAT_086f82fc + iVar2),auStack_14c);
  sub_0803F922(local_4c,auStack_14c,&DAT_0871e9c8);
  local_48 = 0x22;
  local_44 = 0x13;
  sub_0803DADA(local_4c,*(undefined4 *)
                         (&gUIStringPtrs + (uint)*(ushort *)(&gEquipmentTable + iVar2) * 4));
  iVar2 = *(int *)(iVar1 + 0x10c);
  if (*(int *)(iVar1 + 0x124) == 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(int *)(iVar1 + 0x128) == 0) && (0 < iVar2)) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = 0x22;
  if (*(int *)(iVar1 + 0x124) != 0) {
    local_48 = 0x12;
    local_44 = 0x22;
    local_49 = 0x75;
    if ((*(int *)(iVar1 + 0x120) != 0) && (local_49 = 6, iVar2 != 0)) {
      local_49 = 2;
    }
    sub_0803DC96(local_4c,L"Equip to %s",
                 *(undefined4 *)
                  (&gUIStringPtrs +
                  (uint)*(ushort *)
                         (&DAT_086b82ee +
                         (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18) * 4));
    iVar3 = 0x2e;
  }
  if (*(int *)(iVar1 + 0x128) != 0) {
    local_49 = 6;
    local_48 = 0x12;
    if (iVar2 != 1) {
      local_49 = 2;
    }
    local_44 = iVar3;
    sub_0803DC96(local_4c,L"Unequip from %s",
                 *(undefined4 *)
                  (&gUIStringPtrs +
                  (uint)*(ushort *)
                         (&DAT_086b82ee +
                         (uint)(byte)(&DAT_03001574)
                                     [((**(uint **)(iVar1 + 0x130) >> 0x1c) - 1) * 0x68] * 0x18) * 4
                  ));
    iVar3 = iVar3 + 0xc;
  }
  local_49 = 6;
  local_48 = 0x12;
  if (iVar2 != 2) {
    local_49 = 2;
  }
  local_44 = iVar3;
  sub_0803DADA(local_4c,L"Drop");
  sub_080066EC(local_18,local_4c);
  sub_08049150((int)local_4c,0x6009640);
  sub_0803F58C(local_4c,0);
  return;
}


