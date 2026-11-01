/* Ghidra reference decompilation of code_0800CB14 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0800CB14 @ 0x0800CB14 */

undefined4 * sub_0800CB14(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x5c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800CEF4(param_1,param_2,param_3);
  *param_1 = &_0804E288;
  *(undefined1 *)(param_1 + 2) = 0x38;
  param_1[1] = *(undefined4 *)(param_2 + 0xc);
  puVar1 = param_1 + 0x15;
  param_1[0x11] = (int)(param_1[9] + param_1[0xb]) >> 1;
  param_1[0xd] = param_1[0xb] - param_1[9];
  param_1[0x12] = param_1[0xc];
  iVar2 = param_1[0xc] - param_1[10];
  param_1[0xf] = 0;
  param_1[0xe] = iVar2;
  param_1[0x10] = iVar2 * 0x80;
  *puVar1 = 0xf000;
  if (*(char *)(param_1[8] + 0x16) == '(') {
    *puVar1 = 0x1b800;
  }
  if (*(char *)(param_1[8] + 0x16) == '<') {
    if (0x10 < (int)param_1[0xd]) {
      param_1[0x12] = param_1[0xc] * 3 + param_1[10] >> 2;
      param_1[0x10] = (int)param_1[0x10] / 2;
    }
    *puVar1 = 0;
  }
  return param_1;
}


/* sub_0800CBA8 @ 0x0800CBA8 */

int sub_0800CBA8(int param_1)

{
  int iVar1;
  int iVar2;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    if ((((*(int *)(param_1 + 0x44) < DAT_030019bc) || (DAT_030019c4 <= *(int *)(param_1 + 0x44)))
        || (*(int *)(param_1 + 0x48) < DAT_030019c0)) || (DAT_030019c8 <= *(int *)(param_1 + 0x48)))
    {
      iVar1 = 0;
    }
    else {
      iStack_14 = *(int *)(param_1 + 0x44) << 10;
      iStack_10 = *(int *)(param_1 + 0x48) << 10;
      uStack_c = *(undefined4 *)(param_1 + 0x54);
      sub_0802F1C6(&DAT_030019a4,&iStack_14,&iStack_1c,&iStack_24,&iStack_18);
      if (iStack_1c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iStack_18 * 10 >> 0xc;
        *(int *)(param_1 + 0x58) = iVar1;
        if (iVar1 < 0x80) {
          *(undefined4 *)(param_1 + 0x58) = 0x80;
        }
        software_interrupt(6);
        iVar2 = *(int *)(param_1 + 0x34);
        iVar1 = (iStack_24 - *(int *)(param_1 + 0x3c)) - iVar2;
        *(int *)(param_1 + 0x4c) = iVar1;
        if (iVar1 < 0xf0) {
          if (iVar1 + iVar2 * 2 < 0 == SBORROW4(iVar1,iVar2 * -2)) {
            software_interrupt(6);
            iVar2 = *(int *)(param_1 + 0x38);
            iVar1 = (iStack_20 - *(int *)(param_1 + 0x40)) - iVar2;
            *(int *)(param_1 + 0x50) = iVar1;
            if (iVar1 < 0xa0) {
              if (iVar1 + iVar2 * 2 < 0 == SBORROW4(iVar1,iVar2 * -2)) {
                *(int *)(param_1 + 4) = -iStack_18;
                iVar1 = 1;
              }
              else {
                iVar1 = 0;
              }
            }
            else {
              iVar1 = 0;
            }
          }
          else {
            iVar1 = 0;
          }
        }
        else {
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}


/* sub_0800CC6C @ 0x0800CC6C */

undefined4 sub_0800CC6C(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = param_2[2];
  if (iVar3 < 0x10) {
    puVar1 = (uint *)*param_2;
    *param_2 = puVar1 + 2;
    iVar2 = param_2[1];
    param_2[1] = iVar2 + 0x20;
    param_2[2] = iVar3 + 1;
    uVar4 = *(uint *)(*(int *)(param_1 + 0x20) + 0x10);
    *puVar1 = uVar4 | 0x300;
    uVar5 = (uint)(*(int *)(param_1 + 0x4c) << 0x17) >> 7;
    *puVar1 = uVar4 & 0xfe00ffff | 0x300 | uVar5;
    uVar6 = *(uint *)(param_1 + 0x50) & 0xff;
    *puVar1 = uVar4 & 0xfe00ff00 | 0x300 | uVar5 | uVar6;
    uVar8 = puVar1[1];
    uVar7 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    puVar1[1] = uVar7 | uVar8 & 0xfffff3ff;
    puVar1[1] = uVar7 | uVar8 & 0xfffff000 | *(ushort *)(param_1 + 0x16) & 0x3ff;
    *puVar1 = (uint)(iVar3 << 0x1b) >> 2 | uVar4 & 0xc000ff00 | 0x300 | uVar5 | uVar6;
    *(short *)(iVar2 + 6) = (short)*(undefined4 *)(param_1 + 0x58);
    *(undefined2 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0x16) = 0;
    *(short *)(iVar2 + 0x1e) = (short)*(undefined4 *)(param_1 + 0x58);
  }
  return 0;
}


/* sub_0800CD00 @ 0x0800CD00 */

void sub_0800CD00(int param_1)

{
  int a1;
  
  a1 = sub_0803D5B8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x2c) + 4));
  Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x2c),a1);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0x16) * 0x20),a1,
               *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x2c) + 4));
  sub_0803D63C(a1);
  return;
}


/* sub_0800CD36 @ 0x0800CD36 */

void sub_0800CD36(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x2c) + 4))
  ;
  *(undefined2 *)(param_1 + 0x16) = uVar1;
  sub_0800CD00(param_1);
  return;
}


/* sub_0800CD52 @ 0x0800CD52 */

undefined2 sub_0800CD52(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x16) == -1) {
    uVar1 = sub_0801124C(&DAT_03001c4c,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0x16) = uVar1;
    sub_0800CD00(param_1);
  }
  return *(undefined2 *)(param_1 + 0x16);
}


/* sub_0800CD78 @ 0x0800CD78 */

undefined4 * sub_0800CD78(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_0800CB14(param_1,param_2,param_4);
    *param_1 = &_0804DF4C;
    param_1[0x17] = param_3;
    if (*(short *)(param_3 + 0x16) == -1) {
      uVar1 = sub_0801124C(&DAT_03001c4c,
                           *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x5c) + 0x2c) + 4));
      *(undefined2 *)(param_3 + 0x16) = uVar1;
      sub_0800CD00(param_3);
    }
    *(short *)((int)param_1 + 0x16) = *(short *)(param_3 + 0x16) + *(short *)(param_1[8] + 0x14);
  }
  return param_1;
}


/* sub_0800CDE8 @ 0x0800CDE8 */

void sub_0800CDE8(void)

{
  return;
}


/* sub_0800CDEA @ 0x0800CDEA */

void sub_0800CDEA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  if (*(short *)(iVar2 + 0x16) == -1) {
    uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x2c) + 4),
                         param_3,param_4,param_4);
    *(undefined2 *)(iVar2 + 0x16) = uVar1;
    sub_0800CD00(iVar2);
  }
  *(short *)(param_1 + 0x16) =
       *(short *)(iVar2 + 0x16) + *(short *)(*(int *)(param_1 + 0x20) + 0x14);
  return;
}


/* sub_0800CE1A @ 0x0800CE1A */

undefined4 * sub_0800CE1A(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_0800CB14(param_1,*(undefined4 *)(param_2 + 0x28),0);
    *param_1 = &_0804E2FC;
    param_1[0x17] = param_2;
    uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(param_2 + 0x2c) + 4));
    *(undefined2 *)((int)param_1 + 0x16) = uVar1;
    sub_0800CD00(param_1);
  }
  return param_1;
}


/* sub_0800CE5A @ 0x0800CE5A */

void sub_0800CE5A(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_0804E2FC;
  if (*(short *)((int)param_1 + 0x16) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800CE96 @ 0x0800CE96 */

void sub_0800CE96(int param_1)

{
  sub_0801142A(&DAT_03001c4c,*(undefined2 *)(param_1 + 0x16));
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  return;
}


/* sub_0800CEAC @ 0x0800CEAC */

void sub_0800CEAC(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x16) == -1) {
    uVar1 = sub_0801124C(&DAT_03001c4c,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0x16) = uVar1;
    sub_0800CD00(param_1);
  }
  return;
}


/* sub_0800CED0 @ 0x0800CED0 */

undefined4 sub_0800CED0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0xb) {
    sub_0800CD00();
    uVar1 = 0;
  }
  else {
    uVar1 = sub_0800CFE0();
  }
  return uVar1;
}


