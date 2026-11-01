/* Ghidra reference decompilation of code_080383D4 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_080383D4 @ 0x080383D4 */

undefined4 * sub_080383D4(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0xc0;
    iVar2 = sub_0801124C(&DAT_03001c4c,0xc0);
    if (iVar2 == -1) {
      sub_08011732(&DAT_03001c4c,0xc0);
      iVar2 = sub_0801124C(&DAT_03001c4c,0xc0);
    }
    *(short *)(param_1 + 3) = (short)iVar2;
    *param_1 = &_0804C55C;
    uVar3 = param_2[1];
    param_1[9] = *param_2;
    param_1[10] = uVar3;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[1] = param_2[1];
    bVar1 = *(byte *)(param_3 + 0x10);
    param_1[0x10] = (uint)bVar1;
    if (bVar1 == 0) {
      param_1[1] = param_2[1] + 0x2c;
    }
    param_1[5] = 0;
    param_1[0x12] = param_3;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xf] = 8;
    uVar3 = param_2[1];
    param_1[9] = *param_2;
    param_1[10] = uVar3;
    uVar3 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar3;
    param_1[0x11] = &gUnknown_0876E264 + param_1[0x10] * 0x24;
    iVar2 = param_1[0x10] * 8;
    uVar3 = *(undefined4 *)(&gUnknown_0807268C + iVar2);
    param_1[0xe] = *(undefined4 *)(&DAT_08072690 + iVar2);
    param_1[0xd] = uVar3;
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319440,0x40,0,param_4);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                 *(int *)(param_1[0x11] + 8),0xc0);
  }
  return param_1;
}


/* sub_08038498 @ 0x08038498 */

void sub_08038498(undefined4 *param_1,int param_2)

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


/* sub_080384C2 @ 0x080384C2 */

void sub_080384C2(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
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
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (param_2 != 0) {
      iStack_24 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x34);
      local_18 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x38);
      local_1c = iStack_24;
      uStack_30 = *(undefined4 *)(param_1 + 0x48);
      uStack_3c = (undefined1)*(undefined4 *)(param_1 + 0x40);
      piVar3 = (int *)(param_1 + 0x1c);
      puStack_34 = &gUnknown_086B8108;
      uStack_38 = 0x400;
      auStack_50[0] = 1;
      piVar2 = piVar3;
      if (iStack_24 < *(int *)(param_1 + 0x1c)) {
        piVar2 = &local_1c;
      }
      iStack_4c = *piVar2 + -2;
      piVar2 = (int *)(param_1 + 0x20);
      piVar4 = piVar2;
      if (local_18 < *(int *)(param_1 + 0x20)) {
        piVar4 = &local_18;
      }
      iStack_48 = *piVar4 + -2;
      if (*piVar3 < iStack_24) {
        piVar3 = &local_1c;
      }
      iStack_44 = *piVar3 + 2;
      if (*piVar2 < local_18) {
        piVar2 = &local_18;
      }
      iStack_40 = *piVar2 + 2;
      iStack_20 = param_1;
      iVar1 = sub_08009324(&iStack_4c,DAT_03001a50);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        iVar1 = sub_08011C0C(&DAT_03001c4c,0,auStack_50);
        if (iVar1 == 0) {
          if (*(int *)(param_1 + 0x3c) < 0x30) {
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
          }
          else {
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * 4;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x38) * 4;
          }
          iVar1 = *(int *)(param_1 + 0x18) + 1;
          *(int *)(param_1 + 0x18) = iVar1;
          if (0xf0 < iVar1) {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    local_1c = *(int *)(param_1 + 0x34) * 4;
    local_18 = *(int *)(param_1 + 0x38) * 4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_1c;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + local_18;
    iVar1 = *(int *)(param_1 + 0x3c) + -4;
    *(int *)(param_1 + 0x3c) = iVar1;
    if (iVar1 < 1) {
      sub_08011944(&DAT_03001c4c,param_1);
    }
  }
  return;
}


/* sub_080385F2 @ 0x080385F2 */

void sub_080385F2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_08038602 @ 0x08038602 */

undefined4 sub_08038602(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030019bc;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x20) - DAT_030019c0;
  *(int *)(param_1 + 0x2c) = iVar1;
  return 1;
}


/* sub_0803862E @ 0x0803862E */

void sub_0803862E(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x44) + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x2c) + (int)*pcVar1 + *param_5;
  uVar2 = *(int *)(param_1 + 0x30) + (int)pcVar1[1] + param_5[1];
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


/* sub_0803870C @ 0x0803870C */

undefined4 sub_0803870C(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_18 = *param_2;
  sub_0803862E(param_1,0,&local_18,0,&gUnknown_0876E0C4);
  iVar1 = 8;
  if (8 < *(int *)(param_1 + 0x3c) + -9) {
    do {
      local_20 = iVar1 * *(int *)(param_1 + 0x34);
      local_1c = iVar1 * *(int *)(param_1 + 0x38);
      sub_0803862E(param_1,1,&local_18,2,&local_20,local_1c);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x3c) + -9);
  }
  local_1c = *(int *)(param_1 + 0x3c) + -8;
  local_20 = local_1c * *(int *)(param_1 + 0x34);
  local_1c = local_1c * *(int *)(param_1 + 0x38);
  sub_0803862E(param_1,2,&local_18,4,&local_20,local_1c);
  *param_2 = local_18;
  return 0;
}


/* sub_0803878E @ 0x0803878E */

undefined4 sub_0803878E(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0xb) {
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                 *(int *)(param_1[0x11] + 8),0xc0);
  }
  else if (param_2 == 0xc) {
    iVar1 = *(int *)(*param_1 + 0x28);
    __call_via_r3(param_1,0,iVar1,iVar1 + *param_1,param_4);
  }
  return 0;
}


/* sub_080387C6 @ 0x080387C6 */

undefined4 sub_080387C6(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_080387DC @ 0x080387DC */

void sub_080387DC(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = *(int *)(param_1 + 0x3c) + 1;
  uVar2 = iVar1 >> 2;
  *(int *)(param_1 + 0x3c) = iVar1;
  iVar1 = *(int *)(param_1 + 0x2c) + (uVar2 & 3) * 0xc;
  iStack_1c = param_1;
  iStack_18 = param_2;
  if (*(int *)(param_1 + 0x30) != iVar1) {
    if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x2c))) {
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
    *(int *)(param_1 + 0x30) = iVar1;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 (&DAT_08770cfc)[((int)(uVar2 << 0x1f) >> 0x1f) * -3],0x400);
    sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010400,
                 *(int *)(*(int *)(param_1 + 0x30) + 8),0x200);
  }
  if (iStack_18 != 0) {
    uStack_30 = *(undefined4 *)(param_1 + 0x34);
    uStack_3c = (undefined1)*(undefined4 *)(param_1 + 0x38);
    uStack_38 = 0x400;
    puStack_34 = &gUnknown_086B8110;
    auStack_50[0] = (undefined1)*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x1d0);
    uStack_4c = *(undefined4 *)(param_1 + 0x18);
    uStack_48 = *(undefined4 *)(param_1 + 0x1c);
    uStack_44 = *(undefined4 *)(param_1 + 0x20);
    uStack_40 = *(undefined4 *)(param_1 + 0x24);
    iStack_20 = param_1;
    sub_08011C0C(&DAT_03001c4c,0,auStack_50);
  }
  return;
}


/* sub_08038886 @ 0x08038886 */

