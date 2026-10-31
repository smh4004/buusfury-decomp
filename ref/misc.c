/* Ghidra reference decompilation of misc (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_03000000 @ 0x03000000 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000000(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_03004ac4;
  REG_IME._0_1_ = 0;
  DAT_03004ac4 = DAT_03004ac8;
  DAT_03004ac8 = uVar1;
  uVar2 = (uint)DAT_03004aa1;
  DAT_03004aa1 = 0;
  REG_IME._0_1_ = 1;
  return uVar2;
}


/* Wfz_Decompress @ 0x03000040 */

/* WARNING: Removing unreachable block (ram,0x0300016c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Wfz_Decompress(int a0,int a1,int a2,int a3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint uVar6;
  uint unaff_r7;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar12 = CONCAT44(a1,a0);
  iVar8 = 0;
  uVar9 = 1;
_03000064:
  while( true ) {
    puVar4 = (uint *)((ulonglong)uVar12 >> 0x20);
    uVar2 = (undefined4)uVar12;
    iVar8 = iVar8 + -1;
    puVar5 = puVar4;
    if (iVar8 < 0) {
      puVar5 = puVar4 + 1;
      unaff_r6 = *puVar4;
      iVar8 = 0x1f;
    }
    bVar10 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (bVar10) {
      uVar11 = sub_0300028C();
      unaff_r7 = unaff_r7 + unaff_r4;
      goto _03000060;
    }
    iVar8 = iVar8 + -1;
    puVar4 = puVar5;
    if (iVar8 < 0) {
      puVar4 = puVar5 + 1;
      unaff_r6 = *puVar5;
      iVar8 = 0x1f;
    }
    bVar10 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (bVar10) break;
    iVar8 = iVar8 + -1;
    puVar5 = puVar4;
    if (iVar8 < 0) {
      puVar5 = puVar4 + 1;
      unaff_r6 = *puVar4;
      iVar8 = 0x1f;
    }
    bVar10 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (!bVar10) {
      sub_0300028C(uVar2,puVar5);
      if (unaff_r7 == 0) {
        iVar8 = sub_0300028C();
        return iVar8;
      }
      uVar9 = unaff_r7;
      uVar11 = sub_0300028C();
      iVar7 = unaff_r7 + 2;
      goto joined_r0x03000260;
    }
    uVar11 = sub_0300028C(uVar2,puVar5);
    puVar5 = (uint *)((ulonglong)uVar11 >> 0x20);
    unaff_r7 = unaff_r7 - 1;
    if (unaff_r7 == 0) {
_03000060:
      uVar12 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),(undefined1 *)uVar11 + 1);
      *(undefined1 *)uVar11 = (char)unaff_r7;
    }
    else {
      if (-1 < (int)unaff_r7) {
        unaff_r7 = (uint)*(byte *)((int)uVar11 - unaff_r7);
        goto _03000060;
      }
      iVar8 = iVar8 + -1;
      puVar4 = puVar5;
      if (iVar8 < 0) {
        puVar4 = puVar5 + 1;
        unaff_r6 = *puVar5;
        iVar8 = 0x1f;
      }
      bVar10 = CARRY4(unaff_r6,unaff_r6);
      unaff_r6 = unaff_r6 * 2;
      if (bVar10) {
        do {
          iVar7 = 0x100;
          do {
            uVar12 = sub_0300028C();
            puVar5 = (uint *)((ulonglong)uVar12 >> 0x20);
            *(undefined1 *)uVar12 = (char)unaff_r7;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar8 = iVar8 + -1;
          puVar4 = puVar5;
          if (iVar8 < 0) {
            puVar4 = puVar5 + 1;
            unaff_r6 = *puVar5;
            iVar8 = 0x1f;
          }
          uVar12 = CONCAT44(puVar4,(undefined1 *)uVar12 + 1);
          bVar10 = CARRY4(unaff_r6,unaff_r6);
          unaff_r6 = unaff_r6 * 2;
        } while (bVar10);
      }
      else {
        iVar8 = iVar8 + -1;
        puVar5 = puVar4;
        if (iVar8 < 0) {
          puVar5 = puVar4 + 1;
          unaff_r6 = *puVar4;
          iVar8 = 0x1f;
        }
        uVar12 = CONCAT44(puVar5,(int)uVar11);
        bVar10 = CARRY4(unaff_r6,unaff_r6);
        unaff_r6 = unaff_r6 * 2;
        unaff_r4 = 0;
        if (!bVar10) {
          uVar12 = sub_0300028C();
          unaff_r4 = unaff_r7;
        }
      }
    }
  }
  iVar7 = 1;
  do {
    iVar8 = iVar8 + -1;
    puVar5 = puVar4;
    if (iVar8 < 0) {
      puVar5 = puVar4 + 1;
      unaff_r6 = *puVar4;
      iVar8 = 0x1f;
    }
    uVar6 = unaff_r6 * 2;
    iVar7 = iVar7 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
    iVar8 = iVar8 + -1;
    puVar4 = puVar5;
    if (iVar8 < 0) {
      puVar4 = puVar5 + 1;
      uVar6 = *puVar5;
      iVar8 = 0x1f;
    }
    unaff_r6 = uVar6 * 2;
  } while (CARRY4(uVar6,uVar6));
  if (iVar7 == 2) {
    iVar7 = 1;
    do {
      iVar8 = iVar8 + -1;
      puVar5 = puVar4;
      if (iVar8 < 0) {
        puVar5 = puVar4 + 1;
        unaff_r6 = *puVar4;
        iVar8 = 0x1f;
      }
      uVar6 = unaff_r6 * 2;
      iVar7 = iVar7 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
      iVar8 = iVar8 + -1;
      puVar4 = puVar5;
      if (iVar8 < 0) {
        puVar4 = puVar5 + 1;
        uVar6 = *puVar5;
        iVar8 = 0x1f;
      }
      uVar11 = CONCAT44(puVar4,uVar2);
      unaff_r6 = uVar6 * 2;
    } while (CARRY4(uVar6,uVar6));
joined_r0x03000260:
    uVar12 = uVar11;
    if (uVar9 == 1) {
      uVar1 = ((undefined1 *)uVar11)[-1];
      puVar3 = (undefined1 *)uVar11;
      do {
        uVar12 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),puVar3 + 1);
        *puVar3 = uVar1;
        iVar7 = iVar7 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar7 != 0);
      goto _03000064;
    }
  }
  else {
    uVar12 = sub_0300028C();
    puVar5 = (uint *)((ulonglong)uVar12 >> 0x20);
    uVar2 = (undefined4)uVar12;
    uVar9 = unaff_r7 + (iVar7 + -3) * 0x100;
    iVar7 = 1;
    do {
      iVar8 = iVar8 + -1;
      puVar4 = puVar5;
      if (iVar8 < 0) {
        puVar4 = puVar5 + 1;
        unaff_r6 = *puVar5;
        iVar8 = 0x1f;
      }
      uVar6 = unaff_r6 * 2;
      iVar7 = iVar7 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
      iVar8 = iVar8 + -1;
      puVar5 = puVar4;
      if (iVar8 < 0) {
        puVar5 = puVar4 + 1;
        uVar6 = *puVar4;
        iVar8 = 0x1f;
      }
      uVar11 = CONCAT44(puVar5,uVar2);
      uVar12 = CONCAT44(puVar5,uVar2);
      unaff_r6 = uVar6 * 2;
    } while (CARRY4(uVar6,uVar6));
    if (uVar9 < 0x10000) {
      if (uVar9 < 0x37ff) {
        if (uVar9 < 0x27f) {
          if (uVar9 < 0x80) {
            iVar7 = iVar7 + 4;
            goto joined_r0x03000260;
          }
        }
        else {
          iVar7 = iVar7 + 1;
          uVar12 = CONCAT44(puVar5,uVar2);
        }
      }
      else {
        iVar7 = iVar7 + 2;
        uVar12 = CONCAT44(puVar5,uVar2);
      }
    }
    else {
      iVar7 = iVar7 + 3;
      uVar12 = CONCAT44(puVar5,uVar2);
    }
  }
  do {
    puVar3 = (undefined1 *)uVar12;
    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),puVar3 + 1);
    *puVar3 = puVar3[-uVar9];
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  goto _03000064;
}


/* sub_0300028C @ 0x0300028C */