/* sub_0800CEF4 @ 0x0800CEF4 */

void sub_0800CEF4(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804E454;
    param_1[3] = 0;
    *param_1 = &_0804CDAC;
    param_1[8] = param_2;
    param_1[4] = param_1;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    param_1[9] = *param_2;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    param_1[0xc] = param_2[3];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1[8] + 0x16);
    param_1[1] = param_2[3];
    param_1[7] = (uint)(*(char *)(param_1[8] + 0x17) != '\0');
    *(undefined2 *)(param_1 + 5) = param_3;
    param_1[6] = 0;
  }
  return;
}


/* sub_0800CF42 @ 0x0800CF42 */

undefined4 sub_0800CF42(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  if ((((*(int *)(param_1 + 0x24) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x2c))) &&
      (*(int *)(param_1 + 0x28) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x30))) {
    return 1;
  }
  return 0;
}


/* sub_0800CF7A @ 0x0800CF7A */

undefined4 sub_0800CF7A(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x20) + 0x10);
  *puVar1 = uVar2;
  uVar3 = (uint)((*(int *)(param_1 + 0x24) - DAT_030019cc) * 0x800000) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = *(int *)(param_1 + 0x28) - DAT_030019d0 & 0xffU | uVar2 & 0xfe00ff00 | uVar3;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = *(ushort *)(param_1 + 0x16) & 0x3ff | uVar2 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_0800CFE0 @ 0x0800CFE0 */

int sub_0800CFE0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = sub_080193AE(param_1 + 0xc);
  if (iVar1 != 0) {
    return iVar1 + -1;
  }
  if (param_2 == 4) {
    if ((int)param_3 >> 1 == (uint)*(ushort *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 0x1c) = param_3 & 1;
      return 1;
    }
    return 0;
  }
  if (param_2 != 8) {
    return 0;
  }
  if (*(ushort *)(param_1 + 0x14) == param_3) {
    return param_1;
  }
  return 0;
}


/* sub_0800D026 @ 0x0800D026 */

void sub_0800D026(int param_1)

{
  int a1;
  
  a1 = sub_0803D5B8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 4));
  Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x2c),a1);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0x16) * 0x20),a1,
               *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 4));
  sub_0803D63C(a1);
  return;
}


/* sub_0800D05C @ 0x0800D05C */

void sub_0800D05C(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 4))
  ;
  *(undefined2 *)(param_1 + 0x16) = uVar1;
  sub_0800D026(param_1);
  return;
}


/* sub_0800D078 @ 0x0800D078 */

undefined2 sub_0800D078(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x16) == -1) {
    uVar1 = sub_0801124C(&DAT_03001c4c,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0x16) = uVar1;
    sub_0800D026(param_1);
  }
  return *(undefined2 *)(param_1 + 0x16);
}


/* sub_0800D09E @ 0x0800D09E */

undefined4 * sub_0800D09E(undefined4 *param_1,undefined4 *param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x38), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804E454;
    param_1[3] = 0;
    *param_1 = &_0804CDAC;
    param_1[8] = param_2;
    param_1[4] = param_1;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    param_1[9] = *param_2;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    param_1[0xc] = param_2[3];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1[8] + 0x16);
    param_1[1] = param_2[3];
    param_1[7] = (uint)(*(char *)(param_1[8] + 0x17) != '\0');
    *(undefined2 *)(param_1 + 5) = param_4;
    param_1[6] = 0;
    *param_1 = &_0804BA78;
    param_1[0xd] = param_3;
    if (*(short *)(param_3 + 0x16) == -1) {
      uVar1 = sub_0801124C(&DAT_03001c4c,
                           *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x34) + 0x2c) + 4));
      *(undefined2 *)(param_3 + 0x16) = uVar1;
      sub_0800D026(param_3);
    }
    *(short *)((int)param_1 + 0x16) = *(short *)(param_3 + 0x16) + *(short *)(param_1[8] + 0x14);
  }
  return param_1;
}


/* sub_0800D128 @ 0x0800D128 */

void sub_0800D128(void)

{
  return;
}


/* sub_0800D12A @ 0x0800D12A */

void sub_0800D12A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(short *)(iVar2 + 0x16) == -1) {
    uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x34) + 0x2c) + 4),
                         param_3,param_4,param_4);
    *(undefined2 *)(iVar2 + 0x16) = uVar1;
    sub_0800D026(iVar2);
  }
  *(short *)(param_1 + 0x16) =
       *(short *)(iVar2 + 0x16) + *(short *)(*(int *)(param_1 + 0x20) + 0x14);
  return;
}


/* sub_0800D15A @ 0x0800D15A */

undefined4 * sub_0800D15A(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x38), param_1 != (undefined4 *)0x0)) {
    sub_0800CEF4(param_1,*(undefined4 *)(param_2 + 0x28),0);
    *param_1 = &_0804D1E4;
    param_1[0xd] = param_2;
    uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(param_2 + 0x2c) + 4));
    *(undefined2 *)((int)param_1 + 0x16) = uVar1;
    sub_0800D026(param_1);
  }
  return param_1;
}


/* sub_0800D1BC @ 0x0800D1BC */

void sub_0800D1BC(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_0804D1E4;
  if (*(short *)((int)param_1 + 0x16) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800D1F8 @ 0x0800D1F8 */

void sub_0800D1F8(int param_1)

{
  sub_0801142A(&DAT_03001c4c,*(undefined2 *)(param_1 + 0x16));
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  return;
}


/* sub_0800D20E @ 0x0800D20E */

void sub_0800D20E(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x16) == -1) {
    uVar1 = sub_0801124C(&DAT_03001c4c,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0x16) = uVar1;
    sub_0800D026(param_1);
  }
  return;
}


/* sub_0800D232 @ 0x0800D232 */

int sub_0800D232(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 == 0xb) {
    sub_0800D026(param_1);
    return 0;
  }
  iVar1 = sub_080193AE(param_1 + 0xc,param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 == 4) {
      if ((int)param_3 >> 1 != (uint)*(ushort *)(param_1 + 0x14)) {
        return 0;
      }
      *(uint *)(param_1 + 0x1c) = param_3 & 1;
      iVar1 = 1;
    }
    else if ((param_2 == 8) && (*(ushort *)(param_1 + 0x14) == param_3)) {
      return param_1;
    }
    return iVar1;
  }
  return iVar1 + -1;
}


/* sub_0800D290 @ 0x0800D290 */

undefined4 * sub_0800D290(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x14), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  uVar1 = sub_0800776C();
  *param_1 = &_0804E444;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(short *)(param_1 + 1) = (short)*param_3 + -0xf;
  *(short *)((int)param_1 + 6) = (short)uVar2 + -7;
  *(short *)(param_1 + 2) = (short)uVar3;
  *(short *)((int)param_1 + 10) = (short)uVar4;
  *param_1 = &_08049D98;
  param_1[3] = uVar1;
  param_1[4] = param_2;
  return param_1;
}


/* sub_0800D2D4 @ 0x0800D2D4 */

void sub_0800D2D4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x10);
  __call_via_r2(*(int **)(param_1 + 0x10),param_2,*(int *)(iVar1 + 0x28) + iVar1);
  sub_0801268A(&DAT_03002a64,param_1);
  return;
}


/* sub_0800D2F0 @ 0x0800D2F0 */

undefined * sub_0800D2F0(int param_1)

{
  if (-1 < param_1) {
    return &DAT_083bd304 + param_1 * 0x34;
  }
  return &UNK_086f82f0 + param_1 * -0x2c;
}


/* sub_0800D30E @ 0x0800D30E */