undefined4 * sub_08038886(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x40), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x600;
    uVar2 = sub_0801124C(&DAT_03001c4c,0x600);
    if (uVar2 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x600);
      uVar2 = sub_0801124C(&DAT_03001c4c,0x600);
    }
    *(short *)(param_1 + 3) = (short)uVar2;
    *param_1 = &_0804DD6C;
    iVar4 = *param_2;
    iVar3 = param_2[1];
    param_1[5] = iVar3;
    param_1[4] = iVar4;
    param_1[0xf] = 0;
    param_1[0xd] = param_3;
    bVar1 = *(byte *)(param_3 + 0x10);
    param_1[0xe] = (uint)bVar1;
    param_1[0xb] = &gUnknown_08770D0C + (uint)bVar1 * 0x3c;
    param_1[0xc] = &gUnknown_08770D0C + (uint)bVar1 * 0x3c;
    param_1[10] = 0;
    param_1[6] = iVar4 + -0x10;
    param_1[7] = iVar3 + -0x10;
    param_1[1] = iVar3;
    param_1[8] = iVar4 + 0x10;
    param_1[9] = iVar3 + 0x10;
    *(undefined1 *)(param_1 + 2) = 0x37;
    sub_08049138((int)(&DAT_06010000 + (uVar2 & 0xffff) * 0x20),0x876e2f4,0x400);
    sub_08049138((uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010400,*(int *)(param_1[0xb] + 8),0x200)
    ;
  }
  return param_1;
}


/* sub_0803893E @ 0x0803893E */

undefined4 sub_0803893E(int param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  puVar1 = (uint *)*param_2;
  iVar5 = *(int *)(param_1 + 0x10) - DAT_030019cc;
  iVar3 = *(int *)(param_1 + 0x14) - DAT_030019d0;
  uVar6 = *(uint *)(*(int *)(param_1 + 0x30) + 4);
  *puVar1 = uVar6;
  uVar4 = (uint)((iVar5 + **(char **)(param_1 + 0x30)) * 0x800000) >> 7;
  *puVar1 = uVar4 | uVar6 & 0xfe00ffff;
  *puVar1 = uVar4 | uVar6 & 0xfe00ff00 |
            iVar3 + (uint)*(byte *)(*(int *)(param_1 + 0x30) + 1) & 0xff;
  uVar6 = puVar1[1];
  uVar4 = *(ushort *)(param_1 + 0xc) + 0x20 & 0x3ff;
  puVar1[1] = uVar6 & 0xfffffc00 | uVar4;
  puVar1[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar6 & 0xfffff000 | uVar4;
  iVar7 = *(int *)(param_1 + 0x2c);
  puVar2 = puVar1 + 2;
  uVar4 = *(uint *)(iVar7 + 0x34);
  *puVar2 = uVar4;
  uVar6 = (uint)((iVar5 + *(char *)(iVar7 + 0x30)) * 0x800000) >> 7;
  *puVar2 = uVar4 & 0xfe00ffff | uVar6;
  *puVar2 = uVar4 & 0xfe00ff00 | uVar6 | iVar3 + (uint)*(byte *)(iVar7 + 0x31) & 0xff;
  uVar6 = puVar1[3];
  uVar4 = *(ushort *)(param_1 + 0xc) + 0x20 & 0x3ff;
  puVar1[3] = uVar4 | uVar6 & 0xfffffc00;
  puVar1[3] = uVar4 | uVar6 & 0xfffff000 | (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar2 = puVar1 + 4;
  if (*(int *)(param_1 + 0x28) == 0) {
    *puVar2 = 0x80002000;
    uVar4 = (uint)((iVar5 + -0x10) * 0x800000) >> 7;
    *puVar2 = uVar4 | 0x80002000;
    *puVar2 = uVar4 | 0x80002000 | iVar3 + 0xf0U & 0xff;
    uVar6 = puVar1[5];
    uVar4 = *(ushort *)(param_1 + 0xc) & 0x3ff;
    puVar1[5] = uVar4 | uVar6 & 0xfffffc00;
    puVar1[5] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar4 | uVar6 & 0xfffff000;
    puVar2 = puVar1 + 6;
  }
  *param_2 = (int)puVar2;
  return 0;
}


/* sub_08038A84 @ 0x08038A84 */

undefined4 sub_08038A84(int param_1,int param_2)

{
  if (param_2 == 0xb) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),0x876e2f4,0x400);
    sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010400,
                 *(int *)(*(int *)(param_1 + 0x2c) + 8),0x200);
    return 0;
  }
  if (param_2 == 0xc) {
    sub_080387DC(param_1,0);
    return 0;
  }
  return 0;
}


/* sub_08038AD8 @ 0x08038AD8 */

undefined4 *
sub_08038AD8(undefined4 *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_1c;
  int iStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(100), param_1 != (undefined4 *)0x0)) {
    uVar2 = 0x1000;
    if (param_4 != 0) {
      uVar2 = 0x400;
    }
    sub_08019B04(param_1,uVar2,param_2);
    *param_1 = &_0804D1B8;
    iVar3 = param_3[1];
    param_1[8] = *param_3 << 8;
    param_1[9] = iVar3 << 8;
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[0x13] = param_5;
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    bVar1 = *(byte *)(param_2 + 4);
    param_1[0x17] = &gUnknown_0877AD10 + (uint)bVar1 * 0x30;
    if (param_4 == 0) {
      param_1[0x17] = &UNK_0877ad1c + (uint)bVar1 * 0x30;
      param_1[0x12] = 0;
      uVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      param_1[0x16] = uVar2;
    }
    else {
      iStack_1c = *param_3 +
                  (6 - param_4) * *(int *)(&gUnknown_0807268C + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_18 = param_3[1] +
                  (6 - param_4) * *(int *)(&DAT_08072690 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar2 = sub_08038AD8(0,param_2,&iStack_1c,param_4 + -1,param_1,iStack_1c,iStack_18);
      param_1[0x12] = uVar2;
      sub_0801191A(&DAT_03001c4c,uVar2);
      param_1[0x16] = 0;
    }
    param_1[6] = param_1[0x17];
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_08038BB2 @ 0x08038BB2 */

void sub_08038BB2(undefined4 *param_1,int param_2)

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


/* sub_08038BDC @ 0x08038BDC */

void sub_08038BDC(int param_1)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    sub_08038BDC();
  }
  local_14 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30) >> 1;
  local_10 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) >> 1;
  sub_08011944(&DAT_03001c4c,param_1);
  uVar1 = sub_0801952C(0,&local_14,0x38);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08038C32 @ 0x08038C32 */

