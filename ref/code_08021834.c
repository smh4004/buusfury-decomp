/* Ghidra reference decompilation of code_08021834 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08021834 @ 0x08021834 */

int sub_08021834(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c) - DAT_030019cc;
  iVar1 = *(int *)(param_1 + 0x30) - DAT_030019d0;
  *(int *)(param_1 + 0x20) = iVar2;
  *(int *)(param_1 + 0x24) = iVar1;
  iVar1 = sub_08021762(param_1,param_1 + 0x28,iVar1,*(int *)(param_1 + 0x30),iVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x30);
    iVar1 = 1;
  }
  return iVar1;
}


/* sub_08021874 @ 0x08021874 */

void sub_08021874(void)

{
  DAT_03002bfc = 0;
  DAT_03002bfd = 0;
  DAT_03002dae = 0;
  DAT_03002db0 = 0;
  DAT_03002db2 = 0;
  DAT_03002f38 = 0;
  DAT_03002c1a = 0;
  DAT_03002c1c = 0;
  DAT_03002c1e = 0;
  DAT_03002da4 = 0;
  DAT_03002c04 = 1;
  return;
}


/* sub_080218AC @ 0x080218AC */

void sub_080218AC(int *param_1)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  DAT_03002c04 = 0;
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  REG_DISPCNT = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BG1CNT = 0x1e83;
  sub_0804912C(0x6000000,0,0x9640);
  uStack_1c = 0x1e;
  uStack_18 = 0x14;
  uStack_24 = 0;
  uStack_20 = 0;
  sub_0803DA10(&uStack_24,&DAT_0600f000,1);
  REG_DISPCNT = 0x200;
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  REG_BLDCNT = 0;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08021904 @ 0x08021904 */

void sub_08021904(undefined4 param_1)

{
  undefined2 unaff_r4;
  undefined2 *unaff_r5;
  undefined2 unaff_r6;
  int *unaff_r7;
  
  sub_0803DA10(param_1,&DAT_0600f000);
  *unaff_r5 = unaff_r6;
  sub_08049144(0x5000000,0x805652c,(uint)unaff_r5 >> 0x11);
  sub_08049144(0x5000200,0x805652c,(uint)unaff_r5 >> 0x11);
  REG_BLDCNT = unaff_r4;
  if (unaff_r7 != (int *)0x0) {
    __call_via_r2(unaff_r7,1,*(int *)*unaff_r7 + *unaff_r7);
  }
  return;
}


/* sub_0802193A @ 0x0802193A */

undefined4 sub_0802193A(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_e8 [20];
  byte bStack_d4;
  undefined1 auStack_80 [20];
  byte bStack_6c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  
  DAT_03004a5c = 0;
  DAT_03004a60 = 0;
  do {
    if ((DAT_03002f5c >> 1 < (int)(uint)DAT_03002bfc) ||
       (DAT_03002f5c >> 1 < (int)(uint)DAT_03002bfd)) {
      return 1;
    }
    uStack_18 = 0x98;
    uStack_16 = 0xdc;
    if (DAT_03002f58 == '\x01') {
      sub_08050364(auStack_80);
      sub_08050364(auStack_e8);
      sub_0804912C((int)auStack_80,0,0x68);
      sub_0804912C((int)auStack_e8,0,0x68);
      sub_0801339C(auStack_80,&DAT_03002f68);
      sub_0801339C(auStack_e8,&DAT_03002f88);
      uVar1 = sub_08000158(uRam03002f9c);
      uVar2 = sub_08000158(uRam03002f7c);
      sub_08008E70(&DAT_0300197c,&uStack_18,uVar2,uVar1,param_1 + 4,param_1 + 8,auStack_80,
                   auStack_e8);
    }
    else {
      sub_08050364(auStack_80);
      sub_08050364(auStack_e8);
      sub_080229B0(&DAT_03002f68,auStack_80);
      sub_080229B0(&DAT_03002f88,auStack_e8);
      uVar1 = sub_0801713C(&gUnknown_086B82EC + (uint)bStack_d4 * 0x18);
      uVar2 = sub_0801713C(&gUnknown_086B82EC + (uint)bStack_6c * 0x18);
      sub_08008E70(&DAT_0300197c,&uStack_18,uVar2,uVar1,param_1 + 4,param_1 + 8,auStack_80,
                   auStack_e8);
    }
    iVar3 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
    if (iVar3 == 0) {
      DAT_03002c10 = *(undefined4 *)(param_1 + 8);
    }
    else {
      DAT_03002c10 = *(undefined4 *)(param_1 + 4);
    }
    iVar3 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
    if (iVar3 == 0) {
      DAT_03002c14 = *(undefined4 *)(param_1 + 4);
    }
    else {
      DAT_03002c14 = *(undefined4 *)(param_1 + 8);
    }
    sub_080042FC(&DAT_03001068);
    sub_08010BB8(DAT_03002c10,&DAT_03001c40);
    sub_08010BB8(DAT_03002c14,&DAT_03001c40);
    sub_08010634(DAT_03002c10);
    sub_08010634(DAT_03002c14);
    puVar4 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &_080495B4;
      puVar4[1] = 0;
      puVar4[2] = 4;
    }
    sub_0803D8A0();
    uVar5 = (uint)DAT_03002bfc;
    uVar6 = (uint)DAT_03002bfd;
    puVar4 = (undefined4 *)sub_0803D5B8(0x10);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = uVar5 + uVar6 + 0x6a;
      *puVar4 = &_0804A8AC;
    }
    sub_0803D8A0();
    sub_08004722(&DAT_03001068,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    uVar1 = sub_080195A8(0,*(undefined4 *)(param_1 + 8),0,100);
    sub_0801191A(&DAT_03001c4c,uVar1);
    uVar5 = (uint)DAT_03002bfc;
    uVar6 = (uint)DAT_03002bfd;
    uStack_20 = *(undefined4 *)(param_1 + 4);
    uStack_1c = *(undefined4 *)(param_1 + 8);
    puVar4 = (undefined4 *)sub_0803D5B8(0x34);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &_08049424;
      puVar4[4] = uVar5 + uVar6;
      puVar4[2] = uStack_20;
      puVar4[3] = uStack_1c;
    }
    iVar3 = sub_0803D8A0();
    sub_08004764(&DAT_03001068);
    sub_08011C70(&DAT_03001c4c,0x13,0);
    sub_08011C0C(&DAT_03001c4c,0xf,0);
    if (iVar3 == 1) {
      DAT_03002bfd = DAT_03002bfd + 1;
    }
    else if (iVar3 == 2) {
      DAT_03002bfc = DAT_03002bfc + 1;
    }
    else if ((iVar3 != 3) && (iVar3 == 0xff)) {
      sub_0804019A(&DAT_03002bd4);
      sub_0804014E();
      sub_0803E2EC(&DAT_03003e5c);
      return 2;
    }
    puVar4 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &_080496CC;
      puVar4[1] = 0x100;
      puVar4[2] = 4;
    }
    sub_0803D8A0();
    sub_080106F6(DAT_03002c10);
    sub_080106F6(DAT_03002c14);
    sub_08011B04(&DAT_03001c4c);
  } while (iVar3 != -1);
  return 1;
}


/* sub_08021BF8 @ 0x08021BF8 */

undefined4 * sub_08021BF8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080492D4;
    DAT_03002f3c = 1;
    DAT_03002f40 = 1;
    DAT_03002f44 = 0;
    sub_08049168(0x3002da8,0,4);
    sub_08049168(0x3002f48,0,4);
  }
  return param_1;
}


/* sub_08021C40 @ 0x08021C40 */

void sub_08021C40(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  DAT_03002c00 = 0xb4;
  *(undefined4 *)(param_1 + 0x30) = 0x3c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  DAT_03002c08 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  DAT_03002c0c = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = sub_0802E732(0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  sub_08021BF8(0);
  sub_08040160();
  return;
}


/* sub_08021C7C @ 0x08021C7C */

void sub_08021C7C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  sub_08040182();
  DAT_03002dae = 0;
  DAT_03002db0 = 0;
  DAT_03002db2 = 0;
  DAT_03002f38 = 0;
  DAT_03002c1a = 0;
  DAT_03002c1c = 0;
  DAT_03002c1e = 0;
  DAT_03002da4 = 0;
  return;
}


/* sub_08021CC0 @ 0x08021CC0 */

