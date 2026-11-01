/* Ghidra reference decompilation of code_0802FF50 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0802FF50 @ 0x0802FF50 */

undefined4 * sub_0802FF50(void)

{
  return &DAT_03003124;
}


/* sub_0802FF54 @ 0x0802FF54 */

undefined4 sub_0802FF54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011C70(&DAT_03001c4c,0x1e,param_2,param_4,param_4);
  return 1;
}


/* sub_0802FF56 @ 0x0802FF56 */

undefined4
sub_0802FF56(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011C70(*param_1,0x1e,param_2,param_4,param_4);
  return 1;
}


/* sub_0802FF70 @ 0x0802FF70 */

void sub_0802FF70(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0802FF7C @ 0x0802FF7C */

void sub_0802FF7C(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0x12);
  if (uVar1 < 8) {
    *(char *)(param_2 + 0x11) = (char)(uVar1 >> 2);
    *(ushort *)(param_2 + 0x12) = uVar1 + 1;
  }
  else {
    sub_0800EE78();
  }
  return;
}


/* sub_0802FF96 @ 0x0802FF96 */

undefined4 * sub_0802FF96(void)

{
  return &DAT_0300312c;
}


/* sub_0802FFA0 @ 0x0802FFA0 */

void sub_0802FFA0(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 2;
  return;
}


/* sub_0802FFAE @ 0x0802FFAE */

void sub_0802FFAE(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  if (*(ushort *)(param_2 + 0x12) < 0xc) {
    uVar1 = (*(ushort *)(param_2 + 0x12) >> 2) + 2;
    *(char *)(param_2 + 0x11) = (char)uVar1;
    if ((uVar1 & 0xff) == 4) {
      *(undefined1 *)(param_2 + 0x11) = 1;
      sub_0800EE78(param_2);
    }
    *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  }
  return;
}


/* sub_0802FFD8 @ 0x0802FFD8 */

undefined4 * sub_0802FFD8(void)

{
  return &DAT_03003134;
}


/* sub_0802FFDC @ 0x0802FFDC */

undefined4 sub_0802FFDC(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011C70(&DAT_03001c4c,0x1d,param_2,param_4,param_4);
  return 1;
}


/* sub_0802FFDE @ 0x0802FFDE */

undefined4
sub_0802FFDE(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011C70(*param_1,0x1d,param_2,param_4,param_4);
  return 1;
}


/* sub_0802FFFA @ 0x0802FFFA */

void sub_0802FFFA(void)

{
  return;
}


/* sub_0802FFFC @ 0x0802FFFC */

void sub_0802FFFC(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = sub_0803018C(0,param_2 + 0x38);
  *(undefined4 *)(param_1 * 0x1000 + 4) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_0802FFFE @ 0x0802FFFE */

void sub_0802FFFE(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_0803018C(0);
  *(undefined4 *)(param_1 * 0x1000 + 4) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08030000 @ 0x08030000 */

void sub_08030000(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_0803018C(0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08030002 @ 0x08030002 */

void sub_08030002(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_0803018C(0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08030018 @ 0x08030018 */

void sub_08030018(int *param_1)

{
  sub_08011944(&DAT_03001c4c,param_1[1]);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08030038 @ 0x08030038 */

undefined4 sub_08030038(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  sub_08011C0C(&DAT_03001c4c,0xc,0);
  iVar2 = **(int **)(param_1 + 4);
  __call_via_r1(*(int **)(param_1 + 4),*(int *)(iVar2 + 8) + iVar2);
  if (*(int *)(*(int *)(param_1 + 4) + 0x24) != 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_08049978;
      puVar1[1] = 0x1e;
    }
    sub_0803D8A0();
    return 1;
  }
  return 0;
}


/* sub_08030084 @ 0x08030084 */

undefined4 sub_08030084(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar2 = DAT_03001b94;
  if (DAT_03001b94 == 0) {
    uVar3 = 0;
  }
  else if (*(byte *)(param_2 + 0x10) == (*(byte *)(DAT_03001b94 + 0x10) ^ 1)) {
    iVar4 = **(int **)(DAT_03001b94 + 0x14);
    iVar4 = __call_via_r2(*(int **)(DAT_03001b94 + 0x14),DAT_03001b94,*(int *)(iVar4 + 0x20) + iVar4
                         );
    if (iVar4 == 4) {
      sub_0800FE78(&iStack_1c,iVar2);
      sub_0800FE78(&iStack_2c,param_2);
      cVar1 = *(char *)(iVar2 + 0x10);
      if (cVar1 == '\0') {
        iStack_1c = iStack_1c + -4;
        iStack_14 = iStack_14 + 4;
        iStack_10 = iStack_10 + 0xf0;
      }
      else if (cVar1 == '\x01') {
        iStack_1c = iStack_1c + -4;
        iStack_14 = iStack_14 + 4;
        iStack_18 = iStack_18 + -0xf0;
      }
      else if (cVar1 == '\x02') {
        iStack_18 = iStack_18 + -4;
        iStack_10 = iStack_10 + 4;
        iStack_1c = iStack_1c + -0xf0;
      }
      else if (cVar1 == '\x03') {
        iStack_18 = iStack_18 + -4;
        iStack_10 = iStack_10 + 4;
        iStack_14 = iStack_14 + 0xf0;
      }
      if ((((iStack_2c < iStack_14) && (iStack_1c < iStack_24)) && (iStack_28 < iStack_10)) &&
         (iStack_18 < iStack_20)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* sub_080300F8 @ 0x080300F8 */

undefined4 sub_080300F8(void)

{
  undefined4 uVar1;
  char in_NG;
  char in_OV;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_00000020;
  
  if ((((in_NG == in_OV) || (in_stack_0000000c <= in_stack_00000014)) ||
      (in_stack_00000020 <= in_stack_00000008)) || (in_stack_00000010 <= in_stack_00000018)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_080300FC @ 0x080300FC */

undefined4 sub_080300FC(int param_1)

{
  undefined4 uVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000018;
  int in_stack_00000020;
  
  if (((param_1 < in_stack_0000000c) && (in_stack_00000008 < in_stack_00000020)) &&
     (in_stack_00000018 < in_stack_00000010)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08030156 @ 0x08030156 */

undefined4 * sub_08030156(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804BD20;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0803017C @ 0x0803017C */

undefined4 * sub_0803017C(void)

{
  return &DAT_0300313c;
}


/* sub_08030184 @ 0x08030184 */

undefined4 * sub_08030184(void)

{
  return &DAT_03003140;
}


/* sub_0803018C @ 0x0803018C */

undefined4 * sub_0803018C(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x28), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080301F8(param_1,&gUnknown_08757B5C);
  *param_1 = &_0804D5BC;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  return param_1;
}


/* sub_080301B8 @ 0x080301B8 */

void sub_080301B8(int param_1)

{
  int iVar1;
  
  if ((DAT_03003304 & 0xf3) != 0) {
    iVar1 = *(int *)(param_1 + 0x20) + 10;
    *(int *)(param_1 + 0x20) = iVar1;
    if (0x54 < iVar1) {
      *(undefined4 *)(param_1 + 0x20) = 0x55;
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
    if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x20);
    }
    return;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) * 0x1f >> 5;
  return;
}


/* sub_080301F8 @ 0x080301F8 */

undefined4 * sub_080301F8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x380;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x380);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x380);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x380);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804C020;
    uVar2 = param_2[1];
    uVar3 = *param_2;
    param_1[5] = uVar2;
    param_1[4] = uVar3;
    param_1[8] = 0x55;
    param_1[6] = 0xffffffff;
    param_1[7] = 0xffffffff;
    *(undefined1 *)(param_1 + 2) = 0x10;
    param_1[1] = uVar2;
    sub_08049138((uVar1 & 0xffff) * 0x20 + 0x6010300,0x8757b68,0x80);
  }
  return param_1;
}


/* sub_08030200 @ 0x08030200 */

undefined4 * sub_08030200(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r4;
  undefined4 *unaff_r7;
  char in_ZR;
  
  if ((in_ZR == '\0') ||
     (unaff_r4 = (undefined4 *)sub_0803D5B8(0x24), unaff_r4 != (undefined4 *)0x0)) {
    *unaff_r4 = &_08049680;
    *(undefined2 *)((int)unaff_r4 + 0xe) = 0x380;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x380);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x380);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x380);
    }
    *(short *)(unaff_r4 + 3) = (short)uVar1;
    *unaff_r4 = &_0804C020;
    uVar2 = unaff_r7[1];
    uVar3 = *unaff_r7;
    unaff_r4[5] = uVar2;
    unaff_r4[4] = uVar3;
    unaff_r4[8] = 0x55;
    unaff_r4[6] = 0xffffffff;
    unaff_r4[7] = 0xffffffff;
    *(undefined1 *)(unaff_r4 + 2) = 0x10;
    unaff_r4[1] = uVar2;
    sub_08049138((uVar1 & 0xffff) * 0x20 + 0x6010300,0x8757b68,0x80);
  }
  return unaff_r4;
}


/* sub_08030208 @ 0x08030208 */

undefined4 * sub_08030208(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r7;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x380;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x380);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x380);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x380);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804C020;
    uVar2 = unaff_r7[1];
    uVar3 = *unaff_r7;
    param_1[5] = uVar2;
    param_1[4] = uVar3;
    param_1[8] = 0x55;
    param_1[6] = 0xffffffff;
    param_1[7] = 0xffffffff;
    *(undefined1 *)(param_1 + 2) = 0x10;
    param_1[1] = uVar2;
    sub_08049138((uVar1 & 0xffff) * 0x20 + 0x6010300,0x8757b68,0x80);
  }
  return param_1;
}


/* sub_08030220 @ 0x08030220 */

undefined4 * sub_08030220(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  
  uVar1 = sub_0801124C();
  if (uVar1 == 0xffffffff) {
    sub_08011732(*unaff_r5,unaff_r6);
    uVar1 = sub_0801124C(*unaff_r5,unaff_r6);
  }
  *(short *)(unaff_r4 + 3) = (short)uVar1;
  *unaff_r4 = &_0804C020;
  uVar2 = unaff_r7[1];
  uVar3 = *unaff_r7;
  unaff_r4[5] = uVar2;
  unaff_r4[4] = uVar3;
  unaff_r4[8] = 0x55;
  unaff_r4[6] = 0xffffffff;
  unaff_r4[7] = 0xffffffff;
  *(undefined1 *)(unaff_r4 + 2) = 0x10;
  unaff_r4[1] = uVar2;
  sub_08049138((uVar1 & 0xffff) * 0x20 + 0x6010300,0x8757b68,0x80);
  return unaff_r4;
}


/* sub_08030274 @ 0x08030274 */

undefined4 sub_08030274(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_314 [768];
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20);
    sub_08049138((int)auStack_314,0x8757be8,0x300);
    for (iVar1 = *(int *)(param_1 + 0x20); iVar1 < 0x55; iVar1 = iVar1 + 1) {
      iVar4 = iVar1 * 8;
      auStack_314[*(ushort *)(&gUnknown_08757EE8 + iVar4)] = 1;
      auStack_314[*(ushort *)(&DAT_08757eea + iVar4)] = 1;
      auStack_314[*(ushort *)(&DAT_08757eec + iVar4)] = 1;
      auStack_314[*(ushort *)(&DAT_08757eee + iVar4)] = 1;
    }
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),(int)auStack_314,
                 0x300);
  }
  puVar2 = (uint *)*param_2;
  if (*(int *)(param_1 + 0x1c) != -1) {
    *puVar2 = 0xa000;
    uVar3 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) + 1) * 0x800000) >> 7 |
            0xa000;
    *puVar2 = uVar3;
    *puVar2 = uVar3 | *(int *)(param_1 + 0x14) + 0xfdU & 0xff;
    uVar3 = (puVar2[1] & 0xfffff3ff) + 0x400;
    puVar2[1] = uVar3;
    puVar2[1] = uVar3 & 0xfffffc00 | *(ushort *)(param_1 + 0xc) + 0x18 & 0x3ff;
    puVar2 = puVar2 + 2;
  }
  iVar1 = 0;
  do {
    *puVar2 = 0x40006000;
    uVar3 = (uint)((*(int *)(param_1 + 0x10) + iVar1 * 0x20) * 0x800000) >> 7 | 0x40006000;
    *puVar2 = uVar3;
    *puVar2 = uVar3 | *(uint *)(param_1 + 0x14) & 0xff;
    uVar3 = (puVar2[1] & 0xfffff3ff) + 0x400;
    puVar2[1] = uVar3;
    puVar2[1] = uVar3 & 0xfffffc00 | (uint)*(ushort *)(param_1 + 0xc) + iVar1 * 8 & 0x3ff;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  *param_2 = puVar2;
  return 0;
}


/* sub_08030308 @ 0x08030308 */

