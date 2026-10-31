/* Ghidra reference decompilation of code_08047A88 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08047A88 @ 0x08047A88 */

int sub_08047A88(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar15 = CONCAT44(param_2,param_1);
  uVar6 = param_2 & 0x7fffffff;
  bVar12 = SCARRY4(uVar6,-0x40000000);
  bVar9 = (int)(uVar6 + 0xc0000000) < 0;
  if (bVar9 == bVar12) {
    bVar12 = SBORROW4(uVar6 + 0xc0000000,0x4100000);
    bVar9 = (int)(uVar6 + 0xbbf00000) < 0;
  }
  if (bVar9 == bVar12) {
    bVar13 = SCARRY4(uVar6,-0x70000000);
    iVar7 = uVar6 + 0x90000000;
    bVar9 = iVar7 < 0;
    bVar12 = uVar6 == 0x70000000;
    if (bVar9 == bVar13) {
      bVar13 = SBORROW4(iVar7,0xff00000);
      bVar9 = (int)(uVar6 + 0x80100000) < 0;
      bVar12 = iVar7 == 0xff00000;
    }
    if ((bVar12 || bVar9 != bVar13) && ((!bVar12 || (param_1 == 0)))) {
      piVar2 = (int *)&UNK_08047d54;
      if ((int)param_2 < 1) {
        piVar2 = (int *)&UNK_08047d5c;
      }
      return *piVar2;
    }
    iVar7 = sub_080534A8(param_1,param_2,param_1,param_2);
    return iVar7;
  }
  bVar12 = SCARRY4(uVar6,-0x3c000000);
  bVar9 = (int)(uVar6 + 0xc4000000) < 0;
  if (bVar9 == bVar12) {
    bVar12 = SBORROW4(uVar6 + 0xc4000000,0x3dc0000);
    bVar9 = (int)(uVar6 + 0xc0240000) < 0;
  }
  if (bVar9 != bVar12) {
    uVar11 = 0x2fffffff < uVar6;
    bVar12 = SCARRY4(uVar6,-0x30000000);
    uVar8 = uVar6 + 0xd0000000;
    bVar9 = (int)uVar8 < 0;
    uVar10 = uVar6 == 0x30000000;
    if (bVar9 == bVar12) {
      uVar11 = 0xe1fffff < uVar8;
      bVar12 = SBORROW4(uVar8,0xe200000);
      bVar9 = (int)(uVar6 + 0xc1e00000) < 0;
      uVar10 = uVar8 == 0xe200000;
    }
    if (bVar9 != bVar12) {
      uVar14 = sub_080534A8(param_1,param_2,0x8800759c,0x7e37e43c);
      sub_08054058((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,0x3ff00000);
      if ((bool)uVar11 && !(bool)uVar10) {
        return param_1;
      }
    }
    iVar7 = -1;
    goto _08047C48;
  }
  param_2 = param_2 & 0x7fffffff;
  bVar12 = SCARRY4(uVar6,-0x3f000000);
  bVar9 = (int)(uVar6 + 0xc1000000) < 0;
  if (bVar9 == bVar12) {
    bVar12 = SBORROW4(uVar6 + 0xc1000000,0xf30000);
    bVar9 = (int)(uVar6 + 0xc00d0000) < 0;
  }
  if (bVar9 == bVar12) {
    bVar12 = SCARRY4(uVar6,-0x40000000);
    bVar9 = (int)(uVar6 + 0xc0000000) < 0;
    if (bVar9 == bVar12) {
      bVar12 = SBORROW4(uVar6 + 0xc0000000,0x38000);
      bVar9 = (int)(uVar6 + 0xbffc8000) < 0;
    }
    if (bVar9 != bVar12) {
      iVar7 = 2;
      uVar15 = sub_080536E0(param_1,param_2,0,0x3ff80000,param_3,param_4);
      uVar14 = sub_08054160(param_1,param_2,0,0x3ff80000);
      param_2 = (uint)((ulonglong)uVar14 >> 0x20);
      param_1 = (int)uVar14;
      goto _08047C30;
    }
    uVar15 = 0xbff0000000000000;
    iVar7 = 3;
  }
  else {
    bVar12 = SCARRY4(uVar6,-0x3f000000);
    bVar9 = (int)(uVar6 + 0xc1000000) < 0;
    if (bVar9 == bVar12) {
      bVar12 = SBORROW4(uVar6 + 0xc1000000,0xe60000);
      bVar9 = (int)(uVar6 + 0xc01a0000) < 0;
    }
    if (bVar9 == bVar12) {
      iVar7 = 1;
      uVar15 = sub_080536E0(param_1,param_2,0,0x3ff00000,param_3,param_4);
_08047C30:
      uVar14 = sub_080534A8(param_1,param_2,0,0x3ff00000);
      param_2 = (uint)((ulonglong)uVar14 >> 0x20);
      param_1 = (int)uVar14;
    }
    else {
      iVar7 = 0;
      uVar15 = sub_08054160(param_1,param_2,0,0x40000000);
      uVar15 = sub_080536E0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0,0x3ff00000);
      uVar14 = sub_080534A8(param_1,param_2,0,0x40000000);
      param_2 = (uint)((ulonglong)uVar14 >> 0x20);
      param_1 = (int)uVar14;
    }
  }
  uVar15 = sub_08053A20(param_1,param_2,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
_08047C48:
  uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar5 = (undefined4)uVar15;
  uVar15 = sub_08054160(uVar5,uVar4,uVar5,uVar4);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar17 = (undefined4)uVar15;
  uVar15 = sub_08054160(uVar17,uVar16,uVar17,uVar16);
  uVar3 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar1 = (undefined4)uVar15;
  uVar15 = sub_08047D9C(&DAT_087b7800,6,uVar1,uVar3);
  uVar15 = sub_08054160((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar17,uVar16);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar14 = sub_08047D9C(&DAT_087b77d8,5,uVar1,uVar3);
  uVar14 = sub_08054160((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar1,uVar3);
  uVar1 = (undefined4)((ulonglong)uVar14 >> 0x20);
  if (iVar7 < 0) {
    uVar15 = sub_080534A8((int)uVar15,uVar17,(int)uVar14,uVar1);
    uVar15 = sub_08054160((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar5,uVar4);
    iVar7 = sub_08053698((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar5,uVar4);
  }
  else {
    uVar15 = sub_080534A8((int)uVar15,uVar17,(int)uVar14,uVar1);
    uVar15 = sub_08054160((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar5,uVar4);
    uVar15 = sub_080536E0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                          *(undefined4 *)(&DAT_087b77b8 + iVar7 * 8),
                          *(undefined4 *)(&DAT_087b77bc + iVar7 * 8));
    uVar15 = sub_080536E0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar5,uVar4);
    iVar7 = sub_08053698((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                         *(undefined4 *)(&DAT_087b7798 + iVar7 * 8),
                         *(undefined4 *)(&DAT_087b779c + iVar7 * 8));
  }
  return iVar7;
}


/* sub_08047D9C @ 0x08047D9C */

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
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047D9C(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  
  param_2 = param_2 + -1;
  puVar5 = (undefined8 *)(param_1 + param_2 * 8);
  uVar17 = *puVar5;
  switch(param_2) {
  case 0:
    uVar17 = *puVar5;
  default:
    while( true ) {
      if (param_2 < 9) break;
      uVar17 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
      param_2 = param_2 + -1;
      puVar7 = (undefined4 *)(param_1 + param_2 * 8);
      uVar17 = sub_080534A8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar7,puVar7[1]);
    }
    break;
  case 1:
    goto _08047ED4;
  case 2:
    goto _08047EB8;
  case 3:
    goto _08047E9C;
  case 4:
    goto _08047E80;
  case 5:
    goto _08047E64;
  case 6:
    goto _08047E48;
  case 7:
    goto code_r0x08047e2c;
  case 8:
  }
  uVar17 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
  param_2 = param_2 + -1;
  puVar7 = (undefined4 *)(param_1 + param_2 * 8);
  uVar17 = sub_080534A8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar7,puVar7[1]);
code_r0x08047e2c:
  uVar17 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
  param_2 = param_2 + -1;
  puVar7 = (undefined4 *)(param_1 + param_2 * 8);
  uVar17 = sub_080534A8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar7,puVar7[1]);
_08047E48:
  uVar17 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
  param_2 = param_2 + -1;
  puVar7 = (undefined4 *)(param_1 + param_2 * 8);
  uVar17 = sub_080534A8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar7,puVar7[1]);
_08047E64:
  uVar17 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
  param_2 = param_2 + -1;
  puVar7 = (undefined4 *)(param_1 + param_2 * 8);
  uVar17 = sub_080534A8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar7,puVar7[1]);
_08047E80:
  uVar17 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
  param_2 = param_2 + -1;
  puVar7 = (undefined4 *)(param_1 + param_2 * 8);
  uVar17 = sub_080534A8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar7,puVar7[1]);
_08047E9C:
  uVar17 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
  param_2 = param_2 + -1;
  puVar7 = (undefined4 *)(param_1 + param_2 * 8);
  uVar17 = sub_080534A8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar7,puVar7[1]);
_08047EB8:
  uVar17 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
  param_2 = param_2 + -1;
  puVar7 = (undefined4 *)(param_1 + param_2 * 8);
  uVar17 = sub_080534A8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar7,puVar7[1]);