byte sub_08021CC0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  
  if (DAT_03002c08 != 0) {
    return 0xff;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x2c) < 1)) goto _08021E0A;
  sub_08011A1E(&DAT_03001c4c);
  iVar3 = **(int **)(param_1 + 8);
  iVar3 = __call_via_r1(*(int **)(param_1 + 8),*(int *)(iVar3 + 0x80) + iVar3);
  bVar5 = *(short *)(iVar3 + 0x16) == 0;
  iVar3 = **(int **)(param_1 + 0xc);
  iVar1 = __call_via_r1(*(int **)(param_1 + 0xc),*(int *)(iVar3 + 0x80) + iVar3);
  iVar3 = DAT_03002c00;
  if (*(short *)(iVar1 + 0x16) == 0) {
    bVar5 = bVar5 | 2;
  }
  if ((DAT_03002c00 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x30) + -1, *(int *)(param_1 + 0x30) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x30) = 0x3c;
    DAT_03002c00 = iVar3 + -1;
    if (DAT_03002c00 == 0 && bVar5 == 0) {
      DAT_03002c0c = 1;
    }
  }
  if (0x11b < *(int *)(param_1 + 0x2c)) {
    DAT_03002c0c = 1;
  }
  if (DAT_03002c00 == 0 && bVar5 == 0) {
    bVar5 = 3;
_08021D56:
    if (*(int *)(param_1 + 0x24) == 0) {
      if (bVar5 == 1) {
        if (DAT_03002f5c >> 1 < (int)(DAT_03002bfd + 1)) {
          uVar2 = sub_0802BFBC(0x73,&DAT_0872a6e8);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          uVar2 = sub_0802BFBC(0x70,&DAT_0872a6e8);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
      }
      else if (bVar5 == 2) {
        if (DAT_03002f5c >> 1 < (int)(DAT_03002bfc + 1)) {
          uVar2 = sub_0802BFBC(0x72,&DAT_0872a6e8);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          uVar2 = sub_0802BFBC(0x6f,&DAT_0872a6e8);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
      }
      else {
        uVar2 = sub_0802BFBC(0x71,&DAT_0872a6e8);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
      }
      sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x28) = 0x3c;
    }
    iVar3 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = iVar3;
    if (299 < iVar3) {
      sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x1c));
      if (*(int *)(param_1 + 0x24) != 0) {
        sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x24));
        return bVar5;
      }
      return bVar5;
    }
  }
  else {
    if (bVar5 != 0) goto _08021D56;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    sub_080126D4(&DAT_03002a64,DAT_03002c10);
    sub_080126D4(&DAT_03002a64,DAT_03002c14);
  }
  else {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
_08021E0A:
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (((int)((uint)DAT_03002c1c << 0x1c) < 0) || ((int)((uint)DAT_03002db0 << 0x1c) < 0)) {
      if (*(int *)(param_1 + 0x18) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        if ((int)((uint)DAT_03002c1c << 0x1c) < 0) {
          *(undefined4 *)(param_1 + 0x20) = 1;
        }
        if ((int)((uint)DAT_03002db0 << 0x1c) < 0) {
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
        }
      }
      else if ((-1 < (int)((uint)DAT_03002c1c << 0x1c)) || (-1 < *(int *)(param_1 + 0x20) << 0x1f))
      {
        if (-1 < (int)((uint)DAT_03002db0 << 0x1c)) {
          return 0;
        }
        if (-1 < *(int *)(param_1 + 0x20) << 0x1e) {
          return 0;
        }
      }
      uVar4 = (uint)(*(int *)(param_1 + 0x18) == 0);
      *(uint *)(param_1 + 0x18) = uVar4;
      if (uVar4 == 0) {
        sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x14));
      }
      else {
        uVar2 = sub_0802BFBC(0x27,&DAT_0872a6f0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
    }
  }
  else if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}


/* sub_08021D3C @ 0x08021D3C */

int sub_08021D3C(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  byte *unaff_r7;
  
  if (param_2 + 0x1d <= *(int *)(unaff_r4 + 0x2c)) {
    unaff_r7[0x10] = 1;
    unaff_r7[0x11] = 0;
    unaff_r7[0x12] = 0;
    unaff_r7[0x13] = 0;
  }
  if (*(int *)(unaff_r7 + 4) == 0 && unaff_r5 == 0) {
    unaff_r5 = 3;
  }
  else if (unaff_r5 == 0) {
    *(undefined4 *)(unaff_r4 + 0x2c) = 0;
    goto _08021DEE;
  }
  if (*(int *)(unaff_r4 + 0x24) == 0) {
    if (unaff_r5 == 1) {
      if (*(int *)(*(int *)(unaff_r6 + 0x20) + 4) >> 1 < (int)(unaff_r7[1] + 1)) {
        uVar1 = sub_0802BFBC(0x73,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
      else {
        uVar1 = sub_0802BFBC(0x70,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
    }
    else if (unaff_r5 == 2) {
      if (*(int *)(*(int *)(unaff_r6 + 0x20) + 4) >> 1 < (int)(*unaff_r7 + 1)) {
        uVar1 = sub_0802BFBC(0x72,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
      else {
        uVar1 = sub_0802BFBC(0x6f,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
    }
    else {
      uVar1 = sub_0802BFBC(0x71,&DAT_0872a6e8);
      *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
    }
    sub_0801191A(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x24));
    *(undefined4 *)(unaff_r4 + 0x28) = 0x3c;
  }
  iVar2 = *(int *)(unaff_r4 + 0x2c) + 1;
  *(int *)(unaff_r4 + 0x2c) = iVar2;
  if (299 < iVar2) {
    sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x1c));
    if (*(int *)(unaff_r4 + 0x24) != 0) {
      sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(int *)(unaff_r4 + 0x24));
      return unaff_r5;
    }
    return unaff_r5;
  }
_08021DEE:
  if (*(int *)(unaff_r4 + 0x28) == 0) {
    sub_080126D4(*(undefined4 *)(unaff_r6 + 0x1c),*(undefined4 *)(unaff_r7 + 0x14));
    sub_080126D4(*(undefined4 *)(unaff_r6 + 0x1c),*(undefined4 *)(unaff_r7 + 0x18));
  }
  else {
    *(int *)(unaff_r4 + 0x28) = *(int *)(unaff_r4 + 0x28) + -1;
  }
  if (*(int *)(unaff_r4 + 0x2c) == 0) {
    iVar2 = (uint)*(ushort *)(*(int *)(unaff_r6 + 0x14) + 4) << 0x1c;
    if ((iVar2 < 0) || ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c) < 0)) {
      if (*(int *)(unaff_r4 + 0x18) == 0) {
        *(undefined4 *)(unaff_r4 + 0x20) = 0;
        if ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x14) + 4) << 0x1c) < 0) {
          *(undefined4 *)(unaff_r4 + 0x20) = 1;
        }
        if ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c) < 0) {
          *(uint *)(unaff_r4 + 0x20) = *(uint *)(unaff_r4 + 0x20) | 2;
        }
      }
      else if ((-1 < iVar2) || (-1 < *(int *)(unaff_r4 + 0x20) << 0x1f)) {
        if (-1 < (int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c)) {
          return 0;
        }
        if (-1 < *(int *)(unaff_r4 + 0x20) << 0x1e) {
          return 0;
        }
      }
      uVar3 = (uint)(*(int *)(unaff_r4 + 0x18) == 0);
      *(uint *)(unaff_r4 + 0x18) = uVar3;
      if (uVar3 == 0) {
        sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x14));
      }
      else {
        uVar1 = sub_0802BFBC(0x27,&DAT_0872a6f0);
        *(undefined4 *)(unaff_r4 + 0x14) = uVar1;
        sub_0801191A(*(undefined4 *)(unaff_r6 + 0xc),uVar1);
      }
    }
  }
  else if (*(int *)(unaff_r4 + 0x18) != 0) {
    *(undefined4 *)(unaff_r4 + 0x18) = 0;
    sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x14));
  }
  return 0;
}


/* sub_08021D46 @ 0x08021D46 */

