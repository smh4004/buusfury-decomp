/* Ghidra reference decompilation of code_0805049C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0805049C @ 0x0805049C */

void sub_0805049C(int param_1)

{
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(0x80), param_1 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* sub_080504B2 @ 0x080504B2 */

undefined4 * sub_080504B2(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x130), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = 3;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  *param_1 = &_08049A7C;
  param_1[0x4b] = 0;
  return param_1;
}


/* sub_080504B4 @ 0x080504B4 */

undefined4 * sub_080504B4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x130), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = 3;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  *param_1 = &_08049A7C;
  param_1[0x4b] = 0;
  return param_1;
}


/* sub_080504F6 @ 0x080504F6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_080504F6(int a0,int a1,int a2)

{
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  
  sub_0804912C(a0,a1,a2);
  *(undefined4 *)(unaff_r5 + 0x24) = 0xffff;
  DAT_03002f50 = unaff_r6;
  DAT_03002f54 = unaff_r6;
  *unaff_r4 = &_08049A7C;
  *(undefined4 *)(unaff_r5 + 0x2c) = unaff_r6;
  return (int)unaff_r4;
}


/* sub_08050504 @ 0x08050504 */

undefined4 * sub_08050504(undefined4 *param_1)

{
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  
  *param_1 = unaff_r6;
  *unaff_r4 = &_08049A7C;
  *(undefined4 *)(unaff_r5 + 0x2c) = unaff_r6;
  return unaff_r4;
}


/* sub_08050524 @ 0x08050524 */

void sub_08050524(int param_1)

{
  if (param_1 == 0) {
    sub_0803D5B8(4);
  }
  return;
}


/* sub_08050532 @ 0x08050532 */

void sub_08050532(int param_1)

{
  if (param_1 == 0) {
    sub_0803D5B8(4);
  }
  return;
}


/* sub_08050534 @ 0x08050534 */

void sub_08050534(int param_1)

{
  if (param_1 == 0) {
    sub_0803D5B8(4);
  }
  return;
}


/* sub_08050542 @ 0x08050542 */

void sub_08050542(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049EFC;
    param_1[1] = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


/* sub_08050544 @ 0x08050544 */

void sub_08050544(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049EFC;
    param_1[1] = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


/* sub_08050568 @ 0x08050568 */

void sub_08050568(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[2] = 0x10;
    *param_1 = &_0804A4B8;
  }
  return;
}


/* sub_0805058C @ 0x0805058C */

void sub_0805058C(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0x100;
    param_1[2] = 0x10;
    *param_1 = &_0804A920;
  }
  return;
}


/* sub_080505B0 @ 0x080505B0 */

undefined4 * sub_080505B0(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x130), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = 5;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  *param_1 = &_0804B050;
  param_1[0x4b] = 0;
  return param_1;
}


/* sub_08050620 @ 0x08050620 */

undefined4 * sub_08050620(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(300), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = 6;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  *param_1 = &_0804B280;
  return param_1;
}


/* sub_08050690 @ 0x08050690 */

undefined4 * sub_08050690(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x2c), param_1 != (undefined4 *)0x0)) {
    sVar3 = (ushort)*(byte *)(param_2 + 3) * (ushort)*(byte *)(param_2 + 2);
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = sVar3;
    iVar1 = sub_0801124C(&DAT_03001c4c,sVar3);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,sVar3);
      iVar1 = sub_0801124C(&DAT_03001c4c,sVar3);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804BA50;
    param_1[10] = param_2;
    uVar2 = *param_3;
    param_1[9] = param_3[1];
    param_1[8] = uVar2;
    *(undefined1 *)(param_1 + 2) = param_4;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),*(int *)(param_2 + 8),
                 (uint)*(byte *)(param_2 + 3) * (uint)*(byte *)(param_2 + 2));
  }
  return param_1;
}


/* sub_08050714 @ 0x08050714 */