void sub_0300028C(void)

{
  uint unaff_r8;
  uint unaff_r10;
  uint uVar1;
  
  if (unaff_r10 == 0) {
    unaff_r10 = 0x20;
  }
  uVar1 = unaff_r8;
  if (unaff_r10 < unaff_r8) {
    uVar1 = unaff_r10;
  }
  if (unaff_r8 != uVar1) {
    return;
  }
  return;
}


/* sub_030002DC @ 0x030002DC */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_030002DC(int a0,int a1,int a2,int a3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    uVar2 = *(uint *)a1;
    uVar3 = uVar2 >> 0x18;
    if (uVar3 != 0) {
      uVar3 = (uint)*(byte *)(a2 + uVar3);
    }
    uVar4 = uVar2 >> 0x10 & 0xff;
    if (uVar4 != 0) {
      uVar4 = (uint)*(byte *)(a2 + uVar4);
    }
    uVar5 = uVar2 >> 8 & 0xff;
    if (uVar5 != 0) {
      uVar5 = (uint)*(byte *)(a2 + uVar5);
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 0) {
      uVar2 = (uint)*(byte *)(a2 + uVar2);
    }
    puVar1 = (uint *)(a0 + 4);
    *(uint *)a0 = uVar2 | (uVar5 | (uVar4 | uVar3 << 8) << 8) << 8;
    a3 = a3 + -4;
    a0 = (int)puVar1;
    a1 = (int)(a1 + 4);
  } while (a3 != 0);
  return (int)puVar1;
}