int sub_08021D46(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  byte *unaff_r7;
  
  *(undefined4 *)(unaff_r7 + 0x10) = param_1;
  if (*(int *)(unaff_r7 + 4) == 0 && unaff_r5 == 0) {
    unaff_r5 = 3;
  }
  else if (unaff_r5 == 0) {
    *(undefined4 *)(unaff_r4 + 0x2c) = 0;
    goto _08021DEE;
  }
  if (*(int *)(unaff_r4 + 0x24) == 0) {
    if (unaff_r5 == 1) {
      if (*(int *)(*(int *)(unaff_r6 + 0x20) + 4) >> 1 < (int)(unaff_r7[1] + 1)) {
        uVar1 = sub_0802BFBC(0x73,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
      else {
        uVar1 = sub_0802BFBC(0x70,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
    }
    else if (unaff_r5 == 2) {
      if (*(int *)(*(int *)(unaff_r6 + 0x20) + 4) >> 1 < (int)(*unaff_r7 + 1)) {
        uVar1 = sub_0802BFBC(0x72,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
      else {
        uVar1 = sub_0802BFBC(0x6f,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
    }
    else {
      uVar1 = sub_0802BFBC(0x71,&DAT_0872a6e8);
      *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
    }
    sub_0801191A(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x24));
    *(undefined4 *)(unaff_r4 + 0x28) = 0x3c;
  }
  iVar2 = *(int *)(unaff_r4 + 0x2c) + 1;
  *(int *)(unaff_r4 + 0x2c) = iVar2;
  if (299 < iVar2) {
    sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x1c));
    if (*(int *)(unaff_r4 + 0x24) != 0) {
      sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(int *)(unaff_r4 + 0x24));
      return unaff_r5;
    }
    return unaff_r5;
  }
_08021DEE:
  if (*(int *)(unaff_r4 + 0x28) == 0) {
    sub_080126D4(*(undefined4 *)(unaff_r6 + 0x1c),*(undefined4 *)(unaff_r7 + 0x14));
    sub_080126D4(*(undefined4 *)(unaff_r6 + 0x1c),*(undefined4 *)(unaff_r7 + 0x18));
  }
  else {
    *(int *)(unaff_r4 + 0x28) = *(int *)(unaff_r4 + 0x28) + -1;
  }
  if (*(int *)(unaff_r4 + 0x2c) == 0) {
    iVar2 = (uint)*(ushort *)(*(int *)(unaff_r6 + 0x14) + 4) << 0x1c;
    if ((iVar2 < 0) || ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c) < 0)) {
      if (*(int *)(unaff_r4 + 0x18) == 0) {
        *(undefined4 *)(unaff_r4 + 0x20) = 0;
        if ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x14) + 4) << 0x1c) < 0) {
          *(undefined4 *)(unaff_r4 + 0x20) = 1;
        }
        if ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c) < 0) {
          *(uint *)(unaff_r4 + 0x20) = *(uint *)(unaff_r4 + 0x20) | 2;
        }
      }
      else if ((-1 < iVar2) || (-1 < *(int *)(unaff_r4 + 0x20) << 0x1f)) {
        if (-1 < (int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c)) {
          return 0;
        }
        if (-1 < *(int *)(unaff_r4 + 0x20) << 0x1e) {
          return 0;
        }
      }
      uVar3 = (uint)(*(int *)(unaff_r4 + 0x18) == 0);
      *(uint *)(unaff_r4 + 0x18) = uVar3;
      if (uVar3 == 0) {
        sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x14));
      }
      else {
        uVar1 = sub_0802BFBC(0x27,&DAT_0872a6f0);
        *(undefined4 *)(unaff_r4 + 0x14) = uVar1;
        sub_0801191A(*(undefined4 *)(unaff_r6 + 0xc),uVar1);
      }
    }
  }
  else if (*(int *)(unaff_r4 + 0x18) != 0) {
    *(undefined4 *)(unaff_r4 + 0x18) = 0;
    sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x14));
  }
  return 0;
}


/* sub_08021D5A @ 0x08021D5A */

int sub_08021D5A(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  byte *unaff_r7;
  char in_ZR;
  
  if (in_ZR != '\0') {
    if (unaff_r5 == 1) {
      if (*(int *)(*(int *)(unaff_r6 + 0x20) + 4) >> 1 < (int)(unaff_r7[1] + 1)) {
        uVar1 = sub_0802BFBC(0x73,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
      else {
        uVar1 = sub_0802BFBC(0x70,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
    }
    else if (unaff_r5 == 2) {
      if (*(int *)(*(int *)(unaff_r6 + 0x20) + 4) >> 1 < (int)(*unaff_r7 + 1)) {
        uVar1 = sub_0802BFBC(0x72,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
      else {
        uVar1 = sub_0802BFBC(0x6f,&DAT_0872a6e8);
        *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
      }
    }
    else {
      uVar1 = sub_0802BFBC(0x71,&DAT_0872a6e8);
      *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
    }
    sub_0801191A(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x24));
    *(undefined4 *)(unaff_r4 + 0x28) = 0x3c;
  }
  iVar2 = *(int *)(unaff_r4 + 0x2c) + 1;
  *(int *)(unaff_r4 + 0x2c) = iVar2;
  if (299 < iVar2) {
    sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x1c));
    if (*(int *)(unaff_r4 + 0x24) != 0) {
      sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(int *)(unaff_r4 + 0x24));
      return unaff_r5;
    }
    return unaff_r5;
  }
  if (*(int *)(unaff_r4 + 0x28) == 0) {
    sub_080126D4(*(undefined4 *)(unaff_r6 + 0x1c),*(undefined4 *)(unaff_r7 + 0x14));
    sub_080126D4(*(undefined4 *)(unaff_r6 + 0x1c),*(undefined4 *)(unaff_r7 + 0x18));
  }
  else {
    *(int *)(unaff_r4 + 0x28) = *(int *)(unaff_r4 + 0x28) + -1;
  }
  if (*(int *)(unaff_r4 + 0x2c) == 0) {
    iVar2 = (uint)*(ushort *)(*(int *)(unaff_r6 + 0x14) + 4) << 0x1c;
    if ((iVar2 < 0) || ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c) < 0)) {
      if (*(int *)(unaff_r4 + 0x18) == 0) {
        *(undefined4 *)(unaff_r4 + 0x20) = 0;
        if ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x14) + 4) << 0x1c) < 0) {
          *(undefined4 *)(unaff_r4 + 0x20) = 1;
        }
        if ((int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c) < 0) {
          *(uint *)(unaff_r4 + 0x20) = *(uint *)(unaff_r4 + 0x20) | 2;
        }
      }
      else if ((-1 < iVar2) || (-1 < *(int *)(unaff_r4 + 0x20) << 0x1f)) {
        if (-1 < (int)((uint)*(ushort *)(*(int *)(unaff_r6 + 0x10) + 4) << 0x1c)) {
          return 0;
        }
        if (-1 < *(int *)(unaff_r4 + 0x20) << 0x1e) {
          return 0;
        }
      }
      uVar3 = (uint)(*(int *)(unaff_r4 + 0x18) == 0);
      *(uint *)(unaff_r4 + 0x18) = uVar3;
      if (uVar3 == 0) {
        sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x14));
      }
      else {
        uVar1 = sub_0802BFBC(0x27,&DAT_0872a6f0);
        *(undefined4 *)(unaff_r4 + 0x14) = uVar1;
        sub_0801191A(*(undefined4 *)(unaff_r6 + 0xc),uVar1);
      }
    }
  }
  else if (*(int *)(unaff_r4 + 0x18) != 0) {
    *(undefined4 *)(unaff_r4 + 0x18) = 0;
    sub_08011944(*(undefined4 *)(unaff_r6 + 0xc),*(undefined4 *)(unaff_r4 + 0x14));
  }
  return 0;
}


/* sub_08021EBC @ 0x08021EBC */

void sub_08021EBC(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r1(&DAT_03002dac,*DAT_03002f34 + (int)DAT_03002f34,*DAT_03002f34,param_4,param_4);
  __call_via_r1(&DAT_03002c18,*DAT_03002da0 + (int)DAT_03002da0);
  sub_08007040(param_1);
  return;
}


/* sub_08021EEA @ 0x08021EEA */

void sub_08021EEA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0804023C(param_1,*(undefined2 *)(param_1 + 0x18c),param_3,param_4,param_4);
  return;
}


/* sub_08021EF8 @ 0x08021EF8 */

int sub_08021EF8(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    do {
      if ((int)(param_2 << 0x1f) < 0) {
        iVar1 = iVar1 + 1;
      }
      param_2 = param_2 >> 1;
    } while (param_2 != 0);
  }
  return iVar1;
}


/* sub_08021F0A @ 0x08021F0A */

undefined4 sub_08021F0A(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_18;
  
  local_18 = DAT_03004a80;
  iVar7 = 0;
  iVar8 = DAT_03004a80;
  while( true ) {
    do {
      do {
        iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x20) + *DAT_03004a8c);
        iVar1 = DAT_03004a80;
        if (iVar2 == 0) {
          if (iVar8 != DAT_03004a80) {
            __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x14) + *DAT_03004a8c);
            iVar8 = iVar1;
          }
        }
        else {
          __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x14) + *DAT_03004a8c);
        }
        uVar4 = *(uint *)(param_1 + 0x19c);
        if (local_18 != DAT_03004a80) {
          iVar7 = iVar7 + 1;
          local_18 = DAT_03004a80;
          if (iVar7 == 0x3c) {
            if (DAT_03002c0c != 0) {
              *(undefined2 *)(param_1 + 0x18c) = 0;
              return 1;
            }
            return 0;
          }
        }
      } while (((uVar4 & 3) != 1) ||
              (uVar6 = (uVar4 << 0x1c) >> 0x1e, (uVar4 << 1) >> 0x1e != uVar6));
      uVar5 = 0;
      for (uVar3 = uVar4 & 0xffffff; uVar3 != 0; uVar3 = uVar3 >> 1) {
        if ((int)(uVar3 << 0x1f) < 0) {
          uVar5 = uVar5 + 1;
        }
      }
    } while (uVar5 != (uVar4 << 3) >> 0x1b);
    if (uVar6 == *(ushort *)(param_1 + 400)) break;
    if ((*(ushort *)(param_1 + 400) + 1 & 3) == uVar6) {
      *(ushort *)(param_1 + 0x18c) = (ushort)((uVar4 << 0x12) >> 0x16);
_08021FD0:
      *(ushort *)(param_1 + 400) = *(short *)(param_1 + 400) + 1U & 3;
      return 1;
    }
  }
  *(ushort *)(param_1 + 0x18c) = (ushort)(uVar4 >> 8) >> 6;
  goto _08021FD0;
}


/* sub_08021FDE @ 0x08021FDE */