_08047ED4:
  uVar18 = sub_08054160((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_3,param_4);
  uVar6 = (uint)(uVar18 >> 0x20);
  uVar3 = (uint)uVar18;
  puVar8 = (ulonglong *)(param_1 + (param_2 + -1) * 8);
  uVar9 = (uint)*puVar8;
  uVar11 = *(uint *)((int)puVar8 + 4);
  if ((~(uVar6 << 1) & 0xffe00000) == 0 || (~(uVar11 << 1) & 0xffe00000) == 0) {
    uVar12 = uVar6 * 2 + (uint)(uVar3 != 0);
    if (uVar12 < 0xffe00001) {
      uVar12 = uVar11 * 2 + (uint)(uVar9 != 0);
    }
    uVar15 = 0x4000011;
    if (0xffe00000 < uVar12) {
      uVar13 = uVar6 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar12 = uVar13;
      if (uVar13 < 0xfff00001) {
        uVar12 = uVar11 * 2 + 0x100000 + (uint)(uVar9 != 0);
      }
      if (0xfff00000 < uVar12) goto sub_08054850;
      if (0xfffff < uVar13) {
        uVar18 = *puVar8;
      }
sub_08054E78:
      uVar9 = (uint)(uVar18 >> 0x20);
      uVar11 = uVar15 & 0xf;
      if (uVar11 != 9) {
        if (uVar11 != 8) {
          return (uint)uVar18;
        }
        if (uVar11 != 8) {
          if ((uVar15 & 0x10) == 0) {
            uVar11 = 0x7fffffff;
            uVar9 = (uint)uVar18;
          }
          else {
            uVar11 = 0xffffffff;
          }
          if ((uVar9 & 0x80000000) != 0) {
            uVar11 = ~uVar11;
          }
          return uVar11;
        }
        if ((uVar15 & 0x10) == 0) {
          uVar9 = 0x7fc00000;
        }
        else {
          uVar9 = 0;
        }
        return uVar9;
      }
      uVar9 = 8;
      goto sub_08054F3C;
    }
    iVar14 = uVar6 * 2 + (uint)(uVar3 != 0);
    if (iVar14 != uVar11 * 2 + (uint)(uVar9 != 0)) {
      if (iVar14 != -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar6 ^ uVar11)) {
      return uVar3;
    }
    uVar9 = 0;
    uVar15 = 0x4000011;
sub_08054850:
    uVar10 = uVar9;
    if ((uVar15 & 0x10) == 0) {
      uVar10 = uVar6;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar9 = *puVar4;
    if ((uVar15 & ~(uVar9 << 0x12) & 0x30000000) != 0) {
      uVar15 = uVar15 | 0x40000000;
    }
    uVar12 = uVar15 | uVar9 & 0x1c00000;
    *puVar4 = uVar9 | (uVar15 << 1) >> 0x1b;
    bVar16 = (uVar15 & 0xf) != 8;
    if (bVar16) {
      uVar13 = uVar15 & 0x70;
      uVar15 = uVar12 | uVar13 << 3;
    }
    else {
      uVar13 = 0x20000;
      uVar15 = uVar12;
    }
    if (!bVar16 && (uVar13 & ~uVar15) == 0) {
      uVar15 = uVar15 | 0xc00000;
    }
    if ((uVar15 & 0x10000000) == 0) {
      if ((uVar15 & 0x40000000) == 0) {
        if ((uVar9 & 0x100) == 0) {
          uVar9 = uVar6;
          if ((uVar15 & 0x80) == 0) {
            uVar9 = uVar3;
          }
          if ((uVar15 & 0x10) == 0) {
            uVar18 = CONCAT44(uVar6,uVar9) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar18 = (ulonglong)(uVar9 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar9 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar9 & 0x400) == 0) {
      if ((uVar15 & 0x80) == 0) {
        uVar6 = uVar3;
      }
      if ((uVar15 & 0x10) == 0) {
        uVar9 = uVar6 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar9 = 0;
      }
      return uVar9;
    }
  }
  else {
    if ((int)(uVar6 ^ uVar11) < 0) {
      uVar11 = uVar11 ^ 0x80000000;
      uVar12 = uVar3 - uVar9;
      if (uVar6 <= uVar11 && (uint)(uVar9 <= uVar3) <= uVar6 - uVar11) {
        uVar15 = uVar6 - (uVar11 + (uVar9 > uVar3)) ^ 0x80000000;
        bVar16 = CARRY4(uVar9,uVar12);
        uVar9 = uVar9 + uVar12;
        uVar11 = uVar11 + uVar15 + (uint)bVar16;
        uVar18 = CONCAT44(uVar6 - (uVar15 + (uVar3 < uVar12)),uVar3 - uVar12);
      }
      uVar12 = (uint)(uVar18 >> 0x20);
      uVar3 = (uint)uVar18;
      uVar6 = uVar12 >> 0x14;
      uVar15 = uVar6 - (uVar11 >> 0x14);
      if ((uVar11 & 0x7ff00000) == 0) {
        if (uVar9 == 0 && (uVar11 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar18 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar13 = uVar12 & ~(uVar6 << 0x14);
          if ((uVar6 & 0x7ff) != 0) {
            uVar15 = uVar15 - 1;
            iVar14 = -((uVar11 & 0x7fffffff) + (uint)(uVar9 != 0));
            goto _08053740;
          }
          uVar18 = CONCAT44(uVar13 - (uVar11 + (uVar3 < uVar9)),uVar3 - uVar9);
        }
_080538B4:
        uVar15 = 0x12;
        goto _080538B8;
      }
      uVar13 = uVar12 & ~(uVar6 << 0x14);
      iVar14 = -0x100000 - ((uVar11 & 0xfffff) + (uint)(uVar9 != 0));
_08053740:
      uVar10 = -uVar9;
      uVar11 = 0x20 - uVar15;
      if (uVar15 < 0x21) {
        uVar9 = uVar10 >> (uVar15 & 0xff);
        uVar2 = uVar3 + uVar9;
        uVar3 = uVar13 + (iVar14 >> (uVar15 & 0xff)) + (uint)CARRY4(uVar3,uVar9);
        uVar9 = iVar14 << (uVar11 & 0xff);
        uVar15 = uVar2 + uVar9;
        bVar16 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar9));
        iVar14 = uVar3 + CARRY4(uVar2,uVar9);
      }
      else {
        uVar9 = uVar9 * -2;
        if (uVar9 != 0) {
          uVar9 = 1;
        }
        uVar10 = uVar9 | (iVar14 * 2 + (uint)CARRY4(uVar10,uVar10)) * 2;
        uVar15 = uVar15 - 0x20;
        uVar11 = 0x1e - uVar15;
        if (0x1e < uVar15 || uVar11 == 0) {
          return uVar3;
        }
        uVar9 = iVar14 >> (uVar15 & 0xff);
        uVar15 = uVar3 + uVar9;
        bVar16 = uVar13 != 0 || uVar13 < CARRY4(uVar3,uVar9);
        iVar14 = uVar13 - !CARRY4(uVar3,uVar9);
      }
      if (-1 < iVar14) {
        iVar14 = uVar10 << (uVar11 & 0xff);
        if (-1 < iVar14) {
          return uVar15;
        }
        uVar15 = uVar15 + 1;
        if (uVar15 == 0 || iVar14 == -0x80000000) {
          if (uVar15 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = uVar15 & 0xfffffffe;
          }
          return uVar15;
        }
        return uVar15;
      }
      uVar9 = uVar11 + 1 & 0xff;
      bVar16 = uVar9 == 0 && bVar16 || uVar9 != 0 && (bool)((byte)(uVar10 >> 0x20 - uVar9) & 1);
      uVar3 = uVar15 * 2 + (uint)bVar16;
      iVar14 = iVar14 * 2 + (uint)(CARRY4(uVar15,uVar15) || CARRY4(uVar15 * 2,(uint)bVar16));
      uVar11 = iVar14 + uVar6 * 0x200000;
      bVar16 = (bool)((byte)(uVar11 >> 0x14) & 1);
      if (bVar16 && uVar11 >> 0x15 != 0) {
        uVar11 = -((int)(uVar10 << uVar9) >> 0x1f);
        uVar6 = uVar3 + uVar11;
        bVar16 = uVar6 == 0;
        if (!CARRY4(uVar3,uVar11)) {
          bVar16 = uVar10 << uVar9 == -0x80000000;
        }
        if (bVar16) {
          if (uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 & 0xfffffffe;
          }
          return uVar6;
        }
        return uVar6;
      }
      if (bVar16) {
        uVar18 = CONCAT44((iVar14 >> 1) + uVar6 * 0x100000,
                          (uint)((byte)iVar14 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar9 = iVar14 + 0x200000;
      if (uVar9 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar14 = (uVar6 & 0xfffff7ff) - 2;
      do {
        bVar16 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar9 = uVar9 * 2 + (uint)bVar16;
        iVar14 = iVar14 + -1;
      } while ((uVar9 & 0x100000) == 0);
      if (0 < iVar14) {
        return uVar3;
      }
      uVar6 = uVar9 + (uVar12 & 0x80000000) + iVar14 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar15 = 0x12;
      uVar11 = *puVar4;
      if ((uVar11 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar11 & 0x800) == 0) {
        uVar9 = uVar6 & ~((uVar6 >> 0x14) << 0x14);
        iVar14 = -(uVar6 >> 0x14 & 0xfffff7ff);
        uVar6 = iVar14 + 0x601;
        uVar11 = uVar9 | 0x100000;
        if (uVar6 < 0x36) {
          if (uVar6 == 0x35) {
            uVar6 = 0;
            uVar12 = 0x80000000;
            if (uVar3 != 0 || (uVar9 & 0xfffff) != 0) {
              uVar12 = 0x80000001;
            }
          }
          else if (uVar6 < 0x15) {
            uVar12 = uVar3 << (0x20 - uVar6 & 0xff);
            uVar6 = uVar11 << (0x20 - uVar6 & 0xff) | uVar3 >> (uVar6 & 0xff);
          }
          else {
            uVar9 = iVar14 + 0x5e1;
            if (uVar6 < 0x20 || uVar9 == 0) {
              uVar6 = uVar11 << (-uVar9 & 0xff) | uVar3 >> (uVar6 & 0xff);
              uVar12 = uVar3 << (-uVar9 & 0xff);
            }
            else {
              uVar6 = uVar11 >> (uVar9 & 0xff);
              uVar12 = uVar11 << (0x20 - uVar9 & 0xff);
              if (uVar3 != 0) {
                uVar12 = uVar12 | 1;
              }
            }
          }
        }
        else {
          uVar12 = 1;
          uVar6 = 0;
        }
        if (uVar12 != 0) {
          if (SUB41(uVar12 >> 0x1f,0)) {
            if ((uVar12 & 0x7fffffff) == 0) {
              uVar6 = uVar6 + 1 & 0xfffffffe;
            }
            else {
              uVar6 = uVar6 + 1;
            }
          }
          puVar4 = (uint *)sub_08047A2C();
          *puVar4 = *puVar4 | 8;
          return uVar6;
        }
        return uVar6;
      }
    }
    else {
      uVar12 = uVar3 - uVar9;
      iVar14 = uVar6 - (uVar11 + (uVar9 > uVar3));
      if (uVar6 <= uVar11 && (uint)(uVar9 <= uVar3) <= uVar6 - uVar11) {
        bVar16 = CARRY4(uVar9,uVar12);
        uVar9 = uVar9 + uVar12;
        uVar11 = uVar11 + iVar14 + (uint)bVar16;
        uVar18 = CONCAT44(uVar6 - (iVar14 + (uint)(uVar3 < uVar12)),uVar3 - uVar12);
      }
      uVar6 = (uint)(uVar18 >> 0x20);
      uVar12 = (uint)uVar18;
      uVar3 = uVar6 >> 0x14;
      uVar15 = uVar3 - (uVar11 >> 0x14);
      if ((uVar11 & 0x7ff00000) != 0) {
        uVar6 = uVar6 & ~(uVar3 << 0x14);
        uVar11 = uVar11 & 0x1fffff | 0x100000;
_08053500:
        uVar13 = 0x20 - uVar15;
        if (uVar15 < 0x21) {
          uVar2 = uVar9 >> (uVar15 & 0xff);
          bVar16 = CARRY4(uVar12,uVar2);
          uVar2 = uVar12 + uVar2;
          uVar10 = uVar11 << (uVar13 & 0xff);
          uVar12 = uVar2 + uVar10;
          uVar11 = uVar6 + (uVar11 >> (uVar15 & 0xff)) + (uint)bVar16 + (uint)CARRY4(uVar2,uVar10);
          if (0xfffff < uVar11) goto _08053588;
          uVar6 = uVar11 + uVar3 * 0x100000;
_08053524:
          uVar9 = uVar9 << (uVar13 & 0xff);
          if (-1 < (int)uVar9) {
            return uVar12;
          }
          uVar3 = uVar12 + 1;
          uVar11 = uVar3;
          if (uVar12 != 0xffffffff) {
            uVar9 = uVar9 << 1;
            uVar11 = uVar9;
          }
          if (uVar11 != 0) {
            return uVar3;
          }
_0805353C:
          if (uVar3 == 0) {
            uVar6 = uVar6 + 1;
            uVar3 = 0;
          }
          else {
            uVar3 = uVar3 & 0xfffffffe;
          }
          uVar11 = uVar6 << 1;
          if (uVar11 < 0xffe00000) {
            return uVar3;
          }
          uVar15 = 0x10000011;
          if (uVar11 >= 0xffe00000) {
            uVar6 = uVar6 + 0xa0000000;
          }
        }
        else {
          uVar9 = uVar11 * 2 + (uint)(uVar9 != 0);
          uVar15 = uVar15 - 0x20;
          bVar16 = uVar15 < 0x20;
          uVar13 = 0x1f - uVar15;
          if (bVar16) {
            uVar11 = uVar11 >> (uVar15 & 0xff);
            bVar16 = CARRY4(uVar12,uVar11);
            uVar12 = uVar12 + uVar11;
          }
          else {
            uVar13 = 0;
          }
          uVar6 = uVar6 + uVar3 * 0x100000 + (uint)bVar16;
          if (uVar3 == uVar6 >> 0x14) goto _08053524;
          uVar11 = uVar6 + uVar3 * -0x100000;
_08053588:
          uVar6 = (uVar11 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar16 = (bool)((byte)uVar12 & 1);
          uVar3 = (uint)((byte)(uVar11 + 0x100000) & 1) << 0x1f | uVar12 >> 1;
          if (bVar16) {
            bVar1 = CARRY4(uVar3,(uint)bVar16);
            uVar3 = uVar3 + bVar16;
            uVar11 = uVar3;
            if (!bVar1) {
              uVar11 = uVar9 << (uVar13 & 0xff);
            }
            if (uVar11 == 0) goto _0805353C;
          }
          uVar11 = uVar6 * 2;
          if (uVar11 < 0xffe00000) {
            return uVar3;
          }
          uVar15 = 0x10000011;
          uVar6 = uVar6 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar9 == 0 && (uVar11 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar12;
        }
        if (uVar12 == 0 && (uVar18 & 0x7fffffff00000000) == 0) {
          return uVar12;
        }
        uVar15 = 0x11;
      }
      else {
        uVar6 = uVar6 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar11 = uVar11 & 0x7fffffff;
          uVar15 = uVar15 - 1;
          goto _08053500;
        }
        uVar18 = CONCAT44(uVar6 + uVar11 + (uint)CARRY4(uVar12,uVar9),uVar12 + uVar9);
        uVar15 = 0x11;
      }
_080538B8:
      uVar11 = (uint)(uVar18 >> 0x20);
      uVar9 = (uint)uVar18;
      if (uVar11 << 1 == 0 && uVar9 == 0) {
        return uVar9;
      }
      if (0x1fffff < uVar11 << 1) {
        return uVar9;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar9;
      }
      uVar6 = uVar11 >> 0x1f | 0x6000000;
      uVar11 = uVar11 & 0x7fffffff;
      if ((uVar18 & 0x7fffffff00000000) == 0 && uVar9 >> 0xc == 0) {
        uVar9 = uVar9 << 0x14;
        uVar6 = uVar6 - 0x140000;
      }
      if ((uVar18 & 0x7fffffff00000000) == 0) {
        uVar11 = uVar9 >> 0xc;
        uVar9 = uVar9 << 0x14;
        uVar6 = uVar6 - 0x140000;
      }
      uVar12 = 0;
      if (uVar11 >> 5 == 0) {
        uVar11 = uVar11 << 0x10;
        uVar12 = 0x10;
      }
      if (uVar11 >> 0xd == 0) {
        uVar11 = uVar11 << 8;
        uVar12 = uVar12 + 8;
      }
      if (uVar11 >> 0x11 == 0) {
        uVar11 = uVar11 << 4;
        uVar12 = uVar12 + 4;
      }
      if (uVar11 >> 0x13 == 0) {
        uVar11 = uVar11 << 2;
        uVar12 = uVar12 + 2;
      }
      if (uVar11 >> 0x14 == 0) {
        uVar11 = uVar11 << 1;
        uVar12 = uVar12 + 1;
      }
      uVar3 = uVar9 << (uVar12 & 0xff);
      uVar10 = 0x20 - uVar12;
      uVar6 = ((uVar11 | uVar9 >> (uVar10 & 0xff)) ^ uVar6 * -0x80000000) +
              (uVar6 + uVar12 * -0x10000 & 0xfffffffe) * 0x10;
      uVar11 = uVar3;
    }
    uVar15 = uVar15 | 0x20000000;
  }
  uVar9 = sub_080491E4(uVar3,uVar6,uVar10,uVar11);
  if ((uVar15 & 0xf) != 9) {
    return uVar9;
  }
sub_08054F3C:
  uVar15 = uVar15 & uVar9 << 0x10;
  if (uVar15 != 0) {
    uVar15 = 1;
  }
  return uVar15;
}


/* sub_08047DC8 @ 0x08047DC8 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047DC8(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  while (8 < unaff_r4) {
    uVar16 = sub_08054160();
    unaff_r4 = unaff_r4 + -1;
    puVar6 = (undefined4 *)(unaff_r5 + unaff_r4 * 8);
    sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  }
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -3) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -4) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -5) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -6) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -7) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -8) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* sub_08047DCC @ 0x08047DCC */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047DCC(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r4;
  uint uVar10;
  int unaff_r5;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  
  uVar15 = sub_08054160();
  uVar5 = (uint)(uVar15 >> 0x20);
  uVar3 = (uint)uVar15;
  puVar6 = (ulonglong *)(unaff_r5 + (unaff_r4 + -1) * 8);
  uVar7 = (uint)*puVar6;
  uVar9 = *(uint *)((int)puVar6 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar9 << 1) & 0xffe00000) == 0) {
    uVar10 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar10 < 0xffe00001) {
      uVar10 = uVar9 * 2 + (uint)(uVar7 != 0);
    }
    uVar13 = 0x4000011;
    if (0xffe00000 < uVar10) {
      uVar11 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar10 = uVar11;
      if (uVar11 < 0xfff00001) {
        uVar10 = uVar9 * 2 + 0x100000 + (uint)(uVar7 != 0);
      }
      if (0xfff00000 < uVar10) goto sub_08054850;
      if (0xfffff < uVar11) {
        uVar15 = *puVar6;
      }
sub_08054E78:
      uVar7 = (uint)(uVar15 >> 0x20);
      uVar9 = uVar13 & 0xf;
      if (uVar9 != 9) {
        if (uVar9 != 8) {
          return (uint)uVar15;
        }
        if (uVar9 == 8) {
          if ((uVar13 & 0x10) == 0) {
            uVar7 = 0x7fc00000;
          }
          else {
            uVar7 = 0;
          }
          return uVar7;
        }
        if ((uVar13 & 0x10) == 0) {
          uVar9 = 0x7fffffff;
          uVar7 = (uint)uVar15;
        }
        else {
          uVar9 = 0xffffffff;
        }
        if ((uVar7 & 0x80000000) != 0) {
          uVar9 = ~uVar9;
        }
        return uVar9;
      }
      uVar7 = 8;
      goto sub_08054F3C;
    }
    iVar12 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar12 != uVar9 * 2 + (uint)(uVar7 != 0)) {
      if (iVar12 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar9)) {
      return uVar3;
    }
    uVar7 = 0;
    uVar13 = 0x4000011;
sub_08054850:
    uVar8 = uVar7;
    if ((uVar13 & 0x10) == 0) {
      uVar8 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar7 = *puVar4;
    if ((uVar13 & ~(uVar7 << 0x12) & 0x30000000) != 0) {
      uVar13 = uVar13 | 0x40000000;
    }
    uVar10 = uVar13 | uVar7 & 0x1c00000;
    *puVar4 = uVar7 | (uVar13 << 1) >> 0x1b;
    bVar14 = (uVar13 & 0xf) != 8;
    if (bVar14) {
      uVar11 = uVar13 & 0x70;
      uVar13 = uVar10 | uVar11 << 3;
    }
    else {
      uVar11 = 0x20000;
      uVar13 = uVar10;
    }
    if (!bVar14 && (uVar11 & ~uVar13) == 0) {
      uVar13 = uVar13 | 0xc00000;
    }
    if ((uVar13 & 0x10000000) == 0) {
      if ((uVar13 & 0x40000000) == 0) {
        if ((uVar7 & 0x100) == 0) {
          uVar7 = uVar5;
          if ((uVar13 & 0x80) == 0) {
            uVar7 = uVar3;
          }
          if ((uVar13 & 0x10) == 0) {
            uVar15 = CONCAT44(uVar5,uVar7) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar15 = (ulonglong)(uVar7 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar7 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar7 & 0x400) == 0) {
      if ((uVar13 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar13 & 0x10) == 0) {
        uVar7 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar7 = 0;
      }
      return uVar7;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar9) < 0) {
      uVar9 = uVar9 ^ 0x80000000;
      uVar10 = uVar3 - uVar7;
      if (uVar5 <= uVar9 && (uint)(uVar7 <= uVar3) <= uVar5 - uVar9) {
        uVar13 = uVar5 - (uVar9 + (uVar7 > uVar3)) ^ 0x80000000;
        bVar14 = CARRY4(uVar7,uVar10);
        uVar7 = uVar7 + uVar10;
        uVar9 = uVar9 + uVar13 + (uint)bVar14;
        uVar15 = CONCAT44(uVar5 - (uVar13 + (uVar3 < uVar10)),uVar3 - uVar10);
      }
      uVar10 = (uint)(uVar15 >> 0x20);
      uVar3 = (uint)uVar15;
      uVar5 = uVar10 >> 0x14;
      uVar13 = uVar5 - (uVar9 >> 0x14);
      if ((uVar9 & 0x7ff00000) == 0) {
        if (uVar7 == 0 && (uVar9 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar15 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar11 = uVar10 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar13 = uVar13 - 1;
            iVar12 = -((uVar9 & 0x7fffffff) + (uint)(uVar7 != 0));
            goto _08053740;
          }
          uVar15 = CONCAT44(uVar11 - (uVar9 + (uVar3 < uVar7)),uVar3 - uVar7);
        }
_080538B4:
        uVar13 = 0x12;
        goto _080538B8;
      }
      uVar11 = uVar10 & ~(uVar5 << 0x14);
      iVar12 = -0x100000 - ((uVar9 & 0xfffff) + (uint)(uVar7 != 0));
_08053740:
      uVar8 = -uVar7;
      uVar9 = 0x20 - uVar13;
      if (uVar13 < 0x21) {
        uVar7 = uVar8 >> (uVar13 & 0xff);
        uVar2 = uVar3 + uVar7;
        uVar3 = uVar11 + (iVar12 >> (uVar13 & 0xff)) + (uint)CARRY4(uVar3,uVar7);
        uVar7 = iVar12 << (uVar9 & 0xff);
        uVar13 = uVar2 + uVar7;
        bVar14 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar7));
        iVar12 = uVar3 + CARRY4(uVar2,uVar7);
      }
      else {
        uVar7 = uVar7 * -2;
        if (uVar7 != 0) {
          uVar7 = 1;
        }
        uVar8 = uVar7 | (iVar12 * 2 + (uint)CARRY4(uVar8,uVar8)) * 2;
        uVar13 = uVar13 - 0x20;
        uVar9 = 0x1e - uVar13;
        if (0x1e < uVar13 || uVar9 == 0) {
          return uVar3;
        }
        uVar7 = iVar12 >> (uVar13 & 0xff);
        uVar13 = uVar3 + uVar7;
        bVar14 = uVar11 != 0 || uVar11 < CARRY4(uVar3,uVar7);
        iVar12 = uVar11 - !CARRY4(uVar3,uVar7);
      }
      if (-1 < iVar12) {
        iVar12 = uVar8 << (uVar9 & 0xff);
        if (-1 < iVar12) {
          return uVar13;
        }
        uVar13 = uVar13 + 1;
        if (uVar13 != 0 && iVar12 != -0x80000000) {
          return uVar13;
        }
        if (uVar13 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar13 & 0xfffffffe;
        }
        return uVar13;
      }
      uVar7 = uVar9 + 1 & 0xff;
      bVar14 = uVar7 == 0 && bVar14 || uVar7 != 0 && (bool)((byte)(uVar8 >> 0x20 - uVar7) & 1);
      uVar3 = uVar13 * 2 + (uint)bVar14;
      iVar12 = iVar12 * 2 + (uint)(CARRY4(uVar13,uVar13) || CARRY4(uVar13 * 2,(uint)bVar14));
      uVar9 = iVar12 + uVar5 * 0x200000;
      bVar14 = (bool)((byte)(uVar9 >> 0x14) & 1);
      if (bVar14 && uVar9 >> 0x15 != 0) {
        uVar9 = -((int)(uVar8 << uVar7) >> 0x1f);
        uVar5 = uVar3 + uVar9;
        bVar14 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar9)) {
          bVar14 = uVar8 << uVar7 == -0x80000000;
        }
        if (!bVar14) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar14) {
        uVar15 = CONCAT44((iVar12 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar12 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar7 = iVar12 + 0x200000;
      if (uVar7 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar12 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar14 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar7 = uVar7 * 2 + (uint)bVar14;
        iVar12 = iVar12 + -1;
      } while ((uVar7 & 0x100000) == 0);
      if (0 < iVar12) {
        return uVar3;
      }
      uVar5 = uVar7 + (uVar10 & 0x80000000) + iVar12 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar13 = 0x12;
      uVar9 = *puVar4;
      if ((uVar9 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar9 & 0x800) == 0) {
        uVar7 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar12 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar12 + 0x601;
        uVar9 = uVar7 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar10 = 0x80000000;
            if (uVar3 != 0 || (uVar7 & 0xfffff) != 0) {
              uVar10 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar10 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar9 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar7 = iVar12 + 0x5e1;
            if (uVar5 < 0x20 || uVar7 == 0) {
              uVar5 = uVar9 << (-uVar7 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar10 = uVar3 << (-uVar7 & 0xff);
            }
            else {
              uVar5 = uVar9 >> (uVar7 & 0xff);
              uVar10 = uVar9 << (0x20 - uVar7 & 0xff);
              if (uVar3 != 0) {
                uVar10 = uVar10 | 1;
              }
            }
          }
        }
        else {
          uVar10 = 1;
          uVar5 = 0;
        }
        if (uVar10 == 0) {
          return uVar5;
        }
        if (SUB41(uVar10 >> 0x1f,0)) {
          if ((uVar10 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar10 = uVar3 - uVar7;
      iVar12 = uVar5 - (uVar9 + (uVar7 > uVar3));
      if (uVar5 <= uVar9 && (uint)(uVar7 <= uVar3) <= uVar5 - uVar9) {
        bVar14 = CARRY4(uVar7,uVar10);
        uVar7 = uVar7 + uVar10;
        uVar9 = uVar9 + iVar12 + (uint)bVar14;
        uVar15 = CONCAT44(uVar5 - (iVar12 + (uint)(uVar3 < uVar10)),uVar3 - uVar10);
      }
      uVar5 = (uint)(uVar15 >> 0x20);
      uVar10 = (uint)uVar15;
      uVar3 = uVar5 >> 0x14;
      uVar13 = uVar3 - (uVar9 >> 0x14);
      if ((uVar9 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar9 = uVar9 & 0x1fffff | 0x100000;
_08053500:
        uVar11 = 0x20 - uVar13;
        if (uVar13 < 0x21) {
          uVar2 = uVar7 >> (uVar13 & 0xff);
          bVar14 = CARRY4(uVar10,uVar2);
          uVar2 = uVar10 + uVar2;
          uVar8 = uVar9 << (uVar11 & 0xff);
          uVar10 = uVar2 + uVar8;
          uVar9 = uVar5 + (uVar9 >> (uVar13 & 0xff)) + (uint)bVar14 + (uint)CARRY4(uVar2,uVar8);
          if (uVar9 < 0x100000) {
            uVar5 = uVar9 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar9 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar14 = (bool)((byte)uVar10 & 1);
          uVar3 = (uint)((byte)(uVar9 + 0x100000) & 1) << 0x1f | uVar10 >> 1;
          if (!bVar14) {
_080535C0:
            uVar9 = uVar5 * 2;
            if (uVar9 < 0xffe00000) {
              return uVar3;
            }
            uVar13 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar14);
          uVar3 = uVar3 + bVar14;
          uVar9 = uVar3;
          if (!bVar1) {
            uVar9 = uVar7 << (uVar11 & 0xff);
          }
          if (uVar9 != 0) goto _080535C0;
        }
        else {
          uVar7 = uVar9 * 2 + (uint)(uVar7 != 0);
          uVar13 = uVar13 - 0x20;
          bVar14 = uVar13 < 0x20;
          uVar11 = 0x1f - uVar13;
          if (bVar14) {
            uVar9 = uVar9 >> (uVar13 & 0xff);
            bVar14 = CARRY4(uVar10,uVar9);
            uVar10 = uVar10 + uVar9;
          }
          else {
            uVar11 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar14;
          if (uVar3 != uVar5 >> 0x14) {
            uVar9 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar7 = uVar7 << (uVar11 & 0xff);
          if (-1 < (int)uVar7) {
            return uVar10;
          }
          uVar3 = uVar10 + 1;
          uVar9 = uVar3;
          if (uVar10 != 0xffffffff) {
            uVar7 = uVar7 << 1;
            uVar9 = uVar7;
          }
          if (uVar9 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar9 = uVar5 << 1;
        if (uVar9 < 0xffe00000) {
          return uVar3;
        }
        uVar13 = 0x10000011;
        if (uVar9 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar7 == 0 && (uVar9 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar10;
        }
        if (uVar10 == 0 && (uVar15 & 0x7fffffff00000000) == 0) {
          return uVar10;
        }
        uVar13 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar9 = uVar9 & 0x7fffffff;
          uVar13 = uVar13 - 1;
          goto _08053500;
        }
        uVar15 = CONCAT44(uVar5 + uVar9 + (uint)CARRY4(uVar10,uVar7),uVar10 + uVar7);
        uVar13 = 0x11;
      }
_080538B8:
      uVar9 = (uint)(uVar15 >> 0x20);
      uVar7 = (uint)uVar15;
      if (uVar9 << 1 == 0 && uVar7 == 0) {
        return uVar7;
      }
      if (0x1fffff < uVar9 << 1) {
        return uVar7;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar7;
      }
      uVar5 = uVar9 >> 0x1f | 0x6000000;
      uVar9 = uVar9 & 0x7fffffff;
      if ((uVar15 & 0x7fffffff00000000) == 0 && uVar7 >> 0xc == 0) {
        uVar7 = uVar7 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar15 & 0x7fffffff00000000) == 0) {
        uVar9 = uVar7 >> 0xc;
        uVar7 = uVar7 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar10 = 0;
      if (uVar9 >> 5 == 0) {
        uVar9 = uVar9 << 0x10;
        uVar10 = 0x10;
      }
      if (uVar9 >> 0xd == 0) {
        uVar9 = uVar9 << 8;
        uVar10 = uVar10 + 8;
      }
      if (uVar9 >> 0x11 == 0) {
        uVar9 = uVar9 << 4;
        uVar10 = uVar10 + 4;
      }
      if (uVar9 >> 0x13 == 0) {
        uVar9 = uVar9 << 2;
        uVar10 = uVar10 + 2;
      }
      if (uVar9 >> 0x14 == 0) {
        uVar9 = uVar9 << 1;
        uVar10 = uVar10 + 1;
      }
      uVar3 = uVar7 << (uVar10 & 0xff);
      uVar8 = 0x20 - uVar10;
      uVar5 = ((uVar9 | uVar7 >> (uVar8 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar10 * -0x10000 & 0xfffffffe) * 0x10;
      uVar9 = uVar3;
    }
    uVar13 = uVar13 | 0x20000000;
  }
  uVar7 = sub_080491E4(uVar3,uVar5,uVar8,uVar9);
  if ((uVar13 & 0xf) != 9) {
    return uVar7;
  }
sub_08054F3C:
  uVar13 = uVar13 & uVar7 << 0x10;
  if (uVar13 != 0) {
    uVar13 = 1;
  }
  return uVar13;
}


/* sub_08047DD0 @ 0x08047DD0 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047DD0(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -2) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* sub_08047DD4 @ 0x08047DD4 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047DD4(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -3) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* sub_08047DD8 @ 0x08047DD8 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047DD8(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -3) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -4) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* sub_08047DDC @ 0x08047DDC */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047DDC(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -3) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -4) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -5) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* sub_08047DE0 @ 0x08047DE0 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08047DE0(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -3) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -4) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -5) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -6) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* _08047E48 @ 0x08047E48 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint _08047E48(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -3) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -4) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -5) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -6) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* _08047E64 @ 0x08047E64 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint _08047E64(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -3) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -4) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -5) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* _08047E80 @ 0x08047E80 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint _08047E80(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -3) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -4) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* _08047E9C @ 0x08047E9C */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint _08047E9C(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -2) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -3) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* _08047EB8 @ 0x08047EB8 */

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
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint _08047EB8(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  uVar16 = sub_08054160();
  puVar6 = (undefined4 *)(unaff_r5 + (unaff_r4 + -1) * 8);
  sub_080534A8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar6,puVar6[1]);
  uVar17 = sub_08054160();
  uVar5 = (uint)(uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  puVar7 = (ulonglong *)(unaff_r5 + (unaff_r4 + -2) * 8);
  uVar8 = (uint)*puVar7;
  uVar10 = *(uint *)((int)puVar7 + 4);
  if ((~(uVar5 << 1) & 0xffe00000) == 0 || (~(uVar10 << 1) & 0xffe00000) == 0) {
    uVar11 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (uVar11 < 0xffe00001) {
      uVar11 = uVar10 * 2 + (uint)(uVar8 != 0);
    }
    uVar14 = 0x4000011;
    if (0xffe00000 < uVar11) {
      uVar12 = uVar5 * 2 + 0x100000 + (uint)(uVar3 != 0);
      uVar11 = uVar12;
      if (uVar12 < 0xfff00001) {
        uVar11 = uVar10 * 2 + 0x100000 + (uint)(uVar8 != 0);
      }
      if (0xfff00000 < uVar11) goto sub_08054850;
      if (0xfffff < uVar12) {
        uVar17 = *puVar7;
      }
sub_08054E78:
      uVar8 = (uint)(uVar17 >> 0x20);
      uVar10 = uVar14 & 0xf;
      if (uVar10 != 9) {
        if (uVar10 != 8) {
          return (uint)uVar17;
        }
        if (uVar10 == 8) {
          if ((uVar14 & 0x10) == 0) {
            uVar8 = 0x7fc00000;
          }
          else {
            uVar8 = 0;
          }
          return uVar8;
        }
        if ((uVar14 & 0x10) == 0) {
          uVar10 = 0x7fffffff;
          uVar8 = (uint)uVar17;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((uVar8 & 0x80000000) != 0) {
          uVar10 = ~uVar10;
        }
        return uVar10;
      }
      uVar8 = 8;
      goto sub_08054F3C;
    }
    iVar13 = uVar5 * 2 + (uint)(uVar3 != 0);
    if (iVar13 != uVar10 * 2 + (uint)(uVar8 != 0)) {
      if (iVar13 == -0x200000) {
        return 0;
      }
      return 0;
    }
    uVar3 = 0;
    if (-1 < (int)(uVar5 ^ uVar10)) {
      return uVar3;
    }
    uVar8 = 0;
    uVar14 = 0x4000011;
sub_08054850:
    uVar9 = uVar8;
    if ((uVar14 & 0x10) == 0) {
      uVar9 = uVar5;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar8 = *puVar4;
    if ((uVar14 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
      uVar14 = uVar14 | 0x40000000;
    }
    uVar11 = uVar14 | uVar8 & 0x1c00000;
    *puVar4 = uVar8 | (uVar14 << 1) >> 0x1b;
    bVar15 = (uVar14 & 0xf) != 8;
    if (bVar15) {
      uVar12 = uVar14 & 0x70;
      uVar14 = uVar11 | uVar12 << 3;
    }
    else {
      uVar12 = 0x20000;
      uVar14 = uVar11;
    }
    if (!bVar15 && (uVar12 & ~uVar14) == 0) {
      uVar14 = uVar14 | 0xc00000;
    }
    if ((uVar14 & 0x10000000) == 0) {
      if ((uVar14 & 0x40000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          uVar8 = uVar5;
          if ((uVar14 & 0x80) == 0) {
            uVar8 = uVar3;
          }
          if ((uVar14 & 0x10) == 0) {
            uVar17 = CONCAT44(uVar5,uVar8) & 0xffffffff80000000 | 0x7fc00000;
          }
          else {
            uVar17 = (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x1000) == 0) {
        return uVar3;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar14 & 0x80) == 0) {
        uVar5 = uVar3;
      }
      if ((uVar14 & 0x10) == 0) {
        uVar8 = uVar5 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    if ((int)(uVar5 ^ uVar10) < 0) {
      uVar10 = uVar10 ^ 0x80000000;
      uVar11 = uVar3 - uVar8;
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        uVar14 = uVar5 - (uVar10 + (uVar8 > uVar3)) ^ 0x80000000;
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + uVar14 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (uVar14 + (uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar11 = (uint)(uVar17 >> 0x20);
      uVar3 = (uint)uVar17;
      uVar5 = uVar11 >> 0x14;
      uVar14 = uVar5 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) == 0) {
        if (uVar8 == 0 && (uVar10 & 0xfffff) == 0) {
          if (uVar3 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
            return uVar3;
          }
        }
        else {
          uVar12 = uVar11 & ~(uVar5 << 0x14);
          if ((uVar5 & 0x7ff) != 0) {
            uVar14 = uVar14 - 1;
            iVar13 = -((uVar10 & 0x7fffffff) + (uint)(uVar8 != 0));
            goto _08053740;
          }
          uVar17 = CONCAT44(uVar12 - (uVar10 + (uVar3 < uVar8)),uVar3 - uVar8);
        }
_080538B4:
        uVar14 = 0x12;
        goto _080538B8;
      }
      uVar12 = uVar11 & ~(uVar5 << 0x14);
      iVar13 = -0x100000 - ((uVar10 & 0xfffff) + (uint)(uVar8 != 0));
_08053740:
      uVar9 = -uVar8;
      uVar10 = 0x20 - uVar14;
      if (uVar14 < 0x21) {
        uVar8 = uVar9 >> (uVar14 & 0xff);
        uVar2 = uVar3 + uVar8;
        uVar3 = uVar12 + (iVar13 >> (uVar14 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
        uVar8 = iVar13 << (uVar10 & 0xff);
        uVar14 = uVar2 + uVar8;
        bVar15 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar8));
        iVar13 = uVar3 + CARRY4(uVar2,uVar8);
      }
      else {
        uVar8 = uVar8 * -2;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        uVar9 = uVar8 | (iVar13 * 2 + (uint)CARRY4(uVar9,uVar9)) * 2;
        uVar14 = uVar14 - 0x20;
        uVar10 = 0x1e - uVar14;
        if (0x1e < uVar14 || uVar10 == 0) {
          return uVar3;
        }
        uVar8 = iVar13 >> (uVar14 & 0xff);
        uVar14 = uVar3 + uVar8;
        bVar15 = uVar12 != 0 || uVar12 < CARRY4(uVar3,uVar8);
        iVar13 = uVar12 - !CARRY4(uVar3,uVar8);
      }
      if (-1 < iVar13) {
        iVar13 = uVar9 << (uVar10 & 0xff);
        if (-1 < iVar13) {
          return uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 != 0 && iVar13 != -0x80000000) {
          return uVar14;
        }
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffe;
        }
        return uVar14;
      }
      uVar8 = uVar10 + 1 & 0xff;
      bVar15 = uVar8 == 0 && bVar15 || uVar8 != 0 && (bool)((byte)(uVar9 >> 0x20 - uVar8) & 1);
      uVar3 = uVar14 * 2 + (uint)bVar15;
      iVar13 = iVar13 * 2 + (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)bVar15));
      uVar10 = iVar13 + uVar5 * 0x200000;
      bVar15 = (bool)((byte)(uVar10 >> 0x14) & 1);
      if (bVar15 && uVar10 >> 0x15 != 0) {
        uVar10 = -((int)(uVar9 << uVar8) >> 0x1f);
        uVar5 = uVar3 + uVar10;
        bVar15 = uVar5 == 0;
        if (!CARRY4(uVar3,uVar10)) {
          bVar15 = uVar9 << uVar8 == -0x80000000;
        }
        if (!bVar15) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar15) {
        uVar17 = CONCAT44((iVar13 >> 1) + uVar5 * 0x100000,
                          (uint)((byte)iVar13 & 1) << 0x1f | uVar3 >> 1);
        goto _080538B4;
      }
      uVar8 = iVar13 + 0x200000;
      if (uVar8 == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar13 = (uVar5 & 0xfffff7ff) - 2;
      do {
        bVar15 = CARRY4(uVar3,uVar3);
        uVar3 = uVar3 * 2;
        uVar8 = uVar8 * 2 + (uint)bVar15;
        iVar13 = iVar13 + -1;
      } while ((uVar8 & 0x100000) == 0);
      if (0 < iVar13) {
        return uVar3;
      }
      uVar5 = uVar8 + (uVar11 & 0x80000000) + iVar13 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar14 = 0x12;
      uVar10 = *puVar4;
      if ((uVar10 & 0x1000000) != 0) {
        return 0;
      }
      if ((uVar10 & 0x800) == 0) {
        uVar8 = uVar5 & ~((uVar5 >> 0x14) << 0x14);
        iVar13 = -(uVar5 >> 0x14 & 0xfffff7ff);
        uVar5 = iVar13 + 0x601;
        uVar10 = uVar8 | 0x100000;
        if (uVar5 < 0x36) {
          if (uVar5 == 0x35) {
            uVar5 = 0;
            uVar11 = 0x80000000;
            if (uVar3 != 0 || (uVar8 & 0xfffff) != 0) {
              uVar11 = 0x80000001;
            }
          }
          else if (uVar5 < 0x15) {
            uVar11 = uVar3 << (0x20 - uVar5 & 0xff);
            uVar5 = uVar10 << (0x20 - uVar5 & 0xff) | uVar3 >> (uVar5 & 0xff);
          }
          else {
            uVar8 = iVar13 + 0x5e1;
            if (uVar5 < 0x20 || uVar8 == 0) {
              uVar5 = uVar10 << (-uVar8 & 0xff) | uVar3 >> (uVar5 & 0xff);
              uVar11 = uVar3 << (-uVar8 & 0xff);
            }
            else {
              uVar5 = uVar10 >> (uVar8 & 0xff);
              uVar11 = uVar10 << (0x20 - uVar8 & 0xff);
              if (uVar3 != 0) {
                uVar11 = uVar11 | 1;
              }
            }
          }
        }
        else {
          uVar11 = 1;
          uVar5 = 0;
        }
        if (uVar11 == 0) {
          return uVar5;
        }
        if (SUB41(uVar11 >> 0x1f,0)) {
          if ((uVar11 & 0x7fffffff) == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
        puVar4 = (uint *)sub_08047A2C();
        *puVar4 = *puVar4 | 8;
        return uVar5;
      }
    }
    else {
      uVar11 = uVar3 - uVar8;
      iVar13 = uVar5 - (uVar10 + (uVar8 > uVar3));
      if (uVar5 <= uVar10 && (uint)(uVar8 <= uVar3) <= uVar5 - uVar10) {
        bVar15 = CARRY4(uVar8,uVar11);
        uVar8 = uVar8 + uVar11;
        uVar10 = uVar10 + iVar13 + (uint)bVar15;
        uVar17 = CONCAT44(uVar5 - (iVar13 + (uint)(uVar3 < uVar11)),uVar3 - uVar11);
      }
      uVar5 = (uint)(uVar17 >> 0x20);
      uVar11 = (uint)uVar17;
      uVar3 = uVar5 >> 0x14;
      uVar14 = uVar3 - (uVar10 >> 0x14);
      if ((uVar10 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        uVar10 = uVar10 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar14;
        if (uVar14 < 0x21) {
          uVar2 = uVar8 >> (uVar14 & 0xff);
          bVar15 = CARRY4(uVar11,uVar2);
          uVar2 = uVar11 + uVar2;
          uVar9 = uVar10 << (uVar12 & 0xff);
          uVar11 = uVar2 + uVar9;
          uVar10 = uVar5 + (uVar10 >> (uVar14 & 0xff)) + (uint)bVar15 + (uint)CARRY4(uVar2,uVar9);
          if (uVar10 < 0x100000) {
            uVar5 = uVar10 + uVar3 * 0x100000;
            goto _08053524;
          }
_08053588:
          uVar5 = (uVar10 + 0x100000 >> 1) + uVar3 * 0x100000;
          bVar15 = (bool)((byte)uVar11 & 1);
          uVar3 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | uVar11 >> 1;
          if (!bVar15) {
_080535C0:
            uVar10 = uVar5 * 2;
            if (uVar10 < 0xffe00000) {
              return uVar3;
            }
            uVar14 = 0x10000011;
            uVar5 = uVar5 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(uVar3,(uint)bVar15);
          uVar3 = uVar3 + bVar15;
          uVar10 = uVar3;
          if (!bVar1) {
            uVar10 = uVar8 << (uVar12 & 0xff);
          }
          if (uVar10 != 0) goto _080535C0;
        }
        else {
          uVar8 = uVar10 * 2 + (uint)(uVar8 != 0);
          uVar14 = uVar14 - 0x20;
          bVar15 = uVar14 < 0x20;
          uVar12 = 0x1f - uVar14;
          if (bVar15) {
            uVar10 = uVar10 >> (uVar14 & 0xff);
            bVar15 = CARRY4(uVar11,uVar10);
            uVar11 = uVar11 + uVar10;
          }
          else {
            uVar12 = 0;
          }
          uVar5 = uVar5 + uVar3 * 0x100000 + (uint)bVar15;
          if (uVar3 != uVar5 >> 0x14) {
            uVar10 = uVar5 + uVar3 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar12 & 0xff);
          if (-1 < (int)uVar8) {
            return uVar11;
          }
          uVar3 = uVar11 + 1;
          uVar10 = uVar3;
          if (uVar11 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar10 = uVar8;
          }
          if (uVar10 != 0) {
            return uVar3;
          }
        }
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        uVar10 = uVar5 << 1;
        if (uVar10 < 0xffe00000) {
          return uVar3;
        }
        uVar14 = 0x10000011;
        if (uVar10 >= 0xffe00000) {
          uVar5 = uVar5 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (uVar10 & 0x7fffffff) == 0) {
        if ((uVar3 & 0x7ff) != 0) {
          return uVar11;
        }
        if (uVar11 == 0 && (uVar17 & 0x7fffffff00000000) == 0) {
          return uVar11;
        }
        uVar14 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar3 << 0x14);
        if ((uVar3 & 0x7ff) != 0) {
          uVar10 = uVar10 & 0x7fffffff;
          uVar14 = uVar14 - 1;
          goto _08053500;
        }
        uVar17 = CONCAT44(uVar5 + uVar10 + (uint)CARRY4(uVar11,uVar8),uVar11 + uVar8);
        uVar14 = 0x11;
      }
_080538B8:
      uVar10 = (uint)(uVar17 >> 0x20);
      uVar8 = (uint)uVar17;
      if (uVar10 << 1 == 0 && uVar8 == 0) {
        return uVar8;
      }
      if (0x1fffff < uVar10 << 1) {
        return uVar8;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return uVar8;
      }
      uVar5 = uVar10 >> 0x1f | 0x6000000;
      uVar10 = uVar10 & 0x7fffffff;
      if ((uVar17 & 0x7fffffff00000000) == 0 && uVar8 >> 0xc == 0) {
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      if ((uVar17 & 0x7fffffff00000000) == 0) {
        uVar10 = uVar8 >> 0xc;
        uVar8 = uVar8 << 0x14;
        uVar5 = uVar5 - 0x140000;
      }
      uVar11 = 0;
      if (uVar10 >> 5 == 0) {
        uVar10 = uVar10 << 0x10;
        uVar11 = 0x10;
      }
      if (uVar10 >> 0xd == 0) {
        uVar10 = uVar10 << 8;
        uVar11 = uVar11 + 8;
      }
      if (uVar10 >> 0x11 == 0) {
        uVar10 = uVar10 << 4;
        uVar11 = uVar11 + 4;
      }
      if (uVar10 >> 0x13 == 0) {
        uVar10 = uVar10 << 2;
        uVar11 = uVar11 + 2;
      }
      if (uVar10 >> 0x14 == 0) {
        uVar10 = uVar10 << 1;
        uVar11 = uVar11 + 1;
      }
      uVar3 = uVar8 << (uVar11 & 0xff);
      uVar9 = 0x20 - uVar11;
      uVar5 = ((uVar10 | uVar8 >> (uVar9 & 0xff)) ^ uVar5 * -0x80000000) +
              (uVar5 + uVar11 * -0x10000 & 0xfffffffe) * 0x10;
      uVar10 = uVar3;
    }
    uVar14 = uVar14 | 0x20000000;
  }
  uVar8 = sub_080491E4(uVar3,uVar5,uVar9,uVar10);
  if ((uVar14 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  uVar14 = uVar14 & uVar8 << 0x10;
  if (uVar14 != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


/* sub_08047EF8 @ 0x08047EF8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08047EF8(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x7ff00000 - (param_2 & 0x7fffffff | (param_1 | -param_1) >> 0x1f);
  bVar3 = (bool)((byte)((uint)iVar2 >> 0x1e) & 1);
  if ((iVar2 < 0) || (sub_080540DC(param_1,param_2,0,0,param_4), bVar3)) {
    uVar1 = sub_08054420(param_1,param_2);
  }
  else {
    sub_080491CC(1);
    uVar1 = _sub_08047F64;
  }
  return uVar1;
}


/* sub_08047F64 @ 0x08047F64 */

void sub_08047F64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  int iVar1;
  int unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_1c = (uint)*(byte *)(unaff_r7 + 0x1f);
  uStack_18 = param_1;
  uStack_14 = param_3;
  uStack_10 = param_4;
  iVar1 = sub_08047F84(0,&uStack_24,&uStack_1c,&uStack_14,param_5);
  if (iVar1 == 0) {
    sub_08047FD4(2,param_5 & 0x7c000000);
    uStack_24 = 0;
    uStack_20 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08047f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uStack_24,uStack_20);
  return;
}


/* sub_08047F6C @ 0x08047F6C */

void sub_08047F6C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_1c = param_1;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  iVar1 = sub_08047F84(0,&uStack_24,&uStack_1c,&uStack_14,param_5);
  if (iVar1 == 0) {
    sub_08047FD4(2,param_5 & 0x7c000000);
    uStack_24 = 0;
    uStack_20 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08047f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uStack_24,uStack_20);
  return;
}


/* sub_08047F84 @ 0x08047F84 */

void sub_08047F84(int param_1)

{
  uint unaff_r4;
  undefined4 *unaff_r5;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    sub_08047FD4(2,unaff_r4 & 0x7c000000);
    *unaff_r5 = 0;
    unaff_r5[1] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08047f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(in_stack_00000004,in_stack_00000008);
  return;
}


/* sub_08047FAE @ 0x08047FAE */

undefined * sub_08047FAE(void)

{
  return &DAT_03005298;
}


/* sub_08047FB0 @ 0x08047FB0 */

undefined * sub_08047FB0(void)

{
  return &DAT_03005298;
}


/* sub_08047FB4 @ 0x08047FB4 */

undefined * sub_08047FB4(void)

{
  return &DAT_03005298;
}


/* sub_08047FC0 @ 0x08047FC0 */

void sub_08047FC0(void)

{
  sub_08047FB4();
  return;
}


/* sub_08047FC4 @ 0x08047FC4 */

void sub_08047FC4(void)

{
  sub_08047FB4();
  return;
}


/* sub_08047FD4 @ 0x08047FD4 */

undefined4 sub_08047FD4(void)

{
  int iVar1;
  
  iVar1 = sub_080491D8();
  if (iVar1 == 0) {
    return 0;
  }
  software_interrupt(0x123456);
  return 0x18;
}


/* sub_08047FD8 @ 0x08047FD8 */

undefined4 sub_08047FD8(void)

{
  int iVar1;
  
  iVar1 = sub_080491D8();
  if (iVar1 != 0) {
    software_interrupt(0x123456);
    return 0x18;
  }
  return 0;
}


/* sub_08047FF4 @ 0x08047FF4 */

void sub_08047FF4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = sub_08048006(0xffffffff,param_1);
  if (iVar1 == -1) {
    uVar2 = sub_08048054(param_1,param_2);
  }
  else {
    if (iVar1 != -3) {
      __call_via_r2(param_1,param_2);
    }
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08048018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


/* sub_08048006 @ 0x08048006 */

void sub_08048006(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == unaff_r6) {
    uVar1 = sub_08048054(unaff_r4,unaff_r5);
  }
  else {
    if (param_1 != -3) {
      __call_via_r2(unaff_r4,unaff_r5);
    }
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08048018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


/* sub_08048038 @ 0x08048038 */

undefined8 sub_08048038(void)

{
  software_interrupt(0x123456);
  return 0x2002600000018;
}


/* sub_0804803C @ 0x0804803C */

undefined8 sub_0804803C(void)

{
  software_interrupt(0x123456);
  return 0x2002600000018;
}


/* sub_08048054 @ 0x08048054 */

void sub_08048054(int param_1,code *param_2)

{
  char cVar1;
  code cVar2;
  code *pcVar3;
  char *pcVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  pcVar3 = (code *)&_080480EC;
  if (param_1 - 1U < 0xd) {
    pcVar4 = &UNK_087b7821 + param_1 * 0x17;
    if (param_1 == 2) {
      if ((int)param_2 << 5 < 0) {
        pcVar3 = (code *)"Invalid Operation";
      }
      else if (((uint)param_2 & 0x8000002) == 0) {
        if ((int)param_2 << 3 < 0) {
          pcVar3 = (code *)0x804811c;
        }
        else if ((int)param_2 << 2 < 0) {
          pcVar3 = (code *)0x8048128;
        }
        else if ((int)param_2 << 1 < 0) {
          pcVar3 = (code *)0x8048134;
        }
      }
      else {
        pcVar3 = sub_0804810C;
      }
    }
    else {
      pcVar3 = param_2;
      if (((param_1 != 8) && (pcVar3 = (code *)&_080480EC, param_1 == 9)) &&
         (param_2 == (code *)0x1)) {
        pcVar4 = ": Heap memory corrupted";
      }
    }
  }
  else {
    pcVar4 = "Unknown signal";
  }
  sub_08048174(10);
  cVar1 = *pcVar4;
  while (cVar1 != '\0') {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    sub_08048174(cVar1);
    cVar1 = *pcVar4;
  }
  cVar2 = *pcVar3;
  while (cVar2 != (code)0x0) {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    sub_08048174(cVar2);
    cVar2 = *pcVar3;
  }
  sub_08048174(10);
                    /* WARNING: Could not recover jumptable at 0x080480e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1);
  return;
}


/* sub_0804810C @ 0x0804810C */

undefined8 sub_0804810C(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  int unaff_r6;
  int iVar5;
  int iVar6;
  undefined1 unaff_r7;
  
  iVar3 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(unaff_r6 + 0x14);
  *(int *)(iVar3 + 0x54) = iVar3;
  *(undefined4 *)(param_4 + 0x54) = param_3;
  iVar5 = *(int *)(iVar5 + 0x74);
  *(undefined1 *)(param_2 + 0x19) = unaff_r7;
  *(char *)(iVar3 + 9) = (char)unaff_r5;
  iVar6 = *(int *)(iVar3 + 0x44);
  *(undefined1 *)(unaff_r5 + 0x1d) = unaff_r7;
  iVar4 = *(int *)(iVar5 + 100);
  *(int *)(iVar3 + 0x54) = iVar3;
  *(int *)(iVar6 + 100) = iVar5;
  iVar4 = *(int *)(iVar4 + 0x74);
  iVar3 = *(int *)(param_2 + 100);
  bVar1 = *(byte *)(iVar4 + 1);
  *(int *)(iVar4 + 0x34) = iVar3;
  *(int *)(iVar5 + 0x54) = iVar5;
  *(char *)(iVar6 + 0x15) = (char)param_4;
  *(char *)(bVar1 + 0x11) = (char)iVar4;
  *(undefined4 *)(iVar3 + 0x54) = 0x3a;
  *(char *)(iVar4 + 1) = (char)iVar3;
  iVar3 = *(int *)(iVar4 + 0x54);
  uVar2 = (undefined1)(iVar6 << 1);
  *(undefined1 *)(iVar3 + 9) = uVar2;
  *(char *)(iVar6 + 9) = (char)iVar5;
  *(char *)(iVar6 + 1) = (char)iVar3;
  *(int *)(iVar6 + 0x54) = iVar4;
  *(undefined1 *)(*(int *)(iVar5 + 100) + 0x1d) = uVar2;
  return CONCAT44(*(undefined4 *)(iVar4 * 2 + 0x44),0x6e);
}


/* sub_08048118 @ 0x08048118 */

undefined8 sub_08048118(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r4;
  int iVar4;
  int unaff_r5;
  int iVar5;
  int unaff_r6;
  int iVar6;
  undefined1 unaff_r7;
  
  iVar3 = *(int *)(unaff_r6 + 0x74);
  *(undefined1 *)(param_2 + 0x19) = unaff_r7;
  *(char *)(unaff_r4 + 9) = (char)unaff_r5;
  iVar6 = *(int *)(unaff_r4 + 0x44);
  *(undefined1 *)(unaff_r5 + 0x1d) = unaff_r7;
  iVar5 = *(int *)(iVar3 + 100);
  *(int *)(unaff_r4 + 0x54) = unaff_r4;
  *(int *)(iVar6 + 100) = iVar3;
  iVar4 = *(int *)(iVar5 + 0x74);
  iVar5 = *(int *)(param_2 + 100);
  bVar1 = *(byte *)(iVar4 + 1);
  *(int *)(iVar4 + 0x34) = iVar5;
  *(int *)(iVar3 + 0x54) = iVar3;
  *(undefined1 *)(iVar6 + 0x15) = param_4;
  *(char *)(bVar1 + 0x11) = (char)iVar4;
  *(undefined4 *)(iVar5 + 0x54) = 0x3a;
  *(char *)(iVar4 + 1) = (char)iVar5;
  iVar5 = *(int *)(iVar4 + 0x54);
  uVar2 = (undefined1)(iVar6 << 1);
  *(undefined1 *)(iVar5 + 9) = uVar2;
  *(char *)(iVar6 + 9) = (char)iVar3;
  *(char *)(iVar6 + 1) = (char)iVar5;
  *(int *)(iVar6 + 0x54) = iVar4;
  *(undefined1 *)(*(int *)(iVar3 + 100) + 0x1d) = uVar2;
  return CONCAT44(*(undefined4 *)(iVar4 * 2 + 0x44),0x6e);
}


/* sub_08048170 @ 0x08048170 */

void sub_08048170(void)

{
  return;
}


/* sub_08048174 @ 0x08048174 */

undefined8 sub_08048174(void)

{
  undefined1 local_8 [8];
  
  software_interrupt(0xab);
  return CONCAT44(local_8,3);
}


/* sub_08048186 @ 0x08048186 */

undefined4 sub_08048186(undefined4 param_1)

{
  return param_1;
}


/* sub_08048188 @ 0x08048188 */

void sub_08048188(void)

{
  return;
}


/* sub_0804818A @ 0x0804818A */

void sub_0804818A(void)

{
  DAT_03001034 = 0;
  return;
}


/* sub_0804818C @ 0x0804818C */

void sub_0804818C(void)

{
  DAT_03001034 = 0;
  return;
}


/* sub_08048198 @ 0x08048198 */

void sub_08048198(void)

{
  sub_08004838(&DAT_03001068);
  return;
}


/* sub_080481A8 @ 0x080481A8 */

void sub_080481A8(void)

{
  DAT_03001918 = &_0804ACF4;
  DAT_0300191c = 0x40;
  DAT_03001920 = &_0804ACF4;
  DAT_03001924 = 0x80;
  DAT_03001928 = &_0804ACF4;
  DAT_0300192c = 0x20;
  DAT_03001930 = &_0804ACF4;
  DAT_03001934 = 0x10;
  return;
}


/* sub_080481DC @ 0x080481DC */

void sub_080481DC(void)

{
  DAT_03001938 = &_08049BE4;
  return;
}


/* sub_080481EC @ 0x080481EC */

void sub_080481EC(void)

{
  DAT_0300193c = &_0804C12C;
  DAT_03001940 = 1;
  DAT_03001944 = &_0804C12C;
  DAT_03001948 = 0;
  DAT_0300194c = &_0804C12C;
  DAT_03001950 = 2;
  DAT_03001954 = &_0804C12C;
  DAT_03001958 = 3;
  return;
}


/* sub_08048220 @ 0x08048220 */

void sub_08048220(void)

{
  DAT_0300195c = &_0804A0AC;
  return;
}


/* sub_08048230 @ 0x08048230 */

void sub_08048230(void)

{
  DAT_03001960 = &_08049534;
  return;
}


/* sub_08048240 @ 0x08048240 */

void sub_08048240(void)

{
  DAT_03001964 = &_0804BE08;
  return;
}


/* sub_08048250 @ 0x08048250 */

void sub_08048250(void)

{
  DAT_03001990 = 0;
  DAT_03001994 = 0;
  DAT_03001998 = 0;
  DAT_0300199c = 0;
  return;
}


/* sub_08048264 @ 0x08048264 */

void sub_08048264(void)

{
  sub_08046FF4(&DAT_030019e8,&DAT_03001a00,8,0x8050761);
  sub_08046FF4(&DAT_03001a00,&DAT_03001a30,0xc,0x8050791);
  return;
}


/* sub_08048298 @ 0x08048298 */

void sub_08048298(void)

{
  DAT_03001a6c = 0;
  return;
}


/* sub_080482A4 @ 0x080482A4 */

void sub_080482A4(void)

{
  DAT_03001af0 = &_0804AEE8;
  return;
}


/* sub_080482B4 @ 0x080482B4 */

void sub_080482B4(void)

{
  DAT_03001af4 = &_08049A1C;
  return;
}


/* sub_080482C4 @ 0x080482C4 */

void sub_080482C4(void)

{
  DAT_03001b00 = &_0804985C;
  DAT_03001b10 = &_0804D784;
  DAT_03001b14 = 3;
  DAT_03001b18 = &_0804D784;
  DAT_03001b1c = 4;
  DAT_03001b20 = &_0804C720;
  DAT_03001b24 = 3;
  DAT_03001b28 = &_0804C720;
  DAT_03001b2c = 4;
  DAT_03001b34 = 3;
  DAT_03001b30 = &_0804E0AC;
  DAT_03001b3c = 2;
  DAT_03001b38 = &_0804E0AC;
  DAT_03001b04 = &_0804A188;
  DAT_03001b44 = 5;
  DAT_03001b40 = &_0804A730;
  DAT_03001b4c = 3;
  DAT_03001b48 = &_08049E40;
  DAT_03001b54 = 2;
  DAT_03001b50 = &_0804C35C;
  DAT_03001b08 = &_0804A1AC;
  DAT_03001b0c = &_0804A77C;
  DAT_03001b5c = 3;
  DAT_03001b58 = &_0804A1D0;
  return;
}


/* sub_08048378 @ 0x08048378 */

void sub_08048378(void)

{
  DAT_03001b60 = &_0804C464;
  DAT_03001b64 = &_0804DA40;
  DAT_03001b68 = &_0804E110;
  DAT_03001b6c = &_0804E194;
  DAT_03001b70 = &_0804C474;
  DAT_03001b74 = &_0804CD8C;
  DAT_03001b78 = &_0804D868;
  DAT_03001b7c = &_0804DF3C;
  DAT_03001b80 = &_0804DA50;
  DAT_03001b84 = &_0804E054;
  DAT_03001b88 = &_0804E40C;
  DAT_03001b8c = &_0804E374;
  return;
}


/* sub_080483F8 @ 0x080483F8 */

void sub_080483F8(void)

{
  DAT_03001b90 = 0;
  return;
}


/* sub_08048404 @ 0x08048404 */

void sub_08048404(void)

{
  DAT_03001ba4 = &_0804A214;
  return;
}


/* sub_08048414 @ 0x08048414 */

void sub_08048414(void)

{
  DAT_03001bb0 = 0;
  return;
}


/* sub_08048420 @ 0x08048420 */

void sub_08048420(void)

{
  DAT_03001c3c = &_0804B2F8;
  DAT_03001c40 = &_0804AB6C;
  return;
}


/* sub_0804843C @ 0x0804843C */

void sub_0804843C(void)

{
  DAT_03001c50 = 0;
  DAT_03001e54 = 0;
  DAT_03002058 = 0;
  DAT_0300225c = 0;
  DAT_03002844 = 0;
  DAT_03002a4c = &_08049274;
  DAT_03001c48 = 0;
  DAT_03001c44 = &_08049670;
  return;
}


/* sub_08048488 @ 0x08048488 */

void sub_08048488(void)

{
  DAT_03002a64 = 0;
  return;
}


/* sub_08048494 @ 0x08048494 */

void sub_08048494(void)

{
  DAT_03002b38 = &_0804C384;
  DAT_03002b40 = 3;
  DAT_03002b3c = &_0804BEF0;
  DAT_03002b44 = &_0804C790;
  DAT_03002b50 = 3;
  DAT_03002b4c = &_0804C3A8;
  DAT_03002b58 = 3;
  DAT_03002b54 = &_0804E00C;
  return;
}


/* sub_080484D8 @ 0x080484D8 */

void sub_080484D8(void)

{
  return;
}


/* sub_080484DA @ 0x080484DA */

void sub_080484DA(void)

{
  DAT_03002b98 = &_080497A4;
  return;
}


/* sub_080484DC @ 0x080484DC */

void sub_080484DC(void)

{
  DAT_03002b98 = &_080497A4;
  return;
}


/* sub_080484EC @ 0x080484EC */

void sub_080484EC(void)

{
  DAT_03002ba0 = 3;
  DAT_03002b9c = &_0804AE14;
  return;
}


/* sub_08048500 @ 0x08048500 */

void sub_08048500(void)

{
  DAT_03002ba4 = &_08049A4C;
  return;
}


/* sub_08048510 @ 0x08048510 */

void sub_08048510(void)

{
  DAT_03002ba8 = &_080497E4;
  return;
}


/* sub_08048520 @ 0x08048520 */

void sub_08048520(void)

{
  DAT_03002bb8 = 4;
  DAT_03002bb4 = &_0804CC58;
  DAT_03002bc0 = 4;
  DAT_03002bbc = &_0804DCA4;
  return;
}


/* sub_08048544 @ 0x08048544 */

void sub_08048544(void)

{
  DAT_03002bcc = &_0804AD78;
  return;
}


/* sub_08048554 @ 0x08048554 */

void sub_08048554(void)

{
  DAT_03002bd0 = &_080495F4;
  return;
}


/* sub_08048564 @ 0x08048564 */

void sub_08048564(void)

{
  DAT_03002bd4 = &_08049E9C;
  return;
}


/* sub_08048574 @ 0x08048574 */

void sub_08048574(void)

{
  DAT_03002bd8 = 0;
  DAT_03002be4 = 0;
  DAT_03002be0 = &DAT_03001964;
  return;
}


/* sub_0804858C @ 0x0804858C */

void sub_0804858C(void)

{
  DAT_03002da0 = &_080492B4;
  DAT_03002f34 = &_0804931C;
  return;
}


/* sub_080485A8 @ 0x080485A8 */

void sub_080485A8(void)

{
  DAT_03002f4c = &_0804AA08;
  return;
}


/* sub_080485B8 @ 0x080485B8 */

void sub_080485B8(void)

{
  DAT_03002fa8 = &_0804C6FC;
  DAT_03002fac = &_0804AD58;
  return;
}


/* sub_080485D4 @ 0x080485D4 */

void sub_080485D4(void)

{
  DAT_03002fc0 = &_080499FC;
  return;
}


/* sub_080485E4 @ 0x080485E4 */

void sub_080485E4(void)

{
  DAT_03002fc4 = &_0804ADF0;
  DAT_03002fc8 = &_08049C18;
  return;
}


/* sub_08048600 @ 0x08048600 */

void sub_08048600(void)

{
  DAT_03002fcc = &_0804CC10;
  DAT_03002fd4 = &_0804B110;
  return;
}


/* sub_0804861C @ 0x0804861C */

void sub_0804861C(void)

{
  DAT_03002fd8 = &_0804BEA8;
  DAT_03002fdc = &_0804A6A0;
  return;
}


/* sub_08048638 @ 0x08048638 */

void sub_08048638(void)

{
  DAT_03002fe0 = &_08049E30;
  return;
}


/* sub_08048648 @ 0x08048648 */

void sub_08048648(void)

{
  DAT_03002fe8 = &_0804AA94;
  return;
}


/* sub_08048658 @ 0x08048658 */

void sub_08048658(void)

{
  DAT_03002fec = &_0804A6B0;
  return;
}


/* sub_08048668 @ 0x08048668 */

void sub_08048668(void)

{
  DAT_03002ff0 = &_0804985C;
  DAT_03002ff4 = &_0804BD00;
  return;
}


/* sub_08048684 @ 0x08048684 */

void sub_08048684(void)

{
  DAT_03002ff8 = &_0804D6BC;
  return;
}


/* sub_08048694 @ 0x08048694 */

void sub_08048694(void)

{
  DAT_03002ffc = &_0804A700;
  DAT_03003000 = &_0804AAE4;
  return;
}


/* sub_080486B0 @ 0x080486B0 */

void sub_080486B0(void)

{
  DAT_03003004 = &_0804D6F0;
  DAT_0300300c = &_0804C164;
  return;
}


/* sub_080486CC @ 0x080486CC */

void sub_080486CC(void)

{
  DAT_03003018 = 3;
  DAT_03003014 = &_0804B740;
  DAT_03003010 = &_0804A0D0;
  return;
}


/* sub_080486EC @ 0x080486EC */

void sub_080486EC(void)

{
  DAT_0300301c = &_0804C23C;
  DAT_03003020 = &_0804AA1C;
  return;
}


/* sub_08048708 @ 0x08048708 */

void sub_08048708(void)

{
  DAT_03003024 = &_0804BE18;
  DAT_03003028 = &_0804A638;
  return;
}


/* sub_08048724 @ 0x08048724 */

void sub_08048724(void)

{
  DAT_03003030 = &_0804BE3C;
  DAT_03003034 = &_0804A648;
  return;
}


/* sub_08048740 @ 0x08048740 */

void sub_08048740(void)

{
  DAT_0300303c = &_0804C260;
  DAT_03003040 = &_0804AA2C;
  return;
}


/* sub_0804875C @ 0x0804875C */

void sub_0804875C(void)

{
  DAT_0300304c = &_0804C2A8;
  DAT_03003054 = &_0804AA4C;
  return;
}


/* sub_08048778 @ 0x08048778 */

void sub_08048778(void)

{
  DAT_0300305c = &_0804D37C;
  DAT_03003058 = &_0804BCF0;
  return;
}


/* sub_08048794 @ 0x08048794 */

void sub_08048794(void)

{
  DAT_03003064 = &_0804C1A4;
  return;
}


/* sub_080487A4 @ 0x080487A4 */

void sub_080487A4(void)

{
  DAT_03003068 = &_0804D358;
  DAT_0300306c = &_0804BCE0;
  return;
}


/* sub_080487C0 @ 0x080487C0 */

void sub_080487C0(void)

{
  DAT_03003070 = &_0804C1C4;
  return;
}


/* sub_080487D0 @ 0x080487D0 */

void sub_080487D0(void)

{
  DAT_03003074 = &_0804CD18;
  DAT_03003078 = &_0804B200;
  return;
}


/* sub_080487EC @ 0x080487EC */

void sub_080487EC(void)

{
  DAT_0300307c = &_0804B168;
  return;
}


/* sub_080487FC @ 0x080487FC */

void sub_080487FC(void)

{
  DAT_03003080 = &_0804B178;
  return;
}


/* sub_0804880C @ 0x0804880C */

void sub_0804880C(void)

{
  DAT_03003090 = 3;
  DAT_0300308c = &_0804CCCC;
  DAT_03003088 = &_0804B1D0;
  return;
}


/* sub_0804882C @ 0x0804882C */

void sub_0804882C(void)

{
  DAT_030030a0 = &_0804BD88;
  return;
}


/* sub_0804883C @ 0x0804883C */

void sub_0804883C(void)

{
  DAT_030030a4 = &_0804B158;
  return;
}


/* sub_0804884C @ 0x0804884C */

void sub_0804884C(void)

{
  DAT_030030a8 = &_0804CCF4;
  DAT_030030ac = &_0804B1F0;
  return;
}


/* sub_08048868 @ 0x08048868 */

void sub_08048868(void)

{
  DAT_030030b0 = &_0804D7AC;
  DAT_030030b4 = &_0804C1FC;
  return;
}


/* sub_08048884 @ 0x08048884 */

void sub_08048884(void)

{
  DAT_030030b8 = &_0804C650;
  return;
}


/* sub_08048894 @ 0x08048894 */

void sub_08048894(void)

{
  DAT_030030c0 = &_0804B0D8;
  return;
}


/* sub_080488A4 @ 0x080488A4 */

void sub_080488A4(void)

{
  DAT_030030c4 = &_0804A690;
  return;
}


/* sub_080488B4 @ 0x080488B4 */

void sub_080488B4(void)

{
  DAT_030030c8 = &_0804D334;
  DAT_030030cc = &_0804BCD0;
  return;
}


/* sub_080488D0 @ 0x080488D0 */

void sub_080488D0(void)

{
  DAT_030030d0 = &_0804C2F0;
  DAT_030030d4 = &_0804AA74;
  return;
}


/* sub_080488EC @ 0x080488EC */

void sub_080488EC(void)

{
  DAT_030030d8 = &_0804D2C8;
  return;
}


/* sub_080488FC @ 0x080488FC */

void sub_080488FC(void)

{
  DAT_030030dc = &_0804CB38;
  return;
}


/* sub_0804890C @ 0x0804890C */

void sub_0804890C(void)

{
  DAT_030030e0 = &_0804DBF0;
  DAT_030030e4 = &_0804CBA0;
  return;
}


/* sub_08048928 @ 0x08048928 */

void sub_08048928(void)

{
  DAT_030030f0 = 3;
  DAT_030030ec = &_0804B7D0;
  DAT_030030e8 = &_0804A148;
  return;
}


/* sub_08048948 @ 0x08048948 */

void sub_08048948(void)

{
  DAT_030030f8 = &_0804BCC0;
  return;
}


/* sub_08048958 @ 0x08048958 */

void sub_08048958(void)

{
  DAT_030030fc = &_08049A5C;
  return;
}


/* sub_08048968 @ 0x08048968 */

void sub_08048968(void)

{
  DAT_03003104 = 3;
  DAT_03003100 = &_0804CC80;
  return;
}


/* sub_0804897C @ 0x0804897C */

void sub_0804897C(void)

{
  DAT_03003108 = &_0804BE84;
  DAT_03003110 = &_0804A680;
  return;
}


/* sub_08048998 @ 0x08048998 */

void sub_08048998(void)

{
  DAT_03003114 = &_0804AA84;
  return;
}


/* sub_080489A8 @ 0x080489A8 */

void sub_080489A8(void)

{
  DAT_0300311c = 2;
  DAT_03003118 = &_0804B840;
  return;
}


/* sub_080489BC @ 0x080489BC */

void sub_080489BC(void)

{
  DAT_03003120 = &_0804D944;
  DAT_03003124 = &_0804C620;
  return;
}


/* sub_080489D8 @ 0x080489D8 */

void sub_080489D8(void)

{
  DAT_03003128 = &_0804CBEC;
  DAT_0300312c = &_0804B0A0;
  return;
}


/* sub_080489F4 @ 0x080489F4 */

void sub_080489F4(void)

{
  DAT_03003130 = &_0804DE34;
  DAT_03003134 = &_0804CFCC;
  return;
}


/* sub_08048A10 @ 0x08048A10 */

void sub_08048A10(void)

{
  DAT_03003138 = &_0804A658;
  return;
}


/* sub_08048A20 @ 0x08048A20 */

void sub_08048A20(void)

{
  DAT_0300313c = &_08049BF8;
  return;
}


/* sub_08048A30 @ 0x08048A30 */

void sub_08048A30(void)

{
  DAT_03003140 = &_08049DB8;
  return;
}


/* sub_08048A40 @ 0x08048A40 */

void sub_08048A40(void)

{
  DAT_03003144 = &_08049EAC;
  DAT_0300314c = &_0804C284;
  DAT_03003148 = &_0804AA3C;
  return;
}


/* sub_08048A64 @ 0x08048A64 */

void sub_08048A64(void)

{
  DAT_03003158 = &_0804B788;
  DAT_03003154 = &_0804A110;
  return;
}


/* sub_08048A80 @ 0x08048A80 */

void sub_08048A80(void)

{
  DAT_03003170 = &_0804CB90;
  return;
}


/* sub_08048A90 @ 0x08048A90 */

void sub_08048A90(void)

{
  DAT_03003174 = 0;
  return;
}


/* sub_08048A9C @ 0x08048A9C */

void sub_08048A9C(void)

{
  DAT_030031f8 = &_0804BD78;
  return;
}


/* sub_08048AAC @ 0x08048AAC */

void sub_08048AAC(void)

{
  DAT_030031fc = &_0804B148;
  return;
}


/* sub_08048ABC @ 0x08048ABC */

void sub_08048ABC(void)

{
  DAT_03003200 = &_0804AAD4;
  return;
}


/* sub_08048ACC @ 0x08048ACC */

void sub_08048ACC(void)

{
  DAT_03003204 = &_0804B710;
  return;
}


/* sub_08048ADC @ 0x08048ADC */

void sub_08048ADC(void)

{
  DAT_03003208 = &_0804ADB0;
  return;
}


/* sub_08048AEC @ 0x08048AEC */

void sub_08048AEC(void)

{
  DAT_0300320c = &_0804C1D4;
  return;
}


/* sub_08048AFC @ 0x08048AFC */

void sub_08048AFC(void)

{
  DAT_03003214 = &_0804CCA4;
  DAT_03003218 = 3;
  DAT_03003210 = &_0804B1B0;
  return;
}


/* sub_08048B1C @ 0x08048B1C */

void sub_08048B1C(void)

{
  DAT_0300321c = &_0804C660;
  return;
}


/* sub_08048B2C @ 0x08048B2C */

void sub_08048B2C(void)

{
  DAT_03003220 = &_0804D6AC;
  return;
}


/* sub_08048B3C @ 0x08048B3C */

void sub_08048B3C(void)

{
  DAT_03003224 = &_0804D69C;
  return;
}


/* sub_08048B4C @ 0x08048B4C */

void sub_08048B4C(void)

{
  DAT_0300322c = &_0804D968;
  DAT_03003230 = &_0804BD48;
  return;
}


/* sub_08048B68 @ 0x08048B68 */

void sub_08048B68(void)

{
  DAT_03003234 = &_0804E064;
  DAT_03003238 = &_0804D934;
  return;
}


/* sub_08048B84 @ 0x08048B84 */

void sub_08048B84(void)

{
  DAT_0300323c = &_0804DBCC;
  DAT_03003240 = &_0804CB70;
  return;
}


/* sub_08048BA0 @ 0x08048BA0 */

void sub_08048BA0(void)

{
  DAT_03003244 = &_0804BD68;
  return;
}


/* sub_08048BB0 @ 0x08048BB0 */

void sub_08048BB0(void)

{
  DAT_03003248 = &_0804E170;
  DAT_0300324c = &_0804BD38;
  return;
}


/* sub_08048BCC @ 0x08048BCC */

void sub_08048BCC(void)

{
  DAT_03003250 = &_0804B220;
  return;
}


/* sub_08048BDC @ 0x08048BDC */

void sub_08048BDC(void)

{
  DAT_03003254 = &_0804D45C;
  return;
}


/* sub_08048BEC @ 0x08048BEC */

void sub_08048BEC(void)

{
  DAT_03003258 = &_0804AD48;
  return;
}


/* sub_08048BFC @ 0x08048BFC */

void sub_08048BFC(void)

{
  DAT_0300325c = &_0804D310;
  DAT_03003260 = &_0804BC78;
  return;
}


/* sub_08048C18 @ 0x08048C18 */

void sub_08048C18(void)

{
  DAT_03003264 = &_0804CBC8;
  DAT_03003268 = &_0804B090;
  return;
}


/* sub_08048C34 @ 0x08048C34 */

void sub_08048C34(void)

{
  DAT_0300326c = &_0804B764;
  DAT_03003270 = &_0804A0F0;
  return;
}


/* sub_08048C50 @ 0x08048C50 */

void sub_08048C50(void)

{
  DAT_03003274 = &_0804CFA8;
  return;
}


/* sub_08048C60 @ 0x08048C60 */

void sub_08048C60(void)

{
  DAT_03003278 = &_0804C6D8;
  DAT_0300327c = &_0804AD28;
  return;
}


/* sub_08048C7C @ 0x08048C7C */

void sub_08048C7C(void)

{
  DAT_03003280 = &_0804C1B4;
  return;
}


/* sub_08048C8C @ 0x08048C8C */

void sub_08048C8C(void)

{
  DAT_03003290 = 3;
  DAT_0300328c = &_0804C7B4;
  DAT_03003288 = &_0804AD88;
  return;
}


/* sub_08048CAC @ 0x08048CAC */

void sub_08048CAC(void)

{
  DAT_03003294 = &_0804CFF0;
  DAT_0300329c = &_0804B630;
  return;
}


/* sub_08048CC8 @ 0x08048CC8 */

void sub_08048CC8(void)

{
  DAT_030032a0 = &_0804D014;
  DAT_030032a4 = &_0804B668;
  return;
}


/* sub_08048CE4 @ 0x08048CE4 */

void sub_08048CE4(void)

{
  DAT_030032a8 = &_0804B688;
  return;
}


/* sub_08048CF4 @ 0x08048CF4 */

void sub_08048CF4(void)

{
  DAT_030032ac = &_0804CB00;
  return;
}


/* sub_08048D04 @ 0x08048D04 */

void sub_08048D04(void)

{
  DAT_030032b0 = &_0804BC88;
  return;
}


/* sub_08048D14 @ 0x08048D14 */

void sub_08048D14(void)

{
  DAT_030032b4 = &_0804DF74;
  return;
}


/* sub_08048D24 @ 0x08048D24 */

void sub_08048D24(void)

{
  DAT_030032b8 = &_0804CC34;
  return;
}


/* sub_08048D34 @ 0x08048D34 */

void sub_08048D34(void)

{
  DAT_030032c0 = 3;
  DAT_030032bc = &_0804D3A0;
  return;
}


/* sub_08048D48 @ 0x08048D48 */

void sub_08048D48(void)

{
  DAT_030032c4 = &_0804D68C;
  return;
}


/* sub_08048D58 @ 0x08048D58 */

void sub_08048D58(void)

{
  DAT_030032c8 = &_0804C3F0;
  return;
}


/* sub_08048D68 @ 0x08048D68 */

void sub_08048D68(void)

{
  DAT_030032cc = &_0804D7F4;
  return;
}


/* sub_08048D78 @ 0x08048D78 */

void sub_08048D78(void)

{
  DAT_030032d0 = &_0804B81C;
  return;
}


/* sub_08048D88 @ 0x08048D88 */

void sub_08048D88(void)

{
  DAT_030032d4 = &_0804C680;
  return;
}


/* sub_08048D98 @ 0x08048D98 */

void sub_08048D98(void)

{
  DAT_030032d8 = &_0804DE24;
  return;
}


/* sub_08048DA8 @ 0x08048DA8 */

void sub_08048DA8(void)

{
  DAT_030032e0 = &_0804B0E8;
  return;
}


/* sub_08048DB8 @ 0x08048DB8 */

void sub_08048DB8(void)

{
  DAT_030032e8 = &_0804C140;
  return;
}


/* sub_08048DC8 @ 0x08048DC8 */

void sub_08048DC8(void)

{
  DAT_030032f0 = &_0804A100;
  return;
}


/* sub_08048DD8 @ 0x08048DD8 */

void sub_08048DD8(void)

{
  DAT_030032f4 = &_0804B7F8;
  DAT_030032f8 = &_0804A158;
  return;
}


/* sub_08048DF4 @ 0x08048DF4 */

void sub_08048DF4(void)

{
  DAT_030032fc = &_0804D2D8;
  return;
}


/* sub_08048E04 @ 0x08048E04 */

void sub_08048E04(void)

{
  DAT_0300348c = &_080493C8;
  DAT_03003490 = &_0804956C;
  return;
}


/* sub_08048E20 @ 0x08048E20 */

void sub_08048E20(void)

{
  DAT_03004a70 = &_08049834;
  DAT_03004a74 = &_0804A7D0;
  return;
}


/* sub_08048E3C @ 0x08048E3C */

void sub_08048E3C(void)

{
  DAT_03001964 = &_0804984C;
  return;
}


/* sub_08048E4C @ 0x08048E4C */

void sub_08048E4C(void)

{
  DAT_03001af0 = &_080493E4;
  return;
}


/* sub_08048E5C @ 0x08048E5C */

void sub_08048E5C(void)

{
  DAT_03001c44 = &_08049AF0;
  DAT_03002a4c = &_0804E454;
  return;
}


/* sub_08048E7C @ 0x08048E7C */

void sub_08048E7C(void)

{
  DAT_03002bd4 = &_08049AE0;
  return;
}


/* sub_08048E8C @ 0x08048E8C */

void sub_08048E8C(void)

{
  undefined4 in_r3;
  
  if (DAT_03002bd8 != (int *)0x0) {
    __call_via_r2(DAT_03002bd8,1,*(int *)*DAT_03002bd8 + *DAT_03002bd8,in_r3,in_r3);
  }
  return;
}


/* sub_08048EA8 @ 0x08048EA8 */

void sub_08048EA8(void)

{
  DAT_03003490 = &_080491F0;
  DAT_0300348c = &_080491F0;
  return;
}


/* sub_08048EBC @ 0x08048EBC */

void sub_08048EBC(void)

{
  DAT_03004a74 = &_08049AE0;
  DAT_03004a70 = &_08049320;
  return;
}


/* sub_08049114 @ 0x08049114 */

void sub_08049114(void)

{
  sub_08046AEC();
  return;
}


/* sub_08049120 @ 0x08049120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049120(int a0,int a1,int a2,int a3)

{
  int iVar1;
  
  iVar1 = sub_08049124(a0,a1,a2,a3);
  return iVar1;
}


/* sub_08049124 @ 0x08049124 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049124(int a0,int a1,int a2,int a3)

{
  int iVar1;
  
  iVar1 = Wfz_Decompress(a0,a1,a2,a3);
  return iVar1;
}


/* sub_0804912C @ 0x0804912C */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_0804912C(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_08049130(a0,a1,a2);
  return iVar1;
}


/* sub_08049130 @ 0x08049130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049130(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_030007A8(a0,a1,a2);
  return iVar1;
}


/* sub_08049138 @ 0x08049138 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049138(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_0804913C(a0,a1,a2);
  return iVar1;
}


/* sub_0804913C @ 0x0804913C */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_0804913C(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_03000768(a0,a1,a2);
  return iVar1;
}


/* sub_08049144 @ 0x08049144 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049144(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_08049148(a0,a1,a2);
  return iVar1;
}


/* sub_08049148 @ 0x08049148 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049148(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_030007FC(a0,a1,a2);
  return iVar1;
}


/* sub_08049150 @ 0x08049150 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049150(int a0,int a1)

{
  int iVar1;
  
  iVar1 = sub_08049154(a0,a1);
  return iVar1;
}


/* sub_08049154 @ 0x08049154 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049154(int a0,int a1)

{
  int iVar1;
  
  iVar1 = sub_03000388(a0,a1);
  return iVar1;
}


/* sub_0804915C @ 0x0804915C */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_0804915C(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_08049160(a0,a1,a2);
  return iVar1;
}


/* sub_08049160 @ 0x08049160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049160(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_030004C0(a0,a1,a2);
  return iVar1;
}


/* sub_08049168 @ 0x08049168 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049168(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_0804916C(a0,a1,a2);
  return iVar1;
}


/* sub_0804916C @ 0x0804916C */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_0804916C(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_03000858(a0,a1,a2);
  return iVar1;
}


/* sub_08049174 @ 0x08049174 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049174(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_08049178(a0,a1,a2);
  return iVar1;
}


/* sub_08049178 @ 0x08049178 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049178(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_03000560(a0,a1,a2);
  return iVar1;
}


/* sub_08049180 @ 0x08049180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049180(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_08049184(a0,a1,a2);
  return iVar1;
}


/* sub_08049184 @ 0x08049184 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049184(int a0,int a1,int a2)

{
  int iVar1;
  
  iVar1 = sub_03000700(a0,a1,a2);
  return iVar1;
}


/* sub_0804918C @ 0x0804918C */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_0804918C(int a0,int a1,int a2,int a3)

{
  int iVar1;
  
  iVar1 = sub_08049190(a0,a1,a2,a3);
  return iVar1;
}


/* sub_08049190 @ 0x08049190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08049190(int a0,int a1,int a2,int a3)

{
  int iVar1;
  
  iVar1 = sub_030002DC(a0,a1,a2,a3);
  return iVar1;
}


/* sub_08049198 @ 0x08049198 */

void sub_08049198(void)

{
  sub_0804919C();
  return;
}


/* sub_0804919C @ 0x0804919C */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_0804919C(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 unaff_r10;
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


/* sub_080491A0 @ 0x080491A0 */

void sub_080491A0(void)

{
  sub_080491A4();
  return;
}


/* sub_080491A4 @ 0x080491A4 */

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

uint sub_080491A4(uint param_1,uint param_2,uint param_3,uint param_4)

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


/* sub_080491A8 @ 0x080491A8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_080491A8(int a0,int a1,int a2,int a3)

{
  int iVar1;
  
  iVar1 = sub_080491AC(a0,a1,a2,a3);
  return iVar1;
}


/* sub_080491AC @ 0x080491AC */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_080491AC(int a0,int a1,int a2,int a3)

{
  int iVar1;
  
  iVar1 = sub_03000CA0(a0,a1,a2,a3);
  return iVar1;
}


/* sub_080491B4 @ 0x080491B4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_080491B4(int a0,int a1,int a2,int a3)

{
  int iVar1;
  
  iVar1 = sub_080491B8(a0,a1,a2,a3);
  return iVar1;
}


/* sub_080491B8 @ 0x080491B8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_080491B8(int a0,int a1,int a2,int a3)

{
  int iVar1;
  
  iVar1 = sub_03000A4C(a0,a1,a2,a3);
  return iVar1;
}


/* sub_080491C0 @ 0x080491C0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_080491C0(void)

{
  int iVar1;
  
  iVar1 = sub_080491C4();
  return iVar1;
}


/* sub_080491C4 @ 0x080491C4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_080491C4(void)

{
  int iVar1;
  
  iVar1 = sub_03000000();
  return iVar1;
}


/* sub_080491CC @ 0x080491CC */

void sub_080491CC(void)

{
  sub_08047696();
  return;
}


/* sub_080491D8 @ 0x080491D8 */

void sub_080491D8(void)

{
  sub_08047FF4();
  return;
}


/* sub_080491E4 @ 0x080491E4 */

void sub_080491E4(void)

{
  sub_08047F6C();
  return;
}


/* sub_0804992C @ 0x0804992C */

void sub_0804992C(int param_1)

{
  bool in_ZR;
  
  if (in_ZR) {
    param_1 = 0;
  }
  sub_08014BE2(param_1 + -0x114);
  return;
}


/* sub_08049950 @ 0x08049950 */

void sub_08049950(int param_1)

{
  sub_08014C06(param_1 + -0x114);
  return;
}


/* sub_08049964 @ 0x08049964 */

void sub_08049964(int param_1)

{
  sub_08014C30(param_1 + -0x114);
  return;
}