/* sub_03000388 @ 0x03000388 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000388(int a0,int a1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar1 = *(undefined4 **)(a0 + 0x24);
  iVar3 = *(int *)(a0 + 0x28);
  iVar4 = *(int *)(a0 + 0x2c);
  iVar5 = iVar3;
  puVar2 = puVar1;
  do {
    do {
      uVar8 = puVar1[1];
      puVar6 = (undefined4 *)((int)puVar1 + iVar3);
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      puVar6 = (undefined4 *)((int)puVar6 + iVar3);
      *(undefined4 *)a1 = *puVar1;
      *(undefined4 *)(a1 + 4) = uVar8;
      *(undefined4 *)(a1 + 8) = uVar9;
      *(undefined4 *)(a1 + 0xc) = uVar10;
      uVar8 = puVar6[1];
      puVar7 = (undefined4 *)((int)puVar6 + iVar3);
      uVar9 = *puVar7;
      uVar10 = puVar7[1];
      puVar7 = (undefined4 *)((int)puVar7 + iVar3);
      *(undefined4 *)(a1 + 0x10) = *puVar6;
      *(undefined4 *)(a1 + 0x14) = uVar8;
      *(undefined4 *)(a1 + 0x18) = uVar9;
      *(undefined4 *)(a1 + 0x1c) = uVar10;
      uVar8 = puVar7[1];
      puVar6 = (undefined4 *)((int)puVar7 + iVar3);
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      puVar6 = (undefined4 *)((int)puVar6 + iVar3);
      *(undefined4 *)(a1 + 0x20) = *puVar7;
      *(undefined4 *)(a1 + 0x24) = uVar8;
      *(undefined4 *)(a1 + 0x28) = uVar9;
      *(undefined4 *)(a1 + 0x2c) = uVar10;
      uVar8 = puVar6[1];
      uVar9 = *(undefined4 *)((int)puVar6 + iVar3);
      uVar10 = ((undefined4 *)((int)puVar6 + iVar3))[1];
      *(undefined4 *)(a1 + 0x30) = *puVar6;
      *(undefined4 *)(a1 + 0x34) = uVar8;
      *(undefined4 *)(a1 + 0x38) = uVar9;
      *(undefined4 *)(a1 + 0x3c) = uVar10;
      a1 = a1 + 0x40;
      puVar1 = puVar1 + 2;
      iVar5 = iVar5 + -8;
    } while (iVar5 != 0);
    puVar1 = puVar2 + iVar3 * 2;
    iVar4 = iVar4 + -8;
    iVar5 = iVar3;
    puVar2 = puVar1;
  } while (iVar4 != 0);
  return a0;
}


/* sub_030004C0 @ 0x030004C0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_030004C0(int a0,int a1,int a2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar8 = *(int *)(a0 + 0x28);
  puVar6 = (undefined4 *)(iVar8 * *(int *)(a2 + 4) + *(int *)(a0 + 0x24) + *(int *)a2);
  iVar9 = *(int *)(a2 + 0xc) - *(int *)(a2 + 4);
  iVar10 = *(int *)(a2 + 8) - *(int *)a2;
  iVar3 = iVar10;
  puVar7 = puVar6;
  do {
    do {
      uVar4 = puVar6[1];
      puVar1 = (undefined4 *)((int)puVar6 + iVar8);
      uVar5 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined4 *)((int)puVar1 + iVar8);
      *(undefined4 *)a1 = *puVar6;
      *(undefined4 *)(a1 + 4) = uVar4;
      *(undefined4 *)(a1 + 8) = uVar5;
      *(undefined4 *)(a1 + 0xc) = uVar11;
      uVar4 = puVar1[1];
      puVar2 = (undefined4 *)((int)puVar1 + iVar8);
      uVar5 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined4 *)((int)puVar2 + iVar8);
      *(undefined4 *)(a1 + 0x10) = *puVar1;
      *(undefined4 *)(a1 + 0x14) = uVar4;
      *(undefined4 *)(a1 + 0x18) = uVar5;
      *(undefined4 *)(a1 + 0x1c) = uVar11;
      uVar4 = puVar2[1];
      puVar1 = (undefined4 *)((int)puVar2 + iVar8);
      uVar5 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined4 *)((int)puVar1 + iVar8);
      *(undefined4 *)(a1 + 0x20) = *puVar2;
      *(undefined4 *)(a1 + 0x24) = uVar4;
      *(undefined4 *)(a1 + 0x28) = uVar5;
      *(undefined4 *)(a1 + 0x2c) = uVar11;
      uVar4 = puVar1[1];
      puVar2 = (undefined4 *)((int)puVar1 + iVar8);
      uVar5 = *puVar2;
      uVar11 = puVar2[1];
      *(undefined4 *)(a1 + 0x30) = *puVar1;
      *(undefined4 *)(a1 + 0x34) = uVar4;
      *(undefined4 *)(a1 + 0x38) = uVar5;
      *(undefined4 *)(a1 + 0x3c) = uVar11;
      a1 = a1 + 0x40;
      puVar6 = puVar6 + 2;
      iVar3 = iVar3 + -8;
    } while (iVar3 != 0);
    puVar6 = puVar7 + iVar8 * 2;
    iVar9 = iVar9 + -8;
    iVar3 = iVar10;
    puVar7 = puVar6;
  } while (iVar9 != 0);
  return (int)puVar2 + iVar8;
}


/* sub_03000560 @ 0x03000560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000560(int a0,int a1,int a2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar13 = *(int *)a1;
  iVar14 = *(int *)(a1 + 4);
  iVar15 = *(int *)(a1 + 8);
  lVar1 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x18) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0xc) + (longlong)*(int *)a2 * (longlong)iVar13;
  lVar2 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x1c) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0x10) +
          (longlong)*(int *)(a2 + 4) * (longlong)iVar13;
  lVar3 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x20) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0x14) +
          (longlong)*(int *)(a2 + 8) * (longlong)iVar13;
  iVar13 = *(int *)(a1 + 0xc);
  iVar14 = *(int *)(a1 + 0x10);
  iVar15 = *(int *)(a1 + 0x14);
  lVar4 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x18) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0xc) + (longlong)*(int *)a2 * (longlong)iVar13;
  lVar5 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x1c) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0x10) +
          (longlong)*(int *)(a2 + 4) * (longlong)iVar13;
  lVar6 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x20) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0x14) +
          (longlong)*(int *)(a2 + 8) * (longlong)iVar13;
  iVar13 = *(int *)(a1 + 0x18);
  iVar14 = *(int *)(a1 + 0x1c);
  iVar15 = *(int *)(a1 + 0x20);
  lVar7 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x18) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0xc) + (longlong)*(int *)a2 * (longlong)iVar13;
  lVar8 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x1c) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0x10) +
          (longlong)*(int *)(a2 + 4) * (longlong)iVar13;
  lVar9 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x20) +
          (longlong)iVar14 * (longlong)*(int *)(a2 + 0x14) +
          (longlong)*(int *)(a2 + 8) * (longlong)iVar13;
  iVar13 = *(int *)(a1 + 0x24);
  iVar14 = *(int *)(a1 + 0x28);
  iVar15 = *(int *)(a1 + 0x2c);
  lVar10 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x18) +
           (longlong)iVar14 * (longlong)*(int *)(a2 + 0xc) + (longlong)*(int *)a2 * (longlong)iVar13
  ;
  lVar11 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x1c) +
           (longlong)iVar14 * (longlong)*(int *)(a2 + 0x10) +
           (longlong)*(int *)(a2 + 4) * (longlong)iVar13;
  lVar12 = (longlong)iVar15 * (longlong)*(int *)(a2 + 0x20) +
           (longlong)iVar14 * (longlong)*(int *)(a2 + 0x14) +
           (longlong)*(int *)(a2 + 8) * (longlong)iVar13;
  iVar13 = *(int *)(a2 + 0x24);
  iVar14 = *(int *)(a2 + 0x28);
  iVar15 = *(int *)(a2 + 0x2c);
  *(uint *)a0 = ((uint)lVar1 >> 10) + (int)((ulonglong)lVar1 >> 0x20) * 0x400000;
  *(uint *)(a0 + 4) = ((uint)lVar2 >> 10) + (int)((ulonglong)lVar2 >> 0x20) * 0x400000;
  *(uint *)(a0 + 8) = ((uint)lVar3 >> 10) + (int)((ulonglong)lVar3 >> 0x20) * 0x400000;
  *(uint *)(a0 + 0xc) = ((uint)lVar4 >> 10) + (int)((ulonglong)lVar4 >> 0x20) * 0x400000;
  *(uint *)(a0 + 0x10) = ((uint)lVar5 >> 10) + (int)((ulonglong)lVar5 >> 0x20) * 0x400000;
  *(uint *)(a0 + 0x14) = ((uint)lVar6 >> 10) + (int)((ulonglong)lVar6 >> 0x20) * 0x400000;
  *(uint *)(a0 + 0x18) = ((uint)lVar7 >> 10) + (int)((ulonglong)lVar7 >> 0x20) * 0x400000;
  *(uint *)(a0 + 0x1c) = ((uint)lVar8 >> 10) + (int)((ulonglong)lVar8 >> 0x20) * 0x400000;
  *(uint *)(a0 + 0x20) = ((uint)lVar9 >> 10) + (int)((ulonglong)lVar9 >> 0x20) * 0x400000;
  *(uint *)(a0 + 0x24) = iVar13 + ((uint)lVar10 >> 10) + (int)((ulonglong)lVar10 >> 0x20) * 0x400000
  ;
  *(uint *)(a0 + 0x28) = iVar14 + ((uint)lVar11 >> 10) + (int)((ulonglong)lVar11 >> 0x20) * 0x400000
  ;
  *(uint *)(a0 + 0x2c) = iVar15 + ((uint)lVar12 >> 10) + (int)((ulonglong)lVar12 >> 0x20) * 0x400000
  ;
  return a0 + 0x30;
}


/* sub_03000700 @ 0x03000700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000700(int a0,int a1,int a2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)a1;
  iVar5 = *(int *)(a1 + 4);
  iVar6 = *(int *)(a1 + 8);
  lVar1 = (longlong)*(int *)(a2 + 0x18) * (longlong)iVar6 +
          (longlong)*(int *)(a2 + 0xc) * (longlong)iVar5 + (longlong)iVar4 * (longlong)*(int *)a2;
  lVar2 = (longlong)*(int *)(a2 + 0x1c) * (longlong)iVar6 +
          (longlong)*(int *)(a2 + 0x10) * (longlong)iVar5 +
          (longlong)iVar4 * (longlong)*(int *)(a2 + 4);
  lVar3 = (longlong)*(int *)(a2 + 0x20) * (longlong)iVar6 +
          (longlong)*(int *)(a2 + 0x14) * (longlong)iVar5 +
          (longlong)iVar4 * (longlong)*(int *)(a2 + 8);
  iVar4 = *(int *)(a2 + 0x28);
  iVar5 = *(int *)(a2 + 0x2c);
  *(uint *)a0 = *(int *)(a2 + 0x24) + ((uint)lVar1 >> 10) +
                (int)((ulonglong)lVar1 >> 0x20) * 0x400000;
  *(uint *)(a0 + 4) = iVar4 + ((uint)lVar2 >> 10) + (int)((ulonglong)lVar2 >> 0x20) * 0x400000;
  *(uint *)(a0 + 8) = iVar5 + ((uint)lVar3 >> 10) + (int)((ulonglong)lVar3 >> 0x20) * 0x400000;
  return a0;
}


/* sub_03000768 @ 0x03000768 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000768(int a0,int a1,int a2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (0x1f < a2) {
    iVar3 = a2 + -0x20;
    do {
      a2 = iVar3;
      uVar4 = *(undefined4 *)a1;
      uVar5 = *(undefined4 *)(a1 + 4);
      uVar6 = *(undefined4 *)(a1 + 8);
      uVar7 = *(undefined4 *)(a1 + 0xc);
      uVar8 = *(undefined4 *)(a1 + 0x10);
      uVar9 = *(undefined4 *)(a1 + 0x14);
      uVar10 = *(undefined4 *)(a1 + 0x18);
      uVar11 = *(undefined4 *)(a1 + 0x1c);
      a1 = a1 + 0x20;
      *(undefined4 *)a0 = uVar4;
      *(undefined4 *)(a0 + 4) = uVar5;
      *(undefined4 *)(a0 + 8) = uVar6;
      *(undefined4 *)(a0 + 0xc) = uVar7;
      *(undefined4 *)(a0 + 0x10) = uVar8;
      *(undefined4 *)(a0 + 0x14) = uVar9;
      *(undefined4 *)(a0 + 0x18) = uVar10;
      *(undefined4 *)(a0 + 0x1c) = uVar11;
      a0 = a0 + 0x20;
      iVar3 = a2 + -0x20;
    } while (a2 + -0x20 != 0 && 0x1f < a2);
    if (a2 == 0) {
      return (int)(undefined4 *)a0;
    }
  }
  do {
    puVar2 = (undefined4 *)(a0 + 4);
    *(undefined4 *)a0 = *(undefined4 *)a1;
    iVar3 = a2 + -4;
    bVar1 = 3 < a2;
    a0 = (int)puVar2;
    a1 = (int)(a1 + 4);
    a2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return (int)puVar2;
}


/* sub_030007A8 @ 0x030007A8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_030007A8(int a0,int a1,int a2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (0x1f < a2) {
    iVar3 = a2 + -0x20;
    do {
      a2 = iVar3;
      *(int *)a0 = a1;
      *(int *)(a0 + 4) = a1;
      *(int *)(a0 + 8) = a1;
      *(int *)(a0 + 0xc) = a1;
      *(int *)(a0 + 0x10) = a1;
      *(int *)(a0 + 0x14) = a1;
      *(int *)(a0 + 0x18) = a1;
      *(int *)(a0 + 0x1c) = a1;
      a0 = a0 + 0x20;
      iVar3 = a2 + -0x20;
    } while (a2 + -0x20 != 0 && 0x1f < a2);
    if (a2 == 0) {
      return (int)(int *)a0;
    }
  }
  do {
    piVar2 = (int *)(a0 + 4);
    *(int *)a0 = a1;
    iVar3 = a2 + -4;
    bVar1 = 3 < a2;
    a0 = (int)piVar2;
    a2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return (int)piVar2;
}


/* sub_030007FC @ 0x030007FC */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_030007FC(int a0,int a1,int a2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar1 = (undefined2 *)a0;
  puVar2 = (undefined2 *)a1;
  iVar3 = a2;
  switch(0x10U - a2 & 0xe) {
  case 2:
    goto switchD_03000804_caseD_2;
  case 4:
    goto switchD_03000804_caseD_4;
  case 6:
    goto switchD_03000804_caseD_6;
  case 8:
    goto switchD_03000804_caseD_8;
  case 10:
    goto switchD_03000804_caseD_a;
  case 0xc:
    goto switchD_03000804_caseD_c;
  case 0xe:
    goto switchD_03000804_caseD_e;
  }
  do {
    puVar2 = (undefined2 *)(a1 + 2);
    puVar1 = (undefined2 *)(a0 + 2);
    *(undefined2 *)a0 = *(undefined2 *)a1;
switchD_03000804_caseD_2:
    a1 = (int)(puVar2 + 1);
    a0 = (int)(puVar1 + 1);
    *puVar1 = *puVar2;
switchD_03000804_caseD_4:
    puVar2 = (undefined2 *)(a1 + 2);
    puVar1 = (undefined2 *)(a0 + 2);
    *(undefined2 *)a0 = *(undefined2 *)a1;
switchD_03000804_caseD_6:
    a1 = (int)(puVar2 + 1);
    a0 = (int)(puVar1 + 1);
    *puVar1 = *puVar2;
switchD_03000804_caseD_8:
    puVar2 = (undefined2 *)(a1 + 2);
    puVar1 = (undefined2 *)(a0 + 2);
    *(undefined2 *)a0 = *(undefined2 *)a1;
switchD_03000804_caseD_a:
    a1 = (int)(puVar2 + 1);
    a0 = (int)(puVar1 + 1);
    *puVar1 = *puVar2;
switchD_03000804_caseD_c:
    puVar2 = (undefined2 *)(a1 + 2);
    puVar1 = (undefined2 *)(a0 + 2);
    *(undefined2 *)a0 = *(undefined2 *)a1;
    iVar3 = a2;
switchD_03000804_caseD_e:
    a1 = (int)(puVar2 + 1);
    a0 = (int)(puVar1 + 1);
    *puVar1 = *puVar2;
    a2 = iVar3 + -0x10;
  } while (a2 != 0 && 0xf < iVar3);
  return a0;
}