void sub_08038C32(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  piVar1 = (int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x44) + 1;
      *(int *)(param_1 + 0x44) = iVar2;
      if (0x17 < iVar2) {
        sub_08038BDC(param_1);
        return;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x5c) + (iVar2 >> 3) * 0xc;
    }
    else {
      uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 2);
      if ((int)(uVar3 << 0x1a) < 0) {
        if (-0x38 < *(int *)(param_1 + 0x50)) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -3;
          *piVar1 = *(int *)(param_1 + 0x20) + -0x300;
        }
      }
      else if (((int)(uVar3 << 0x1b) < 0) && (*(int *)(param_1 + 0x50) < 0x38)) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 3;
        *piVar1 = *(int *)(param_1 + 0x20) + 0x300;
      }
      uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 2);
      if ((int)(uVar3 << 0x19) < 0) {
        if (-0x20 < *(int *)(param_1 + 0x54)) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -3;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -0x300;
        }
      }
      else if (((int)(uVar3 << 0x18) < 0) && (*(int *)(param_1 + 0x54) < 0x20)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 3;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 0x300;
      }
    }
  }
  else if (*(int *)(param_1 + 0x4c) != 0) {
    local_1c = *(int *)(*(int *)(param_1 + 0x4c) + 0x20) + *(int *)(*(int *)(param_1 + 0x48) + 0x20)
               >> 1;
    local_18 = *(int *)(*(int *)(param_1 + 0x4c) + 0x24) + *(int *)(*(int *)(param_1 + 0x48) + 0x24)
               >> 1;
    local_34 = *piVar1 * 0x300 >> 8;
    local_30 = *(int *)(param_1 + 0x24) * 0x300 >> 8;
    local_2c = (undefined *)(local_34 + local_1c);
    local_28 = local_30 + local_18;
    local_3c = (int)local_2c >> 2;
    local_38 = local_28 >> 2;
    *piVar1 = local_3c;
    *(int *)(param_1 + 0x24) = local_38;
    local_24 = local_3c;
    local_20 = local_38;
  }
  sub_08019B4E(param_1);
  if (((*(int *)(param_1 + 0x1c) != 0) && (param_2 != 0)) && (*(char *)(param_1 + 0x40) == '\0')) {
    local_28 = *(int *)(param_1 + 0x1c);
    local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_1 + 0x10));
    local_2c = &gUnknown_086B8118;
    local_30 = 0x148;
    auStack_48[0] = 1;
    uStack_44 = *(undefined4 *)(param_1 + 0x28);
    uStack_40 = *(undefined4 *)(param_1 + 0x2c);
    local_3c = *(int *)(param_1 + 0x30);
    local_38 = *(int *)(param_1 + 0x34);
    local_18 = param_1;
    sub_08011C0C(&DAT_03001c4c,0,auStack_48);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != iVar2) {
    *(int *)(param_1 + 0x14) = iVar2;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar2 + 8),
                 (uint)*(byte *)(iVar2 + 3) * (uint)*(byte *)(iVar2 + 2));
  }
  return;
}


/* sub_08038DEC @ 0x08038DEC */

void sub_08038DEC(int param_1)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    sub_08038DEC();
  }
  local_14 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30) >> 1;
  local_10 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) >> 1;
  sub_08011944(&DAT_03001c4c,param_1);
  uVar1 = sub_0801952C(0,&local_14,0x38);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08038E42 @ 0x08038E42 */

void sub_08038E42(int param_1)

{
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  int iStack_10;
  
  do {
    iStack_10 = param_1;
    *(undefined1 *)(iStack_10 + 0x40) = 1;
    param_1 = *(int *)(iStack_10 + 0x48);
  } while (*(int *)(iStack_10 + 0x48) != 0);
  uStack_20 = *(undefined4 *)(iStack_10 + 0x1c);
  uStack_2c = *(undefined1 *)(iStack_10 + 0x10);
  puStack_24 = &gUnknown_086B8118;
  uStack_28 = 0xa00;
  auStack_40[0] = 1;
  uStack_3c = *(undefined4 *)(iStack_10 + 0x28);
  uStack_38 = *(undefined4 *)(iStack_10 + 0x2c);
  uStack_34 = *(undefined4 *)(iStack_10 + 0x30);
  uStack_30 = *(undefined4 *)(iStack_10 + 0x34);
  sub_08011C0C(&DAT_03001c4c,0,auStack_40);
  return;
}


/* FUN_08038e64 @ 0x08038E64 */

void FUN_08038e64(undefined4 param_1,int param_2,undefined1 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 uStack00000018;
  undefined *puStack0000001c;
  int iStack00000030;
  
  puStack0000001c = &gUnknown_086B8118;
  uStack00000018 = 0xa00;
  *param_4 = param_3;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *unaff_r5 = *(undefined4 *)(param_2 + 0x28);
  unaff_r5[1] = uVar1;
  unaff_r5[2] = uVar2;
  unaff_r5[3] = uVar3;
  iStack00000030 = param_2;
  sub_08011C0C(&DAT_03001c4c,0,unaff_r4);
  return;
}


/* sub_08038E8A @ 0x08038E8A */

void sub_08038E8A(int param_1,int *param_2)

{
  int iVar1;
  int local_10;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    local_10 = *param_2 + 0x20;
    sub_08038E8A(*(undefined4 *)(param_1 + 0x48),&local_10);
  }
  iVar1 = (uint)*(byte *)(param_1 + 0x10) * 8;
  *(int *)(param_1 + 0x20) =
       *(int *)(param_1 + 0x20) + *(int *)(&gUnknown_0807268C + iVar1) * *param_2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(&DAT_08072690 + iVar1) * *param_2;
  return;
}


/* sub_08038EC6 @ 0x08038EC6 */

void sub_08038EC6(int param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_08019BF4();
  return;
}


/* sub_08038ED2 @ 0x08038ED2 */

undefined4 sub_08038ED2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      piVar1 = *(int **)(param_1 + 0x4c);
      if (piVar1 != (int *)0x0) {
        __call_via_r2(piVar1,param_2,*(int *)(*piVar1 + 0x10) + *piVar1,param_4,param_4);
      }
    }
    else {
      piVar1 = *(int **)(param_1 + 0x48);
      if (piVar1 != (int *)0x0) {
        __call_via_r2(piVar1,param_2,*(int *)(*piVar1 + 0x10) + *piVar1,param_4,param_4);
      }
    }
    sub_08019C44(param_1,param_2);
  }
  return 0;
}


/* sub_08038F2C @ 0x08038F2C */