undefined4 sub_08030308(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  undefined4 *unaff_r5;
  uint unaff_r6;
  
  *(uint *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 4) = param_2 & 0xfffffc00 | *(ushort *)(unaff_r4 + 0xc) + 0x18 & 0x3ff;
  puVar1 = (uint *)(param_1 + 8);
  iVar2 = 0;
  do {
    *puVar1 = 0x40006000;
    uVar3 = (uint)((*(int *)(unaff_r4 + 0x10) + iVar2 * 0x20) * 0x800000) >> 7 | 0x40006000;
    *puVar1 = uVar3;
    *puVar1 = uVar3 | *(uint *)(unaff_r4 + 0x14) & 0xff;
    uVar3 = (puVar1[1] & ~unaff_r6) + 0x400;
    puVar1[1] = uVar3;
    puVar1[1] = uVar3 & 0xfffffc00 | (uint)*(ushort *)(unaff_r4 + 0xc) + iVar2 * 8 & 0x3ff;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  *unaff_r5 = puVar1;
  return 0;
}


/* sub_08030384 @ 0x08030384 */

undefined4 * sub_08030384(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804D8F0;
    uVar1 = sub_080309F4(0,param_2);
    param_1[1] = uVar1;
    uStack_14 = 0x78;
    uStack_10 = 0x94;
    uVar1 = sub_08030950(0x98,&uStack_14);
    param_1[2] = uVar1;
  }
  return param_1;
}


/* sub_080303C4 @ 0x080303C4 */

void sub_080303C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 4),param_3,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 8));
  return;
}


/* sub_080303DC @ 0x080303DC */

void sub_080303DC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011944(&DAT_03001c4c,param_1[2],param_3,param_4,param_4);
  sub_08011944(&DAT_03001c4c,param_1[1]);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08030404 @ 0x08030404 */

int sub_08030404(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 4);
  __call_via_r1(*(int **)(param_1 + 4),*(int *)(iVar2 + 8) + iVar2);
  if (*(int *)(*(int *)(param_1 + 4) + 0x2c) != 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_08049978;
      puVar1[1] = 0x1e;
    }
    sub_0803D8A0();
    return *(int *)(*(int *)(param_1 + 4) + 0x1c) + 1;
  }
  return 0;
}


/* sub_08030406 @ 0x08030406 */

int sub_08030406(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 4);
  __call_via_r1(*(int **)(param_1 + 4),*(int *)(iVar2 + 8) + iVar2);
  if (*(int *)(*(int *)(param_1 + 4) + 0x2c) != 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_08049978;
      puVar1[1] = 0x1e;
    }
    sub_0803D8A0();
    return *(int *)(*(int *)(param_1 + 4) + 0x1c) + 1;
  }
  return 0;
}


/* sub_0803040E @ 0x0803040E */

int sub_0803040E(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int unaff_r4;
  
  __call_via_r1(param_1,param_3 + param_2);
  if (*(int *)(*(int *)(unaff_r4 + 4) + 0x2c) != 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_08049978;
      puVar1[1] = 0x1e;
    }
    sub_0803D8A0();
    return *(int *)(*(int *)(unaff_r4 + 4) + 0x1c) + 1;
  }
  return 0;
}


/* sub_0803044C @ 0x0803044C */

undefined4 sub_0803044C(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_3c [12];
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_1c;
  int iStack_18;
  
  uVar1 = sub_08000158(0x2d);
  iVar2 = sub_08011C70(&DAT_03001c4c,5,uVar1);
  if (iVar2 == 0) {
    uStack_1c = *(undefined4 *)(param_2 + 0x1a0);
    iStack_18 = *(int *)(param_2 + 0x1a4) + 0x4000;
    iVar2 = sub_08000158(0x2d);
    iVar2 = sub_08009904(&DAT_030019a4,&uStack_1c,iVar2 + 8);
    if (iVar2 != 0) {
      sub_08049138((int)auStack_3c,0x875819c,0x20);
      uStack_30 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1a0) >> 8);
      uStack_2e = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1a4) >> 8);
      uVar1 = Enemy_Create(0,auStack_3c,&gUnknown_087113FC,0xffffffff);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
  }
  return 1;
}


/* sub_080304E4 @ 0x080304E4 */

void sub_080304E4(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 2) = 0x38;
  *(undefined1 *)((int)param_2 + 0x11) = 0;
  *(undefined2 *)((int)param_2 + 0x176) = 0;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  piVar1 = (int *)(DAT_03001c34 + 0x1a4);
  param_2[0x68] = *(int *)(DAT_03001c34 + 0x1a0);
  piVar2 = param_2 + 0x69;
  *piVar2 = *piVar1;
  *piVar2 = *piVar2 + 0x100;
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


/* sub_08030538 @ 0x08030538 */

void sub_08030538(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if ((DAT_03003304 & 0xf0) != 0) {
    *(short *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + 2;
  }
  iVar1 = sub_08040284(&DAT_03003300,0xf3,0x10,0x5a);
  if (iVar1 != 0) {
    __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    *(undefined2 *)((int)param_2 + 0x12) = 0;
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08030584 @ 0x08030584 */

void sub_08030584(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  
  uVar2 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar2;
  if (7 < uVar2) {
    *(undefined2 *)(param_2 + 0x12) = 0;
    bVar1 = *(char *)(param_2 + 0x11) + 1;
    *(byte *)(param_2 + 0x11) = bVar1;
    if (5 < bVar1) {
      *(undefined1 *)(param_2 + 0x11) = 4;
    }
  }
  return;
}


/* sub_080305AA @ 0x080305AA */

void sub_080305AA(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_03001c34;
  *(undefined1 *)(DAT_03001c34 + 0x11) = 0;
  sub_0800ECDA(iVar1,0);
  sub_0800ED18(iVar1,&DAT_03001b00);
  sub_08010BB8(DAT_03001c34,&DAT_03003144);
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_0300314c);
  return;
}


/* sub_080305E2 @ 0x080305E2 */

void sub_080305E2(void)

{
  __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
  sub_08010BB8(DAT_03001c34,&DAT_03001c3c);
  return;
}


/* sub_080305FE @ 0x080305FE */

undefined4 * sub_080305FE(void)

{
  return &DAT_03003148;
}


/* sub_08030618 @ 0x08030618 */

void sub_08030618(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = *(int *)(*param_1 + 8);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_08030630 @ 0x08030630 */

void sub_08030630(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [8];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  
  iVar3 = DAT_03001b94;
  if (DAT_03001b94 != 0) {
    piVar6 = (int *)(param_1 + 4);
    local_18 = (int *)(param_1 + 8);
    if (*(short *)((int)param_2 + 0x12) == 0) {
      sub_0800FDFA(auStack_48,DAT_03001b94);
      sub_0804F900(&local_38,auStack_48);
      sub_0800FDFA(&iStack_30,param_2);
      sub_0804F900(&local_20,&iStack_30);
      local_50 = local_38 - local_20;
      local_4c = local_34 - local_1c;
      iVar4 = 1;
      if (local_50 < 1) {
        iVar4 = -1;
      }
      iVar2 = 1;
      if (local_4c < 1) {
        iVar2 = -1;
      }
      *piVar6 = iVar4 << 8;
      *local_18 = iVar2 << 8;
      local_20 = 0x20;
      if (local_50 < 1) {
        local_20 = -0x20;
      }
      local_1c = 0x20;
      if (local_4c < 1) {
        local_1c = -0x20;
      }
      sub_0800FDFA(&local_50,iVar3);
      sub_0804F900(&local_40,&local_50);
      sub_0800FDFA(&local_38,param_2);
      sub_0804F900(&local_28,&local_38);
      iVar5 = 1;
      iVar2 = local_40 - (local_28 + local_20);
      iVar4 = local_3c - (local_24 + local_1c);
      iVar3 = 1;
      if (iVar2 < 1) {
        iVar3 = -1;
      }
      if (iVar4 < 1) {
        iVar5 = -1;
      }
      local_24 = iVar5 * 0x100;
      local_28 = iVar3 * 0x100;
      if ((iVar3 * 0x100 * *(int *)(param_1 + 4) >> 8 < 0) &&
         (iVar3 = local_24, local_24 * *(int *)(param_1 + 8) >> 8 < 0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(param_1 + 0xc) = uVar1;
      *(undefined1 *)((int)param_2 + 0x11) = 0;
      if (*(char *)(param_1 + 0xc) == '\0') {
        *(undefined2 *)((int)param_2 + 0x12) = 0;
        sub_0800ECDA(param_2,0,iVar3,iVar5,iVar2,iVar4);
      }
      else if (*(char *)(param_1 + 0xc) == '\x01') {
        sub_0800ECDA(param_2,0xe,iVar3,iVar5,iVar2,iVar4);
      }
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      iStack_2c = (*local_18 << 9) >> 8;
      iStack_30 = (*piVar6 << 9) >> 8;
      piVar6 = &iStack_30;
    }
    local_38 = param_2[0x68] + *piVar6;
    local_34 = param_2[0x69] + piVar6[1];
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_38;
    local_1c = local_34;
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iVar3 = __call_via_r2(param_2,&local_20,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar3 != 0) {
      param_2[0x68] = local_20;
      param_2[0x69] = local_1c;
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    sub_0800FE78(&local_40,param_2);
    sub_0800FE78(&iStack_30,DAT_03001c34);
    if ((((local_40 < local_28) && (iStack_30 < local_38)) && (local_3c < local_24)) &&
       (iStack_2c < local_34)) {
      sub_0800EE78(param_2);
    }
  }
  return;
}


/* sub_080307FA @ 0x080307FA */

void sub_080307FA(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x12);
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined1 *)(param_2 + 0x11) = 0;
    *(short *)(param_2 + 0x176) =
         (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xd);
  }
  else if (*(char *)(param_1 + 0xc) == '\x01') {
    *(short *)(param_2 + 0x176) =
         (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xb);
    if (uVar1 == 0x30) {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    else if (uVar1 == 0x50) {
      *(undefined1 *)(param_2 + 0x11) = 2;
    }
  }
  *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) + 8 & 0x7f;
  return;
}


/* sub_0803084C @ 0x0803084C */

undefined4 * sub_0803084C(void)

{
  return &DAT_03003154;
}


/* sub_08030860 @ 0x08030860 */

undefined4 * sub_08030860(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int aiStack_68 [3];
  undefined4 uStack_5c;
  undefined1 auStack_58 [2];
  undefined1 uStack_56;
  undefined1 uStack_55;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  
  puStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  piStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    iVar2 = param_2 * 0x10;
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)iVar2;
    iVar1 = sub_0801124C(&DAT_03001c4c,iVar2);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,iVar2);
      iVar1 = sub_0801124C(&DAT_03001c4c,iVar2);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804AF78;
    param_1[4] = param_2;
    sub_0803F540(auStack_58,param_2);
    puStack_4c = &gUnknown_0806EE6C;
    auStack_58[0] = 1;
    uStack_55 = 2;
    uStack_56 = 1;
    uStack_38 = 0x803f70d;
    iStack_54 = (int)param_1[4] / 2;
    uStack_50 = 0xc;
    sub_08046E40(uStack_34,0,uStack_28);
    sub_0803DADA(auStack_58,uStack_1c);
    param_1[5] = *param_4 - (int)param_1[4] / 2;
    param_1[6] = param_4[1] + -8;
    aiStack_68[1] = 0;
    uStack_5c = 0x10;
    iVar1 = 0;
    if (0 < (int)param_1[4]) {
      do {
        iVar2 = iVar1 + 0x20;
        aiStack_68[0] = iVar1;
        aiStack_68[2] = iVar2;
        sub_0804915C((int)auStack_58,
                     (int)(&DAT_06010000 + iVar1 * 0x10 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                     (int)aiStack_68);
        iVar1 = iVar2;
      } while (iVar2 < (int)param_1[4]);
    }
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_0803F58C(auStack_58,0);
  }
  return param_1;
}


/* sub_08030950 @ 0x08030950 */

void sub_08030950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *(undefined4 *)(&gUIStringPtrs + param_1 * 4);
  iVar1 = sub_0803FFE8(&gUnknown_0806EE6C,uVar2,param_3,param_4,param_4);
  uVar3 = iVar1 + 0x21U & 0xffffffe0;
  sub_08011732(&DAT_03001c4c,uVar3 << 4);
  sub_08030860(0,uVar3,uVar2,param_2);
  return;
}


/* sub_08030980 @ 0x08030980 */

undefined4 sub_08030980(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (uint *)*param_2;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      *puVar1 = 0x80006000;
      uVar3 = (uint)((*(int *)(param_1 + 0x14) + iVar2) * 0x800000) >> 7 | 0x80006000;
      *puVar1 = uVar3;
      *puVar1 = uVar3 | *(uint *)(param_1 + 0x18) & 0xff;
      iVar4 = iVar2 >> 1;
      iVar2 = iVar2 + 0x20;
      puVar1[1] = (uint)*(ushort *)(param_1 + 0xc) + iVar4 & 0x3ff | puVar1[1] & 0xfffff000;
      puVar1 = puVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  *param_2 = puVar1;
  return 0;
}


/* sub_080309F4 @ 0x080309F4 */