undefined4 * sub_08050714(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x40c), param_1 != (undefined4 *)0x0)) {
    sub_080176AC(param_1);
    *param_1 = &_0804BBA4;
    param_1[0x101] = 0;
    param_1[0x102] = param_2;
  }
  return param_1;
}


/* sub_08050750 @ 0x08050750 */

void sub_08050750(int param_1)

{
  if (param_1 == 0) {
    sub_0803D5B8(8);
  }
  return;
}


/* sub_0805075E @ 0x0805075E */

void sub_0805075E(int param_1)

{
  if (param_1 == 0) {
    sub_0803D5B8(8);
  }
  return;
}


/* sub_08050760 @ 0x08050760 */

void sub_08050760(int param_1)

{
  if (param_1 == 0) {
    sub_0803D5B8(8);
  }
  return;
}


/* sub_0805076E @ 0x0805076E */

void sub_0805076E(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}


/* sub_08050770 @ 0x08050770 */

void sub_08050770(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}


/* sub_08050790 @ 0x08050790 */

void sub_08050790(int param_1)

{
  if (param_1 == 0) {
    sub_0803D5B8(0xc);
  }
  return;
}


/* sub_0805079E @ 0x0805079E */

undefined4 *
sub_0805079E(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined1 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)param_4;
    uVar1 = sub_0801124C(&DAT_03001c4c,param_4);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,param_4);
      uVar1 = sub_0801124C(&DAT_03001c4c,param_4);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804BA50;
    param_1[10] = param_2;
    *(undefined1 *)(param_1 + 2) = param_5;
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),*(int *)(param_2 + 8),
                 (uint)*(byte *)(param_2 + 3) * (uint)*(byte *)(param_2 + 2));
    *param_1 = &_0804CA80;
    uVar2 = *param_3;
    param_1[0xc] = param_3[1];
    param_1[0xb] = uVar2;
  }
  return param_1;
}


/* sub_080507A0 @ 0x080507A0 */

undefined4 *
sub_080507A0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined1 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)param_4;
    uVar1 = sub_0801124C(&DAT_03001c4c,param_4);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,param_4);
      uVar1 = sub_0801124C(&DAT_03001c4c,param_4);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804BA50;
    param_1[10] = param_2;
    *(undefined1 *)(param_1 + 2) = param_5;
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),*(int *)(param_2 + 8),
                 (uint)*(byte *)(param_2 + 3) * (uint)*(byte *)(param_2 + 2));
    *param_1 = &_0804CA80;
    uVar2 = *param_3;
    param_1[0xc] = param_3[1];
    param_1[0xb] = uVar2;
  }
  return param_1;
}


/* sub_08050810 @ 0x08050810 */

void sub_08050810(undefined4 param_1,int param_2,undefined4 param_3)

{
  int unaff_r4;
  
  *(undefined4 *)(unaff_r4 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(unaff_r4 + 0x2c) = param_3;
  return;
}


/* sub_0805082C @ 0x0805082C */

void sub_0805082C(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x28), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804AE84;
    param_1[1] = 0;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_1 = &_0804D0A4;
    param_1[8] = 0;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[2] = param_4;
    *(undefined1 *)(param_1 + 9) = param_3;
  }
  return;
}


/* sub_08050868 @ 0x08050868 */

void sub_08050868(int param_1)

{
  if (param_1 == 0) {
    sub_0803D5B8(2);
  }
  return;
}


/* sub_08050876 @ 0x08050876 */

undefined4 *
sub_08050876(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    sub_080060A8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
    *param_1 = &_0804D82C;
  }
  return param_1;
}


/* sub_08050878 @ 0x08050878 */

undefined4 *
sub_08050878(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    sub_080060A8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
    *param_1 = &_0804D82C;
  }
  return param_1;
}


/* sub_080508C4 @ 0x080508C4 */