int sub_08038F2C(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  
  iVar4 = DAT_03001bb0;
  if (DAT_03001bb0 != 0) {
    iStack_1c = param_1;
    piStack_18 = param_2;
    sub_0800FE34(&iStack_34,param_2);
    iStack_38 = iStack_30 + iStack_28 >> 1;
    iStack_3c = iStack_34 + iStack_2c >> 1;
    iVar3 = 0;
    iVar4 = 0x7fffffff;
    iStack_24 = iStack_3c;
    iStack_20 = iStack_38;
    if (0 < DAT_03001bb0) {
      do {
        sub_0800FE34(&iStack_44,(&DAT_03001bb4)[iVar3]);
        iStack_30 = iStack_40 + iStack_38 >> 1;
        iStack_34 = iStack_44 + iStack_3c >> 1;
        iStack_3c = iStack_34 - iStack_24;
        iStack_38 = iStack_30 - iStack_20;
        iVar2 = iStack_3c * iStack_3c + iStack_38 * iStack_38;
        if (iVar2 < iVar4) {
          iVar4 = iVar2;
          iStack_2c = iStack_3c;
          iStack_28 = iStack_38;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_03001bb0);
    }
    iStack_34 = iStack_2c;
    if (iStack_2c < 0) {
      iStack_34 = -iStack_2c;
    }
    iStack_30 = iStack_28;
    if (iStack_28 < 0) {
      iStack_30 = -iStack_28;
    }
    if (iStack_30 < iStack_34) {
      uVar1 = 3;
      if (iStack_2c < 1) {
        uVar1 = 2;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar4 = iStack_34;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_28 < 1;
      iVar4 = iStack_30;
    }
    if (iVar4 < 4) {
      iVar4 = 0;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      iStack_34 = iStack_2c * 0x100;
      iStack_30 = iStack_28 * 0x100;
      iStack_40 = *(int *)(iStack_1c + 4) * iStack_30 >> 8;
      iStack_44 = *(int *)(iStack_1c + 4) * iStack_34 >> 8;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_44 << 8);
      iVar4 = __16__rt_sdiv(iVar4 * 0x100,iStack_40 << 8);
      param_2[0x68] = param_2[0x68] + iVar3;
      param_2[0x69] = param_2[0x69] + iVar4;
      iVar4 = 1;
    }
  }
  return iVar4;
}


/* sub_08039078 @ 0x08039078 */

undefined4 * sub_08039078(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D2A8;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0803909C @ 0x0803909C */

bool sub_0803909C(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 auStack_3c [16];
  undefined1 local_2c;
  undefined4 local_28;
  undefined *local_24;
  int local_20;
  int local_10;
  
  local_2c = *(undefined1 *)(param_2 + 0x10);
  local_24 = &gUnknown_086B8090;
  local_28 = 0x1000;
  local_20 = param_2;
  sub_0800FE34(auStack_3c);
  local_40[0] = (undefined1)*(undefined4 *)(param_2 + 0x1d0);
  local_10 = param_2;
  iVar1 = sub_08011C0C(&DAT_03001c4c,0,local_40);
  if (iVar1 != 0) {
    iVar2 = sub_0803FACC(2);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
  }
  return iVar1 != 0;
}


/* sub_08039102 @ 0x08039102 */

undefined4 * sub_08039102(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D65C;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08039134 @ 0x08039134 */

undefined4 * sub_08039134(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (puStack_18 = param_4, param_1 = (undefined4 *)sub_0803D5B8(0x27c),
     param_1 != (undefined4 *)0x0)) {
    puStack_18 = (undefined4 *)CONCAT22((short)param_4[1],(short)*param_4);
    sub_0800E6B8(param_1,param_2,&DAT_03001b0c,&puStack_18);
    *param_1 = &_0804D514;
    param_1[0x8b] = 0;
    param_1[0x96] = 0;
    param_1[0x8a] = param_1;
    sub_0800AA9C(param_1 + 0x8a,*(undefined4 *)(param_3 + 8));
  }
  return param_1;
}


/* sub_08039182 @ 0x08039182 */

void sub_08039182(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0804D514;
  sub_0800A9FE(param_1 + 0x8a,0,param_3,param_4,param_4);
  sub_0800E6F8(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080391AC @ 0x080391AC */

void sub_080391AC(int param_1)

{
  sub_0800AA4A(param_1 + 0x228);
  return;
}


/* sub_080391BA @ 0x080391BA */

undefined4 sub_080391BA(void)

{
  return 0;
}


/* sub_080391BE @ 0x080391BE */

void sub_080391BE(void)

{
  return;
}


/* sub_080391C0 @ 0x080391C0 */

void sub_080391C0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_1,(&gUnknown_0877ADD8)[param_2],&gUnknown_0877ADD8,param_4,param_4);
  return;
}


/* sub_080391CE @ 0x080391CE */

undefined4 sub_080391CE(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(undefined **)(param_1 + 0x14) == (&gUnknown_0877ADD8)[param_2]) &&
     (iVar1 = sub_0800EEB0(), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_080391EC @ 0x080391EC */

void sub_080391EC(int param_1)

{
  sub_0800EF08();
  sub_0800AB0C(param_1 + 0x228);
  return;
}


/* sub_08039200 @ 0x08039200 */

void sub_08039200(void)

{
  sub_080102D8();
  return;
}


/* sub_08039214 @ 0x08039214 */

bool sub_08039214(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_2 + 0x1f0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1f8)) {
    iVar2 = iVar2 + 1;
  }
  return *(int *)(param_1 + 0xc) == iVar2;
}


/* sub_0803923A @ 0x0803923A */

void sub_0803923A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804AAA4;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_08039260 @ 0x08039260 */

void sub_08039260(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0803926C @ 0x0803926C */

void sub_0803926C(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [12];
  short local_34;
  short local_32;
  short local_20 [8];
  
  uVar1 = *(ushort *)((int)param_2 + 0x12) >> 3;
  uVar2 = uVar1 & 0xff;
  *(char *)((int)param_2 + 0x11) = (char)uVar1;
  if (4 < uVar2) {
    *(char *)((int)param_2 + 0x11) = '\x03' - (char)((int)((uVar2 + 1) * -0x80000000) >> 0x1f);
  }
  if (*(ushort *)((int)param_2 + 0x12) == 0x28) {
    local_20[0] = 8;
    local_20[1] = 0xc;
    local_20[2] = 8;
    local_20[3] = -0xc;
    local_20[4] = -0xc;
    local_20[5] = 8;
    local_20[6] = 0xc;
    local_20[7] = 8;
    sub_08049138((int)auStack_40,0x877ae38,0x20);
    local_34 = (short)((uint)param_2[0x68] >> 8) + local_20[(uint)*(byte *)(param_2 + 4) * 2];
    local_32 = (short)((uint)param_2[0x69] >> 8) + local_20[(uint)*(byte *)(param_2 + 4) * 2 + 1];
    iVar3 = Enemy_Create(0,auStack_40,&gUnknown_087113E0,0xffffffff);
    sub_0801191A(&DAT_03001c4c,iVar3);
    *(int **)(iVar3 + 500) = param_2;
    *(char *)(iVar3 + 0x10) = (char)param_2[4];
    iVar4 = param_2[0x7c];
    if (iVar4 == 0) {
      param_2[0x7c] = iVar3;
    }
    else {
      iVar5 = *(int *)(iVar4 + 0x1f8);
      while (iVar5 != 0) {
        iVar4 = *(int *)(iVar4 + 0x1f8);
        iVar5 = *(int *)(iVar4 + 0x1f8);
      }
      *(int *)(iVar4 + 0x1f8) = iVar3;
      *(int *)(iVar3 + 0x1fc) = iVar4;
    }
  }
  if (0x47 < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  *(short *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + 1;
  return;
}


/* sub_0803934A @ 0x0803934A */

undefined4 * sub_0803934A(void)

{
  return &DAT_030032a4;
}


/* sub_0803935C @ 0x0803935C */

undefined4 * sub_0803935C(void)

{
  return &DAT_030032a8;
}


/* sub_08039364 @ 0x08039364 */

undefined4 * sub_08039364(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804C150;
    iVar2 = *(int *)(param_2 + 0x204) * 8;
    DAT_03000f70 = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) + *(int *)(&DAT_0877ae78 + iVar2);
    DAT_03000f74 = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) + *(int *)(&DAT_0877ae7c + iVar2);
    uVar1 = sub_0802E104(&_03000F60,param_2,*(int *)(&DAT_0877ae7c + iVar2),DAT_03000f70,param_4);
    param_1[1] = uVar1;
  }
  return param_1;
}


/* sub_080393BE @ 0x080393BE */

undefined4 * sub_080393BE(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C150;
    iVar3 = *(int *)(param_2 + 0x204) * 8;
    DAT_03000f70 = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) + *(int *)(&DAT_0877ae78 + iVar3);
    DAT_03000f74 = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) + *(int *)(&DAT_0877ae7c + iVar3);
    uVar2 = sub_0802E104(&_03000F60,param_2,*(int *)(&DAT_0877ae7c + iVar3),DAT_03000f70,param_4);
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_080393D4 @ 0x080393D4 */

undefined4 * sub_080393D4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804CFB8;
    iVar2 = *(int *)(param_2 + 0x204) * 8;
    DAT_03000f88 = (*(int *)(param_2 + 0x1a0) >> 8) + *(int *)(&DAT_0877aec4 + iVar2);
    DAT_03000f8c = (*(int *)(param_2 + 0x1a4) >> 8) + *(int *)(&DAT_0877aec8 + iVar2);
    uVar1 = sub_0802E104(&_03000F78,param_2);
    param_1[1] = uVar1;
  }
  return param_1;
}


/* sub_0803942A @ 0x0803942A */