undefined4 * sub_0800D30E(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iStack_30;
  undefined *puStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  byte *pbStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x80), param_1 != (undefined4 *)0x0)) {
    pbStack_18 = &gUnknown_083BD2F8 + param_2 * 0x34;
    puStack_2c = &UNK_086f82f0 + param_2 * -0x2c;
    if (-1 < param_2) {
      puStack_2c = &DAT_083bd304 + param_2 * 0x34;
    }
    sub_0800DA26(&iStack_28,puStack_2c,param_3);
    sub_0800D960(param_1,puStack_2c,&iStack_28);
    *param_1 = &_0804B428;
    puStack_1c = param_1 + 0xc;
    puStack_20 = param_1 + 0xd;
    param_1[0x12] = param_2;
    param_1[0x18] = param_1[6] << 8;
    param_1[0x19] = param_1[7] << 8;
    iVar5 = sub_0803FACC(0x100,param_1 + 0x18);
    param_1[0x1a] = (param_4[1] * (iVar5 + -0x80) >> 8) + *param_4;
    iVar5 = sub_0803FACC(0x100);
    param_1[0x1b] = (*param_4 * (iVar5 + -0x80) >> 8) + param_4[1];
    iVar5 = sub_0803FACC(0x40);
    param_1[0x1a] = param_1[0x1a] * (iVar5 + 0xe0) >> 8;
    iVar5 = sub_0803FACC(0x40);
    param_1[0x1b] = param_1[0x1b] * (iVar5 + 0xe0) >> 8;
    iVar5 = param_3[1];
    param_1[0x14] = *param_3 + -8;
    param_1[0x15] = iVar5 + -6;
    *puStack_1c = 0x2000;
    *puStack_20 = 0x800;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    iVar5 = sub_08013E38(10,4);
    param_1[0x13] = iVar5;
    iStack_24 = *(int *)(iVar5 + 4);
    pcVar8 = *(char **)(iVar5 + 8);
    uVar3 = *(ushort *)(iVar5 + 2);
    cVar2 = *pcVar8;
    *pcVar8 = cVar2 + '\x01';
    if (cVar2 == '\0') {
      sVar4 = sub_0801124C(&DAT_03001c4c,(uint)uVar3);
      *(short *)(pcVar8 + 2) = sVar4;
      sub_08049138((int)(&DAT_06010000 + sVar4 * 0x20),iStack_24,(uint)uVar3);
    }
    *(undefined1 *)(param_1 + 2) = 0x38;
    if ((int)param_1[0x12] < 0) {
      param_1[0x11] = 0;
    }
    else {
      param_1[0x11] = ((uint)*pbStack_18 << 0x1d) >> 0x1f;
    }
    param_1[0xf] = 0;
    sub_0800DB64(&iStack_30,param_1);
    param_1[0x1c] = iStack_30 - param_1[6];
    param_1[0x1d] = (int)puStack_2c - param_1[7];
    param_1[0x1e] = iStack_28 - param_1[6];
    param_1[0x1f] = iStack_24 - param_1[7];
    if (param_1[0x11] != 0) {
      puVar6 = (undefined4 *)sub_0803D5B8(0x14);
      if (puVar6 != (undefined4 *)0x0) {
        uVar7 = sub_0800776C();
        *(short *)(puVar6 + 1) = (short)iStack_30 + -0xf;
        *(short *)((int)puVar6 + 6) = (short)puStack_2c + -7;
        *(undefined2 *)(puVar6 + 2) = (undefined2)iStack_28;
        *(short *)((int)puVar6 + 10) = (short)iStack_24;
        puVar6[3] = uVar7;
        *puVar6 = &_08049D98;
        puVar6[4] = param_1;
      }
      param_1[0xf] = puVar6;
      puVar1 = &DAT_03002a68 + DAT_03002a64;
      DAT_03002a64 = DAT_03002a64 + 1;
      *puVar1 = puVar6;
    }
  }
  return param_1;
}


/* sub_0800D4D0 @ 0x0800D4D0 */

void sub_0800D4D0(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = &_0804B428;
  pcVar2 = *(char **)(param_1[0x13] + 8);
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  sub_0800D9F0(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800D538 @ 0x0800D538 */

undefined4 sub_0800D538(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    local_1c = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    local_18 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c);
    local_34 = local_1c >> 8;
    local_30 = local_18 >> 8;
    local_2c = *(int *)(param_1 + 0x70) + local_34;
    local_28 = *(int *)(param_1 + 0x74) + local_30;
    local_24 = *(int *)(param_1 + 0x78) + local_34;
    local_20 = *(int *)(param_1 + 0x7c) + local_30;
    iVar1 = sub_08009324(&local_2c,DAT_03001a4c);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x60) = local_1c;
      *(int *)(param_1 + 100) = local_18;
      local_34 = local_1c >> 8;
      local_30 = local_18 >> 8;
      sub_0800DAE6(param_1,&local_34);
      *(int *)(param_1 + 0x50) = (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) >> 1) + -8;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x24) + -6;
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 != 0) {
        *(short *)(iVar1 + 4) = (short)local_2c + -0xf;
        *(short *)(iVar1 + 6) = (short)local_28 + -7;
        *(short *)(iVar1 + 8) = (short)local_24;
        *(short *)(iVar1 + 10) = (short)local_20;
      }
    }
    iVar1 = *(int *)(param_1 + 0x34) + -0x80;
    *(int *)(param_1 + 0x34) = iVar1;
    iVar1 = *(int *)(param_1 + 0x30) + iVar1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x30) = -iVar1 >> 1;
      iVar1 = -*(int *)(param_1 + 0x34) >> 1;
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 < 0x200) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x40) = 1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x54) - DAT_030019d0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x50) - DAT_030019cc;
  *(int *)(param_1 + 0x5c) = iVar1;
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030019d0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x18) - DAT_030019cc;
  *(int *)(param_1 + 0x2c) = iVar1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (*(int *)(param_1 + 0x30) >> 10);
  if ((((*(int *)(param_1 + 0x18) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x24))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0800D6D2 @ 0x0800D6D2 */

void sub_0800D6D2(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  sub_0800DA92();
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x4c) + 0xc);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x58) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x5c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffff000 |
              *(ushort *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 2) & 0x3ff;
  return;
}


/* sub_0800D72E @ 0x0800D72E */

void sub_0800D72E(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x48);
  sub_08011944(&DAT_03001c4c,param_1);
  if (-1 < iVar3) {
    sub_0801E164(&gUnknown_083BD2F8 + iVar3 * 0x34,iVar3,param_2);
    return;
  }
  sub_08004448(&DAT_03001068,-iVar3);
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C83C;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = iVar3;
  }
  if (DAT_03001c34 != 0) {
    iVar2 = DAT_03001c34 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar2);
  return;
}


/* sub_0800D78A @ 0x0800D78A */

undefined4 sub_0800D78A(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int a1;
  char *pcVar6;
  
  if (param_2 == 3) {
    if ((((param_1[0x11] == 0) && (param_1[6] < param_3[2])) && (*param_3 < param_1[8])) &&
       ((param_1[7] < param_3[3] && (param_3[1] < param_1[9])))) {
      __call_via_r2(param_1,param_3[4],*(int *)(*param_1 + 0x28) + *param_1);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else if (param_2 == 10) {
    if (param_1[0x13] != 0) {
      pcVar6 = *(char **)(param_1[0x13] + 8);
      cVar1 = *pcVar6;
      *pcVar6 = cVar1 + -1;
      if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar6 + 2) != -1)) {
        sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar6 + 2));
        pcVar6[2] = -1;
        pcVar6[3] = -1;
      }
    }
    uVar4 = sub_0800DB52(param_1,10,param_3);
  }
  else if (param_2 == 0xb) {
    iVar5 = param_1[0x13];
    if (iVar5 != 0) {
      a1 = *(int *)(iVar5 + 4);
      pcVar6 = *(char **)(iVar5 + 8);
      uVar2 = *(ushort *)(iVar5 + 2);
      cVar1 = *pcVar6;
      *pcVar6 = cVar1 + '\x01';
      if (cVar1 == '\0') {
        sVar3 = sub_0801124C(&DAT_03001c4c,(uint)uVar2);
        *(short *)(pcVar6 + 2) = sVar3;
        sub_08049138((int)(&DAT_06010000 + sVar3 * 0x20),a1,(uint)uVar2);
      }
    }
    uVar4 = sub_0800DB52(param_1,0xb,param_3);
  }
  else if (param_2 == 0x18) {
    uVar4 = 1;
    if ((int *)param_1[0x12] != param_3) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = sub_0800DB52(param_1,param_2,param_3);
  }
  return uVar4;
}


/* sub_0800D894 @ 0x0800D894 */

void sub_0800D894(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  
  sub_0800DB42();
  iVar4 = *(int *)(param_1 + 0x4c);
  if (iVar4 != 0) {
    pcVar5 = *(char **)(iVar4 + 8);
    uVar2 = *(ushort *)(iVar4 + 2);
    iVar4 = *(int *)(iVar4 + 4);
    cVar1 = *pcVar5;
    *pcVar5 = cVar1 + '\x01';
    if (cVar1 == '\0') {
      sVar3 = sub_0801124C(&DAT_03001c4c,(uint)uVar2);
      *(short *)(pcVar5 + 2) = sVar3;
      sub_08049138((int)(&DAT_06010000 + sVar3 * 0x20),iVar4,(uint)uVar2);
    }
  }
  return;
}


/* sub_0800D8D2 @ 0x0800D8D2 */

void sub_0800D8D2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x4c) + 8);
    cVar1 = *pcVar2;
    *pcVar2 = cVar1 + -1;
    if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2),param_3,2,param_4);
      pcVar2[2] = -1;
      pcVar2[3] = -1;
    }
  }
  sub_08011568(param_1);
  return;
}