void sub_080508C4(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080508D8 @ 0x080508D8 */

void sub_080508D8(undefined4 *param_1)

{
  *param_1 = &_08049238;
  return;
}


/* sub_080508E4 @ 0x080508E4 */

void sub_080508E4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080508F8 @ 0x080508F8 */

void sub_080508F8(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805090C @ 0x0805090C */

void sub_0805090C(undefined4 *param_1)

{
  *param_1 = &_0804929C;
  return;
}


/* sub_08050918 @ 0x08050918 */

void sub_08050918(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F58C(param_1 + 2,0,param_3,param_4,param_4);
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805093C @ 0x0805093C */

void sub_0805093C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050950 @ 0x08050950 */

void sub_08050950(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050964 @ 0x08050964 */

void sub_08050964(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050978 @ 0x08050978 */

void sub_08050978(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805098C @ 0x0805098C */

void sub_0805098C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080509A0 @ 0x080509A0 */

void sub_080509A0(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080509B4 @ 0x080509B4 */

void sub_080509B4(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080509C8 @ 0x080509C8 */

void sub_080509C8(undefined4 *param_1)

{
  *param_1 = &_080493E4;
  return;
}


/* sub_080509D4 @ 0x080509D4 */

void sub_080509D4(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080509E8 @ 0x080509E8 */

void sub_080509E8(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080509FC @ 0x080509FC */

void sub_080509FC(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050A10 @ 0x08050A10 */

void sub_08050A10(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050A24 @ 0x08050A24 */

void sub_08050A24(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050A3C @ 0x08050A3C */

void sub_08050A3C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050A50 @ 0x08050A50 */

void sub_08050A50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050A68 @ 0x08050A68 */

void sub_08050A68(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050A80 @ 0x08050A80 */

void sub_08050A80(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050A94 @ 0x08050A94 */

void sub_08050A94(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050AA8 @ 0x08050AA8 */

void sub_08050AA8(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050ABC @ 0x08050ABC */

void sub_08050ABC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050AD4 @ 0x08050AD4 */

void sub_08050AD4(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050AE8 @ 0x08050AE8 */

void sub_08050AE8(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050AFC @ 0x08050AFC */

void sub_08050AFC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049238;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050B10 @ 0x08050B10 */

void sub_08050B10(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049238;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050B24 @ 0x08050B24 */

void sub_08050B24(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050B38 @ 0x08050B38 */

void sub_08050B38(undefined4 *param_1)

{
  *param_1 = &_08049680;
  if (*(short *)(param_1 + 3) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  *param_1 = &_0804E454;
  return;
}


/* sub_08050B68 @ 0x08050B68 */

void sub_08050B68(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050B7C @ 0x08050B7C */

void sub_08050B7C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050B90 @ 0x08050B90 */

void sub_08050B90(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050BA4 @ 0x08050BA4 */

void sub_08050BA4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050BBC @ 0x08050BBC */

void sub_08050BBC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050BD4 @ 0x08050BD4 */

void sub_08050BD4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050BEC @ 0x08050BEC */

void sub_08050BEC(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050C06 @ 0x08050C06 */

void sub_08050C06(void)

{
  undefined4 unaff_r4;
  
  sub_0803D63C(unaff_r4);
  return;
}


/* sub_08050C14 @ 0x08050C14 */

void sub_08050C14(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050C28 @ 0x08050C28 */

void sub_08050C28(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050C3C @ 0x08050C3C */

void sub_08050C3C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050C50 @ 0x08050C50 */

void sub_08050C50(undefined4 *param_1)

{
  *param_1 = &_0804984C;
  return;
}


/* sub_08050C5C @ 0x08050C5C */

void sub_08050C5C(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050C70 @ 0x08050C70 */

void sub_08050C70(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050C88 @ 0x08050C88 */

void sub_08050C88(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050CA0 @ 0x08050CA0 */

void sub_08050CA0(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050CB4 @ 0x08050CB4 */

void sub_08050CB4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050CDC @ 0x08050CDC */

void sub_08050CDC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050CF4 @ 0x08050CF4 */

void sub_08050CF4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050D08 @ 0x08050D08 */

void sub_08050D08(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050D1C @ 0x08050D1C */

void sub_08050D1C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050D30 @ 0x08050D30 */

void sub_08050D30(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_08049ACC;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050D5C @ 0x08050D5C */

void sub_08050D5C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AE0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050D70 @ 0x08050D70 */

void sub_08050D70(undefined4 *param_1)

{
  *param_1 = &_08049AF0;
  return;
}


/* sub_08050D7C @ 0x08050D7C */

void sub_08050D7C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050D94 @ 0x08050D94 */

void sub_08050D94(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050DAC @ 0x08050DAC */

void sub_08050DAC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050DC4 @ 0x08050DC4 */

void sub_08050DC4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050DD8 @ 0x08050DD8 */

void sub_08050DD8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050E00 @ 0x08050E00 */

void sub_08050E00(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050E28 @ 0x08050E28 */

void sub_08050E28(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050E40 @ 0x08050E40 */

void sub_08050E40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050E58 @ 0x08050E58 */

void sub_08050E58(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050E6C @ 0x08050E6C */

void sub_08050E6C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_080185B8(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050E84 @ 0x08050E84 */

void sub_08050E84(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050E9C @ 0x08050E9C */

void sub_08050E9C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050EB0 @ 0x08050EB0 */

void sub_08050EB0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050EC8 @ 0x08050EC8 */

void sub_08050EC8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050EF0 @ 0x08050EF0 */

void sub_08050EF0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050F08 @ 0x08050F08 */

void sub_08050F08(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050F20 @ 0x08050F20 */

void sub_08050F20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08050F38 @ 0x08050F38 */

void sub_08050F38(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050F4C @ 0x08050F4C */

void sub_08050F4C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050F60 @ 0x08050F60 */

void sub_08050F60(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050F74 @ 0x08050F74 */

void sub_08050F74(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AE0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08050F88 @ 0x08050F88 */

void sub_08050F88(undefined4 *param_1)

{
  *param_1 = &_080493E4;
  return;
}


/* sub_08050F94 @ 0x08050F94 */

void sub_08050F94(undefined4 *param_1)

{
  *param_1 = &_080493E4;
  return;
}


/* sub_08050FA0 @ 0x08050FA0 */

void sub_08050FA0(undefined4 *param_1,int param_2)

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


/* sub_08050FDC @ 0x08050FDC */

void sub_08050FDC(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = &_0804ABA0;
  pcVar2 = (char *)param_1[3];
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051030 @ 0x08051030 */

void sub_08051030(undefined4 *param_1,int param_2)

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


/* sub_0805106C @ 0x0805106C */

void sub_0805106C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051080 @ 0x08051080 */

void sub_08051080(undefined4 *param_1)

{
  *param_1 = &_080491F0;
  return;
}


/* sub_0805108C @ 0x0805108C */

void sub_0805108C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080510A0 @ 0x080510A0 */

void sub_080510A0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080510C8 @ 0x080510C8 */

void sub_080510C8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080510F0 @ 0x080510F0 */

void sub_080510F0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051108 @ 0x08051108 */

void sub_08051108(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805111C @ 0x0805111C */

void sub_0805111C(undefined4 *param_1)

{
  *param_1 = &_0804929C;
  return;
}


/* sub_08051128 @ 0x08051128 */

void sub_08051128(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805113C @ 0x0805113C */

void sub_0805113C(undefined4 *param_1,int param_2)

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


/* sub_08051178 @ 0x08051178 */

void sub_08051178(undefined4 *param_1,int param_2)

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


/* sub_080511B4 @ 0x080511B4 */

void sub_080511B4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800D9F0(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080511CC @ 0x080511CC */

void sub_080511CC(undefined4 *param_1,int param_2)

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


/* sub_08051208 @ 0x08051208 */

void sub_08051208(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F58C(param_1 + 4,0,param_3,param_4,param_4);
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


/* sub_0805124C @ 0x0805124C */

void sub_0805124C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051264 @ 0x08051264 */

void sub_08051264(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051278 @ 0x08051278 */

void sub_08051278(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051290 @ 0x08051290 */

void sub_08051290(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080512A8 @ 0x080512A8 */

void sub_080512A8(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080512BC @ 0x080512BC */

void sub_080512BC(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080512D0 @ 0x080512D0 */

void sub_080512D0(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080512E4 @ 0x080512E4 */

void sub_080512E4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080512FC @ 0x080512FC */

void sub_080512FC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051314 @ 0x08051314 */

void sub_08051314(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805132C @ 0x0805132C */

void sub_0805132C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051344 @ 0x08051344 */

void sub_08051344(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805135C @ 0x0805135C */

void sub_0805135C(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804984C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051370 @ 0x08051370 */

void sub_08051370(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051384 @ 0x08051384 */

void sub_08051384(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AE0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051398 @ 0x08051398 */

void sub_08051398(undefined4 *param_1)

{
  *param_1 = &_0804984C;
  return;
}


/* sub_080513A4 @ 0x080513A4 */

void sub_080513A4(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080513B8 @ 0x080513B8 */

void sub_080513B8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080513CC @ 0x080513CC */

void sub_080513CC(undefined4 *param_1,int param_2)

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


/* sub_08051408 @ 0x08051408 */

void sub_08051408(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805141C @ 0x0805141C */

void sub_0805141C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051430 @ 0x08051430 */

void sub_08051430(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051448 @ 0x08051448 */

void sub_08051448(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051460 @ 0x08051460 */

void sub_08051460(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051474 @ 0x08051474 */

void sub_08051474(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051488 @ 0x08051488 */

void sub_08051488(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805149C @ 0x0805149C */

void sub_0805149C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080514B0 @ 0x080514B0 */

void sub_080514B0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080514C8 @ 0x080514C8 */

void sub_080514C8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080514E0 @ 0x080514E0 */

void sub_080514E0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080514F8 @ 0x080514F8 */

void sub_080514F8(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804984C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805150C @ 0x0805150C */

void sub_0805150C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051524 @ 0x08051524 */

void sub_08051524(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_08049ACC;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051550 @ 0x08051550 */

void sub_08051550(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = &_0804ABA0;
  pcVar2 = (char *)param_1[3];
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2),param_3,2,param_4);
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  *param_1 = &_0804E454;
  return;
}


/* sub_08051598 @ 0x08051598 */

void sub_08051598(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080515AC @ 0x080515AC */

void sub_080515AC(undefined4 *param_1,int param_2)

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


/* sub_080515E8 @ 0x080515E8 */

void sub_080515E8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051600 @ 0x08051600 */

void sub_08051600(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051618 @ 0x08051618 */

void sub_08051618(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051630 @ 0x08051630 */

void sub_08051630(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051648 @ 0x08051648 */

void sub_08051648(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051660 @ 0x08051660 */

void sub_08051660(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051678 @ 0x08051678 */

void sub_08051678(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051690 @ 0x08051690 */

void sub_08051690(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080516A4 @ 0x080516A4 */

void sub_080516A4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080516BC @ 0x080516BC */

void sub_080516BC(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080516D0 @ 0x080516D0 */

void sub_080516D0(undefined4 *param_1,int param_2)

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


/* sub_0805170C @ 0x0805170C */

void sub_0805170C(undefined4 *param_1,int param_2)

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


/* sub_08051748 @ 0x08051748 */

void sub_08051748(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051760 @ 0x08051760 */

void sub_08051760(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051778 @ 0x08051778 */

void sub_08051778(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051790 @ 0x08051790 */

void sub_08051790(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080517A8 @ 0x080517A8 */

void sub_080517A8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080517BC @ 0x080517BC */

void sub_080517BC(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080517E4 @ 0x080517E4 */

void sub_080517E4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080517FC @ 0x080517FC */

void sub_080517FC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051814 @ 0x08051814 */

void sub_08051814(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805182C @ 0x0805182C */

void sub_0805182C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051844 @ 0x08051844 */

void sub_08051844(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049238;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051858 @ 0x08051858 */

void sub_08051858(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805186C @ 0x0805186C */

void sub_0805186C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051884 @ 0x08051884 */

void sub_08051884(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805189C @ 0x0805189C */

void sub_0805189C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080518B4 @ 0x080518B4 */

void sub_080518B4(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080518C8 @ 0x080518C8 */

void sub_080518C8(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080518DC @ 0x080518DC */

void sub_080518DC(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080518F0 @ 0x080518F0 */

void sub_080518F0(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051904 @ 0x08051904 */

void sub_08051904(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800D9F0(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805191C @ 0x0805191C */

void sub_0805191C(undefined4 *param_1,int param_2)

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


/* sub_08051958 @ 0x08051958 */

void sub_08051958(undefined4 *param_1,int param_2)

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


/* sub_08051994 @ 0x08051994 */

void sub_08051994(undefined4 *param_1,int param_2)

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


/* sub_080519D0 @ 0x080519D0 */

void sub_080519D0(undefined4 *param_1,int param_2)

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


/* sub_08051A0C @ 0x08051A0C */

void sub_08051A0C(undefined4 *param_1,int param_2)

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


/* sub_08051A48 @ 0x08051A48 */

void sub_08051A48(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0804B4D8;
  *(undefined4 *)(param_1[5] + 0x2c) = 0;
  sub_0803F58C(param_1 + 6,0,param_3,param_4,param_4);
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


/* sub_08051A9C @ 0x08051A9C */

void sub_08051A9C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800B8B2(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051AB4 @ 0x08051AB4 */

void sub_08051AB4(undefined4 *param_1,int param_2)

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


/* sub_08051AF0 @ 0x08051AF0 */

void sub_08051AF0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051B08 @ 0x08051B08 */

void sub_08051B08(undefined4 *param_1,int param_2)

{
  sub_08010D9A(param_1[3]);
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051B28 @ 0x08051B28 */

void sub_08051B28(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051B40 @ 0x08051B40 */

void sub_08051B40(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051B54 @ 0x08051B54 */

void sub_08051B54(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051B6C @ 0x08051B6C */

void sub_08051B6C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051B84 @ 0x08051B84 */

void sub_08051B84(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051B9C @ 0x08051B9C */

void sub_08051B9C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051BB4 @ 0x08051BB4 */

void sub_08051BB4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051BCC @ 0x08051BCC */

void sub_08051BCC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049238;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051BE0 @ 0x08051BE0 */

void sub_08051BE0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  param_1[2] = &_0804984C;
  *param_1 = &_08049ACC;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051C14 @ 0x08051C14 */

void sub_08051C14(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051C2C @ 0x08051C2C */

void sub_08051C2C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051C44 @ 0x08051C44 */

void sub_08051C44(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051C5C @ 0x08051C5C */

void sub_08051C5C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051C70 @ 0x08051C70 */

void sub_08051C70(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051C84 @ 0x08051C84 */

void sub_08051C84(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051C98 @ 0x08051C98 */

void sub_08051C98(undefined4 *param_1,int param_2)

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


/* sub_08051CD4 @ 0x08051CD4 */

void sub_08051CD4(undefined4 *param_1,int param_2)

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


/* sub_08051D10 @ 0x08051D10 */

void sub_08051D10(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18c);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  sub_0800EC34(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051D40 @ 0x08051D40 */

void sub_08051D40(undefined4 *param_1,int param_2)

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


/* sub_08051D7C @ 0x08051D7C */

void sub_08051D7C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051DA8 @ 0x08051DA8 */

void sub_08051DA8(undefined4 *param_1,int param_2)

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


/* sub_08051DE4 @ 0x08051DE4 */

void sub_08051DE4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F58C(param_1 + 6,0,param_3,param_4,param_4);
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


/* sub_08051E28 @ 0x08051E28 */

void sub_08051E28(undefined4 *param_1,int param_2)

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


/* sub_08051E64 @ 0x08051E64 */

void sub_08051E64(undefined4 *param_1)

{
  *param_1 = &_08049680;
  if (*(short *)(param_1 + 3) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  *param_1 = &_0804E454;
  return;
}


/* sub_08051E94 @ 0x08051E94 */

void sub_08051E94(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051EAC @ 0x08051EAC */

void sub_08051EAC(undefined4 *param_1,int param_2)

{
  sub_08010D9A(param_1[3]);
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051ECC @ 0x08051ECC */

void sub_08051ECC(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051EE0 @ 0x08051EE0 */

void sub_08051EE0(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051EF4 @ 0x08051EF4 */

void sub_08051EF4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051F0C @ 0x08051F0C */

void sub_08051F0C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051F20 @ 0x08051F20 */

void sub_08051F20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051F38 @ 0x08051F38 */

void sub_08051F38(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051F50 @ 0x08051F50 */

void sub_08051F50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051F68 @ 0x08051F68 */

void sub_08051F68(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051F80 @ 0x08051F80 */

void sub_08051F80(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804984C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051F94 @ 0x08051F94 */

void sub_08051F94(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08051FAC @ 0x08051FAC */

void sub_08051FAC(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051FC0 @ 0x08051FC0 */

void sub_08051FC0(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051FD4 @ 0x08051FD4 */

void sub_08051FD4(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051FE8 @ 0x08051FE8 */

void sub_08051FE8(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08051FFC @ 0x08051FFC */

void sub_08051FFC(undefined4 *param_1,int param_2)

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


/* sub_08052038 @ 0x08052038 */

void sub_08052038(undefined4 *param_1,int param_2)

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


/* sub_08052074 @ 0x08052074 */

void sub_08052074(undefined4 *param_1,int param_2)

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


/* sub_080520B0 @ 0x080520B0 */

void sub_080520B0(undefined4 *param_1,int param_2)

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


/* sub_080520EC @ 0x080520EC */

void sub_080520EC(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804C070;
  *(undefined4 *)(param_1[6] + 0x18) = 0;
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


/* sub_08052134 @ 0x08052134 */

void sub_08052134(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052148 @ 0x08052148 */

void sub_08052148(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052160 @ 0x08052160 */

void sub_08052160(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052188 @ 0x08052188 */

void sub_08052188(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0804C150;
  iVar1 = *(int *)param_1[1];
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1((int *)param_1[1],iVar2 + iVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080521B0 @ 0x080521B0 */

void sub_080521B0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080521C8 @ 0x080521C8 */

void sub_080521C8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080521E0 @ 0x080521E0 */

void sub_080521E0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080521F8 @ 0x080521F8 */

void sub_080521F8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052210 @ 0x08052210 */

void sub_08052210(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052228 @ 0x08052228 */

void sub_08052228(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800D4D0(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052240 @ 0x08052240 */

void sub_08052240(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052254 @ 0x08052254 */

void sub_08052254(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052268 @ 0x08052268 */

void sub_08052268(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805227C @ 0x0805227C */

void sub_0805227C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052294 @ 0x08052294 */

void sub_08052294(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080522AC @ 0x080522AC */

void sub_080522AC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080522C4 @ 0x080522C4 */

void sub_080522C4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080522DC @ 0x080522DC */

void sub_080522DC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080522F4 @ 0x080522F4 */

void sub_080522F4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805230C @ 0x0805230C */

void sub_0805230C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052324 @ 0x08052324 */

void sub_08052324(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805233C @ 0x0805233C */

void sub_0805233C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052354 @ 0x08052354 */

void sub_08052354(undefined4 *param_1,int param_2)

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


/* sub_08052390 @ 0x08052390 */

void sub_08052390(undefined4 *param_1,int param_2)

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


/* sub_080523CC @ 0x080523CC */

void sub_080523CC(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F58C(param_1 + 0x1a,0,param_3,param_4,param_4);
  sub_0803F58C(param_1 + 0xd,0);
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


/* sub_08052418 @ 0x08052418 */

void sub_08052418(undefined4 *param_1,int param_2)

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


/* sub_08052454 @ 0x08052454 */

void sub_08052454(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805246C @ 0x0805246C */

void sub_0805246C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052484 @ 0x08052484 */

void sub_08052484(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


