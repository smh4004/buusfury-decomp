/* Ghidra reference decompilation of code_08044C9C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08044C9C @ 0x08044C9C */

void sub_08044C9C(uint param_1,undefined4 *param_2,ushort *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 *puStack_1c;
  ushort *puStack_18;
  
  puStack_18 = param_3;
  puStack_1c = param_2;
  uStack_20 = param_1;
  puVar8 = param_3 + 0x10;
  iVar3 = (uint)*DAT_0300525c * 0x10;
  uVar4 = (uint)*param_3;
  puVar6 = &uStack_28;
  if (uVar4 == 0x8022) {
    while ((uint)(*(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x18)) <=
           *(uint *)(param_3 + (uint)(byte)*puVar8 * 2 + 2)) {
      uVar5 = (byte)*puVar8 + 1;
      *(byte *)puVar8 = (byte)uVar5;
      if ((uVar5 & 0xff) == 4) {
        *(byte *)puVar8 = 0;
      }
    }
  }
  if ((int)(uVar4 << 0x19) < 0) {
    uVar9 = 0;
  }
  else {
    if (uVar4 == 0x8022) {
      uVar9 = (uint)param_3[0x17];
      if (*(int *)(param_3 + (uint)(byte)*puVar8 * 2 + 2) + uVar9 <=
          (uint)(*(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x18))) goto _08044D1C;
      uVar5 = (*(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x18)) -
              *(int *)(param_3 + (uint)(byte)*puVar8 * 2 + 2);
    }
    else {
      uVar9 = (uint)param_3[0x17];
      uVar5 = *(uint *)(param_3 + 10);
      if (uVar9 <= uVar5) goto _08044D1C;
    }
    uVar9 = uVar5 & 0xffff;
  }
_08044D1C:
  uStack_28 = (uint)*(byte *)((int)param_3 + (byte)*puVar8 + 0x21) << (&UNK_087b771a)[iVar3] |
              (uVar4 & 0xf) << (&DAT_087b7717)[iVar3] |
              (uint)*(byte *)((int)param_3 + 0x1f) << (&UNK_087b7718)[iVar3] |
              (uint)(byte)*puVar8 << (&UNK_087b7719)[iVar3] | uVar9;
  if (*DAT_0300525c == 1) {
    uStack_28 = uStack_28 | (uint)(byte)param_3[0xd] << 0x12;
  }
  for (bVar2 = 0; bVar2 < (byte)(&gUnknown_087B7714)[iVar3]; bVar2 = bVar2 + 1) {
    uVar1 = *(undefined1 *)puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
    puVar7 = (undefined1 *)*param_2;
    *puVar7 = uVar1;
    *param_2 = puVar7 + 1;
  }
  if (uVar9 != 0) {
    uStack_24 = *(undefined4 *)(param_3 + (uint)(byte)*puVar8 * 2 + 2);
    __call_via_r3(&uStack_24,param_2,uVar9,*(undefined4 *)(DAT_03005264 + 4));
  }
  if ((*param_3 == 0x8022) && (bVar2 = (byte)*puVar8 + 1, *(byte *)puVar8 = bVar2, bVar2 == 4)) {
    *(byte *)puVar8 = 0;
  }
  if (*DAT_0300525c == 1) {
    DAT_0300525c[0xe] = 1;
  }
  else {
    DAT_0300525c[0xe] = DAT_0300525c[0xe] | (byte)(1 << (uStack_20 & 0xff));
  }
                    /* WARNING: Could not recover jumptable at 0x08044de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((byte)(&gUnknown_087B7714)[iVar3] + uVar9 & 0xffff);
  return;
}


/* sub_08044DE2 @ 0x08044DE2 */

void sub_08044DE2(void)

{
  int iVar1;
  undefined1 *in_r3;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *local_18;
  
  local_18 = in_r3;
  if ((*DAT_0300525c != -1) &&
     ((DAT_0300525c[4] != '\0' || DAT_0300525c[5] != '\0') || DAT_0300525c[6] != '\0')) {
    DAT_0300525c[0xe] = '\0';
    uVar4 = 0;
    local_18 = (undefined1 *)(DAT_03005264 + 0x6c);
    uVar3 = 0;
    do {
      iVar2 = 0;
      if ((int)((uint)*(ushort *)(&DAT_03005268)[uVar3] << 0x10) < 0) {
        iVar2 = sub_08044C9C(uVar3,&local_18);
      }
      if ((int)((uint)*(ushort *)((&DAT_03005268)[uVar3] + 0x34) << 0x10) < 0) {
        iVar1 = sub_08044C9C(uVar3,&local_18,(&DAT_03005268)[uVar3] + 0x34);
        iVar2 = iVar1 + iVar2;
      }
      if (*(short *)(&DAT_03005278)[uVar3] == -0x7fdc) {
        iVar1 = sub_08044BE0(uVar3,&local_18);
        iVar2 = iVar1 + iVar2;
      }
      if (iVar2 != 0) {
        if (*DAT_0300525c == '\x01') {
          uVar4 = uVar4 + iVar2;
        }
        else {
          uVar4 = uVar4 | iVar2 << (uVar3 * 5 + 8 & 0xff);
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    if (uVar4 != 0) {
      for (; iVar2 = DAT_03005264, ((uint)local_18 & 3) != 0; local_18 = local_18 + 1) {
        *local_18 = 0;
      }
      *(uint *)(DAT_03005264 + 0x68) = uVar4;
      if (*DAT_0300525c == '\0') {
        uVar4 = (int)local_18 - (iVar2 + 0x6c);
      }
    }
    *(uint *)(DAT_03005260 + 0x24) = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x08044eae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08044EB0 @ 0x08044EB0 */

void sub_08044EB0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = DAT_03005260;
  if (*DAT_0300525c == -1) goto _08044F46;
  if (*DAT_0300525c == '\x01') {
    if ((DAT_0300525c[4] != '\0' || DAT_0300525c[5] != '\0') || DAT_0300525c[6] != '\0')
    goto _08044F18;
    if (*(char *)(DAT_03005260 + 3) != '\0') {
      *(undefined1 *)(DAT_03005260 + 8) = 0x10;
      *(undefined1 *)(iVar1 + 7) = 0;
    }
    if (*(char *)(iVar1 + 8) == '\0') {
      *(char *)(iVar1 + 7) = *(char *)(iVar1 + 7) + '\x01';
    }
    else {
      *(char *)(iVar1 + 8) = *(char *)(iVar1 + 8) + -1;
    }
    iVar2 = DAT_03005264;
    if ((*(char *)(iVar1 + 8) == '\0') && ((*(byte *)(iVar1 + 7) & 0xf) != 0)) goto _08044F5C;
    *(undefined4 *)(DAT_03005264 + 0x68) = 1;
    *(undefined4 *)(iVar2 + 0x78) = 0xff;
    sub_08045A5E(0x8045659);
    if (param_1 != 0) {
      uVar3 = 1;
      goto _08044F52;
    }
    uVar3 = 1;
  }
  else {
_08044F18:
    if (DAT_0300525c[0xe] == '\0') {
      sub_08044DE2();
    }
    if (DAT_0300525c[0xe] == '\0') {
_08044F5C:
      if (param_1 != 0) {
        if (*DAT_0300525c == '\x01') {
          if (*(int *)(DAT_03005294 + 0x1c) != 0) {
            __call_via_r1(0x27);
          }
        }
        else {
          sub_08045A5E(0x80455cf);
          sub_08046124();
        }
      }
      goto _08044F46;
    }
    sub_08045A5E(0x80455dd);
    if (param_1 != 0) {
      uVar3 = *(int *)(DAT_03005260 + 0x24) + 4U & 0xff;
_08044F52:
      sub_080460C4(DAT_03005264 + 0x68,uVar3);
      goto _08044F46;
    }
    uVar3 = *(int *)(DAT_03005260 + 0x24) + 4U & 0xff;
  }
  sub_08046080(DAT_03005264 + 0x68,uVar3);
_08044F46:
                    /* WARNING: Could not recover jumptable at 0x08044f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08044F86 @ 0x08044F86 */

void sub_08044F86(int param_1,uint param_2,int param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  short *psVar7;
  byte *pbVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  psVar7 = (short *)(&DAT_03005268)[param_1];
  sVar4 = *psVar7;
  uVar12 = 1 << (param_2 & 0xff);
  cVar1 = *(char *)((int)psVar7 + *(byte *)(param_3 + 4) + 0x21);
  cVar2 = *(char *)(param_3 + 2);
  if (((((cVar2 == '\x02') && (sVar4 == -0x7fde)) || ((cVar2 == '\x01' && (sVar4 == -0x7fdf)))) ||
      ((cVar2 == '\x03' && (sVar4 == -0x7fdd)))) && (cVar1 == *(char *)(param_3 + 5))) {
    pbVar8 = (byte *)((int)psVar7 + *(byte *)(param_3 + 4) + 0x1b);
    *pbVar8 = *pbVar8 | (byte)uVar12;
  }
  bVar3 = *(byte *)(param_3 + 4);
  if ((*(byte *)(psVar7 + 0xd) & ~*(byte *)((int)psVar7 + bVar3 + 0x1b)) == 0) {
    *(byte *)((int)psVar7 + bVar3 + 0x21) = *(char *)((int)psVar7 + bVar3 + 0x21) + 1U & 3;
    *(undefined1 *)((int)psVar7 + *(byte *)(param_3 + 4) + 0x1b) = 0;
    sVar5 = *psVar7;
    if ((sVar5 == -0x7fdf) || (sVar5 == -0x7fde)) {
      if (sVar5 == -0x7fdf) {
        piVar9 = (int *)(psVar7 + (uint)*(byte *)(param_3 + 4) * 2 + 2);
        uVar13 = (uint)(ushort)psVar7[0x17];
        iVar11 = *piVar9;
      }
      else {
        piVar9 = (int *)(psVar7 + (uint)*(byte *)(param_3 + 4) * 2 + 2);
        iVar11 = *piVar9;
        uVar13 = (uint)(ushort)psVar7[0x17] << 2;
      }
      *piVar9 = iVar11 + uVar13;
      iVar11 = *(int *)(psVar7 + 10) - (uint)(ushort)psVar7[0x17];
      *(int *)(psVar7 + 10) = iVar11;
      if ((iVar11 == 0) || (iVar11 < 0)) {
        *(undefined1 *)(psVar7 + 0x10) = 0;
        if (*psVar7 == -0x7fdf) {
          uVar13 = 0;
          do {
            *(undefined1 *)((int)psVar7 + uVar13 + 0x21) = 1;
            uVar10 = uVar13 + 1 & 0xff;
            *(uint *)(psVar7 + uVar13 * 2 + 2) =
                 *(int *)(psVar7 + 0x14) + uVar13 * (ushort)psVar7[0x17];
            uVar13 = uVar10;
          } while (uVar10 < 4);
          *(undefined4 *)(psVar7 + 10) = *(undefined4 *)(psVar7 + 0x18);
          *psVar7 = -0x7fde;
        }
        else {
          *(undefined1 *)((int)psVar7 + 0x21) = 0;
          psVar7[10] = 0;
          psVar7[0xb] = 0;
          *psVar7 = -0x7fdd;
        }
      }
    }
    else if (sVar5 == -0x7fdd) {
      *psVar7 = -0x7fe0;
    }
  }
  if (((*psVar7 != sVar4) || (*(char *)((int)psVar7 + *(byte *)(param_3 + 4) + 0x21) != cVar1)) ||
     ((*(byte *)((int)psVar7 + *(byte *)(param_3 + 4) + 0x1b) & uVar12) != 0)) {
    uVar6 = REG_IME;
    REG_IME = 0;
    *(byte *)(DAT_03005260 + 2) = *(byte *)(DAT_03005260 + 2) | (byte)(0x10 << (param_2 & 0xff));
    *(undefined2 *)((&DAT_03005268)[param_2] + 2) = 0;
    REG_IME = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x080450e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_080450A8 @ 0x080450A8 */

void sub_080450A8(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  byte unaff_r5;
  uint in_r12;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_4 == param_5) {
    param_1 = (uint)*(byte *)(param_3 + 4) + param_1;
    if ((*(byte *)(param_1 + 0x21) == in_r12) && ((*(byte *)(param_1 + 0x1b) & unaff_r5) == 0))
    goto _080450E2;
  }
  uVar1 = REG_IME;
  REG_IME = 0;
  *(byte *)(DAT_03005260 + 2) = *(byte *)(DAT_03005260 + 2) | (byte)(0x10 << (param_2 & 0xff));
  *(undefined2 *)((&DAT_03005268)[param_2] + 2) = 0;
  REG_IME = uVar1;
_080450E2:
                    /* WARNING: Could not recover jumptable at 0x080450e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_080450E8 @ 0x080450E8 */

void sub_080450E8(uint param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  int iVar8;
  undefined4 uStack_18;
  
  iVar6 = (&DAT_03005268)[param_1];
  puVar7 = (ushort *)(iVar6 + 0x34);
  uVar5 = (uint)*puVar7;
  uVar4 = (uint)*(byte *)((int)puVar7 + *(byte *)(param_2 + 4) + 0x21);
  cVar1 = *(char *)(param_2 + 2);
  bVar2 = (byte)(1 << (param_1 & 0xff));
  uStack_18 = param_3;
  if (cVar1 == '\x03') {
    *(byte *)(DAT_03005260 + 1) = *(byte *)(DAT_03005260 + 1) | bVar2;
    if (*puVar7 == 0x8042) {
      *(undefined1 *)(iVar6 + 0x54) = 0;
      *(undefined1 *)(iVar6 + 0x55) = 0;
      *puVar7 = 0x8043;
    }
  }
  else {
    iVar8 = param_2;
    if (cVar1 == '\x02') {
      if ((uVar5 == 0x8041) && (*(int *)(iVar6 + 0x48) == 0)) {
        sub_080456E0(param_1,puVar7);
      }
      if (*puVar7 == 0x8042) {
_08045176:
        if ((*(char *)((int)puVar7 + *(byte *)(param_2 + 4) + 0x21) + 1U & 3) ==
            *(byte *)(param_2 + 5)) {
          __call_via_r3(&uStack_18,puVar7 + (uint)*(byte *)(param_2 + 4) * 2 + 2,
                        *(undefined2 *)(param_2 + 6),*(undefined4 *)(DAT_03005264 + 4),uVar4,uVar5,
                        param_1,iVar8);
          if (*puVar7 == 0x8042) {
            *(uint *)(puVar7 + (uint)*(byte *)(param_2 + 4) * 2 + 2) =
                 *(int *)(puVar7 + (uint)*(byte *)(param_2 + 4) * 2 + 2) +
                 (uint)*(ushort *)(iVar6 + 0x62) * 3;
          }
          *(uint *)(iVar6 + 0x48) = *(int *)(iVar6 + 0x48) - (uint)*(ushort *)(param_2 + 6);
          *(undefined1 *)((int)puVar7 + *(byte *)(param_2 + 4) + 0x21) =
               *(undefined1 *)(param_2 + 5);
        }
      }
    }
    else if (cVar1 == '\x01') {
      if ((uVar5 != 0x8041) && (sub_08045670(param_1,puVar7), *puVar7 != 0x8041)) goto _08045208;
      goto _08045176;
    }
  }
  if ((*(short *)(iVar6 + 0x4c) == 0) &&
     (((*(undefined1 *)(iVar6 + 0x54) = *(undefined1 *)(param_2 + 4), *puVar7 != uVar5 ||
       (uVar5 = (uint)*(byte *)((int)puVar7 + *(byte *)(param_2 + 4) + 0x21), uVar5 != uVar4)) ||
      (uVar5 == *(byte *)(param_2 + 5))))) {
    uVar3 = REG_IME;
    REG_IME = 0;
    *(byte *)(DAT_03005260 + 2) = *(byte *)(DAT_03005260 + 2) | bVar2;
    *(undefined2 *)(iVar6 + 0x36) = 0;
    REG_IME = uVar3;
  }
_08045208:
                    /* WARNING: Could not recover jumptable at 0x0804520e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08045210 @ 0x08045210 */

void sub_08045210(uint param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar2 = (&DAT_03005278)[param_1];
  puVar3 = (undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)(iVar2 + 0xe) = 0;
  uStack_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  if (*(uint *)((&DAT_03005278)[param_1] + 0x18) < (uint)*(ushort *)(param_2 + 6)) {
    *puVar3 = 0x49;
    uVar1 = 0x701;
_08045248:
    *(undefined2 *)(iVar2 + 0xe) = uVar1;
  }
  else {
    if (*(char *)(iVar2 + 0x13) == '\0') {
      if (*(char *)(iVar2 + 0x12) != '\0') {
        *(undefined2 *)(iVar2 + 0xe) = 0x708;
      }
    }
    else if (*(char *)(iVar2 + 0x12) != '\0') {
      uVar1 = 0x709;
      goto _08045248;
    }
    *puVar3 = 0x8042;
    *(undefined2 *)(iVar2 + 0x10) = *(undefined2 *)(param_2 + 6);
    uStack_24 = *(undefined4 *)((&DAT_03005278)[param_1] + 0x14);
    __call_via_r3(&uStack_18,&uStack_24,*(undefined2 *)(param_2 + 6),
                  *(undefined4 *)(DAT_03005264 + 4));
    *(undefined1 *)(iVar2 + 0x12) = 1;
    *puVar3 = 0;
    if (*(short *)(iVar2 + 0xe) == 0) goto _08045290;
  }
  *(byte *)(DAT_03005260 + 4) = *(byte *)(DAT_03005260 + 4) | (byte)(0x10 << (param_1 & 0xff));
_08045290:
                    /* WARNING: Could not recover jumptable at 0x08045296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08045298 @ 0x08045298 */

void sub_08045298(uint param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar6 = (~(uint)*DAT_0300525c & 1) * 0x10;
  uVar8 = (uint)(byte)(&gUnknown_087B7714)[iVar6];
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (uVar8 <= param_3) {
    uVar5 = 0;
    pbVar9 = param_2;
    for (uVar7 = 0; uVar7 < uVar8; uVar7 = uVar7 + 1 & 0xff) {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar5 = uVar5 | (uint)bVar1 << ((uVar7 & 0x1f) << 3);
    }
    bVar1 = (byte)(uVar5 >> (&UNK_087b7715)[iVar6]) & (&UNK_087b771b)[iVar6];
    bVar2 = (byte)(uVar5 >> (&UNK_087b7716)[iVar6]) & (&UNK_087b771c)[iVar6];
    bVar3 = (byte)(uVar5 >> (&DAT_087b7717)[iVar6]) & (&UNK_087b771d)[iVar6];
    bVar4 = (byte)(uVar5 >> (&UNK_087b7718)[iVar6]) & (&UNK_087b771e)[iVar6];
    uStack_1c = CONCAT13(bVar4,CONCAT12(bVar3,CONCAT11(bVar2,bVar1)));
    uStack_18 = CONCAT22((short)(*(ushort *)(&UNK_087b7722 + iVar6) & uVar5),
                         CONCAT11((byte)(uVar5 >> (&UNK_087b771a)[iVar6]) & (&UNK_087b7720)[iVar6],
                                  (byte)(uVar5 >> (&UNK_087b7719)[iVar6]) & (&UNK_087b771f)[iVar6]))
    ;
    param_3 = (uint)(byte)(&gUnknown_087B7714)[iVar6] + (*(ushort *)(&UNK_087b7722 + iVar6) & uVar5)
              & 0xffff;
    if (bVar1 == 0) {
      if (*DAT_0300525c == 1) {
        uVar8 = 1 << (param_1 & 0xff);
        if ((DAT_0300525c[2] & uVar8) != 0) {
          if (bVar3 == 4) {
            sub_08045210(param_1,&uStack_1c,pbVar9);
          }
          else if (bVar4 == 0) {
            sub_080450E8(param_1,&uStack_1c,pbVar9);
          }
          else {
            uVar5 = 0;
            do {
              if (((*(byte *)((&DAT_03005268)[uVar5] + 0x1a) & uVar8) != 0) &&
                 ((DAT_0300525c[4] & uVar8) != 0)) {
                if (uVar5 < 4) {
                  sub_08044F86(uVar5,param_1,&uStack_1c,pbVar9);
                }
                break;
              }
              uVar5 = uVar5 + 1 & 0xff;
            } while (uVar5 < 4);
          }
        }
      }
      else {
        uVar8 = (uint)(DAT_0300525c[2] & bVar2);
        if (uVar8 != 0) {
          uVar5 = 0;
          do {
            if ((1 << uVar5 & uVar8) != 0) {
              if (uStack_1c._2_1_ == '\x04') {
                sub_08045210(uVar5,&uStack_1c,pbVar9);
              }
              else if (uStack_1c._3_1_ == '\0') {
                sub_080450E8(uVar5,&uStack_1c,pbVar9);
              }
              else if (((uint)DAT_0300525c[4] & 1 << uVar5) != 0) {
                sub_08044F86(uVar5,uVar5,&uStack_1c,pbVar9);
              }
            }
            uVar5 = uVar5 + 1 & 0xff;
          } while (uVar5 < 4);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08045408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,param_2,uStack_1c);
  return;
}


/* sub_0804540A @ 0x0804540A */

void sub_0804540A(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_20;
  
  iVar3 = DAT_03005260;
  if ((param_2 == 0) && (*(char *)(*(int *)(DAT_03005264 + 0xdc) + 1) != '\0')) {
    *(undefined1 *)(DAT_03005260 + 1) = 0;
    if (*DAT_0300525c == '\x01') {
      sub_08045762();
    }
    else {
      uVar1 = *(ushort *)(*(int *)(DAT_03005264 + 0xdc) + 4);
      iVar5 = *(int *)(DAT_03005264 + 0xdc) + 8;
      uVar4 = uVar1 & 0x7f;
      if ((uVar1 & 0x7f) == 0) {
        *(undefined1 *)(iVar3 + 1) = 0xf;
      }
      else {
        do {
          iVar3 = sub_08045298(0,iVar5,uVar4);
          iVar5 = iVar5 + iVar3;
          uVar4 = uVar4 - iVar3 & 0xffff;
          if ((int)(uVar4 << 0x10) < 0) break;
        } while (uVar4 != 0);
      }
    }
    uVar4 = 0;
    do {
      iVar3 = (&DAT_03005268)[uVar4];
      if (*(short *)(iVar3 + 0x34) == -0x7fbd) {
        if (((uint)*(byte *)(DAT_03005260 + 1) & 1 << uVar4) == 0) {
          if (*(char *)(iVar3 + 0x61) == '\x01') {
            DAT_0300525c[7] = (byte)(1 << uVar4) | DAT_0300525c[7];
          }
          sub_08044668(uVar4,1,(undefined2 *)(iVar3 + 0x34));
          DAT_0300525c[5] = DAT_0300525c[5] & ~*(byte *)(iVar3 + 0x4e);
          *(undefined2 *)(iVar3 + 0x34) = 0x46;
        }
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 4);
    if (*(byte *)(DAT_03005260 + 4) != 0) {
      param_2 = *(byte *)(DAT_03005260 + 4) | 0x700;
    }
  }
  uVar2 = sub_080437C2(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x080454e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uStack_20,param_1);
  return;
}


/* sub_080454EA @ 0x080454EA */

void sub_080454EA(void)

{
  int iVar1;
  
  iVar1 = DAT_03005260;
  if (*DAT_0300525c != -1) {
    *(char *)(DAT_03005260 + 3) = DAT_0300525c[6] | DAT_0300525c[4] | DAT_0300525c[5];
    *(undefined1 *)(iVar1 + 4) = 0;
    sub_08045A5E(0x804540b);
    sub_08046108();
  }
  return;
}


/* sub_0804551A @ 0x0804551A */

void sub_0804551A(void)

{
  sub_08045A5E(0x80437c3);
  sub_080461F8(1,0);
  return;
}


/* sub_08045530 @ 0x08045530 */

void sub_08045530(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  puVar2 = (undefined1 *)*param_1;
  puVar3 = (undefined1 *)*param_2;
  while (bVar4 = param_3 != 0, param_3 = param_3 + -1, bVar4) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  *param_1 = puVar2;
  *param_2 = puVar3;
  return;
}


/* sub_0804554C @ 0x0804554C */

void sub_0804554C(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    DAT_04000128 = 0x2000;
  }
  sub_080437C2();
  return;
}


/* sub_08045564 @ 0x08045564 */

void sub_08045564(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    sub_080435BE();
  }
  sub_080437C2(param_1,param_2);
  return;
}


/* sub_0804557E @ 0x0804557E */

void sub_0804557E(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(DAT_03005260 + 9) = 1;
  }
  sub_080437C2();
  return;
}


/* sub_08045598 @ 0x08045598 */

void sub_08045598(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    sub_08043B66(0);
  }
  sub_080437C2(param_1,param_2);
  return;
}


/* sub_080455B4 @ 0x080455B4 */

void sub_080455B4(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    sub_08043D94();
  }
  sub_080437C2(param_1,param_2);
  return;
}


/* sub_080455CE @ 0x080455CE */

void sub_080455CE(void)

{
  sub_080437C2(0x24);
  return;
}


/* sub_080455DC @ 0x080455DC */

void sub_080455DC(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
    do {
      if (*(char *)((&DAT_03005278)[uVar2] + 2) != '\0') {
        *(undefined1 *)((&DAT_03005278)[uVar2] + 2) = 0;
      }
      psVar3 = (short *)(&DAT_03005268)[uVar2];
      if (*psVar3 == -0x7fe0) {
        sub_08044668(uVar2,0,psVar3);
        iVar1 = DAT_0300525c;
        *(byte *)(DAT_0300525c + 4) = *(byte *)(DAT_0300525c + 4) & ~*(byte *)(psVar3 + 0xd);
        if (*(char *)((int)psVar3 + 0x2d) == '\x01') {
          *(byte *)(iVar1 + 7) = *(byte *)(iVar1 + 7) | (byte)(1 << uVar2);
        }
        *psVar3 = 0x26;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 4);
  }
  *(undefined1 *)(DAT_0300525c + 0xe) = 0;
  sub_080437C2(0x24,param_2);
  return;
}


/* sub_08045658 @ 0x08045658 */

void sub_08045658(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    if (param_1 != 0xff) goto _0804566A;
  }
  else {
    param_1 = 0x24;
  }
  sub_080437C2(param_1);
_0804566A:
                    /* WARNING: Could not recover jumptable at 0x0804566e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08045670 @ 0x08045670 */

void sub_08045670(uint param_1,short *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  if (*DAT_0300525c == '\x01') {
    bVar3 = 3;
    pbVar2 = (byte *)(DAT_0300525c + 0xf);
  }
  else {
    bVar3 = 2;
    pbVar2 = (byte *)(DAT_0300525c + param_1 + 0x10);
  }
  bVar1 = (byte)(1 << (param_1 & 0xff));
  if (*param_2 == 0) {
    if (*pbVar2 < bVar3) {
      *param_2 = 0x49;
      param_2[0xc] = 0x702;
      *(byte *)(DAT_03005260 + 4) = bVar1 | *(byte *)(DAT_03005260 + 4);
    }
    else {
      param_2[0xc] = 0;
      *pbVar2 = *pbVar2 - bVar3;
      *(int *)(param_2 + 2) = (int)param_2 + 0x2d;
      param_2[10] = 7;
      param_2[0xb] = 0;
      *(undefined1 *)((int)param_2 + 0x1f) = 1;
      param_2[0x17] = 0;
      *(byte *)(param_2 + 0xd) = bVar1;
      *param_2 = -0x7fbf;
      DAT_0300525c[5] = bVar1 | DAT_0300525c[5];
    }
  }
  return;
}


/* sub_080456E0 @ 0x080456E0 */

void sub_080456E0(uint param_1,undefined2 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = DAT_0300525c;
  if (*(char *)((int)param_2 + 0x2d) == '\x01') {
    iVar2 = param_1 * 0x20 + DAT_0300525c + 0x18;
  }
  else {
    if (*(uint *)((&DAT_03005268)[param_1] + 0x6c) < *(uint *)(param_2 + 0x18)) {
      bVar1 = (byte)(1 << (param_1 & 0xff));
      *(byte *)(DAT_03005260 + 4) = *(byte *)(DAT_03005260 + 4) | bVar1;
      *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) & ~bVar1;
      param_2[0xc] = 0x701;
      *param_2 = 0x47;
      sub_08044668(param_1,1,param_2);
      goto _0804572A;
    }
    iVar2 = *(int *)((&DAT_03005268)[param_1] + 0x68);
  }
  *(int *)(param_2 + 2) = iVar2;
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_2 + uVar3 + 0x21) = 0;
    uVar4 = uVar3 + 1 & 0xff;
    *(uint *)(param_2 + uVar3 * 2 + 2) = *(int *)(param_2 + 2) + uVar3 * (ushort)param_2[0x17];
    uVar3 = uVar4;
  } while (uVar4 < 4);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_2 + 0x18);
  *param_2 = 0x8042;
_0804572A:
                    /* WARNING: Could not recover jumptable at 0x0804572e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08045762 @ 0x08045762 */

void sub_08045762(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_r3;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_18;
  
  iVar5 = DAT_03005260;
  local_18 = in_r3;
  uVar3 = *(uint *)(*(int *)(DAT_03005264 + 0xdc) + 4) >> 8;
  uVar1 = 0;
  do {
    uVar4 = uVar3 & 0x1f;
    uVar3 = uVar3 >> 5;
    *(char *)((int)&local_18 + uVar1) = (char)uVar4;
    if (uVar4 == 0) {
      *(byte *)(iVar5 + 1) = *(byte *)(iVar5 + 1) | (byte)(1 << uVar1);
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  iVar5 = *(int *)(DAT_03005264 + 0xdc) + 8;
  uVar1 = 0;
_080457C2:
  do {
    if (*(char *)((int)&local_18 + uVar1) != '\0') {
      uVar3 = sub_08045298(uVar1,iVar5);
      iVar5 = iVar5 + (uVar3 & 0xff);
      iVar2 = (uint)*(byte *)((int)&local_18 + uVar1) - (uVar3 & 0xff);
      *(char *)((int)&local_18 + uVar1) = (char)iVar2;
      if (-1 < iVar2 * 0x1000000) goto _080457C2;
    }
    uVar1 = uVar1 + 1 & 0xff;
    if (3 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x080457d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  } while( true );
}


/* sub_080457F4 @ 0x080457F4 */

short sub_080457F4(void)

{
  ushort uVar1;
  
  if (DAT_03005289 == '\0') {
    DAT_03005288 = '\x01';
    uVar1 = DAT_04000128;
    DAT_04000128 = uVar1 | 1;
    REG_IME = 0;
    uVar1 = REG_IE;
    REG_IE = uVar1 | 0x80;
    REG_IME = 1;
    DAT_03005289 = '\x01';
    uVar1 = DAT_04000128;
    DAT_04000128 = uVar1 | 0x80;
  }
  else {
    if (DAT_03005289 != '\x01') {
      return DAT_03005292;
    }
    if (DAT_03005292 != 0) {
      DAT_03005289 = 2;
      return DAT_03005292;
    }
    if (DAT_03005288 == '\x01') {
      if (DAT_0300528a != 0) {
        return 0;
      }
      REG_IME = 0;
      uVar1 = DAT_04000128;
      DAT_04000128 = uVar1 | 0x80;
    }
    else {
      if (DAT_0300528c == -0x7fff) {
        return 0;
      }
      if (DAT_0300528a != 0) {
        return 0;
      }
      REG_IME = 0;
      uVar1 = REG_IE;
      REG_IE = uVar1 & 0xff7f;
      REG_IME = 1;
      DAT_04000128 = 0;
      DAT_04000128 = 0x1000;
      REG_IF = 0x80;
      uVar1 = DAT_04000128;
      DAT_04000128 = uVar1 | 0x4080;
      REG_IME = 0;
      uVar1 = REG_IE;
      REG_IE = uVar1 | 0x80;
    }
    REG_IME = 1;
  }
  return 0;
}


/* sub_08045894 @ 0x08045894 */

void sub_08045894(void)

{
  ushort uVar1;
  undefined4 local_10;
  
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & ~((ushort)(8 << *(sbyte *)(DAT_03005294 + 10)) | 0x80);
  REG_IME = 1;
  DAT_04000134 = 0;
  DAT_04000128 = 0x1000;
  uVar1 = DAT_04000128;
  DAT_04000128 = uVar1 | 0x4080;
  local_10 = 0;
  sub_080433E0(&local_10,&DAT_03005288,0x5000003);
  REG_IF = 0x80;
  return;
}


/* sub_080458E0 @ 0x080458E0 */

void sub_080458E0(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = (uint)DAT_03005288;
  iVar1 = DAT_04000120;
  if (uVar5 != 1) {
    uVar2 = DAT_04000128;
    DAT_04000128 = uVar2 | 0x80;
  }
  uVar6 = (uint)(iVar1 << (uVar5 << 4 & 0xff)) >> 0x10;
  uVar7 = (1 - uVar5) * 0x10;
  uVar3 = iVar1 << (uVar7 & 0xff);
  uVar4 = uVar3 >> 0x10;
  if (DAT_03005292 == 0) {
    if (DAT_0300528e == uVar6) {
      if (3 < DAT_0300528a) {
        DAT_03005292 = (short)(uVar3 >> 0x10);
        goto _0804594C;
      }
      if (((~(uint)DAT_0300528c & 0xffff) == uVar6) && ((~(uint)DAT_0300528e & 0xffff) == uVar4)) {
        DAT_0300528a = DAT_0300528a + 1;
        goto _0804593A;
      }
    }
    else {
      DAT_0300528a = 0;
    }
  }
  else {
_0804593A:
    if (3 < DAT_0300528a) {
_0804594C:
      DAT_0300528c = 0x8001;
      goto _0804594E;
    }
  }
  DAT_0300528c = *(ushort *)("NINTENDO" + (uint)DAT_0300528a * 2);
_0804594E:
  DAT_0300528e = (short)~uVar4;
  DAT_04000120 = ((uint)DAT_0300528c << (uVar7 & 0xff)) + ((~uVar4 & 0xffff) << (uVar5 << 4 & 0xff))
  ;
  if ((uVar5 == 1) && ((DAT_0300528a != 0 || (uVar4 == 0x494e)))) {
    for (uVar2 = 0; uVar2 < 600; uVar2 = uVar2 + 1) {
    }
    if (DAT_03005292 == 0) {
      uVar2 = DAT_04000128;
      DAT_04000128 = uVar2 | 0x80;
    }
  }
  return;
}


/* sub_080459A4 @ 0x080459A4 */

int sub_080459A4(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  int unaff_r6;
  
  sVar2 = REG_IME;
  if (sVar2 == 0) {
    unaff_r6 = -1;
  }
  else {
    uVar1 = REG_IE;
    *DAT_03005294 = 10;
    sub_08045D72(0x80458e1);
    sub_08045894();
    uVar3 = (uint)*(byte *)((int)DAT_03005294 + 10);
    puVar4 = &REG_TM0CNT + uVar3 * 2;
    uVar5 = (uint)(param_1 << 0x1b) >> 0x18;
    while ((uVar5 != 0 && (unaff_r6 = sub_080457F4(), unaff_r6 == 0))) {
      (&DAT_04000102)[uVar3 * 2] = 0;
      *puVar4 = 0;
      (&DAT_04000102)[uVar3 * 2] = 0x83;
      do {
      } while (*puVar4 < 0x20);
      (&DAT_04000102)[uVar3 * 2] = 0;
      *puVar4 = 0;
      uVar5 = uVar5 + 0xff & 0xff;
    }
    REG_IME = 0;
    REG_IE = uVar1;
    REG_IME = 1;
    *DAT_03005294 = 0;
    sub_08045D72(0);
  }
  return unaff_r6;
}


/* sub_08045A4C @ 0x08045A4C */

void sub_08045A4C(undefined4 param_1)

{
  *(undefined4 *)(DAT_03005294 + 0x1c) = param_1;
  return;
}


/* sub_08045A54 @ 0x08045A54 */

void sub_08045A54(void)

{
  *(undefined4 *)(DAT_03005294 + 0x1c) = 0;
  return;
}


/* sub_08045A5E @ 0x08045A5E */

void sub_08045A5E(undefined4 param_1)

{
  *(undefined4 *)(DAT_03005294 + 0x18) = param_1;
  return;
}


/* sub_08045A66 @ 0x08045A66 */

void sub_08045A66(void)

{
  *(undefined4 *)(DAT_03005294 + 0x18) = 0;
  return;
}


/* sub_08045A70 @ 0x08045A70 */

void sub_08045A70(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  DAT_03005294 = (undefined4 *)(param_1 + 0xe8);
  if (param_3 == 1) {
    *param_2 = (int)DAT_03005294;
    REG_DMA3SAD = 0x80462ac;
    REG_DMA3DAD = *param_2;
    REG_DMA3CNT = 0x800004b0;
    uVar1 = REG_DMA3CNT;
    *param_2 = *param_2 + 0x77c;
    DAT_03005294 = (undefined4 *)(param_1 + 0xa48);
  }
  else {
    *param_2 = (int)sub_08046A28;
  }
  puVar4 = DAT_03005294;
  DAT_03005294[10] = param_1;
  puVar4[9] = param_1 + 0x74;
  *(undefined1 *)(puVar4 + 5) = 1;
  uVar5 = 0;
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(undefined1 *)((int)puVar4 + 5) = 0;
  *(undefined1 *)((int)puVar4 + 7) = 0;
  *(undefined1 *)(puVar4 + 2) = 0;
  *(undefined1 *)((int)puVar4 + 9) = 0;
  puVar4[3] = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  *(undefined2 *)((int)puVar4 + 0x12) = 0;
  *(undefined1 *)((int)puVar4 + 0x15) = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  DAT_04000134 = 0x100;
  DAT_04000128 = 0x5003;
  sub_08045A66();
  sub_08045A54();
  uVar3 = REG_IME;
  REG_IME = uVar5;
  uVar2 = REG_IE;
  REG_IE = uVar2 | 0x80;
  REG_IME = uVar3;
                    /* WARNING: Could not recover jumptable at 0x08045af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08045AF6 @ 0x08045AF6 */

undefined4 sub_08045AF6(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_03005294;
  *DAT_03005294 = 5;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  DAT_04000120 = 0x80000000;
  DAT_04000128 = 0;
  DAT_04000128 = 0x5003;
  DAT_04000128 = 0x5082;
  return 0;
}


/* sub_08045B22 @ 0x08045B22 */

void sub_08045B22(void)

{
  int iVar1;
  
  iVar1 = DAT_03005294;
  *(undefined4 *)(DAT_03005294 + 0xc) = 0;
  (&REG_TM0CNT)[(uint)*(byte *)(iVar1 + 10) * 2] = 0;
  (&DAT_04000102)[(uint)*(byte *)(iVar1 + 10) * 2] = 0;
  return;
}


/* sub_08045B40 @ 0x08045B40 */

undefined4 sub_08045B40(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = CONCAT11(*(undefined1 *)(DAT_03005294 + 1),*(undefined1 *)((int)DAT_03005294 + 6)) |
          0x99660000;
  *(uint *)DAT_03005294[9] = uVar4;
  puVar3 = DAT_03005294;
  DAT_04000120 = uVar4;
  *DAT_03005294 = 0;
  *(undefined1 *)((int)puVar3 + 5) = 1;
  uVar2 = REG_IME;
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = (ushort)(8 << *(sbyte *)((int)puVar3 + 10)) | uVar1;
  uVar1 = REG_IE;
  REG_IE = uVar1 | 0x80;
  REG_IME = uVar2;
  DAT_04000128 = 0x5083;
  return 0;
}


/* sub_08045B92 @ 0x08045B92 */

void sub_08045B92(void)

{
  char cVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = DAT_03005294;
  if (*(byte *)((int)DAT_03005294 + 0x15) < 2) {
    *(byte *)((int)DAT_03005294 + 0x15) = *(byte *)((int)DAT_03005294 + 0x15) + 1;
    sub_08045B40();
  }
  else {
    cVar1 = *(char *)((int)DAT_03005294 + 6);
    if ((((cVar1 == '\'') || (cVar1 == '%')) || (cVar1 == '5')) || (cVar1 == '7')) {
      *(undefined2 *)((int)DAT_03005294 + 0x12) = 1;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      if (puVar2[6] != 0) {
        __call_via_r2(cVar1,*(undefined2 *)((int)puVar2 + 0x12));
      }
    }
    else {
      *(undefined2 *)((int)DAT_03005294 + 0x12) = 1;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      if (puVar2[6] != 0) {
        __call_via_r2(cVar1,*(undefined2 *)((int)puVar2 + 0x12));
      }
      *DAT_03005294 = 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08045bf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}


/* sub_08045BF4 @ 0x08045BF4 */

void sub_08045BF4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  bVar1 = *(byte *)(DAT_03005294 + 10);
  puVar3 = &REG_TM0CNT + (uint)bVar1 * 2;
  REG_IME = 0;
  if (param_1 == 0x32) {
    *puVar3 = 0xfccb;
    *(undefined4 *)(DAT_03005294 + 0xc) = 1;
  }
  else {
    if (param_1 == 0x50) {
      *puVar3 = 0xfae0;
      uVar2 = 2;
    }
    else if (param_1 == 100) {
      *puVar3 = 0xf996;
      uVar2 = 3;
    }
    else {
      if (param_1 != 0x82) goto _08045C46;
      *puVar3 = 0xf7ad;
      uVar2 = 4;
    }
    *(undefined4 *)(DAT_03005294 + 0xc) = uVar2;
  }
_08045C46:
  (&DAT_04000102)[(uint)bVar1 * 2] = 0xc3;
  REG_IF = (short)(8 << *(sbyte *)(DAT_03005294 + 10));
  REG_IME = 1;
  return;
}


/* sub_08045C5A @ 0x08045C5A */

void sub_08045C5A(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_03005294 + 0xc);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined1 *)(DAT_03005294 + 0x10) = 1;
      sub_08045BF4(0x32);
      return;
    }
    if (iVar1 == 3) {
      *(undefined1 *)(DAT_03005294 + 0x10) = 1;
      sub_08045B22();
      sub_08045AF6();
      if (*(int *)(DAT_03005294 + 0x18) == 0) {
        return;
      }
      __call_via_r2(0xff,0);
      return;
    }
    if (iVar1 != 4) {
      return;
    }
  }
  sub_08045B22();
  sub_08045B92();
  return;
}


/* sub_08045CA8 @ 0x08045CA8 */

void sub_08045CA8(undefined4 *param_1,undefined1 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  
  *param_1 = 0x8045c5b;
  iVar3 = DAT_03005294;
  *(undefined1 *)(DAT_03005294 + 10) = param_2;
  uVar2 = REG_IME;
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = (ushort)(8 << *(sbyte *)(iVar3 + 10)) | uVar1;
  REG_IME = uVar2;
  return;
}


/* sub_08045CCE @ 0x08045CCE */

void sub_08045CCE(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  
  DAT_04000134 = 0x8000;
  DAT_04000134 = 0x80a0;
  bVar1 = *(byte *)((int)DAT_03005294 + 10);
  puVar3 = &DAT_04000102 + (uint)bVar1 * 2;
  *puVar3 = 0;
  (&REG_TM0CNT)[(uint)bVar1 * 2] = 0;
  *puVar3 = 0x83;
  while ((ushort)(&REG_TM0CNT)[(uint)bVar1 * 2] < 0x12) {
    DAT_04000134 = 0x80a2;
  }
  *puVar3 = 3;
  puVar2 = DAT_03005294;
  DAT_04000134 = 0x80a0;
  DAT_04000128 = 0x5003;
  *DAT_03005294 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined1 *)((int)puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 6) = 0;
  *(undefined1 *)((int)puVar2 + 7) = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *(undefined1 *)((int)puVar2 + 9) = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined2 *)((int)puVar2 + 0x12) = 0;
  *(undefined1 *)(puVar2 + 5) = 1;
  *(undefined1 *)((int)puVar2 + 0x15) = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  return;
}


/* sub_08045D3E @ 0x08045D3E */

void sub_08045D3E(undefined1 param_1)

{
  *(undefined1 *)(DAT_03005294 + 0x14) = param_1;
  return;
}


/* sub_08045D46 @ 0x08045D46 */

uint sub_08045D46(int param_1)

{
  if (param_1 == 0) {
    return (uint)*(ushort *)((int)DAT_03005294 + 0x12);
  }
  if (param_1 == 1) {
    return (uint)(byte)DAT_03005294[5];
  }
  if (param_1 == 2) {
    return *DAT_03005294 & 0xffff;
  }
  if (param_1 == 3) {
    return (uint)*(byte *)((int)DAT_03005294 + 6);
  }
  return 0xffff;
}


/* sub_08045D72 @ 0x08045D72 */

void sub_08045D72(undefined4 param_1)

{
  *(undefined4 *)(DAT_03005294 + 0x20) = param_1;
  return;
}


/* sub_08045D7A @ 0x08045D7A */

undefined2 sub_08045D7A(void)

{
  do {
  } while (*(char *)(DAT_03005294 + 0x2c) == '\x01');
  return *(undefined2 *)(DAT_03005294 + 0x12);
}


/* sub_08045D8C @ 0x08045D8C */

void sub_08045D8C(undefined4 param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = DAT_03005294;
  sVar1 = REG_IME;
  if (sVar1 == 0) {
    *(undefined2 *)((int)DAT_03005294 + 0x12) = 6;
    if (puVar2[6] != 0) {
      __call_via_r2(param_1,*(undefined2 *)((int)puVar2 + 0x12));
    }
  }
  else if (*(char *)(DAT_03005294 + 0xb) == '\x01') {
    *(undefined2 *)((int)DAT_03005294 + 0x12) = 2;
    *(undefined1 *)(puVar2 + 0xb) = 0;
    if (puVar2[6] != 0) {
      __call_via_r2(param_1,*(undefined2 *)((int)puVar2 + 0x12));
    }
  }
  else {
    if (*(char *)(DAT_03005294 + 5) != '\0') {
      *(undefined1 *)(DAT_03005294 + 0xb) = 1;
      *(char *)((int)puVar2 + 6) = (char)param_1;
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined1 *)((int)puVar2 + 5) = 0;
      *(undefined1 *)((int)puVar2 + 7) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined1 *)((int)puVar2 + 9) = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 4) = 0;
      *(undefined2 *)((int)puVar2 + 0x12) = 0;
      *(undefined1 *)((int)puVar2 + 0x15) = 0;
      DAT_04000134 = 0x100;
      DAT_04000128 = 0x5003;
      uVar3 = 0;
      goto _08045DE4;
    }
    *(undefined2 *)((int)DAT_03005294 + 0x12) = 4;
    if (puVar2[6] != 0) {
      __call_via_r2(param_1,*(undefined2 *)((int)puVar2 + 0x12));
    }
  }
  uVar3 = 1;
_08045DE4:
                    /* WARNING: Could not recover jumptable at 0x08045de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}


/* sub_08045E54 @ 0x08045E54 */

void sub_08045E54(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x10);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045E70 @ 0x08045E70 */

void sub_08045E70(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x11);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045E8C @ 0x08045E8C */

void sub_08045E8C(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x12);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045EA8 @ 0x08045EA8 */

void sub_08045EA8(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x13);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045EC4 @ 0x08045EC4 */

void sub_08045EC4(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x14);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045EE0 @ 0x08045EE0 */

void sub_08045EE0(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x15);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045EFC @ 0x08045EFC */

void sub_08045EFC(undefined2 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar2 = sub_08045D8C(0x16);
  iVar3 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 6;
    iVar3 = *(int *)(iVar3 + 0x24);
    *(undefined2 *)(iVar3 + 4) = *param_1;
    puVar4 = (undefined1 *)(iVar3 + 6);
    param_1 = param_1 + 1;
    iVar3 = 2;
    do {
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined2 *)((int)param_1 + 1);
      iVar3 = iVar3 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 0x10);
    iVar3 = 0;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 8);
    sub_08045B40();
  }
  return;
}