undefined4 * sub_080309F4(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    sub_080301F8(param_1,&gUnknown_087581F4);
    *param_1 = &_0804D20C;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[10] = param_2 * 0x290 >> 8;
  }
  return param_1;
}


/* sub_08030A2C @ 0x08030A2C */

undefined4 sub_08030A2C(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (DAT_03000f94 << 0x1d < 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x24) >> 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    }
  }
  return 1;
}


/* sub_08030A4C @ 0x08030A4C */

void sub_08030A4C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((DAT_03003304 & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x24) = -iVar1;
        *(int *)(param_1 + 0x28) = -*(int *)(param_1 + 0x28);
      }
      else if (0x5500 < iVar1) {
        *(int *)(param_1 + 0x24) = 0xaa00 - iVar1;
        *(int *)(param_1 + 0x28) = -*(int *)(param_1 + 0x28);
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x24) >> 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
  }
  return;
}


/* sub_08030AB0 @ 0x08030AB0 */

void sub_08030AB0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_44 [36];
  int iStack_20;
  
  iVar2 = *(int *)(param_2 + 4);
  uVar1 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar1;
  if ((uVar1 & 7) == 0) {
    uVar1 = (int)uVar1 >> 3;
    if (*(int *)(param_1 + 0x10) == 0) {
      if (4 < (int)uVar1) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      uVar1 = (uint)(byte)(&gUnknown_087581FC)[uVar1];
    }
    else if (7 < (int)uVar1) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    sub_0803F540(auStack_44,0x40,0x40);
    sub_08049120(iStack_20,(int)(&PTR_gUnknown_08758208)[uVar1],0x8758204,param_4);
    sub_0803F9B8(auStack_44,&DAT_06010000 + (uint)*(ushort *)(iVar2 + 0x16) * 0x20);
    sub_0803F58C(auStack_44,0);
  }
  return;
}


/* sub_08030B20 @ 0x08030B20 */

undefined4 sub_08030B20(void)

{
  return 1;
}


/* sub_08030B24 @ 0x08030B24 */

bool sub_08030B24(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58) + -1;
  *(int *)(param_1 + 0x58) = iVar1;
  REG_BLDALPHA = (char)iVar1;
  DAT_04000053 = '\x10' - (char)*(undefined4 *)(param_1 + 0x58);
  return *(int *)(param_1 + 0x58) == 0;
}


/* sub_08030B46 @ 0x08030B46 */

void sub_08030B46(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0x8030b25;
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x8030b21;
  return;
}


/* sub_08030B6C @ 0x08030B6C */

undefined4 sub_08030B6C(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = (uint)DAT_03003304;
  iVar3 = param_4;
  if (iVar2 != 0) {
    if (((int)(uVar1 << 0x19) < 0) && (DAT_03002a60 = DAT_03002a60 + -1, DAT_03002a60 < 0)) {
      DAT_03002a60 = iVar2 + -1;
    }
    iVar3 = -((int)(uVar1 << 0x18) >> 0x1f);
    if (iVar3 != 0) {
      iVar3 = DAT_03002a60 + 1;
      DAT_03002a60 = iVar3;
      if (iVar2 <= iVar3) {
        iVar2 = 0;
        DAT_03002a60 = 0;
      }
    }
  }
  if ((int)(uVar1 << 0x1e) < 0) {
    DAT_03002a60 = -1;
    if (*(int *)(param_1 + 0x54) != 0) {
      sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x54),iVar2,iVar3,param_4);
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0x8030b21;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0x8030b25;
    }
  }
  if ((DAT_03003304 & 1) != 0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x54));
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0x8030b21;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0x8030b25;
    }
  }
  return 0;
}


/* sub_08030BF4 @ 0x08030BF4 */

undefined4 sub_08030BF4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar1;
  REG_BLDALPHA = (char)iVar1;
  DAT_04000053 = '\x10' - (char)*(undefined4 *)(param_1 + 0x58);
  if (0xf < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x60) = 0x8030b6d;
  }
  return 0;
}


/* sub_08030C00 @ 0x08030C00 */

undefined4 sub_08030C00(int param_1,int param_2,undefined1 param_3,char param_4)

{
  *(undefined1 *)(param_2 + 2) = param_3;
  *(char *)(param_2 + 3) = param_4 - (char)*(undefined4 *)(param_1 + 0x58);
  if (0xf < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x60) = 0x8030b6d;
  }
  return 0;
}


/* sub_08030C16 @ 0x08030C16 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08030e44) */
/* WARNING: Removing unreachable block (ram,0x08030d9c) */