void sub_08021FDE(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x198) == 0) {
    if ((*(int *)(param_1 + 0x194) == 0) && (iVar1 = sub_08021F0A(param_1), iVar1 == 0)) {
      DAT_03002c08 = 1;
      return;
    }
    DAT_03002da4 = (ushort)(DAT_03002da8 >> 8) >> 6;
    uVar5 = ((DAT_03002da8 << 8) >> 0x16) << 4;
    if (DAT_03002c0c == 0) {
      uVar5 = DAT_03002da8 & 0xff00000f | uVar5 | ((uint)DAT_03003302 << 0x16) >> 8;
    }
    else {
      uVar5 = DAT_03002da8 & 0xff00000f | uVar5;
    }
    uVar2 = (uVar5 & 0xfffffffc) + 1;
    uVar3 = (((uVar5 & 0xfffffffc) + 5 & 0xc) << 0x1c) >> 0x1e;
    uVar4 = uVar3 << 2;
    iVar1 = 0;
    for (uVar5 = uVar4 | uVar2 & 0xfffff3; uVar5 != 0; uVar5 = uVar5 >> 1) {
      if ((int)(uVar5 << 0x1f) < 0) {
        iVar1 = iVar1 + 1;
      }
    }
    uVar5 = uVar4 | uVar2 & 0x80fffff3 | uVar3 << 0x1d;
    DAT_03002da8 = (uint)(iVar1 << 0x1b) >> 3 | uVar5;
    iVar1 = *(int *)(*DAT_03004a8c + 0x20);
    iVar1 = __call_via_r1(DAT_03004a8c,iVar1 + *DAT_03004a8c,iVar1,uVar5,param_4);
    if (iVar1 != 0) {
      __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x14) + *DAT_03004a8c);
    }
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  iVar1 = 1;
  if (3 < *(int *)(param_1 + 0x198)) {
    iVar1 = -4;
  }
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + iVar1;
  sub_0804023C(param_1,*(undefined2 *)(param_1 + 0x18c));
  return;
}


/* sub_080220D8 @ 0x080220D8 */

undefined4 *
sub_080220D8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x200), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804D260;
    param_1[3] = 0;
    param_1[0x74] = param_3;
    piVar3 = param_1 + 0x75;
    *piVar3 = 0;
    param_1[1] = param_4;
    uVar1 = sub_08022470(0,param_2);
    param_1[2] = uVar1;
    sub_0801191A(&DAT_03001c4c,uVar1);
    iVar2 = *piVar3;
    *piVar3 = iVar2 + 1;
    piVar3[iVar2 + 1] = param_1[2];
    sub_08011C0C(&DAT_03001c4c,0x19,param_1 + 3);
    sub_08012846(&DAT_03002a64,param_1 + 3);
  }
  return param_1;
}


/* sub_0802214A @ 0x0802214A */

void sub_0802214A(void)

{
  return;
}


/* sub_0802214C @ 0x0802214C */

void sub_0802214C(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 0x75;
  iVar1 = 0;
  if (0 < *piVar2) {
    do {
      sub_08011944(&DAT_03001c4c,piVar2[iVar1 + 1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *piVar2);
  }
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08022186 @ 0x08022186 */

void sub_08022186(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  piVar5 = (int *)(param_1 + 0x1d4);
  if (*(int *)(param_1 + 4) != 0) {
    local_1c = *(int *)(*(int *)(param_1 + 8) + 0x2c);
    local_18 = *(int *)(*(int *)(param_1 + 8) + 0x30);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar4 = iVar1 * 0x1c + param_1 + 0xc;
        if ((((*(int *)(iVar4 + 4) <= local_1c) && (local_1c < *(int *)(iVar4 + 0xc))) &&
            (*(int *)(iVar4 + 8) <= local_18)) &&
           ((local_18 < *(int *)(iVar4 + 0x10) && (*(int *)(iVar4 + 0x14) == 0)))) {
          *(undefined4 *)(iVar4 + 0x14) = 1;
          piVar2 = *(int **)(param_1 + 0x1d0);
          iVar1 = *piVar2;
          *piVar2 = iVar1 + 1;
          iVar3 = *(int *)(iVar4 + 0x18);
          piVar2[iVar1 * 2 + 2] = *(int *)(iVar4 + 0x1c);
          piVar2[iVar1 * 2 + 1] = iVar3;
          local_24 = *(int *)(iVar4 + 4) + *(int *)(iVar4 + 0xc) >> 1;
          local_20 = *(int *)(iVar4 + 8) + *(int *)(iVar4 + 0x10) >> 1;
          iVar1 = sub_080222E0(0,&local_24);
          sub_08022368();
          sub_0801191A(&DAT_03001c4c,iVar1);
          iVar4 = *piVar5;
          *piVar5 = iVar4 + 1;
          piVar5[iVar4 + 1] = iVar1;
          iVar1 = *(int *)(param_1 + 4) + -1;
          *(int *)(param_1 + 4) = iVar1;
          if (iVar1 == 0) {
            if (*piVar5 < 1) goto _08022262;
            iVar1 = 0;
            goto _08022252;
          }
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
  }
  goto _08022296;
  while (iVar1 = iVar1 + 1, iVar1 < *piVar5) {
_08022252:
    if (piVar5[iVar1 + 1] == *(int *)(param_1 + 8)) goto _08022266;
  }
_08022262:
  iVar1 = -1;
_08022266:
  iVar4 = *piVar5;
  *piVar5 = iVar4 + -1;
  iVar4 = (iVar4 + -1) - iVar1;
  if (iVar4 != 0) {
    sub_08049138((int)(piVar5 + iVar1 + 1),(int)(piVar5 + iVar1 + 2),iVar4 * 4);
  }
  sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 8));
_08022296:
  iVar1 = 0;
  if (0 < *piVar5) {
    do {
      iVar4 = *(int *)piVar5[iVar1 + 1];
      __call_via_r1((int *)piVar5[iVar1 + 1],*(int *)(iVar4 + 8) + iVar4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *piVar5);
  }
  sub_080115B0(&DAT_03001c4c);
  return;
}


/* sub_080222C2 @ 0x080222C2 */

int sub_080222C2(void)

{
  sub_0801157E(&DAT_03001c4c);
  return ((int)((uint)DAT_03003302 << 0x1e) >> 0x1f) + 1;
}


/* sub_080222E0 @ 0x080222E0 */

undefined4 * sub_080222E0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x3c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x200;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x200);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804BA50;
    param_1[10] = &DAT_0872bf04;
    *(undefined1 *)(param_1 + 2) = 8;
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x872a704,0x200);
    *param_1 = &_0804CA80;
    uVar3 = *param_2;
    uVar2 = param_2[1];
    *param_1 = &_0804E120;
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar3;
    param_1[0xd] = param_1[10];
    param_1[0xe] = 0;
  }
  return param_1;
}


/* sub_08022368 @ 0x08022368 */

void sub_08022368(int param_1)

{
  *(undefined **)(param_1 + 0x34) = &gUnknown_0872BF34;
  return;
}


/* sub_0802236E @ 0x0802236E */

void sub_0802236E(int param_1)

{
  *(undefined **)(param_1 + 0x34) = &DAT_0872bf04;
  return;
}


/* sub_08022376 @ 0x08022376 */

void sub_08022376(int param_1)

{
  *(undefined **)(param_1 + 0x34) = &gUnknown_0872BF64;
  return;
}


/* sub_0802237C @ 0x0802237C */

void sub_0802237C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar1;
  iVar1 = *(int *)(param_1 + 0x34) + ((uint)(iVar1 * 0x10000000) >> 0x1e) * 0xc;
  if (*(int *)(param_1 + 0x28) != iVar1) {
    *(int *)(param_1 + 0x28) = iVar1;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
                 (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
  }
  return;
}


/* sub_080223B2 @ 0x080223B2 */

undefined4 sub_080223B2(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x30) - DAT_030019c0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x2c) - DAT_030019bc;
  *(int *)(param_1 + 0x24) = iVar1;
  pcVar5 = *(char **)(param_1 + 0x28);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)*pcVar5;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - (int)pcVar5[1];
  puVar2 = (uint *)*param_2;
  uVar6 = *(uint *)(pcVar5 + 4);
  *puVar2 = uVar6;
  uVar4 = (uint)(*(int *)(param_1 + 0x20) << 0x17) >> 7;
  *puVar2 = uVar4 | uVar6 & 0xfe00ffff;
  *puVar2 = uVar4 | uVar6 & 0xfe00ff00 | *(uint *)(param_1 + 0x24) & 0xff;
  puVar2[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x28) + 4);
  puVar3 = puVar2 + 2;
  *puVar3 = uVar4 | 0x20000000;
  uVar6 = (uint)(*(int *)(param_1 + 0x20) << 0x17) >> 7;
  *puVar3 = uVar4 & 0xfe00ffff | 0x20000000 | uVar6;
  *puVar3 = uVar4 & 0xfe00ff00 | 0x20000000 | uVar6 |
            *(int *)(param_1 + 0x24) + (uint)*(byte *)(*(int *)(param_1 + 0x28) + 3) & 0xff;
  puVar2[3] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[3] & 0xfffff000;
  *param_2 = (int)(puVar2 + 4);
  return 0;
}


/* sub_08022470 @ 0x08022470 */