/* sub_03000858 @ 0x03000858 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000858(int a0,int a1,int a2)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  
  do {
    puVar2 = (undefined2 *)(a0 + 2);
    *(short *)a0 = (short)a1;
    iVar3 = a2 + -2;
    bVar1 = 1 < a2;
    a0 = (int)puVar2;
    a2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return (int)puVar2;
}


/* sub_03000A4C @ 0x03000A4C */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000A4C(int a0,int a1,int a2,int a3)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar3 = *(int *)a2;
    iVar5 = *(int *)(a2 + 4);
    *(int *)a2 = 0;
    *(int *)(a2 + 4) = 0;
    a2 = a2 + 8;
    iVar4 = iVar3 >> 0x16;
    iVar6 = iVar5 >> 0x16;
    iVar3 = (iVar3 << 0x10) >> 0x16;
    iVar5 = (iVar5 << 0x10) >> 0x16;
    if (0x7f < iVar3) {
      iVar3 = 0x7f;
    }
    if (iVar3 + 0x80 < 0 != SCARRY4(iVar3,0x80)) {
      iVar3 = -0x80;
    }
    if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    if (iVar4 + 0x80 < 0 != SCARRY4(iVar4,0x80)) {
      iVar4 = -0x80;
    }
    if (0x7f < iVar5) {
      iVar5 = 0x7f;
    }
    if (iVar5 + 0x80 < 0 != SCARRY4(iVar5,0x80)) {
      iVar5 = -0x80;
    }
    if (0x7f < iVar6) {
      iVar6 = 0x7f;
    }
    if (iVar6 + 0x80 < 0 != SCARRY4(iVar6,0x80)) {
      iVar6 = -0x80;
    }
    puVar2 = (ushort *)(a0 + 2);
    *(ushort *)a0 = (ushort)iVar3 & 0xff | (ushort)(iVar5 << 8);
    *(ushort *)a1 = (ushort)iVar4 & 0xff | (ushort)(iVar6 << 8);
    iVar4 = a3 + -2;
    bVar1 = 1 < a3;
    a0 = (int)puVar2;
    a1 = (int)(a1 + 2);
    a3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return (int)puVar2;
}