undefined4 * sub_0803942A(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CFB8;
    iVar3 = *(int *)(param_2 + 0x204) * 8;
    DAT_03000f88 = (*(int *)(param_2 + 0x1a0) >> 8) + *(int *)(&DAT_0877aec4 + iVar3);
    DAT_03000f8c = (*(int *)(param_2 + 0x1a4) >> 8) + *(int *)(&DAT_0877aec8 + iVar3);
    uVar2 = sub_0802E104(&_03000F78,param_2);
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0803943C @ 0x0803943C */

undefined4 * sub_0803943C(void)

{
  return &DAT_030032ac;
}


/* sub_08039444 @ 0x08039444 */

undefined4 sub_08039444(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1f0);
  uVar1 = sub_0803FACC(8);
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1f8)) {
    uVar1 = uVar1 + 1;
    *(uint *)(iVar2 + 0x204) = uVar1 & 7;
  }
  return 1;
}


/* sub_08039472 @ 0x08039472 */

undefined4 * sub_08039472(void)

{
  return &DAT_030032b0;
}


/* sub_0803947C @ 0x0803947C */

void sub_0803947C(void)

{
  ushort uVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0xf00);
  uStack_14 = 9;
  uStack_10 = 8;
  uStack_c = 0x15;
  uStack_8 = 0xd;
  sub_0803DA10(&uStack_14,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f80;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  return;
}


/* sub_080394C8 @ 0x080394C8 */

void sub_080394C8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_080394E8 @ 0x080394E8 */

void sub_080394E8(undefined4 param_1)

{
  undefined1 local_40 [2];
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_20;
  
  sub_0803F540(local_40,0x60,0x28);
  sub_08005096(local_40);
  local_40[0] = 1;
  local_3e = 1;
  local_20 = 0x803f5a5;
  local_34 = &gUnknown_0807012C;
  local_3c = 0x30;
  local_38 = 0x14;
  local_3d = 2;
  sub_0803DADA(local_40,L"Saving...");
  sub_080066EC(param_1,local_40);
  sub_08049150((int)local_40,0x6009640);
  sub_0803F58C(local_40,0);
  return;
}


/* sub_08039544 @ 0x08039544 */

undefined4 sub_08039544(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08004962(&DAT_03001068,*(undefined4 *)(param_1 + 0x114),param_1 + 0x118,
               *(undefined4 *)(param_1 + 0x120),param_4);
  return 1;
}


/* sub_0803957C @ 0x0803957C */

void sub_0803957C(undefined4 param_1)

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
  uVar2 = sub_08013E64(0,param_1,0,0xc,0x3c);
  sub_0800664E(param_1,uVar2);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  uVar2 = sub_08014124(0,param_1,0x1c,0x48,L"Delete");
  sub_0800664E(param_1,uVar2);
  iVar3 = sub_0803FFE8(&gUnknown_0807012C,L"Delete");
  local_1c = (undefined4 *)0x0;
  local_24 = 1;
  local_20 = 1;
  uVar2 = sub_08013E64(0,param_1,1,iVar3 + 0x1e,0x3c);
  sub_0800664E(param_1,uVar2);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  uVar2 = sub_08014124(0,param_1,iVar3 + 0x2e,0x48,L"Cancel");
  sub_0800664E(param_1,uVar2);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x3700);
  local_24 = 5;
  local_20 = 5;
  local_1c = (undefined4 *)0x19;
  uStack_18 = 0x10;
  sub_0803DA10(&local_24,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f80;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  return;
}


/* sub_0803966C @ 0x0803966C */

void sub_0803966C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_0803968C @ 0x0803968C */

void sub_0803968C(undefined4 param_1)

{
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_28;
  
  sub_0803F540(&local_48,0xa0,0x58);
  sub_08005096(&local_48);
  local_48 = 1;
  local_46 = 1;
  local_28 = 0x803f5a5;
  local_44 = 0x50;
  local_40 = 0x14;
  local_3c = (undefined4 *)&gUnknown_082B9BA0;
  local_45 = 3;
  sub_0803DADA(&local_48,L"Delete Game");
  local_3c = &gUnknown_0807012C;
  local_44 = 0x50;
  local_40 = 0x2c;
  local_47 = 0xc;
  local_45 = 2;
  sub_0803DD66(&local_48,0x84,L"Are you sure?");
  sub_080066EC(param_1,&local_48);
  sub_08049150((int)&local_48,0x6009640);
  sub_0803F58C(&local_48,0);
  return;
}


/* sub_08039708 @ 0x08039708 */

undefined4 sub_08039708(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    sub_0803D876(2);
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    sub_0803D876(1);
    return 1;
  }
  return 0;
}


/* sub_08039760 @ 0x08039760 */

void sub_08039760(void)

{
  ushort uVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x1400);
  uStack_14 = 7;
  uStack_10 = 8;
  uStack_c = 0x17;
  uStack_8 = 0xd;
  sub_0803DA10(&uStack_14,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f80;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  return;
}


/* sub_080397AC @ 0x080397AC */

void sub_080397AC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_080397CC @ 0x080397CC */

void sub_080397CC(undefined4 param_1)

{
  undefined1 local_40 [2];
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_20;
  
  sub_0803F540(local_40,0x80,0x28);
  sub_08005096(local_40);
  local_40[0] = 1;
  local_3e = 1;
  local_20 = 0x803f5a5;
  local_34 = &gUnknown_0807012C;
  local_3c = 0x40;
  local_38 = 0x14;
  local_3d = 2;
  sub_0803DADA(local_40,L"Can\'t drop here!");
  sub_080066EC(param_1,local_40);
  sub_08049150((int)local_40,0x6009640);
  sub_0803F58C(local_40,0);
  return;
}


/* sub_0803982C @ 0x0803982C */

bool sub_0803982C(void)

{
  return (DAT_03003304 & 0x3ff) != 0;
}


/* sub_08039854 @ 0x08039854 */

void sub_08039854(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08049DD8;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_08039876 @ 0x08039876 */

undefined4 sub_08039876(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x210)) {
    uVar1 = __call_via_r3();
    return uVar1;
  }
  return 0;
}


/* sub_080398A4 @ 0x080398A4 */

bool sub_080398A4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08000158(0x99);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  return iVar2 == 0;
}


/* sub_080398C4 @ 0x080398C4 */

undefined4 * sub_080398C4(void)

{
  return &DAT_030032b4;
}


/* sub_080398D0 @ 0x080398D0 */

void sub_080398D0(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_080398DC @ 0x080398DC */

void sub_080398DC(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint *puVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  uint *puVar2;
  
  puVar2 = &local_c;
  puVar3 = &local_c;
  local_8 = (uint)(*(ushort *)(param_2 + 0x12) >> 3);
  local_c = 2;
  if (local_8 < 2) {
    puVar2 = &local_8;
  }
  uVar1 = *puVar2;
  *(char *)(param_2 + 0x11) = (char)uVar1;
  if ((uVar1 & 0xff) != 0) {
    local_8 = (uint)*(ushort *)(param_2 + 0x12) * -3 + 0x18;
    local_c = 0xffffff38;
    if (-200 < (int)local_8) {
      puVar3 = &local_8;
    }
    *(short *)(param_2 + 0x176) = (short)*puVar3;
  }
  iVar4 = *(int *)(param_2 + 0x1f0);
  *(undefined2 *)(iVar4 + 0x176) = *(undefined2 *)(param_2 + 0x176);
  iVar4 = *(int *)(iVar4 + 0x1f8);
  *(undefined2 *)(iVar4 + 0x176) = *(undefined2 *)(param_2 + 0x176);
  *(undefined2 *)(*(int *)(iVar4 + 0x1f8) + 0x176) = *(undefined2 *)(param_2 + 0x176);
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  return;
}


/* sub_08039956 @ 0x08039956 */

bool sub_08039956(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,&DAT_030032b8);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return 0x80 < *(ushort *)(param_2 + 0x12);
}