undefined4 * sub_08022470(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080222E0(param_1,param_2);
  *param_1 = &_0804E41C;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  param_1[0x11] = 0;
  param_1[0xf] = iVar1 << 8;
  param_1[0x10] = iVar2 << 8;
  param_1[0x12] = 0;
  return param_1;
}


/* sub_080224AE @ 0x080224AE */

void sub_080224AE(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar3;
  iVar3 = *(int *)(param_1 + 0x34) + ((uint)(iVar3 * 0x10000000) >> 0x1e) * 0xc;
  if (*(int *)(param_1 + 0x28) != iVar3) {
    *(int *)(param_1 + 0x28) = iVar3;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar3 + 8),
                 (uint)*(byte *)(iVar3 + 3) * (uint)*(byte *)(iVar3 + 2));
  }
  iVar4 = *(int *)(param_1 + 0x48);
  piVar5 = (int *)(param_1 + 0x44);
  iVar3 = __16__rt_sdiv(0x400,(*(int *)(param_1 + 0x44) * 0x300 >> 8) << 8);
  iVar4 = __16__rt_sdiv(0x400,(iVar4 * 0x300 >> 8) << 8);
  *piVar5 = iVar3;
  *(int *)(param_1 + 0x48) = iVar4;
  if ((int)((uint)DAT_03003302 << 0x1a) < 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -0x100;
  }
  if ((int)((uint)DAT_03003302 << 0x1b) < 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 0x100;
  }
  if ((int)((uint)DAT_03003302 << 0x19) < 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -0x100;
  }
  if ((int)((uint)DAT_03003302 << 0x18) < 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x100;
  }
  iVar2 = DAT_030019c8;
  iVar1 = DAT_030019c4;
  iVar4 = DAT_030019c0;
  iVar3 = DAT_030019bc;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *piVar5;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x3c) >> 8;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x40) >> 8;
  if (*(int *)(param_1 + 0x2c) < iVar3) {
    *(int *)(param_1 + 0x2c) = iVar3;
    *(int *)(param_1 + 0x3c) = iVar3 << 8;
    *piVar5 = 0;
  }
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar1;
    *(int *)(param_1 + 0x3c) = iVar1 << 8;
    *piVar5 = 0;
  }
  if (*(int *)(param_1 + 0x30) < iVar4) {
    *(int *)(param_1 + 0x30) = iVar4;
    *(int *)(param_1 + 0x40) = iVar4 << 8;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (iVar2 < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = iVar2;
    *(int *)(param_1 + 0x40) = iVar2 << 8;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}


/* sub_0802262C @ 0x0802262C */

ushort sub_0802262C(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_3 + 0x84);
  iVar1 = __call_via_r1(param_3,iVar1 + *param_3,iVar1,param_4,param_4);
  return *(ushort *)(iVar1 + 4) & 1;
}


/* sub_08022644 @ 0x08022644 */

void sub_08022644(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03002b2c;
  iVar2 = *param_2;
  __call_via_r3(param_2,param_3,iVar2,*(int *)(iVar2 + 4) + iVar2,param_4);
  if (DAT_03002b2c == iVar1) {
    sub_0801268A(&DAT_03002a64,param_2);
  }
  return;
}


/* sub_0802266E @ 0x0802266E */

undefined4 * sub_0802266E(void)

{
  return &DAT_03002f4c;
}


/* sub_0802267C @ 0x0802267C */

ushort sub_0802267C(int param_1,int param_2)

{
  undefined2 local_4;
  
  return (ushort)((uint)(*(int *)(param_1 + 0x118) << 0x18) >> 0x15) |
         *(byte *)(param_1 + 0x114) & 7 | (ushort)((local_4 >> 3 & 0x1fffff00) << 3) & 0xf7ff |
         (ushort)((uint)(param_2 << 0x1f) >> 0x14);
}


/* sub_080226C0 @ 0x080226C0 */

void sub_080226C0(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 *puStack_18;
  
  piStack_1c = param_1;
  puStack_18 = param_2;
  if (param_1[0x47] == 0) {
    iVar2 = __call_via_r2(param_1,param_1 + 1,*(int *)(*param_1 + 0x18) + *param_1);
    param_1[0x48] = iVar2;
  }
  for (iVar2 = 2; iVar4 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c)
      , iVar2 < iVar4; iVar2 = iVar2 + 1) {
    uVar3 = param_1[0x47];
    if (uVar3 < (uint)param_1[0x48]) {
      param_1[0x47] = uVar3 + 1;
      uVar1 = *(undefined1 *)((int)param_1 + uVar3 + 4);
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)((int)&uStack_20 + iVar2) = uVar1;
  }
  uStack_20 = CONCAT22(uStack_20._2_2_,
                       (ushort)(((uint)(param_1[0x47] == param_1[0x48]) << 0x1f) >> 0x14) |
                       (ushort)((uint)(param_1[0x46] << 0x18) >> 0x15) |
                       *(byte *)(param_1 + 0x45) & 7 | uStack_24 & 0xf000);
  *puStack_18 = uStack_20;
  param_1[0x46] = param_1[0x46] + 1;
  if (param_1[0x47] == param_1[0x48]) {
    param_1[0x47] = 0;
    param_1[0x46] = 0;
  }
  return;
}


/* sub_0802277A @ 0x0802277A */

void sub_0802277A(int *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uStack_2c;
  undefined4 local_28;
  ushort local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  
  local_28 = *param_2;
  local_24 = (ushort)local_28;
  local_18 = param_1 + 0x48;
  local_1c = param_1 + 0x41;
  local_20 = param_1 + 0x21;
  if ((local_28 & 7) != (uint)*(byte *)(param_1 + 0x4a)) {
    sub_0804912C((int)local_20,-1,0x80);
    sub_0804912C((int)local_1c,0,0x10);
    param_1[0x49] = 0xffff;
    *(byte *)(local_18 + 2) = (byte)local_24 & 7;
  }
  iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c);
  uVar3 = (((uint)local_24 << 0x15) >> 0x18) * (iVar2 + -2);
  iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c);
  if ((int)(iVar2 + uVar3) < 0x80) {
    for (iVar2 = 2;
        iVar4 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c),
        iVar2 < iVar4; iVar2 = iVar2 + 1) {
      *(byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x104) =
           *(byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x104) | (byte)(2 << (uVar3 & 7));
      *(undefined1 *)((int)param_1 + uVar3 + 0x84) = *(undefined1 *)((int)&local_28 + iVar2);
      uVar3 = uVar3 + 1;
    }
    if ((int)((uint)local_24 << 0x14) < 0) {
      param_1[0x49] = (((uint)local_24 << 0x15) >> 0x18) + 1;
    }
    if (param_1[0x49] != 0xffff) {
      uVar3 = 0;
      uStack_2c = 0;
      if (param_1[0x49] != 0) {
        do {
          bVar1 = false;
          for (iVar2 = 2;
              iVar4 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c),
              iVar2 < iVar4; iVar2 = iVar2 + 1) {
            if (((uint)*(byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x104) & 2 << (uVar3 & 7)) != 0)
            {
              bVar1 = true;
            }
            uVar3 = uVar3 + 1;
          }
          if (!bVar1) {
            return;
          }
          uStack_2c = uStack_2c + 1;
        } while (uStack_2c < (uint)param_1[0x49]);
      }
      __call_via_r3(param_1,local_20,(char)local_18[2],*(int *)(*param_1 + 0x1c) + *param_1);
      sub_0804912C((int)local_20,-1,0x80);
      sub_0804912C((int)local_1c,0,0x10);
      param_1[0x49] = 0xffff;
    }
  }
  else {
    sub_0804912C((int)local_20,-1,0x80);
    sub_0804912C((int)local_1c,0,0x10);
    param_1[0x49] = 0xffff;
  }
  return;
}


/* sub_08022904 @ 0x08022904 */

void sub_08022904(ushort *param_1,undefined1 *param_2)

{
  *param_2 = 0;
  *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 2);
  *(short *)(param_2 + 4) = (short)*(undefined4 *)(param_1 + 4);
  param_2[6] = (char)*(undefined4 *)(param_1 + 6);
  param_2[7] = (char)*(undefined4 *)(param_1 + 8);
  param_2[8] = (char)*(undefined4 *)(param_1 + 10);
  param_2[9] = (char)*(undefined4 *)(param_1 + 0xc);
  param_2[10] = 0x2d;
  param_2[0xb] = 1;
  param_2[0xc] = 7;
  param_2[0xd] = 0;
  *(uint *)(param_2 + 0x14) = (uint)*param_1;
  return;
}


/* sub_08022934 @ 0x08022934 */