/* sub_08045F4A @ 0x08045F4A */

void sub_08045F4A(undefined2 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08045D8C(0x17);
  iVar2 = DAT_03005294;
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    iVar2 = *(int *)(iVar2 + 0x24);
    *(undefined1 *)(iVar2 + 4) = param_3;
    *(undefined1 *)(iVar2 + 5) = param_2;
    *(undefined2 *)(iVar2 + 6) = param_1;
    sub_08045B40();
  }
  return;
}


/* sub_08045F7C @ 0x08045F7C */

void sub_08045F7C(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x19);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045F98 @ 0x08045F98 */

void sub_08045F98(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x1a);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045FB4 @ 0x08045FB4 */

void sub_08045FB4(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x1b);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045FD0 @ 0x08045FD0 */

void sub_08045FD0(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x1c);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08045FEC @ 0x08045FEC */

void sub_08045FEC(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x1d);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08046008 @ 0x08046008 */

void sub_08046008(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x1e);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08046024 @ 0x08046024 */

void sub_08046024(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = sub_08045D8C(0x1f);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    *(undefined4 *)(*(int *)(iVar1 + 0x24) + 4) = param_1;
    sub_08045B40();
  }
  return;
}


/* sub_08046048 @ 0x08046048 */

void sub_08046048(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x20);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08046064 @ 0x08046064 */