ulonglong * sub_08030C16(ulonglong *param_1,ushort *param_2)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  ushort *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  uint *puVar17;
  int iVar18;
  undefined *puVar19;
  char cVar20;
  char cVar21;
  bool bVar22;
  undefined1 uVar23;
  bool bVar24;
  bool bVar25;
  undefined1 uVar26;
  bool bVar27;
  undefined4 in_cr0;
  undefined4 in_cr15;
  undefined8 uVar28;
  ulonglong uVar29;
  uint uStack_80;
  ushort *puStack_7c;
  ushort *puStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  ushort *puStack_60;
  undefined4 uStack_4c;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  ulonglong *puStack_24;
  undefined4 *puStack_20;
  ulonglong *puStack_1c;
  ushort *puStack_18;
  
  puVar17 = &uStack_80;
  puStack_1c = param_1;
  puStack_18 = param_2;
  if ((param_1 != (ulonglong *)0x0) ||
     (param_1 = (ulonglong *)sub_0803D5B8(100), param_1 != (ulonglong *)0x0)) {
    *(undefined **)param_1 = &_0804E454;
    puStack_20 = (undefined4 *)((int)param_1 + 0xc);
    *(undefined **)((int)param_1 + 0xc) = &_080496B4;
    *(undefined **)param_1 = &_0804ABD8;
    *(undefined **)((int)param_1 + 0xc) = &DAT_0804ac04;
    puStack_24 = param_1 + 2;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((int)param_1 + 0x54) = 0;
    sub_0804912C(0x600e000,0,0x800);
    uStack_38 = 0;
    uStack_34 = 0;
    puVar14 = &gUnknown_08759154;
    uStack_30 = 0x15;
    uStack_2c = 0x13;
    uVar15 = (uint)DAT_03001a68;
    sub_0803DA10(&uStack_38,&DAT_0600e000,uVar15);
    iStack_28 = uVar15 * 0x40 + 0x6000000;
    sub_0804912C(iStack_28,0,0x63c0);
    sub_0803F540(&uStack_6c,0xa8,0x98);
    puStack_60 = (ushort *)&gUnknown_0806EE6C;
    uStack_6b = 0xe;
    uStack_69 = 2;
    uStack_6a = 1;
    uStack_4c = 0x803f5a5;
    puStack_7c = (ushort *)(iStack_44 + -8);
    iStack_70 = iStack_40 + -8;
    puStack_78 = (ushort *)0x0;
    iStack_74 = iStack_44;
    sub_0803F974(&uStack_6c,&puStack_7c,0);
    puStack_78 = (ushort *)(iStack_40 + -8);
    iStack_70 = iStack_40;
    iStack_74 = iStack_44;
    puStack_7c = (ushort *)0x0;
    sub_0803F974(&uStack_6c,&puStack_7c,0);
    iStack_74 = iStack_44 + -0xc;
    iStack_70 = iStack_40 + -0xc;
    uStack_80 = iStack_40 - 0x10;
    puVar11 = (uint *)(iStack_44 + -0x10);
    puStack_7c = (ushort *)0x4;
    puStack_78 = (ushort *)0x4;
    sub_08004F1C(&uStack_6c,4,4);
    piVar10 = (int *)0x0;
    iStack_70 = iStack_40 + -8;
    iStack_74 = iStack_44 + -8;
    puStack_7c = (ushort *)0x0;
    puStack_78 = (ushort *)0x0;
    iVar18 = 0x8030d4f;
    sub_08004F50(&uStack_6c,&puStack_7c);
    uVar12 = 0x14;
    puStack_78 = puStack_18;
    uVar16 = 8;
    uStack_80 = 0x90;
    uVar15 = (uint)*puStack_18;
    uVar28 = CONCAT44(0x48,uVar15);
    bVar24 = 7 < uVar15;
    bVar27 = SBORROW4(uVar15,8);
    cVar20 = (int)(uVar15 - 8) < 0;
    bVar22 = uVar15 == 8;
    bVar25 = bVar24;
    if (bVar22) {
      iVar18 = 0x8030d74;
      uVar28 = FUN_08056d80();
      puVar13 = (undefined4 *)uVar28;
                    /* WARNING: Read-only address (ram,0x08030e48) is written */
                    /* WARNING: Read-only address (ram,0x08030e4c) is written */
                    /* WARNING: Read-only address (ram,0x08030e50) is written */
                    /* WARNING: Read-only address (ram,0x08030e54) is written */
                    /* WARNING: Read-only address (ram,0x08030e58) is written */
                    /* WARNING: Read-only address (ram,0x08030e5c) is written */
                    /* WARNING: Read-only address (ram,0x08030e60) is written */
      if (!bVar27) {
        unaff_r8 = (uint)*(byte *)(unaff_r8 + 0x840);
      }
      if (!bVar24) {
        unaff_r9 = (undefined4 *)0x0;
      }
      if (bVar24 && !bVar22) {
        *puVar13 = 0x8030d84;
        puVar13[-1] = in_r12;
        puVar13[-2] = (int)((ulonglong)uVar28 >> 0x20);
      }
      bVar25 = bVar24;
      if (bVar22 || (bool)cVar20 != bVar27) {
        puVar13 = (undefined4 *)(unaff_r8 * 0x10000);
        bVar25 = &gUnknown_08759154 < puVar13 || puVar13 + -0x21d6455 < (undefined4 *)(uint)bVar24;
        piVar10 = (int *)((int)puVar13 - ((int)&gUnknown_08759154 + (uint)!bVar24));
        bVar22 = piVar10 == (int *)0x0;
      }
    }
    iVar9 = (int)((ulonglong)uVar28 >> 0x20);
    piVar2 = (int *)uVar28;
    if (bVar25 && !bVar22) {
      *piVar2 = (int)&UNK_08030d8c;
      piVar2[-1] = in_r12;
      piVar2[-2] = unaff_r11;
      piVar2[-3] = iVar9;
    }
    uVar26 = (int *)0x2c < piVar2;
    bVar25 = SBORROW4((int)piVar2,0x2d);
    uVar23 = piVar2 == (int *)0x2d;
    piVar7 = (int *)((int)piVar2 + -0x2d);
    if ((bool)uVar23) {
      puStack_78 = puStack_78 + 1;
      piVar2 = (int *)(uint)*puStack_78;
      bVar24 = (int *)0x1f < piVar2;
      bVar22 = piVar2 == (int *)0x20;
      bVar25 = bVar24;
      if (bVar22) {
        if (!bVar24) {
          unaff_r9 = (undefined4 *)((uint)piVar10 & (int)piVar10 << 0x10);
        }
        bVar25 = (uint)-(int)unaff_r9 < (uint)bVar24;
        piVar10 = (int *)-((int)unaff_r9 + (uint)!bVar24);
        bVar22 = piVar10 == (int *)0x0;
      }
      if (!bVar25 || bVar22) {
        if (bVar22) {
          *(char *)(iVar18 + -0x626) = (char)*puStack_78;
        }
        piVar7 = piVar2;
        if (bVar25 && !bVar22) {
          piVar7 = (int *)((int)piVar2 * 0x8001);
          iVar9 = *piVar2;
        }
        *piVar7 = iVar9;
        piVar7[1] = (int)piVar10;
        piVar7[2] = (int)puVar11;
        piVar7[3] = 0x1020f4f8;
        piVar7[4] = iVar9 >> 4;
        uRam00000040 = 0x1020f4f8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar25 || bVar22) {
        puVar11 = (uint *)((uint)piVar2 & (int)piVar2 << (unaff_r8 & 0xff));
      }
      uVar16 = 0x18;
      piVar7 = piVar10 + *piVar10 * 2;
      uVar26 = (int *)0xfffffffb < piVar7;
      bVar25 = SCARRY4((int)piVar7,4);
      piVar2 = piVar7 + 1;
      uVar23 = piVar2 == (int *)0x0;
      *piVar10 = *piVar10 + 1;
      piVar7[2] = 0x14;
      *piVar2 = 0x18;
      piVar7 = piVar2;
    }
    if ((int)piVar7 < 0 == bVar25) {
      piVar2 = (int *)FUN_08077eba();
    }
    if (!(bool)uVar26 || (bool)uVar23) {
      piVar10[-1] = (int)&UNK_08030dca;
      piVar10[-2] = (int)&uStack_80;
      piVar10[-3] = unaff_r11;
      piVar10[-4] = (int)piVar10;
      piVar10[-5] = (int)piVar2;
    }
    puVar19 = &UNK_08030dcd;
    uVar15 = uStack_80;
    sub_0803DE6A();
    bVar22 = puStack_78 <= puStack_7c;
    bVar25 = puStack_7c == puStack_78;
    puVar3 = puStack_7c;
    puVar8 = puStack_78;
    if (!bVar25) {
      if (bVar22 && !bVar25) {
        *(undefined **)puStack_7c = &UNK_08030ddc;
        *(int *)(puStack_7c + -2) = in_r12;
        *(int *)(puStack_7c + -4) = unaff_r11;
        *(ushort **)(puStack_7c + -6) = puStack_7c;
      }
      if (puStack_7c == (ushort *)0x8) {
        uStack_69 = (undefined1)uRam0000000a;
        bVar22 = false;
        bVar27 = false;
        puVar3 = (ushort *)0xc;
        bVar24 = false;
        bVar25 = false;
        puVar11 = &uStack_80;
        puStack_7c = puVar3;
      }
      else {
        if (puStack_7c < (ushort *)0x9) {
          *(undefined4 **)((int)param_1 + -0x801) = unaff_r9;
        }
        else {
          *(undefined **)puStack_78 = &UNK_08030df8;
          *(int *)(puStack_78 + -2) = in_r12;
          *(undefined4 *)(puStack_78 + -4) = unaff_r10;
          *(uint *)(puStack_78 + -6) = uVar15;
          *(ushort **)(puStack_78 + -8) = puStack_78;
          *(ushort **)(puStack_78 + -10) = puStack_7c;
        }
        puVar19 = &UNK_08030dfb;
        sub_0803DE50(&uStack_6c);
        puVar3 = (ushort *)(uint)*puStack_7c;
        bVar22 = (ushort *)0xfe < puVar3;
        bVar27 = SBORROW4((int)puVar3,0xff);
        bVar24 = (int)puVar3 + -0xff < 0;
        bVar25 = puVar3 == (ushort *)0xff;
        if (bVar22) {
          uVar4 = *(uint *)(puStack_60 + 2);
          bVar22 = 0xfffffffe < uVar4;
          bVar27 = SCARRY4(uVar4,1);
          puVar3 = (ushort *)(uVar4 + 1);
          bVar24 = (int)puVar3 < 0;
          bVar25 = puVar3 == (ushort *)0x0;
        }
        else {
          if (bVar25) {
            param_1 = (ulonglong *)((int)unaff_r9 * -0x10000 + 0xff);
            puVar14 = (undefined4 *)(unaff_r8 * -0x100000 + 0xff);
          }
          if (!bVar22) {
            puVar14 = (undefined4 *)((uint)puStack_60 & unaff_r8 << 0x14);
          }
        }
        puVar8 = puStack_60;
        if (!bVar22 || bVar25) {
          *(int *)puStack_60 = in_r12;
          *(int *)(puStack_60 + -2) = unaff_r11;
          *(uint *)(puStack_60 + -4) = unaff_r8;
          *(ulonglong **)(puStack_60 + -6) = param_1;
          *(uint *)(puStack_60 + -8) = uVar15;
          *(ushort **)(puStack_60 + -10) = puVar3;
          puVar11 = (uint *)((uint)puStack_60 & uVar15);
        }
      }
      if (bVar25 || bVar24 != bVar27) {
        bVar22 = (bool)((byte)(unaff_r8 >> 0x1b) & 1);
        uVar12 = (uint)param_1 & ~(unaff_r8 << 5);
        bVar25 = uVar12 == 0;
      }
      else {
        *(undefined1 **)((int)puVar11 + -4) = &_08030E26;
        *(uint **)((int)puVar11 + -8) = &uStack_80;
        *(int *)((int)puVar11 + -0xc) = unaff_r11;
        *(uint *)((int)puVar11 + -0x10) = unaff_r8;
        *(ushort **)((int)puVar11 + -0x14) = puVar3;
      }
    }
    if (bVar22 && !bVar25) {
      *(undefined **)puVar3 = &UNK_08030e2e;
      *(int *)(puVar3 + -2) = in_r12;
      *(int *)(puVar3 + -4) = unaff_r11;
      *(ushort **)(puVar3 + -6) = puVar8;
    }
    cVar20 = SCARRY4(uVar12,0xe);
    puVar13 = (undefined4 *)(uVar12 + 0xe);
    uVar29 = ZEXT48(puVar3);
    if ((bool)cVar20) {
      *(undefined **)puVar3 = puVar19;
      *(int *)(puVar3 + -2) = unaff_r11;
      *(undefined4 **)(puVar3 + -4) = puVar14;
      *(undefined4 **)(puVar3 + -6) = puVar13;
      *(uint *)(puVar3 + -8) = (uint)puVar13 | (int)puVar3 << 0x10;
      *(ushort **)(puVar3 + -10) = puVar3;
    }
    uVar26 = (byte)((uint)puVar3 >> 0x10) & 1;
    piVar10 = (int *)((uint)puVar13 & (int)puVar3 << 0x10);
    cVar21 = (int)piVar10 < 0;
    uVar23 = piVar10 == (int *)0x0;
    if (cVar21 == cVar20) {
      puVar19 = (undefined *)0x8030e58;
      uVar29 = FUN_08038e64();
    }
    puVar5 = (ulonglong *)uVar29;
                    /* WARNING: Read-only address (ram,0x08030e48) is written */
                    /* WARNING: Read-only address (ram,0x08030e4c) is written */
                    /* WARNING: Read-only address (ram,0x08030e50) is written */
                    /* WARNING: Read-only address (ram,0x08030e54) is written */
                    /* WARNING: Read-only address (ram,0x08030e58) is written */
                    /* WARNING: Read-only address (ram,0x08030e5c) is written */
                    /* WARNING: Read-only address (ram,0x08030e60) is written */
    if (!(bool)uVar26 || (bool)uVar23) {
      puRam08030e48 = (undefined1 *)puVar11;
      puRam08030e4c = puVar13;
      uRam08030e50 = unaff_r8;
      uRam08030e54 = unaff_r10;
      iRam08030e58 = in_r12;
      puRam08030e5c = &uStack_80;
      puRam08030e60 = puVar19;
    }
    if (!(bool)uVar26) {
      return puVar5;
    }
    if (!(bool)uVar26) {
      return puVar5;
    }
    if ((bool)cVar21) {
      *puVar13 = 0x8030e6c;
      *(int *)(uVar12 + 10) = in_r12;
      *(uint *)(uVar12 + 6) = unaff_r8;
      *(int **)(uVar12 + 2) = piVar10;
      *(ulonglong *)(uVar12 - 6) = uVar29;
      puVar13 = (undefined4 *)(uVar12 - 10);
    }
    if ((bool)cVar20) {
      *puVar5 = uVar29;
      *(int **)(puVar5 + 1) = piVar10;
      *(uint **)((int)puVar5 + 0xc) = puVar11;
      *(undefined4 **)(puVar5 + 2) = puVar14;
      *(uint *)((int)puVar5 + 0x14) = unaff_r8;
      *(int *)(puVar5 + 3) = unaff_r11;
      *(undefined **)((int)puVar5 + 0x1c) = puVar19;
      *piVar10 = in_r12;
      piVar10[-1] = unaff_r11;
      piVar10[-2] = (int)param_1;
    }
    if ((bool)cVar21) {
      *(uint **)(puVar19 + -4) = &uStack_80;
      *(undefined4 *)(puVar19 + -8) = uVar16;
      *(undefined4 **)(puVar19 + -0xc) = puVar13;
      *(uint **)(puVar19 + -0x10) = puVar11;
      *(ulonglong **)(puVar19 + -0x14) = puVar5;
    }
    else {
      *unaff_r9 = uVar16;
    }
    uVar16 = 0x8030e7f;
    uVar28 = sub_0803DC96(&uStack_6c);
    uVar15 = (uint)((ulonglong)uVar28 >> 0x20);
    puVar6 = (undefined4 *)uVar28;
    if ((bool)uVar26) {
      *puVar6 = uVar16;
      puVar6[-1] = &uStack_80;
      puVar6[-2] = unaff_r11;
      puVar6[-3] = unaff_r8;
      puVar6[-4] = puVar14;
      puVar6[-5] = puVar13;
      puVar17 = (uint *)((uint)puVar6 & 0x8030e8a);
      coprocessor_moveto(9,0,0,puVar13,in_cr0,in_cr15);
    }
    if ((bool)uVar23 || cVar21 != cVar20) {
      param_1 = (ulonglong *)((uint)puVar6 & unaff_r8);
    }
    if ((bool)uVar26) {
      uVar15 = *(uint *)((int)puVar17 + 0x60) & uVar15 << 0x18;
    }
    iVar18 = sub_080178C8(*(uint *)((int)puVar17 + 0x60),uVar15);
    bVar22 = SCARRY4(iVar18,0);
    bVar25 = iVar18 == 0;
    *(int *)((int)param_1 + 0x54) = iVar18;
    uVar16 = 0x8030ea5;
    iVar18 = sub_0801191A(&DAT_03001c4c);
    if (bVar22) {
      *(int *)iVar18 = iVar18;
      *(int **)(iVar18 + 4) = piVar10;
      *(uint **)(iVar18 + 8) = puVar11;
      *(undefined4 **)(iVar18 + 0xc) = puVar13;
      *(undefined4 *)(iVar18 + 0x10) = unaff_r10;
      *(int *)(iVar18 + 0x14) = unaff_r11;
      *(undefined4 *)(iVar18 + 0x18) = uVar16;
      iVar18 = iVar18 + 0x1c;
    }
    if (!bVar25) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sub_0804918C(*(int *)((int)puVar17 + 0x38),*(int *)((int)puVar17 + 0x38),0x805672c,
                 (puVar13[3] - puVar13[1]) * iVar18);
    REG_BG0HOFS = -(short)*puVar13;
    REG_BG0VOFS = -(short)puVar13[1];
    uVar1 = REG_BLDCNT;
    if ((uVar1 & 0x3f) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0x8030bf5;
      *(undefined4 *)((int)param_1 + 0x5c) = 1;
      REG_BLDALPHA = 0;
      DAT_04000053 = 0x10;
      *(undefined4 *)(param_1 + 0xb) = 0;
      REG_BLDCNT = 0x3e41;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0x8030b6d;
      *(undefined4 *)((int)param_1 + 0x5c) = 0;
    }
    REG_BG0CNT = 0x1c80;
    sub_08049150((int)((int)puVar17 + 0x14),*(int *)((int)puVar17 + 0x58));
    sub_080096AC(&DAT_030019a4,0);
    sub_0803F58C((undefined1 *)((int)puVar17 + 0x14),0);
  }
  return param_1;
}


/* sub_08030C20 @ 0x08030C20 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08030e44) */
/* WARNING: Removing unreachable block (ram,0x08030d9c) */

ulonglong * sub_08030C20(void)