/* sub_08039982 @ 0x08039982 */

void sub_08039982(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B138;
  }
  return;
}


/* sub_0803999C @ 0x0803999C */

undefined4 sub_0803999C(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_2 + 500) == 0) && (iVar1 = *(int *)(param_2 + 0x1f0), iVar1 != 0)) {
    sub_0800ECDA(iVar1,9);
    sub_0800ED18(iVar1,&DAT_030032bc);
    piVar2 = *(int **)(iVar1 + 0x1f8);
    if (piVar2 != (int *)0x0) {
      __call_via_r2(piVar2,9,*(int *)(*piVar2 + 0x28) + *piVar2);
      piVar2 = (int *)piVar2[0x7e];
      if (piVar2 != (int *)0x0) {
        __call_via_r2(piVar2,9,*(int *)(*piVar2 + 0x28) + *piVar2);
      }
    }
  }
  return 0;
}


/* sub_080399A2 @ 0x080399A2 */

undefined4 sub_080399A2(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x34) == 0) && (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0)) {
    sub_0800ECDA(iVar1,9);
    sub_0800ED18(iVar1,&DAT_030032bc);
    piVar2 = *(int **)(iVar1 + 0x1f8);
    if (piVar2 != (int *)0x0) {
      __call_via_r2(piVar2,9,*(int *)(*piVar2 + 0x28) + *piVar2);
      piVar2 = (int *)piVar2[0x7e];
      if (piVar2 != (int *)0x0) {
        __call_via_r2(piVar2,9,*(int *)(*piVar2 + 0x28) + *piVar2);
      }
    }
  }
  return 0;
}


/* sub_080399F8 @ 0x080399F8 */

void sub_080399F8(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0x10;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 2;
  *(undefined2 *)(param_2 + 0x176) = 0xff38;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* sub_08039A16 @ 0x08039A16 */

void sub_08039A16(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_5c;
  undefined4 local_58;
  int iStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 local_3c [10];
  
  local_3c[0] = 0x68;
  local_3c[1] = 0x70;
  local_3c[2] = 0x78;
  local_3c[3] = 0x88;
  local_3c[4] = 0x98;
  local_3c[5] = 0x90;
  local_3c[6] = 0xb8;
  local_3c[7] = 0x88;
  local_3c[8] = 200;
  local_3c[9] = 0x70;
  if (*(short *)((int)param_2 + 0x176) < 0) {
    *(short *)((int)param_2 + 0x176) = *(short *)((int)param_2 + 0x176) + 3;
  }
  if (-1 < *(short *)((int)param_2 + 0x176)) {
    *(undefined2 *)((int)param_2 + 0x176) = 0;
    if (*(short *)((int)param_2 + 0x12) != 0) {
      *(short *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + -1;
    }
    *(char *)((int)param_2 + 0x11) = (char)(*(ushort *)((int)param_2 + 0x12) >> 3);
  }
  iVar2 = param_2[0x7c];
  *(undefined2 *)(iVar2 + 0x176) = *(undefined2 *)((int)param_2 + 0x176);
  iVar2 = *(int *)(iVar2 + 0x1f8);
  *(undefined2 *)(iVar2 + 0x176) = *(undefined2 *)((int)param_2 + 0x176);
  *(undefined2 *)(*(int *)(iVar2 + 0x1f8) + 0x176) = *(undefined2 *)((int)param_2 + 0x176);
  if (*(short *)((int)param_2 + 0x12) == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      sub_0800797C(0x46,0x1e);
      uVar1 = sub_08000158(0x99);
      iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
      iVar3 = 0;
      *(int *)(param_1 + 8) = 5 - iVar2;
      if (0 < 5 - iVar2) {
        do {
          iVar2 = sub_080116FC(&DAT_03001c4c);
          if (0x3ff < iVar2) {
            iVar2 = sub_0803FACC(0x1000);
            local_58 = 0x37;
            local_5c = 0x400;
            uVar1 = sub_0802A81C(0,local_3c + iVar3 * 2,&gUnknown_086FD9D0,4,iVar2 + 0x1000);
            sub_0801191A(&DAT_03001c4c,uVar1);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 8));
      }
    }
    else if (*(int *)(param_1 + 4) == 0x10) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          sub_08049138((int)&local_5c,0x877af78,0x20);
          uStack_50 = (undefined2)local_3c[iVar2 * 2];
          uStack_4e = (undefined2)local_3c[iVar2 * 2 + 1];
          uVar1 = Enemy_Create(0,&local_5c,&gEnemyStats + iStack_54 * 0x1c,0xffffffff);
          sub_0801191A(&DAT_03001c4c,uVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 8));
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}


/* sub_08039B74 @ 0x08039B74 */

bool sub_08039B74(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D3C8;
    }
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,puVar1);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return *(int *)(*(int *)(param_2 + 0x58) + 0xa0) != *(int *)(param_2 + 0x50);
}


/* sub_08039BBA @ 0x08039BBA */

void sub_08039BBA(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BD58;
  }
  return;
}


/* sub_08039BE0 @ 0x08039BE0 */

bool sub_08039BE0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,9,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  return iVar1 == 0;
}


/* sub_08039BFC @ 0x08039BFC */

void sub_08039BFC(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BD10;
  }
  return;
}


/* sub_08039C14 @ 0x08039C14 */

undefined4 sub_08039C14(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_4c [8];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  sub_08046FF4(&local_2c,&stack0xffffffec,8,0x8050751);
  piVar4 = (int *)(param_2 + 0x1a0);
  local_2c = *piVar4 + -0x1000;
  local_28 = *(int *)(param_2 + 0x1a4) + -0x1000;
  local_24 = *piVar4 + 0x3000;
  local_20 = *(int *)(param_2 + 0x1a4) + -0x1000;
  local_3c = 0x1000;
  local_38 = 0xffffd800;
  local_44 = *piVar4 + 0x1000;
  local_40 = *(int *)(param_2 + 0x1a4) + -0x2800;
  local_34 = local_44;
  local_30 = local_40;
  local_1c = local_44;
  local_18 = local_40;
  sub_08049138((int)auStack_4c,0x877afdc,0x20);
  local_40 = CONCAT22((short)((uint)local_28 >> 8),(short)((uint)local_2c >> 8));
  iVar1 = Enemy_Create(0,auStack_4c,&gEnemyStats + local_44 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar1);
  sub_08049138((int)auStack_4c,0x877affc,0x20);
  local_40 = CONCAT22((short)((uint)local_20 >> 8),(short)((uint)local_24 >> 8));
  iVar2 = Enemy_Create(0,auStack_4c,&gEnemyStats + local_44 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar2);
  sub_08049138((int)auStack_4c,0x877b01c,0x20);
  local_40 = CONCAT22((short)((uint)local_18 >> 8),(short)((uint)local_1c >> 8));
  iVar3 = Enemy_Create(0,auStack_4c,&gEnemyStats + local_44 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,iVar3);
  *(char *)(iVar3 + 8) = *(char *)(iVar3 + 8) + -1;
  *(int *)(iVar3 + 500) = param_2;
  *(int *)(iVar1 + 500) = param_2;
  *(int *)(iVar2 + 500) = param_2;
  *(int *)(param_2 + 0x1f0) = iVar3;
  *(int *)(iVar3 + 0x1f8) = iVar1;
  *(int *)(iVar1 + 0x1f8) = iVar2;
  *(int *)(iVar1 + 0x1fc) = iVar3;
  *(int *)(iVar2 + 0x1fc) = iVar1;
  return 1;
}


/* sub_08039D7A @ 0x08039D7A */

undefined4 * sub_08039D7A(void)