void sub_08022934(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = sub_080135D2(param_2);
  *param_1 = uVar1;
  param_1[1] = *(undefined1 *)(param_2 + 0xc);
  param_1[2] = *(undefined1 *)(param_2 + 0x15);
  iVar3 = 0;
  do {
    param_1[iVar3 + 3] = *(undefined1 *)(param_2 + iVar3 + 0xd);
    iVar2 = iVar3 + 1;
    param_1[iVar3 + 9] = *(undefined1 *)(iVar3 * 2 + param_2 + 0x2e);
    iVar3 = iVar2;
  } while (iVar2 < 6);
  param_1[0xf] = *(undefined1 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x1c);
  param_1[0x14] = *(undefined1 *)(param_2 + 0x28);
  param_1[0x15] = *(undefined1 *)(param_2 + 0x29);
  param_1[0x16] = *(undefined1 *)(param_2 + 0x2a);
  param_1[0x17] = *(undefined1 *)(param_2 + 0x2b);
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 4;
    iVar4 = iVar3 * 2;
    iVar3 = iVar3 + 1;
    *(short *)(param_1 + iVar4 + 0x18) = (short)*(undefined4 *)(iVar2 + param_2 + 0x3c);
  } while (iVar3 < 4);
  return;
}


/* sub_080229B0 @ 0x080229B0 */

void sub_080229B0(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  sub_08046CBC(param_2,0x68);
  *param_2 = 2;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  iVar3 = sub_08013378(*param_1);
  do {
    *(int *)(param_2 + 0x24) = iVar3;
  } while (*(int *)(param_2 + 0x24) != iVar3);
  iVar3 = 0;
  param_2[0xc] = param_1[1];
  param_2[0x15] = param_1[2];
  do {
    param_2[iVar3 + 0xd] = param_1[iVar3 + 3];
    cVar1 = param_1[iVar3 + 9];
    do {
      param_2[iVar3 * 2 + 0x2e] = cVar1;
    } while (param_2[iVar3 * 2 + 0x2e] != cVar1);
    do {
      param_2[iVar3 * 2 + 0x2f] = cVar1;
    } while (param_2[iVar3 * 2 + 0x2f] != cVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  sVar2 = *(short *)(param_1 + 0x10);
  do {
    *(short *)(param_2 + 0x16) = sVar2;
  } while (*(short *)(param_2 + 0x16) != sVar2);
  do {
    *(short *)(param_2 + 0x18) = sVar2;
  } while (*(short *)(param_2 + 0x18) != sVar2);
  sVar2 = *(short *)(param_1 + 0x12);
  do {
    *(short *)(param_2 + 0x1a) = sVar2;
  } while (*(short *)(param_2 + 0x1a) != sVar2);
  do {
    *(short *)(param_2 + 0x1c) = sVar2;
  } while (*(short *)(param_2 + 0x1c) != sVar2);
  cVar1 = param_1[0x14];
  do {
    param_2[0x28] = cVar1;
  } while (param_2[0x28] != cVar1);
  cVar1 = param_1[0x15];
  do {
    param_2[0x29] = cVar1;
  } while (param_2[0x29] != cVar1);
  cVar1 = param_1[0x16];
  do {
    param_2[0x2a] = cVar1;
  } while (param_2[0x2a] != cVar1);
  cVar1 = param_1[0x17];
  do {
    param_2[0x2b] = cVar1;
  } while (param_2[0x2b] != cVar1);
  param_2[0x14] = param_1[0xf];
  iVar3 = 0;
  do {
    sVar2 = *(short *)(param_1 + iVar3 * 2 + 0x18);
    do {
      *(int *)(param_2 + iVar3 * 4 + 0x3c) = (int)sVar2;
    } while (*(int *)(param_2 + iVar3 * 4 + 0x3c) != (int)sVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)(byte)param_2[0x14] * 0x18] << 0x1e) < 0) {
    sVar2 = *(short *)(param_2 + 0x1c);
    do {
      *(short *)(param_2 + 0x20) = sVar2;
    } while (*(short *)(param_2 + 0x20) != sVar2);
  }
  if (((&gUnknown_086B82EC)[(uint)(byte)param_2[0x14] * 0x18] & 1) != 0) {
    sVar2 = *(short *)(param_2 + 0x1c);
    do {
      *(short *)(param_2 + 0x1e) = sVar2;
    } while (*(short *)(param_2 + 0x1e) != sVar2);
  }
  return;
}


/* sub_08022AF6 @ 0x08022AF6 */

void sub_08022AF6(int param_1)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  sub_08011B04(&DAT_03001c4c);
  sub_080115B0(&DAT_03001c4c);
  sub_0801157E(&DAT_03001c4c);
  sub_08049144(0x5000200,0x805652c,0x200);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0xa80);
  uStack_1c = 0xc;
  uStack_18 = 9;
  uStack_14 = 0x12;
  uStack_10 = 0x10;
  sub_0803DA10(&uStack_1c,&DAT_0600f800,0x259);
  REG_BG1CNT = 0x1e83;
  REG_BG0CNT = 0x1f80;
  REG_DISPCNT = 0x1340;
  *(undefined1 *)(param_1 + 0x140) = 1;
  return;
}


/* sub_08022B6C @ 0x08022B6C */