{
  ushort uVar1;
  ulonglong *puVar2;
  int *piVar3;
  ushort *puVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  ushort *puVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  int iVar18;
  undefined *puVar19;
  char cVar20;
  char cVar21;
  bool bVar22;
  undefined1 uVar23;
  bool bVar24;
  bool bVar25;
  undefined1 uVar26;
  bool bVar27;
  undefined4 in_cr0;
  undefined4 in_cr15;
  undefined8 uVar28;
  ulonglong uVar29;
  uint in_stack_00000000;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined1 uStack00000015;
  undefined1 uStack00000016;
  undefined1 uStack00000017;
  ushort *in_stack_00000020;
  undefined4 in_stack_00000034;
  int in_stack_0000003c;
  int in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  int in_stack_00000058;
  ulonglong *in_stack_0000005c;
  undefined4 *in_stack_00000060;
  ushort *in_stack_00000068;
  
  puVar2 = (ulonglong *)sub_0803D5B8();
  if (puVar2 != (ulonglong *)0x0) {
    *(undefined **)puVar2 = &_0804E454;
    in_stack_00000060 = (undefined4 *)((int)puVar2 + 0xc);
    *(undefined **)((int)puVar2 + 0xc) = &_080496B4;
    *(undefined **)puVar2 = &_0804ABD8;
    *(undefined **)((int)puVar2 + 0xc) = &DAT_0804ac04;
    in_stack_0000005c = puVar2 + 2;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)((int)puVar2 + 0x54) = 0;
    sub_0804912C(0x600e000,0,0x800);
    in_stack_00000048 = 0;
    in_stack_0000004c = 0;
    puVar15 = &gUnknown_08759154;
    in_stack_00000050 = 0x15;
    in_stack_00000054 = 0x13;
    uVar16 = (uint)DAT_03001a68;
    sub_0803DA10(&stack0x00000048,&DAT_0600e000,uVar16);
    in_stack_00000058 = uVar16 * 0x40 + 0x6000000;
    sub_0804912C(in_stack_00000058,0,0x63c0);
    sub_0803F540(&stack0x00000014,0xa8,0x98);
    in_stack_00000020 = (ushort *)&gUnknown_0806EE6C;
    uStack00000015 = 0xe;
    uStack00000017 = 2;
    uStack00000016 = 1;
    in_stack_00000034 = 0x803f5a5;
    in_stack_00000004 = (ushort *)(in_stack_0000003c + -8);
    in_stack_00000010 = in_stack_00000040 + -8;
    in_stack_00000008 = (ushort *)0x0;
    in_stack_0000000c = in_stack_0000003c;
    sub_0803F974(&stack0x00000014,&stack0x00000004,0);
    in_stack_00000008 = (ushort *)(in_stack_00000040 + -8);
    in_stack_00000010 = in_stack_00000040;
    in_stack_0000000c = in_stack_0000003c;
    in_stack_00000004 = (ushort *)0x0;
    sub_0803F974(&stack0x00000014,&stack0x00000004,0);
    in_stack_0000000c = in_stack_0000003c + -0xc;
    in_stack_00000010 = in_stack_00000040 + -0xc;
    in_stack_00000000 = in_stack_00000040 + -0x10;
    puVar12 = (undefined1 *)(in_stack_0000003c - 0x10);
    in_stack_00000004 = (ushort *)0x4;
    in_stack_00000008 = (ushort *)0x4;
    sub_08004F1C(&stack0x00000014,4,4);
    piVar11 = (int *)0x0;
    in_stack_00000010 = in_stack_00000040 + -8;
    in_stack_0000000c = in_stack_0000003c + -8;
    in_stack_00000004 = (ushort *)0x0;
    in_stack_00000008 = (ushort *)0x0;
    iVar18 = 0x8030d4f;
    sub_08004F50(&stack0x00000014,&stack0x00000004);
    uVar13 = 0x14;
    in_stack_00000008 = in_stack_00000068;
    uVar17 = 8;
    in_stack_00000000 = 0x90;
    uVar16 = (uint)*in_stack_00000068;
    uVar28 = CONCAT44(0x48,uVar16);
    bVar24 = 7 < uVar16;
    bVar27 = SBORROW4(uVar16,8);
    cVar20 = (int)(uVar16 - 8) < 0;
    bVar22 = uVar16 == 8;
    bVar25 = bVar24;
    if (bVar22) {
      iVar18 = 0x8030d74;
      uVar28 = FUN_08056d80();
      puVar14 = (undefined4 *)uVar28;
                    /* WARNING: Read-only address (ram,0x08030e48) is written */
                    /* WARNING: Read-only address (ram,0x08030e4c) is written */
                    /* WARNING: Read-only address (ram,0x08030e50) is written */
                    /* WARNING: Read-only address (ram,0x08030e54) is written */
                    /* WARNING: Read-only address (ram,0x08030e58) is written */
                    /* WARNING: Read-only address (ram,0x08030e5c) is written */
                    /* WARNING: Read-only address (ram,0x08030e60) is written */
      if (!bVar27) {
        unaff_r8 = (uint)*(byte *)(unaff_r8 + 0x840);
      }
      if (!bVar24) {
        unaff_r9 = (undefined4 *)0x0;
      }
      if (bVar24 && !bVar22) {
        *puVar14 = 0x8030d84;
        puVar14[-1] = in_r12;
        puVar14[-2] = (int)((ulonglong)uVar28 >> 0x20);
      }
      bVar25 = bVar24;
      if (bVar22 || (bool)cVar20 != bVar27) {
        puVar14 = (undefined4 *)(unaff_r8 * 0x10000);
        bVar25 = &gUnknown_08759154 < puVar14 || puVar14 + -0x21d6455 < (undefined4 *)(uint)bVar24;
        piVar11 = (int *)((int)puVar14 - ((int)&gUnknown_08759154 + (uint)!bVar24));
        bVar22 = piVar11 == (int *)0x0;
      }
    }
    iVar10 = (int)((ulonglong)uVar28 >> 0x20);
    piVar3 = (int *)uVar28;
    if (bVar25 && !bVar22) {
      *piVar3 = (int)&UNK_08030d8c;
      piVar3[-1] = in_r12;
      piVar3[-2] = unaff_r11;
      piVar3[-3] = iVar10;
    }
    uVar26 = (int *)0x2c < piVar3;
    bVar25 = SBORROW4((int)piVar3,0x2d);
    uVar23 = piVar3 == (int *)0x2d;
    piVar8 = (int *)((int)piVar3 + -0x2d);
    if ((bool)uVar23) {
      in_stack_00000008 = in_stack_00000008 + 1;
      piVar3 = (int *)(uint)*in_stack_00000008;
      bVar24 = (int *)0x1f < piVar3;
      bVar22 = piVar3 == (int *)0x20;
      bVar25 = bVar24;
      if (bVar22) {
        if (!bVar24) {
          unaff_r9 = (undefined4 *)((uint)piVar11 & (int)piVar11 << 0x10);
        }
        bVar25 = (uint)-(int)unaff_r9 < (uint)bVar24;
        piVar11 = (int *)-((int)unaff_r9 + (uint)!bVar24);
        bVar22 = piVar11 == (int *)0x0;
      }
      if (!bVar25 || bVar22) {
        if (bVar22) {
          *(char *)(iVar18 + -0x626) = (char)*in_stack_00000008;
        }
        piVar8 = piVar3;
        if (bVar25 && !bVar22) {
          piVar8 = (int *)((int)piVar3 * 0x8001);
          iVar10 = *piVar3;
        }
        *piVar8 = iVar10;
        piVar8[1] = (int)piVar11;
        piVar8[2] = (int)puVar12;
        piVar8[3] = 0x1020f4f8;
        piVar8[4] = iVar10 >> 4;
        uRam00000040 = 0x1020f4f8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar25 || bVar22) {
        puVar12 = (undefined1 *)((uint)piVar3 & (int)piVar3 << (unaff_r8 & 0xff));
      }
      uVar17 = 0x18;
      piVar8 = piVar11 + *piVar11 * 2;
      uVar26 = (int *)0xfffffffb < piVar8;
      bVar25 = SCARRY4((int)piVar8,4);
      piVar3 = piVar8 + 1;
      uVar23 = piVar3 == (int *)0x0;
      *piVar11 = *piVar11 + 1;
      piVar8[2] = 0x14;
      *piVar3 = 0x18;
      piVar8 = piVar3;
    }
    if ((int)piVar8 < 0 == bVar25) {
      piVar3 = (int *)FUN_08077eba();
    }
    if (!(bool)uVar26 || (bool)uVar23) {
      piVar11[-1] = (int)&UNK_08030dca;
      piVar11[-2] = (int)register0x00000054;
      piVar11[-3] = unaff_r11;
      piVar11[-4] = (int)piVar11;
      piVar11[-5] = (int)piVar3;
    }
    puVar19 = &UNK_08030dcd;
    uVar16 = in_stack_00000000;
    sub_0803DE6A();
    bVar22 = in_stack_00000008 <= in_stack_00000004;
    bVar25 = in_stack_00000004 == in_stack_00000008;
    puVar4 = in_stack_00000004;
    puVar9 = in_stack_00000008;
    if (!bVar25) {
      if (bVar22 && !bVar25) {
        *(undefined **)in_stack_00000004 = &UNK_08030ddc;
        *(int *)(in_stack_00000004 + -2) = in_r12;
        *(int *)(in_stack_00000004 + -4) = unaff_r11;
        *(ushort **)(in_stack_00000004 + -6) = in_stack_00000004;
      }
      if (in_stack_00000004 == (ushort *)0x8) {
        uStack00000017 = (undefined1)uRam0000000a;
        bVar22 = false;
        bVar27 = false;
        puVar4 = (ushort *)0xc;
        bVar24 = false;
        bVar25 = false;
        puVar12 = (undefined1 *)register0x00000054;
        in_stack_00000004 = puVar4;
      }
      else {
        if (in_stack_00000004 < (ushort *)0x9) {
          *(undefined4 **)((int)puVar2 + -0x801) = unaff_r9;
        }
        else {
          *(undefined **)in_stack_00000008 = &UNK_08030df8;
          *(int *)(in_stack_00000008 + -2) = in_r12;
          *(undefined4 *)(in_stack_00000008 + -4) = unaff_r10;
          *(uint *)(in_stack_00000008 + -6) = uVar16;
          *(ushort **)(in_stack_00000008 + -8) = in_stack_00000008;
          *(ushort **)(in_stack_00000008 + -10) = in_stack_00000004;
        }
        puVar19 = &UNK_08030dfb;
        sub_0803DE50(&stack0x00000014);
        puVar4 = (ushort *)(uint)*in_stack_00000004;
        bVar22 = (ushort *)0xfe < puVar4;
        bVar27 = SBORROW4((int)puVar4,0xff);
        bVar24 = (int)puVar4 + -0xff < 0;
        bVar25 = puVar4 == (ushort *)0xff;
        if (bVar22) {
          uVar5 = *(uint *)(in_stack_00000020 + 2);
          bVar22 = 0xfffffffe < uVar5;
          bVar27 = SCARRY4(uVar5,1);
          puVar4 = (ushort *)(uVar5 + 1);
          bVar24 = (int)puVar4 < 0;
          bVar25 = puVar4 == (ushort *)0x0;
        }
        else {
          if (bVar25) {
            puVar2 = (ulonglong *)((int)unaff_r9 * -0x10000 + 0xff);
            puVar15 = (undefined4 *)(unaff_r8 * -0x100000 + 0xff);
          }
          if (!bVar22) {
            puVar15 = (undefined4 *)((uint)in_stack_00000020 & unaff_r8 << 0x14);
          }
        }
        puVar9 = in_stack_00000020;
        if (!bVar22 || bVar25) {
          *(int *)in_stack_00000020 = in_r12;
          *(int *)(in_stack_00000020 + -2) = unaff_r11;
          *(uint *)(in_stack_00000020 + -4) = unaff_r8;
          *(ulonglong **)(in_stack_00000020 + -6) = puVar2;
          *(uint *)(in_stack_00000020 + -8) = uVar16;
          *(ushort **)(in_stack_00000020 + -10) = puVar4;
          puVar12 = (undefined1 *)((uint)in_stack_00000020 & uVar16);
        }
      }
      if (bVar25 || bVar24 != bVar27) {
        bVar22 = (bool)((byte)(unaff_r8 >> 0x1b) & 1);
        uVar13 = (uint)puVar2 & ~(unaff_r8 << 5);
        bVar25 = uVar13 == 0;
      }
      else {
        *(undefined1 **)(puVar12 + -4) = &_08030E26;
        *(BADSPACEBASE **)(puVar12 + -8) = register0x00000054;
        *(int *)(puVar12 + -0xc) = unaff_r11;
        *(uint *)(puVar12 + -0x10) = unaff_r8;
        *(ushort **)(puVar12 + -0x14) = puVar4;
      }
    }
    if (bVar22 && !bVar25) {
      *(undefined **)puVar4 = &UNK_08030e2e;
      *(int *)(puVar4 + -2) = in_r12;
      *(int *)(puVar4 + -4) = unaff_r11;
      *(ushort **)(puVar4 + -6) = puVar9;
    }
    cVar20 = SCARRY4(uVar13,0xe);
    puVar14 = (undefined4 *)(uVar13 + 0xe);
    uVar29 = ZEXT48(puVar4);
    if ((bool)cVar20) {
      *(undefined **)puVar4 = puVar19;
      *(int *)(puVar4 + -2) = unaff_r11;
      *(undefined4 **)(puVar4 + -4) = puVar15;
      *(undefined4 **)(puVar4 + -6) = puVar14;
      *(uint *)(puVar4 + -8) = (uint)puVar14 | (int)puVar4 << 0x10;
      *(ushort **)(puVar4 + -10) = puVar4;
    }
    uVar26 = (byte)((uint)puVar4 >> 0x10) & 1;
    piVar11 = (int *)((uint)puVar14 & (int)puVar4 << 0x10);
    cVar21 = (int)piVar11 < 0;
    uVar23 = piVar11 == (int *)0x0;
    if (cVar21 == cVar20) {
      puVar19 = (undefined *)0x8030e58;
      uVar29 = FUN_08038e64();
    }
    puVar6 = (ulonglong *)uVar29;
                    /* WARNING: Read-only address (ram,0x08030e48) is written */
                    /* WARNING: Read-only address (ram,0x08030e4c) is written */
                    /* WARNING: Read-only address (ram,0x08030e50) is written */
                    /* WARNING: Read-only address (ram,0x08030e54) is written */
                    /* WARNING: Read-only address (ram,0x08030e58) is written */
                    /* WARNING: Read-only address (ram,0x08030e5c) is written */
                    /* WARNING: Read-only address (ram,0x08030e60) is written */
    if (!(bool)uVar26 || (bool)uVar23) {
      puRam08030e48 = puVar12;
      puRam08030e4c = puVar14;
      uRam08030e50 = unaff_r8;
      uRam08030e54 = unaff_r10;
      iRam08030e58 = in_r12;
      puRam08030e5c = (undefined1 *)register0x00000054;
      puRam08030e60 = puVar19;
    }
    if (!(bool)uVar26) {
      return puVar6;
    }
    if (!(bool)uVar26) {
      return puVar6;
    }
    if ((bool)cVar21) {
      *puVar14 = 0x8030e6c;
      *(int *)(uVar13 + 10) = in_r12;
      *(uint *)(uVar13 + 6) = unaff_r8;
      *(int **)(uVar13 + 2) = piVar11;
      *(ulonglong *)(uVar13 - 6) = uVar29;
      puVar14 = (undefined4 *)(uVar13 - 10);
    }
    if ((bool)cVar20) {
      *puVar6 = uVar29;
      *(int **)(puVar6 + 1) = piVar11;
      *(undefined1 **)((int)puVar6 + 0xc) = puVar12;
      *(undefined4 **)(puVar6 + 2) = puVar15;
      *(uint *)((int)puVar6 + 0x14) = unaff_r8;
      *(int *)(puVar6 + 3) = unaff_r11;
      *(undefined **)((int)puVar6 + 0x1c) = puVar19;
      *piVar11 = in_r12;
      piVar11[-1] = unaff_r11;
      piVar11[-2] = (int)puVar2;
    }
    if ((bool)cVar21) {
      *(BADSPACEBASE **)(puVar19 + -4) = register0x00000054;
      *(undefined4 *)(puVar19 + -8) = uVar17;
      *(undefined4 **)(puVar19 + -0xc) = puVar14;
      *(undefined1 **)(puVar19 + -0x10) = puVar12;
      *(ulonglong **)(puVar19 + -0x14) = puVar6;
    }
    else {
      *unaff_r9 = uVar17;
    }
    uVar17 = 0x8030e7f;
    uVar28 = sub_0803DC96(&stack0x00000014);
    uVar16 = (uint)((ulonglong)uVar28 >> 0x20);
    puVar7 = (undefined4 *)uVar28;
    if ((bool)uVar26) {
      *puVar7 = uVar17;
      puVar7[-1] = register0x00000054;
      puVar7[-2] = unaff_r11;
      puVar7[-3] = unaff_r8;
      puVar7[-4] = puVar15;
      puVar7[-5] = puVar14;
      register0x00000054 = (BADSPACEBASE *)((uint)puVar7 & 0x8030e8a);
      coprocessor_moveto(9,0,0,puVar14,in_cr0,in_cr15);
    }
    if ((bool)uVar23 || cVar21 != cVar20) {
      puVar2 = (ulonglong *)((uint)puVar7 & unaff_r8);
    }
    if ((bool)uVar26) {
      uVar16 = *(uint *)((int)register0x00000054 + 0x60) & uVar16 << 0x18;
    }
    iVar18 = sub_080178C8(*(uint *)((int)register0x00000054 + 0x60),uVar16);
    bVar22 = SCARRY4(iVar18,0);
    bVar25 = iVar18 == 0;
    *(int *)((int)puVar2 + 0x54) = iVar18;
    uVar17 = 0x8030ea5;
    iVar18 = sub_0801191A(&DAT_03001c4c);
    if (bVar22) {
      *(int *)iVar18 = iVar18;
      *(int **)(iVar18 + 4) = piVar11;
      *(undefined1 **)(iVar18 + 8) = puVar12;
      *(undefined4 **)(iVar18 + 0xc) = puVar14;
      *(undefined4 *)(iVar18 + 0x10) = unaff_r10;
      *(int *)(iVar18 + 0x14) = unaff_r11;
      *(undefined4 *)(iVar18 + 0x18) = uVar17;
      iVar18 = iVar18 + 0x1c;
    }
    if (!bVar25) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sub_0804918C(*(int *)((int)register0x00000054 + 0x38),*(int *)((int)register0x00000054 + 0x38),
                 0x805672c,(puVar14[3] - puVar14[1]) * iVar18);
    REG_BG0HOFS = -(short)*puVar14;
    REG_BG0VOFS = -(short)puVar14[1];
    uVar1 = REG_BLDCNT;
    if ((uVar1 & 0x3f) == 0) {
      *(undefined4 *)(puVar2 + 0xc) = 0x8030bf5;
      *(undefined4 *)((int)puVar2 + 0x5c) = 1;
      REG_BLDALPHA = 0;
      DAT_04000053 = 0x10;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      REG_BLDCNT = 0x3e41;
    }
    else {
      *(undefined4 *)(puVar2 + 0xc) = 0x8030b6d;
      *(undefined4 *)((int)puVar2 + 0x5c) = 0;
    }
    REG_BG0CNT = 0x1c80;
    sub_08049150((int)((int)register0x00000054 + 0x14),*(int *)((int)register0x00000054 + 0x58));
    sub_080096AC(&DAT_030019a4,0);
    sub_0803F58C((undefined1 *)((int)register0x00000054 + 0x14),0);
  }
  return puVar2;
}