{
  return &DAT_030032c4;
}


/* sub_08039D98 @ 0x08039D98 */

undefined4 * sub_08039D98(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_2c [3];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804A800;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 6);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 8);
    iStack_20 = (int)*(short *)(param_2 + 4) - (*(int *)(param_3 + 0x1a0) >> 8);
    iStack_1c = (int)*(short *)(param_2 + 6) - (*(int *)(param_3 + 0x1a4) >> 8);
    iStack_18 = (int)*(short *)(param_2 + 8) - (*(int *)(param_3 + 0x1a8) >> 10);
    aiStack_2c[0] = iStack_20;
    if (iStack_20 < 0) {
      aiStack_2c[0] = -iStack_20;
    }
    aiStack_2c[1] = iStack_1c;
    if (iStack_1c < 0) {
      aiStack_2c[1] = -iStack_1c;
    }
    aiStack_2c[2] = iStack_18;
    if (iStack_18 < 0) {
      aiStack_2c[2] = -iStack_18;
    }
    piVar1 = aiStack_2c + 1;
    if (aiStack_2c[1] <= aiStack_2c[2]) {
      piVar1 = aiStack_2c + 2;
    }
    if (*piVar1 < aiStack_2c[0]) {
      piVar1 = aiStack_2c;
    }
    iVar2 = __16__rt_sdiv(*(undefined2 *)(param_2 + 10),*piVar1 << 8);
    param_1[6] = iVar2;
    if (iVar2 < 1) {
      param_1[6] = 1;
    }
    else {
      uVar3 = __16__rt_sdiv(iVar2,iStack_20 << 8);
      param_1[3] = uVar3;
      uVar3 = __16__rt_sdiv(iVar2,iStack_1c << 8);
      param_1[4] = uVar3;
      uVar3 = __16__rt_sdiv(iVar2,iStack_18 << 10);
      param_1[5] = uVar3;
      uVar3 = sub_08054ADC(iStack_1c);
      sub_08054ADC(iStack_20);
      uVar4 = sub_080549B4();
      uVar5 = sub_080549B4(uVar3);
      sub_080491A0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar4,
                   (int)((ulonglong)uVar4 >> 0x20));
      uVar3 = sub_080532E8();
      uVar3 = sub_08054B3C(uVar3,0x3e22f984);
      sub_08054B3C(uVar3,0x44800000);
      uVar3 = sub_08054A64();
      *(undefined4 *)(param_3 + 0x1ac) = uVar3;
    }
  }
  return param_1;
}


/* sub_08039EB8 @ 0x08039EB8 */

bool sub_08039EB8(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x18) + -1;
  piVar2 = (int *)(param_2 + 0x1a0);
  piVar3 = (int *)(param_2 + 0x1a8);
  *(int *)(param_1 + 0x18) = iVar4;
  if (iVar4 != 0) {
    *piVar2 = *piVar2 + *(int *)(param_1 + 0xc);
    *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(param_1 + 0x10);
    *piVar3 = *piVar3 + *(int *)(param_1 + 0x14);
  }
  else {
    sVar1 = *(short *)(param_1 + 6);
    *piVar2 = (int)*(short *)(param_1 + 4) << 8;
    *(int *)(param_2 + 0x1a4) = (int)sVar1 << 8;
    *piVar3 = (int)*(short *)(param_1 + 8) << 10;
  }
  return iVar4 == 0;
}


/* sub_08039F08 @ 0x08039F08 */

undefined4 * sub_08039F08(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int aiStack_2c [3];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A800;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 4);
    *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_1 + 8);
    iStack_20 = (int)*(short *)(param_1 + 4) - (*(int *)(param_2 + 0x1a0) >> 8);
    iStack_1c = (int)*(short *)(param_1 + 6) - (*(int *)(param_2 + 0x1a4) >> 8);
    iStack_18 = (int)*(short *)(param_1 + 8) - (*(int *)(param_2 + 0x1a8) >> 10);
    aiStack_2c[0] = iStack_20;
    if (iStack_20 < 0) {
      aiStack_2c[0] = -iStack_20;
    }
    aiStack_2c[1] = iStack_1c;
    if (iStack_1c < 0) {
      aiStack_2c[1] = -iStack_1c;
    }
    aiStack_2c[2] = iStack_18;
    if (iStack_18 < 0) {
      aiStack_2c[2] = -iStack_18;
    }
    piVar2 = aiStack_2c + 1;
    if (aiStack_2c[1] <= aiStack_2c[2]) {
      piVar2 = aiStack_2c + 2;
    }
    if (*piVar2 < aiStack_2c[0]) {
      piVar2 = aiStack_2c;
    }
    iVar3 = __16__rt_sdiv(*(undefined2 *)(param_1 + 10),*piVar2 << 8);
    puVar1[6] = iVar3;
    if (iVar3 < 1) {
      puVar1[6] = 1;
    }
    else {
      uVar4 = __16__rt_sdiv(iVar3,iStack_20 << 8);
      puVar1[3] = uVar4;
      uVar4 = __16__rt_sdiv(iVar3,iStack_1c << 8);
      puVar1[4] = uVar4;
      uVar4 = __16__rt_sdiv(iVar3,iStack_18 << 10);
      puVar1[5] = uVar4;
      uVar4 = sub_08054ADC(iStack_1c);
      sub_08054ADC(iStack_20);
      uVar5 = sub_080549B4();
      uVar6 = sub_080549B4(uVar4);
      sub_080491A0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                   (int)((ulonglong)uVar5 >> 0x20));
      uVar4 = sub_080532E8();
      uVar4 = sub_08054B3C(uVar4,0x3e22f984);
      sub_08054B3C(uVar4,0x44800000);
      uVar4 = sub_08054A64();
      *(undefined4 *)(param_2 + 0x1ac) = uVar4;
    }
  }
  return puVar1;
}


/* sub_08039F18 @ 0x08039F18 */

void sub_08039F18(undefined4 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804ABC8;
    sVar1 = *(short *)(param_2 + 6);
    param_1[1] = (int)*(short *)(param_2 + 4);
    param_1[2] = (int)sVar1;
    iVar2 = *(short *)(param_2 + 8) + 0x180;
    param_1[3] = (int)*(short *)(param_2 + 8);
    param_1[4] = iVar2 * iVar2;
  }
  return;
}


/* sub_08039F4E @ 0x08039F4E */

int sub_08039F4E(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = DAT_03001c34;
  if (DAT_03001c34 != 0) {
    piVar1 = (int *)(DAT_03001c34 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(DAT_03001c34 + 0x1a8);
    iVar2 = (*piVar1 >> 8) - *(int *)(param_1 + 4);
    iVar6 = (*(int *)(iVar4 + 0x1a4) >> 8) - *(int *)(param_1 + 8);
    uVar3 = sub_0803FAF6(iVar2 * iVar2 + iVar6 * iVar6);
    iVar4 = *(int *)(param_1 + 0xc);
    iVar5 = __16__rt_sdiv(uVar3);
    iVar4 = __16__rt_sdiv(uVar3,iVar4 * iVar6);
    iVar7 = *(int *)(param_1 + 8);
    *(int *)(param_2 + 0x1a0) = (*(int *)(param_1 + 4) + iVar5) * 0x100;
    *(int *)(param_2 + 0x1a4) = (iVar7 + iVar4) * 0x100;
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = -iVar2;
    }
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    if (iVar5 < iVar4) {
      if (iVar2 < 1) {
        if (iVar6 < 1) {
          *(undefined4 *)(param_2 + 0x1ac) = 0xd0;
        }
        else {
          *(undefined4 *)(param_2 + 0x1ac) = 0xb0;
        }
      }
      else if (iVar6 < 1) {
        *(undefined4 *)(param_2 + 0x1ac) = 0x30;
      }
      else {
        *(undefined4 *)(param_2 + 0x1ac) = 0x50;
      }
    }
    else if (iVar6 < 1) {
      if (iVar2 < 1) {
        *(undefined4 *)(param_2 + 0x1ac) = 0xf0;
      }
      else {
        *(undefined4 *)(param_2 + 0x1ac) = 0x10;
      }
    }
    else if (iVar2 < 1) {
      *(undefined4 *)(param_2 + 0x1ac) = 0x90;
    }
    else {
      *(undefined4 *)(param_2 + 0x1ac) = 0x70;
    }
    iVar4 = 0;
  }
  return iVar4;
}