void sub_08046064(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x21);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08046080 @ 0x08046080 */

void sub_08046080(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = sub_08045D8C(0x24);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    uVar3 = param_2 >> 2;
    if ((param_2 & 3) != 0) {
      uVar3 = uVar3 + 1 & 0xffff;
    }
    *(char *)(DAT_03005294 + 4) = (char)uVar3;
    sub_080433E0(param_1,*(int *)(iVar1 + 0x24) + 4,uVar3 & 0xff | 0x4000000);
    sub_08045B40();
  }
  return;
}


/* sub_080460C4 @ 0x080460C4 */

void sub_080460C4(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = sub_08045D8C(0x25);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    uVar3 = param_2 >> 2;
    if ((param_2 & 3) != 0) {
      uVar3 = uVar3 + 1 & 0xffff;
    }
    *(char *)(DAT_03005294 + 4) = (char)uVar3;
    sub_080433E0(param_1,*(int *)(iVar1 + 0x24) + 4,uVar3 & 0xff | 0x4000000);
    sub_08045B40();
  }
  return;
}


/* sub_08046108 @ 0x08046108 */

void sub_08046108(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x26);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08046124 @ 0x08046124 */

void sub_08046124(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x27);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_08046140 @ 0x08046140 */

void sub_08046140(int param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = sub_08045D8C(0x28);
  iVar2 = DAT_03005294;
  if (iVar1 == 0) {
    if (param_1 == 0) {
      *(undefined1 *)(DAT_03005294 + 4) = 0;
    }
    else {
      *(undefined1 *)(DAT_03005294 + 4) = 1;
      iVar2 = *(int *)(iVar2 + 0x24);
      *(char *)(iVar2 + 4) = (char)param_1;
      *(undefined1 *)(iVar2 + 5) = 0;
      *(undefined1 *)(iVar2 + 6) = 0;
      *(undefined1 *)(iVar2 + 7) = 0;
    }
    sub_08045B40();
  }
                    /* WARNING: Could not recover jumptable at 0x0804617c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_0804617E @ 0x0804617E */

void sub_0804617E(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08045D8C(0x29);
  iVar2 = DAT_03005294;
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    iVar2 = *(int *)(iVar2 + 0x24);
    *(undefined1 *)(iVar2 + 4) = param_1;
    *(undefined1 *)(iVar2 + 5) = param_2;
    *(undefined1 *)(iVar2 + 6) = 0;
    *(undefined1 *)(iVar2 + 7) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_080461B2 @ 0x080461B2 */

void sub_080461B2(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x37);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_080461CE @ 0x080461CE */

void sub_080461CE(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = sub_08045D8C(0x30);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    *(undefined4 *)(*(int *)(iVar1 + 0x24) + 4) = param_1;
    sub_08045B40();
  }
  return;
}


/* sub_080461F8 @ 0x080461F8 */

void sub_080461F8(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = sub_08045D8C(0x31);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    *(uint *)(*(int *)(iVar1 + 0x24) + 4) = param_2 << 8 | param_1;
    sub_08045B40();
  }
  return;
}


/* sub_08046222 @ 0x08046222 */

void sub_08046222(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = sub_08045D8C(0x32);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 2;
    *(uint *)(*(int *)(iVar1 + 0x24) + 4) = param_1 << 0x10 | param_2;
    *(undefined4 *)(*(int *)(iVar1 + 0x24) + 8) = param_3;
    sub_08045B40();
  }
  return;
}


/* sub_08046252 @ 0x08046252 */

void sub_08046252(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x33);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_0804626E @ 0x0804626E */

void sub_0804626E(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x34);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_0804628A @ 0x0804628A */

void sub_0804628A(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x3d);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}


/* sub_080462B0 @ 0x080462B0 */

void sub_080462B0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_03005294;
  *DAT_03005294 = 5;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 7) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined2 *)((int)puVar1 + 0x12) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  DAT_04000128 = 0x5082;
  return;
}


/* sub_08046300 @ 0x08046300 */

void sub_08046300(void)

{
  int iVar1;
  
  iVar1 = DAT_03005294;
  *(undefined4 *)(DAT_03005294 + 0xc) = 0;
  (&REG_TM0CNT)[(uint)*(byte *)(iVar1 + 10) * 2] = 0;
  (&DAT_04000102)[(uint)*(byte *)(DAT_03005294 + 10) * 2] = 0;
  return;
}


/* sub_08046338 @ 0x08046338 */

undefined4 sub_08046338(int param_1)

{
  ushort uVar1;
  
  do {
    if (*(char *)(DAT_03005294 + 0x10) == '\x01') {
      *(undefined1 *)(DAT_03005294 + 0x10) = 0;
      return 1;
    }
    uVar1 = DAT_04000128;
  } while ((uVar1 & 4) != param_1 * 4);
  return 0;
}


/* sub_08046378 @ 0x08046378 */

void sub_08046378(int param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  
  bVar1 = *(byte *)(DAT_03005294 + 10);
  puVar2 = &REG_TM0CNT + (uint)bVar1 * 2;
  REG_IME = 0;
  if (param_1 == 0x32) {
    *puVar2 = 0xfccb;
    *(undefined4 *)(DAT_03005294 + 0xc) = 1;
  }
  else if (param_1 == 0x50) {
    *puVar2 = 0xfae0;
    *(undefined4 *)(DAT_03005294 + 0xc) = 2;
  }
  else if (param_1 == 100) {
    *puVar2 = 0xf996;
    *(undefined4 *)(DAT_03005294 + 0xc) = 3;
  }
  else if (param_1 == 0x82) {
    *puVar2 = 0xf7ad;
    *(undefined4 *)(DAT_03005294 + 0xc) = 4;
  }
  (&DAT_04000102)[(uint)bVar1 * 2] = 0xc3;
  REG_IF = (short)(8 << *(sbyte *)(DAT_03005294 + 10));
  REG_IME = 1;
  return;
}


/* sub_08046448 @ 0x08046448 */

/* WARNING: Removing unreachable block (ram,0x080463c8) */
/* WARNING: Removing unreachable block (ram,0x080463c0) */
/* WARNING: Removing unreachable block (ram,0x080463f4) */
/* WARNING: Removing unreachable block (ram,0x080463e0) */