/* sub_03000CA0 @ 0x03000CA0 */

/* WARNING: Removing unreachable block (ram,0x03000dd4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000CA0(int a0,int a1,int a2,int a3)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint unaff_r4;
  uint unaff_r6;
  uint uVar7;
  uint unaff_r7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = CONCAT44(a1,a0);
  iVar9 = 0;
  uVar10 = 1;
_03000CC8:
  while( true ) {
    puVar5 = (uint *)((ulonglong)uVar13 >> 0x20);
    uVar3 = (undefined4)uVar13;
    iVar9 = iVar9 + -1;
    puVar6 = puVar5;
    if (iVar9 < 0) {
      puVar6 = puVar5 + 1;
      unaff_r6 = *puVar5;
      iVar9 = 0x1f;
    }
    bVar11 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (bVar11) {
      uVar12 = sub_03000EF4();
      unaff_r7 = (uint)*(byte *)(a2 + unaff_r7 + unaff_r4);
      goto _03000CC4;
    }
    iVar9 = iVar9 + -1;
    puVar5 = puVar6;
    if (iVar9 < 0) {
      puVar5 = puVar6 + 1;
      unaff_r6 = *puVar6;
      iVar9 = 0x1f;
    }
    bVar11 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (bVar11) break;
    iVar9 = iVar9 + -1;
    puVar6 = puVar5;
    if (iVar9 < 0) {
      puVar6 = puVar5 + 1;
      unaff_r6 = *puVar5;
      iVar9 = 0x1f;
    }
    bVar11 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (!bVar11) {
      sub_03000EF4(uVar3,puVar6);
      if (unaff_r7 == 0) {
        iVar9 = sub_03000EF4();
        return iVar9;
      }
      uVar10 = unaff_r7;
      uVar12 = sub_03000EF4();
      iVar8 = unaff_r7 + 2;
      goto joined_r0x03000ec8;
    }
    uVar12 = sub_03000EF4(uVar3,puVar6);
    puVar6 = (uint *)((ulonglong)uVar12 >> 0x20);
    unaff_r7 = unaff_r7 - 1;
    if (unaff_r7 == 0) {
_03000CC4:
      uVar13 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(undefined1 *)uVar12 + 1);
      *(undefined1 *)uVar12 = (char)unaff_r7;
    }
    else {
      if (-1 < (int)unaff_r7) {
        unaff_r7 = (uint)*(byte *)((int)uVar12 - unaff_r7);
        goto _03000CC4;
      }
      iVar9 = iVar9 + -1;
      puVar5 = puVar6;
      if (iVar9 < 0) {
        puVar5 = puVar6 + 1;
        unaff_r6 = *puVar6;
        iVar9 = 0x1f;
      }
      bVar11 = CARRY4(unaff_r6,unaff_r6);
      unaff_r6 = unaff_r6 * 2;
      if (bVar11) {
        do {
          iVar8 = 0x100;
          do {
            uVar13 = sub_03000EF4();
            puVar6 = (uint *)((ulonglong)uVar13 >> 0x20);
            pbVar1 = (byte *)(a2 + unaff_r7);
            unaff_r7 = (uint)*pbVar1;
            *(byte *)uVar13 = *pbVar1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          iVar9 = iVar9 + -1;
          puVar5 = puVar6;
          if (iVar9 < 0) {
            puVar5 = puVar6 + 1;
            unaff_r6 = *puVar6;
            iVar9 = 0x1f;
          }
          uVar13 = CONCAT44(puVar5,(byte *)uVar13 + 1);
          bVar11 = CARRY4(unaff_r6,unaff_r6);
          unaff_r6 = unaff_r6 * 2;
        } while (bVar11);
      }
      else {
        iVar9 = iVar9 + -1;
        puVar6 = puVar5;
        if (iVar9 < 0) {
          puVar6 = puVar5 + 1;
          unaff_r6 = *puVar5;
          iVar9 = 0x1f;
        }
        uVar13 = CONCAT44(puVar6,(int)uVar12);
        bVar11 = CARRY4(unaff_r6,unaff_r6);
        unaff_r6 = unaff_r6 * 2;
        unaff_r4 = 0;
        if (!bVar11) {
          uVar13 = sub_03000EF4();
          unaff_r4 = unaff_r7;
        }
      }
    }
  }
  iVar8 = 1;
  do {
    iVar9 = iVar9 + -1;
    puVar6 = puVar5;
    if (iVar9 < 0) {
      puVar6 = puVar5 + 1;
      unaff_r6 = *puVar5;
      iVar9 = 0x1f;
    }
    uVar7 = unaff_r6 * 2;
    iVar8 = iVar8 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
    iVar9 = iVar9 + -1;
    puVar5 = puVar6;
    if (iVar9 < 0) {
      puVar5 = puVar6 + 1;
      uVar7 = *puVar6;
      iVar9 = 0x1f;
    }
    unaff_r6 = uVar7 * 2;
  } while (CARRY4(uVar7,uVar7));
  if (iVar8 == 2) {
    iVar8 = 1;
    do {
      iVar9 = iVar9 + -1;
      puVar6 = puVar5;
      if (iVar9 < 0) {
        puVar6 = puVar5 + 1;
        unaff_r6 = *puVar5;
        iVar9 = 0x1f;
      }
      uVar7 = unaff_r6 * 2;
      iVar8 = iVar8 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
      iVar9 = iVar9 + -1;
      puVar5 = puVar6;
      if (iVar9 < 0) {
        puVar5 = puVar6 + 1;
        uVar7 = *puVar6;
        iVar9 = 0x1f;
      }
      uVar12 = CONCAT44(puVar5,uVar3);
      unaff_r6 = uVar7 * 2;
    } while (CARRY4(uVar7,uVar7));
joined_r0x03000ec8:
    uVar13 = uVar12;
    if (uVar10 == 1) {
      uVar2 = ((undefined1 *)uVar12)[-1];
      puVar4 = (undefined1 *)uVar12;
      do {
        uVar13 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),puVar4 + 1);
        *puVar4 = uVar2;
        iVar8 = iVar8 + -1;
        puVar4 = puVar4 + 1;
      } while (iVar8 != 0);
      goto _03000CC8;
    }
  }
  else {
    uVar13 = sub_03000EF4();
    puVar6 = (uint *)((ulonglong)uVar13 >> 0x20);
    uVar3 = (undefined4)uVar13;
    uVar10 = unaff_r7 + (iVar8 + -3) * 0x100;
    iVar8 = 1;
    do {
      iVar9 = iVar9 + -1;
      puVar5 = puVar6;
      if (iVar9 < 0) {
        puVar5 = puVar6 + 1;
        unaff_r6 = *puVar6;
        iVar9 = 0x1f;
      }
      uVar7 = unaff_r6 * 2;
      iVar8 = iVar8 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
      iVar9 = iVar9 + -1;
      puVar6 = puVar5;
      if (iVar9 < 0) {
        puVar6 = puVar5 + 1;
        uVar7 = *puVar5;
        iVar9 = 0x1f;
      }
      uVar12 = CONCAT44(puVar6,uVar3);
      uVar13 = CONCAT44(puVar6,uVar3);
      unaff_r6 = uVar7 * 2;
    } while (CARRY4(uVar7,uVar7));
    if (uVar10 < 0x10000) {
      if (uVar10 < 0x37ff) {
        if (uVar10 < 0x27f) {
          if (uVar10 < 0x80) {
            iVar8 = iVar8 + 4;
            goto joined_r0x03000ec8;
          }
        }
        else {
          iVar8 = iVar8 + 1;
          uVar13 = CONCAT44(puVar6,uVar3);
        }
      }
      else {
        iVar8 = iVar8 + 2;
        uVar13 = CONCAT44(puVar6,uVar3);
      }
    }
    else {
      iVar8 = iVar8 + 3;
      uVar13 = CONCAT44(puVar6,uVar3);
    }
  }
  do {
    puVar4 = (undefined1 *)uVar13;
    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),puVar4 + 1);
    *puVar4 = puVar4[-uVar10];
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  goto _03000CC8;
}


/* sub_03000EF4 @ 0x03000EF4 */