/* sub_08030F78 @ 0x08030F78 */

void sub_08030F78(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0804ABD8;
  param_1[3] = &DAT_0804ac04;
  sub_08009692(&DAT_030019a4,0,param_3,param_4,param_4);
  if (param_1[0x17] != 0) {
    REG_BLDCNT = 0x1040;
    REG_BLDALPHA = 0x10;
    DAT_04000053 = 0x10;
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08030FB4 @ 0x08030FB4 */

undefined4 sub_08030FB4(void)

{
  return 0;
}


/* sub_08030FB8 @ 0x08030FB8 */

int * sub_08030FB8(int *param_1,int param_2)

{
  int iVar1;
  
  param_2 = DAT_03002a60 * 8 + param_2;
  iVar1 = *(int *)(param_2 + 0x18);
  *param_1 = *(int *)(param_2 + 0x14) + 0x48;
  param_1[1] = iVar1 + 8;
  return param_1 + 2;
}


/* sub_08031004 @ 0x08031004 */

undefined4 sub_08031004(int param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
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
  
  if (DAT_03001b94 != 0) {
    piVar8 = (int *)(param_1 + 4);
    if (param_2[0x81] != 0) {
      uVar2 = param_2[0x81] & 0xffffff7f;
      if (uVar2 == 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x400;
      }
      else if (uVar2 == 1) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x400;
      }
      else if (uVar2 == 2) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -0x400;
      }
      else if (uVar2 == 3) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x400;
      }
      if (*(int *)(param_1 + 4) < 0x81) {
        if (*(int *)(param_1 + 4) < -0x80) {
          *piVar8 = -0x80;
        }
        else if (*(int *)(param_1 + 8) < 0x81) {
          if (*(int *)(param_1 + 8) < -0x80) {
            *(undefined4 *)(param_1 + 8) = 0xffffff80;
          }
        }
        else {
          *(undefined4 *)(param_1 + 8) = 0x80;
        }
      }
      else {
        *piVar8 = 0x80;
      }
      param_2[0x81] = 0;
    }
    sub_0800FDFA(&iStack_4c);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800FDFA(&iStack_34,param_2);
    iStack_20 = iStack_30 + iStack_28 >> 1;
    iStack_24 = iStack_34 + iStack_2c >> 1;
    iStack_1c = iStack_3c - iStack_24;
    iStack_18 = iStack_38 - iStack_20;
    if (DAT_0300316c == 0) {
      DAT_0300316c = 1;
      DAT_03003168 = sub_08054A64(0x4219999a);
    }
    if (iStack_1c < 1) {
      if (-0x80 < *(int *)(param_1 + 4)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - DAT_03003168;
      }
    }
    else if (*(int *)(param_1 + 4) < 0x80) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + DAT_03003168;
    }
    if (iStack_18 < 1) {
      if (-0x80 < *(int *)(param_1 + 8)) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - DAT_03003168;
      }
    }
    else if (*(int *)(param_1 + 8) < 0x80) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + DAT_03003168;
    }
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = -iVar3;
    }
    iVar5 = *(int *)(param_1 + 8);
    iVar6 = iVar5;
    if (iVar5 < 0) {
      iVar6 = -iVar5;
    }
    if (iVar6 < iVar4) {
      if (iVar3 < 1) {
        uVar1 = 2;
      }
      else {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
    }
    else {
      *(char *)(param_2 + 4) = '\x01' - (0 < iVar5);
    }
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    piVar7 = param_2 + 0x68;
    iStack_34 = *piVar7 + *piVar8;
    iStack_30 = param_2[0x69] + *(int *)(param_1 + 8);
    piVar8 = param_2 + 0x69;
    iStack_2c = iStack_34;
    iStack_28 = iStack_30;
    iStack_24 = iStack_34;
    iStack_20 = iStack_30;
    iVar4 = __call_via_r2(param_2,&iStack_24,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar4 == 0) {
      iStack_2c = iStack_24;
      iStack_28 = param_2[0x69];
      iVar4 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar4 == 0) {
        iStack_2c = *piVar7;
        iStack_28 = iStack_20;
        iVar4 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar4 != 0) {
          *piVar7 = iStack_2c;
          *piVar8 = iStack_28;
        }
      }
      else {
        *piVar7 = iStack_2c;
        *piVar8 = iStack_28;
      }
    }
    else {
      *piVar7 = iStack_24;
      *piVar8 = iStack_20;
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  }
  return 0;
}


/* sub_08031228 @ 0x08031228 */

void sub_08031228(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CB80;
  }
  return;
}


/* sub_0803123A @ 0x0803123A */

undefined4 sub_0803123A(undefined4 param_1,int param_2,byte *param_3)

{
  *(uint *)(param_2 + 0x204) = *param_3 | 0x80;
  return 1;
}


/* sub_0803125C @ 0x0803125C */

void sub_0803125C(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 auStack_70 [4];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  int iStack_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  piVar1 = DAT_03001b94;
  if (DAT_03001b94 != (int *)0x0) {
    sub_0800FE78(&local_24,DAT_03001b94);
    sub_0800FE78(&local_34,param_2);
    local_44 = local_34 + local_2c >> 1;
    local_68 = local_30 + local_28 >> 1;
    local_74 = local_20 + local_18 >> 1;
    local_78 = local_24 + local_1c >> 1;
    local_80 = local_78 - local_44;
    iVar4 = local_74 - local_68;
    iVar2 = local_80;
    if (local_80 < 0) {
      iVar2 = -local_80;
    }
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    local_7c = iVar4;
    local_3c = local_44;
    local_38 = local_68;
    if (iVar3 < iVar2) {
      local_60 = local_28 + 3;
      if (local_80 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 2;
        local_6c = local_34 + -4;
        local_64 = local_44;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 3;
        local_6c = local_44;
        local_64 = local_2c + 3;
      }
    }
    else {
      local_40 = local_68;
      sub_0800FDFA(&local_80,param_2);
      local_6c = local_80;
      local_64 = local_78;
      if (iVar4 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
        local_68 = local_30;
        local_60 = local_7c;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
        local_68 = local_30;
        local_60 = local_28 + -6;
      }
    }
    uStack_5c = *(undefined1 *)(param_2 + 0x10);
    puStack_54 = &gUnknown_086B8098;
    uStack_58 = 0x400;
    auStack_70[0] = 0;
    iVar2 = *piVar1;
    iStack_50 = param_2;
    local_40 = param_2;
    iVar2 = __call_via_r3(piVar1,0,auStack_70,*(int *)(iVar2 + 0x24) + iVar2);
    if (iVar2 != 0) {
      iVar2 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
    }
  }
  return;
}


/* sub_08031388 @ 0x08031388 */

void sub_08031388(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x10) + *param_1);
  bVar1 = *(byte *)(param_2 + 0x10);
  iVar2 = sub_0803FACC(0x40);
  uVar3 = (uint)(param_1[3] * (iVar2 + 0x60)) >> 7;
  param_1[(bVar1 >> 1 ^ 1) + 1] = uVar3 * *(int *)(&DAT_0875917c + (uint)bVar1 * 4);
  iVar2 = sub_0803FACC(0x8000);
  param_1[(bVar1 >> 1) + 1] = (int)(uVar3 * (iVar2 + -0x4000)) >> 0xc;
  *(byte *)(param_2 + 0x10) = bVar1;
  return;
}


/* sub_080313EA @ 0x080313EA */