/* sub_0800D918 @ 0x0800D918 */

void sub_0800D918(int param_1)

{
  undefined1 auStack_50 [36];
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  sub_0803F540(auStack_50,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
  Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc),local_2c);
  local_1c = 0;
  local_18 = 0;
  local_14 = **(undefined4 **)(param_1 + 0x14);
  local_10 = (*(undefined4 **)(param_1 + 0x14))[1];
  sub_0804915C((int)auStack_50,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
               (int)&local_1c);
  sub_0803F58C(auStack_50,0);
  return;
}


/* sub_0800D960 @ 0x0800D960 */

undefined4 * sub_0800D960(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    iVar3 = param_2[1] * *param_2;
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)iVar3;
    iVar1 = sub_0801124C(&DAT_03001c4c,iVar3);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,iVar3);
      iVar1 = sub_0801124C(&DAT_03001c4c,iVar3);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804A85C;
    param_1[5] = param_2;
    param_1[4] = param_2[2];
    uVar2 = *param_3;
    param_1[7] = param_3[1];
    param_1[6] = uVar2;
    iVar1 = *param_2;
    param_1[9] = param_1[7] + param_2[1];
    param_1[8] = param_1[6] + iVar1;
    param_1[1] = param_1[9];
    sub_0800D918(param_1);
    DAT_03001afc = DAT_03001afc + 1;
  }
  return param_1;
}


/* sub_0800D9F0 @ 0x0800D9F0 */

void sub_0800D9F0(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804A85C;
  DAT_03001afc = DAT_03001afc + -1;
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


/* sub_0800DA26 @ 0x0800DA26 */

void sub_0800DA26(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = *param_3;
  param_1[1] = param_3[1] - param_2[1];
  *param_1 = iVar1 - (iVar2 >> 1);
  return;
}


/* sub_0800DA3E @ 0x0800DA3E */

undefined4 sub_0800DA3E(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c) - DAT_030019d0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x18) - DAT_030019cc;
  *(int *)(param_1 + 0x2c) = iVar2;
  if ((((*(int *)(param_1 + 0x18) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x24))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0800DA92 @ 0x0800DA92 */

undefined4 sub_0800DA92(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(param_1 + 0x10);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x28) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x2c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar2 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_0800DAE6 @ 0x0800DAE6 */

void sub_0800DAE6(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x1c) = param_2[1];
  *(int *)(param_1 + 0x18) = iVar1;
  iVar2 = **(int **)(param_1 + 0x14);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x1c) + (*(int **)(param_1 + 0x14))[1];
  *(int *)(param_1 + 0x20) = iVar1 + iVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x24);
  return;
}


/* sub_0800DB1C @ 0x0800DB1C */

undefined4 sub_0800DB1C(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
  if ((iVar1 == 0) && (7 < param_2)) {
    return 2;
  }
  if (8 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800DB42 @ 0x0800DB42 */

void sub_0800DB42(undefined4 param_1)

{
  sub_08011818();
  sub_0800D918(param_1);
  return;
}


/* sub_0800DB52 @ 0x0800DB52 */

undefined4 sub_0800DB52(undefined4 param_1,int param_2)

{
  if (param_2 == 0xb) {
    sub_0800D918();
  }
  return 0;
}


/* sub_0800DB64 @ 0x0800DB64 */

void sub_0800DB64(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iStack_1048;
  int local_1044;
  int local_1040;
  char acStack_103c [4088];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [3];
  int *piStack_1c;
  int iStack_18;
  
  local_30 = *(int *)(param_2 + 0x24);
  local_34 = *(int *)(param_2 + 0x20);
  local_28[0] = *(int *)(param_2 + 0x1c);
  local_2c = *(int *)(param_2 + 0x18);
  local_44 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18);
  local_40 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c);
  local_3c = local_44;
  local_38 = local_40;
  piStack_1c = param_1;
  iStack_18 = param_2;
  sub_08049138((int)acStack_103c,(int)(&DAT_06010000 + (uint)*(ushort *)(param_2 + 0xc) * 0x20),
               local_40 * local_44);
  uVar2 = 0;
  if (0 < local_38) {
    do {
      local_1040 = *(int *)(param_2 + 0x1c) + uVar2;
      uVar1 = 0;
      if (0 < local_3c) {
        do {
          if (acStack_103c
              [(((int)uVar2 >> 3) * local_38 + (uVar2 & 7)) * 8 + ((int)uVar1 >> 3) * 0x40 +
               (uVar1 & 7)] != '\0') {
            local_1044 = *(int *)(param_2 + 0x18) + uVar1;
            if (local_34 < local_1044) {
              piVar3 = &local_34;
            }
            else {
              piVar3 = &local_1044;
            }
            local_34 = *piVar3;
            piVar3 = &local_30;
            if (local_1040 <= local_30) {
              piVar3 = &local_1040;
            }
            local_30 = *piVar3;
            iStack_1048 = local_1044 + 1;
            piVar3 = &local_2c;
            if (local_2c <= local_1044 + 1) {
              piVar3 = &iStack_1048;
            }
            local_2c = *piVar3;
            iStack_1048 = local_1040 + 1;
            piVar3 = local_28;
            if (local_28[0] <= local_1040 + 1) {
              piVar3 = &iStack_1048;
            }
            local_28[0] = *piVar3;
          }
          uVar1 = uVar1 + 1;
        } while ((int)uVar1 < local_3c);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < local_38);
  }
  *piStack_1c = local_34;
  piStack_1c[1] = local_30 + local_28[0] >> 1;
  piStack_1c[2] = local_2c;
  piStack_1c[3] = local_28[0];
  return;
}


/* sub_0800DCDC @ 0x0800DCDC */

undefined4 * sub_0800DCDC(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x84), param_1 != (undefined4 *)0x0)) {
    sub_0800D30E(param_1,*(undefined4 *)(param_2 + 4),param_3,param_4,uVar1);
    *param_1 = &_0804C508;
    param_1[0x20] = param_2;
  }
  return param_1;
}


/* sub_0800DD10 @ 0x0800DD10 */

void sub_0800DD10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  sub_0800D72E();
  __call_via_r1(iVar1 + 0x10,*(undefined4 *)(iVar1 + 0x10));
  return;
}


/* sub_0800DD2C @ 0x0800DD2C */

undefined4 * sub_0800DD2C(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x44), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800D960(param_1,&DAT_083bd304 + *(int *)(param_2 + 4) * 0x34,param_2 + 8);
  *param_1 = &_0804A314;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 2) = 0x38;
  puVar1 = param_1 + 0xd;
  sub_0800DB64(puVar1,param_1);
  sub_08009930(puVar1,DAT_03001a4c,0);
  sub_08009930(puVar1,DAT_03001a54,0);
  return param_1;
}


/* sub_0800DD90 @ 0x0800DD90 */

undefined4 sub_0800DD90(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 3) {
    if ((((*(int *)(param_1 + 0x34) < param_3[2]) && (*param_3 < *(int *)(param_1 + 0x3c))) &&
        (*(int *)(param_1 + 0x38) < param_3[3])) && (param_3[1] < *(int *)(param_1 + 0x40))) {
      iVar3 = *(int *)(param_1 + 0x30);
      iVar1 = *(int *)(iVar3 + 4);
      sub_08009930(param_1 + 0x34,DAT_03001a4c,1);
      sub_08009930(param_1 + 0x34,DAT_03001a54,1);
      sub_08011944(&DAT_03001c4c,param_1);
      sub_0801E164(&gUnknown_083BD2F8 + iVar1 * 0x34,*(undefined4 *)(iVar3 + 4),param_3[4]);
      __call_via_r1(iVar3 + 0x10,*(undefined4 *)(iVar3 + 0x10));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = sub_0800DB52(param_1);
  }
  return uVar2;
}


/* sub_0800DE28 @ 0x0800DE28 */

void sub_0800DE28(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 4) - 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (bVar1 == 0) {
    sub_0800EDA6();
  }
  else if (*(int *)(param_2 + 0x38) != *(int *)(&gUnknown_080725AC + (uint)(bVar1 >> 2) * 4)) {
    sub_0800EECC();
  }
  return;
}


/* sub_0800DE54 @ 0x0800DE54 */

void sub_0800DE54(void)

{
  sub_0803D63C();
  return;
}


/* sub_0800DE60 @ 0x0800DE60 */

void sub_0800DE60(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0800DE6C @ 0x0800DE6C */

void sub_0800DE6C(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> (sbyte)param_1[1];
  if ((int)(uint)uVar1 < **(int **)(param_2 + 0x50)) {
    *(char *)(param_2 + 0x11) = (char)uVar1;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x24);
    __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  }
  return;
}