void sub_03000EF4(void)

{
  uint unaff_r8;
  uint unaff_r10;
  uint uVar1;
  
  if (unaff_r10 == 0) {
    unaff_r10 = 0x20;
  }
  uVar1 = unaff_r8;
  if (unaff_r10 < unaff_r8) {
    uVar1 = unaff_r10;
  }
  if (unaff_r8 != uVar1) {
    return;
  }
  return;
}


/* RomHeader @ 0x08000000 */

void RomHeader(void)

{
  REG_WAITCNT = 0x4014;
  DAT_03007dfc = 0;
  REG_DMA3SAD = 0x3007dfc;
  REG_DMA3DAD = 0x3001004;
  REG_DMA3CNT = 0x850010be;
  REG_DMA3SAD = 0x87b79a4;
  REG_DMA3DAD = 0x3000000;
  REG_DMA3CNT = 0x84000401;
  sub_08046AEC();
  return;
}


/* _start @ 0x080000C0 */

void _start(void)

{
  REG_WAITCNT = 0x4014;
  DAT_03007dfc = 0;
  REG_DMA3SAD = 0x3007dfc;
  REG_DMA3DAD = 0x3001004;
  REG_DMA3CNT = 0x850010be;
  REG_DMA3SAD = 0x87b79a4;
  REG_DMA3DAD = 0x3000000;
  REG_DMA3CNT = 0x84000401;
  sub_08046AEC();
  return;
}