void sub_08022B6C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  sub_08049138(param_1 + 0x5f4,0x3001068,0x8a8);
  sub_080042FC(&DAT_03001068);
  uVar2 = sub_08014124(0,param_1,0x78,0x26,L"Battle with your friends in the Dojo!",0x75,1,
                       &gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08014124(0,param_1,0x78,0x82,L"Choose your character!",0x75,1,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  iVar3 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar2 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08013E64(0,param_1,1,iVar3 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08014124(0,param_1,iVar3 + 0x2e,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08013E64(0,param_1,4,0xb,0x56,4,1,1);
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08013E64(0,param_1,5,0xd6,0x56,5,1,1);
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  sub_0800664E(param_1,uVar2);
  sub_08022AF6(param_1);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (DAT_03002f58 == '\0') {
    iVar3 = 0;
    piVar6 = (int *)(param_1 + 0x584);
    do {
      iVar4 = iVar3 * 0x68 + param_1;
      bVar1 = *(byte *)(iVar4 + 0xaec);
      if (((bVar1 & 1) != 0) && ((int)((uint)bVar1 << 0x1e) < 0)) {
        iVar5 = *piVar6;
        *piVar6 = iVar5 + 1;
        piVar6[iVar5 * 3 + 3] = iVar3;
        iVar4 = sub_0801713C(&gUnknown_086B82EC + (uint)*(byte *)(iVar4 + 0xb00) * 0x18);
        piVar6[iVar5 * 3 + 1] = iVar4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
  }
  sub_08050620(0);
  sub_08040160();
  return;
}


/* sub_08022D68 @ 0x08022D68 */

void sub_08022D68(int *param_1)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  sub_08011B04(&DAT_03001c4c);
  sub_080115B0(&DAT_03001c4c);
  sub_0801157E(&DAT_03001c4c);
  sub_08049138(0x3001068,(int)(param_1 + 0x17d),0x8a8);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08022DAA @ 0x08022DAA */

undefined4 sub_08022DAA(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (DAT_03002f58 == '\0') {
    uVar1 = sub_0800EB60(0,*(undefined4 *)(param_2 * 0xc + param_1 + 0x588),&DAT_03001b0c);
    return uVar1;
  }
  if (DAT_03002f58 == '\x01') {
    uVar1 = sub_08000158(*(undefined2 *)(&DAT_0872bfcc + param_2 * 0x1c));
    uVar1 = sub_0800EB60(0,uVar1,&DAT_03001b0c);
    return uVar1;
  }
  return 0;
}


/* sub_08022DF4 @ 0x08022DF4 */

void sub_08022DF4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = 0x20;
  if (DAT_03002f58 != '\x01') {
    iVar3 = *(int *)(param_1 + 0x584);
  }
  cVar1 = *(char *)(param_1 + 0x140);
  if (cVar1 == '\0') {
    iVar3 = **(int **)(param_1 + 0x134);
    iVar3 = __call_via_r2(*(int **)(param_1 + 0x134),1,*(int *)(iVar3 + 0x34) + iVar3);
    if (iVar3 == 0) {
      iVar3 = **(int **)(param_1 + 0x134);
      __call_via_r2(*(int **)(param_1 + 0x134),1,*(int *)(iVar3 + 0x28) + iVar3);
    }
    else {
      iVar3 = **(int **)(param_1 + 0x130);
      iVar3 = __call_via_r2(*(int **)(param_1 + 0x130),0,*(int *)(iVar3 + 0x34) + iVar3);
      if (iVar3 == 0) {
        iVar3 = **(int **)(param_1 + 0x130);
        __call_via_r2(*(int **)(param_1 + 0x130),0,*(int *)(iVar3 + 0x28) + iVar3);
      }
      else {
        iVar3 = **(int **)(param_1 + 0x138);
        iVar3 = __call_via_r2(*(int **)(param_1 + 0x138),0,*(int *)(iVar3 + 0x34) + iVar3);
        if (iVar3 == 0) {
          iVar3 = **(int **)(param_1 + 0x138);
          __call_via_r2(*(int **)(param_1 + 0x138),0,*(int *)(iVar3 + 0x28) + iVar3);
        }
        else {
          iVar3 = **(int **)(param_1 + 300);
          iVar3 = __call_via_r2(*(int **)(param_1 + 300),0,*(int *)(iVar3 + 0x34) + iVar3);
          if (iVar3 == 0) {
            iVar3 = **(int **)(param_1 + 300);
            __call_via_r2(*(int **)(param_1 + 300),0,*(int *)(iVar3 + 0x28) + iVar3);
          }
          else {
            iVar3 = **(int **)(param_1 + 0x13c);
            iVar3 = __call_via_r2(*(int **)(param_1 + 0x13c),0,*(int *)(iVar3 + 0x34) + iVar3);
            if (iVar3 == 0) {
              iVar3 = **(int **)(param_1 + 0x13c);
              __call_via_r2(*(int **)(param_1 + 0x13c),0,*(int *)(iVar3 + 0x28) + iVar3);
            }
          }
        }
      }
    }
  }
  else if (cVar1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0x11c) + -2;
    sub_08011B04(&DAT_03001c4c);
    iVar8 = 0;
    do {
      if ((iVar9 < 0) || (iVar3 <= iVar9)) {
        *(undefined4 *)(iVar8 * 4 + param_1 + 300) = 0;
      }
      else {
        piVar4 = (int *)sub_08022DAA(param_1,iVar9);
        iVar6 = iVar8 * 4 + param_1;
        *(int **)(iVar6 + 300) = piVar4;
        if (*(int *)(param_1 + 0x11c) == iVar9) {
          __call_via_r2(piVar4,1,*(int *)(*piVar4 + 0x28) + *piVar4);
        }
        iVar7 = *(int *)(iVar6 + 300);
        bVar2 = *(byte *)(*(int *)(iVar7 + 0x58) + 8);
        *(uint *)(iVar7 + 0x70) = 0x6a - (uint)(*(byte *)(*(int *)(iVar7 + 0x58) + 9) >> 1);
        *(uint *)(iVar7 + 0x6c) = (iVar8 * 0x2a + 0x23) - (uint)(bVar2 >> 1);
        sub_0801191A(&DAT_03001c4c,*(undefined4 *)(iVar6 + 300));
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(param_1 + 300) != 0) {
      sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 300));
    }
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x130);
    piVar4 = *(int **)(param_1 + 0x134);
    *(int **)(param_1 + 0x130) = piVar4;
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 0x13c) = 0;
    if (piVar4 != (int *)0x0) {
      __call_via_r2(piVar4,0,*(int *)(*piVar4 + 0x28) + *piVar4);
    }
    iVar8 = **(int **)(param_1 + 0x134);
    __call_via_r2(*(int **)(param_1 + 0x134),1,*(int *)(iVar8 + 0x28) + iVar8);
    if (*(int *)(param_1 + 0x11c) + 2 < iVar3) {
      uVar5 = sub_08022DAA(param_1);
      *(undefined4 *)(param_1 + 0x13c) = uVar5;
      sub_0801191A(&DAT_03001c4c,uVar5);
    }
    iVar3 = 0;
    do {
      iVar8 = *(int *)(iVar3 * 4 + param_1 + 300);
      if (iVar8 != 0) {
        bVar2 = *(byte *)(*(int *)(iVar8 + 0x58) + 8);
        *(uint *)(iVar8 + 0x70) = 0x6a - (uint)(*(byte *)(*(int *)(iVar8 + 0x58) + 9) >> 1);
        *(uint *)(iVar8 + 0x6c) = (iVar3 * 0x2a + 0x23) - (uint)(bVar2 >> 1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  else if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x13c) != 0) {
      sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x13c));
    }
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x134);
    piVar4 = *(int **)(param_1 + 0x130);
    *(int **)(param_1 + 0x134) = piVar4;
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 300);
    *(undefined4 *)(param_1 + 300) = 0;
    __call_via_r2(piVar4,1,*(int *)(*piVar4 + 0x28) + *piVar4);
    piVar4 = *(int **)(param_1 + 0x138);
    if (piVar4 != (int *)0x0) {
      __call_via_r2(piVar4,0,*(int *)(*piVar4 + 0x28) + *piVar4);
    }
    if (-1 < *(int *)(param_1 + 0x11c) + -2) {
      uVar5 = sub_08022DAA(param_1,*(int *)(param_1 + 0x11c) + -2);
      *(undefined4 *)(param_1 + 300) = uVar5;
      sub_0801191A(&DAT_03001c4c,uVar5);
    }
    iVar3 = 0;
    do {
      iVar8 = *(int *)(iVar3 * 4 + param_1 + 300);
      if (iVar8 != 0) {
        bVar2 = *(byte *)(*(int *)(iVar8 + 0x58) + 8);
        *(uint *)(iVar8 + 0x70) = 0x6a - (uint)(*(byte *)(*(int *)(iVar8 + 0x58) + 9) >> 1);
        *(uint *)(iVar8 + 0x6c) = (iVar3 * 0x2a + 0x23) - (uint)(bVar2 >> 1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  *(char *)(param_1 + 0x140) = '\0';
  return;
}


/* sub_0802309C @ 0x0802309C */

void sub_0802309C(int param_1)

{
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [52];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (DAT_03002f58 == '\0') {
    *(uint *)(*(int *)(param_1 + 0x118) + 8) =
         (uint)(*(int *)(param_1 + 0x11c) < *(int *)(param_1 + 0x584) + -1);
  }
  else if (DAT_03002f58 == '\x01') {
    *(uint *)(*(int *)(param_1 + 0x118) + 8) = (uint)(*(int *)(param_1 + 0x11c) < 0x1f);
  }
  *(uint *)(*(int *)(param_1 + 0x114) + 8) = (uint)(0 < *(int *)(param_1 + 0x11c));
  sub_0803F540(auStack_48,0xf0,0xa0);
  sub_08006718(param_1,auStack_48,0x5f,1);
  auStack_48[0] = 1;
  uStack_44 = 0x78;
  uStack_40 = 0x30;
  if (DAT_03002f58 == '\x01') {
    sub_0803DC96(auStack_48,&_08023490,
                 *(undefined4 *)(&gUIStringPtrs + (*(int *)(param_1 + 0x11c) + 0x74) * 4));
  }
  else {
    sub_0803DC96(auStack_48,&_08023490,
                 *(undefined4 *)
                  (&gUIStringPtrs +
                  (((int *)(param_1 + 0x584))[*(int *)(param_1 + 0x11c) * 3 + 3] + 0x9e) * 4));
  }
  sub_08049150((int)auStack_48,0x6000040);
  sub_0803F540(auStack_7c,0x30,0x38);
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0x30;
  uStack_80 = 0x38;
  sub_0803F974(auStack_7c,&uStack_8c,0);
  uStack_8c = 10;
  uStack_88 = 2;
  uStack_84 = 0x25;
  uStack_80 = 0x2c;
  sub_08004F50(auStack_7c,&uStack_8c);
  sub_08049150((int)auStack_7c,0x6009640);
  sub_08022DF4(param_1);
  sub_0803F58C(auStack_7c,0);
  sub_0803F58C(auStack_48,0);
  return;
}


/* sub_080231AE @ 0x080231AE */

void sub_080231AE(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar2 = DAT_0300155c;
  *(int *)(param_1 + 0x580) = DAT_0300155c;
  bVar6 = iVar2 != 0;
  iVar2 = 0;
  do {
    cVar1 = (&DAT_0300106a)[iVar2];
    *(char *)(param_1 + iVar2 + 0x141) = cVar1;
    if (cVar1 != '\0') {
      bVar6 = true;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x53);
  piVar5 = (int *)(param_1 + 0x194);
  iVar2 = 0;
  if (DAT_0300114c < 1) {
    if (!bVar6) goto _0802329C;
  }
  else {
    do {
      uVar3 = (&DAT_03001150)[iVar2];
      iVar2 = iVar2 + 1;
      iVar4 = *piVar5;
      *piVar5 = iVar4 + 1;
      piVar5[iVar4 + 1] = uVar3 & 0xfffffff;
    } while (iVar2 < DAT_0300114c);
  }
  sub_08049138(0x3001068,param_1 + 0x5f4,0x8a8);
  DAT_0300155c = DAT_0300155c + *(int *)(param_1 + 0x580);
  iVar2 = 0;
  do {
    uVar3 = (uint)(byte)(&DAT_0300106a)[iVar2] + (uint)*(byte *)(param_1 + iVar2 + 0x141);
    if (uVar3 < 0x100) {
      (&DAT_0300106a)[iVar2] = (char)uVar3;
    }
    else {
      (&DAT_0300106a)[iVar2] = 0xff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x53);
  iVar2 = 0;
  if (0 < *piVar5) {
    do {
      sub_08004448(&DAT_03001068,piVar5[iVar2 + 1]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar5);
  }
  sub_08049138(param_1 + 0x5f4,0x3001068,0x8a8);
  sub_080049F2(&DAT_03001068,DAT_03001910);
_0802329C:
  sub_080042FC(&DAT_03001068);
  return;
}


/* sub_080232A6 @ 0x080232A6 */

undefined4 sub_080232A6(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    if (DAT_03002f58 == '\x01') {
      sub_08011B04(&DAT_03001c4c);
      sub_080115B0(&DAT_03001c4c);
      sub_0801157E(&DAT_03001c4c);
      uVar1 = REG_DISPCNT;
      REG_DISPCNT = uVar1 & 0xfeff;
      uVar5 = *(undefined4 *)(param_1 + 0x11c);
      puVar3 = (undefined4 *)sub_0803D5B8(0x130);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_0804920C;
        puVar3[1] = 0;
        puVar3[0x43] = 0;
        puVar3[0x42] = 0;
        puVar3[0x44] = 0;
        *(undefined1 *)(puVar3 + 0x45) = 0;
        *puVar3 = &_0804AFA0;
        puVar3[0x4a] = 1;
        puVar3[0x47] = 0;
        puVar3[0x46] = uVar5;
      }
      iVar2 = sub_0803D8A0();
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0x120) = DAT_03002fb0;
        sub_0800432C(&DAT_03001068);
        sub_08022904(&DAT_0872bfcc + *(int *)(param_1 + 0x11c) * 0x1c,&DAT_03002f68);
        sub_08022904(&DAT_0872bfcc + *(int *)(param_1 + 0x120) * 0x1c,&DAT_03002f88);
        sub_0801711C(&gUnknown_086B82EC +
                     (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
        sub_080401C2();
        puVar3 = (undefined4 *)sub_0803D5B8(0x40c);
        if (puVar3 != (undefined4 *)0x0) {
          sub_080176AC(puVar3);
          *puVar3 = &_0804BBA4;
          puVar3[0x102] = 0x10;
          puVar3[0x101] = 0;
        }
        sub_0803D8A0(puVar3);
        puVar3 = (undefined4 *)sub_0803D5B8(0xc);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &_08049450;
        }
        iVar2 = sub_0803D8A0();
        if (iVar2 == 1) {
          sub_08050620(0);
          sub_08040160();
          sub_08022AF6(param_1);
          sub_080231AE(param_1);
          sub_0804019A(&DAT_03002bd4);
        }
        return 0;
      }
    }
    if (DAT_03002f58 == '\0') {
      sub_08011B04(&DAT_03001c4c);
      sub_080115B0(&DAT_03001c4c);
      sub_0801157E(&DAT_03001c4c);
      uVar1 = REG_DISPCNT;
      REG_DISPCNT = uVar1 & 0xfeff;
      sub_08022934(&DAT_03002f68,
                   *(int *)(*(int *)(param_1 + 0x11c) * 0xc + param_1 + 0x590) * 0x68 + param_1 +
                   0xaec);
      puVar7 = &DAT_03002f68;
      uVar6 = sub_0803D5B8(0x130);
      puVar4 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
      puVar3 = (undefined4 *)uVar6;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_0804920C;
        puVar3[1] = 0;
        puVar3[0x43] = 0;
        puVar3[0x42] = 0;
        puVar3[0x44] = 0;
        *(undefined1 *)(puVar3 + 0x45) = 0;
        *puVar3 = &_0804AFA0;
        puVar3[0x4a] = 0;
        puVar3[0x47] = 0;
        puVar3[0x48] = puVar7;
        puVar3[0x49] = &DAT_03002f88;
        puVar4 = puVar3 + 0x4a;
      }
      iVar2 = sub_0803D8A0(puVar3,puVar4);
      if (iVar2 == 2) {
        sub_0800432C(&DAT_03001068);
        sub_0801711C(&gUnknown_086B82EC +
                     (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
        sub_080401C2();
        puVar3 = (undefined4 *)sub_0803D5B8(0x40c);
        if (puVar3 != (undefined4 *)0x0) {
          sub_080176AC(puVar3);
          *puVar3 = &_0804BBA4;
          puVar3[0x102] = 0x10;
          puVar3[0x101] = 0;
        }
        sub_0803D8A0(puVar3);
        puVar3 = (undefined4 *)sub_0803D5B8(0xc);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &_08049450;
        }
        iVar2 = sub_0803D8A0();
        if (iVar2 == 1) {
          sub_08050620(0);
          sub_08040160();
          sub_08022AF6(param_1);
          sub_080231AE(param_1);
          sub_0804019A(&DAT_03002bd4);
        }
        return 0;
      }
    }
    sub_08050620(0);
    sub_08040160();
    sub_08022AF6(param_1);
    sub_0804019A(&DAT_03002bd4);
  }
  else {
    if (param_3 == 1) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
      iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)sub_0803D5B8(0x13c);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &_0804920C;
          puVar3[1] = 0;
          puVar3[0x43] = 0;
          puVar3[0x42] = 0;
          puVar3[0x44] = 0;
          *puVar3 = &_0804A3BC;
        }
        sub_0803D850();
        return 1;
      }
      puVar3 = (undefined4 *)sub_0803D5B8(0x2fc);
      if (puVar3 != (undefined4 *)0x0) {
        sub_08005460(puVar3,0x5e,0xd,1);
        *puVar3 = &_08049B2C;
        puVar3[0xbe] = 1;
      }
      sub_0803D850(puVar3);
      return 1;
    }
    if (param_3 == 4) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + -1;
      *(undefined1 *)(param_1 + 0x140) = 3;
    }
    else if (param_3 == 5) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
      *(undefined1 *)(param_1 + 0x140) = 2;
    }
  }
  return 0;
}