/* sub_0800DE94 @ 0x0800DE94 */

void sub_0800DE94(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0800DEA6 @ 0x0800DEA6 */

void sub_0800DEA6(undefined4 param_1,undefined4 param_2)

{
  sub_0800EE78(param_2);
  return;
}


/* sub_0800DEB0 @ 0x0800DEB0 */

void sub_0800DEB0(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar2 = (uint)(uVar1 >> *(sbyte *)(param_1 + 4));
  if (**(int **)(param_2 + 0x50) <= (int)uVar2) {
    *(undefined2 *)(param_2 + 0x12) = 0;
    uVar2 = 0;
  }
  *(char *)(param_2 + 0x11) = (char)uVar2;
  return;
}


/* sub_0800DED0 @ 0x0800DED0 */

void sub_0800DED0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_2,&DAT_03001b00,param_3,param_4,param_4);
  return;
}


/* sub_0800DEDC @ 0x0800DEDC */

void sub_0800DEDC(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined1 *)(param_2 + 8) = 0x24;
  return;
}


/* sub_0800DEE8 @ 0x0800DEE8 */

void sub_0800DEE8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = sub_0803FACC(2);
  sub_0803E378(&DAT_03003e5c,&UNK_08319500 + iVar1 * 0xc,0x40,0);
  return;
}


/* sub_0800DF1C @ 0x0800DF1C */

void sub_0800DF1C(undefined4 param_1,int *param_2)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = param_2[0x68] - *(int *)(&DAT_080725c0 + (uint)*(byte *)(param_2 + 4) * 8);
  local_10 = param_2[0x69] - *(int *)(&DAT_080725c4 + (uint)*(byte *)(param_2 + 4) * 8);
  __call_via_r1(param_2,*(int *)(*param_2 + 0x3c) + *param_2);
  local_1c = local_14 >> 8;
  local_18 = local_10 >> 8;
  iVar1 = sub_080097C2(&DAT_030019a4,&local_1c,param_2 + 0x67);
  if (iVar1 != 0) {
    param_2[0x68] = local_14;
    param_2[0x69] = local_10;
  }
  __call_via_r1(param_2,*(int *)(*param_2 + 0x40) + *param_2);
  return;
}


/* sub_0800DF8A @ 0x0800DF8A */

void sub_0800DF8A(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_2 + 0x50);
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> 5;
  if (iVar2 <= (int)(uint)uVar1) {
    *(undefined2 *)(param_2 + 0x12) = 0x40;
    *(undefined1 *)(param_2 + 0x11) = 2;
    return;
  }
  *(char *)(param_2 + 0x11) = (char)uVar1;
  return;
}


/* sub_0800DFAC @ 0x0800DFAC */

void sub_0800DFAC(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0800DFBE @ 0x0800DFBE */

void sub_0800DFBE(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = sub_0803FACC(0xff);
  *(undefined2 *)(param_2 + 0x12) = uVar1;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0800DFD4 @ 0x0800DFD4 */

void sub_0800DFD4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(ushort *)(param_2 + 0x12) + 1;
  iVar1 = **(int **)(param_2 + 0x50);
  *(short *)(param_2 + 0x12) = (short)uVar2;
  if (iVar1 == 2) {
    *(bool *)(param_2 + 0x11) = 0xf0 < (uVar2 & 0xff);
  }
  else {
    *(char *)(param_2 + 0x11) = (char)(uVar2 * 0x200000 >> 0x18);
    if (iVar1 <= (int)(uVar2 * 0x200000 >> 0x18)) {
      *(undefined1 *)(param_2 + 0x11) = 0;
      *(undefined2 *)(param_2 + 0x12) = 0;
      return;
    }
  }
  return;
}


/* sub_0800E00A @ 0x0800E00A */

void sub_0800E00A(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar2 < 0xa0) {
    if (uVar2 < 0x20) {
      *(char *)(param_2 + 0x11) = (char)(uVar1 >> 4);
    }
    else {
      *(char *)(param_2 + 0x11) = '\x02' - (char)((int)(uVar2 << 0x1b) >> 0x1f);
    }
  }
  else if (uVar2 < 0xb0) {
    *(undefined1 *)(param_2 + 0x11) = 4;
  }
  else {
    iVar3 = *(int *)(*param_1 + 0x24);
    __call_via_r2(param_1,param_2,iVar3 + *param_1,iVar3,param_4);
  }
  return;
}


/* sub_0800E044 @ 0x0800E044 */

void sub_0800E044(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_2,&DAT_03001b00,param_3,param_4,param_4);
  return;
}


/* sub_0800E050 @ 0x0800E050 */

void sub_0800E050(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0800E074 @ 0x0800E074 */

void sub_0800E074(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x4c);
  *(undefined2 *)(param_1 + 0x1b2) = *(undefined2 *)(param_2 + 0x4e);
  *(undefined2 *)(param_1 + 0x1b4) = *(undefined2 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x1b6) = *(undefined2 *)(param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x1b8) = 0x80;
  *(undefined1 *)(param_1 + 0x1b9) = 0x80;
  *(uint *)(param_1 + 0x1c0) = (uint)*(ushort *)(param_2 + 0x60);
  *(int *)(param_1 + 0x1c4) = (int)*(short *)(param_2 + 0x5c);
  *(uint *)(param_1 + 0x1cc) = (uint)(*(char *)(param_2 + 0x67) == '\0');
  iVar1 = (uint)*(ushort *)(param_2 + 0x54) * 5;
  *(int *)(param_1 + 0x238) = iVar1 + 0x66;
  *(int *)(param_1 + 0x23c) = iVar1 + 0x1a6;
  *(int *)(param_1 + 0x1bc) = *(char *)(param_2 + 0x66) * 0x290;
  return;
}


/* sub_0800E0F0 @ 0x0800E0F0 */

undefined4 * sub_0800E0F0(void)

{
  return &DAT_03002b44;
}


/* sub_0800E0F4 @ 0x0800E0F4 */

void sub_0800E0F4(int param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  puVar2 = (ushort *)(iVar1 + 0x16);
  if (*puVar2 != 0) {
    uVar3 = *(int *)(param_1 + 8) + (uint)*(ushort *)(iVar1 + 100);
    *(uint *)(param_1 + 8) = uVar3;
    if (uVar3 >> 8 != 0) {
      if ((int)*(short *)(iVar1 + 0x18) < (int)(short)*puVar2 + ((int)uVar3 >> 8)) {
        *puVar2 = *(ushort *)(iVar1 + 0x18);
      }
      else {
        iVar4 = ((uint)*puVar2 + ((int)uVar3 >> 8)) * 0x10000;
        do {
          *puVar2 = (ushort)((uint)iVar4 >> 0x10);
        } while ((int)(short)*puVar2 != iVar4 >> 0x10);
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xff;
      if ((int)((uint)*(byte *)(iVar1 + 0x13) << 0x1f) < 0) {
        sub_08013C66();
      }
    }
  }
  return;
}


/* sub_0800E15C @ 0x0800E15C */

void sub_0800E15C(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_84 [108];
  uint local_18 [4];
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  if (0 < *(int *)(iVar1 + 8)) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  }
  if ((*(short *)(iVar1 + 0x16) != 0) && (*(int *)(iVar1 + 8) == 0)) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    local_18[0] = (uint)(*(ushort *)(iVar1 + 2) >> 8);
    sub_08004098(auStack_84,&gUnknown_0877D028,local_18);
  }
  return;
}


/* sub_0800E1AE @ 0x0800E1AE */

void sub_0800E1AE(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  uVar1 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08013C66();
  sub_0800E074(param_2,uVar1);
  return;
}


/* sub_0800E1D0 @ 0x0800E1D0 */

