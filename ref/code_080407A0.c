/* Ghidra reference decompilation of code_080407A0 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_080407A0 @ 0x080407A0 */

void sub_080407A0(short param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = 0;
  if (param_1 == 4) {
    DAT_030052f8 = &gUnknown_087B7970;
  }
  else if (param_1 == 0x40) {
    DAT_030052f8 = &gUnknown_087B797C;
  }
  else {
    DAT_030052f8 = &gUnknown_087B7970;
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x080407dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


/* sub_080407E8 @ 0x080407E8 */

void sub_080407E8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = REG_IME;
  REG_IME = 0;
  uVar1 = REG_WAITCNT._0_2_;
  REG_WAITCNT._0_2_ = uVar1 & 0xf8ff | *(ushort *)(DAT_030052f8 + 6);
  REG_DMA3SAD = param_1;
  REG_DMA3DAD = param_2;
  REG_DMA3CNT = param_3 & 0xffff | 0x80000000;
  uVar1 = REG_DMA3CNT._2_2_;
  while ((uVar1 & 0x8000) != 0) {
    uVar1 = REG_DMA3CNT._2_2_;
  }
  REG_IME = uVar2;
                    /* WARNING: Could not recover jumptable at 0x08040844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08040804 @ 0x08040804 */

void sub_08040804(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ushort unaff_r4;
  ushort *unaff_r5;
  undefined2 unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  *unaff_r5 = unaff_r4 | *(ushort *)(param_4 + 6);
  REG_DMA3SAD = param_1;
  REG_DMA3DAD = param_2;
  REG_DMA3CNT = param_3 | 0x80000000;
  uVar1 = REG_DMA3CNT._2_2_;
  while ((uVar1 & 0x8000) != 0) {
    uVar1 = REG_DMA3CNT._2_2_;
  }
  REG_IME = unaff_r6;
                    /* WARNING: Could not recover jumptable at 0x08040844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08040808 @ 0x08040808 */

void sub_08040808(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  undefined2 unaff_r4;
  undefined2 *unaff_r5;
  undefined2 unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  *unaff_r5 = unaff_r4;
  REG_DMA3SAD = param_1;
  REG_DMA3DAD = param_2;
  REG_DMA3CNT = param_3 | 0x80000000;
  uVar1 = REG_DMA3CNT._2_2_;
  while ((uVar1 & 0x8000) != 0) {
    uVar1 = REG_DMA3CNT._2_2_;
  }
  REG_IME = unaff_r6;
                    /* WARNING: Could not recover jumptable at 0x08040844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08040868 @ 0x08040868 */

void sub_08040868(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_98 [2];
  ushort auStack_96 [67];
  
  param_1 = param_1 & 0xffff;
  if (param_1 < *(ushort *)(DAT_030052f8 + 4)) {
    puVar5 = auStack_96 + *(byte *)(DAT_030052f8 + 8);
    bVar1 = 0;
    if (*(byte *)(DAT_030052f8 + 8) != 0) {
      do {
        *puVar5 = (ushort)param_1;
        puVar5 = puVar5 + -1;
        param_1 = param_1 >> 1;
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(DAT_030052f8 + 8));
    }
    *puVar5 = 1;
    puVar5[-1] = 1;
    sub_080407E8(auStack_98,&DAT_0d000000,*(byte *)(DAT_030052f8 + 8) + 3);
    sub_080407E8(&DAT_0d000000,auStack_98,0x44);
    puVar5 = auStack_96 + 3;
    puVar6 = (undefined2 *)(param_2 + 6);
    bVar1 = 0;
    do {
      uVar4 = 0;
      bVar2 = 0;
      do {
        uVar4 = (uVar4 << 0x11) >> 0x10 | *puVar5 & 1;
        puVar5 = puVar5 + 1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 0x10);
      *puVar6 = (short)uVar4;
      puVar6 = puVar6 + -1;
      bVar1 = bVar1 + 1;
    } while (bVar1 < 4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x80ff;
  }
                    /* WARNING: Could not recover jumptable at 0x08040910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}


/* sub_08040918 @ 0x08040918 */

ulonglong sub_08040918(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0804092C(param_1,param_2,1);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}


/* sub_0804092C @ 0x0804092C */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_0804092C(uint param_1,ushort *param_2,char param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_c4 [130];
  undefined2 auStack_42 [17];
  short sStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  uint uStack_18;
  
  param_1 = param_1 & 0xffff;
  if (param_1 < *(ushort *)(DAT_030052f8 + 4)) {
    bVar3 = *(byte *)(DAT_030052f8 + 8);
    auStack_42[bVar3 + 1] = 0;
    puVar7 = auStack_42 + bVar3;
    bVar3 = 0;
    do {
      uVar6 = (uint)*param_2;
      param_2 = param_2 + 1;
      bVar2 = 0;
      do {
        *puVar7 = (short)uVar6;
        puVar7 = puVar7 + -1;
        uVar6 = uVar6 >> 1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 0x10);
      bVar3 = bVar3 + 1;
    } while (bVar3 < 4);
    for (bVar3 = 0; bVar3 < *(byte *)(DAT_030052f8 + 8); bVar3 = bVar3 + 1) {
      *puVar7 = (short)param_1;
      puVar7 = puVar7 + -1;
      param_1 = param_1 >> 1;
    }
    *puVar7 = 0;
    puVar7[-1] = 1;
    sub_080407E8(auStack_c4,&DAT_0d000000,*(byte *)(DAT_030052f8 + 8) + 0x43);
    uVar4 = 0;
    sStack_20 = 0;
    uStack_1e = REG_VCOUNT;
    uStack_18 = 0;
    if ((_DAT_0d000000 & 1) != 0) goto _08040A78;
    do {
      do {
        uStack_1c = REG_VCOUNT;
        uVar1 = uStack_1e;
        if (uStack_1c != uStack_1e) {
          if (uStack_1e < uStack_1c) {
            iVar5 = (uint)uStack_1c - (uint)uStack_1e;
          }
          else {
            iVar5 = (uStack_1c + 0xe4) - (uint)uStack_1e;
          }
          uStack_18 = iVar5 + uStack_18;
          uVar1 = uStack_1c;
          if (0x88 < uStack_18) {
            if ((sStack_20 == 0) && ((_DAT_0d000000 & 1) == 0)) {
              uVar4 = 0xc001;
            }
            goto _08040A84;
          }
        }
        uStack_1e = uVar1;
      } while ((sStack_20 != 0) || ((_DAT_0d000000 & 1) == 0));
_08040A78:
      sStack_20 = sStack_20 + 1;
    } while (param_3 != '\0');
  }
  else {
    uVar4 = 0x80ff;
  }
_08040A84:
                    /* WARNING: Could not recover jumptable at 0x08040a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar4);
  return;
}


/* sub_08040A8C @ 0x08040A8C */

void sub_08040A8C(ushort param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  short *psVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  short asStack_14 [4];
  
  psVar4 = asStack_14;
  uVar5 = 0;
  if (param_1 < *(ushort *)(DAT_030052f8 + 4)) {
    sub_08040868(param_1,asStack_14);
    bVar3 = 0;
    do {
      sVar1 = *param_2;
      sVar2 = *psVar4;
      psVar4 = psVar4 + 1;
      param_2 = param_2 + 1;
      if (sVar1 != sVar2) {
        uVar5 = 0x8000;
        break;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 4);
  }
  else {
    uVar5 = 0x80ff;
  }
                    /* WARNING: Could not recover jumptable at 0x08040ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5);
  return;
}


/* sub_08040AE2 @ 0x08040AE2 */

void sub_08040AE2(undefined2 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    param_3 = sub_08040918(param_1,param_2);
    param_3 = param_3 & 0xffff;
    if (param_3 == 0) {
      param_3 = sub_08040A8C(param_1,param_2);
      param_3 = param_3 & 0xffff;
      if (param_3 == 0) break;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08040b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}


/* sub_08040AE4 @ 0x08040AE4 */

void sub_08040AE4(undefined2 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    param_3 = sub_08040918(param_1,param_2);
    param_3 = param_3 & 0xffff;
    if (param_3 == 0) {
      param_3 = sub_08040A8C(param_1,param_2);
      param_3 = param_3 & 0xffff;
      if (param_3 == 0) break;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08040b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}


/* sub_08040B22 @ 0x08040B22 */

void sub_08040B22(undefined2 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*DAT_030052f8 == 0x200) {
    uVar1 = 0x8080;
  }
  else {
    uVar1 = sub_0804092C(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x08040b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


/* sub_08040B24 @ 0x08040B24 */

void sub_08040B24(undefined2 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*DAT_030052f8 == 0x200) {
    uVar1 = 0x8080;
  }
  else {
    uVar1 = sub_0804092C(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x08040b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


/* sub_08040B5C @ 0x08040B5C */

void sub_08040B5C(undefined2 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    param_3 = sub_08040B24(param_1,param_2);
    param_3 = param_3 & 0xffff;
    if (param_3 == 0) {
      param_3 = sub_08040A8C(param_1,param_2);
      param_3 = param_3 & 0xffff;
      if (param_3 == 0) break;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08040b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}


/* sub_08040B9A @ 0x08040B9A */

void sub_08040B9A(void)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_18 [2];
  
  iVar4 = DAT_03004ac0;
  iVar3 = DAT_03004ab8;
  uVar1 = DAT_04000124;
  auStack_18[0] = DAT_04000120;
  uVar2 = DAT_04000128;
  DAT_03004aa3 = (byte)(((uint)uVar2 << 0x19) >> 0x1f);
  if (((short)auStack_18[0] == -0x102) && (3 < DAT_03004ab4)) {
    DAT_03004ab4 = -1;
    DAT_03004ac0 = DAT_03004ac4;
    DAT_03004ac4 = iVar4;
    if (DAT_03004aa0 != '\0') {
      DAT_03004ab8 = DAT_03004abc;
      DAT_03004abc = iVar3;
      DAT_03004aa0 = '\0';
      DAT_03004ab0 = 0;
    }
    REG_IME = 0;
    DAT_03007ff8 = DAT_03007ff8 | 0x80;
    REG_IME = 1;
  }
  if (DAT_03004ab0 < 4) {
    DAT_0400012a = *(undefined2 *)(DAT_03004abc + DAT_03004ab0 * 2);
  }
  if (DAT_03004ab0 < 5) {
    DAT_03004ab0 = DAT_03004ab0 + 1;
  }
  if (DAT_03004ab4 < 0) {
_08040C44:
    if (4 < DAT_03004ab4) goto _08040C50;
  }
  else {
    iVar3 = 0;
    do {
      iVar5 = iVar3 * 0xc;
      iVar4 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      *(undefined2 *)(DAT_03004ac0 + iVar5 + DAT_03004ab4 * 2) =
           *(undefined2 *)((int)auStack_18 + iVar4);
    } while (iVar3 < 2);
    if (DAT_03004ab4 != 3) goto _08040C44;
    DAT_03004aa1 = 1;
  }
  DAT_03004ab4 = DAT_03004ab4 + 1;
_08040C50:
  if (DAT_03004a9c != '\0') {
    DAT_0400010e = 0;
  }
  if ((DAT_03004ab0 < 5) && (DAT_03004a9c != '\0')) {
    uVar2 = DAT_04000128;
    DAT_04000128 = uVar2 | 0x80;
    DAT_0400010e = 0xc0;
  }
  uRam03004aa5 = 0;
  return;
}


/* sub_08040B9C @ 0x08040B9C */

void sub_08040B9C(void)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18 [2];
  
  iVar4 = DAT_03004ac0;
  iVar3 = DAT_03004ab8;
  uVar1 = DAT_04000124;
  local_18[0] = DAT_04000120;
  uVar2 = DAT_04000128;
  DAT_03004aa3 = (byte)(((uint)uVar2 << 0x19) >> 0x1f);
  if (((short)local_18[0] == -0x102) && (3 < DAT_03004ab4)) {
    DAT_03004ab4 = -1;
    DAT_03004ac0 = DAT_03004ac4;
    DAT_03004ac4 = iVar4;
    if (DAT_03004aa0 != '\0') {
      DAT_03004ab8 = DAT_03004abc;
      DAT_03004abc = iVar3;
      DAT_03004aa0 = '\0';
      DAT_03004ab0 = 0;
    }
    REG_IME = 0;
    DAT_03007ff8 = DAT_03007ff8 | 0x80;
    REG_IME = 1;
  }
  if (DAT_03004ab0 < 4) {
    DAT_0400012a = *(undefined2 *)(DAT_03004abc + DAT_03004ab0 * 2);
  }
  if (DAT_03004ab0 < 5) {
    DAT_03004ab0 = DAT_03004ab0 + 1;
  }
  if (DAT_03004ab4 < 0) {
_08040C44:
    if (4 < DAT_03004ab4) goto _08040C50;
  }
  else {
    iVar3 = 0;
    do {
      iVar5 = iVar3 * 0xc;
      iVar4 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      *(undefined2 *)(DAT_03004ac0 + iVar5 + DAT_03004ab4 * 2) =
           *(undefined2 *)((int)local_18 + iVar4);
    } while (iVar3 < 2);
    if (DAT_03004ab4 != 3) goto _08040C44;
    DAT_03004aa1 = 1;
  }
  DAT_03004ab4 = DAT_03004ab4 + 1;
_08040C50:
  if (DAT_03004a9c != '\0') {
    DAT_0400010e = 0;
  }
  if ((DAT_03004ab0 < 5) && (DAT_03004a9c != '\0')) {
    uVar2 = DAT_04000128;
    DAT_04000128 = uVar2 | 0x80;
    DAT_0400010e = 0xc0;
  }
  uRam03004aa5 = 0;
  return;
}


/* sub_08040C78 @ 0x08040C78 */

void sub_08040C78(void)

{
  ushort uVar1;
  
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xff3f;
  REG_IME = 1;
  DAT_03000fc8 = 0x8040b9d;
  DAT_03000fcc = 0x8040b9d;
  DAT_04000134 = 0;
  DAT_04000128 = 0x2000;
  uVar1 = DAT_04000128;
  DAT_04000128 = uVar1 | 0x4003;
  software_interrupt(0xb);
  DAT_03004ab0 = 6;
  DAT_03004ab4 = 6;
  DAT_03004ab8 = &DAT_03004acc;
  DAT_03004abc = &DAT_03004ad8;
  DAT_03004ac0 = &DAT_03004ae4;
  DAT_03004ac4 = &DAT_03004afc;
  DAT_03004ac8 = &DAT_03004b14;
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 | 0x80;
  REG_IME = 1;
  return;
}


/* sub_08040D10 @ 0x08040D10 */

void sub_08040D10(void)

{
  if (DAT_03004a9c != '\0') {
    DAT_03004aa2 = 1;
  }
  return;
}


/* sub_08040D1E @ 0x08040D1E */

void sub_08040D1E(void)

{
  ushort uVar1;
  
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xff3f;
  REG_IME = 1;
  DAT_04000128 = 0x2003;
  Ram0400010c = 0x63f7;
  REG_IF = 0xc0;
  DAT_03004aa2 = 0;
  return;
}


/* sub_08040D4E @ 0x08040D4E */

void sub_08040D4E(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = sub_080491C0();
  DAT_03004a9f = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar1 = 0;
    do {
      iVar3 = 0;
      uVar2 = 0;
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        iVar3 = (uint)*(ushort *)(DAT_03004ac8 + uVar1 * 0xc + iVar4) + iVar3;
      } while (uVar2 < 4);
      if (iVar3 * 0x10000 >> 0x10 == -7) {
        software_interrupt(0xb);
        DAT_03004a9f = DAT_03004a9f | (byte)(1 << (uVar1 & 0xff));
      }
      software_interrupt(0xb);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 2);
  }
  DAT_03004a9e = DAT_03004a9e | DAT_03004a9f;
  return;
}


/* sub_08040DBC @ 0x08040DBC */

uint sub_08040DBC(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = Ram04000128;
  if (DAT_03004a9d == '\0') {
    if ((uint)(iVar2 << 0x1a) >> 0x1e == 0) {
      if ((-1 < iVar2 << 0x1c) || (iVar2 << 0x18 < 0)) goto _08040E42;
      if ((-1 < iVar2 << 0x1d) && (DAT_03004ab0 == 6)) {
        REG_IME = 0;
        uVar1 = REG_IE;
        REG_IE = uVar1 & 0xff7f | 0x40;
        REG_IME = 1;
        uVar1 = DAT_04000128;
        DAT_04000128 = uVar1 & 0xbfff;
        Ram0400010c = 0x63f7;
        REG_IF = 0xc0;
        DAT_03004a9c = '\b';
      }
    }
    DAT_03004a9d = '\x01';
_08040E28:
    if (DAT_03004a9e != 0) {
      if (bRam03004aa4 < 8) {
        bRam03004aa4 = bRam03004aa4 + 1;
      }
      else {
        DAT_03004a9d = '\x02';
      }
    }
  }
  else {
    if (DAT_03004a9d == '\x01') goto _08040E28;
    if (DAT_03004a9d != '\x02') goto _08040E42;
  }
  sub_08040D4E();
_08040E42:
  DAT_03004aa7 = DAT_03004aa7 + '\x01';
  return (uint)DAT_03004a9f | (uint)(DAT_03004a9c == '\b') << 7 | (uint)DAT_03004a9e << 8 |
         (uint)(DAT_03004aa3 != '\0') << 0xc | (uint)(1 < (uint)(iVar2 << 0x1a) >> 0x1e) << 0xd |
         (uint)(bRam03004aa4 >> 3) << 0xf;
}


/* sub_08040E16 @ 0x08040E16 */

uint sub_08040E16(undefined4 param_1,undefined2 *param_2,int param_3,undefined2 param_4,
                 undefined4 param_5,ushort param_6)

{
  int iVar1;
  int iVar2;
  char *unaff_r4;
  int unaff_r5;
  
  *param_2 = param_4;
  Ram0400010c = 0x63f7;
  *(undefined2 *)(param_3 + 2) = 0xc0;
  *unaff_r4 = '\b';
  unaff_r4[1] = (char)unaff_r5;
  if (unaff_r4[2] != '\0') {
    if ((byte)unaff_r4[8] < 8) {
      unaff_r4[8] = unaff_r4[8] + 1;
    }
    else {
      unaff_r4[1] = '\x02';
    }
  }
  sub_08040D4E();
  unaff_r4[0xb] = unaff_r4[0xb] + '\x01';
  iVar1 = unaff_r5;
  if (*unaff_r4 != '\b') {
    iVar1 = 0;
  }
  iVar2 = unaff_r5;
  if (unaff_r4[7] == '\0') {
    iVar2 = 0;
  }
  if (((uint)param_6 << 0x1a) >> 0x1e < 2) {
    unaff_r5 = 0;
  }
  return (uint)(byte)unaff_r4[3] | iVar1 << 7 | (uint)(byte)unaff_r4[2] << 8 | iVar2 << 0xc |
         unaff_r5 << 0xd | (uint)((byte)unaff_r4[8] >> 3) << 0xf;
}


/* sub_08040E66 @ 0x08040E66 */

uint sub_08040E66(uint param_1)

{
  int unaff_r4;
  int unaff_r5;
  ushort in_stack_00000004;
  
  if (((uint)in_stack_00000004 << 0x1a) >> 0x1e < 2) {
    unaff_r5 = 0;
  }
  return param_1 | unaff_r5 << 0xd | (uint)(*(byte *)(unaff_r4 + 8) >> 3) << 0xf;
}


/* sub_08040EC8 @ 0x08040EC8 */

void sub_08040EC8(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  
  puVar1 = DAT_03004ab8;
  uVar4 = 0;
  *DAT_03004ab8 = DAT_03004aa7;
  puVar1[1] = DAT_03004a9e ^ DAT_03004a9f;
  *(undefined2 *)(puVar1 + 2) = 0;
  software_interrupt(0xb);
  uVar2 = 0;
  do {
    iVar3 = uVar2 * 2;
    uVar2 = uVar2 + 1;
    uVar4 = *(short *)(DAT_03004ab8 + iVar3) + uVar4;
  } while (uVar2 < 4);
  *(ushort *)(DAT_03004ab8 + 2) = ~uVar4 - 6;
  DAT_03004aa0 = 1;
  return;
}


/* sub_08040EFC @ 0x08040EFC */

void sub_08040EFC(void)

{
  int unaff_r5;
  
  *(undefined1 *)(unaff_r5 + 4) = 1;
  return;
}


/* sub_08040F02 @ 0x08040F02 */

void sub_08040F02(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_03004ac0;
  uVar2 = DAT_03004ab8;
  if (DAT_03004a9c == '\0') {
    if (bRam03004aa5 < 4) {
      bRam03004aa5 = bRam03004aa5 + 1;
    }
    else {
      REG_IME = 0;
      DAT_03007ff8 = DAT_03007ff8 | 0x80;
      REG_IME = 1;
    }
  }
  else if (((DAT_03004aa0 != '\0') && (DAT_03004a9d != '\0')) && (DAT_03004aa2 != '\0')) {
    DAT_03004ab4 = 0xffffffff;
    DAT_03004ac0 = DAT_03004ac4;
    DAT_03004ac4 = uVar3;
    DAT_03004ab8 = DAT_03004abc;
    DAT_03004abc = uVar2;
    DAT_03004aa0 = '\0';
    DAT_03004ab0 = 0;
    uVar1 = DAT_04000128;
    DAT_03004aa3 = (byte)(((uint)uVar1 << 0x19) >> 0x1f);
    DAT_0400012a = 0xfefe;
    uVar1 = DAT_04000128;
    DAT_04000128 = uVar1 | 0x80;
    DAT_0400010e = 0xc0;
  }
  return;
}


/* sub_08040F98 @ 0x08040F98 */

void sub_08040F98(int param_1)

{
  DAT_03004a98 = 1;
  DAT_03004a94 = 0;
  DAT_03004a6c = 0xff;
  *(undefined4 *)(param_1 + 4) = 10;
  sub_080400EE();
  sub_08040C78();
  return;
}


/* sub_08040FBA @ 0x08040FBA */

void sub_08040FBA(void)

{
  DAT_03004a98 = 0;
  sub_08040D1E();
  sub_080400EE();
  return;
}


/* sub_08040FCC @ 0x08040FCC */

uint sub_08040FCC(void)

{
  ushort uVar1;
  
  uVar1 = DAT_04000128;
  return ((uint)uVar1 << 0x1a) >> 0x1e;
}


/* sub_08040FD6 @ 0x08040FD6 */

undefined4 sub_08040FD6(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  DAT_03004a7c = (uint)(DAT_03004a90 << 0x18 < 0);
  if (DAT_03004a90 << 0x17 < 0) {
    bVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
    if ((bVar1 < 2) && (bVar1 == DAT_03004a6c)) {
      if (param_1[1] < 1) {
        uVar2 = 1;
        param_1[1] = 0;
      }
      else {
        param_1[1] = param_1[1] + -1;
      }
    }
    else {
      DAT_03004a6c = bVar1;
      param_1[1] = 10;
    }
  }
  return uVar2;
}


/* sub_0804102A @ 0x0804102A */

undefined4 sub_0804102A(void)

{
  if (DAT_03004a80 < _03000FFC) {
    _03000FFC = DAT_03004a80;
  }
  if ((-1 < (int)(DAT_03004a90 << 0x13)) &&
     ((-1 < (int)(DAT_03004a90 << 0x10) || ((DAT_03004a90 << 0x14) >> 0x1c == (DAT_03004a90 & 0xf)))
     )) {
    _03000FFC = DAT_03004a80;
  }
  if (DAT_03004a80 - _03000FFC < 0xb4) {
    return 1;
  }
  return 0;
}


/* sub_08041068 @ 0x08041068 */

undefined4 sub_08041068(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_03004a98 == 0) {
    uVar1 = 1;
  }
  else if (param_1[1] == 0) {
    DAT_03004a90 = sub_08040DBC(&DAT_03004a84);
    sub_08040D10();
    if (DAT_03004a94 == '\0') {
      if (((-1 < (int)(DAT_03004a90 << 0x13)) && (-1 < (int)(DAT_03004a90 << 0x12))) &&
         ((-1 < (int)(DAT_03004a90 << 0x10) ||
          ((DAT_03004a90 << 0x14) >> 0x1c == (DAT_03004a90 & 0xf))))) {
        DAT_03004a94 = __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
      }
    }
    else {
      if ((1 << (DAT_03004a7c & 0xff) & DAT_03004a90) != 0) {
        sub_08040130();
      }
      if (((DAT_03004a90 << 0x1c) >> 0x1d != 0) && ((1 << (uint)DAT_03004a6c & DAT_03004a90) != 0))
      {
        sub_0804011A();
      }
    }
    sub_08040EC8(&DAT_03004a78);
    if ((DAT_03004a94 == '\0') || (iVar2 = sub_0804102A(param_1), iVar2 != 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    param_1[1] = param_1[1] + -1;
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_08041134 @ 0x08041134 */

void sub_08041134(void)

{
  DAT_03004b31 = 0;
  return;
}


/* sub_0804113C @ 0x0804113C */

void sub_0804113C(void)

{
  sub_080433F4();
  DAT_03004b31 = 0;
  return;
}


/* sub_0804114A @ 0x0804114A */

void sub_0804114A(void)

{
  sub_0804344A();
  return;
}


/* sub_08041152 @ 0x08041152 */

undefined4 sub_08041152(undefined4 param_1)

{
  int iVar1;
  
  sub_080430FE(0);
  iVar1 = sub_080434CC(&DAT_03004b6c,&DAT_03004bd0);
  if (iVar1 != 0) {
    __call_via_r2(_03000FF0,&DAT_03004bd4,*(int *)(*_03000FF0 + 4) + *_03000FF0);
    sub_08043528(param_1,&DAT_03004bd0);
  }
  if ((DAT_03004b32 == -0x78) && (DAT_03004b6c == '\x01')) {
    DAT_03004b32 = -0x71;
    sub_080444EE(1 << (uint)DAT_03004b2c & 0xff);
    sub_0804389E();
    DAT_03005218 = 0x32;
  }
  if (DAT_03005218 != 0xe) {
    if (DAT_03005218 < 0xf) {
      if ((DAT_03005218 != 0) && (DAT_03005218 == 0xb)) {
        sub_08042B34();
        DAT_03005218 = 0xc;
      }
    }
    else {
      if (DAT_03005218 == 0x32) {
        sub_08043558();
        return 0;
      }
      if (DAT_03005218 == 0x34) {
        return 0;
      }
      if (DAT_03005218 == 0x3f) {
        DAT_03005218 = DAT_03005219;
      }
    }
  }
  return 1;
}


/* sub_080411EE @ 0x080411EE */

int sub_080411EE(void)

{
  int iVar1;
  
  if (DAT_03004b32 == 0x8f) {
    return 0;
  }
  if (*(char *)((&DAT_03005278)[DAT_03004b2c] + 0x12) == '\0') {
    return 0;
  }
  iVar1 = 1;
  if (DAT_03004b32 == 5) {
    if (DAT_03004b55 == '\x05') {
      DAT_03004b32 = 1;
    }
  }
  else if (DAT_03004b32 < 6) {
    if ((DAT_03004b32 == 0) || (DAT_03004b32 == 1)) {
      if (DAT_03004b55 == '\a') {
        DAT_03004b32 = 0x88;
        iVar1 = 0;
        sub_08042E3E();
      }
      else if (DAT_03004b55 == '\x02') {
        DAT_03004b32 = 0x83;
      }
      else if (DAT_03004b55 == '\x01') {
        DAT_03004b32 = 1;
      }
    }
  }
  else if (DAT_03004b32 == 6) {
    if (((uint)bRam03004b56 & 1 << (uint)DAT_03004b33) == 0) {
      DAT_03004b32 = 0x88;
      iVar1 = 0;
      sub_08042E3E();
    }
  }
  else if ((DAT_03004b32 == 0x83) && (DAT_03004b55 == '\x04')) {
    DAT_03004b32 = 5;
  }
  sub_08044BCE(DAT_03004b2c);
  if ((char)(DAT_03004b36 + '\x01') != DAT_03004b54) {
    if (DAT_03004b36 == DAT_03004b54) {
      DAT_03004b3e = DAT_03004b3e + '\x01';
    }
    else {
      if (DAT_03004b55 == '\a') goto _080412BE;
      DAT_03004b3a = DAT_03004b3a + '\x01';
    }
  }
  if ((DAT_03004b55 == '\x01') && ((char)(DAT_03004b36 + '\x01') == DAT_03004b54)) {
    sub_08043490(&DAT_03004b6c,&DAT_03004b54);
  }
_080412BE:
  DAT_03004b36 = DAT_03004b54;
  if (iVar1 == 1) {
    DAT_03004b4c = DAT_03004b4c + '\x01';
    DAT_03004b4d = DAT_03004b32;
    __call_via_r2(_03000FF0,&DAT_03004a78,*(int *)(*_03000FF0 + 8) + *_03000FF0);
    DAT_03004b50 = DAT_03004a78;
    DAT_03004b35 = DAT_03004b35 + '\x01';
  }
  return iVar1;
}


/* sub_080412F8 @ 0x080412F8 */

void sub_080412F8(void)

{
  int iVar1;
  
  iVar1 = sub_080411EE();
  if (iVar1 != 0) {
    sub_08044BB2(DAT_03004b2c);
  }
  sub_080422B0(1);
  return;
}


/* sub_08041312 @ 0x08041312 */

void sub_08041312(int param_1)

{
  int iVar1;
  
  if (param_1 != 0x40) {
    if (param_1 < 0x41) {
      if ((param_1 != 0x24) && (0x24 < param_1)) {
        if (param_1 == 0x31) {
          uRam03004b2e = DAT_03005218;
          DAT_03005218 = 0xe;
        }
        else {
          if (param_1 < 0x32) {
            if (param_1 == 0x25) {
              return;
            }
            if (param_1 != 0x30) {
              return;
            }
          }
          else {
            if (param_1 == 0x32) {
              DAT_03005218 = uRam03004b2e;
              return;
            }
            if (param_1 != 0x33) {
              return;
            }
          }
          DAT_03005218 = 0x32;
        }
      }
    }
    else if (param_1 == 0x50) {
      iVar1 = sub_080411EE();
      if (iVar1 != 0) {
        sub_08044BB2(DAT_03004b2c);
      }
      sub_080422B0(1);
    }
    else if (param_1 < 0x51) {
      switch(param_1) {
      case 0x41:
      case 0x43:
      case 0x44:
      case 0x45:
        break;
      case 0x42:
        DAT_03005218 = 0x34;
      }
    }
    else if (param_1 == 0xf0) {
      if (((DAT_03004cdc == 0x30) && (DAT_03004b32 == -0x71)) && (DAT_03004cde == 3)) {
        DAT_03004cde = 0;
        DAT_03005218 = 0x32;
      }
      else if (DAT_03004cde != 0) {
        DAT_03005218 = 0x32;
      }
    }
    else if (param_1 == 0xf1) {
      DAT_03005218 = 0x32;
    }
    else if (param_1 == 0xf2) {
      DAT_03005218 = 0x32;
    }
    else if (param_1 == 0xff) {
      DAT_03005218 = 0x3f;
      DAT_03005219 = 0x34;
    }
  }
  return;
}


/* sub_080413F4 @ 0x080413F4 */

void sub_080413F4(void)

{
  sub_080454EA();
  return;
}


/* sub_080413FC @ 0x080413FC */

void sub_080413FC(void)

{
  uint uVar1;
  
  DAT_03004b33 = 0;
  do {
    if ((&DAT_03005250)[DAT_03004b33] == *(short *)(DAT_0300525c + 0x94)) break;
    uVar1 = DAT_03004b33 + 1;
    DAT_03004b33 = (byte)uVar1;
  } while ((uVar1 & 0xff) < 5);
  sub_08049168(0x3004b4c,0,8);
  sub_08049168(0x3004b54,0,0x18);
  sub_0804347E(&DAT_03004b6c);
  DAT_03004b34 = 0;
  DAT_03004b35 = 0;
  uVar1 = 0;
  do {
    (&DAT_03004b36)[uVar1] = 0;
    (&DAT_03004b3e)[uVar1] = 0;
    (&DAT_03004b3a)[uVar1] = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  DAT_03004b32 = 0;
  DAT_03004d10 = DAT_0300521c;
  DAT_03004b4c = 0;
  sub_08043260(0x80413f5);
  sub_0804326E(0x8041313);
  sub_080447E0(0x10,DAT_03004b2c,&DAT_03004b54,0x18);
  sub_080449B8(1 << DAT_03004b2c & 0xff,&DAT_03004b4c,8);
  DAT_03005218 = 0x31;
  return;
}


/* sub_080414AC @ 0x080414AC */

void sub_080414AC(undefined4 param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  iVar1 = DAT_0300525c;
  uVar3 = 0;
  DAT_03004b30 = 0;
  if (*(char *)(DAT_0300525c + 8) != '\0') {
    do {
      if (((1 << (uVar3 & 0xff) & param_2) != 0) && (*(byte *)(uVar3 * 0x20 + iVar1 + 0x16) < 4)) {
        (&DAT_03004b42)[DAT_03004b30] = (char)uVar3;
        DAT_03004b30 = DAT_03004b30 + 1;
      }
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < *(byte *)(iVar1 + 8));
    uVar4 = (ushort)DAT_03004b30;
    if ((uVar4 != 0) && (uVar2 = 0, uVar4 != 0)) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
  }
  return;
}


/* sub_08041504 @ 0x08041504 */

undefined4 sub_08041504(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  DAT_03004b2d = 0;
  sVar1 = REG_TM2CNT;
  sub_080430FE(*(undefined2 *)(int)sVar1);
  if ((DAT_03005218 == 6) && (DAT_03004b30 != '\0')) {
    DAT_03005218 = 7;
  }
  if (DAT_03005218 == 0xb) {
    sub_08042B34();
    DAT_03005218 = 0xc;
    return 1;
  }
  if (DAT_03005218 < 0xc) {
    switch(DAT_03005218) {
    case 1:
      sub_08042B0A(param_1 + 4);
      DAT_03005218 = 2;
      break;
    case 5:
      iVar2 = sub_08042B3C(0,0,0x78,&gUnknown_087B76F8,param_4);
      if (iVar2 == 0) {
        DAT_03004b2d = 0;
        DAT_03005218 = 6;
      }
      break;
    case 6:
      sub_080414AC(param_1,DAT_03004b2d);
      return 1;
    case 7:
      iVar2 = sub_08042BF8(*(undefined2 *)((uint)DAT_03004b42 * 0x20 + DAT_0300525c + 0x14),0x78);
      if (iVar2 == 0) {
        DAT_03005218 = 8;
        return 1;
      }
      DAT_03005218 = 5;
      return 1;
    case 9:
      sub_08042CE6(0);
      return 1;
    }
  }
  else {
    if (DAT_03005218 == 0x25) {
      sVar1 = *(short *)((&DAT_03005268)[DAT_03004b2c] + 0x34);
      if (sVar1 == 0x46) {
        sub_080446A8(8);
        if (DAT_0300521b == '\0') {
          return 1;
        }
        DAT_03004b31 = 2;
        return 1;
      }
      if ((sVar1 != 0x47) && (sVar1 != 0x48)) {
        return 1;
      }
      sub_080446A8(8);
      DAT_03005218 = 0x3f;
      DAT_03005219 = 0x33;
      return 1;
    }
    if (DAT_03005218 < 0x26) {
      if ((((DAT_03005218 != 0xc) && (DAT_03005218 != 0xd)) && (DAT_03005218 != 0xe)) &&
         ((DAT_03005218 == 0x10 && (DAT_03004cca == '\0')))) {
        sub_080444EE(*(byte *)(DAT_0300525c + 3) | *(byte *)(DAT_0300525c + 2));
        sub_0804389E();
      }
    }
    else {
      if (DAT_03005218 == 0x33) {
        if (*(char *)(DAT_0300525c + 3) != '\0' || *(char *)(DAT_0300525c + 2) != '\0') {
          DAT_03005218 = 0x10;
          sub_08042E3E();
          return 1;
        }
        DAT_03005218 = 5;
        return 1;
      }
      if (DAT_03005218 == 0x34) {
        sub_08043558();
        return 0;
      }
      if (DAT_03005218 == 0x3f) {
        DAT_03005218 = DAT_03005219;
      }
    }
  }
  return 1;
}


/* sub_0804151A @ 0x0804151A */

undefined4 sub_0804151A(void)

{
  short sVar1;
  int iVar2;
  byte *unaff_r5;
  int unaff_r6;
  
  if ((DAT_03005218 == 6) && (unaff_r5[4] != 0)) {
    DAT_03005218 = 7;
  }
  if (DAT_03005218 == 0xb) {
    sub_08042B34();
    DAT_03005218 = 0xc;
    return 1;
  }
  if (DAT_03005218 < 0xc) {
    switch(DAT_03005218) {
    case 1:
      sub_08042B0A(unaff_r6 + 4);
      DAT_03005218 = 2;
      break;
    case 5:
      iVar2 = sub_08042B3C(0,0,0x78,&gUnknown_087B76F8);
      if (iVar2 == 0) {
        unaff_r5[1] = 0;
        DAT_03005218 = 6;
      }
      break;
    case 6:
      sub_080414AC(unaff_r6,unaff_r5[1]);
      return 1;
    case 7:
      iVar2 = sub_08042BF8(*(undefined2 *)((uint)DAT_03004b42 * 0x20 + DAT_0300525c + 0x14),0x78);
      if (iVar2 == 0) {
        DAT_03005218 = 8;
        return 1;
      }
      DAT_03005218 = 5;
      return 1;
    case 9:
      sub_08042CE6(0);
      return 1;
    }
  }
  else {
    if (DAT_03005218 == 0x25) {
      sVar1 = *(short *)((&DAT_03005268)[*unaff_r5] + 0x34);
      if (sVar1 == 0x46) {
        sub_080446A8(8);
        if (DAT_0300521b == '\0') {
          return 1;
        }
        unaff_r5[5] = 2;
        return 1;
      }
      if ((sVar1 != 0x47) && (sVar1 != 0x48)) {
        return 1;
      }
      sub_080446A8(8);
      DAT_03005218 = 0x3f;
      DAT_03005219 = 0x33;
      return 1;
    }
    if (DAT_03005218 < 0x26) {
      if ((((DAT_03005218 != 0xc) && (DAT_03005218 != 0xd)) && (DAT_03005218 != 0xe)) &&
         ((DAT_03005218 == 0x10 && (DAT_03004cca == '\0')))) {
        sub_080444EE(*(byte *)(DAT_0300525c + 3) | *(byte *)(DAT_0300525c + 2));
        sub_0804389E();
      }
    }
    else {
      if (DAT_03005218 == 0x33) {
        if (*(char *)(DAT_0300525c + 3) != '\0' || *(char *)(DAT_0300525c + 2) != '\0') {
          DAT_03005218 = 0x10;
          sub_08042E3E();
          return 1;
        }
        DAT_03005218 = 5;
        return 1;
      }
      if (DAT_03005218 == 0x34) {
        sub_08043558();
        return 0;
      }
      if (DAT_03005218 == 0x3f) {
        DAT_03005218 = DAT_03005219;
      }
    }
  }
  return 1;
}


/* sub_08041622 @ 0x08041622 */

undefined4 sub_08041622(int param_1)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r7;
  
  if (*(char *)(param_1 + 3) == '\0' && *(char *)(param_1 + 2) == '\0') {
    *unaff_r4 = unaff_r7;
  }
  else {
    *unaff_r4 = 0x10;
    sub_08042E3E();
  }
  return 1;
}


/* sub_08041654 @ 0x08041654 */

void sub_08041654(void)

{
  sub_080454EA();
  return;
}


/* sub_0804168C @ 0x0804168C */

void sub_0804168C(int param_1)

{
  if (param_1 == 0x40) {
    DAT_03005218 = 5;
    return;
  }
  if (param_1 < 0x41) {
    if (param_1 == 0x24) {
      DAT_03005218 = 0x25;
      return;
    }
    if (param_1 < 0x25) {
      if (param_1 == 0x21) {
        DAT_03005218 = 5;
        return;
      }
      if (param_1 < 0x22) {
        if (param_1 == 0) {
          DAT_03005218 = 5;
          return;
        }
        if (param_1 == 0x20) {
          DAT_03004b2d = (char)DAT_03004cdc;
        }
      }
      else {
        if (param_1 == 0x22) {
          DAT_03004b2c = (char)DAT_03004cdc;
          sub_080447E0(0x20,DAT_03004cdc & 0xff,&DAT_0300521a,0x40);
          DAT_03005218 = 0xd;
          return;
        }
        if (param_1 == 0x23) {
          DAT_03005218 = 0x3f;
          DAT_03005219 = 5;
          return;
        }
      }
      return;
    }
    if (param_1 == 0x31) {
      uRam03004b2e = DAT_03005218;
      DAT_03005218 = 0xe;
      return;
    }
    if (param_1 < 0x32) {
      if (param_1 == 0x25) {
        DAT_03005218 = 0x3f;
        DAT_03005219 = 5;
        return;
      }
      if (param_1 != 0x30) {
        return;
      }
    }
    else {
      if (param_1 == 0x32) {
        DAT_03005218 = uRam03004b2e;
        return;
      }
      if (param_1 != 0x33) {
        return;
      }
    }
    DAT_03005218 = 0x3f;
    DAT_03005219 = 5;
_080416EA:
    return;
  }
  if (param_1 == 0x50) {
    sub_080422B0(1);
    return;
  }
  if (0x50 < param_1) {
    if (param_1 == 0xf0) {
      DAT_03005218 = 0x3f;
      DAT_03005219 = 1;
      return;
    }
    if (param_1 == 0xf1) {
      DAT_03005218 = 1;
      return;
    }
    if (param_1 == 0xf2) {
      DAT_03005218 = 1;
      return;
    }
    if (param_1 == 0xff) {
      DAT_03005218 = 0x3f;
      DAT_03005219 = 0x34;
      return;
    }
_0804170A:
    return;
  }
  switch(param_1) {
  case 0x41:
  case 0x45:
    goto _0804170A;
  case 0x42:
    DAT_03005218 = 0x34;
    return;
  case 0x43:
    DAT_03005218 = 5;
    return;
  case 0x44:
    DAT_03005218 = 0xb;
    return;
  default:
    goto _080416EA;
  }
}


/* sub_08041786 @ 0x08041786 */

void sub_08041786(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0x20;
  *(undefined2 *)(param_1 + 6) = 4;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0x7ff9;
  *(char **)(param_1 + 0xc) = "TESTING";
  *(code **)(param_1 + 0x10) = sub_08041844;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0xf0;
  *(undefined2 *)(param_1 + 0x18) = 0xf0;
  return;
}


/* sub_080417AC @ 0x080417AC */

void sub_080417AC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03004b2c = 0;
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0x20;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0x7ff9;
  *(char **)(param_1 + 0xc) = "TESTING";
  *(code **)(param_1 + 0x10) = sub_08041844;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0xf0;
  *(undefined2 *)(param_1 + 0x18) = 0xf0;
  *(undefined2 *)(param_1 + 6) = 0;
  sub_08042AAA(0x804168d,0x8041655,0xf0,param_4,param_4);
  REG_TM2CNT = 0x8300;
  DAT_03005218 = 1;
  DAT_03004b2f = 5;
  return;
}


/* sub_080417F0 @ 0x080417F0 */

undefined4 sub_080417F0(void)

{
  undefined4 uVar1;
  
  if (DAT_03004b31 == '\0') {
    sub_080417AC();
    DAT_03004b31 = '\x01';
  }
  else {
    if (DAT_03004b31 == '\x01') {
      uVar1 = sub_08041504();
      return uVar1;
    }
    if (DAT_03004b31 == '\x02') {
      sub_080413FC();
      DAT_03004b31 = '\x03';
    }
    else if (DAT_03004b31 == '\x03') {
      uVar1 = sub_08041152();
      return uVar1;
    }
  }
  return 1;
}


/* sub_08041844 @ 0x08041844 */

void sub_08041844(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_3 + param_2) = param_4;
                    /* WARNING: Could not recover jumptable at 0x08041846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_0804185C @ 0x0804185C */

void sub_0804185C(void)

{
  DAT_03004bee = 0;
  return;
}


/* sub_08041864 @ 0x08041864 */

void sub_08041864(void)

{
  sub_080433F4();
  DAT_03004bee = 0;
  return;
}


/* sub_08041872 @ 0x08041872 */

void sub_08041872(void)

{
  sub_0804344A();
  return;
}


/* sub_0804187A @ 0x0804187A */

void sub_0804187A(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  bVar3 = DAT_03004c15;
  cVar2 = DAT_03004c14;
  if (DAT_03004bf0 == 0x8f) {
    return;
  }
  if ((DAT_0300521c & ~DAT_03004bf3) != 0) {
    return;
  }
  if (DAT_03004c15 == 1) {
    sub_08043490(&DAT_03004c4c,&DAT_03004c14);
  }
  DAT_03004bf9 = 0;
  sub_08049168(0x3004c14,0,0x18);
  bVar5 = DAT_0300521c;
  uVar6 = 0;
  uVar4 = (uint)DAT_0300521c;
  do {
    if ((uVar4 & 2 << uVar6 & 0xffU) != 0) {
      bVar1 = (&DAT_03004c2d)[uVar6 * 8];
      if (bVar1 == 6) {
        (&DAT_03004c1c)[uVar6] = (&DAT_03004c30)[uVar6 * 2];
        DAT_03004bf6 = (byte)(2 << uVar6) | DAT_03004bf6;
      }
      else if ((bVar1 < 7) && ((bVar1 == 1 || (bVar1 == 5)))) {
        (&DAT_03004c1c)[uVar6] = (&DAT_03004c30)[uVar6 * 2];
      }
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  if (DAT_03004bef != '\0') {
    if (DAT_03004bf0 == 7) {
      DAT_03004bf0 = 0x88;
    }
    else {
      DAT_03004bf0 = 7;
      uRam03004bf1 = 0;
      DAT_03004c15 = 7;
      DAT_03004c16 = bVar5;
      DAT_03004bf3 = 1;
    }
    goto _080419C2;
  }
  bVar5 = 0;
  if (DAT_03004bf7 != 0) {
    do {
      bVar5 = bVar5 + 1;
    } while (bVar5 < 4);
    sub_080444EE(DAT_03004bf7 >> 1);
    sub_0804389E();
    DAT_03004bf6 = DAT_03004bf6 ^ DAT_03004bf7;
    DAT_03004bf7 = 0;
  }
  if (bVar3 == 1) {
_08041946:
    if (DAT_03004bfa != '\0') {
      DAT_03004bf0 = 2;
      DAT_03004bfa = '\0';
    }
    __call_via_r2(_03000FF0,&DAT_03004a78,*(int *)(*_03000FF0 + 8) + *_03000FF0);
    uRam03004c18 = DAT_03004a78;
_08041968:
    if (DAT_03004bf0 == 0x83) goto _08041972;
_08041982:
    DAT_03004c15 = DAT_03004bf0;
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 != 4) {
        if (bVar3 == 5) {
          DAT_03004bf0 = 1;
          goto _08041946;
        }
        goto _08041968;
      }
      DAT_03004bf0 = 5;
      goto _08041982;
    }
    DAT_03004bf0 = 0x83;
_08041972:
    DAT_03004c15 = 4;
  }
  DAT_03004c16 = DAT_0300521c;
  if (DAT_03004bf6 != 0) {
    DAT_03004c16 = DAT_0300521c & ~DAT_03004bf6;
    DAT_03004bf7 = DAT_03004bf6;
  }
  DAT_03004c14 = cVar2 + '\x01';
  DAT_03004bf3 = 1;
  DAT_03004bf2 = 1;
  DAT_03004bfc = DAT_03004bfc + '\x01';
_080419C2:
  if ((1 < DAT_0300521d) && (-1 < (int)((uint)DAT_03004bf0 << 0x18))) {
    DAT_03004bf9 = 1;
  }
  return;
}


/* sub_080419D6 @ 0x080419D6 */

undefined4 sub_080419D6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (_03001000 == 0) {
    _03001000 = 0x1c20;
    uVar2 = 1;
  }
  else {
    do {
    } while (DAT_03004be8 == '\x01');
    _03001000 = _03001000 + -1;
    sub_080430FE(0);
    if ((DAT_03004bf8 != '\0') && (DAT_03004bf5 != '\0')) {
      DAT_03004bf5 = '\0';
      DAT_03004bf3 = 1;
      DAT_03004bf2 = 1;
      DAT_03004bf8 = '\0';
    }
    sub_0804187A(param_1);
    if (((*(char *)(DAT_0300525c + 3) == '\0') && (DAT_03005218 == 0x30)) && (DAT_03004bf9 != '\0'))
    {
      DAT_03004be8 = '\x01';
      if (DAT_03004bf5 == '\0') {
        sub_08044B46(DAT_03004beb,&DAT_03004c14,0x18);
        sub_080422B0(1);
      }
      else {
        sub_080437EE();
      }
    }
    iVar1 = sub_080434CC(&DAT_03004c4c,&DAT_03004cb0);
    if (iVar1 != 0) {
      __call_via_r2(_03000FF0,&DAT_03004cb8,*(int *)(*_03000FF0 + 4) + *_03000FF0);
      sub_08043528(param_1,&DAT_03004cb0);
    }
    if ((DAT_03004bf0 == -0x78) && (DAT_03004c4c == '\x01')) {
      DAT_03004bf0 = -0x71;
      if (DAT_0300521d == '\x01') {
        DAT_03005218 = 0x32;
      }
      else {
        sub_080444EE(*(byte *)(DAT_0300525c + 3) | *(byte *)(DAT_0300525c + 2));
        sub_0804389E();
        DAT_03005218 = 0x32;
      }
    }
    if (DAT_03005218 == 0x32) {
      sub_08043558();
      uVar2 = 0;
    }
    else {
      if (DAT_03005218 < 0x33) {
        if ((DAT_03005218 != 0) && (DAT_03005218 == 0xb)) {
          sub_08042B34();
          DAT_03005218 = 0xc;
        }
      }
      else {
        if (DAT_03005218 == 0x34) {
          return 0;
        }
        if (DAT_03005218 == 0x3f) {
          DAT_03005218 = DAT_03005219;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* sub_08041B10 @ 0x08041B10 */

void sub_08041B10(void)

{
  sub_080454EA();
  return;
}


/* sub_08041B18 @ 0x08041B18 */

void sub_08041B18(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (DAT_03004bf0 != -0x71) {
    uVar3 = 0;
    do {
      if ((((uint)DAT_0300521c & 2 << uVar3 & 0xffU) != 0) &&
         (*(char *)((&DAT_03005278)[uVar3] + 0x12) != '\0')) {
        DAT_03004bf2 = (byte)(2 << uVar3) | DAT_03004bf2;
        sub_08044BCE(uVar3);
        cVar1 = (&DAT_03004c04)[uVar3];
        cVar2 = (&DAT_03004c2c)[uVar3 * 8];
        if ((char)(cVar1 + '\x01') != cVar2) {
          if (cVar1 == cVar2) {
            (&DAT_03004c0c)[uVar3] = (&DAT_03004c0c)[uVar3] + '\x01';
            (&DAT_03004c30)[uVar3 * 2] = 0;
          }
          else if ((char)(cVar1 + -1) == cVar2) {
            (&DAT_03004c10)[uVar3] = (&DAT_03004c10)[uVar3] + '\x01';
            (&DAT_03004c30)[uVar3 * 2] = 0;
          }
          else {
            (&DAT_03004c08)[uVar3] = (&DAT_03004c08)[uVar3] + '\x01';
          }
        }
        (&DAT_03004c04)[uVar3] = (&DAT_03004c2c)[uVar3 * 8];
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    if (((DAT_0300521c & ~DAT_03004bf2) == 0) && ((DAT_0300521c & ~DAT_03004bf3) != 0)) {
      DAT_03004bfd = DAT_03004bfd + '\x01';
    }
    if (((DAT_0300521c & ~DAT_03004bf3) == 0) && ((DAT_0300521c & ~DAT_03004bf2) != 0)) {
      DAT_03004bfe = DAT_03004bfe + '\x01';
    }
  }
  return;
}


/* sub_08041BDC @ 0x08041BDC */

void sub_08041BDC(void)

{
  uint uVar1;
  
  uVar1 = (DAT_03004ccb & 0x7f) << 1 | (uint)DAT_03004bf3;
  DAT_03004bf3 = (char)uVar1;
  if (((uint)DAT_0300521c & ~uVar1) == 0) {
    DAT_03004bf5 = 0;
    DAT_03004bf9 = 0;
    return;
  }
  DAT_03004bf5 = 1;
  DAT_03004c00 = DAT_03004c00 + 1;
  return;
}


/* sub_08041C0A @ 0x08041C0A */

void sub_08041C0A(int param_1)

{
  byte bVar1;
  
  if (param_1 == 0x33) {
_08041C9A:
    bVar1 = 0;
    do {
      bVar1 = bVar1 + 1;
    } while (bVar1 < 4);
    DAT_03004bf8 = 1;
    DAT_03005218 = 0xb;
    return;
  }
  if (param_1 < 0x34) {
    if (((param_1 != 0x13) && (0x13 < param_1)) && (param_1 != 0x14)) {
      if (param_1 == 0x30) goto _08041C9A;
      if (param_1 == 0x31) {
        bVar1 = 0;
        do {
          bVar1 = bVar1 + 1;
        } while (bVar1 < 4);
        return;
      }
      if (param_1 == 0x32) {
        bVar1 = 0;
        do {
          bVar1 = bVar1 + 1;
        } while (bVar1 < 4);
        return;
      }
    }
  }
  else {
    if (param_1 == 0x50) {
      sub_08041BDC();
      sub_08041B18();
      DAT_03004be8 = 0;
      return;
    }
    if (param_1 < 0x51) {
      if (param_1 == 0x40) {
        DAT_03005218 = 0xb;
        return;
      }
      if (param_1 == 0x42) {
        DAT_03005218 = 0x34;
        return;
      }
      if ((param_1 != 0x43) && (param_1 == 0x44)) {
        DAT_03005218 = 0xb;
      }
    }
    else {
      if (param_1 == 0xf0) {
        if (DAT_03004cdc == 0x26) {
          if ((DAT_03004bf0 != -0x71) && (DAT_0300521d != '\x01')) {
            return;
          }
          DAT_03004cde = 0;
        }
        else if (DAT_03004cde != 0) {
          DAT_03005218 = 0x32;
          DAT_03004be8 = 0;
          return;
        }
        return;
      }
      if (param_1 == 0xf1) {
        DAT_03005218 = 0x32;
        DAT_03004be8 = 0;
        return;
      }
      if (param_1 == 0xf2) {
        DAT_03005218 = 0x32;
        DAT_03004be8 = 0;
        return;
      }
      if (param_1 == 0xff) {
        DAT_03005218 = 0x3f;
        DAT_03005219 = 0x34;
        DAT_03004be8 = 0;
        return;
      }
    }
  }
  return;
}


/* sub_08041CE4 @ 0x08041CE4 */

void sub_08041CE4(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_03004bf4 = 0;
  sub_08049168(0x3004c14,0,0x18);
  sub_08049168(0x3004c2c,0,0x20);
  sub_0804347E(&DAT_03004c4c);
  DAT_03004bf6 = 0;
  DAT_03004bf7 = 0;
  DAT_03004bf8 = 0;
  DAT_03004bf5 = 0;
  DAT_03004c00 = 0;
  DAT_03004bef = 0;
  DAT_03004bfb = 0;
  DAT_03004bfc = 0;
  DAT_03004bfd = 0;
  DAT_03004bfe = 0;
  DAT_03004bfa = 0;
  uVar1 = 0;
  do {
    (&DAT_03004c04)[uVar1] = 0;
    (&DAT_03004c0c)[uVar1] = 0;
    (&DAT_03004c08)[uVar1] = 0;
    (&DAT_03004c10)[uVar1] = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  DAT_03004bf2 = 1;
  DAT_03004bf3 = 1;
  DAT_03004bf0 = 1;
  DAT_03004d10 = DAT_0300521c;
  DAT_03004c16 = *(char *)(DAT_0300525c + 2) << 1 | 1;
  DAT_03004c14 = 1;
  DAT_03004c15 = 1;
  DAT_03004bf9 = 1;
  DAT_0300521c = DAT_03004c16;
  sub_0804326E(0x8041c0b);
  sub_08043260(0x8041b11);
  uVar1 = 0;
  do {
    if (((uint)DAT_0300521c & 2 << uVar1) != 0) {
      sub_080447E0(0x10,uVar1,&DAT_03004c2c + uVar1 * 8,8);
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  iVar2 = sub_080449B8(DAT_0300521c >> 1,&DAT_03004c14,0x18);
  if (iVar2 == 0) {
    DAT_03004beb = 0;
    do {
      if ((2 << DAT_03004beb & (uint)DAT_0300521c) != 0) break;
      DAT_03004beb = DAT_03004beb + 1;
    } while (DAT_03004beb < 4);
    sub_08044BB2(DAT_03004beb);
  }
  DAT_03005218 = 0x30;
  return;
}


/* sub_08041E08 @ 0x08041E08 */

void sub_08041E08(void)

{
  short *psVar1;
  uint uVar2;
  byte bVar3;
  undefined4 in_r3;
  byte bVar4;
  
  bVar4 = 0;
  if ((int)((uint)DAT_03004bec << 0x1e) < 0) {
    uVar2 = (uint)DAT_03004beb;
    bVar3 = 0;
    psVar1 = (short *)(&DAT_03005268)[uVar2];
    do {
      bVar3 = bVar3 + 1;
    } while (bVar3 < 4);
    if (*psVar1 == 0x26) {
      bVar4 = *(byte *)(psVar1 + 0x16) ^ *(byte *)(psVar1 + 0xd);
      sub_080446A8(4,uVar2,uVar2,0x26,in_r3);
      uVar2 = (uint)DAT_03004bec;
      DAT_03004bec = (byte)(uVar2 & 0xfffffffd);
      if ((int)((uVar2 & 0xfffffffd) << 0x19) < 0) {
        DAT_03004bec = DAT_03004bec | 0x80;
      }
    }
    else if (*psVar1 == 0x27) {
      bVar4 = *(byte *)(psVar1 + 0x16) ^ *(byte *)(psVar1 + 0xd);
      sub_080446A8(4,uVar2,uVar2,0x27,in_r3);
      DAT_03004bec = 0;
      if (DAT_03005218 == '\"') {
        DAT_03005218 = '\x03';
      }
    }
    if (bVar4 != 0) {
      DAT_03004bed = DAT_03004bed | bVar4;
    }
  }
  return;
}


/* sub_08041E82 @ 0x08041E82 */

void sub_08041E82(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  sub_08049168(0x300521a,0,0x40);
  iVar1 = DAT_0300525c;
  DAT_0300521b = (int)((uint)DAT_03004bec * 0x2000000) < 0;
  DAT_0300521d = '\x01';
  uVar3 = (uint)DAT_03004be9;
  uVar2 = 0;
  do {
    if ((1 << uVar2 & uVar3) != 0) {
      DAT_0300521d = DAT_0300521d + '\x01';
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  DAT_0300521c = DAT_03004be9 << 1 | 1;
  DAT_03005250 = *(undefined2 *)(DAT_0300525c + 0x94);
  uVar2 = 0;
  do {
    if ((1 << uVar2 & uVar3) != 0) {
      (&DAT_03005252)[uVar2] = *(undefined2 *)(uVar2 * 0x20 + iVar1 + 0x14);
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  return;
}


/* sub_08041EF6 @ 0x08041EF6 */

bool sub_08041EF6(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_r3;
  bool bVar4;
  
  uVar3 = (uint)DAT_03004bec;
  if ((((int)(uVar3 << 0x1e) < 0) || (*(char *)(DAT_0300525c + 3) != '\0')) ||
     ((int)(uVar3 << 0x18) < 0)) {
    bVar4 = false;
  }
  else {
    if ((DAT_03005218 == '\"') && (-1 < (int)(uVar3 << 0x19))) {
      DAT_03004bec = DAT_03004bec | 0x45;
    }
    bVar1 = DAT_03004bec;
    if ((DAT_03004bea != DAT_03004be9) &&
       (bVar1 = DAT_03004bec | 4, *(char *)(DAT_0300525c + 2) != '\0')) {
      bVar1 = DAT_03004bec | 5;
    }
    DAT_03004bec = bVar1;
    DAT_03004bea = DAT_03004be9;
    bVar4 = (int)((uint)DAT_03004bec << 0x1d) < 0;
    if (bVar4) {
      sub_08041E82();
      DAT_03004bec = DAT_03004bec & 0xfb;
    }
    if (((int)((uint)DAT_03004bec << 0x1f) < 0) &&
       (iVar2 = sub_080449A2(DAT_03004be9,0x43,&DAT_0300521a,0x40,in_r3), iVar2 == 0)) {
      DAT_03004beb = 0;
      do {
        if ((1 << (uint)DAT_03004beb & (uint)*(byte *)(DAT_0300525c + 2)) != 0) break;
        DAT_03004beb = DAT_03004beb + 1;
      } while (DAT_03004beb < 4);
      DAT_03004bec = DAT_03004bec & 0xfe | 2;
    }
  }
  return bVar4;
}


/* sub_08041F98 @ 0x08041F98 */

undefined4 sub_08041F98(int param_1)

{
  short sVar1;
  int iVar2;
  
  do {
  } while (DAT_03004be8 == '\x01');
  sVar1 = REG_TM2CNT;
  sub_080430FE(*(undefined2 *)(int)sVar1);
  if (DAT_03004bed != '\0') {
    sub_080444EE();
    sub_0804389E();
    DAT_03004bed = '\0';
  }
  if (*DAT_0300525c == '\x01') {
    DAT_03004be8 = *DAT_0300525c;
    sub_080422B0();
  }
  sub_08041EF6(param_1);
  sub_08041E08(param_1);
  if (((DAT_03005218 == 4) && (DAT_03004be9 != '\0')) && (DAT_0300525c[2] == DAT_03004be9)) {
    DAT_03005218 = 9;
  }
  if (DAT_03005218 != 10) {
    if (DAT_03005218 < 0xb) {
      switch(DAT_03005218) {
      case 1:
        sub_08042B0A(param_1 + 4);
        DAT_03005218 = 2;
        break;
      case 3:
        iVar2 = sub_08042B3C(1,0,0x78,&gUnknown_087B7704);
        if (iVar2 == 0) {
          DAT_03005218 = 4;
        }
        break;
      case 9:
        sub_08042CE6(0);
        DAT_03005218 = 10;
      }
    }
    else if (DAT_03005218 == 0x22) {
      if ((int)((uint)DAT_03004bec << 0x18) < 0) {
        do {
        } while (DAT_03004a80 < DAT_03004a80 + 8);
        DAT_03004bee = 2;
      }
    }
    else if (DAT_03005218 < 0x23) {
      if (DAT_03005218 == 0xb) {
        sub_08042B34();
        DAT_03005218 = 0xc;
      }
    }
    else {
      if (DAT_03005218 == 0x34) {
        sub_08043558();
        return 0;
      }
      if (DAT_03005218 == 0x3f) {
        DAT_03005218 = DAT_03005219;
      }
    }
  }
  return 1;
}


/* sub_080420B0 @ 0x080420B0 */

void sub_080420B0(void)

{
  sub_080454EA();
  return;
}


/* sub_080420B8 @ 0x080420B8 */

void sub_080420B8(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_03004be9 & ~(byte)DAT_03004cdc;
  bVar2 = bVar1;
  if (param_1 != 0x40) {
    bVar2 = DAT_03004be9;
    if (param_1 < 0x41) {
      if (param_1 == 0x14) {
        if (DAT_0300525c[1] == '\0') {
          DAT_03005218 = '\x03';
        }
        else {
          DAT_03005218 = '\"';
        }
      }
      else if (param_1 < 0x15) {
        if (param_1 == 0x11) {
          bVar2 = (byte)DAT_03004cdc | DAT_03004be9;
        }
        else if ((param_1 < 0x12) && (param_1 == 0)) {
          DAT_03005218 = '\x03';
        }
      }
      else if (((param_1 == 0x30) || (((param_1 != 0x31 && (param_1 != 0x32)) && (param_1 == 0x33)))
               ) && ((bVar2 = bVar1, DAT_03005218 != '\x04' && (*DAT_0300525c == -1)))) {
        DAT_03005218 = '\x03';
      }
    }
    else if (param_1 == 0x50) {
      DAT_03004be8 = 0;
    }
    else if (param_1 < 0x51) {
      if (param_1 != 0x41) {
        if (param_1 == 0x42) {
          DAT_03005218 = '4';
        }
        else if (param_1 == 0x43) {
          DAT_03005218 = '\x03';
        }
        else if (param_1 == 0x44) {
          DAT_03005218 = '\v';
        }
      }
    }
    else if (param_1 == 0xf0) {
      DAT_03005218 = '?';
      DAT_03005219 = 0;
      DAT_03004be8 = 0;
    }
    else if (param_1 == 0xf1) {
      DAT_03005218 = '?';
      DAT_03005219 = 0;
      DAT_03004be8 = 0;
    }
    else if (param_1 == 0xf2) {
      DAT_03005218 = '?';
      DAT_03005219 = 0;
      DAT_03004be8 = 0;
    }
    else if (param_1 == 0xff) {
      DAT_03005218 = '?';
      DAT_03005219 = 0x34;
      DAT_03004be8 = 0;
    }
  }
  DAT_03004be9 = bVar2;
  return;
}


/* sub_08042188 @ 0x08042188 */

void sub_08042188(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0x20;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0x7ff9;
  *(char **)(param_1 + 0xc) = "TESTING";
  *(code **)(param_1 + 0x10) = sub_0804225C;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0xf0;
  *(undefined2 *)(param_1 + 0x18) = 0xf0;
  return;
}


/* sub_080421A0 @ 0x080421A0 */

void sub_080421A0(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(code **)(param_1 + 0x10) = sub_0804225C;
  *(undefined1 *)(param_1 + 0x15) = param_3;
  *(undefined2 *)(param_1 + 0x16) = 0xf0;
  *(undefined2 *)(param_1 + 0x18) = 0xf0;
  return;
}


/* sub_080421AE @ 0x080421AE */

void sub_080421AE(int param_1)

{
  DAT_03004be9 = 0;
  DAT_03004bea = 0;
  DAT_03004beb = 0;
  DAT_03004bec = 0;
  DAT_03004bed = 0;
  DAT_03004be8 = 0;
  sub_08049168(0x300521a,0,0x40);
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0x20;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0x7ff9;
  *(char **)(param_1 + 0xc) = "TESTING";
  *(code **)(param_1 + 0x10) = sub_0804225C;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0xf0;
  *(undefined2 *)(param_1 + 0x18) = 0xf0;
  sub_08042AAA(0x80420b9,0x80420b1);
  REG_TM2CNT = 0x8300;
  DAT_03005218 = 1;
  return;
}


/* sub_08042204 @ 0x08042204 */

undefined4 sub_08042204(void)

{
  undefined4 uVar1;
  
  if (DAT_03004bee == '\0') {
    sub_080421AE();
    DAT_03004bee = '\x01';
  }
  else {
    if (DAT_03004bee == '\x01') {
      uVar1 = sub_08041F98();
      return uVar1;
    }
    if (DAT_03004bee == '\x02') {
      sub_08041CE4();
      DAT_03004bee = '\x03';
    }
    else if (DAT_03004bee == '\x03') {
      uVar1 = sub_080419D6();
      return uVar1;
    }
  }
  return 1;
}


/* sub_0804223C @ 0x0804223C */

void sub_0804223C(void)

{
  return;
}


/* sub_0804225C @ 0x0804225C */

void sub_0804225C(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_3 + param_2) = param_4;
                    /* WARNING: Could not recover jumptable at 0x0804225e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08042278 @ 0x08042278 */

int sub_08042278(void)

{
  int iVar1;
  
  iVar1 = sub_080439EE();
  if (iVar1 == 0x8001) {
    DAT_03004cd0 = 1;
  }
  if ((DAT_03004ccc != '\x17') && (DAT_03004ccc != '\x01')) {
    DAT_03004ccd = 0;
    DAT_03004ccc = '\0';
  }
  DAT_03004ccf = 0;
  DAT_03004cd5 = 0;
  DAT_03004cc9 = 0;
  DAT_03004cc8 = 0;
  DAT_03004cce = 0xff;
  sub_08043368();
  return iVar1;
}


/* sub_080422B0 @ 0x080422B0 */

void sub_080422B0(undefined4 param_1)

{
  if (*DAT_0300525c == '\0') {
    if (DAT_03004cca == '\x01') {
      param_1 = 1;
    }
    else {
      param_1 = 0;
    }
  }
  else {
    DAT_03004ccb = 0;
  }
  sub_08044EB0(param_1);
  return;
}


/* sub_080422D4 @ 0x080422D4 */

void sub_080422D4(byte param_1)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  
  if (*(char *)(DAT_0300525c + 4) != '\0') {
    uVar3 = 0;
    do {
      if (((int)((uint)*(ushort *)(&DAT_03005268)[uVar3] << 0x10) < 0) &&
         (bVar1 = (byte)((ushort *)(&DAT_03005268)[uVar3])[0xd], (bVar1 & param_1) != 0)) {
        sub_08044A0C(0x20,uVar3,bVar1 & ~param_1);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
  }
  if (*(char *)(DAT_0300525c + 5) != '\0') {
    uVar3 = 0;
    do {
      if (((int)((uint)*(ushort *)((&DAT_03005268)[uVar3] + 0x34) << 0x10) < 0) &&
         ((*(byte *)((&DAT_03005268)[uVar3] + 0x4e) & param_1) != 0)) {
        sub_08044AF4(uVar3);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
  }
  if (*(byte *)(DAT_0300525c + 6) != 0) {
    *(byte *)(DAT_0300525c + 6) = *(byte *)(DAT_0300525c + 6) & ~param_1;
    uVar3 = 0;
    do {
      psVar2 = (short *)(&DAT_03005278)[uVar3];
      if ((*psVar2 == -0x7fdc) && ((*(byte *)((int)psVar2 + 3) & param_1) != 0)) {
        *(byte *)((int)psVar2 + 3) = *(byte *)((int)psVar2 + 3) & ~param_1;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
  }
  return;
}


/* sub_08042372 @ 0x08042372 */

undefined8 sub_08042372(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uStack_20;
  undefined4 local_1c;
  uint local_18;
  
  uVar6 = 0;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  sub_0804418E(param_1,&local_18,&local_1c,&uStack_20);
  if ((byte)local_18 != 0) {
    DAT_03004cdc = (ushort)(byte)local_18;
    DAT_03004cde = (ushort)(byte)local_1c;
    if (DAT_03004cd1 == '\0') {
      sub_0804337C(local_18 & 0xff);
      uVar6 = 1;
      uVar4 = 2;
      uVar3 = 0x30;
    }
    else {
      DAT_03004cd2 = 1;
      if (DAT_03004cce == '\0' && (byte)local_1c == 0) {
        DAT_03004cd2 = 0;
        sub_0804337C(local_18 & 0xff);
        uVar6 = 1;
        uVar4 = 1;
        uVar3 = 0x33;
      }
      else {
        uVar2 = 0;
        do {
          if ((local_18 & 0xff & 1 << uVar2) != 0) {
            DAT_03004cf8 = (byte)(1 << uVar2) | DAT_03004cf8;
            (&DAT_03004cfc)[uVar2] = DAT_03004cfa;
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar2 < 4);
        uVar4 = 1;
        uVar3 = 0x31;
      }
    }
    sub_0804333C(uVar3,uVar4);
    sub_08043368();
  }
  if (*DAT_0300525c == '\x01') {
    if ((byte)uStack_20 != 0) {
      uVar2 = 0;
      do {
        if ((((uint)DAT_03004cf8 & 1 << uVar2) != 0) && ((1 << uVar2 & uStack_20 & 0xff) != 0)) {
          (&DAT_03004cfc)[uVar2] = 0;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 4);
      DAT_03004cf8 = DAT_03004cf8 & ~(byte)uStack_20;
      DAT_03004cdc = (ushort)(byte)uStack_20;
      sub_0804333C(0x32,1);
    }
    if (DAT_03004cf8 != 0) {
      uVar7 = 0;
      uVar2 = 0;
      do {
        uVar5 = 1 << uVar2;
        if ((DAT_03004cf8 & uVar5) != 0) {
          sVar1 = (&DAT_03004cfc)[uVar2];
          if (sVar1 != 0) {
            (&DAT_03004cfc)[uVar2] = sVar1 + -1;
            if (sVar1 == 1) {
              DAT_03004cf8 = DAT_03004cf8 & ~(byte)uVar5;
              uVar7 = uVar5 & 0xff | uVar7;
            }
          }
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 4);
      if (uVar7 != 0) {
        sub_0804337C(uVar7);
        uVar6 = 1;
        DAT_03004cdc = (ushort)uVar7;
        sub_0804333C(0x33,1);
      }
    }
    if (DAT_03004cf8 == 0) {
      DAT_03004cd2 = 0;
    }
  }
  return CONCAT44(uStack_20,uVar6);
}


/* sub_080424B2 @ 0x080424B2 */

void sub_080424B2(int param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ushort uVar10;
  char cVar11;
  byte local_30 [4];
  uint local_2c;
  char *local_28;
  uint local_24;
  short *local_20;
  uint local_1c;
  byte *local_18;
  
  local_18 = &DAT_03004cf8;
  if (DAT_03004cd6 == '\0') {
    if (((param_2 == 3) && (DAT_03004cd7 != '\0')) &&
       ((param_1 == 0x24 || ((param_1 == 0x26 || (param_1 == 0x27)))))) {
      sub_080438B2();
      sub_0804389E();
      sub_080438C4(local_30);
      if ((local_30[0] == 0) && (*DAT_0300525c == '\0')) {
        iVar5 = sub_08043800();
        *(char *)(iVar5 + 4) = DAT_0300525c[2];
        *(undefined1 *)(iVar5 + 5) = 1;
        sub_08042372(0x29);
        param_2 = 0;
      }
    }
  }
  else {
    DAT_03004cd6 = 0;
    if (param_1 == 0x1f) {
      if (param_2 == 0) {
        DAT_03004ccc = '\r';
        DAT_03004ccd = DAT_03004ccc;
      }
    }
    else if (param_1 < 0x20) {
      uVar10 = DAT_03004ce2 - 1;
      local_1c = (uint)uVar10;
      cVar11 = DAT_03004ccf;
      switch(param_1) {
      case 0x10:
        if (param_2 == 0) {
          DAT_03004ccc = DAT_03004ccd;
          DAT_03004ccd = '\x04';
        }
        break;
      case 0x16:
        if (param_2 == 0) {
          DAT_03004ccd = '\0';
          cVar11 = '\0';
          uVar7 = 0;
          DAT_03004ccc = '\0';
          goto _08042876;
        }
        break;
      case 0x17:
        cVar11 = DAT_03004ccd;
        if (param_2 == 0) {
_0804257A:
          DAT_03004ccc = cVar11;
          DAT_03004ccd = '\0';
        }
        break;
      case 0x19:
        if (param_2 == 0) {
          DAT_03004ccc = '\x06';
          DAT_03004ccd = DAT_03004ccc;
        }
        break;
      case 0x1a:
        if ((DAT_03004ce2 != 0) && (DAT_03004ce2 = uVar10, local_1c == 0)) {
          DAT_03004ccc = '\a';
          DAT_03004ccd = '\b';
        }
        break;
      case 0x1b:
        if (param_2 == 0) {
          DAT_03004ccc = DAT_03004ccd;
          DAT_03004ccd = '\0';
          if (DAT_03004ccf == '\0') {
            uVar7 = 0x13;
            goto _08042876;
          }
        }
        break;
      case 0x1c:
        if (param_2 == 0) {
          if ((DAT_03004cd3 == '\x01') && (1 < DAT_03004ce2)) {
            DAT_03004ce2 = uVar10;
          }
          DAT_03004ccc = '\n';
          DAT_03004ccd = DAT_03004ccc;
        }
        break;
      case 0x1d:
        if (param_2 == 0) {
          local_20 = DAT_03004ce8;
          local_24 = (uint)(byte)DAT_0300525c[8];
          uVar9 = 0;
          for (uVar6 = 0; uVar6 < local_24; uVar6 = uVar6 + 1 & 0xff) {
            local_2c = 1 << uVar6;
            local_28 = DAT_0300525c + uVar6 * 0x20;
            for (psVar4 = DAT_03004ce8; *psVar4 != -1; psVar4 = psVar4 + 1) {
              if (*(short *)(local_28 + 0x18) == *psVar4) {
                uVar9 = uVar9 | local_2c & 0xff;
              }
            }
          }
          local_30[0] = (byte)uVar9;
          DAT_03004cdc = (ushort)local_30[0];
          if (local_30[0] != 0) {
            sub_0804333C(0x20,1);
          }
          if (DAT_03004cd3 == '\0') goto _0804268C;
          if (DAT_03004ce2 != 1) {
            if (DAT_0300525c[8] == '\x04') {
              sub_08043E78();
              sub_0804389E();
              DAT_03004ccc = '\t';
              DAT_03004cd3 = '\x01';
            }
            goto _0804268C;
          }
        }
        else {
_0804268C:
          if (DAT_03004ce2 == 0) break;
        }
        DAT_03004ce2 = DAT_03004ce2 - 1;
        if (DAT_03004ce2 == 0) {
          cVar11 = '\v';
          goto _0804257A;
        }
        break;
      case 0x1e:
        if (param_2 == 0) {
          DAT_03004ccc = DAT_03004ccd;
          if (DAT_03004ccf == '\0') {
            if (DAT_03004ccd == '\0') {
              uVar7 = 0x21;
              goto _08042876;
            }
          }
          else if (DAT_03004ccf != '\a') {
            DAT_03004ccc = '\x05';
            DAT_03004ccf = '\x05';
          }
        }
      }
    }
    else if (param_1 == 0x32) {
      if (param_2 == 0) {
        DAT_03004cdc = (ushort)(byte)DAT_0300525c[3];
        DAT_03004ccd = '\x11';
        DAT_03004ccc = '\x11';
        DAT_03004cd8 = 0;
        do {
          if (((uint)(byte)DAT_0300525c[3] & 1 << (uint)DAT_03004cd8) != 0) break;
          uVar6 = DAT_03004cd8 + 1;
          DAT_03004cd8 = (byte)uVar6;
        } while ((uVar6 & 0xff) < 4);
      }
    }
    else if (param_1 < 0x33) {
      if (param_1 == 0x20) {
        cVar11 = '\x0e';
        if (((param_2 == 0) && (iVar5 = sub_08043FBC(local_30,&DAT_03004cd8), iVar5 == 0)) &&
           (local_30[0] == 0)) {
          DAT_03004ccc = '\x0e';
        }
        if (DAT_03004ce2 != 0) {
          uVar3 = DAT_03004ce2 - 1;
joined_r0x080427b8:
          bVar1 = DAT_03004ce2 == 1;
          DAT_03004ce2 = uVar3;
          if (bVar1) {
            DAT_03004ccc = cVar11;
          }
        }
      }
      else if (param_1 == 0x21) {
        if ((param_2 == 0) && (iVar5 = sub_08043FBC(local_30,&DAT_03004cd8), iVar5 == 0)) {
          if (local_30[0] == 0) {
            DAT_03004ccc = '\x13';
            DAT_03004ccd = '\x0f';
            uRam03004ce6 = 0x22;
            DAT_03004cdc = (ushort)DAT_03004cd8;
          }
          else {
            DAT_03004ccd = '\0';
            DAT_03004ccc = '\0';
            uRam03004ce6 = 0x23;
            DAT_03004cdc = (ushort)local_30[0];
            if (DAT_03004ccf != '\0') {
              DAT_03004ccf = '\x03';
              DAT_03004ccc = '\t';
            }
          }
          sub_0804333C(uRam03004ce6,1);
_0804280E:
          uRam03004ce6 = 0;
        }
      }
      else if ((param_1 == 0x27) && (param_2 == 0)) {
        if (DAT_03004ccd == '\x16') {
          DAT_03004ccc = cRam03004cd9;
          DAT_03004ccd = cRam03004cda;
          DAT_03004cca = 1;
          uVar7 = 0x41;
          cVar11 = '\0';
_08042876:
          sub_0804333C(uVar7,cVar11);
        }
        else if (DAT_03004ccd == '\x0f') {
          DAT_03004ccc = DAT_03004ccd;
          DAT_03004cca = 1;
          sub_0804333C(0x41,0);
          DAT_03004cec = DAT_03004cec | (byte)(1 << (uint)DAT_03004cd8);
          (&DAT_03004cf0)[DAT_03004cd8] = DAT_03004cee;
          sub_080446A8(4,DAT_03004cd8);
          local_30[0] = sub_080449E6(DAT_03004cd8,0xe);
          if (local_30[0] != 0) {
            DAT_03004ccd = '\0';
            DAT_03004ccc = '\0';
            sub_08043368();
            sub_0804337C(DAT_0300525c[3] | DAT_0300525c[2]);
            DAT_03004cdc = (ushort)local_30[0];
            uVar7 = 0x25;
            cVar11 = '\x01';
            goto _08042876;
          }
        }
      }
    }
    else if (param_1 == 0x33) {
      cVar11 = '\x12';
      if (((param_2 == 0) && (iVar5 = sub_0804460E(local_30), iVar5 == 0)) &&
         ((local_30[0] == 0 || (local_30[0] == 1)))) {
        DAT_03004ccc = '\x12';
      }
      uVar10 = (&DAT_03004cfc)[DAT_03004cd8];
      if (uVar10 != 0) {
        (&DAT_03004cfc)[DAT_03004cd8] = uVar10 - 1;
        uVar3 = DAT_03004ce2;
        DAT_03004ce2 = uVar10;
        goto joined_r0x080427b8;
      }
    }
    else if (param_1 == 0x34) {
      if ((param_2 == 0) && (iVar5 = sub_0804460E(local_30), iVar5 == 0)) {
        if (local_30[0] == 0) {
          DAT_03004ccc = '\x13';
          DAT_03004ccd = '\x16';
          uRam03004ce6 = 0x32;
        }
        else {
          DAT_03004ccd = '\0';
          DAT_03004ccc = '\0';
          sub_0804337C(DAT_0300525c[3]);
          uRam03004ce6 = 0x33;
        }
        (&DAT_03004cfc)[DAT_03004cd8] = 0;
        *local_18 = 0;
        DAT_03004cd2 = 0;
        sub_0804333C(uRam03004ce6 & 0xff,1);
        goto _0804280E;
      }
    }
    else if ((param_1 == 0x3d) && (param_2 == 0)) {
      DAT_03004ccd = '\0';
      uVar7 = 0x42;
      DAT_03004ccc = '\0';
      cVar11 = '\0';
      goto _08042876;
    }
    DAT_03004cd6 = '\x01';
  }
  if (param_1 == 0x10) {
_080428E0:
    if (param_2 == 0) {
      DAT_03004cd5 = 0;
      DAT_03004cc9 = '\0';
      DAT_03004cc8 = 0;
      DAT_03004cce = -1;
      sub_08043368();
      if (param_1 == 0x3d) {
        software_interrupt(0xb);
        DAT_03004cce = 0xff;
        return;
      }
      goto _08042A3C;
    }
_080429FA:
    pcVar2 = DAT_0300525c;
    if ((param_1 == 0x1c) && (DAT_03004ccf == '\x04')) {
      *DAT_0300525c = '\x01';
      pcVar2[2] = '\x0f';
      sub_0804337C(0xf);
      sub_0804389E();
      return;
    }
  }
  else {
    if (param_1 == 0x26) {
      sub_08043392();
      if (*DAT_0300525c != -1) {
        uVar8 = 0;
        uVar7 = 0x50;
_080429F2:
        sub_0804333C(uVar7,uVar8);
      }
_080429F6:
      if (param_2 == 0) goto _08042A3C;
      goto _080429FA;
    }
    if (param_1 != 0x30) {
      if (param_1 == 0x3d) goto _080428E0;
      goto _080429F6;
    }
    if (param_2 == 0) {
      iVar5 = sub_08043800();
      DAT_03004cdc = (ushort)*(byte *)(iVar5 + 8);
      sub_080422D4();
      if (*local_18 != 0) {
        *local_18 = *local_18 & ~(byte)DAT_03004cdc;
        uVar6 = 0;
        do {
          if (((uint)DAT_03004cdc & 1 << uVar6) != 0) {
            (&DAT_03004cfc)[uVar6] = 0;
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 4);
        if (DAT_03004cce == '\0') {
          DAT_03004ccd = '\0';
          DAT_03004ccc = '\0';
        }
      }
      local_30[0] = DAT_03004cc8 & (byte)DAT_03004cdc;
      uVar6 = 0;
      do {
        if (((1 << uVar6 & (uint)local_30[0]) != 0) && (DAT_03004cc9 != '\0')) {
          DAT_03004cc9 = DAT_03004cc9 + -1;
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 4);
      DAT_03004cc8 = DAT_03004cc8 & ~(byte)DAT_03004cdc;
      if (DAT_03004ccf == '\0') {
_080429B6:
        if ((*DAT_0300525c == -1) && (DAT_03004ccc == '\0')) {
          DAT_03004cce = -1;
        }
      }
      else if (*DAT_0300525c == -1) {
        if (DAT_03004ccf == '\b') {
          DAT_03004ce2 = DAT_03004ce4;
          DAT_03004ccc = '\x06';
          DAT_03004ccf = '\x06';
        }
        else {
          if ((DAT_03004ccc == '\x06') || (DAT_03004ccc == '\a')) goto _080429D2;
          DAT_03004ccf = '\x01';
          DAT_03004ccc = '\x05';
        }
        goto _080429B6;
      }
_080429D2:
      if (DAT_03004cd6 == '\0') {
        uVar8 = 1;
        uVar7 = 0x40;
        goto _080429F2;
      }
      goto _080429F6;
    }
  }
  DAT_03004cdc = (ushort)param_1;
  if (DAT_03004cd6 != '\0') {
    DAT_03004ccd = '\0';
    DAT_03004ccc = '\0';
  }
  DAT_03004cde = (short)param_2;
  sub_0804333C(0xf0,2);
  sub_08043368();
_08042A3C:
  if (param_1 == 0xff) {
    sub_0804333C(0xf2,0);
    sub_08043368();
  }
  return;
}


/* sub_08042A4E @ 0x08042A4E */

void sub_08042A4E(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uStack_18;
  
  uVar1 = DAT_03004cd6;
  DAT_03004cd6 = 0;
  DAT_03004cd7 = 1;
  uStack_18 = param_4;
  if (*DAT_0300525c == '\0') {
    sub_08042372(param_1);
    if (DAT_03004cca != '\x01') goto _08042A74;
  }
  else {
    iVar2 = sub_0804380C(&uStack_18);
    if (iVar2 == 0) {
      DAT_03004ccb = DAT_03004ccb | (byte)uStack_18;
    }
  }
  if (DAT_03004d0c == 0) {
    DAT_03004cd6 = uVar1;
    DAT_03004cd7 = 0;
    return;
  }
  __call_via_r1(param_1);
  sub_0804389E();
  if (DAT_03004cca != '\x02') {
    DAT_03004cd6 = uVar1;
    DAT_03004cd7 = 0;
    return;
  }
_08042A74:
  sub_08043368();
  DAT_03004cd7 = 0;
  DAT_03004cd6 = uVar1;
  return;
}


/* sub_08042AAA @ 0x08042AAA */

undefined4 sub_08042AAA(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 4;
  }
  else {
    software_interrupt(0xb);
    DAT_03004cce = 0xff;
    DAT_03004d08 = param_1;
    DAT_03004d0c = param_2;
    sub_08043860(0x8042a4f);
    sub_0804388A(0x80424b3);
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08042ADA @ 0x08042ADA */

void sub_08042ADA(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_03004ccd = 0;
  DAT_03004ccc = 0;
  DAT_03004cce = 0xff;
  DAT_03004ccf = 0;
  DAT_03004cd8 = 0;
  DAT_03004cd4 = 0;
  DAT_03004cec = 0;
  DAT_03004cf8 = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1 & 0xff;
    (&DAT_03004cf0)[uVar1] = 0;
    (&DAT_03004cfc)[uVar1] = 0;
    uVar1 = uVar2;
  } while (uVar2 < 4);
  return;
}


/* sub_08042B0A @ 0x08042B0A */

void sub_08042B0A(int param_1)

{
  sub_08042ADA();
  DAT_03004ccc = 1;
  DAT_03004ccd = 2;
  DAT_03004d04 = param_1;
  DAT_03004cd1 = *(undefined1 *)(param_1 + 0x11);
  DAT_03004cfa = *(undefined2 *)(param_1 + 0x12);
  DAT_03004ce0 = *(undefined2 *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x10) != '\0') {
    DAT_03004cd3 = 1;
  }
  return;
}


/* sub_08042B34 @ 0x08042B34 */

void sub_08042B34(void)

{
  DAT_03004ccc = 0x15;
  return;
}


/* sub_08042B3C @ 0x08042B3C */

undefined4 sub_08042B3C(uint param_1,undefined2 param_2,undefined2 param_3,short *param_4)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  
  if ((DAT_03004ccc != '\0') && ((DAT_03004ccc != '\b' || (param_1 != 1)))) {
    DAT_03004cdc = 1;
    sub_0804333C(0xf3,1);
    return 1;
  }
  iVar3 = sub_0804400C();
  if (iVar3 == 0) {
    DAT_03004cdc = 2;
    sub_0804333C(0xf3,1);
    return 2;
  }
  bVar2 = 0;
  psVar4 = param_4;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
    if (sVar1 == -1) break;
    bVar2 = bVar2 + 1;
  } while (bVar2 < 0x10);
  if (bVar2 == 0x10) {
    DAT_03004cdc = 4;
    sub_0804333C(0xf3,1);
    return 4;
  }
  if (param_1 < 2) {
    DAT_03004ccf = 0;
    if (param_1 == 0) {
      DAT_03004ccc = 9;
      if (DAT_03004cd3 != '\0') {
        DAT_03004cd3 = '\x02';
      }
      goto _08042BEA;
    }
  }
  else {
    param_1 = 1;
    param_2 = 0;
    DAT_03004ccf = 1;
  }
  DAT_03004ccc = 5;
_08042BEA:
  DAT_03004cee = param_3;
  DAT_03004ce8 = param_4;
  DAT_03004ce2 = param_2;
  DAT_03004cce = (char)param_1;
  return 0;
}