undefined4 sub_080313EA(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  int *piStack_1c;
  int *piStack_18;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if ((undefined4 *)param_2[5] != &DAT_03002b9c) {
      sub_0800ECDA(param_2,1);
      sub_0800ED18(param_2,&DAT_03002b9c);
    }
    sub_0800FDFA(auStack_2c,param_2);
    piStack_18 = param_2 + 0x68;
    piStack_1c = (int *)(param_1 + 4);
    *piStack_18 = *piStack_18 + *(int *)(param_1 + 4);
    param_2[0x69] = param_2[0x69] + *(int *)(param_1 + 8);
    sub_0800FDFA(auStack_3c,param_2);
    __call_via_r3(param_2,auStack_2c,1,*(int *)(*param_2 + 0x4c) + *param_2);
    iVar1 = __call_via_r2(param_2,auStack_3c,*(int *)(*param_2 + 0x50) + *param_2);
    if (iVar1 == 0) {
      *piStack_18 = *piStack_18 - *piStack_1c;
      piStack_18[1] = piStack_18[1] - *(int *)(param_1 + 8);
      __call_via_r3(param_2,auStack_2c,0,*(int *)(*param_2 + 0x4c) + *param_2);
    }
    else {
      __call_via_r3(param_2,auStack_3c,0,*(int *)(*param_2 + 0x4c) + *param_2);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_080314A6 @ 0x080314A6 */

void sub_080314A6(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CFDC;
    puVar1[3] = uVar2;
    puVar1[4] = 0x30;
  }
  return;
}


/* sub_080314DC @ 0x080314DC */

undefined4 sub_080314DC(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((undefined4 *)param_2[5] == &DAT_03001b30) {
    uVar1 = 0;
  }
  else {
    iVar3 = param_2[0x16];
    iVar2 = sub_08000158(0xbc);
    if (iVar3 == iVar2) {
      uVar1 = sub_08000158(0xbb);
      sub_0800EDF8(param_2,uVar1);
    }
    else {
      iVar3 = param_2[0x16];
      iVar2 = sub_08000158(0xbb);
      if (iVar3 == iVar2) {
        uVar1 = sub_08000158(0xbc);
        sub_0800EDF8(param_2,uVar1);
      }
      else {
        iVar3 = param_2[0x16];
        iVar2 = sub_08000158(0xe7);
        if (iVar3 == iVar2) {
          uVar1 = sub_08000158(0xe6);
          sub_0800EDF8(param_2,uVar1);
        }
        else {
          iVar3 = param_2[0x16];
          iVar2 = sub_08000158(0xe6);
          if (iVar3 == iVar2) {
            uVar1 = sub_08000158(0xe7);
            sub_0800EDF8(param_2,uVar1);
          }
          else {
            iVar3 = param_2[0x16];
            iVar2 = sub_08000158(0x85);
            if (iVar3 == iVar2) {
              uVar1 = sub_08000158(0x86);
              sub_0800EDF8(param_2,uVar1);
            }
            else {
              iVar3 = param_2[0x16];
              iVar2 = sub_08000158(0x86);
              if (iVar3 == iVar2) {
                uVar1 = sub_08000158(0x85);
                sub_0800EDF8(param_2,uVar1);
              }
            }
          }
        }
      }
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_080315A4 @ 0x080315A4 */

undefined4 * sub_080315A4(void)

{
  return &DAT_03003170;
}


/* sub_080315B0 @ 0x080315B0 */

undefined4 * sub_080315B0(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x150), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804920C;
  param_1[1] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  *param_1 = &_080499A8;
  param_1[0x45] = 0;
  param_1[0x47] = 1;
  iVar1 = (uint)DAT_03001068 * 0x68;
  sub_08013C66(&DAT_03001560 + iVar1);
  param_1[0x48] = (uint)*(ushort *)(&DAT_030015ac + iVar1);
  param_1[0x49] = (uint)*(ushort *)(&DAT_030015ae + iVar1);
  param_1[0x4a] = (uint)*(ushort *)(&DAT_030015b0 + iVar1);
  param_1[0x4b] = (uint)*(ushort *)(&DAT_030015b4 + iVar1);
  return param_1;
}


/* sub_08031620 @ 0x08031620 */

void sub_08031620(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_080499A8;
  DAT_03003174 = 0;
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08031644 @ 0x08031644 */

void sub_08031644(int param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 300);
  iVar2 = *(int *)(param_1 + 0x114) * 8;
  if ((&DAT_03003178)[iVar2] == '\x01') {
    uVar4 = (uint)*(ushort *)(&DAT_0300317a + iVar2);
    iVar2 = (uint)DAT_03001068 * 0x68;
    puVar5 = &DAT_03001560 + iVar2;
    puVar3 = (uint *)(puVar5 + (uint)(byte)(&DAT_086f8300)[uVar4 * 0x2c] * 4 + 0x3c);
    uVar6 = *puVar3;
    do {
      *puVar3 = uVar4;
    } while (*puVar3 != uVar4);
    sub_08013C66(puVar5);
    bVar1 = (&DAT_086f8300)[uVar4 * 0x2c];
    do {
      *(uint *)(puVar5 + (uint)bVar1 * 4 + 0x3c) = uVar6;
    } while (*(uint *)(puVar5 + (uint)bVar1 * 4 + 0x3c) != uVar6);
    *(uint *)(param_1 + 0x130) = (uint)*(ushort *)(&DAT_030015ac + iVar2);
    *(uint *)(param_1 + 0x134) = (uint)*(ushort *)(&DAT_030015ae + iVar2);
    *(uint *)(param_1 + 0x138) = (uint)*(ushort *)(&DAT_030015b0 + iVar2);
    *(uint *)(param_1 + 0x13c) = (uint)*(ushort *)(&DAT_030015b4 + iVar2);
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}


/* sub_080316D6 @ 0x080316D6 */

void sub_080316D6(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
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
  uStack_18 = 0x1e;
  uStack_14 = 0x14;
  uStack_20 = 0;
  uStack_1c = 0;
  sub_0803DA10(&uStack_20,&DAT_0600f000,1);
  REG_DISPCNT = 0x240;
  uStack_14 = 1;
  uStack_18 = 1;
  uStack_20 = 0xc;
  uStack_1c = 2;
  uVar1 = sub_08013E64(0,param_1,2,0xd5);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  sub_0800664E(param_1,uVar1);
  uStack_14 = 1;
  uStack_18 = 1;
  uStack_20 = 0x31;
  uStack_1c = 3;
  uVar1 = sub_08013E64(0,param_1,3,0xd5);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  sub_0800664E(param_1,uVar1);
  uStack_14 = 0;
  uStack_20 = 0x86;
  uStack_18 = 1;
  uStack_1c = 0;
  uVar1 = sub_08013E64(0,param_1,0,0xc);
  sub_0800664E(param_1,uVar1);
  uStack_14 = 0;
  uStack_20 = 0x86;
  uStack_1c = 1;
  uStack_18 = 1;
  uVar1 = sub_08013E64(0,param_1,1,0xc);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  sub_0800664E(param_1,uVar1);
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  sub_08031644(param_1);
  return;
}


/* sub_08031718 @ 0x08031718 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_08031718(int a0,int a1,int a2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r4;
  undefined2 *unaff_r6;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  sub_0804912C(a0,a1,a2);
  uStack00000008 = 0x1e;
  uStack0000000c = 0x14;
  sub_0803DA10();
  *unaff_r6 = 0x240;
  uStack0000000c = 1;
  uStack00000008 = 1;
  uVar1 = sub_08013E64(0,unaff_r4,2,0xd5);
  *(undefined4 *)(unaff_r4 + 0x148) = uVar1;
  sub_0800664E(unaff_r4,uVar1);
  uStack0000000c = 1;
  uStack00000008 = 1;
  uVar1 = sub_08013E64(0,unaff_r4,3,0xd5);
  *(undefined4 *)(unaff_r4 + 0x14c) = uVar1;
  sub_0800664E(unaff_r4,uVar1);
  uStack0000000c = 0;
  uStack00000008 = 1;
  uVar1 = sub_08013E64(0,unaff_r4,0,0xc);
  sub_0800664E(unaff_r4,uVar1);
  uStack0000000c = 0;
  uStack00000008 = 1;
  uVar1 = sub_08013E64(0,unaff_r4,1,0xc);
  *(undefined4 *)(unaff_r4 + 0x140) = uVar1;
  sub_0800664E(unaff_r4,uVar1);
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  uVar1 = sub_08016208(0,unaff_r4);
  sub_0800664E(unaff_r4,uVar1);
  iVar2 = sub_08031644(unaff_r4);
  return iVar2;
}


/* sub_08031808 @ 0x08031808 */

int sub_08031808(undefined1 param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = CONCAT22(param_2,CONCAT11(param_4,param_1));
  iVar1 = DAT_03003174 * 8;
  DAT_03003174 = DAT_03003174 + 1;
  *(undefined4 *)(&DAT_03003178 + iVar1) = local_c;
  *(undefined4 *)(&DAT_0300317c + iVar1) = param_3;
  return iVar1 + 0x3003180;
}


/* sub_0803185C @ 0x0803185C */

void sub_0803185C(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_r7;
  int *piVar6;
  int local_478;
  int iStack_474;
  int iStack_470;
  int iStack_46c;
  undefined1 auStack_468 [972];
  undefined1 auStack_9c [52];
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 *local_50;
  undefined4 local_3c;
  undefined4 local_34;
  int local_30;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  undefined4 *local_1c;
  int local_18;
  
  local_18 = param_1;
  sub_0803F540(&uStack_5c,0xf0,0xa0);
  local_478 = local_30;
  sub_08004F1C(&uStack_5c,0,0,local_34);
  sub_08004F50(&uStack_5c,&gUnknown_087591A8);
  local_50 = &gUnknown_0807012C;
  uStack_5c._1_1_ = 0xe;
  uStack_5c._3_1_ = 2;
  uStack_5c._2_1_ = 1;
  local_3c = 0x803f5a5;
  sub_08005154(&uStack_5c,0x10,0x42,0xe0);
  sub_08005154(&uStack_5c,0x10,0x84,0xe0);
  sub_080051B0(&uStack_5c,0xa8,0x46,0x80);
  sub_080051B0(&uStack_5c,0xdc,0x1b,0x31);
  iVar4 = local_18;
  iVar5 = *(int *)(local_18 + 0x114) + -1;
  *(int *)(local_18 + 0x118) = iVar5;
  if (DAT_03003174 + -3 < iVar5) {
    *(int *)(local_18 + 0x118) = DAT_03003174 + -3;
  }
  if (*(int *)(local_18 + 0x118) < 0) {
    *(undefined4 *)(local_18 + 0x118) = 0;
  }
  local_1c = (undefined4 *)(local_18 + 0x140);
  *(uint *)(*(int *)(local_18 + 0x148) + 8) = (uint)(0 < *(int *)(local_18 + 0x114));
  *(uint *)(*(int *)(local_18 + 0x14c) + 8) = (uint)(*(int *)(local_18 + 0x114) < DAT_03003174 + -1)
  ;
  iVar5 = 0;
  piStack_20 = &DAT_0300155c;
  do {
    iStack_68 = *(int *)(iVar4 + 0x118) + iVar5;
    if (DAT_03003174 <= iStack_68) break;
    iVar2 = iStack_68 * 8;
    if ((&DAT_03003178)[iVar2] == '\0') {
      iVar3 = (uint)*(ushort *)(&DAT_0300317a + iVar2) * 0x34;
      uStack_60 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_083bd2fc + iVar3) * 4);
      uStack_64 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_083bd300 + iVar3) * 4);
      unaff_r7 = (int *)(&DAT_083bd314 + iVar3);
    }
    else if ((&DAT_03003178)[iVar2] == '\x01') {
      iVar3 = (uint)*(ushort *)(&DAT_0300317a + iVar2) * 0x2c;
      uStack_60 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&gEquipmentTable + iVar3) * 4);
      uStack_64 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(&DAT_086f82ee + iVar3) * 4);
      unaff_r7 = (int *)(&UNK_086f82f0 + iVar3);
    }
    if (*piStack_20 < *(int *)(&DAT_0300317c + iVar2)) {
      uStack_5c._3_1_ = 0x75;
    }
    else if (*(int *)(iVar4 + 0x114) == iStack_68) {
      uStack_5c._3_1_ = 6;
    }
    else {
      uStack_5c._3_1_ = 2;
    }
    Wfz_LoadContainer(unaff_r7[3],auStack_468);
    local_478 = 0x25 - *unaff_r7 / 2;
    iStack_24 = iVar5 * 0x10;
    iStack_474 = (iVar5 * 0x10 + 0x17) - unaff_r7[1] / 2;
    piVar6 = unaff_r7 + 1;
    iStack_470 = local_478 + *unaff_r7;
    unaff_r7 = &uStack_5c;
    iStack_46c = iStack_474 + *piVar6;
    sub_0803F922(unaff_r7,auStack_468,&local_478);
    iStack_58 = 0xd4;
    iStack_54 = iStack_24 + 0x19;
    uStack_5c._0_1_ = 2;
    iStack_28 = iStack_54;
    sub_0803DC96(unaff_r7,L"%d Z",*(undefined4 *)(&DAT_0300317c + iVar2));
    iStack_58 = 0x36;
    iStack_54 = iStack_28;
    uStack_5c._0_1_ = 0;
    sub_0803DCC4(unaff_r7,0x6e,uStack_60);
    if (*(int *)(iVar4 + 0x114) == iStack_68) {
      iStack_58 = 0x10;
      iStack_54 = 0x4f;
      uStack_5c._3_1_ = 2;
      sub_0803DD66(unaff_r7,0x94,uStack_64);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uStack_5c._2_1_ = 1;
  local_3c = 0x803f5a5;
  iStack_58 = 0xaf;
  iStack_54 = 0x4e;
  if (*(int *)(iVar4 + 0x130) == *(int *)(iVar4 + 0x120)) {
    iVar5 = 0x37;
  }
  else if (*(int *)(iVar4 + 0x120) < *(int *)(iVar4 + 0x130)) {
    iVar5 = 0x38;
  }
  else {
    iVar5 = 0x39;
  }
  sub_0803DC96(&uStack_5c,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  iStack_54 = 0x5a;
  iStack_58 = 0xaf;
  if (*(int *)(iVar4 + 0x134) == *(int *)(iVar4 + 0x124)) {
    iVar5 = 0x3a;
  }
  else if (*(int *)(iVar4 + 0x124) < *(int *)(iVar4 + 0x134)) {
    iVar5 = 0x3b;
  }
  else {
    iVar5 = 0x3c;
  }
  sub_0803DC96(&uStack_5c,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  iStack_54 = 0x66;
  iStack_58 = 0xaf;
  if (*(int *)(iVar4 + 0x138) == *(int *)(iVar4 + 0x128)) {
    iVar5 = 0x3d;
  }
  else if (*(int *)(iVar4 + 0x128) < *(int *)(iVar4 + 0x138)) {
    iVar5 = 0x3e;
  }
  else {
    iVar5 = 0x3f;
  }
  sub_0803DC96(&uStack_5c,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  iStack_54 = 0x72;
  iStack_58 = 0xaf;
  if (*(int *)(iVar4 + 0x13c) == *(int *)(iVar4 + 300)) {
    iVar5 = 0x40;
  }
  else if (*(int *)(iVar4 + 300) < *(int *)(iVar4 + 0x13c)) {
    iVar5 = 0x41;
  }
  else {
    iVar5 = 0x42;
  }
  sub_0803DC96(&uStack_5c,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  iVar5 = *(int *)(iVar4 + 0x114) * 8;
  if ((&DAT_03003178)[iVar5] == '\x01') {
    uVar1 = *(ushort *)(&DAT_0300317a + iVar5);
    iStack_58 = 0xaf;
    iStack_54 = 0x7e;
    iVar5 = Player_GetLevel(&DAT_03001560 + (uint)DAT_03001068 * 0x68);
    if (iVar5 < (int)(uint)(byte)(&DAT_086f8301)[(uint)uVar1 * 0x2c]) {
      iVar5 = 0x44;
    }
    else {
      iVar5 = 0x43;
    }
    sub_0803DC96(&uStack_5c,*(undefined4 *)(&gUIStringPtrs + iVar5 * 4));
  }
  uStack_5c._3_1_ = 5;
  sub_0803DEFA(auStack_9c,&gUnknown_080586C6,*(undefined4 *)(iVar4 + 0x11c));
  iStack_58 = 0x1c;
  iStack_54 = 0x91;
  sub_0803DADA(&uStack_5c,auStack_9c);
  iVar4 = sub_0803FFE8(local_50,auStack_9c);
  sub_08013F0C(*local_1c,iVar4 + 0x1e,0x86);
  iStack_58 = iVar4 + 0x2e;
  iStack_54 = 0x91;
  sub_0803DADA(&uStack_5c,L"Cancel");
  uStack_5c._3_1_ = 2;
  uStack_5c._0_1_ = 2;
  iStack_58 = 0xe0;
  iStack_54 = 0x91;
  sub_0803DC96(&uStack_5c,L"%d ZENIE",*piStack_20);
  sub_080066EC(local_18,&uStack_5c);
  sub_08049150((int)&uStack_5c,0x6000040);
  sub_0803F58C(&uStack_5c,0);
  return;
}


/* sub_08031C4C @ 0x08031C4C */

undefined4 sub_08031C4C(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0) {
    if (DAT_03003174 != 0) {
      iVar3 = *(int *)(param_1 + 0x114) * 8;
      if (DAT_0300155c < *(int *)(&DAT_0300317c + iVar3)) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0,param_4);
      }
      else {
        DAT_0300155c = DAT_0300155c - *(int *)(param_1 + 0x11c) * *(int *)(&DAT_0300317c + iVar3);
        if ((&DAT_03003178)[iVar3] == '\0') {
          uVar1 = *(ushort *)(&DAT_0300317a + iVar3);
          iVar4 = (uint)(byte)(&DAT_0300106a)[uVar1] + *(int *)(param_1 + 0x11c);
          if (iVar4 < 0x100) {
            (&DAT_0300106a)[uVar1] = (char)iVar4;
          }
          else {
            (&DAT_0300106a)[uVar1] = 0xff;
          }
        }
        else if (((&DAT_03003178)[iVar3] == '\x01') && (iVar4 = 0, 0 < *(int *)(param_1 + 0x11c))) {
          do {
            sub_08004448(&DAT_03001068,*(undefined2 *)(&DAT_0300317a + iVar3));
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x11c));
        }
        if (((byte)(&DAT_03003179)[iVar3] != 0) &&
           (uVar2 = (uint)(byte)(&DAT_03003179)[iVar3] - *(int *)(param_1 + 0x11c),
           (&DAT_03003179)[iVar3] = (char)uVar2, (uVar2 & 0xff) == 0)) {
          DAT_03003174 = DAT_03003174 + -1;
          iVar3 = DAT_03003174 - *(int *)(param_1 + 0x114);
          if (iVar3 != 0) {
            iVar4 = *(int *)(param_1 + 0x114) * 8;
            sub_08049138((int)(&DAT_03003178 + iVar4),iVar4 + 0x3003180,iVar3 * 8);
          }
          if ((DAT_03003174 <= *(int *)(param_1 + 0x114)) &&
             (iVar3 = DAT_03003174 + -1, *(int *)(param_1 + 0x114) = iVar3, iVar3 < 0)) {
            *(undefined4 *)(param_1 + 0x114) = 0;
          }
        }
        *(undefined4 *)(param_1 + 0x11c) = 1;
        *(undefined4 *)(param_1 + 0x110) = 0;
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319494,0x40,0,param_4);
      }
    }
  }
  else {
    if (param_3 == 1) {
      sub_0803D876(1);
      return 1;
    }
    if (param_3 == 2) {
      *(undefined4 *)(param_1 + 0x11c) = 1;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      sub_08031644(param_1);
    }
    else if (param_3 == 3) {
      *(undefined4 *)(param_1 + 0x11c) = 1;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      sub_08031644(param_1);
    }
  }
  return 0;
}