void sub_0800E1D0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  sub_0800E0F4();
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  if ((((&gUnknown_086B82EC)[(uint)*(byte *)(iVar1 + 0x14) * 0x18] & 1) == 0) &&
     (-1 < (int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(iVar1 + 0x14) * 0x18] << 0x1e))) {
    sub_08013E06(&DAT_03001560 + (uint)DAT_03001068 * 0x68);
  }
  uVar2 = *(int *)(param_1 + 0xc) + 0x6e;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (uVar2 >> 0x10 != 0) {
    puVar3 = (ushort *)(iVar1 + 0x1a);
    iVar4 = *(short *)(iVar1 + 0x1c) * 0x7ae >> 0x10;
    if ((int)*(short *)(iVar1 + 0x1c) < (short)*puVar3 + iVar4) {
      *puVar3 = *(ushort *)(iVar1 + 0x1c);
    }
    else {
      iVar1 = ((uint)*puVar3 + iVar4) * 0x10000;
      do {
        *puVar3 = (ushort)((uint)iVar1 >> 0x10);
      } while ((int)(short)*puVar3 != iVar1 >> 0x10);
    }
    uVar2 = 0;
    do {
      if (DAT_03001068 != uVar2) {
        puVar3 = &DAT_0300157a + uVar2 * 0x34;
        iVar1 = (short)(&DAT_0300157c)[uVar2 * 0x34] * 0xccd >> 0x10;
        if ((int)(short)(&DAT_0300157c)[uVar2 * 0x34] < (short)*puVar3 + iVar1) {
          *puVar3 = (&DAT_0300157c)[uVar2 * 0x34];
        }
        else {
          iVar1 = ((uint)*puVar3 + iVar1) * 0x10000;
          do {
            *puVar3 = (ushort)((uint)iVar1 >> 0x10);
          } while ((int)(short)*puVar3 != iVar1 >> 0x10);
        }
        puVar3 = &DAT_03001576 + uVar2 * 0x34;
        iVar1 = (short)(&DAT_03001578)[uVar2 * 0x34] * 0xccd >> 0x10;
        if ((int)(short)(&DAT_03001578)[uVar2 * 0x34] < (short)*puVar3 + iVar1) {
          *puVar3 = (&DAT_03001578)[uVar2 * 0x34];
        }
        else {
          iVar1 = ((uint)*puVar3 + iVar1) * 0x10000;
          do {
            *puVar3 = (ushort)((uint)iVar1 >> 0x10);
          } while ((int)(short)*puVar3 != iVar1 >> 0x10);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 9);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff;
  }
  return;
}


/* sub_0800E2E6 @ 0x0800E2E6 */

void sub_0800E2E6(uint param_1)

{
  ushort *puVar1;
  int unaff_r4;
  int iVar2;
  char in_NG;
  char in_OV;
  
  while (in_NG != in_OV) {
    if (DAT_03001068 != param_1) {
      puVar1 = &DAT_0300157a + param_1 * 0x34;
      iVar2 = (short)(&DAT_0300157c)[param_1 * 0x34] * 0xccd >> 0x10;
      if ((int)(short)(&DAT_0300157c)[param_1 * 0x34] < (short)*puVar1 + iVar2) {
        *puVar1 = (&DAT_0300157c)[param_1 * 0x34];
      }
      else {
        iVar2 = ((uint)*puVar1 + iVar2) * 0x10000;
        do {
          *puVar1 = (ushort)((uint)iVar2 >> 0x10);
        } while ((int)(short)*puVar1 != iVar2 >> 0x10);
      }
      puVar1 = &DAT_03001576 + param_1 * 0x34;
      iVar2 = (short)(&DAT_03001578)[param_1 * 0x34] * 0xccd >> 0x10;
      if ((int)(short)(&DAT_03001578)[param_1 * 0x34] < (short)*puVar1 + iVar2) {
        *puVar1 = (&DAT_03001578)[param_1 * 0x34];
      }
      else {
        iVar2 = ((uint)*puVar1 + iVar2) * 0x10000;
        do {
          *puVar1 = (ushort)((uint)iVar2 >> 0x10);
        } while ((int)(short)*puVar1 != iVar2 >> 0x10);
      }
    }
    in_OV = SBORROW4(param_1 + 1,9);
    in_NG = (int)(param_1 - 8) < 0;
    param_1 = param_1 + 1;
  }
  *(uint *)(unaff_r4 + 0xc) = *(uint *)(unaff_r4 + 0xc) & 0xffff;
  return;
}


/* sub_0800E2F2 @ 0x0800E2F2 */

void sub_0800E2F2(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  uVar1 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08013C66();
  sub_0800E074(param_2,uVar1);
  *(short *)(param_2 + 0x6c) = (short)param_2[0x6c] + 5;
  *(short *)((int)param_2 + 0x1b2) = *(short *)((int)param_2 + 0x1b2) + 5;
  *(short *)(param_2 + 0x6d) = (short)param_2[0x6d] + 5;
  *(short *)((int)param_2 + 0x1b6) = *(short *)((int)param_2 + 0x1b6) + 5;
  param_2[0x8e] = param_2[0x8e] + 0x80;
  param_2[0x8f] = param_2[0x8f] + 0x80;
  return;
}


/* sub_0800E344 @ 0x0800E344 */

void sub_0800E344(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  uVar1 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08013C66();
  sub_0800E074(param_2,uVar1);
  *(short *)(param_2 + 0x6c) = (short)param_2[0x6c] + 5;
  *(short *)((int)param_2 + 0x1b2) = *(short *)((int)param_2 + 0x1b2) + 5;
  *(short *)(param_2 + 0x6d) = (short)param_2[0x6d] + 5;
  *(short *)((int)param_2 + 0x1b6) = *(short *)((int)param_2 + 0x1b6) + 5;
  param_2[0x8e] = param_2[0x8e] + 0x80;
  param_2[0x8f] = param_2[0x8f] + 0x80;
  return;
}


/* sub_0800E3B0 @ 0x0800E3B0 */

void sub_0800E3B0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  sub_0800E0F4();
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  if ((((&gUnknown_086B82EC)[(uint)*(byte *)(iVar1 + 0x14) * 0x18] & 1) == 0) &&
     (-1 < (int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(iVar1 + 0x14) * 0x18] << 0x1e))) {
    sub_08013E06(&DAT_03001560 + (uint)DAT_03001068 * 0x68);
  }
  uVar2 = *(int *)(param_1 + 0xc) + 0x6e;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (uVar2 >> 0x10 != 0) {
    puVar3 = (ushort *)(iVar1 + 0x1a);
    iVar4 = *(short *)(iVar1 + 0x1c) * 0x7ae >> 0x10;
    if ((int)*(short *)(iVar1 + 0x1c) < (short)*puVar3 + iVar4) {
      *puVar3 = *(ushort *)(iVar1 + 0x1c);
    }
    else {
      iVar1 = ((uint)*puVar3 + iVar4) * 0x10000;
      do {
        *puVar3 = (ushort)((uint)iVar1 >> 0x10);
      } while ((int)(short)*puVar3 != iVar1 >> 0x10);
    }
    uVar2 = 0;
    do {
      if (DAT_03001068 != uVar2) {
        puVar3 = &DAT_0300157a + uVar2 * 0x34;
        iVar1 = (short)(&DAT_0300157c)[uVar2 * 0x34] * 0xccd >> 0x10;
        if ((int)(short)(&DAT_0300157c)[uVar2 * 0x34] < (short)*puVar3 + iVar1) {
          *puVar3 = (&DAT_0300157c)[uVar2 * 0x34];
        }
        else {
          iVar1 = ((uint)*puVar3 + iVar1) * 0x10000;
          do {
            *puVar3 = (ushort)((uint)iVar1 >> 0x10);
          } while ((int)(short)*puVar3 != iVar1 >> 0x10);
        }
        puVar3 = &DAT_03001576 + uVar2 * 0x34;
        iVar1 = (short)(&DAT_03001578)[uVar2 * 0x34] * 0xccd >> 0x10;
        if ((int)(short)(&DAT_03001578)[uVar2 * 0x34] < (short)*puVar3 + iVar1) {
          *puVar3 = (&DAT_03001578)[uVar2 * 0x34];
        }
        else {
          iVar1 = ((uint)*puVar3 + iVar1) * 0x10000;
          do {
            *puVar3 = (ushort)((uint)iVar1 >> 0x10);
          } while ((int)(short)*puVar3 != iVar1 >> 0x10);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 9);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff;
  }
  return;
}


/* sub_0800E3B2 @ 0x0800E3B2 */

void sub_0800E3B2(void)

{
  sub_0803E378(&DAT_03003e5c,&DAT_08319530,0x40,0);
  return;
}


/* sub_0800E3CE @ 0x0800E3CE */

void sub_0800E3CE(void)

{
  undefined4 in_r3;
  
  sub_0803E302(&DAT_03003e5c,&DAT_08319530,0x5c4,in_r3,in_r3);
  return;
}


/* sub_0800E3E6 @ 0x0800E3E6 */

void sub_0800E3E6(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  
  sub_0800E1D0();
  iVar3 = *(int *)param_2[5];
  iVar3 = __call_via_r1((int *)param_2[5],*(int *)(iVar3 + 0x18) + iVar3);
  if (((iVar3 != 0) &&
      (iVar3 = __call_via_r2(param_2,10,*(int *)(*param_2 + 0x34) + *param_2), iVar3 == 0)) &&
     (uVar2 = *(int *)(param_1 + 0x14) + 0xccd, *(uint *)(param_1 + 0x14) = uVar2,
     uVar2 >> 0x10 != 0)) {
    iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    psVar4 = (short *)(iVar3 + 0x1e);
    if (*psVar4 == 0) {
      if (*(short *)(iVar3 + 0x16) != 0) {
        __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x28) + *param_2,0,param_4);
      }
    }
    else {
      sVar1 = *psVar4;
      do {
        *psVar4 = sVar1 + -1;
      } while (*psVar4 != (short)(sVar1 + -1));
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffff;
  }
  return;
}