/* sub_0802361A @ 0x0802361A */

void sub_0802361A(undefined4 param_1)

{
  sub_080115B0(&DAT_03001c4c);
  sub_080067D6(param_1);
  return;
}


/* sub_0802362E @ 0x0802362E */

undefined4 sub_0802362E(undefined4 param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  sub_0801157E(&DAT_03001c4c);
  sub_08011A1E(&DAT_03001c4c);
  if (DAT_03002f50 == 0) {
    uVar4 = sub_080067F4(param_1);
  }
  else {
    DAT_03002f50 = 0;
    sub_08011B04(&DAT_03001c4c);
    sub_080115B0(&DAT_03001c4c);
    sub_0801157E(&DAT_03001c4c);
    uVar1 = REG_DISPCNT;
    REG_DISPCNT = uVar1 & 0xfeff;
    puVar2 = (undefined4 *)sub_0803D5B8(0x11c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804920C;
      puVar2[1] = 0;
      puVar2[0x43] = 0;
      puVar2[0x42] = 0;
      puVar2[0x44] = 0;
      *(undefined1 *)(puVar2 + 0x45) = 0;
      *puVar2 = &_0804B550;
      puVar2[0x46] = 0;
    }
    iVar3 = sub_0803D8A0();
    if (iVar3 == 2) {
      puVar2 = (undefined4 *)sub_0803D5B8(0xf6c);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804CAA8;
        puVar2[0x65] = 0;
        puVar2[0x161] = 0;
        sub_08004838(puVar2 + 0x17d);
        sub_08046FF4((int)puVar2 + 0xeca,(int)puVar2 + 0xed6,2,0x8050869);
        sub_08046FF4(puVar2 + 0x3b6,puVar2 + 0x3ba,4,0x8050535);
        sub_08046FF4((int)puVar2 + 0xf32,(int)puVar2 + 0xf3e,2,0x8050869);
        sub_08046FF4(puVar2 + 0x3d0,puVar2 + 0x3d4,4,0x8050535);
      }
      sub_0803D850(puVar2);
      uVar4 = 0;
    }
    else {
      uVar1 = REG_DISPCNT;
      REG_DISPCNT = uVar1 | 0x1100;
      puVar2 = (undefined4 *)sub_0803D5B8(0x2fc);
      if (puVar2 != (undefined4 *)0x0) {
        sub_08005460(puVar2,0x5e,0xd,1);
        *puVar2 = &_08049B2C;
        puVar2[0xbe] = 1;
      }
      sub_0803D850(puVar2);
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* sub_08023770 @ 0x08023770 */

void sub_08023770(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 - 3U < 5) {
    switch(param_3) {
    case 3:
    case 4:
      iVar1 = *(int *)(*DAT_03004a8c + 0x24);
      iVar1 = __call_via_r1(DAT_03004a8c,iVar1 + *DAT_03004a8c,iVar1,
                            (uint)*(byte *)(param_3 + 0x802377d) * 2,param_4);
      if (iVar1 == 0) {
        DAT_03002f50 = 1;
      }
    }
  }
  return;
}


/* sub_080237F0 @ 0x080237F0 */

void sub_080237F0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  wchar16 *pwVar3;
  
  uVar1 = sub_08014124(0,param_1,0x1c,0x28,L"Character Mode:",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,0,0xffffffff,2,0xffffffff,1,0x61,0x1c,0x2c,1,0);
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,1,0xffffffff,2,0,0xffffffff,0x62,0x78,0x2c,0,1);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x52,L"Rounds:",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,2,0,9,0xffffffff,4,0x65,0x1c,0x56,0,0);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,4,0,9,2,6,0x66,0x44,0x56,1,0);
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,6,0,9,4,0xffffffff,0x67,0x6c,0x56,0,0);
  *(undefined4 *)(param_1 + 300) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,9,2,0xffffffff,0xffffffff,0xffffffff,0x60,0x9c,0x88,1,0);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  sub_0800664E(param_1,uVar1);
  pwVar3 = L"Cancel";
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,iVar2 + 0x2e,0x90,pwVar3,5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x10c) = 9;
  DAT_03002f60 = 0;
  DAT_03002f5c = 3;
  DAT_03002f58 = 1;
  sub_080503A4(0);
  sub_08040160();
  return;
}