/* FUN_08056d80 @ 0x08056D80 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08056d80(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_08077eba @ 0x08077EBA */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08077eba(uint param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r5;
  uint unaff_r7;
  int unaff_r9;
  uint in_r12;
  int in_lr;
  bool in_ZR;
  undefined1 in_CY;
  bool in_OV;
  bool bVar4;
  bool bVar5;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr12;
  
  if (!in_OV) {
    coprocessor_moveto(0,5,3,param_1,in_cr4,in_cr8);
  }
  if (in_ZR) {
    in_CY = 0;
    param_1 = (uint)&stack0x00000000 & 0x70000;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_2 + 0x880;
    in_CY = (byte)(param_3 >> 0x14) & 1;
    in_ZR = (param_2 & param_3 << 0xc) == 0;
  }
  if (!in_OV) {
    *(char *)(unaff_r7 * -0x10000 + 0x8077ed6) = (char)unaff_r7;
    param_1 = unaff_r7;
  }
  bVar4 = (bool)in_CY;
  if (in_ZR) {
    uVar3 = unaff_r9 - (param_1 * 0x10000 + (uint)!(bool)in_CY);
    param_1 = unaff_r9 >> (uVar3 & 0xff);
    bVar4 = uVar3 < param_1 || param_1 - uVar3 < (uint)(byte)in_CY;
    in_OV = SBORROW4(param_1,uVar3) != SBORROW4(param_1 - uVar3,(uint)!(bool)in_CY);
    param_1 = param_1 - (uVar3 + !(bool)in_CY);
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    coprocessor_function(0,0xc,3,in_cr0,in_cr0,in_cr8);
  }
  if (in_ZR) {
    param_1 = param_1 & unaff_r7 << 0x10;
  }
  if (!in_OV) {
    coprocessor_function(0,3,0,in_cr0,in_cr8,in_cr0);
  }
  if (in_ZR) {
    param_1 = unaff_r7 * 0x10000 - (unaff_r5 + (uint)!bVar4);
  }
  if (!in_OV) {
    coprocessor_function(0,5,0,in_cr0,in_cr4,in_cr1);
  }
  bVar5 = bVar4;
  if (in_ZR) {
    uVar3 = unaff_r7 * 0x10000;
    uVar2 = in_r12 + unaff_r7 * -0x10000;
    bVar5 = uVar3 < in_r12 || uVar2 < bVar4;
    in_OV = SBORROW4(in_r12,uVar3) != SBORROW4(uVar2,(uint)!bVar4);
    param_1 = in_r12 - (uVar3 + !bVar4);
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    coprocessor_function(0,7,0,in_cr0,in_cr0,in_cr1);
  }
  if (in_ZR) {
    param_1 = unaff_r7 * 0x10000 - (int)(&stack0x00000000 + !bVar5);
  }
  if (!in_OV) {
    coprocessor_function(0,9,0,in_cr0,in_cr0,in_cr1);
  }
  bVar4 = bVar5;
  if (in_ZR) {
    puVar1 = (undefined1 *)(unaff_r7 * 0x10000);
    bVar4 = puVar1 < &stack0x00000000 ||
            &stack0x00000000 + unaff_r7 * -0x10000 < (undefined1 *)(uint)bVar5;
    in_OV = SBORROW4((int)&stack0x00000000,(int)puVar1) !=
            SBORROW4((int)(&stack0x00000000 + unaff_r7 * -0x10000),(uint)!bVar5);
    param_1 = (int)&stack0x00000000 - (int)(puVar1 + !bVar5);
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    coprocessor_function(0,10,0,in_cr0,in_cr12,in_cr1);
  }
  if (in_ZR) {
    param_1 = unaff_r7 * 0x10000 - (in_lr + (uint)!bVar4);
  }
  if (!in_OV) {
    coprocessor_function(0,0xc,0,in_cr0,in_cr12,in_cr1);
  }
  *(uint *)(param_1 + unaff_r7 * -0x10000) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