/* sub_0800E470 @ 0x0800E470 */

void sub_0800E470(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  uVar1 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08013C66();
  sub_0800E074(param_2,uVar1);
  *(short *)(param_2 + 0x6c) = (short)param_2[0x6c] + 0xf;
  *(short *)((int)param_2 + 0x1b2) = *(short *)((int)param_2 + 0x1b2) + 0xf;
  *(short *)(param_2 + 0x6d) = (short)param_2[0x6d] + 0xf;
  *(short *)((int)param_2 + 0x1b6) = *(short *)((int)param_2 + 0x1b6) + 0xf;
  param_2[0x8e] = param_2[0x8e] + 0xc0;
  param_2[0x8f] = param_2[0x8f] + 0xc0;
  return;
}


/* sub_0800E4C2 @ 0x0800E4C2 */

void sub_0800E4C2(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  sub_0800E0F4();
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  if ((((&gUnknown_086B82EC)[(uint)*(byte *)(iVar1 + 0x14) * 0x18] & 1) == 0) &&
     (-1 < (int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(iVar1 + 0x14) * 0x18] << 0x1e))) {
    sub_08013E06(&DAT_03001560 + (uint)DAT_03001068 * 0x68);
  }
  uVar2 = *(int *)(param_1 + 0xc) + 0x6e;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (uVar2 >> 0x10 != 0) {
    puVar3 = (ushort *)(iVar1 + 0x1a);
    iVar4 = *(short *)(iVar1 + 0x1c) * 0x7ae >> 0x10;
    if ((int)*(short *)(iVar1 + 0x1c) < (short)*puVar3 + iVar4) {
      *puVar3 = *(ushort *)(iVar1 + 0x1c);
    }
    else {
      iVar1 = ((uint)*puVar3 + iVar4) * 0x10000;
      do {
        *puVar3 = (ushort)((uint)iVar1 >> 0x10);
      } while ((int)(short)*puVar3 != iVar1 >> 0x10);
    }
    uVar2 = 0;
    do {
      if (DAT_03001068 != uVar2) {
        puVar3 = &DAT_0300157a + uVar2 * 0x34;
        iVar1 = (short)(&DAT_0300157c)[uVar2 * 0x34] * 0xccd >> 0x10;
        if ((int)(short)(&DAT_0300157c)[uVar2 * 0x34] < (short)*puVar3 + iVar1) {
          *puVar3 = (&DAT_0300157c)[uVar2 * 0x34];
        }
        else {
          iVar1 = ((uint)*puVar3 + iVar1) * 0x10000;
          do {
            *puVar3 = (ushort)((uint)iVar1 >> 0x10);
          } while ((int)(short)*puVar3 != iVar1 >> 0x10);
        }
        puVar3 = &DAT_03001576 + uVar2 * 0x34;
        iVar1 = (short)(&DAT_03001578)[uVar2 * 0x34] * 0xccd >> 0x10;
        if ((int)(short)(&DAT_03001578)[uVar2 * 0x34] < (short)*puVar3 + iVar1) {
          *puVar3 = (&DAT_03001578)[uVar2 * 0x34];
        }
        else {
          iVar1 = ((uint)*puVar3 + iVar1) * 0x10000;
          do {
            *puVar3 = (ushort)((uint)iVar1 >> 0x10);
          } while ((int)(short)*puVar3 != iVar1 >> 0x10);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 9);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff;
  }
  return;
}


/* sub_0800E4C4 @ 0x0800E4C4 */

void sub_0800E4C4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  
  sub_0800E1D0();
  iVar1 = *(int *)param_2[5];
  iVar1 = __call_via_r1((int *)param_2[5],*(int *)(iVar1 + 0x18) + iVar1);
  if (iVar1 != 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    uVar2 = *(short *)(iVar1 + 0x1c) * 0x16 + *(int *)(param_1 + 0x14) + 0x3333;
    *(uint *)(param_1 + 0x14) = uVar2;
    if (uVar2 >> 0x10 != 0) {
      puVar3 = (ushort *)(iVar1 + 0x20);
      if ((int)uVar2 >> 0x10 < (int)(uint)*puVar3) {
        uVar2 = (uint)*puVar3 - ((int)uVar2 >> 0x10);
        do {
          *puVar3 = (ushort)uVar2;
        } while ((uint)*puVar3 != (uVar2 & 0xffff));
      }
      else if (*(short *)(iVar1 + 0x16) != 0) {
        do {
          *puVar3 = 0;
        } while (*puVar3 != 0);
        __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x28) + *param_2,0,param_4);
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffff;
    }
  }
  return;
}


/* sub_0800E550 @ 0x0800E550 */

void sub_0800E550(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  uVar1 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08013C66();
  sub_0800E074(param_2,uVar1);
  iVar2 = __16__rt_sdiv(4,param_2[0x8e]);
  param_2[0x8e] = iVar2;
  iVar2 = __16__rt_sdiv(4,param_2[0x8f]);
  param_2[0x8f] = iVar2;
  return;
}


/* sub_0800E592 @ 0x0800E592 */

void sub_0800E592(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if ((iVar1 < 0) &&
     (iVar1 = __call_via_r2(param_2,0x17,*(int *)(*param_2 + 0x34) + *param_2), iVar1 == 0)) {
    __call_via_r2(param_2,0x17,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0800E5C0 @ 0x0800E5C0 */

void sub_0800E5C0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  uVar1 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08013C66();
  sub_0800E074(param_2,uVar1);
  param_2[0x8e] = param_2[0x8e] + 0x40;
  param_2[0x8f] = param_2[0x8f] + 0x40;
  return;
}


/* sub_0800E5F4 @ 0x0800E5F4 */

void sub_0800E5F4(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if ((iVar1 < 0) &&
     (iVar1 = __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x34) + *param_2), iVar1 == 0)) {
    __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0800E638 @ 0x0800E638 */

void sub_0800E638(int param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_88 [108];
  uint local_1c [4];
  
  sub_0800E1D0();
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 < 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    local_1c[0] = (uint)(*(ushort *)(iVar1 + 2) >> 8);
    sub_08004098(auStack_88,&gUnknown_0877D028,local_1c);
  }
  return;
}


/* sub_0800E66E @ 0x0800E66E */

undefined4 * sub_0800E66E(void)

{
  return &DAT_03001b0c;
}


/* sub_0800E672 @ 0x0800E672 */

void sub_0800E672(undefined4 param_1,undefined4 param_2)

{
  sub_0800E1D0();
  sub_0800E15C(param_1,param_2);
  return;
}


/* sub_0800E686 @ 0x0800E686 */

void sub_0800E686(undefined4 param_1,undefined4 param_2)

{
  sub_0800E3E6();
  sub_0800E15C(param_1,param_2);
  return;
}


/* sub_0800E69A @ 0x0800E69A */

void sub_0800E69A(undefined4 param_1,undefined4 param_2)

{
  sub_0800E4C4();
  sub_0800E15C(param_1,param_2);
  return;
}


/* sub_0800E6B8 @ 0x0800E6B8 */

undefined4 *
sub_0800E6B8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x224), param_1 != (undefined4 *)0x0)) {
    sub_0800E7F6(param_1,param_2,param_3,param_4,uVar2);
    *param_1 = &_0804D0F8;
    puVar1 = &DAT_03001b94 + DAT_03001b90;
    DAT_03001b90 = DAT_03001b90 + 1;
    *puVar1 = param_1;
  }
  return param_1;
}


/* sub_0800E6F8 @ 0x0800E6F8 */

void sub_0800E6F8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &_0804D0F8;
  iVar1 = 0;
  if (0 < DAT_03001b90) {
    do {
      if ((undefined4 *)(&DAT_03001b94)[iVar1] == param_1) goto _0800E720;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_03001b90);
  }
  iVar1 = -1;