/* sub_08031D68 @ 0x08031D68 */

undefined4 sub_08031D68(void)

{
  sub_0803E378();
  return 0;
}


/* sub_08031D94 @ 0x08031D94 */

undefined4 sub_08031D94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
    if (*(int *)(param_1 + 0x11c) < 2) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0,param_4);
    }
    else {
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + -1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    iVar1 = *(int *)(param_1 + 0x114) * 8;
    iVar2 = *(int *)(param_1 + 0x11c) + 1;
    if ((DAT_0300155c < *(int *)(&DAT_0300317c + iVar1) * iVar2) ||
       (((byte)(&DAT_03003179)[iVar1] != 0 &&
        ((int)(uint)(byte)(&DAT_03003179)[iVar1] <= *(int *)(param_1 + 0x11c))))) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0,param_4);
    }
    else {
      *(int *)(param_1 + 0x11c) = iVar2;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  return 0;
}


/* sub_08031E46 @ 0x08031E46 */

undefined4 sub_08031E46(int param_1,undefined4 *param_2)

{
  if (DAT_03003174 == 0) {
    return 0;
  }
  *param_2 = 0x14;
  param_2[1] = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x118)) * 0x10 + 0x17;
  return 1;
}


/* sub_08031E84 @ 0x08031E84 */

undefined4 * sub_08031E84(undefined4 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar5;
  undefined4 uStack_24;
  int iStack_20;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x8fc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    *param_1 = &_08049B88;
    piVar5 = param_1 + 0x45;
    *piVar5 = 0;
    param_1[0x230] = 0;
    param_1[0x232] = 1;
    iVar4 = (uint)DAT_03001068 * 0x68;
    sub_08013C66(&DAT_03001560 + iVar4);
    param_1[0x233] = (uint)*(ushort *)(&DAT_030015ac + iVar4);
    param_1[0x234] = (uint)*(ushort *)(&DAT_030015ae + iVar4);
    param_1[0x235] = (uint)*(ushort *)(&DAT_030015b0 + iVar4);
    param_1[0x236] = (uint)*(ushort *)(&DAT_030015b4 + iVar4);
    iVar4 = 0;
    do {
      iStack_20 = (&DAT_083bd324)[iVar4 * 0xd];
      if ((iStack_20 != 0) && (cVar1 = (&DAT_0300106a)[iVar4], cVar1 != '\0')) {
        if (iStack_20 < 0) {
          iStack_20 = -iStack_20;
        }
        else {
          sub_08053034(param_2 * iStack_20);
          iStack_20 = extraout_r1;
        }
        iVar3 = *piVar5;
        *piVar5 = iVar3 + 1;
        piVar5[iVar3 * 2 + 1] = (uint)CONCAT21((short)iVar4,cVar1) << 8;
        piVar5[iVar3 * 2 + 2] = iStack_20;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x53);
    iVar4 = 0;
    do {
      if (((&DAT_086f830c)[iVar4 * 0xb] != 0) &&
         (bVar2 = sub_080043EE(&DAT_03001068,iVar4), bVar2 != 0)) {
        uStack_24 = CONCAT31((uint3)bVar2,1);
        uStack_24 = CONCAT22((short)iVar4,(undefined2)uStack_24);
        iStack_20 = (&DAT_086f830c)[iVar4 * 0xb];
        if (iStack_20 < 0) {
          iStack_20 = -iStack_20;
        }
        else {
          sub_08053034(param_2 * iStack_20);
          iStack_20 = extraout_r1_00;
        }
        iVar3 = *piVar5;
        *piVar5 = iVar3 + 1;
        piVar5[iVar3 * 2 + 1] = uStack_24;
        piVar5[iVar3 * 2 + 2] = iStack_20;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xa2);
  }
  return param_1;
}


/* sub_08031FB0 @ 0x08031FB0 */

void sub_08031FB0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_08049B88;
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08031FCE @ 0x08031FCE */

void sub_08031FCE(int param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(param_1 + 0x8cc);
  *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_1 + 0x8d0);
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(param_1 + 0x8d4);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(param_1 + 0x8d8);
  iVar2 = *(int *)(param_1 + 0x8c0) * 8 + param_1;
  if (*(char *)(iVar2 + 0x118) == '\x01') {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x11a);
    iVar2 = (uint)DAT_03001068 * 0x68;
    puVar5 = &DAT_03001560 + iVar2;
    puVar3 = (uint *)(puVar5 + (uint)(byte)(&DAT_086f8300)[uVar4 * 0x2c] * 4 + 0x3c);
    uVar6 = *puVar3;
    do {
      *puVar3 = uVar4;
    } while (*puVar3 != uVar4);
    sub_08013C66(puVar5);
    bVar1 = (&DAT_086f8300)[uVar4 * 0x2c];
    do {
      *(uint *)(puVar5 + (uint)bVar1 * 4 + 0x3c) = uVar6;
    } while (*(uint *)(puVar5 + (uint)bVar1 * 4 + 0x3c) != uVar6);
    *(uint *)(param_1 + 0x8dc) = (uint)*(ushort *)(&DAT_030015ac + iVar2);
    *(uint *)(param_1 + 0x8e0) = (uint)*(ushort *)(&DAT_030015ae + iVar2);
    *(uint *)(param_1 + 0x8e4) = (uint)*(ushort *)(&DAT_030015b0 + iVar2);
    *(uint *)(param_1 + 0x8e8) = (uint)*(ushort *)(&DAT_030015b4 + iVar2);
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}


/* sub_08032070 @ 0x08032070 */

void sub_08032070(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
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
  uStack_18 = 0x1e;
  uStack_14 = 0x14;
  uStack_20 = 0;
  uStack_1c = 0;
  sub_0803DA10(&uStack_20,&DAT_0600f000,1);
  REG_DISPCNT = 0x240;
  uStack_14 = 1;
  uStack_18 = 1;
  uStack_20 = 0xc;
  uStack_1c = 2;
  uVar1 = sub_08013E64(0,param_1,2,0xd5);
  *(undefined4 *)(param_1 + 0x8f4) = uVar1;
  sub_0800664E(param_1,uVar1);
  uStack_14 = 1;
  uStack_18 = 1;
  uStack_20 = 0x31;
  uStack_1c = 3;
  uVar1 = sub_08013E64(0,param_1,3,0xd5);
  *(undefined4 *)(param_1 + 0x8f8) = uVar1;
  sub_0800664E(param_1,uVar1);
  uStack_14 = 0;
  uStack_20 = 0x86;
  uStack_18 = 1;
  uStack_1c = 0;
  uVar1 = sub_08013E64(0,param_1,0,0xc);
  sub_0800664E(param_1,uVar1);
  uStack_14 = 0;
  uStack_20 = 0x86;
  uStack_1c = 1;
  uStack_18 = 1;
  uVar1 = sub_08013E64(0,param_1,1,0xc);
  *(undefined4 *)(param_1 + 0x8ec) = uVar1;
  sub_0800664E(param_1,uVar1);
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  sub_08031FCE(param_1);
  return;
}