/* sub_0803A052 @ 0x0803A052 */

void sub_0803A052(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804ABC8;
    sVar1 = *(short *)(param_1 + 6);
    puVar2[1] = (int)*(short *)(param_1 + 4);
    puVar2[2] = (int)sVar1;
    iVar3 = *(short *)(param_1 + 8) + 0x180;
    puVar2[3] = (int)*(short *)(param_1 + 8);
    puVar2[4] = iVar3 * iVar3;
  }
  return;
}


/* sub_0803A08C @ 0x0803A08C */

void sub_0803A08C(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0803A09A @ 0x0803A09A */

void sub_0803A09A(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_48 [4];
  undefined1 auStack_44 [16];
  undefined1 local_34;
  undefined4 local_30;
  undefined *local_2c;
  int *local_28;
  int *local_18;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if ((*(int *)(param_1 + 4) == 0) && (uVar1 - 0x10 < 0x28)) {
    sub_0800FE78(auStack_44,param_2);
    local_34 = (undefined1)param_2[4];
    local_2c = &gUnknown_086B8098;
    local_30 = 0x400;
    local_48[0] = 0;
    local_28 = param_2;
    local_18 = param_2;
    iVar2 = __call_via_r3(DAT_03001c34,0,local_48,*(int *)(*DAT_03001c34 + 0x24) + *DAT_03001c34);
    if (iVar2 != 0) {
      iVar2 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
      *(undefined4 *)(param_1 + 4) = 1;
    }
  }
  uVar3 = (uint)*(ushort *)((int)param_2 + 0x12) << 0x15;
  *(char *)((int)param_2 + 0x11) = (char)(uVar3 >> 0x18);
  if (*(uint *)param_2[0x14] == uVar3 >> 0x18) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0803A138 @ 0x0803A138 */

void sub_0803A138(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0803A146 @ 0x0803A146 */

void sub_0803A146(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0803A16E @ 0x0803A16E */

undefined4 sub_0803A16E(void)

{
  undefined4 uVar1;
  undefined1 auStack_30 [8];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_1c = 0;
  local_20 = 0x400;
  local_24 = *(undefined4 *)(DAT_03001c34 + 0x1a4);
  local_28 = *(int *)(DAT_03001c34 + 0x1a0) + 0x400;
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_28;
  local_c = local_24;
  sub_08049138((int)auStack_30,0x877b050,0x20);
  local_24 = CONCAT22((short)((uint)local_c >> 8),(short)((uint)local_10 >> 8));
  uVar1 = Enemy_Create(0,auStack_30,&gEnemyStats + local_28 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return uVar1;
}


/* sub_0803A1E0 @ 0x0803A1E0 */

void sub_0803A1E0(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  sVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(short *)((int)param_2 + 0x12) = sVar1;
  if (sVar1 == 0x10) {
    iVar2 = sub_0803A16E(param_1);
    *(int *)(param_1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x10) = 2;
    uVar6 = *(undefined4 *)(param_1 + 4);
    puVar3 = (undefined4 *)sub_0803D5B8(8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &_0804C338;
    }
    sub_0800ECDA(uVar6,0x13);
    sub_0800ED18(uVar6,puVar3);
  }
  piVar4 = *(int **)(param_1 + 4);
  if ((piVar4 != (int *)0x0) &&
     (iVar2 = __call_via_r2(piVar4,0,*(int *)(*piVar4 + 0x34) + *piVar4), iVar2 != 0)) {
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar5 = (uint)*(ushort *)((int)param_2 + 0x12) << 0x15;
  *(char *)((int)param_2 + 0x11) = (char)(uVar5 >> 0x18);
  if (*(uint *)param_2[0x14] == uVar5 >> 0x18) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0803A266 @ 0x0803A266 */

bool sub_0803A266(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x1f0) + 0x1f8);
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D738;
    }
    sub_0800ECDA(iVar2,0x12);
    sub_0800ED18(iVar2,puVar1);
  }
  return *(int *)(*(int *)(iVar2 + 0x58) + 0x9c) != *(int *)(iVar2 + 0x50);
}


/* sub_0803A2B4 @ 0x0803A2B4 */

void sub_0803A2B4(void)

{
  return;
}


/* sub_0803A2B6 @ 0x0803A2B6 */

void sub_0803A2B6(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C194;
  }
  return;
}


/* sub_0803A2C8 @ 0x0803A2C8 */

void sub_0803A2C8(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0803A2D6 @ 0x0803A2D6 */

void sub_0803A2D6(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0803A2FE @ 0x0803A2FE */

undefined4 sub_0803A2FE(void)

{
  undefined4 uVar1;
  undefined1 auStack_30 [8];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_1c = 0;
  local_20 = 0xffffec00;
  local_24 = *(undefined4 *)(DAT_03001c34 + 0x1a4);
  local_28 = *(int *)(DAT_03001c34 + 0x1a0) + -0x1400;
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_28;
  local_c = local_24;
  sub_08049138((int)auStack_30,0x877b050,0x20);
  local_24 = CONCAT22((short)((uint)local_c >> 8),(short)((uint)local_10 >> 8));
  uVar1 = Enemy_Create(0,auStack_30,&gEnemyStats + local_28 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return uVar1;
}


/* sub_0803A398 @ 0x0803A398 */

void sub_0803A398(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  sVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(short *)((int)param_2 + 0x12) = sVar1;
  if (sVar1 == 0x10) {
    iVar2 = sub_0803A2FE(param_1);
    *(int *)(param_1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x10) = 3;
    uVar6 = *(undefined4 *)(param_1 + 4);
    puVar3 = (undefined4 *)sub_0803D5B8(8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &_0804C338;
    }
    sub_0800ECDA(uVar6,0x12);
    sub_0800ED18(uVar6,puVar3);
  }
  piVar4 = *(int **)(param_1 + 4);
  if ((piVar4 != (int *)0x0) &&
     (iVar2 = __call_via_r2(piVar4,0,*(int *)(*piVar4 + 0x34) + *piVar4), iVar2 != 0)) {
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar5 = (uint)*(ushort *)((int)param_2 + 0x12) << 0x15;
  *(char *)((int)param_2 + 0x11) = (char)(uVar5 >> 0x18);
  if (*(uint *)param_2[0x14] == uVar5 >> 0x18) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0803A41E @ 0x0803A41E */

bool sub_0803A41E(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x1f0) + 0x1f8) + 0x1f8);
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D98C;
    }
    sub_0800ECDA(iVar2,0x12);
    sub_0800ED18(iVar2,puVar1);
  }
  return *(int *)(*(int *)(iVar2 + 0x58) + 0x9c) != *(int *)(iVar2 + 0x50);
}


/* sub_0803A472 @ 0x0803A472 */

void sub_0803A472(void)

{
  return;
}


/* sub_0803A474 @ 0x0803A474 */

void sub_0803A474(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C630;
  }
  return;
}