_0800E720:
  DAT_03001b90 = DAT_03001b90 + -1;
  if (DAT_03001b90 - iVar1 != 0) {
    sub_08049138((int)(&DAT_03001b94 + iVar1),(int)(&DAT_03001b98 + iVar1),
                 (DAT_03001b90 - iVar1) * 4);
  }
  sub_0800E85E(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800E754 @ 0x0800E754 */

undefined4 *
sub_0800E754(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_1;
  iVar3 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x224), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,param_3,param_5,param_6,puVar2,param_2,param_3,iVar3);
    *param_1 = &_0804C888;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x73] = 1;
    param_1[0x72] = 0;
    *(ushort *)(param_1 + 0x6c) = (ushort)*(byte *)(param_4 + 0xd);
    *(ushort *)((int)param_1 + 0x1b2) = (ushort)*(byte *)(param_4 + 0xe);
    *(ushort *)(param_1 + 0x6d) = (ushort)*(byte *)(param_4 + 0xf);
    *(ushort *)((int)param_1 + 0x1b6) = (ushort)*(byte *)(param_4 + 0xf);
    *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_4 + 0x10);
    *(undefined1 *)((int)param_1 + 0x1b9) = *(undefined1 *)(param_4 + 0x11);
    param_1[0x6f] = 0;
    param_1[0x70] = 0x1000;
    param_1[0x71] = 0;
    param_1[0x79] = 0;
    uVar1 = DAT_03000f94;
    param_1[0x7a] = DAT_03000f94;
    param_1[0x7b] = uVar1;
    param_1[0x81] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
  }
  return param_1;
}


/* sub_0800E7F6 @ 0x0800E7F6 */

undefined4 *
sub_0800E7F6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x224), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,param_3,param_4,0xffffffff);
    *param_1 = &_0804C888;
    param_1[0x74] = 1;
    param_1[0x73] = 1;
    param_1[0x72] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
  }
  return param_1;
}


/* sub_0800E85E @ 0x0800E85E */

void sub_0800E85E(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804C888;
  sub_08004102(param_1 + 0x85);
  iVar2 = param_1[0x7d];
  if ((iVar2 != 0) && (*(undefined4 **)(iVar2 + 0x1f0) == param_1)) {
    *(undefined4 *)(iVar2 + 0x1f0) = param_1[0x7e];
  }
  if (param_1[0x7f] != 0) {
    *(undefined4 *)(param_1[0x7f] + 0x1f8) = param_1[0x7e];
  }
  if (param_1[0x7e] != 0) {
    *(undefined4 *)(param_1[0x7e] + 0x1fc) = param_1[0x7f];
  }
  for (iVar2 = param_1[0x7c]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1f8)) {
    *(undefined4 *)(iVar2 + 500) = 0;
  }
  piVar1 = (int *)param_1[99];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  sub_0800EC34(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800E8E6 @ 0x0800E8E6 */

undefined4 sub_0800E8E6(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A7A0;
    *(undefined1 *)(puVar1 + 1) = 0xc;
  }
  sub_0800ED80(param_1,puVar1);
  sub_0800FE78(&iStack_20,param_1);
  iStack_28 = iStack_20 + iStack_18 >> 1;
  uStack_24 = uStack_1c;
  piVar3 = (int *)(param_2 + 0x18);
  if ((DAT_03000f94 - *(int *)(param_1 + 0x1d4) < 8) &&
     (iVar4 = *(int *)(param_1 + 0x1d8), iVar4 != 0)) {
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + *piVar3;
    sub_0800AB54();
  }
  else {
    *(int *)(param_1 + 0x1d4) = DAT_03000f94;
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar2 = sub_0800AD3E(&iStack_28,piVar3,3,0);
    }
    else {
      uVar2 = sub_0800AD3E(&iStack_28,piVar3,4,1);
    }
    *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  }
  return 0;
}


/* sub_0800E8FE @ 0x0800E8FE */

undefined4 sub_0800E8FE(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0xc;
  sub_0800ED80(unaff_r4,param_1);
  sub_0800FE78(&stack0x00000008,unaff_r4);
  if ((DAT_03000f94 - *(int *)(unaff_r4 + 0x1d4) < 8) &&
     (iVar2 = *(int *)(unaff_r4 + 0x1d8), iVar2 != 0)) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(int *)(unaff_r5 + 0x18);
    sub_0800AB54();
  }
  else {
    *(int *)(unaff_r4 + 0x1d4) = DAT_03000f94;
    if (*unaff_r6 == 0) {
      uVar1 = sub_0800AD3E();
    }
    else {
      uVar1 = sub_0800AD3E();
    }
    *(undefined4 *)(unaff_r4 + 0x1d8) = uVar1;
  }
  return 0;
}


/* sub_0800E970 @ 0x0800E970 */

void sub_0800E970(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x58);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0800E97E @ 0x0800E97E */

void sub_0800E97E(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  sub_0800FE78(&local_1c,param_1);
  local_24 = local_1c + local_14 >> 1;
  local_20 = local_18 + -2;
  if ((DAT_03000f94 - *(int *)(param_1 + 0x1dc) < 8) &&
     (iVar2 = *(int *)(param_1 + 0x1e0), iVar2 != 0)) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *param_2;
    sub_0800AB54();
  }
  else {
    *(int *)(param_1 + 0x1dc) = DAT_03000f94;
    uVar1 = sub_0800AD3E(&local_24,param_2,6,0);
    *(undefined4 *)(param_1 + 0x1e0) = uVar1;
  }
  return;
}


/* Combat_Damage @ 0x0800E9D8 */

void Combat_Damage(int param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  byte abStack_44 [12];
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  pcVar3 = *(char **)(param_2 + 8);
  local_24 = *(int **)(param_2 + 0xc);
  iVar8 = *(int *)(pcVar3 + 4);
  local_18 = param_1 + 0x1a0;
  local_1c = param_1 + 0x1b0;
  iVar7 = *(int *)(param_2 + 0xc);
  if (*pcVar3 == '\0') {
    uVar9 = (uint)*(ushort *)(iVar7 + 0x1b0);
    local_20 = iVar7 + 0x1a0;
    if (pcVar3[1] == '\x03') {
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
    }
    else {
      iVar7 = sub_0803FADE(uVar9 * 0x52 + local_24[0x6f]);
      *(int *)(param_2 + 0x10) = iVar7;
      if (iVar7 != 0) {
        iVar8 = (iVar8 >> 1) + iVar8;
      }
    }
    iVar8 = (int)(iVar8 * (uint)*(ushort *)(local_20 + 0x10) * 0xccd) >> 0x10;
    bVar1 = *(byte *)(local_1c + 8);
    uVar2 = *(ushort *)(local_18 + 0x14);
  }
  else {
    uVar9 = (uint)*(ushort *)(iVar7 + 0x1b2);
    bVar1 = *(byte *)(param_1 + 0x1b9);
    uVar2 = *(ushort *)(param_1 + 0x1b6);
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
  }
  uStack_28 = (uint)bVar1;
  uVar4 = (uint)uVar2;
  if ((199 < uVar4) && (uVar4 = ((int)uVar4 >> 2) + 0x96, 0xdc < uVar4)) {
    uVar4 = 0xdc;
  }
  iVar6 = *(int *)(param_2 + 4);
  iVar7 = sub_0803FACC(0x1a);
  *(uint *)(param_2 + 0x14) =
       (((int)((uVar9 + 100) * uVar9 * uVar9) >> 0xd) + uVar9) *
       ((uint)((((int)(iVar8 * (0xdd - uVar4) * 0x129) >> 0x10) * iVar6 + 0x3ff >> 10) *
              (iVar7 + 0x100)) >> 8);
  uVar10 = sub_08046B70(uStack_28);
  uVar10 = sub_08046B18((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x7f);
  uVar5 = sub_08046C28((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),7);
  *(undefined4 *)(param_2 + 0x18) = uVar5;
  if (((*(int *)(param_1 + 0x1c8) != 0) && ((*param_2 ^ 1) == *(byte *)(param_1 + 0x10))) &&
     (*(int *)(param_2 + 0x18) != 0)) {
    uVar10 = sub_08046B70(*(undefined4 *)(param_1 + 0x1c0),uVar5);
    uVar5 = sub_08046C28((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x10);
    *(undefined4 *)(param_2 + 0x18) = uVar5;
  }
  if ((**(char **)(param_2 + 8) == '\0') && (*(int *)(param_2 + 0x18) != 0)) {
    uVar10 = sub_08046B70(*(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_2 + 0x18));
    iStack_30 = sub_08046C28((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),8);
    if (iStack_30 != 0) {
      uStack_34 = 0;
      abStack_44[0] = *param_2 ^ 1;
      iStack_38 = param_1;
      iStack_2c = iStack_30;
      __call_via_r2(local_24,abStack_44,*(int *)(*local_24 + 0x5c) + *local_24);
    }
  }
  return;
}