void sub_08046448(void)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar8;
  
  *(undefined1 *)(DAT_03005294 + 4) = 0;
  sub_08046378(100);
  iVar4 = sub_08046338(0);
  if (iVar4 != 1) {
    DAT_04000128 = 0x500a;
    uVar5 = DAT_04000120;
    if (*DAT_03005294 == 5) {
      *(uint *)DAT_03005294[10] = uVar5;
      piVar3 = DAT_03005294;
      *(undefined1 *)((int)DAT_03005294 + 5) = 1;
      if (uVar5 >> 0x10 != 0x9966) {
        sub_08046300();
code_r0x08046378:
        bVar6 = *(byte *)((int)DAT_03005294 + 10);
        REG_IME = 0;
        (&REG_TM0CNT)[(uint)bVar6 * 2] = 0xf996;
        DAT_03005294[3] = 3;
        (&DAT_04000102)[(uint)bVar6 * 2] = 0xc3;
        REG_IF = (short)(8 << *(sbyte *)((int)DAT_03005294 + 10));
        REG_IME = 1;
        return;
      }
      *(char *)(piVar3 + 1) = (char)((uVar5 & 0xff00) >> 8);
      uVar7 = uVar5 & 0xff;
      *(char *)((int)piVar3 + 6) = (char)uVar5;
      if ((uVar5 & 0xff00) == 0) {
        if (((uVar7 == 0x27) || (uVar7 == 0x28)) || ((uVar7 == 0x29 || (uVar7 == 0x36)))) {
          *(char *)((int)piVar3 + 9) = (char)(uVar7 + 0x80);
          *(uint *)piVar3[9] = (uVar7 + 0x80 & 0xff) + 0x99660000;
          *(undefined1 *)((int)DAT_03005294 + 7) = 0;
        }
        else {
          *(undefined4 *)piVar3[9] = 0x996601ee;
          piVar3 = DAT_03005294;
          if (*(byte *)((int)DAT_03005294 + 6) - 0x10 < 0x2e) {
            *(undefined4 *)(DAT_03005294[9] + 4) = 1;
          }
          else {
            *(undefined4 *)(DAT_03005294[9] + 4) = 2;
          }
          *(undefined1 *)((int)piVar3 + 7) = 1;
          *(undefined2 *)((int)piVar3 + 0x12) = 3;
        }
        piVar3 = DAT_03005294;
        DAT_04000120 = *(undefined4 *)DAT_03005294[9];
        *(undefined1 *)(DAT_03005294 + 2) = 1;
        *piVar3 = 7;
      }
      else {
        DAT_04000120 = 0x80000000;
        *(undefined1 *)((int)piVar3 + 5) = 1;
        *piVar3 = 6;
      }
    }
    else if (*DAT_03005294 == 6) {
      *(uint *)(DAT_03005294[10] + (uint)*(byte *)((int)DAT_03005294 + 5) * 4) = uVar5;
      piVar3 = DAT_03005294;
      bVar6 = *(char *)((int)DAT_03005294 + 5) + 1;
      *(byte *)((int)DAT_03005294 + 5) = bVar6;
      if (*(byte *)(piVar3 + 1) < bVar6) {
        cVar1 = *(char *)((int)piVar3 + 6);
        if (((cVar1 == '(') || (cVar1 == ')')) || (cVar1 == '6')) {
          *(byte *)((int)piVar3 + 9) = cVar1 + 0x80U;
          *(uint *)piVar3[9] = (byte)(cVar1 + 0x80U) + 0x99660000;
          *(undefined1 *)((int)DAT_03005294 + 7) = 0;
        }
        else {
          *(undefined4 *)piVar3[9] = 0x996601ee;
          piVar3 = DAT_03005294;
          if (*(byte *)((int)DAT_03005294 + 6) - 0x10 < 0x2e) {
            *(undefined4 *)(DAT_03005294[9] + 4) = 1;
          }
          else {
            *(undefined4 *)(DAT_03005294[9] + 4) = 2;
          }
          *(undefined1 *)((int)piVar3 + 7) = 1;
          *(undefined2 *)((int)piVar3 + 0x12) = 3;
        }
        piVar3 = DAT_03005294;
        DAT_04000120 = *(undefined4 *)DAT_03005294[9];
        *(undefined1 *)(DAT_03005294 + 2) = 1;
        *piVar3 = 7;
      }
      else {
        DAT_04000120 = 0x80000000;
      }
    }
    else if (*DAT_03005294 == 7) {
      if (uVar5 != 0x80000000) {
        sub_08046300();
        goto code_r0x08046378;
      }
      if ((uint)*(byte *)((int)DAT_03005294 + 7) < (uint)*(byte *)(DAT_03005294 + 2)) {
        *DAT_03005294 = 8;
      }
      else {
        DAT_04000120 = *(undefined4 *)(DAT_03005294[9] + (uint)*(byte *)(DAT_03005294 + 2) * 4);
        *(char *)(DAT_03005294 + 2) = (char)DAT_03005294[2] + '\x01';
      }
    }
    iVar4 = sub_08046338(1);
    if (iVar4 != 1) {
      if (*DAT_03005294 == 8) {
        DAT_04000128 = 0x5002;
        sub_08046300();
        piVar3 = DAT_03005294;
        if (*(short *)((int)DAT_03005294 + 0x12) == 3) {
          sub_080462B0();
          UNRECOVERED_JUMPTABLE = (code *)DAT_03005294[7];
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
            uVar5 = 0x1ee;
_080462AC:
                    /* WARNING: Could not recover jumptable at 0x080462ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(uVar5);
            return;
          }
        }
        else {
          DAT_04000120 = 0;
          DAT_04000128 = 0;
          DAT_04000128 = 0x5003;
          *(undefined1 *)(DAT_03005294 + 5) = 1;
          *piVar3 = 0;
          UNRECOVERED_JUMPTABLE = (code *)piVar3[7];
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
            uVar5 = (uint)*(byte *)((int)piVar3 + 6) | ((uint)*(byte *)(piVar3 + 1) << 0x18) >> 0x10
            ;
            goto _080462AC;
          }
        }
      }
      else {
        REG_IME = 0;
        uVar2 = DAT_04000102;
        if ((uVar2 & 0x80) != 0) {
          uVar2 = DAT_04000102;
          if ((uVar2 & 3) == 0) {
            do {
              uVar2 = REG_TM0CNT;
              uVar5 = (uint)uVar2;
              bVar8 = uVar5 == 0xff00;
              if (0xfeff < uVar5) {
                bVar8 = uVar5 - 0xff00 == 0x9b;
              }
            } while ((0xfeff < uVar5 && 0x9a < uVar5 - 0xff00) && !bVar8);
          }
          else {
            do {
              uVar2 = REG_TM0CNT;
              uVar5 = (uint)uVar2;
              bVar8 = uVar5 == 0xff00;
              if (0xfeff < uVar5) {
                bVar8 = uVar5 - 0xff00 == 0xfe;
              }
            } while ((0xfeff < uVar5 && 0xfd < uVar5 - 0xff00) && !bVar8);
          }
        }
        DAT_04000128 = 0x5002;
        DAT_04000128 = 0x5082;
        REG_IME = 1;
      }
    }
  }
  return;
}


/* sub_080467EC @ 0x080467EC */

/* WARNING: Removing unreachable block (ram,0x080463e0) */
/* WARNING: Removing unreachable block (ram,0x0804640c) */
/* WARNING: Removing unreachable block (ram,0x080463f4) */

void sub_080467EC(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  
  sub_08046378(0x50);
  piVar3 = DAT_03005294;
  uVar2 = DAT_04000120;
  if (*DAT_03005294 == 0) {
    if (uVar2 != 0x80000000) {
      sub_08046300();
code_r0x08046378:
      bVar5 = *(byte *)((int)DAT_03005294 + 10);
      REG_IME = 0;
      (&REG_TM0CNT)[(uint)bVar5 * 2] = 0xf7ad;
      DAT_03005294[3] = 4;
      (&DAT_04000102)[(uint)bVar5 * 2] = 0xc3;
      REG_IF = (short)(8 << *(sbyte *)((int)DAT_03005294 + 10));
      REG_IME = 1;
      return;
    }
    if ((uint)*(byte *)(DAT_03005294 + 1) < (uint)*(byte *)((int)DAT_03005294 + 5)) {
      *DAT_03005294 = 1;
      DAT_04000120 = 0x80000000;
    }
    else {
      DAT_04000120 = *(undefined4 *)(DAT_03005294[9] + (uint)*(byte *)((int)DAT_03005294 + 5) * 4);
      *(char *)((int)DAT_03005294 + 5) = *(char *)((int)DAT_03005294 + 5) + '\x01';
    }
  }
  else if (*DAT_03005294 == 1) {
    if ((uVar2 & 0xffff0000) != 0x99660000) {
      sub_08046300();
      goto code_r0x08046378;
    }
    *(undefined1 *)(DAT_03005294 + 2) = 0;
    *(uint *)piVar3[10] = uVar2;
    piVar3 = DAT_03005294;
    bVar5 = (char)DAT_03005294[2] + 1;
    *(byte *)(DAT_03005294 + 2) = bVar5;
    *(char *)((int)piVar3 + 9) = (char)uVar2;
    *(char *)((int)piVar3 + 7) = (char)((uVar2 & 0xff00) >> 8);
    if ((uVar2 & 0xff00) >> 8 < (uint)bVar5) {
      *piVar3 = 3;
    }
    else {
      *piVar3 = 2;
      DAT_04000120 = 0x80000000;
    }
  }
  else if (*DAT_03005294 == 2) {
    *(uint *)(DAT_03005294[10] + (uint)*(byte *)(DAT_03005294 + 2) * 4) = uVar2;
    piVar3 = DAT_03005294;
    bVar5 = (char)DAT_03005294[2] + 1;
    *(byte *)(DAT_03005294 + 2) = bVar5;
    if (*(byte *)((int)piVar3 + 7) < bVar5) {
      *piVar3 = 3;
    }
    else {
      DAT_04000120 = 0x80000000;
    }
  }
  iVar4 = sub_08046338(1);
  if (iVar4 != 1) {
    DAT_04000128 = 0x500b;
    iVar4 = sub_08046338(0);
    if (iVar4 != 1) {
      sub_08046300();
      piVar3 = DAT_03005294;
      if (*DAT_03005294 == 3) {
        cVar1 = *(char *)((int)DAT_03005294 + 9);
        if ((((cVar1 == -0x59) || (cVar1 == -0x5b)) || (cVar1 == -0x4b)) || (cVar1 == -0x49)) {
          *(undefined1 *)(DAT_03005294 + 5) = 0;
          DAT_04000120 = 0x80000000;
          DAT_04000128 = 0x5002;
          DAT_04000128 = 0x5082;
          *piVar3 = 5;
        }
        else if (cVar1 == -0x12) {
          DAT_04000128 = 0x5003;
          *DAT_03005294 = 4;
          *(undefined2 *)((int)piVar3 + 0x12) = 3;
        }
        else {
          DAT_04000128 = 0x5003;
          *DAT_03005294 = 4;
        }
        *(undefined1 *)(piVar3 + 0xb) = 0;
        if ((code *)piVar3[6] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x080467e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)piVar3[6])(*(undefined1 *)((int)piVar3 + 6),*(undefined2 *)((int)piVar3 + 0x12))
          ;
          return;
        }
      }
      else {
        DAT_04000128 = 0x5003;
        DAT_04000128 = 0x5083;
      }
    }
  }
  return;
}


/* sub_08046A24 @ 0x08046A24 */

void sub_08046A24(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x08046a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08046A28 @ 0x08046A28 */

void sub_08046A28(void)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined2 *puVar7;
  uint uVar8;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar9;
  
  if (*DAT_03005294 == 10) {
    if ((code *)DAT_03005294[8] == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x08046a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)DAT_03005294[8])();
    return;
  }
  if ((char)DAT_03005294[5] == '\x01') {
    sub_08046378(0x50);
    piVar3 = DAT_03005294;
    uVar4 = DAT_04000120;
    if (*DAT_03005294 == 0) {
      if (uVar4 != 0x80000000) {
        sub_08046300();
        iVar5 = 0x82;
code_r0x08046378:
        bVar6 = *(byte *)((int)DAT_03005294 + 10);
        puVar7 = &REG_TM0CNT + (uint)bVar6 * 2;
        REG_IME = 0;
        if (iVar5 == 0x32) {
          *puVar7 = 0xfccb;
          DAT_03005294[3] = 1;
        }
        else if (iVar5 == 0x50) {
          *puVar7 = 0xfae0;
          DAT_03005294[3] = 2;
        }
        else if (iVar5 == 100) {
          *puVar7 = 0xf996;
          DAT_03005294[3] = 3;
        }
        else if (iVar5 == 0x82) {
          *puVar7 = 0xf7ad;
          DAT_03005294[3] = 4;
        }
        (&DAT_04000102)[(uint)bVar6 * 2] = 0xc3;
        REG_IF = (short)(8 << *(sbyte *)((int)DAT_03005294 + 10));
        REG_IME = 1;
        return;
      }
      if ((uint)*(byte *)(DAT_03005294 + 1) < (uint)*(byte *)((int)DAT_03005294 + 5)) {
        *DAT_03005294 = 1;
        DAT_04000120 = 0x80000000;
      }
      else {
        DAT_04000120 = *(undefined4 *)(DAT_03005294[9] + (uint)*(byte *)((int)DAT_03005294 + 5) * 4)
        ;
        *(char *)((int)DAT_03005294 + 5) = *(char *)((int)DAT_03005294 + 5) + '\x01';
      }
    }
    else if (*DAT_03005294 == 1) {
      if ((uVar4 & 0xffff0000) != 0x99660000) {
        sub_08046300();
        iVar5 = 0x82;
        goto code_r0x08046378;
      }
      *(undefined1 *)(DAT_03005294 + 2) = 0;
      *(uint *)piVar3[10] = uVar4;
      piVar3 = DAT_03005294;
      bVar6 = (char)DAT_03005294[2] + 1;
      *(byte *)(DAT_03005294 + 2) = bVar6;
      *(char *)((int)piVar3 + 9) = (char)uVar4;
      *(char *)((int)piVar3 + 7) = (char)((uVar4 & 0xff00) >> 8);
      if ((uVar4 & 0xff00) >> 8 < (uint)bVar6) {
        *piVar3 = 3;
      }
      else {
        *piVar3 = 2;
        DAT_04000120 = 0x80000000;
      }
    }
    else if (*DAT_03005294 == 2) {
      *(uint *)(DAT_03005294[10] + (uint)*(byte *)(DAT_03005294 + 2) * 4) = uVar4;
      piVar3 = DAT_03005294;
      bVar6 = (char)DAT_03005294[2] + 1;
      *(byte *)(DAT_03005294 + 2) = bVar6;
      if (*(byte *)((int)piVar3 + 7) < bVar6) {
        *piVar3 = 3;
      }
      else {
        DAT_04000120 = 0x80000000;
      }
    }
    iVar5 = sub_08046338(1);
    if (iVar5 != 1) {
      DAT_04000128 = 0x500b;
      iVar5 = sub_08046338(0);
      if (iVar5 != 1) {
        sub_08046300();
        piVar3 = DAT_03005294;
        if (*DAT_03005294 == 3) {
          cVar1 = *(char *)((int)DAT_03005294 + 9);
          if ((((cVar1 == -0x59) || (cVar1 == -0x5b)) || (cVar1 == -0x4b)) || (cVar1 == -0x49)) {
            *(undefined1 *)(DAT_03005294 + 5) = 0;
            DAT_04000120 = 0x80000000;
            DAT_04000128 = 0x5002;
            DAT_04000128 = 0x5082;
            *piVar3 = 5;
          }
          else if (cVar1 == -0x12) {
            DAT_04000128 = 0x5003;
            *DAT_03005294 = 4;
            *(undefined2 *)((int)piVar3 + 0x12) = 3;
          }
          else {
            DAT_04000128 = 0x5003;
            *DAT_03005294 = 4;
          }
          *(undefined1 *)(piVar3 + 0xb) = 0;
          if ((code *)piVar3[6] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x080467e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)piVar3[6])
                      (*(undefined1 *)((int)piVar3 + 6),*(undefined2 *)((int)piVar3 + 0x12));
            return;
          }
        }
        else {
          DAT_04000128 = 0x5003;
          DAT_04000128 = 0x5083;
        }
      }
    }
    return;
  }
  *(undefined1 *)(DAT_03005294 + 4) = 0;
  sub_08046378(100);
  iVar5 = sub_08046338(0);
  if (iVar5 != 1) {
    DAT_04000128 = 0x500a;
    uVar4 = DAT_04000120;
    if (*DAT_03005294 == 5) {
      *(uint *)DAT_03005294[10] = uVar4;
      piVar3 = DAT_03005294;
      *(undefined1 *)((int)DAT_03005294 + 5) = 1;
      if (uVar4 >> 0x10 != 0x9966) {
        sub_08046300();
        iVar5 = 100;
        goto code_r0x08046378;
      }
      *(char *)(piVar3 + 1) = (char)((uVar4 & 0xff00) >> 8);
      uVar8 = uVar4 & 0xff;
      *(char *)((int)piVar3 + 6) = (char)uVar4;
      if ((uVar4 & 0xff00) == 0) {
        if (((uVar8 == 0x27) || (uVar8 == 0x28)) || ((uVar8 == 0x29 || (uVar8 == 0x36)))) {
          *(char *)((int)piVar3 + 9) = (char)(uVar8 + 0x80);
          *(uint *)piVar3[9] = (uVar8 + 0x80 & 0xff) + 0x99660000;
          *(undefined1 *)((int)DAT_03005294 + 7) = 0;
        }
        else {
          *(undefined4 *)piVar3[9] = 0x996601ee;
          piVar3 = DAT_03005294;
          if (*(byte *)((int)DAT_03005294 + 6) - 0x10 < 0x2e) {
            *(undefined4 *)(DAT_03005294[9] + 4) = 1;
          }
          else {
            *(undefined4 *)(DAT_03005294[9] + 4) = 2;
          }
          *(undefined1 *)((int)piVar3 + 7) = 1;
          *(undefined2 *)((int)piVar3 + 0x12) = 3;
        }
        piVar3 = DAT_03005294;
        DAT_04000120 = *(undefined4 *)DAT_03005294[9];
        *(undefined1 *)(DAT_03005294 + 2) = 1;
        *piVar3 = 7;
      }
      else {
        DAT_04000120 = 0x80000000;
        *(undefined1 *)((int)piVar3 + 5) = 1;
        *piVar3 = 6;
      }
    }
    else if (*DAT_03005294 == 6) {
      *(uint *)(DAT_03005294[10] + (uint)*(byte *)((int)DAT_03005294 + 5) * 4) = uVar4;
      piVar3 = DAT_03005294;
      bVar6 = *(char *)((int)DAT_03005294 + 5) + 1;
      *(byte *)((int)DAT_03005294 + 5) = bVar6;
      if (*(byte *)(piVar3 + 1) < bVar6) {
        cVar1 = *(char *)((int)piVar3 + 6);
        if (((cVar1 == '(') || (cVar1 == ')')) || (cVar1 == '6')) {
          *(byte *)((int)piVar3 + 9) = cVar1 + 0x80U;
          *(uint *)piVar3[9] = (byte)(cVar1 + 0x80U) + 0x99660000;
          *(undefined1 *)((int)DAT_03005294 + 7) = 0;
        }
        else {
          *(undefined4 *)piVar3[9] = 0x996601ee;
          piVar3 = DAT_03005294;
          if (*(byte *)((int)DAT_03005294 + 6) - 0x10 < 0x2e) {
            *(undefined4 *)(DAT_03005294[9] + 4) = 1;
          }
          else {
            *(undefined4 *)(DAT_03005294[9] + 4) = 2;
          }
          *(undefined1 *)((int)piVar3 + 7) = 1;
          *(undefined2 *)((int)piVar3 + 0x12) = 3;
        }
        piVar3 = DAT_03005294;
        DAT_04000120 = *(undefined4 *)DAT_03005294[9];
        *(undefined1 *)(DAT_03005294 + 2) = 1;
        *piVar3 = 7;
      }
      else {
        DAT_04000120 = 0x80000000;
      }
    }
    else if (*DAT_03005294 == 7) {
      if (uVar4 != 0x80000000) {
        sub_08046300();
        iVar5 = 100;
        goto code_r0x08046378;
      }
      if ((uint)*(byte *)((int)DAT_03005294 + 7) < (uint)*(byte *)(DAT_03005294 + 2)) {
        *DAT_03005294 = 8;
      }
      else {
        DAT_04000120 = *(undefined4 *)(DAT_03005294[9] + (uint)*(byte *)(DAT_03005294 + 2) * 4);
        *(char *)(DAT_03005294 + 2) = (char)DAT_03005294[2] + '\x01';
      }
    }
    iVar5 = sub_08046338(1);
    if (iVar5 != 1) {
      if (*DAT_03005294 == 8) {
        DAT_04000128 = 0x5002;
        sub_08046300();
        piVar3 = DAT_03005294;
        if (*(short *)((int)DAT_03005294 + 0x12) == 3) {
          sub_080462B0();
          UNRECOVERED_JUMPTABLE = (code *)DAT_03005294[7];
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
            uVar4 = 0x1ee;
_080462AC:
                    /* WARNING: Could not recover jumptable at 0x080462ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(uVar4);
            return;
          }
        }
        else {
          DAT_04000120 = 0;
          DAT_04000128 = 0;
          DAT_04000128 = 0x5003;
          *(undefined1 *)(DAT_03005294 + 5) = 1;
          *piVar3 = 0;
          UNRECOVERED_JUMPTABLE = (code *)piVar3[7];
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
            uVar4 = (uint)*(byte *)((int)piVar3 + 6) | ((uint)*(byte *)(piVar3 + 1) << 0x18) >> 0x10
            ;
            goto _080462AC;
          }
        }
      }
      else {
        REG_IME = 0;
        uVar2 = DAT_04000102;
        if ((uVar2 & 0x80) != 0) {
          uVar2 = DAT_04000102;
          if ((uVar2 & 3) == 0) {
            do {
              uVar2 = REG_TM0CNT;
              uVar4 = (uint)uVar2;
              bVar9 = uVar4 == 0xff00;
              if (0xfeff < uVar4) {
                bVar9 = uVar4 - 0xff00 == 0x9b;
              }
            } while ((0xfeff < uVar4 && 0x9a < uVar4 - 0xff00) && !bVar9);
          }
          else {
            do {
              uVar2 = REG_TM0CNT;
              uVar4 = (uint)uVar2;
              bVar9 = uVar4 == 0xff00;
              if (0xfeff < uVar4) {
                bVar9 = uVar4 - 0xff00 == 0xfe;
              }
            } while ((0xfeff < uVar4 && 0xfd < uVar4 - 0xff00) && !bVar9);
          }
        }
        DAT_04000128 = 0x5002;
        DAT_04000128 = 0x5082;
        REG_IME = 1;
      }
    }
  }
  return;
}


/* __call_via_r0 @ 0x08046AA0 */

void __call_via_r0(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x08046aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r1 @ 0x08046AA2 */

void __call_via_r1(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x08046aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r2 @ 0x08046AA4 */

void __call_via_r2(undefined4 param_1,undefined4 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x08046aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r3 @ 0x08046AA6 */

void __call_via_r3(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08046aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r4 @ 0x08046AA8 */

void __call_via_r4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08046aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r5 @ 0x08046AAA */

void __call_via_r5(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08046aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r6 @ 0x08046AAC */

void __call_via_r6(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08046aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r7 @ 0x08046AAE */

void __call_via_r7(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08046aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08046AB0 @ 0x08046AB0 */

void sub_08046AB0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  sub_08046AB6();
  sub_08046AC0();
                    /* WARNING: Could not recover jumptable at 0x08046abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08046AB6 @ 0x08046AB6 */

void sub_08046AB6(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  sub_08046AC0();
                    /* WARNING: Could not recover jumptable at 0x08046abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08046AC0 @ 0x08046AC0 */

void sub_08046AC0(void)

{
  code *pcVar1;
  
  pcVar1 = sub_08049114;
  do {
    pcVar1 = pcVar1 + -4;
    __call_via_r0(pcVar1 + *(int *)pcVar1);
  } while (pcVar1 != (code *)&UNK_080490f8);
  return;
}


/* sub_08046AEC @ 0x08046AEC */

void sub_08046AEC(void)

{
  int *piVar1;
  
  piVar1 = &DAT_08048ed8;
  do {
    __call_via_r0(*piVar1 + (int)piVar1);
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&UNK_080490f8);
  return;
}


/* sub_08046B18 @ 0x08046B18 */

undefined8 sub_08046B18(uint param_1,int param_2,uint param_3)

{
  return CONCAT44(param_2 + (uint)CARRY4(param_1,param_3),param_1 + param_3);
}


/* sub_08046B1C @ 0x08046B1C */

undefined8 sub_08046B1C(uint param_1,int param_2,uint param_3)

{
  return CONCAT44(param_2 + (uint)CARRY4(param_1,param_3),param_1 + param_3);
}


/* sub_08046B28 @ 0x08046B28 */

void sub_08046B28(void)

{
  return;
}


/* sub_08046B2C @ 0x08046B2C */

void sub_08046B2C(void)

{
  return;
}


/* sub_08046B38 @ 0x08046B38 */

undefined8 sub_08046B38(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* sub_08046B3C @ 0x08046B3C */

undefined8 sub_08046B3C(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* sub_08046B58 @ 0x08046B58 */

undefined8 sub_08046B58(uint param_1,int param_2,uint param_3)

{
  return CONCAT44(((int)param_3 >> 0x20) * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* sub_08046B5C @ 0x08046B5C */

undefined8 sub_08046B5C(uint param_1,int param_2,uint param_3)

{
  return CONCAT44(((int)param_3 >> 0x20) * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* sub_08046B64 @ 0x08046B64 */

undefined8 sub_08046B64(uint param_1,int param_2,uint param_3)

{
  return CONCAT44(param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* sub_08046B68 @ 0x08046B68 */

undefined8 sub_08046B68(uint param_1,int param_2,uint param_3)

{
  return CONCAT44(param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* sub_08046B70 @ 0x08046B70 */

undefined8 sub_08046B70(uint param_1,uint param_2)

{
  return CONCAT44(((int)param_2 >> 0x1f) * param_1 +
                  param_2 * ((int)param_1 >> 0x1f) +
                  (int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_2));
}


/* sub_08046B74 @ 0x08046B74 */

undefined8 sub_08046B74(uint param_1,uint param_2)

{
  return CONCAT44(((int)param_2 >> 0x1f) * param_1 +
                  param_2 * ((int)param_1 >> 0x1f) +
                  (int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_2));
}


/* sub_08046B84 @ 0x08046B84 */

undefined8 sub_08046B84(int param_1,int param_2)

{
  return CONCAT44(-(param_2 + (uint)(param_1 != 0)),-param_1);
}


/* sub_08046B88 @ 0x08046B88 */

undefined8 sub_08046B88(int param_1,int param_2)

{
  return CONCAT44(-(param_2 + (uint)(param_1 != 0)),-param_1);
}


/* sub_08046B94 @ 0x08046B94 */

undefined8 sub_08046B94(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 - (param_2 + (uint)(param_3 < param_1)),param_3 - param_1);
}


/* sub_08046B98 @ 0x08046B98 */

undefined8 sub_08046B98(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 - (param_2 + (uint)(param_3 < param_1)),param_3 - param_1);
}


/* sub_08046BA4 @ 0x08046BA4 */

int sub_08046BA4(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = param_2 >> 1;
  uVar1 = param_4 >> 1;
  if ((int)uVar2 < 0) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (uint)bVar4);
  }
  if ((int)param_4 < 0) {
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar4);
  }
  iVar3 = sub_080476AC(param_1,param_2,param_3,param_4);
  if (((uVar2 ^ uVar1) & 0x40000000) != 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


/* sub_08046BA8 @ 0x08046BA8 */

int sub_08046BA8(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = param_2 >> 1;
  uVar1 = param_4 >> 1;
  if ((int)uVar2 < 0) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (uint)bVar4);
  }
  if ((int)param_4 < 0) {
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar4);
  }
  iVar3 = sub_080476AC(param_1,param_2,param_3,param_4);
  if (((uVar2 ^ uVar1) & 0x40000000) != 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


/* sub_08046BFC @ 0x08046BFC */

longlong sub_08046BFC(uint param_1,int param_2,uint param_3)

{
  if (-1 < (int)(param_3 - 0x20)) {
    return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
  }
  return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                  param_1 << (param_3 & 0xff));
}


/* sub_08046C00 @ 0x08046C00 */

longlong sub_08046C00(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                    param_1 << (param_3 & 0xff));
  }
  return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
}


/* sub_08046C28 @ 0x08046C28 */

undefined8 sub_08046C28(uint param_1,int param_2,uint param_3)

{
  if (-1 < (int)(param_3 - 0x20)) {
    return CONCAT44(param_2 >> 0x1f,param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}


/* sub_08046C2C @ 0x08046C2C */

undefined8 sub_08046C2C(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return CONCAT44(param_2 >> 0x1f,param_2 >> (param_3 - 0x20 & 0xff));
}


/* sub_08046C54 @ 0x08046C54 */

int sub_08046C54(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  if ((3 < param_3) && ((((uint)param_1 | (uint)param_2) & 3) == 0)) {
    do {
      pbVar3 = param_2;
      pbVar1 = param_1;
      param_1 = pbVar1 + 4;
      param_2 = pbVar3 + 4;
      if (*(int *)pbVar1 != *(int *)pbVar3) break;
      param_3 = param_3 - 4;
    } while (3 < param_3);
    if (*(int *)pbVar1 != *(int *)pbVar3) {
      param_1 = pbVar1;
      param_2 = pbVar3;
    }
  }
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    if (-1 < (int)(param_3 << 0x1f)) goto _08046C8A;
    param_3 = param_3 + 1;
    do {
      uVar4 = (uint)*param_1;
      uVar5 = (uint)*param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if ((uVar4 != uVar5) || (param_3 = param_3 - 2, param_3 == 0)) break;
_08046C8A:
      uVar4 = (uint)*param_1;
      uVar5 = (uint)*param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (uVar4 == uVar5);
    iVar2 = uVar4 - uVar5;
  }
  return iVar2;
}


/* sub_08046CAA @ 0x08046CAA */

void sub_08046CAA(void)

{
  sub_08047A08(0xc);
  return;
}


/* sub_08046CAC @ 0x08046CAC */

void sub_08046CAC(void)

{
  sub_08047A08(0xc);
  return;
}


/* sub_08046CBA @ 0x08046CBA */

undefined4 * sub_08046CBA(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  bVar5 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar5) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar5 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar5);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  if ((int)uVar1 < 0) {
    puVar2 = (undefined1 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    *puVar2 = 0;
  }
  puVar4 = puVar3;
  if ((uVar1 & 0x40000000) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = 0;
  }
  return puVar4;
}


/* sub_08046CBC @ 0x08046CBC */

undefined4 * sub_08046CBC(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  bVar5 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar5) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar5 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar5);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  if ((int)uVar1 < 0) {
    puVar2 = (undefined1 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    *puVar2 = 0;
  }
  puVar4 = puVar3;
  if ((uVar1 & 0x40000000) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = 0;
  }
  return puVar4;
}


/* sub_08046CC0 @ 0x08046CC0 */

undefined4 * sub_08046CC0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  bVar5 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar5) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar5 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar5);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      puVar2 = (undefined1 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      *puVar2 = 0;
    }
    puVar4 = puVar3;
    if ((uVar1 & 0x40000000) != 0) {
      puVar4 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
    }
    return puVar4;
  }
  return puVar3;
}


/* sub_08046D18 @ 0x08046D18 */

undefined8 sub_08046D18(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint in_r12;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  if (3 < param_3) {
    uVar6 = (uint)param_1 & 3;
    in_r12 = uVar6;
    if (uVar6 != 0) {
      bVar4 = (byte)*param_2;
      puVar2 = (uint *)((int)param_2 + 1);
      if (uVar6 < 3) {
        puVar2 = (uint *)((int)param_2 + 2);
        in_r12 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar4;
      param_2 = puVar2;
      if (uVar6 < 2) {
        param_2 = (uint *)((int)puVar2 + 1);
        bVar4 = (byte)*puVar2;
      }
      param_3 = (param_3 + uVar6) - 4;
      puVar2 = (uint *)((int)param_1 + 1);
      if (uVar6 < 3) {
        puVar2 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)in_r12;
      }
      param_1 = puVar2;
      if (uVar6 < 2) {
        param_1 = (uint *)((int)puVar2 + 1);
        *(byte *)puVar2 = bVar4;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      bVar9 = 0x1f < param_3;
      param_3 = param_3 - 0x20;
      if (bVar9) {
        do {
          if (bVar9) {
            uVar6 = param_2[1];
            uVar7 = param_2[2];
            uVar8 = param_2[3];
            *param_1 = *param_2;
            param_1[1] = uVar6;
            param_1[2] = uVar7;
            param_1[3] = uVar8;
            param_4 = param_2[4];
            uVar6 = param_2[5];
            uVar7 = param_2[6];
            uVar8 = param_2[7];
            param_2 = param_2 + 8;
            param_1[4] = param_4;
            param_1[5] = uVar6;
            param_1[6] = uVar7;
            param_1[7] = uVar8;
            param_1 = param_1 + 8;
            bVar9 = 0x1f < param_3;
            param_3 = param_3 - 0x20;
          }
        } while (bVar9);
      }
      puVar2 = param_1;
      if ((bool)((byte)(param_3 >> 4) & 1)) {
        param_4 = *param_2;
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        uVar8 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = param_4;
        param_1[1] = uVar6;
        param_1[2] = uVar7;
        param_1[3] = uVar8;
        puVar2 = param_1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        param_4 = *param_2;
        uVar6 = param_2[1];
        param_2 = param_2 + 2;
        *puVar2 = param_4;
        puVar2[1] = uVar6;
        puVar2 = puVar2 + 2;
      }
      in_r12 = param_3 << 0x1e;
      param_1 = puVar2;
      if ((bool)((byte)(param_3 >> 2) & 1)) {
        param_4 = *param_2;
        param_1 = puVar2 + 1;
        *puVar2 = param_4;
        param_2 = param_2 + 1;
      }
      if (in_r12 == 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    else {
      bVar9 = 3 < param_3;
      param_3 = param_3 - 4;
      if (bVar9) {
        param_2 = (uint *)((int)param_2 - param_4);
        in_r12 = *param_2;
        puVar2 = param_1;
        if (param_4 == 2) {
          do {
            puVar1 = param_2;
            param_4 = in_r12 >> 0x10;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar9 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = param_4 | in_r12 << 0x10;
            param_1 = puVar2 + 1;
            *puVar2 = param_4;
            puVar2 = param_1;
          } while (bVar9);
          param_2 = (uint *)((int)puVar1 + 6);
        }
        else if (param_4 < 3) {
          do {
            puVar1 = param_2;
            param_4 = in_r12 >> 8;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar9 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = param_4 | in_r12 << 0x18;
            param_1 = puVar2 + 1;
            *puVar2 = param_4;
            puVar2 = param_1;
          } while (bVar9);
          param_2 = (uint *)((int)puVar1 + 5);
        }
        else {
          do {
            puVar1 = param_2;
            param_4 = in_r12 >> 0x18;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar9 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = param_4 | in_r12 << 8;
            param_1 = puVar2 + 1;
            *puVar2 = param_4;
            puVar2 = param_1;
          } while (bVar9);
          param_2 = (uint *)((int)puVar1 + 7);
        }
      }
    }
  }
  bVar5 = (byte)in_r12;
  bVar4 = (byte)param_4;
  bVar10 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar9 = (int)param_3 < 0;
  puVar2 = param_2;
  if (bVar9) {
    puVar2 = (uint *)((int)param_2 + 1);
    param_3 = (uint)(byte)*param_2;
  }
  if (bVar10) {
    pbVar3 = (byte *)((int)puVar2 + 1);
    bVar4 = (byte)*puVar2;
    puVar2 = (uint *)((int)puVar2 + 2);
    bVar5 = *pbVar3;
  }
  puVar1 = param_1;
  if (bVar9) {
    puVar1 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  if (bVar10) {
    pbVar3 = (byte *)((int)puVar1 + 1);
    *(byte *)puVar1 = bVar4;
    puVar1 = (uint *)((int)puVar1 + 2);
    *pbVar3 = bVar5;
  }
  return CONCAT44(puVar2,puVar1);
}


/* sub_08046D1C @ 0x08046D1C */

undefined8 sub_08046D1C(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint in_r12;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  if (3 < param_3) {
    uVar6 = (uint)param_1 & 3;
    in_r12 = uVar6;
    if (uVar6 != 0) {
      bVar4 = (byte)*param_2;
      puVar2 = (uint *)((int)param_2 + 1);
      if (uVar6 < 3) {
        puVar2 = (uint *)((int)param_2 + 2);
        in_r12 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar4;
      param_2 = puVar2;
      if (uVar6 < 2) {
        param_2 = (uint *)((int)puVar2 + 1);
        bVar4 = (byte)*puVar2;
      }
      param_3 = (param_3 + uVar6) - 4;
      puVar2 = (uint *)((int)param_1 + 1);
      if (uVar6 < 3) {
        puVar2 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)in_r12;
      }
      param_1 = puVar2;
      if (uVar6 < 2) {
        param_1 = (uint *)((int)puVar2 + 1);
        *(byte *)puVar2 = bVar4;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      bVar9 = 0x1f < param_3;
      param_3 = param_3 - 0x20;
      if (bVar9) {
        do {
          if (bVar9) {
            uVar6 = param_2[1];
            uVar7 = param_2[2];
            uVar8 = param_2[3];
            *param_1 = *param_2;
            param_1[1] = uVar6;
            param_1[2] = uVar7;
            param_1[3] = uVar8;
            param_4 = param_2[4];
            uVar6 = param_2[5];
            uVar7 = param_2[6];
            uVar8 = param_2[7];
            param_2 = param_2 + 8;
            param_1[4] = param_4;
            param_1[5] = uVar6;
            param_1[6] = uVar7;
            param_1[7] = uVar8;
            param_1 = param_1 + 8;
            bVar9 = 0x1f < param_3;
            param_3 = param_3 - 0x20;
          }
        } while (bVar9);
      }
      puVar2 = param_1;
      if ((bool)((byte)(param_3 >> 4) & 1)) {
        param_4 = *param_2;
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        uVar8 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = param_4;
        param_1[1] = uVar6;
        param_1[2] = uVar7;
        param_1[3] = uVar8;
        puVar2 = param_1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        param_4 = *param_2;
        uVar6 = param_2[1];
        param_2 = param_2 + 2;
        *puVar2 = param_4;
        puVar2[1] = uVar6;
        puVar2 = puVar2 + 2;
      }
      in_r12 = param_3 << 0x1e;
      param_1 = puVar2;
      if ((bool)((byte)(param_3 >> 2) & 1)) {
        param_4 = *param_2;
        param_1 = puVar2 + 1;
        *puVar2 = param_4;
        param_2 = param_2 + 1;
      }
      if (in_r12 == 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    else {
      bVar9 = 3 < param_3;
      param_3 = param_3 - 4;
      if (bVar9) {
        param_2 = (uint *)((int)param_2 - param_4);
        in_r12 = *param_2;
        puVar2 = param_1;
        if (param_4 == 2) {
          do {
            puVar1 = param_2;
            param_4 = in_r12 >> 0x10;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar9 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = param_4 | in_r12 << 0x10;
            param_1 = puVar2 + 1;
            *puVar2 = param_4;
            puVar2 = param_1;
          } while (bVar9);
          param_2 = (uint *)((int)puVar1 + 6);
        }
        else if (param_4 < 3) {
          do {
            puVar1 = param_2;
            param_4 = in_r12 >> 8;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar9 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = param_4 | in_r12 << 0x18;
            param_1 = puVar2 + 1;
            *puVar2 = param_4;
            puVar2 = param_1;
          } while (bVar9);
          param_2 = (uint *)((int)puVar1 + 5);
        }
        else {
          do {
            puVar1 = param_2;
            param_4 = in_r12 >> 0x18;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar9 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = param_4 | in_r12 << 8;
            param_1 = puVar2 + 1;
            *puVar2 = param_4;
            puVar2 = param_1;
          } while (bVar9);
          param_2 = (uint *)((int)puVar1 + 7);
        }
      }
    }
  }
  bVar5 = (byte)in_r12;
  bVar4 = (byte)param_4;
  bVar10 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar9 = (int)param_3 < 0;
  puVar2 = param_2;
  if (bVar9) {
    puVar2 = (uint *)((int)param_2 + 1);
    param_3 = (uint)(byte)*param_2;
  }
  if (bVar10) {
    pbVar3 = (byte *)((int)puVar2 + 1);
    bVar4 = (byte)*puVar2;
    puVar2 = (uint *)((int)puVar2 + 2);
    bVar5 = *pbVar3;
  }
  puVar1 = param_1;
  if (bVar9) {
    puVar1 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  if (bVar10) {
    pbVar3 = (byte *)((int)puVar1 + 1);
    *(byte *)puVar1 = bVar4;
    puVar1 = (uint *)((int)puVar1 + 2);
    *pbVar3 = bVar5;
  }
  return CONCAT44(puVar2,puVar1);
}


/* sub_08046DD0 @ 0x08046DD0 */

undefined8 sub_08046DD0(byte *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  bVar9 = 0x1f < param_3;
  param_3 = param_3 - 0x20;
  if (bVar9) {
    do {
      if (bVar9) {
        uVar5 = *(undefined4 *)(param_2 + 4);
        uVar6 = *(undefined4 *)(param_2 + 8);
        uVar8 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 4) = uVar5;
        *(undefined4 *)(param_1 + 8) = uVar6;
        *(undefined4 *)(param_1 + 0xc) = uVar8;
        param_4 = *(undefined4 *)(param_2 + 0x10);
        uVar5 = *(undefined4 *)(param_2 + 0x14);
        uVar6 = *(undefined4 *)(param_2 + 0x18);
        uVar8 = *(undefined4 *)(param_2 + 0x1c);
        param_2 = param_2 + 0x20;
        *(undefined4 *)(param_1 + 0x10) = param_4;
        *(undefined4 *)(param_1 + 0x14) = uVar5;
        *(undefined4 *)(param_1 + 0x18) = uVar6;
        *(undefined4 *)(param_1 + 0x1c) = uVar8;
        param_1 = param_1 + 0x20;
        bVar9 = 0x1f < param_3;
        param_3 = param_3 - 0x20;
      }
    } while (bVar9);
  }
  if ((bool)((byte)(param_3 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)(param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    param_1 = param_1 + 0x10;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar5 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)(param_1 + 4) = uVar5;
    param_1 = param_1 + 8;
  }
  uVar7 = param_3 << 0x1e;
  pbVar2 = param_1;
  pbVar3 = param_2;
  if ((bool)((byte)(param_3 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    pbVar2 = param_1 + 4;
    *(undefined4 *)param_1 = param_4;
  }
  bVar1 = (byte)param_4;
  if (uVar7 == 0) {
    return CONCAT44(pbVar3,pbVar2);
  }
  bVar10 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar9 = (int)param_3 < 0;
  pbVar4 = pbVar3;
  if (bVar9) {
    pbVar4 = pbVar3 + 1;
    param_3 = (uint)*pbVar3;
  }
  if (bVar10) {
    pbVar3 = pbVar4 + 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 2;
    uVar7 = (uint)*pbVar3;
  }
  pbVar3 = pbVar2;
  if (bVar9) {
    pbVar3 = pbVar2 + 1;
    *pbVar2 = (byte)param_3;
  }
  if (bVar10) {
    pbVar2 = pbVar3 + 1;
    *pbVar3 = bVar1;
    pbVar3 = pbVar3 + 2;
    *pbVar2 = (byte)uVar7;
  }
  return CONCAT44(pbVar4,pbVar3);
}


/* sub_08046DD4 @ 0x08046DD4 */

undefined8 sub_08046DD4(byte *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  bVar9 = 0x1f < param_3;
  param_3 = param_3 - 0x20;
  if (bVar9) {
    do {
      if (bVar9) {
        uVar5 = *(undefined4 *)(param_2 + 4);
        uVar6 = *(undefined4 *)(param_2 + 8);
        uVar8 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 4) = uVar5;
        *(undefined4 *)(param_1 + 8) = uVar6;
        *(undefined4 *)(param_1 + 0xc) = uVar8;
        param_4 = *(undefined4 *)(param_2 + 0x10);
        uVar5 = *(undefined4 *)(param_2 + 0x14);
        uVar6 = *(undefined4 *)(param_2 + 0x18);
        uVar8 = *(undefined4 *)(param_2 + 0x1c);
        param_2 = param_2 + 0x20;
        *(undefined4 *)(param_1 + 0x10) = param_4;
        *(undefined4 *)(param_1 + 0x14) = uVar5;
        *(undefined4 *)(param_1 + 0x18) = uVar6;
        *(undefined4 *)(param_1 + 0x1c) = uVar8;
        param_1 = param_1 + 0x20;
        bVar9 = 0x1f < param_3;
        param_3 = param_3 - 0x20;
      }
    } while (bVar9);
  }
  if ((bool)((byte)(param_3 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)(param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    param_1 = param_1 + 0x10;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar5 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)(param_1 + 4) = uVar5;
    param_1 = param_1 + 8;
  }
  uVar7 = param_3 << 0x1e;
  pbVar2 = param_1;
  pbVar3 = param_2;
  if ((bool)((byte)(param_3 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    pbVar2 = param_1 + 4;
    *(undefined4 *)param_1 = param_4;
  }
  bVar1 = (byte)param_4;
  if (uVar7 != 0) {
    bVar10 = (bool)((byte)(param_3 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar9 = (int)param_3 < 0;
    pbVar4 = pbVar3;
    if (bVar9) {
      pbVar4 = pbVar3 + 1;
      param_3 = (uint)*pbVar3;
    }
    if (bVar10) {
      pbVar3 = pbVar4 + 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 2;
      uVar7 = (uint)*pbVar3;
    }
    pbVar3 = pbVar2;
    if (bVar9) {
      pbVar3 = pbVar2 + 1;
      *pbVar2 = (byte)param_3;
    }
    if (bVar10) {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = bVar1;
      pbVar3 = pbVar3 + 2;
      *pbVar2 = (byte)uVar7;
    }
    return CONCAT44(pbVar4,pbVar3);
  }
  return CONCAT44(pbVar3,pbVar2);
}


/* sub_08046E40 @ 0x08046E40 */

undefined4 * sub_08046E40(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar6 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
  if (param_3 < 4) {
    if ((bool)((byte)(param_3 >> 1) & 1)) {
      puVar3 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar3 = param_2;
    }
    puVar5 = param_1;
    if ((int)(param_3 << 0x1f) < 0) {
      puVar5 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
    }
    return puVar5;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar2 = -((uint)param_1 & 3);
    iVar7 = iVar2 + 4;
    *(undefined1 *)param_1 = param_2;
    puVar5 = (undefined4 *)((int)param_1 + 1U);
    if (1 < iVar7) {
      puVar5 = (undefined4 *)((int)param_1 + 2);
      *(undefined1 *)((int)param_1 + 1U) = param_2;
    }
    param_1 = puVar5;
    if (iVar7 != 2 && iVar2 + 2 < 0 == SBORROW4(iVar7,2)) {
      param_1 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = param_2;
    }
    param_3 = param_3 - iVar7;
  }
  bVar8 = 0x1f < param_3;
  param_3 = param_3 - 0x20;
  do {
    if (bVar8) {
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      param_1[3] = uVar6;
      param_1[4] = uVar6;
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < param_3;
      param_3 = param_3 - 0x20;
    }
  } while (bVar8);
  if ((bool)((byte)(param_3 >> 4) & 1)) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6;
    param_1[3] = uVar6;
    param_1 = param_1 + 4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  uVar1 = param_3 << 0x1e;
  puVar5 = param_1;
  if ((bool)((byte)((param_3 << 0x1c) >> 0x1e) & 1)) {
    puVar5 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar1 == 0) {
    return puVar5;
  }
  if ((int)uVar1 < 0) {
    puVar3 = (undefined1 *)((int)puVar5 + 1);
    *(undefined1 *)puVar5 = param_2;
    puVar5 = (undefined4 *)((int)puVar5 + 2);
    *puVar3 = param_2;
  }
  puVar4 = puVar5;
  if ((uVar1 & 0x40000000) != 0) {
    puVar4 = (undefined4 *)((int)puVar5 + 1);
    *(undefined1 *)puVar5 = param_2;
  }
  return puVar4;
}


/* sub_08046E44 @ 0x08046E44 */

undefined4 * sub_08046E44(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar6 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
  if (param_3 < 4) {
    if ((bool)((byte)(param_3 >> 1) & 1)) {
      puVar3 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar3 = param_2;
    }
    puVar5 = param_1;
    if ((int)(param_3 << 0x1f) < 0) {
      puVar5 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
    }
    return puVar5;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar2 = -((uint)param_1 & 3);
    iVar7 = iVar2 + 4;
    *(undefined1 *)param_1 = param_2;
    puVar5 = (undefined4 *)((int)param_1 + 1U);
    if (1 < iVar7) {
      puVar5 = (undefined4 *)((int)param_1 + 2);
      *(undefined1 *)((int)param_1 + 1U) = param_2;
    }
    param_1 = puVar5;
    if (iVar7 != 2 && iVar2 + 2 < 0 == SBORROW4(iVar7,2)) {
      param_1 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = param_2;
    }
    param_3 = param_3 - iVar7;
  }
  bVar8 = 0x1f < param_3;
  param_3 = param_3 - 0x20;
  do {
    if (bVar8) {
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      param_1[3] = uVar6;
      param_1[4] = uVar6;
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < param_3;
      param_3 = param_3 - 0x20;
    }
  } while (bVar8);
  if ((bool)((byte)(param_3 >> 4) & 1)) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6;
    param_1[3] = uVar6;
    param_1 = param_1 + 4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  uVar1 = param_3 << 0x1e;
  puVar5 = param_1;
  if ((bool)((byte)((param_3 << 0x1c) >> 0x1e) & 1)) {
    puVar5 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      puVar3 = (undefined1 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = param_2;
      puVar5 = (undefined4 *)((int)puVar5 + 2);
      *puVar3 = param_2;
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x40000000) != 0) {
      puVar4 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = param_2;
    }
    return puVar4;
  }
  return puVar5;
}


/* __16__rt_sdiv @ 0x08046E58 */

ulonglong __16__rt_sdiv(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  
  uVar2 = param_1 & 0x80000000;
  if ((int)uVar2 < 0) {
    param_1 = -param_1;
  }
  uVar3 = uVar2 ^ (int)param_2 >> 0x20;
  if (SUB41(param_2 >> 0x1f,0)) {
    param_2 = -param_2;
  }
  uVar1 = param_1;
  if (param_2 >> 3 < param_1) goto _08046EF8;
  if (param_2 >> 8 < param_1) goto _08046EBC;
  uVar1 = param_1 << 8;
  uVar2 = 0xff000000;
  if (param_2 >> 4 < uVar1) goto _08046EEC;
  if (param_2 >> 8 < uVar1) goto _08046EBC;
  uVar1 = param_1 << 0x10;
  uVar2 = 0xffff0000;
  if (uVar1 <= param_2 >> 8) {
    uVar1 = param_1 << 0x18;
    uVar2 = 0xffffff00;
  }
  if (param_2 >> 4 < uVar1) goto _08046EEC;
  bVar4 = uVar1 == 0;
  if (!bVar4) {
    do {
      if (bVar4) {
        uVar1 = uVar1 >> 8;
      }
_08046EBC:
      bVar4 = uVar1 <= param_2 >> 7;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -0x80;
      }
      bVar5 = uVar1 <= param_2 >> 6;
      if (bVar5) {
        param_2 = param_2 + uVar1 * -0x40;
      }
      bVar6 = uVar1 <= param_2 >> 5;
      if (bVar6) {
        param_2 = param_2 + uVar1 * -0x20;
      }
      bVar7 = uVar1 <= param_2 >> 4;
      if (bVar7) {
        param_2 = param_2 + uVar1 * -0x10;
      }
      uVar2 = (((uVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
_08046EEC:
      bVar4 = uVar1 <= param_2 >> 3;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -8;
      }
      uVar2 = uVar2 * 2 + (uint)bVar4;
_08046EF8:
      bVar4 = uVar1 <= param_2 >> 2;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -4;
      }
      bVar5 = uVar1 <= param_2 >> 1;
      if (bVar5) {
        param_2 = param_2 + uVar1 * -2;
      }
      uVar2 = (uVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5;
      bVar5 = uVar1 <= param_2;
      if (bVar5) {
        param_2 = param_2 - uVar1;
      }
      bVar4 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar5);
      uVar2 = uVar2 * 2 + (uint)bVar5;
    } while (bVar4);
    uVar1 = (int)uVar3 >> 0x1f;
    if ((bool)((byte)(uVar3 >> 0x1e) & 1)) {
      param_2 = -param_2;
    }
    return CONCAT44(param_2,(uVar2 ^ uVar1) - uVar1);
  }
  uVar8 = sub_080491D8(2,2);
  if ((int)uVar8 == 0) {
    return uVar8 & 0xffffffff00000000;
  }
  software_interrupt(0x123456);
  return 0x2002600000018;
}


/* __rt_sdiv @ 0x08046E5C */

ulonglong __rt_sdiv(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  
  uVar2 = param_1 & 0x80000000;
  if ((int)uVar2 < 0) {
    param_1 = -param_1;
  }
  uVar3 = uVar2 ^ (int)param_2 >> 0x20;
  if (SUB41(param_2 >> 0x1f,0)) {
    param_2 = -param_2;
  }
  uVar1 = param_1;
  if (param_2 >> 3 < param_1) goto _08046EF8;
  if (param_2 >> 8 < param_1) goto _08046EBC;
  uVar1 = param_1 << 8;
  uVar2 = 0xff000000;
  if (param_2 >> 4 < uVar1) goto _08046EEC;
  if (param_2 >> 8 < uVar1) goto _08046EBC;
  uVar1 = param_1 << 0x10;
  uVar2 = 0xffff0000;
  if (uVar1 <= param_2 >> 8) {
    uVar1 = param_1 << 0x18;
    uVar2 = 0xffffff00;
  }
  if (param_2 >> 4 < uVar1) goto _08046EEC;
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar8 = sub_080491D8(2,2);
    if ((int)uVar8 != 0) {
      software_interrupt(0x123456);
      return 0x2002600000018;
    }
    return uVar8 & 0xffffffff00000000;
  }
  do {
    if (bVar4) {
      uVar1 = uVar1 >> 8;
    }
_08046EBC:
    bVar4 = uVar1 <= param_2 >> 7;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -0x80;
    }
    bVar5 = uVar1 <= param_2 >> 6;
    if (bVar5) {
      param_2 = param_2 + uVar1 * -0x40;
    }
    bVar6 = uVar1 <= param_2 >> 5;
    if (bVar6) {
      param_2 = param_2 + uVar1 * -0x20;
    }
    bVar7 = uVar1 <= param_2 >> 4;
    if (bVar7) {
      param_2 = param_2 + uVar1 * -0x10;
    }
    uVar2 = (((uVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
_08046EEC:
    bVar4 = uVar1 <= param_2 >> 3;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -8;
    }
    uVar2 = uVar2 * 2 + (uint)bVar4;
_08046EF8:
    bVar4 = uVar1 <= param_2 >> 2;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -4;
    }
    bVar5 = uVar1 <= param_2 >> 1;
    if (bVar5) {
      param_2 = param_2 + uVar1 * -2;
    }
    uVar2 = (uVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5;
    bVar5 = uVar1 <= param_2;
    if (bVar5) {
      param_2 = param_2 - uVar1;
    }
    bVar4 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar5);
    uVar2 = uVar2 * 2 + (uint)bVar5;
  } while (bVar4);
  uVar1 = (int)uVar3 >> 0x1f;
  if ((bool)((byte)(uVar3 >> 0x1e) & 1)) {
    param_2 = -param_2;
  }
  return CONCAT44(param_2,(uVar2 ^ uVar1) - uVar1);
}


/* sub_08046F30 @ 0x08046F30 */

int sub_08046F30(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = 0;
  uVar1 = param_1;
  if (param_2 >> 3 < param_1) goto _08046FC4;
  if (param_2 >> 8 < param_1) goto _08046F88;
  uVar1 = param_1 << 8;
  iVar2 = -0x1000000;
  if (param_2 >> 4 < uVar1) goto _08046FB8;
  if (param_2 >> 8 < uVar1) goto _08046F88;
  uVar1 = param_1 << 0x10;
  iVar2 = -0x10000;
  if (uVar1 <= param_2 >> 8) {
    uVar1 = param_1 << 0x18;
    iVar2 = -0x100;
  }
  if (param_2 >> 4 < uVar1) goto _08046FB8;
  bVar4 = uVar1 == 0;
  if (!bVar4) {
    do {
      if (bVar4) {
        uVar1 = uVar1 >> 8;
      }
_08046F88:
      bVar4 = uVar1 <= param_2 >> 7;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -0x80;
      }
      bVar5 = uVar1 <= param_2 >> 6;
      if (bVar5) {
        param_2 = param_2 + uVar1 * -0x40;
      }
      bVar6 = uVar1 <= param_2 >> 5;
      if (bVar6) {
        param_2 = param_2 + uVar1 * -0x20;
      }
      bVar7 = uVar1 <= param_2 >> 4;
      if (bVar7) {
        param_2 = param_2 + uVar1 * -0x10;
      }
      iVar2 = (((iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
_08046FB8:
      bVar4 = uVar1 <= param_2 >> 3;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar4;
_08046FC4:
      bVar4 = uVar1 <= param_2 >> 2;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -4;
      }
      bVar5 = uVar1 <= param_2 >> 1;
      if (bVar5) {
        param_2 = param_2 + uVar1 * -2;
      }
      uVar3 = (iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5;
      bVar5 = uVar1 <= param_2;
      if (bVar5) {
        param_2 = param_2 - uVar1;
      }
      bVar4 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar5);
      iVar2 = uVar3 * 2 + (uint)bVar5;
    } while (bVar4);
    return iVar2;
  }
  iVar2 = sub_080491D8(2,2);
  if (iVar2 == 0) {
    return 0;
  }
  software_interrupt(0x123456);
  return 0x18;
}


/* sub_08046F34 @ 0x08046F34 */

int sub_08046F34(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = 0;
  uVar1 = param_1;
  if (param_2 >> 3 < param_1) goto _08046FC4;
  if (param_2 >> 8 < param_1) goto _08046F88;
  uVar1 = param_1 << 8;
  iVar2 = -0x1000000;
  if (param_2 >> 4 < uVar1) goto _08046FB8;
  if (param_2 >> 8 < uVar1) goto _08046F88;
  uVar1 = param_1 << 0x10;
  iVar2 = -0x10000;
  if (uVar1 <= param_2 >> 8) {
    uVar1 = param_1 << 0x18;
    iVar2 = -0x100;
  }
  if (param_2 >> 4 < uVar1) goto _08046FB8;
  bVar4 = uVar1 == 0;
  if (bVar4) {
    iVar2 = sub_080491D8(2,2);
    if (iVar2 != 0) {
      software_interrupt(0x123456);
      return 0x18;
    }
    return 0;
  }
  do {
    if (bVar4) {
      uVar1 = uVar1 >> 8;
    }
_08046F88:
    bVar4 = uVar1 <= param_2 >> 7;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -0x80;
    }
    bVar5 = uVar1 <= param_2 >> 6;
    if (bVar5) {
      param_2 = param_2 + uVar1 * -0x40;
    }
    bVar6 = uVar1 <= param_2 >> 5;
    if (bVar6) {
      param_2 = param_2 + uVar1 * -0x20;
    }
    bVar7 = uVar1 <= param_2 >> 4;
    if (bVar7) {
      param_2 = param_2 + uVar1 * -0x10;
    }
    iVar2 = (((iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
_08046FB8:
    bVar4 = uVar1 <= param_2 >> 3;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -8;
    }
    iVar2 = iVar2 * 2 + (uint)bVar4;
_08046FC4:
    bVar4 = uVar1 <= param_2 >> 2;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -4;
    }
    bVar5 = uVar1 <= param_2 >> 1;
    if (bVar5) {
      param_2 = param_2 + uVar1 * -2;
    }
    uVar3 = (iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5;
    bVar5 = uVar1 <= param_2;
    if (bVar5) {
      param_2 = param_2 - uVar1;
    }
    bVar4 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar5);
    iVar2 = uVar3 * 2 + (uint)bVar5;
  } while (bVar4);
  return iVar2;
}


/* sub_08046FF4 @ 0x08046FF4 */

void sub_08046FF4(int param_1,int param_2,int param_3)

{
  if (param_1 != param_2) {
    do {
      __call_via_r7(param_1);
      param_1 = param_1 + param_3;
    } while (param_1 != param_2);
  }
  return;
}


/* sub_08047016 @ 0x08047016 */

void sub_08047016(int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  if (param_2 < param_3) {
    do {
      __call_via_r2(param_1,param_2,param_5);
      param_2 = param_2 + param_4;
      param_1 = param_1 + param_4;
    } while (param_2 < param_3);
  }
  return;
}


/* sub_08047018 @ 0x08047018 */

void sub_08047018(int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  if (param_2 < param_3) {
    do {
      __call_via_r2(param_1,param_2,param_5);
      param_2 = param_2 + param_4;
      param_1 = param_1 + param_4;
    } while (param_2 < param_3);
  }
  return;
}


/* sub_08047040 @ 0x08047040 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_08047040(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  undefined4 unaff_r10;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = CONCAT44(unaff_r10,unaff_r5);
  uVar14 = CONCAT44(param_2,param_1);
  uVar6 = param_2 & 0x7fffffff;
  bVar11 = SCARRY4(uVar6,-0x30000000);
  bVar8 = (int)(uVar6 + 0xd0000000) < 0;
  if (bVar8 == bVar11) {
    bVar11 = SBORROW4(uVar6 + 0xd0000000,0xff00000);
    bVar8 = (int)(uVar6 + 0xc0100000) < 0;
  }
  if (bVar8 == bVar11) {
    if (param_1 == 0 && uVar6 == 0x3ff00000) {
      uVar13 = sub_08054160(param_1,param_2,0x54442d18,0x3ff921fb);
      uVar14 = sub_08054160(param_1,param_2,0x33145c07,0x3c91a626);
    }
    else {
      bVar12 = SCARRY4(uVar6,-0x70000000);
      iVar1 = uVar6 + 0x90000000;
      bVar8 = iVar1 < 0;
      bVar11 = uVar6 == 0x70000000;
      if (bVar8 == bVar12) {
        bVar12 = SBORROW4(iVar1,0xff00000);
        bVar8 = (int)(uVar6 + 0x80100000) < 0;
        bVar11 = iVar1 == 0xff00000;
      }
      uVar13 = CONCAT44(param_2,param_1);
      if ((bVar11 || bVar8 != bVar12) && ((!bVar11 || (uVar13 = uVar14, param_1 == 0)))) {
        sub_080491CC(1);
        return 1;
      }
    }
  }
  else {
    bVar11 = SCARRY4(uVar6,-0x30000000);
    bVar8 = (int)(uVar6 + 0xd0000000) < 0;
    if (bVar8 == bVar11) {
      bVar11 = SBORROW4(uVar6 + 0xd0000000,0xfe00000);
      bVar8 = (int)(uVar6 + 0xc0200000) < 0;
    }
    if (bVar8 == bVar11) {
      uVar14 = sub_08053698(param_1,param_2 & 0x7fffffff,0,_sub_08047420,param_2,param_2,param_3,
                            param_4);
      uVar14 = sub_08054160((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,0x3fe00000);
      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar5 = (undefined4)uVar14;
      uVar14 = sub_08047D9C(&UNK_087b7748,6,uVar5,uVar2);
      uVar14 = sub_08054160((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar5,uVar2);
      uVar13 = sub_08047D9C(&DAT_087b7778,4,uVar5,uVar2);
      uVar13 = sub_08054160((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar5,uVar2);
      uVar13 = sub_080534A8((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,_sub_08047420);
      uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar15 = sub_08047EF8(uVar5,uVar2);
      uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar7 = (undefined4)uVar15;
      if (uVar6 < 0x3fef3333) {
        uVar15 = sub_08054160(0,uVar4,0,uVar4);
        uVar15 = sub_08053698((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar5,uVar2);
        uVar16 = sub_080534A8(uVar7,uVar4,0,uVar4);
        uVar15 = sub_08053A20((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                              (int)((ulonglong)uVar15 >> 0x20));
        uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
        uVar14 = sub_08053A44((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,uVar3);
        uVar13 = sub_08054160(uVar7,uVar4,0,0x40000000);
        uVar14 = sub_08054160((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                              (int)((ulonglong)uVar14 >> 0x20));
        uVar13 = sub_08054160((int)uVar15,uVar5,0,0x40000000);
        uVar13 = sub_08053698((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0x33145c07,0x3c91a626);
        uVar14 = sub_08053698((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                              (int)((ulonglong)uVar14 >> 0x20));
        uVar13 = sub_08054160(0,uVar4,0,0x40000000);
        uVar13 = sub_08053698((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0x54442d18,0x3fe921fb);
        uVar14 = sub_080536E0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                              (int)((ulonglong)uVar13 >> 0x20));
        uVar5 = 0x3fe921fb;
      }
      else {
        uVar14 = sub_08053A44((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,uVar3);
        uVar14 = sub_08054160(uVar7,uVar4,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
        uVar14 = sub_080534A8((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar7,uVar4);
        uVar14 = sub_08054160((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,0x40000000);
        uVar14 = sub_080536E0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x33145c07,0x3c91a626);
        uVar5 = 0x3ff921fb;
      }
      iVar1 = sub_08053698((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x54442d18,uVar5);
      return iVar1;
    }
    uVar10 = 0x3e3fffff < uVar6;
    uVar9 = uVar6 == 0x3e400000;
    if (uVar6 < 0x3e400000) {
      uVar14 = sub_080534A8(param_1,param_2,sub_08047422,uRam08047428);
      sub_08054058((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,_sub_08047420);
      if ((bool)uVar10 && !(bool)uVar9) {
        return param_1;
      }
    }
    else {
      uVar13 = sub_08054160(param_1,param_2,param_1,param_2);
    }
    uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar5 = (undefined4)uVar13;
    uVar14 = sub_08047D9C(&UNK_087b7748,6,uVar5,uVar7);
    uVar14 = sub_08054160((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar5,uVar7);
    uVar13 = sub_08047D9C(&DAT_087b7778,4,uVar5,uVar7);
    uVar13 = sub_08054160((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar5,uVar7);
    uVar13 = sub_080534A8((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,_sub_08047420);
    uVar14 = sub_08053A44((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    uVar14 = sub_08054160(param_1,param_2,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    uVar13 = CONCAT44(param_2,param_1);
  }
  iVar1 = sub_080534A8((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                       (int)((ulonglong)uVar13 >> 0x20));
  return iVar1;
}


/* sub_08047420 @ 0x08047420 */

int sub_08047420(ushort *param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint unaff_r4;
  int unaff_r7;
  bool bVar2;
  
  *(char *)(param_4 + 0x16) = (char)unaff_r4;
  pbVar1 = (byte *)(uint)*param_1;
  bVar2 = unaff_r7 == 0xf0;
  while (!bVar2) {
    param_4 = (uint)*pbVar1;
    unaff_r4 = (uint)*param_2;
    if (param_4 != unaff_r4) break;
    param_4 = (uint)pbVar1[1];
    unaff_r4 = (uint)param_2[1];
    param_2 = param_2 + 2;
    pbVar1 = pbVar1 + 2;
    if (param_4 != unaff_r4) break;
    param_3 = param_3 + -2;
    bVar2 = param_3 == 0;
  }
  return param_4 - unaff_r4;
}


/* sub_08047422 @ 0x08047422 */

int sub_08047422(ushort *param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint unaff_r4;
  int unaff_r7;
  bool bVar2;
  
  *(char *)(param_4 + 0x16) = (char)unaff_r4;
  pbVar1 = (byte *)(uint)*param_1;
  bVar2 = unaff_r7 == 0xf0;
  while (!bVar2) {
    param_4 = (uint)*pbVar1;
    unaff_r4 = (uint)*param_2;
    if (param_4 != unaff_r4) break;
    param_4 = (uint)pbVar1[1];
    unaff_r4 = (uint)param_2[1];
    param_2 = param_2 + 2;
    pbVar1 = pbVar1 + 2;
    if (param_4 != unaff_r4) break;
    param_3 = param_3 + -2;
    bVar2 = param_3 == 0;
  }
  return param_4 - unaff_r4;
}


/* sub_08047450 @ 0x08047450 */

/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047450(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar22 = CONCAT44(param_2,param_1);
  uVar10 = param_4 & 0x7fffffff;
  uVar11 = uVar10 | (param_3 | -param_3) >> 0x1f;
  bVar18 = 0x6fffffff < uVar11;
  uVar14 = uVar11 + 0x90000000;
  if (bVar18) {
    uVar14 = uVar11 + 0x80100000;
  }
  bVar16 = uVar14 == 0;
  bVar19 = 0xfefffff < uVar11 + 0x90000000;
  bVar20 = bVar18 && bVar19;
  if ((!bVar18 || !bVar19) || bVar16) {
    uVar14 = param_1 | -param_1;
  }
  uVar11 = param_2 & 0x7fffffff;
  if ((!bVar18 || !bVar19) || bVar16) {
    uVar14 = uVar11 | uVar14 >> 0x1f;
    bVar20 = 0x7fefffff < uVar14;
    bVar16 = uVar14 == 0x7ff00000;
  }
  if (!bVar20 || bVar16) {
    if (param_4 == 0x3ff00000 && param_3 == 0) {
      uVar14 = param_2 & 0x7fffffff;
      bVar16 = SCARRY4(uVar14,-0x40000000);
      bVar18 = (int)(uVar14 + 0xc0000000) < 0;
      if (bVar18 == bVar16) {
        bVar16 = SBORROW4(uVar14 + 0xc0000000,0x4100000);
        bVar18 = (int)(uVar14 + 0xbbf00000) < 0;
      }
      if (bVar18 == bVar16) {
        bVar20 = SCARRY4(uVar14,-0x70000000);
        iVar15 = uVar14 + 0x90000000;
        bVar18 = iVar15 < 0;
        bVar16 = uVar14 == 0x70000000;
        if (bVar18 == bVar20) {
          bVar20 = SBORROW4(iVar15,0xff00000);
          bVar18 = (int)(uVar14 + 0x80100000) < 0;
          bVar16 = iVar15 == 0xff00000;
        }
        if ((bVar16 || bVar18 != bVar20) && ((!bVar16 || (param_1 == 0)))) {
          puVar6 = (uint *)&UNK_08047d54;
          if ((int)param_2 < 1) {
            puVar6 = (uint *)&UNK_08047d5c;
          }
          return *puVar6;
        }
        uVar14 = sub_080534A8(param_1,param_2,param_1,param_2);
        return uVar14;
      }
      bVar16 = SCARRY4(uVar14,-0x3c000000);
      bVar18 = (int)(uVar14 + 0xc4000000) < 0;
      if (bVar18 == bVar16) {
        bVar16 = SBORROW4(uVar14 + 0xc4000000,0x3dc0000);
        bVar18 = (int)(uVar14 + 0xc0240000) < 0;
      }
      if (bVar18 != bVar16) {
        uVar21 = 0x2fffffff < uVar14;
        bVar16 = SCARRY4(uVar14,-0x30000000);
        uVar10 = uVar14 + 0xd0000000;
        bVar18 = (int)uVar10 < 0;
        uVar17 = uVar14 == 0x30000000;
        if (bVar18 == bVar16) {
          uVar21 = 0xe1fffff < uVar10;
          bVar16 = SBORROW4(uVar10,0xe200000);
          bVar18 = (int)(uVar14 + 0xc1e00000) < 0;
          uVar17 = uVar10 == 0xe200000;
        }
        if (bVar18 != bVar16) {
          uVar23 = sub_080534A8(param_1,param_2,0x8800759c,0x7e37e43c);
          sub_08054058((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0,0x3ff00000);
          if ((bool)uVar21 && !(bool)uVar17) {
            return param_1;
          }
        }
        iVar15 = -1;
        goto _08047C48;
      }
      param_2 = param_2 & 0x7fffffff;
      bVar16 = SCARRY4(uVar14,-0x3f000000);
      bVar18 = (int)(uVar14 + 0xc1000000) < 0;
      if (bVar18 == bVar16) {
        bVar16 = SBORROW4(uVar14 + 0xc1000000,0xf30000);
        bVar18 = (int)(uVar14 + 0xc00d0000) < 0;
      }
      if (bVar18 == bVar16) {
        bVar16 = SCARRY4(uVar14,-0x40000000);
        bVar18 = (int)(uVar14 + 0xc0000000) < 0;
        if (bVar18 == bVar16) {
          bVar16 = SBORROW4(uVar14 + 0xc0000000,0x38000);
          bVar18 = (int)(uVar14 + 0xbffc8000) < 0;
        }
        if (bVar18 != bVar16) {
          iVar15 = 2;
          uVar22 = sub_080536E0(param_1,param_2,0,0x3ff80000);
          uVar23 = sub_08054160(param_1,param_2,0,0x3ff80000);
          param_2 = (uint)((ulonglong)uVar23 >> 0x20);
          param_1 = (uint)uVar23;
          goto _08047C30;
        }
        uVar22 = 0xbff0000000000000;
        iVar15 = 3;
      }
      else {
        bVar16 = SCARRY4(uVar14,-0x3f000000);
        bVar18 = (int)(uVar14 + 0xc1000000) < 0;
        if (bVar18 == bVar16) {
          bVar16 = SBORROW4(uVar14 + 0xc1000000,0xe60000);
          bVar18 = (int)(uVar14 + 0xc01a0000) < 0;
        }
        if (bVar18 == bVar16) {
          iVar15 = 1;
          uVar22 = sub_080536E0(param_1,param_2,0,0x3ff00000);
_08047C30:
          uVar23 = sub_080534A8(param_1,param_2,0,0x3ff00000);
          param_2 = (uint)((ulonglong)uVar23 >> 0x20);
          param_1 = (uint)uVar23;
        }
        else {
          iVar15 = 0;
          uVar22 = sub_08054160(param_1,param_2,0,0x40000000);
          uVar22 = sub_080536E0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,0x3ff00000);
          uVar23 = sub_080534A8(param_1,param_2,0,0x40000000);
          param_2 = (uint)((ulonglong)uVar23 >> 0x20);
          param_1 = (uint)uVar23;
        }
      }
      uVar22 = sub_08053A20(param_1,param_2,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
_08047C48:
      uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar13 = (undefined4)uVar22;
      uVar22 = sub_08054160(uVar13,uVar12,uVar13,uVar12);
      uVar7 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar5 = (undefined4)uVar22;
      uVar22 = sub_08054160(uVar5,uVar7,uVar5,uVar7);
      uVar8 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar1 = (undefined4)uVar22;
      uVar22 = sub_08047D9C(&DAT_087b7800,6,uVar1,uVar8);
      uVar22 = sub_08054160((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uVar5,uVar7);
      uVar5 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar23 = sub_08047D9C(&DAT_087b77d8,5,uVar1,uVar8);
      uVar23 = sub_08054160((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar1,uVar8);
      uVar1 = (undefined4)((ulonglong)uVar23 >> 0x20);
      if (iVar15 < 0) {
        uVar22 = sub_080534A8((int)uVar22,uVar5,(int)uVar23,uVar1);
        uVar22 = sub_08054160((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uVar13,uVar12);
        uVar14 = sub_08053698((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uVar13,uVar12);
      }
      else {
        uVar22 = sub_080534A8((int)uVar22,uVar5,(int)uVar23,uVar1);
        uVar22 = sub_08054160((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uVar13,uVar12);
        uVar22 = sub_080536E0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),
                              *(undefined4 *)(&DAT_087b77b8 + iVar15 * 8),
                              *(undefined4 *)(&DAT_087b77bc + iVar15 * 8));
        uVar22 = sub_080536E0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uVar13,uVar12);
        uVar14 = sub_08053698((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),
                              *(undefined4 *)(&DAT_087b7798 + iVar15 * 8),
                              *(undefined4 *)(&DAT_087b779c + iVar15 * 8));
      }
      return uVar14;
    }
    uVar14 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
    if (uVar11 == 0 && param_1 == 0) {
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) goto _08047544;
      if (uVar14 < 2) {
        return param_1;
      }
      if (uVar14 == 2) {
        return 0x54442d18;
      }
      if (uVar14 == 3) {
        return 0x54442d18;
      }
_0804752C:
      if (uVar10 == 0x7ff00000) {
        if (uVar11 == 0x7ff00000) {
_08047544:
          sub_080491CC(1);
          return 1;
        }
        if (uVar14 == 0) {
          return 0;
        }
        if (uVar14 == 1) {
          return 0;
        }
        if (uVar14 == 2) {
          return 0x54442d18;
        }
        if (uVar14 == 3) {
          return 0x54442d18;
        }
      }
      else if (uVar11 == 0x7ff00000) goto joined_r0x080475b4;
      iVar15 = (int)(uVar11 - uVar10) >> 0x14;
      if (iVar15 < 0x3d) {
        if ((int)param_4 < 0 && iVar15 + 0x3c < 0 != SCARRY4(iVar15,0x3c)) {
          uVar22 = 0;
        }
        else {
          uVar22 = sub_08053A44(param_1,param_2,param_3,param_4);
          uVar22 = sub_08047A88((int)uVar22,(uint)((ulonglong)uVar22 >> 0x20) & 0x7fffffff);
        }
      }
      else {
        uVar22 = 0x3ff921fb54442d18;
      }
      uVar5 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar10 = (uint)uVar22;
      if ((uVar14 != 0) && (uVar14 != 1)) {
        if (uVar14 == 2) {
          uVar22 = sub_080536E0(uVar10,uVar5,_sub_08047680,uRam08047684);
          uVar10 = sub_08053698((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x54442d18,0x400921fb);
        }
        else {
          uVar22 = sub_080536E0(uVar10,uVar5,_sub_08047680,uRam08047684);
          uVar10 = sub_080536E0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x54442d18,0x400921fb);
        }
      }
    }
    else {
      if ((param_4 & 0x7fffffff) != 0 || param_3 != 0) goto _0804752C;
joined_r0x080475b4:
      if ((int)param_2 < 0) {
        uVar10 = 0x54442d18;
      }
      else {
        uVar10 = 0x54442d18;
      }
    }
    return uVar10;
  }
  if ((~(param_4 << 1) & 0xffe00000) == 0 || (~(param_2 << 1) & 0xffe00000) == 0) {
    uVar14 = param_4 * 2 + (uint)(param_3 != 0);
    if (uVar14 < 0xffe00001) {
      uVar14 = param_2 * 2 + (uint)(param_1 != 0);
    }
    uVar10 = 0x4000011;
    if (0xffe00000 < uVar14) {
      uVar11 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
      uVar14 = uVar11;
      if (uVar11 < 0xfff00001) {
        uVar14 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
      }
      if (0xfff00000 < uVar14) goto sub_08054850;
      if (0xfffff < uVar11) {
        param_3 = param_1;
        param_4 = param_2;
      }
sub_08054E78:
      uVar14 = uVar10 & 0xf;
      if (uVar14 != 9) {
        if (uVar14 != 8) {
          return param_3;
        }
        if (uVar14 == 8) {
          if ((uVar10 & 0x10) == 0) {
            uVar14 = 0x7fc00000;
          }
          else {
            uVar14 = 0;
          }
          return uVar14;
        }
        if ((uVar10 & 0x10) == 0) {
          uVar14 = 0x7fffffff;
          param_4 = param_3;
        }
        else {
          uVar14 = 0xffffffff;
        }
        if ((param_4 & 0x80000000) != 0) {
          uVar14 = ~uVar14;
        }
        return uVar14;
      }
      uVar14 = 8;
      goto sub_08054F3C;
    }
    iVar15 = param_4 * 2 + (uint)(param_3 != 0);
    if (iVar15 != param_2 * 2 + (uint)(param_1 != 0)) {
      if (iVar15 == -0x200000) {
        return 0;
      }
      return 0;
    }
    param_3 = 0;
    if (-1 < (int)(param_4 ^ param_2)) {
      return param_3;
    }
    param_1 = 0;
    uVar10 = 0x4000011;
sub_08054850:
    uVar9 = param_1;
    if ((uVar10 & 0x10) == 0) {
      uVar9 = param_4;
    }
    puVar6 = (uint *)sub_08047A2C();
    uVar14 = *puVar6;
    if ((uVar10 & ~(uVar14 << 0x12) & 0x30000000) != 0) {
      uVar10 = uVar10 | 0x40000000;
    }
    uVar11 = uVar10 | uVar14 & 0x1c00000;
    *puVar6 = uVar14 | (uVar10 << 1) >> 0x1b;
    bVar18 = (uVar10 & 0xf) != 8;
    if (bVar18) {
      uVar2 = uVar10 & 0x70;
      uVar10 = uVar11 | uVar2 << 3;
    }
    else {
      uVar2 = 0x20000;
      uVar10 = uVar11;
    }
    if (!bVar18 && (uVar2 & ~uVar10) == 0) {
      uVar10 = uVar10 | 0xc00000;
    }
    if ((uVar10 & 0x10000000) == 0) {
      if ((uVar10 & 0x40000000) == 0) {
        if ((uVar14 & 0x100) == 0) {
          uVar14 = param_4;
          if ((uVar10 & 0x80) == 0) {
            uVar14 = param_3;
          }
          if ((uVar10 & 0x10) == 0) {
            param_3 = uVar14 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_3 = 0;
            param_4 = uVar14 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar14 & 0x1000) == 0) {
        return param_3;
      }
    }
    else if ((uVar14 & 0x400) == 0) {
      if ((uVar10 & 0x80) == 0) {
        param_4 = param_3;
      }
      if ((uVar10 & 0x10) == 0) {
        uVar14 = param_4 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar14 = 0;
      }
      return uVar14;
    }
  }
  else {
    if ((int)(param_4 ^ param_2) < 0) {
      param_2 = param_2 ^ 0x80000000;
      uVar14 = param_3 - param_1;
      if (param_4 <= param_2 && (uint)(param_1 <= param_3) <= param_4 - param_2) {
        uVar10 = param_4 - (param_2 + (param_1 > param_3)) ^ 0x80000000;
        bVar18 = CARRY4(param_1,uVar14);
        param_1 = param_1 + uVar14;
        param_2 = param_2 + uVar10 + (uint)bVar18;
        bVar18 = param_3 < uVar14;
        param_3 = param_3 - uVar14;
        param_4 = param_4 - (uVar10 + bVar18);
      }
      uVar14 = param_4 >> 0x14;
      uVar10 = uVar14 - (param_2 >> 0x14);
      if ((param_2 & 0x7ff00000) == 0) {
        if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
          if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
            return param_3;
          }
        }
        else {
          uVar11 = param_4 & ~(uVar14 << 0x14);
          if ((uVar14 & 0x7ff) != 0) {
            uVar10 = uVar10 - 1;
            iVar15 = -((param_2 & 0x7fffffff) + (uint)(param_1 != 0));
            goto _08053740;
          }
          bVar18 = param_3 < param_1;
          param_3 = param_3 - param_1;
          param_4 = uVar11 - (param_2 + bVar18);
        }
_080538B4:
        uVar10 = 0x12;
        goto _080538B8;
      }
      uVar11 = param_4 & ~(uVar14 << 0x14);
      iVar15 = -0x100000 - ((param_2 & 0xfffff) + (uint)(param_1 != 0));
_08053740:
      uVar9 = -param_1;
      uVar2 = 0x20 - uVar10;
      if (uVar10 < 0x21) {
        uVar4 = uVar9 >> (uVar10 & 0xff);
        uVar3 = param_3 + uVar4;
        uVar11 = uVar11 + (iVar15 >> (uVar10 & 0xff)) + (uint)CARRY4(param_3,uVar4);
        uVar10 = iVar15 << (uVar2 & 0xff);
        uVar4 = uVar3 + uVar10;
        bVar18 = CARRY4(uVar11,(uint)CARRY4(uVar3,uVar10));
        iVar15 = uVar11 + CARRY4(uVar3,uVar10);
      }
      else {
        param_1 = param_1 * -2;
        if (param_1 != 0) {
          param_1 = 1;
        }
        uVar9 = param_1 | (iVar15 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar10 = uVar10 - 0x20;
        uVar2 = 0x1e - uVar10;
        if (0x1e < uVar10 || uVar2 == 0) {
          return param_3;
        }
        uVar10 = iVar15 >> (uVar10 & 0xff);
        uVar4 = param_3 + uVar10;
        bVar18 = uVar11 != 0 || uVar11 < CARRY4(param_3,uVar10);
        iVar15 = uVar11 - !CARRY4(param_3,uVar10);
      }
      if (-1 < iVar15) {
        iVar15 = uVar9 << (uVar2 & 0xff);
        if (-1 < iVar15) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        if (uVar4 != 0 && iVar15 != -0x80000000) {
          return uVar4;
        }
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 & 0xfffffffe;
        }
        return uVar4;
      }
      uVar10 = uVar2 + 1 & 0xff;
      bVar18 = uVar10 == 0 && bVar18 || uVar10 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar10) & 1);
      param_3 = uVar4 * 2 + (uint)bVar18;
      iVar15 = iVar15 * 2 + (uint)(CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar18));
      uVar11 = iVar15 + uVar14 * 0x200000;
      bVar18 = (bool)((byte)(uVar11 >> 0x14) & 1);
      if (bVar18 && uVar11 >> 0x15 != 0) {
        uVar14 = -((int)(uVar9 << uVar10) >> 0x1f);
        uVar11 = param_3 + uVar14;
        bVar18 = uVar11 == 0;
        if (!CARRY4(param_3,uVar14)) {
          bVar18 = uVar9 << uVar10 == -0x80000000;
        }
        if (!bVar18) {
          return uVar11;
        }
        if (uVar11 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar11 & 0xfffffffe;
        }
        return uVar11;
      }
      if (bVar18) {
        param_3 = (uint)((byte)iVar15 & 1) << 0x1f | param_3 >> 1;
        param_4 = (iVar15 >> 1) + uVar14 * 0x100000;
        goto _080538B4;
      }
      uVar10 = iVar15 + 0x200000;
      if (uVar10 == 0 && param_3 == 0) {
        return param_3;
      }
      iVar15 = (uVar14 & 0xfffff7ff) - 2;
      do {
        bVar18 = CARRY4(param_3,param_3);
        param_3 = param_3 * 2;
        uVar10 = uVar10 * 2 + (uint)bVar18;
        iVar15 = iVar15 + -1;
      } while ((uVar10 & 0x100000) == 0);
      if (0 < iVar15) {
        return param_3;
      }
      param_4 = uVar10 + (param_4 & 0x80000000) + iVar15 * 0x100000 + 0x60000000;
      puVar6 = (uint *)sub_08047A2C();
      uVar10 = 0x12;
      param_2 = *puVar6;
      if ((param_2 & 0x1000000) != 0) {
        return 0;
      }
      if ((param_2 & 0x800) == 0) {
        uVar14 = param_4 & ~((param_4 >> 0x14) << 0x14);
        iVar15 = -(param_4 >> 0x14 & 0xfffff7ff);
        uVar11 = iVar15 + 0x601;
        uVar10 = uVar14 | 0x100000;
        if (uVar11 < 0x36) {
          if (uVar11 == 0x35) {
            uVar11 = 0;
            uVar9 = 0x80000000;
            if (param_3 != 0 || (uVar14 & 0xfffff) != 0) {
              uVar9 = 0x80000001;
            }
          }
          else if (uVar11 < 0x15) {
            uVar9 = param_3 << (0x20 - uVar11 & 0xff);
            uVar11 = uVar10 << (0x20 - uVar11 & 0xff) | param_3 >> (uVar11 & 0xff);
          }
          else {
            uVar14 = iVar15 + 0x5e1;
            if (uVar11 < 0x20 || uVar14 == 0) {
              uVar11 = uVar10 << (-uVar14 & 0xff) | param_3 >> (uVar11 & 0xff);
              uVar9 = param_3 << (-uVar14 & 0xff);
            }
            else {
              uVar11 = uVar10 >> (uVar14 & 0xff);
              uVar9 = uVar10 << (0x20 - uVar14 & 0xff);
              if (param_3 != 0) {
                uVar9 = uVar9 | 1;
              }
            }
          }
        }
        else {
          uVar9 = 1;
          uVar11 = 0;
        }
        if (uVar9 != 0) {
          if (SUB41(uVar9 >> 0x1f,0)) {
            if ((uVar9 & 0x7fffffff) == 0) {
              uVar11 = uVar11 + 1 & 0xfffffffe;
            }
            else {
              uVar11 = uVar11 + 1;
            }
          }
          puVar6 = (uint *)sub_08047A2C();
          *puVar6 = *puVar6 | 8;
          return uVar11;
        }
        return uVar11;
      }
    }
    else {
      uVar14 = param_3 - param_1;
      iVar15 = param_4 - (param_2 + (param_1 > param_3));
      if (param_4 <= param_2 && (uint)(param_1 <= param_3) <= param_4 - param_2) {
        bVar18 = CARRY4(param_1,uVar14);
        param_1 = param_1 + uVar14;
        param_2 = param_2 + iVar15 + (uint)bVar18;
        bVar18 = param_3 < uVar14;
        param_3 = param_3 - uVar14;
        param_4 = param_4 - (iVar15 + (uint)bVar18);
      }
      uVar14 = param_4 >> 0x14;
      uVar10 = uVar14 - (param_2 >> 0x14);
      if ((param_2 & 0x7ff00000) != 0) {
        param_4 = param_4 & ~(uVar14 << 0x14);
        param_2 = param_2 & 0x1fffff | 0x100000;
_08053500:
        uVar11 = 0x20 - uVar10;
        if (uVar10 < 0x21) {
          uVar2 = param_1 >> (uVar10 & 0xff);
          bVar18 = CARRY4(param_3,uVar2);
          uVar2 = param_3 + uVar2;
          uVar9 = param_2 << (uVar11 & 0xff);
          param_3 = uVar2 + uVar9;
          uVar10 = param_4 + (param_2 >> (uVar10 & 0xff)) + (uint)bVar18 + (uint)CARRY4(uVar2,uVar9)
          ;
          if (uVar10 < 0x100000) {
            param_4 = uVar10 + uVar14 * 0x100000;
            goto _08053524;
          }
_08053588:
          param_4 = (uVar10 + 0x100000 >> 1) + uVar14 * 0x100000;
          bVar18 = (bool)((byte)param_3 & 1);
          param_3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | param_3 >> 1;
          if (!bVar18) {
_080535C0:
            param_2 = param_4 * 2;
            if (param_2 < 0xffe00000) {
              return param_3;
            }
            uVar10 = 0x10000011;
            param_4 = param_4 + 0xa0000000;
            goto sub_08054850;
          }
          bVar16 = CARRY4(param_3,(uint)bVar18);
          param_3 = param_3 + bVar18;
          uVar14 = param_3;
          if (!bVar16) {
            uVar14 = param_1 << (uVar11 & 0xff);
          }
          if (uVar14 != 0) goto _080535C0;
        }
        else {
          param_1 = param_2 * 2 + (uint)(param_1 != 0);
          uVar10 = uVar10 - 0x20;
          bVar18 = uVar10 < 0x20;
          uVar11 = 0x1f - uVar10;
          if (bVar18) {
            param_2 = param_2 >> (uVar10 & 0xff);
            bVar18 = CARRY4(param_3,param_2);
            param_3 = param_3 + param_2;
          }
          else {
            uVar11 = 0;
          }
          param_4 = param_4 + uVar14 * 0x100000 + (uint)bVar18;
          if (uVar14 != param_4 >> 0x14) {
            uVar10 = param_4 + uVar14 * -0x100000;
            goto _08053588;
          }
_08053524:
          param_1 = param_1 << (uVar11 & 0xff);
          if (-1 < (int)param_1) {
            return param_3;
          }
          bVar18 = param_3 != 0xffffffff;
          param_3 = param_3 + 1;
          uVar14 = param_3;
          if (bVar18) {
            param_1 = param_1 << 1;
            uVar14 = param_1;
          }
          if (uVar14 != 0) {
            return param_3;
          }
        }
        if (param_3 == 0) {
          param_4 = param_4 + 1;
          param_3 = 0;
        }
        else {
          param_3 = param_3 & 0xfffffffe;
        }
        param_2 = param_4 << 1;
        if (param_2 < 0xffe00000) {
          return param_3;
        }
        uVar10 = 0x10000011;
        if (param_2 >= 0xffe00000) {
          param_4 = param_4 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        if ((uVar14 & 0x7ff) != 0) {
          return param_3;
        }
        if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
          return param_3;
        }
        uVar10 = 0x11;
      }
      else {
        param_4 = param_4 & ~(uVar14 << 0x14);
        if ((uVar14 & 0x7ff) != 0) {
          param_2 = param_2 & 0x7fffffff;
          uVar10 = uVar10 - 1;
          goto _08053500;
        }
        bVar18 = CARRY4(param_3,param_1);
        param_3 = param_3 + param_1;
        param_4 = param_4 + param_2 + (uint)bVar18;
        uVar10 = 0x11;
      }
_080538B8:
      if (param_4 << 1 == 0 && param_3 == 0) {
        return param_3;
      }
      if (0x1fffff < param_4 << 1) {
        return param_3;
      }
      puVar6 = (uint *)sub_08047A2C();
      if ((*puVar6 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar6 & 0x800) == 0) {
        return param_3;
      }
      uVar14 = param_4 >> 0x1f | 0x6000000;
      param_4 = param_4 & 0x7fffffff;
      if (param_4 == 0 && param_3 >> 0xc == 0) {
        param_3 = param_3 << 0x14;
        uVar14 = uVar14 - 0x140000;
      }
      uVar11 = param_3;
      if (param_4 == 0) {
        param_4 = param_3 >> 0xc;
        uVar11 = param_3 << 0x14;
        uVar14 = uVar14 - 0x140000;
      }
      uVar2 = 0;
      if (param_4 >> 5 == 0) {
        param_4 = param_4 << 0x10;
        uVar2 = 0x10;
      }
      if (param_4 >> 0xd == 0) {
        param_4 = param_4 << 8;
        uVar2 = uVar2 + 8;
      }
      if (param_4 >> 0x11 == 0) {
        param_4 = param_4 << 4;
        uVar2 = uVar2 + 4;
      }
      if (param_4 >> 0x13 == 0) {
        param_4 = param_4 << 2;
        uVar2 = uVar2 + 2;
      }
      if (param_4 >> 0x14 == 0) {
        param_4 = param_4 << 1;
        uVar2 = uVar2 + 1;
      }
      param_3 = uVar11 << (uVar2 & 0xff);
      uVar9 = 0x20 - uVar2;
      param_4 = ((param_4 | uVar11 >> (uVar9 & 0xff)) ^ uVar14 * -0x80000000) +
                (uVar14 + uVar2 * -0x10000 & 0xfffffffe) * 0x10;
      param_2 = param_3;
    }
    uVar10 = uVar10 | 0x20000000;
  }
  uVar14 = sub_080491E4(param_3,param_4,uVar9,param_2);
  if ((uVar10 & 0xf) != 9) {
    return uVar14;
  }
sub_08054F3C:
  uVar10 = uVar10 & uVar14 << 0x10;
  if (uVar10 != 0) {
    uVar10 = 1;
  }
  return uVar10;
}


/* sub_08047680 @ 0x08047680 */

undefined4 sub_08047680(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_08047FC0();
  return *puVar1;
}


/* sub_08047688 @ 0x08047688 */

undefined4 sub_08047688(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_08047FC0();
  return *puVar1;
}


/* sub_08047696 @ 0x08047696 */

void sub_08047696(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_08047FC0();
  *puVar1 = param_1;
  return;
}


/* sub_080476A6 @ 0x080476A6 */

ulonglong sub_080476A6(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  if (param_4 != 0 || (int)param_3 < 0) {
    if ((param_4 & 0x80000000) != 0) {
      return (ulonglong)(param_4 < param_2 || param_2 - param_4 < (uint)(param_3 <= param_1));
    }
    if (param_4 >> 0xf == 0) {
      uVar9 = 0x10;
    }
    param_4 = param_4 << uVar9;
    if (param_4 >> 0x17 == 0) {
      param_4 = param_4 << 8;
      uVar9 = uVar9 + 8;
    }
    if (param_4 >> 0x1b == 0) {
      param_4 = param_4 << 4;
      uVar9 = uVar9 + 4;
    }
    if (param_4 >> 0x1d == 0) {
      param_4 = param_4 << 2;
      uVar9 = uVar9 + 2;
    }
    if (param_4 >> 0x1e == 0) {
      param_4 = param_4 << 1;
      uVar9 = uVar9 + 1;
    }
    param_4 = param_4 | param_3 >> (0x20 - uVar9 & 0xff);
    param_3 = param_3 << (uVar9 & 0xff);
    bVar10 = param_2 - param_4 < (uint)(param_3 <= param_1);
    uVar8 = param_2;
    if (param_4 < param_2 || bVar10) {
      uVar8 = param_2 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    bVar11 = uVar8 - param_4 < (uint)(param_3 <= param_1);
    uVar2 = uVar8;
    if (param_4 < uVar8 || bVar11) {
      uVar2 = uVar8 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    bVar13 = uVar2 - param_4 < (uint)(param_3 <= param_1);
    uVar4 = uVar2;
    if (param_4 < uVar2 || bVar13) {
      uVar4 = uVar2 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    uVar5 = (uint)(param_4 < param_2 || bVar10) + (uint)(param_4 < uVar8 || bVar11) +
            (uint)(param_4 < uVar2 || bVar13);
    uVar8 = -param_3;
    uVar2 = -(param_4 + (param_3 != 0));
    iVar7 = 0;
    if ((0xf < uVar9) && (uVar4 >> 0xe == 0)) {
      uVar4 = uVar4 << 0x10;
      iVar7 = 0x10;
    }
    if ((7 < uVar9 - iVar7) && (uVar4 >> 0x16 == 0)) {
      uVar4 = uVar4 << 8;
      iVar7 = iVar7 + 8;
    }
    uVar4 = uVar4 | param_1 >> (0x20U - iVar7 & 0xff);
    param_1 = param_1 << iVar7;
    bVar10 = uVar9 - iVar7 != 0;
    if (bVar10) {
      uVar6 = (uVar9 - iVar7) - 1;
      uVar1 = 3 - (uVar6 & 3);
      bVar10 = CARRY4(uVar1,uVar1 * 2);
      switch(uVar6 & 3) {
      case 1:
        goto switchD_08047934_caseD_1;
      case 2:
        goto switchD_08047934_caseD_2;
      case 3:
        goto _0804793C;
      }
      while( true ) {
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
        uVar6 = uVar6 - 4;
        if ((int)uVar6 < 0) break;
_0804793C:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
switchD_08047934_caseD_2:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
switchD_08047934_caseD_1:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
      }
    }
    param_1 = param_1 & ~((param_1 >> (uVar9 & 0xff)) << (uVar9 & 0xff));
    bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
    uVar2 = param_1 * 2 + (uint)bVar10;
    uVar9 = uVar9 & 0xff;
    uVar8 = uVar5 << uVar9;
    return CONCAT44((uint)bVar11 +
                    (uint)(uVar9 == 0 && bVar11 ||
                          uVar9 != 0 && (bool)((byte)(uVar5 >> 0x20 - uVar9) & 1)) +
                    (uint)CARRY4(uVar2,uVar8),uVar2 + uVar8);
  }
  if (param_3 != 0) {
    if (param_3 >> 0xf == 0) {
      uVar9 = 0x10;
    }
    param_3 = param_3 << uVar9;
    if (param_3 >> 0x17 == 0) {
      param_3 = param_3 << 8;
      uVar9 = uVar9 + 8;
    }
    if (param_3 >> 0x1b == 0) {
      param_3 = param_3 << 4;
      uVar9 = uVar9 + 4;
    }
    if (param_3 >> 0x1d == 0) {
      param_3 = param_3 << 2;
      uVar9 = uVar9 + 2;
    }
    if (param_3 >> 0x1e == 0) {
      param_3 = param_3 << 1;
      uVar9 = uVar9 + 1;
    }
    iVar7 = 0;
    if (param_3 << 1 <= param_2) {
      param_2 = param_2 + param_3 * -2;
      iVar7 = 2;
    }
    bVar10 = param_3 <= param_2;
    if (bVar10) {
      param_2 = param_2 - param_3;
    }
    uVar2 = -param_3;
    uVar4 = uVar9 + 0x20;
    uVar8 = param_1;
    if ((0x1f < uVar4) && (param_2 == 0 && param_1 >> 0x1e == 0)) {
      uVar8 = 0;
      uVar4 = uVar9;
      param_2 = param_1;
    }
    iVar3 = 0;
    if ((0xf < uVar4) && (param_2 >> 0xe == 0)) {
      param_2 = param_2 << 0x10;
      iVar3 = 0x10;
    }
    if ((7 < uVar4 - iVar3) && (param_2 >> 0x16 == 0)) {
      param_2 = param_2 << 8;
      iVar3 = iVar3 + 8;
    }
    param_2 = param_2 | uVar8 >> (0x20U - iVar3 & 0xff);
    uVar8 = uVar8 << iVar3;
    bVar11 = uVar4 - iVar3 != 0;
    if (bVar11) {
      uVar5 = (uVar4 - iVar3) - 1;
      uVar4 = uVar5 & 7 ^ 7;
      bVar11 = CARRY4(uVar4,uVar4 * 2);
      switch(uVar5 & 7) {
      case 1:
        goto switchD_08047800_caseD_1;
      case 2:
        goto switchD_08047800_caseD_2;
      case 3:
        goto switchD_08047800_caseD_3;
      case 4:
        goto switchD_08047800_caseD_4;
      case 5:
        goto switchD_08047800_caseD_5;
      case 6:
        goto switchD_08047800_caseD_6;
      case 7:
        goto _08047808;
      }
      while( true ) {
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
        uVar5 = uVar5 - 8;
        if ((int)uVar5 < 0) break;
_08047808:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_6:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_5:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_4:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_3:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_2:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_1:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
      }
    }
    return CONCAT44((param_2 & ~((param_2 >> (uVar9 & 0xff)) << (uVar9 & 0xff))) * 2 +
                    (uint)(CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11)) +
                    (iVar7 + (uint)bVar10 << (uVar9 & 0xff)),uVar8 * 2 + (uint)bVar11);
  }
  uVar14 = sub_080491D8(2,2);
  if ((int)uVar14 != 0) {
    software_interrupt(0x123456);
    return 0x2002600000018;
  }
  return uVar14 & 0xffffffff00000000;
}


/* sub_080476A8 @ 0x080476A8 */

ulonglong sub_080476A8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  if (param_4 != 0 || (int)param_3 < 0) {
    if ((param_4 & 0x80000000) != 0) {
      return (ulonglong)(param_4 < param_2 || param_2 - param_4 < (uint)(param_3 <= param_1));
    }
    if (param_4 >> 0xf == 0) {
      uVar9 = 0x10;
    }
    param_4 = param_4 << uVar9;
    if (param_4 >> 0x17 == 0) {
      param_4 = param_4 << 8;
      uVar9 = uVar9 + 8;
    }
    if (param_4 >> 0x1b == 0) {
      param_4 = param_4 << 4;
      uVar9 = uVar9 + 4;
    }
    if (param_4 >> 0x1d == 0) {
      param_4 = param_4 << 2;
      uVar9 = uVar9 + 2;
    }
    if (param_4 >> 0x1e == 0) {
      param_4 = param_4 << 1;
      uVar9 = uVar9 + 1;
    }
    param_4 = param_4 | param_3 >> (0x20 - uVar9 & 0xff);
    param_3 = param_3 << (uVar9 & 0xff);
    bVar10 = param_2 - param_4 < (uint)(param_3 <= param_1);
    uVar8 = param_2;
    if (param_4 < param_2 || bVar10) {
      uVar8 = param_2 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    bVar11 = uVar8 - param_4 < (uint)(param_3 <= param_1);
    uVar2 = uVar8;
    if (param_4 < uVar8 || bVar11) {
      uVar2 = uVar8 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    bVar13 = uVar2 - param_4 < (uint)(param_3 <= param_1);
    uVar4 = uVar2;
    if (param_4 < uVar2 || bVar13) {
      uVar4 = uVar2 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    uVar5 = (uint)(param_4 < param_2 || bVar10) + (uint)(param_4 < uVar8 || bVar11) +
            (uint)(param_4 < uVar2 || bVar13);
    uVar8 = -param_3;
    uVar2 = -(param_4 + (param_3 != 0));
    iVar7 = 0;
    if ((0xf < uVar9) && (uVar4 >> 0xe == 0)) {
      uVar4 = uVar4 << 0x10;
      iVar7 = 0x10;
    }
    if ((7 < uVar9 - iVar7) && (uVar4 >> 0x16 == 0)) {
      uVar4 = uVar4 << 8;
      iVar7 = iVar7 + 8;
    }
    uVar4 = uVar4 | param_1 >> (0x20U - iVar7 & 0xff);
    param_1 = param_1 << iVar7;
    bVar10 = uVar9 - iVar7 != 0;
    if (bVar10) {
      uVar6 = (uVar9 - iVar7) - 1;
      uVar1 = 3 - (uVar6 & 3);
      bVar10 = CARRY4(uVar1,uVar1 * 2);
      switch(uVar6 & 3) {
      case 1:
        goto switchD_08047934_caseD_1;
      case 2:
        goto switchD_08047934_caseD_2;
      case 3:
        goto _0804793C;
      }
      while( true ) {
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
        uVar6 = uVar6 - 4;
        if ((int)uVar6 < 0) break;
_0804793C:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
switchD_08047934_caseD_2:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
switchD_08047934_caseD_1:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
      }
    }
    param_1 = param_1 & ~((param_1 >> (uVar9 & 0xff)) << (uVar9 & 0xff));
    bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
    uVar2 = param_1 * 2 + (uint)bVar10;
    uVar9 = uVar9 & 0xff;
    uVar8 = uVar5 << uVar9;
    return CONCAT44((uint)bVar11 +
                    (uint)(uVar9 == 0 && bVar11 ||
                          uVar9 != 0 && (bool)((byte)(uVar5 >> 0x20 - uVar9) & 1)) +
                    (uint)CARRY4(uVar2,uVar8),uVar2 + uVar8);
  }
  if (param_3 != 0) {
    if (param_3 >> 0xf == 0) {
      uVar9 = 0x10;
    }
    param_3 = param_3 << uVar9;
    if (param_3 >> 0x17 == 0) {
      param_3 = param_3 << 8;
      uVar9 = uVar9 + 8;
    }
    if (param_3 >> 0x1b == 0) {
      param_3 = param_3 << 4;
      uVar9 = uVar9 + 4;
    }
    if (param_3 >> 0x1d == 0) {
      param_3 = param_3 << 2;
      uVar9 = uVar9 + 2;
    }
    if (param_3 >> 0x1e == 0) {
      param_3 = param_3 << 1;
      uVar9 = uVar9 + 1;
    }
    iVar7 = 0;
    if (param_3 << 1 <= param_2) {
      param_2 = param_2 + param_3 * -2;
      iVar7 = 2;
    }
    bVar10 = param_3 <= param_2;
    if (bVar10) {
      param_2 = param_2 - param_3;
    }
    uVar2 = -param_3;
    uVar4 = uVar9 + 0x20;
    uVar8 = param_1;
    if ((0x1f < uVar4) && (param_2 == 0 && param_1 >> 0x1e == 0)) {
      uVar8 = 0;
      uVar4 = uVar9;
      param_2 = param_1;
    }
    iVar3 = 0;
    if ((0xf < uVar4) && (param_2 >> 0xe == 0)) {
      param_2 = param_2 << 0x10;
      iVar3 = 0x10;
    }
    if ((7 < uVar4 - iVar3) && (param_2 >> 0x16 == 0)) {
      param_2 = param_2 << 8;
      iVar3 = iVar3 + 8;
    }
    param_2 = param_2 | uVar8 >> (0x20U - iVar3 & 0xff);
    uVar8 = uVar8 << iVar3;
    bVar11 = uVar4 - iVar3 != 0;
    if (bVar11) {
      uVar5 = (uVar4 - iVar3) - 1;
      uVar4 = uVar5 & 7 ^ 7;
      bVar11 = CARRY4(uVar4,uVar4 * 2);
      switch(uVar5 & 7) {
      case 1:
        goto switchD_08047800_caseD_1;
      case 2:
        goto switchD_08047800_caseD_2;
      case 3:
        goto switchD_08047800_caseD_3;
      case 4:
        goto switchD_08047800_caseD_4;
      case 5:
        goto switchD_08047800_caseD_5;
      case 6:
        goto switchD_08047800_caseD_6;
      case 7:
        goto _08047808;
      }
      while( true ) {
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
        uVar5 = uVar5 - 8;
        if ((int)uVar5 < 0) break;
_08047808:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_6:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_5:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_4:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_3:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_2:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_08047800_caseD_1:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
      }
    }
    return CONCAT44((param_2 & ~((param_2 >> (uVar9 & 0xff)) << (uVar9 & 0xff))) * 2 +
                    (uint)(CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11)) +
                    (iVar7 + (uint)bVar10 << (uVar9 & 0xff)),uVar8 * 2 + (uint)bVar11);
  }
  uVar14 = sub_080491D8(2,2);
  if ((int)uVar14 != 0) {
    software_interrupt(0x123456);
    return 0x2002600000018;
  }
  return uVar14 & 0xffffffff00000000;
}


/* sub_080476AC @ 0x080476AC */

ulonglong sub_080476AC(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  if (param_4 != 0 || (int)param_3 < 0) {
    if ((param_4 & 0x80000000) != 0) {
      return (ulonglong)(param_4 < param_2 || param_2 - param_4 < (uint)(param_3 <= param_1));
    }
    if (param_4 >> 0xf == 0) {
      uVar9 = 0x10;
    }
    param_4 = param_4 << uVar9;
    if (param_4 >> 0x17 == 0) {
      param_4 = param_4 << 8;
      uVar9 = uVar9 + 8;
    }
    if (param_4 >> 0x1b == 0) {
      param_4 = param_4 << 4;
      uVar9 = uVar9 + 4;
    }
    if (param_4 >> 0x1d == 0) {
      param_4 = param_4 << 2;
      uVar9 = uVar9 + 2;
    }
    if (param_4 >> 0x1e == 0) {
      param_4 = param_4 << 1;
      uVar9 = uVar9 + 1;
    }
    param_4 = param_4 | param_3 >> (0x20 - uVar9 & 0xff);
    param_3 = param_3 << (uVar9 & 0xff);
    bVar10 = param_2 - param_4 < (uint)(param_3 <= param_1);
    uVar8 = param_2;
    if (param_4 < param_2 || bVar10) {
      uVar8 = param_2 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    bVar11 = uVar8 - param_4 < (uint)(param_3 <= param_1);
    uVar2 = uVar8;
    if (param_4 < uVar8 || bVar11) {
      uVar2 = uVar8 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    bVar13 = uVar2 - param_4 < (uint)(param_3 <= param_1);
    uVar4 = uVar2;
    if (param_4 < uVar2 || bVar13) {
      uVar4 = uVar2 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    uVar5 = (uint)(param_4 < param_2 || bVar10) + (uint)(param_4 < uVar8 || bVar11) +
            (uint)(param_4 < uVar2 || bVar13);
    uVar8 = -param_3;
    uVar2 = -(param_4 + (param_3 != 0));
    iVar7 = 0;
    if ((0xf < uVar9) && (uVar4 >> 0xe == 0)) {
      uVar4 = uVar4 << 0x10;
      iVar7 = 0x10;
    }
    if ((7 < uVar9 - iVar7) && (uVar4 >> 0x16 == 0)) {
      uVar4 = uVar4 << 8;
      iVar7 = iVar7 + 8;
    }
    uVar4 = uVar4 | param_1 >> (0x20U - iVar7 & 0xff);
    param_1 = param_1 << iVar7;
    bVar10 = uVar9 - iVar7 != 0;
    if (bVar10) {
      uVar6 = (uVar9 - iVar7) - 1;
      uVar1 = 3 - (uVar6 & 3);
      bVar10 = CARRY4(uVar1,uVar1 * 2);
      switch(uVar6 & 3) {
      case 1:
        goto switchD_08047934_caseD_1;
      case 2:
        goto switchD_08047934_caseD_2;
      case 3:
        goto _0804793C;
      }
      while( true ) {
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
        uVar6 = uVar6 - 4;
        if ((int)uVar6 < 0) break;
_0804793C:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
switchD_08047934_caseD_2:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
switchD_08047934_caseD_1:
        bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
        param_1 = param_1 * 2 + (uint)bVar10;
        bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
        uVar4 = uVar4 * 2 + (uint)bVar11;
        bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
        bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar10 = CARRY4(uVar2,uVar4) || bVar11;
        if (CARRY4(uVar2,uVar4) || bVar11) {
          uVar4 = uVar2 + uVar4 + (uint)bVar12;
          param_1 = uVar8 + param_1 + (uint)bVar13;
        }
      }
    }
    param_1 = param_1 & ~((param_1 >> (uVar9 & 0xff)) << (uVar9 & 0xff));
    bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
    uVar2 = param_1 * 2 + (uint)bVar10;
    uVar9 = uVar9 & 0xff;
    uVar8 = uVar5 << uVar9;
    return CONCAT44((uint)bVar11 +
                    (uint)(uVar9 == 0 && bVar11 ||
                          uVar9 != 0 && (bool)((byte)(uVar5 >> 0x20 - uVar9) & 1)) +
                    (uint)CARRY4(uVar2,uVar8),uVar2 + uVar8);
  }
  if (param_3 == 0) {
    uVar14 = sub_080491D8(2,2);
    if ((int)uVar14 != 0) {
      software_interrupt(0x123456);
      return 0x2002600000018;
    }
    return uVar14 & 0xffffffff00000000;
  }
  if (param_3 >> 0xf == 0) {
    uVar9 = 0x10;
  }
  param_3 = param_3 << uVar9;
  if (param_3 >> 0x17 == 0) {
    param_3 = param_3 << 8;
    uVar9 = uVar9 + 8;
  }
  if (param_3 >> 0x1b == 0) {
    param_3 = param_3 << 4;
    uVar9 = uVar9 + 4;
  }
  if (param_3 >> 0x1d == 0) {
    param_3 = param_3 << 2;
    uVar9 = uVar9 + 2;
  }
  if (param_3 >> 0x1e == 0) {
    param_3 = param_3 << 1;
    uVar9 = uVar9 + 1;
  }
  iVar7 = 0;
  if (param_3 << 1 <= param_2) {
    param_2 = param_2 + param_3 * -2;
    iVar7 = 2;
  }
  bVar10 = param_3 <= param_2;
  if (bVar10) {
    param_2 = param_2 - param_3;
  }
  uVar2 = -param_3;
  uVar4 = uVar9 + 0x20;
  uVar8 = param_1;
  if ((0x1f < uVar4) && (param_2 == 0 && param_1 >> 0x1e == 0)) {
    uVar8 = 0;
    uVar4 = uVar9;
    param_2 = param_1;
  }
  iVar3 = 0;
  if ((0xf < uVar4) && (param_2 >> 0xe == 0)) {
    param_2 = param_2 << 0x10;
    iVar3 = 0x10;
  }
  if ((7 < uVar4 - iVar3) && (param_2 >> 0x16 == 0)) {
    param_2 = param_2 << 8;
    iVar3 = iVar3 + 8;
  }
  param_2 = param_2 | uVar8 >> (0x20U - iVar3 & 0xff);
  uVar8 = uVar8 << iVar3;
  bVar11 = uVar4 - iVar3 != 0;
  if (bVar11) {
    uVar5 = (uVar4 - iVar3) - 1;
    uVar4 = uVar5 & 7 ^ 7;
    bVar11 = CARRY4(uVar4,uVar4 * 2);
    switch(uVar5 & 7) {
    case 1:
      goto switchD_08047800_caseD_1;
    case 2:
      goto switchD_08047800_caseD_2;
    case 3:
      goto switchD_08047800_caseD_3;
    case 4:
      goto switchD_08047800_caseD_4;
    case 5:
      goto switchD_08047800_caseD_5;
    case 6:
      goto switchD_08047800_caseD_6;
    case 7:
      goto _08047808;
    }
    while( true ) {
      bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
      uVar8 = uVar8 * 2 + (uint)bVar11;
      uVar4 = param_2 * 2;
      bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
      bVar11 = CARRY4(uVar2,uVar4) || bVar13;
      param_2 = uVar2 + uVar4 + (uint)bVar12;
      if (!CARRY4(uVar2,uVar4) && !bVar13) {
        param_2 = param_2 + param_3;
      }
      uVar5 = uVar5 - 8;
      if ((int)uVar5 < 0) break;
_08047808:
      bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
      uVar8 = uVar8 * 2 + (uint)bVar11;
      uVar4 = param_2 * 2;
      bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
      bVar11 = CARRY4(uVar2,uVar4) || bVar13;
      param_2 = uVar2 + uVar4 + (uint)bVar12;
      if (!CARRY4(uVar2,uVar4) && !bVar13) {
        param_2 = param_2 + param_3;
      }
switchD_08047800_caseD_6:
      bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
      uVar8 = uVar8 * 2 + (uint)bVar11;
      uVar4 = param_2 * 2;
      bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
      bVar11 = CARRY4(uVar2,uVar4) || bVar13;
      param_2 = uVar2 + uVar4 + (uint)bVar12;
      if (!CARRY4(uVar2,uVar4) && !bVar13) {
        param_2 = param_2 + param_3;
      }
switchD_08047800_caseD_5:
      bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
      uVar8 = uVar8 * 2 + (uint)bVar11;
      uVar4 = param_2 * 2;
      bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
      bVar11 = CARRY4(uVar2,uVar4) || bVar13;
      param_2 = uVar2 + uVar4 + (uint)bVar12;
      if (!CARRY4(uVar2,uVar4) && !bVar13) {
        param_2 = param_2 + param_3;
      }
switchD_08047800_caseD_4:
      bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
      uVar8 = uVar8 * 2 + (uint)bVar11;
      uVar4 = param_2 * 2;
      bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
      bVar11 = CARRY4(uVar2,uVar4) || bVar13;
      param_2 = uVar2 + uVar4 + (uint)bVar12;
      if (!CARRY4(uVar2,uVar4) && !bVar13) {
        param_2 = param_2 + param_3;
      }
switchD_08047800_caseD_3:
      bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
      uVar8 = uVar8 * 2 + (uint)bVar11;
      uVar4 = param_2 * 2;
      bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
      bVar11 = CARRY4(uVar2,uVar4) || bVar13;
      param_2 = uVar2 + uVar4 + (uint)bVar12;
      if (!CARRY4(uVar2,uVar4) && !bVar13) {
        param_2 = param_2 + param_3;
      }
switchD_08047800_caseD_2:
      bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
      uVar8 = uVar8 * 2 + (uint)bVar11;
      uVar4 = param_2 * 2;
      bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
      bVar11 = CARRY4(uVar2,uVar4) || bVar13;
      param_2 = uVar2 + uVar4 + (uint)bVar12;
      if (!CARRY4(uVar2,uVar4) && !bVar13) {
        param_2 = param_2 + param_3;
      }
switchD_08047800_caseD_1:
      bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
      uVar8 = uVar8 * 2 + (uint)bVar11;
      uVar4 = param_2 * 2;
      bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
      bVar11 = CARRY4(uVar2,uVar4) || bVar13;
      param_2 = uVar2 + uVar4 + (uint)bVar12;
      if (!CARRY4(uVar2,uVar4) && !bVar13) {
        param_2 = param_2 + param_3;
      }
    }
  }
  return CONCAT44((param_2 & ~((param_2 >> (uVar9 & 0xff)) << (uVar9 & 0xff))) * 2 +
                  (uint)(CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11)) +
                  (iVar7 + (uint)bVar10 << (uVar9 & 0xff)),uVar8 * 2 + (uint)bVar11);
}


/* sub_08047804 @ 0x08047804 */

undefined8 sub_08047804(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  uint unaff_r4;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  uint unaff_r6;
  uint in_r12;
  byte in_CY;
  bool bVar5;
  bool bVar6;
  
  do {
    bVar5 = CARRY4(unaff_r5,unaff_r5) || CARRY4(unaff_r5 * 2,(uint)in_CY);
    uVar4 = unaff_r5 * 2 + (uint)in_CY;
    uVar1 = unaff_r4 * 2;
    bVar2 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar2;
    iVar3 = in_r12 + uVar1 + (uint)bVar5;
    if (!CARRY4(in_r12,uVar1) && !bVar2) {
      iVar3 = iVar3 - in_r12;
    }
    bVar5 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
    uVar4 = uVar4 * 2 + (uint)bVar6;
    uVar1 = iVar3 * 2;
    bVar2 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar2;
    iVar3 = in_r12 + uVar1 + (uint)bVar5;
    if (!CARRY4(in_r12,uVar1) && !bVar2) {
      iVar3 = iVar3 - in_r12;
    }
    bVar5 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
    uVar4 = uVar4 * 2 + (uint)bVar6;
    uVar1 = iVar3 * 2;
    bVar2 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar2;
    iVar3 = in_r12 + uVar1 + (uint)bVar5;
    if (!CARRY4(in_r12,uVar1) && !bVar2) {
      iVar3 = iVar3 - in_r12;
    }
    bVar5 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
    uVar4 = uVar4 * 2 + (uint)bVar6;
    uVar1 = iVar3 * 2;
    bVar2 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar2;
    iVar3 = in_r12 + uVar1 + (uint)bVar5;
    if (!CARRY4(in_r12,uVar1) && !bVar2) {
      iVar3 = iVar3 - in_r12;
    }
    bVar5 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
    uVar4 = uVar4 * 2 + (uint)bVar6;
    uVar1 = iVar3 * 2;
    bVar2 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar2;
    iVar3 = in_r12 + uVar1 + (uint)bVar5;
    if (!CARRY4(in_r12,uVar1) && !bVar2) {
      iVar3 = iVar3 - in_r12;
    }
    bVar5 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
    uVar4 = uVar4 * 2 + (uint)bVar6;
    uVar1 = iVar3 * 2;
    bVar2 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar2;
    iVar3 = in_r12 + uVar1 + (uint)bVar5;
    if (!CARRY4(in_r12,uVar1) && !bVar2) {
      iVar3 = iVar3 - in_r12;
    }
    bVar5 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
    uVar4 = uVar4 * 2 + (uint)bVar6;
    uVar1 = iVar3 * 2;
    bVar2 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar2;
    iVar3 = in_r12 + uVar1 + (uint)bVar5;
    if (!CARRY4(in_r12,uVar1) && !bVar2) {
      iVar3 = iVar3 - in_r12;
    }
    bVar5 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
    unaff_r5 = uVar4 * 2 + (uint)bVar6;
    uVar1 = iVar3 * 2;
    bVar2 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    in_CY = CARRY4(in_r12,uVar1) || bVar2;
    unaff_r4 = in_r12 + uVar1 + (uint)bVar5;
    if (!CARRY4(in_r12,uVar1) && !bVar2) {
      unaff_r4 = unaff_r4 - in_r12;
    }
    param_3 = param_3 + -8;
  } while (-1 < param_3);
  return CONCAT44((unaff_r4 & ~((unaff_r4 >> (unaff_r6 & 0xff)) << (unaff_r6 & 0xff))) * 2 +
                  (uint)(CARRY4(unaff_r5,unaff_r5) || CARRY4(unaff_r5 * 2,(uint)in_CY)) +
                  (param_4 << (unaff_r6 & 0xff)),unaff_r5 * 2 + (uint)in_CY);
}


/* sub_08047938 @ 0x08047938 */

undefined8 sub_08047938(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint unaff_r4;
  uint uVar1;
  uint unaff_r5;
  uint uVar2;
  uint unaff_r6;
  uint in_r12;
  uint in_lr;
  byte in_CY;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  do {
    bVar3 = CARRY4(unaff_r5,unaff_r5) || CARRY4(unaff_r5 * 2,(uint)in_CY);
    uVar2 = unaff_r5 * 2 + (uint)in_CY;
    bVar4 = CARRY4(unaff_r4,unaff_r4) || CARRY4(unaff_r4 * 2,(uint)bVar3);
    uVar1 = unaff_r4 * 2 + (uint)bVar3;
    bVar5 = CARRY4(in_lr,uVar2) || CARRY4(in_lr + uVar2,(uint)bVar4);
    bVar3 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar3;
    if (CARRY4(in_r12,uVar1) || bVar3) {
      uVar1 = in_r12 + uVar1 + (uint)bVar5;
      uVar2 = in_lr + uVar2 + (uint)bVar4;
    }
    bVar3 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar6);
    uVar2 = uVar2 * 2 + (uint)bVar6;
    bVar4 = CARRY4(uVar1,uVar1) || CARRY4(uVar1 * 2,(uint)bVar3);
    uVar1 = uVar1 * 2 + (uint)bVar3;
    bVar5 = CARRY4(in_lr,uVar2) || CARRY4(in_lr + uVar2,(uint)bVar4);
    bVar3 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar3;
    if (CARRY4(in_r12,uVar1) || bVar3) {
      uVar1 = in_r12 + uVar1 + (uint)bVar5;
      uVar2 = in_lr + uVar2 + (uint)bVar4;
    }
    bVar3 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar6);
    uVar2 = uVar2 * 2 + (uint)bVar6;
    bVar4 = CARRY4(uVar1,uVar1) || CARRY4(uVar1 * 2,(uint)bVar3);
    uVar1 = uVar1 * 2 + (uint)bVar3;
    bVar5 = CARRY4(in_lr,uVar2) || CARRY4(in_lr + uVar2,(uint)bVar4);
    bVar3 = CARRY4(in_r12 + uVar1,(uint)bVar5);
    bVar6 = CARRY4(in_r12,uVar1) || bVar3;
    if (CARRY4(in_r12,uVar1) || bVar3) {
      uVar1 = in_r12 + uVar1 + (uint)bVar5;
      uVar2 = in_lr + uVar2 + (uint)bVar4;
    }
    bVar3 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar6);
    unaff_r5 = uVar2 * 2 + (uint)bVar6;
    bVar4 = CARRY4(uVar1,uVar1) || CARRY4(uVar1 * 2,(uint)bVar3);
    unaff_r4 = uVar1 * 2 + (uint)bVar3;
    bVar5 = CARRY4(in_lr,unaff_r5) || CARRY4(in_lr + unaff_r5,(uint)bVar4);
    bVar3 = CARRY4(in_r12 + unaff_r4,(uint)bVar5);
    in_CY = CARRY4(in_r12,unaff_r4) || bVar3;
    if (CARRY4(in_r12,unaff_r4) || bVar3) {
      unaff_r4 = in_r12 + unaff_r4 + (uint)bVar5;
      unaff_r5 = in_lr + unaff_r5 + (uint)bVar4;
    }
    param_3 = param_3 + -4;
  } while (-1 < param_3);
  uVar2 = unaff_r5 & ~((unaff_r5 >> (unaff_r6 & 0xff)) << (unaff_r6 & 0xff));
  bVar3 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)in_CY);
  uVar1 = uVar2 * 2 + (uint)in_CY;
  uVar2 = unaff_r6 & 0xff;
  return CONCAT44((uint)bVar3 +
                  (uint)(uVar2 == 0 && bVar3 ||
                        uVar2 != 0 && (bool)((byte)(param_4 >> 0x20 - uVar2) & 1)) +
                  (uint)CARRY4(uVar1,param_4 << uVar2),uVar1 + (param_4 << uVar2));
}


/* sub_08047A08 @ 0x08047A08 */

undefined4 sub_08047A08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08047FD4(param_1,0,param_3,param_4,param_4);
  return 0;
}


/* sub_08047A18 @ 0x08047A18 */

undefined4 sub_08047A18(void)

{
  int iVar1;
  
  iVar1 = sub_080491D8(2,2);
  if (iVar1 == 0) {
    return 0;
  }
  software_interrupt(0x123456);
  return 0x18;
}


/* sub_08047A1C @ 0x08047A1C */

undefined4 sub_08047A1C(void)

{
  int iVar1;
  
  iVar1 = sub_080491D8(2,2);
  if (iVar1 != 0) {
    software_interrupt(0x123456);
    return 0x18;
  }
  return 0;
}


/* sub_08047A28 @ 0x08047A28 */

int sub_08047A28(void)

{
  int iVar1;
  
  iVar1 = sub_08047FB4();
  return iVar1 + 4;
}


/* sub_08047A2C @ 0x08047A2C */

int sub_08047A2C(void)

{
  int iVar1;
  
  iVar1 = sub_08047FB4();
  return iVar1 + 4;
}


/* sub_08047A40 @ 0x08047A40 */

undefined4 * sub_08047A40(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar3 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar3 = 0;
    }
    puVar5 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar5 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar5;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar2 = -((uint)param_1 & 3);
    iVar6 = iVar2 + 4;
    *(undefined1 *)param_1 = 0;
    puVar5 = (undefined4 *)((int)param_1 + 1);
    if (1 < iVar6) {
      puVar5 = (undefined4 *)((int)param_1 + 2);
      *(undefined1 *)((int)param_1 + 1) = 0;
    }
    param_1 = puVar5;
    if (iVar6 != 2 && iVar2 + 2 < 0 == SBORROW4(iVar6,2)) {
      param_1 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = 0;
    }
    param_2 = param_2 - iVar6;
  }
  bVar7 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar7) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar7 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar7);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar5 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar5 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 == 0) {
    return puVar5;
  }
  if ((int)uVar1 < 0) {
    puVar3 = (undefined1 *)((int)puVar5 + 1);
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 2);
    *puVar3 = 0;
  }
  puVar4 = puVar5;
  if ((uVar1 & 0x40000000) != 0) {
    puVar4 = (undefined4 *)((int)puVar5 + 1);
    *(undefined1 *)puVar5 = 0;
  }
  return puVar4;
}


/* sub_08047A44 @ 0x08047A44 */

undefined4 * sub_08047A44(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar3 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar3 = 0;
    }
    puVar5 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar5 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar5;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar2 = -((uint)param_1 & 3);
    iVar6 = iVar2 + 4;
    *(undefined1 *)param_1 = 0;
    puVar5 = (undefined4 *)((int)param_1 + 1);
    if (1 < iVar6) {
      puVar5 = (undefined4 *)((int)param_1 + 2);
      *(undefined1 *)((int)param_1 + 1) = 0;
    }
    param_1 = puVar5;
    if (iVar6 != 2 && iVar2 + 2 < 0 == SBORROW4(iVar6,2)) {
      param_1 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = 0;
    }
    param_2 = param_2 - iVar6;
  }
  bVar7 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar7) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar7 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar7);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar5 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar5 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      puVar3 = (undefined1 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 2);
      *puVar3 = 0;
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x40000000) != 0) {
      puVar4 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = 0;
    }
    return puVar4;
  }
  return puVar5;
}


