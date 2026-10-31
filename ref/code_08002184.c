/* Ghidra reference decompilation of code_08002184 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08002184 @ 0x08002184 */

void sub_08002184(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_18 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_1c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  if (DAT_0300100c != 0) {
    sub_08009196(&DAT_0300197c);
    DAT_0300100c = 0;
  }
  sub_08050714(0,0x40);
  sub_0803D8A0();
  Scene_Load(&DAT_0300197c,iVar2,iVar4,iVar3,&local_1c,1,1);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C588;
    puVar1[2] = 0x10;
    puVar1[1] = 0;
  }
  sub_0803D8A0();
  return;
}


/* sub_0800221C @ 0x0800221C */

void sub_0800221C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_18 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_1c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  sub_08050714(0,0x40);
  sub_0803D8A0();
  if (DAT_0300100c != 0) {
    sub_08009196(&DAT_0300197c);
    DAT_0300100c = 0;
  }
  Scene_Load(&DAT_0300197c,iVar2,iVar4,iVar3,&local_1c,0,1);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C588;
    puVar1[2] = 0x10;
    puVar1[1] = 0;
  }
  sub_0803D8A0();
  return;
}


/* sub_080022B4 @ 0x080022B4 */

void sub_080022B4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08050714(0,0x10,param_3,param_4,param_4);
  sub_0803D8A0();
  sub_080091B8(&DAT_0300197c);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C588;
    puVar1[2] = 0x10;
    puVar1[1] = 0;
  }
  sub_0803D8A0();
  return;
}


/* sub_080022E6 @ 0x080022E6 */

void sub_080022E6(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 local_14;
  undefined2 local_12;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_12 = (undefined2)param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_14 = (undefined2)param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar3 = param_1[iVar3 + -2];
  DAT_03002a58 = 1;
  if (DAT_03001c34 != (int *)0x0) {
    __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
  }
  sub_08050714(0,0x40);
  sub_0803D8A0();
  piVar1 = (int *)sub_08008D44(&DAT_0300197c,iVar3,iVar4,&local_14);
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_080495B4;
    puVar2[1] = 0;
    puVar2[2] = 4;
  }
  sub_0803D8A0();
  __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
  return;
}


/* sub_08002390 @ 0x08002390 */

void sub_08002390(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_14;
  undefined2 local_12;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_12 = (undefined2)param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = (undefined2)param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  *param_1 = iVar1 + -2;
  iVar2 = param_1[iVar1 + -1];
  *param_1 = iVar1 + -3;
  iVar1 = param_1[iVar1 + -2];
  if (DAT_03001c34 != (int *)0x0) {
    __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
  }
  DAT_03002a58 = 1;
  sub_08008D44(&DAT_0300197c,iVar1,iVar2,&local_14);
  return;
}


/* sub_08002404 @ 0x08002404 */

void sub_08002404(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08050714(0,param_1[iVar1],param_3,param_4,param_4);
  sub_0803D8A0();
  return;
}


/* sub_08002438 @ 0x08002438 */

void sub_08002438(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C588;
    puVar1[2] = iVar2;
    puVar1[1] = 0;
  }
  sub_0803D8A0();
  return;
}


/* sub_08002460 @ 0x08002460 */

void sub_08002460(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x40c);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080176AC(puVar1);
    *puVar1 = &_0804BBD4;
    puVar1[0x101] = 0;
    puVar1[0x102] = iVar2;
  }
  sub_0803D8A0(puVar1);
  return;
}


/* sub_08002496 @ 0x08002496 */

void sub_08002496(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C5B8;
    puVar1[2] = iVar2;
    puVar1[1] = 0;
  }
  sub_0803D8A0();
  return;
}


/* sub_080024BE @ 0x080024BE */

void sub_080024BE(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  if (iVar2 < 2) {
    iVar2 = 2;
  }
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A9D8;
    puVar1[2] = iVar2;
    puVar1[1] = 0;
  }
  sub_0803D8A0();
  return;
}


/* sub_080024EC @ 0x080024EC */

void sub_080024EC(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A5B4;
    puVar1[1] = 0;
    puVar1[2] = iVar2;
  }
  sub_0803D8A0();
  return;
}


/* sub_08002514 @ 0x08002514 */

void sub_08002514(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A070;
    puVar1[1] = 0;
    puVar1[2] = iVar2;
  }
  sub_0803D8A0();
  return;
}


/* sub_0800253C @ 0x0800253C */

void sub_0800253C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08018346(&DAT_03001010,param_1[iVar1],&DAT_03001018,param_4,param_4);
  return;
}


/* sub_08002556 @ 0x08002556 */

void sub_08002556(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  iVar2 = sub_080116FC(&DAT_03001c4c);
  if (((0xfff < iVar2) && (3 < 0x30 - DAT_03002a64)) && (3 < 0x80 - DAT_03001c50)) {
    uVar1 = sub_0800D30E(0,iVar3,&DAT_03001010,&DAT_03001018,param_4);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return;
}


/* sub_080025A4 @ 0x080025A4 */

void sub_080025A4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  iVar2 = sub_080116FC(&DAT_03001c4c);
  if (((0xfff < iVar2) && (3 < 0x30 - DAT_03002a64)) && (3 < 0x80 - DAT_03001c50)) {
    uVar1 = sub_0800D30E(0,-iVar3,&DAT_03001010,&DAT_03001018,param_4);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return;
}


/* sub_080025F2 @ 0x080025F2 */

void sub_080025F2(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  local_8 = param_1[iVar2 + -1];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  sub_08018346(&local_c,iVar1,&DAT_08054ff0);
  return;
}


/* sub_0800262A @ 0x0800262A */

void sub_0800262A(int *param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080090E6(&DAT_0300197c,param_1[iVar1],&local_c,&DAT_08054ff8);
  return;
}


/* sub_08002668 @ 0x08002668 */

void sub_08002668(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080090E6(&DAT_0300197c,param_1[iVar1],&DAT_03001010,&DAT_03001018,param_4);
  return;
}


/* sub_08002686 @ 0x08002686 */

void sub_08002686(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049978;
    puVar1[1] = iVar2;
  }
  sub_0803D8A0(puVar1);
  return;
}


/* sub_080026D4 @ 0x080026D4 */

void sub_080026D4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CF64;
  }
  sub_0803D8A0();
  return;
}


/* sub_080026EA @ 0x080026EA */

void sub_080026EA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08009172(&DAT_0300197c,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_08002702 @ 0x08002702 */

void sub_08002702(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  if (iRam03002b30 != 0) {
    param_3 = &DAT_03002a58;
    DAT_03002a58 = 1;
  }
  sub_08008AA0(&DAT_0300197c,0,param_3,param_4,param_4);
  return;
}


/* sub_08002704 @ 0x08002704 */

void sub_08002704(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  if (*(int *)(*(int *)(param_1 + 0x28) + 0xcc) != 0) {
    param_3 = &DAT_03002a58;
    DAT_03002a58 = 1;
  }
  sub_08008AA0(*(undefined4 *)(param_1 + 0xc),0,param_3,param_4,param_4);
  return;
}


/* sub_08002720 @ 0x08002720 */

void sub_08002720(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = param_1[iVar1];
  if (DAT_03001c34 != 0) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a0);
    iVar2 = *(int *)(DAT_03001c34 + 0x1a4);
    sub_0805058C(0);
    sub_0803D8A0();
    sub_08011DB4(&DAT_03001c4c);
    puVar3 = (undefined4 *)sub_0803D5B8(0x304);
    if (puVar3 != (undefined4 *)0x0) {
      sub_08005460(puVar3,7,0xd,0);
      *puVar3 = &_08049504;
      puVar3[0xbf] = iVar4 >> 8;
      puVar3[0xc0] = iVar2 >> 8;
      puVar3[0x43] = DAT_03001910;
      puVar3[0xbe] = (uint)(iVar1 != 0);
    }
    iVar1 = sub_0803D8A0(puVar3);
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    param_1[iVar2 + 1] = iVar1 + -1;
    sub_08011E0E(&DAT_03001c4c);
    sub_0800938C(&DAT_030019a4,1);
    sub_08050568(0);
    sub_0803D8A0();
  }
  return;
}


/* sub_080027C2 @ 0x080027C2 */

void sub_080027C2(void)

{
  int unaff_r7;
  
  sub_08011E0E(*(undefined4 *)(unaff_r7 + 0x18));
  sub_0800938C(*(undefined4 *)(unaff_r7 + 0x24),1);
  sub_08050568(0);
  sub_0803D8A0();
  return;
}


/* sub_080027DE @ 0x080027DE */

void sub_080027DE(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_03001c34;
  if (DAT_03001c34 != (int *)0x0) {
    sub_0805058C(0);
    sub_0803D8A0();
    sub_08011DB4(&DAT_03001c4c);
    sub_0802E83C(0,piVar1);
    iVar2 = sub_0803D8A0();
    sub_08011E0E(&DAT_03001c4c);
    if (iVar2 == 2) {
      uVar3 = sub_0801713C(&gUnknown_086B82EC +
                           (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
      sub_0800EDF8(piVar1,uVar3);
      sub_0801064C(piVar1);
      __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
    }
    sub_0800938C(&DAT_030019a4,1);
    sub_08050568(0);
    sub_0803D8A0();
  }
  return;
}


/* sub_080027E0 @ 0x080027E0 */

void sub_080027E0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    sub_0805058C(0);
    sub_0803D8A0();
    sub_08011DB4(&DAT_03001c4c);
    sub_0802E83C(0,piVar3);
    iVar1 = sub_0803D8A0();
    sub_08011E0E(&DAT_03001c4c);
    if (iVar1 == 2) {
      uVar2 = sub_0801713C(&gUnknown_086B82EC +
                           (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
      sub_0800EDF8(piVar3,uVar2);
      sub_0801064C(piVar3);
      __call_via_r2(piVar3,0,*(int *)(*piVar3 + 0x28) + *piVar3);
    }
    sub_0800938C(&DAT_030019a4,1);
    sub_08050568(0);
    sub_0803D8A0();
  }
  return;
}


/* sub_08002862 @ 0x08002862 */

void sub_08002862(void)

{
  undefined4 *puVar1;
  
  DAT_03002a58 = 1;
  sub_08011B04(&DAT_03001c4c);
  sub_08012628(&DAT_03002a64);
  sub_0803E2EC(&DAT_03003e5c);
  sub_0803D8F2();
  puVar1 = (undefined4 *)sub_0803D5B8(0x11c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804920C;
    puVar1[1] = 0;
    puVar1[0x43] = 0;
    puVar1[0x42] = 0;
    puVar1[0x44] = 0;
    *puVar1 = &_0804A404;
  }
  sub_0803D850();
  return;
}


/* sub_080028B0 @ 0x080028B0 */

void sub_080028B0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_080001C6(param_1[iVar2]);
  uVar1 = sub_080195A8(0,uVar1,0,100,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_080028DA @ 0x080028DA */

void sub_080028DA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  uVar1 = sub_080001C6(param_1[iVar2 + -2]);
  uVar1 = sub_080195A8(0,uVar1,iVar3,iVar4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08002918 @ 0x08002918 */

void sub_08002918(void)

{
  undefined4 in_r3;
  
  sub_08011C70(&DAT_03001c4c,0x13,0,in_r3,in_r3);
  return;
}


/* sub_0800291A @ 0x0800291A */

void sub_0800291A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011C70(*(undefined4 *)(param_1 + 0x18),0x13,0,param_4,param_4);
  return;
}


/* sub_08002928 @ 0x08002928 */

void sub_08002928(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = sub_0800441E(&DAT_03001068,param_1[iVar1]);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08002978 @ 0x08002978 */

void sub_08002978(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  sub_08004448(&DAT_03001068,iVar3,param_3,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C83C;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = -iVar3;
  }
  if (DAT_03001c34 != 0) {
    iVar2 = DAT_03001c34 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar2);
  return;
}


/* sub_080029C0 @ 0x080029C0 */

void sub_080029C0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004468(&DAT_03001068,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_080029D8 @ 0x080029D8 */

void sub_080029D8(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (uint)DAT_03001068;
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar1 = param_1[iVar3];
  iVar4 = *(int *)(&DAT_0300159c + (uint)(byte)(&DAT_086f8300)[iVar1 * 0x2c] * 4 + uVar2 * 0x68);
  *param_1 = iVar3;
  param_1[iVar3] = (uint)(iVar4 == iVar1);
  return;
}


/* sub_08002A22 @ 0x08002A22 */

void sub_08002A22(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_08004544(&DAT_03001068,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}


/* sub_08002A44 @ 0x08002A44 */

void sub_08002A44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  uVar2 = param_1[iVar1];
  sub_0801712C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
  DAT_03001068 = (byte)uVar2;
  DAT_03001544 = 0;
  if (DAT_03001c34 != 0) {
    iVar1 = (uVar2 & 0xff) * 0x68;
    sub_08010692(DAT_03001c34,&DAT_03001560 + iVar1,iVar1,0x68,param_4);
  }
  sub_0801711C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
  return;
}


/* sub_08002AB6 @ 0x08002AB6 */

void sub_08002AB6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  sub_08013A90(&DAT_03001560 + param_1[iVar2 + -1] * 0x68,iVar1,0x4f8,0x68,param_4);
  return;
}


/* sub_08002AE4 @ 0x08002AE4 */

void sub_08002AE4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  sub_08013ABA(&DAT_03001560 + param_1[iVar2 + -1] * 0x68,iVar1,0x4f8,0x68,param_4);
  return;
}


/* sub_08002B12 @ 0x08002B12 */

void sub_08002B12(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar2 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar1 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  sub_08013B12(&DAT_03001560 + param_1[iVar3 + -2] * 0x68,iVar1,iVar2);
  return;
}


/* sub_08002B4A @ 0x08002B4A */

void sub_08002B4A(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  bVar1 = (&DAT_03001560)[param_1[iVar2] * 0x68];
  *param_1 = iVar2;
  param_1[iVar2] = bVar1 & 1;
  return;
}


/* sub_08002B7C @ 0x08002B7C */

void sub_08002B7C(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03001560)[param_1[iVar1] * 0x68] = (&DAT_03001560)[param_1[iVar1] * 0x68] | 1;
  return;
}


/* sub_08002BA2 @ 0x08002BA2 */

void sub_08002BA2(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03001560)[param_1[iVar1] * 0x68] = (&DAT_03001560)[param_1[iVar1] * 0x68] & 0xfe;
  return;
}


/* sub_08002BC8 @ 0x08002BC8 */

void sub_08002BC8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03001560)[param_1[iVar1] * 0x68] = (&DAT_03001560)[param_1[iVar1] * 0x68] | 2;
  return;
}


/* sub_08002C04 @ 0x08002C04 */

void sub_08002C04(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03001560)[param_1[iVar1] * 0x68] = (&DAT_03001560)[param_1[iVar1] * 0x68] & 0xfd;
  return;
}


/* sub_08002C2A @ 0x08002C2A */

void sub_08002C2A(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18] & 1) ==
       0) && (-1 < (int)((uint)(byte)(&gUnknown_086B82EC)
                                     [(uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18]
                        << 0x1e))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08002C68 @ 0x08002C68 */

void sub_08002C68(int *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = (&DAT_086b82fa)[(uint)(byte)(&DAT_03001574)[param_1[iVar2] * 0x68] * 0xc];
  *param_1 = iVar2;
  param_1[iVar2] = (uint)uVar1;
  return;
}


/* sub_08002CA2 @ 0x08002CA2 */

void sub_08002CA2(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar5 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  uVar4 = param_1[iVar2 + -1];
  piVar3 = (int *)0x0;
  if (DAT_03001068 == uVar4) {
    sub_0801712C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18)
    ;
    piVar3 = DAT_03001c34;
  }
  sub_08013DD6(&DAT_03001560 + uVar4 * 0x68,iVar5);
  if (piVar3 != (int *)0x0) {
    uVar1 = sub_08000158(iVar5);
    sub_0800EDF8(piVar3,uVar1);
    __call_via_r2(piVar3,0,*(int *)(*piVar3 + 0x28) + *piVar3);
    sub_08010DAA();
    sub_0801711C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18)
    ;
  }
  return;
}


/* sub_08002D3E @ 0x08002D3E */

void sub_08002D3E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = sub_080001C6(param_1[iVar1]);
  iVar2 = *(int *)(iVar1 + 0x1a0);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2 >> 8;
  return;
}


/* sub_08002D7E @ 0x08002D7E */

void sub_08002D7E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = sub_080001C6(param_1[iVar1]);
  iVar1 = *(int *)(iVar1 + 0x1a4);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1 >> 8;
  return;
}


/* sub_08002DBC @ 0x08002DBC */

void sub_08002DBC(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_080001C6(param_1[iVar2]);
  bVar1 = *(byte *)(iVar2 + 0x10);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (uint)bVar1;
  return;
}


/* sub_08002DE0 @ 0x08002DE0 */

void sub_08002DE0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  uVar1 = sub_08050690(0,&DAT_08055000,&local_c,0);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08002E1C @ 0x08002E1C */

void sub_08002E1C(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  uVar1 = sub_08050690(0,&DAT_0805500c,&local_c,0);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08002E58 @ 0x08002E58 */

void sub_08002E58(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_10 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_14 = param_1[iVar2];
  uVar1 = sub_080279E0(0,&local_14);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08002EB8 @ 0x08002EB8 */

void sub_08002EB8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08027DB0(0,param_1[iVar1]);
  iVar1 = sub_0803D8A0();
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1 + -1;
  return;
}


/* sub_08002EE2 @ 0x08002EE2 */

void sub_08002EE2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar3 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar7 = param_1[iVar1 + -1];
  *param_1 = iVar1 + -3;
  iVar6 = param_1[iVar1 + -2];
  *param_1 = iVar1 + -4;
  iVar8 = param_1[iVar1 + -3];
  *param_1 = iVar1 + -5;
  if (iVar3 != -1) {
    iVar3 = iVar3 * 0x3c;
  }
  pbVar5 = &DAT_03001560 + param_1[iVar1 + -4] * 0x68;
  *(int *)(&DAT_03001568 + param_1[iVar1 + -4] * 0x68) = iVar3;
  pbVar4 = &DAT_03001560 + iVar6 * 0x68;
  pbVar2 = &DAT_03001560 + iVar7 * 0x68;
  sub_0801375E(pbVar5,pbVar2,pbVar4,iVar8,param_4);
  *pbVar5 = *pbVar5 | 3;
  *pbVar2 = *pbVar2 & 0xfe;
  *pbVar4 = *pbVar4 & 0xfe;
  return;
}


/* sub_08002F72 @ 0x08002F72 */

void sub_08002F72(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char *pcVar4;
  
  cVar3 = '\0';
  iVar1 = 0;
  do {
    pcVar4 = (char *)(iVar1 + 0x8000000);
    iVar1 = iVar1 + 1;
    cVar3 = *pcVar4 + cVar3;
  } while (iVar1 < 0xa0);
  if (cVar3 != '3') {
    __iwram_end = 1;
  }
  uVar2 = sub_0802B9A8(0);
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_08002FA8 @ 0x08002FA8 */

void sub_08002FA8(int *param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  sub_08011C0C(&DAT_03001c4c,0x1b,&local_c);
  return;
}


/* sub_08002FD8 @ 0x08002FD8 */

void sub_08002FD8(void)

{
  sub_08008AFE(&DAT_0300197c);
  return;
}


/* sub_08002FDA @ 0x08002FDA */

void sub_08002FDA(int param_1)

{
  sub_08008AFE(*(undefined4 *)(param_1 + 0xc));
  return;
}


/* sub_08002FE4 @ 0x08002FE4 */

void sub_08002FE4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03001069 = DAT_03001069 | 4;
  DAT_0300153c = param_1[iVar1] * 0x3c;
  return;
}


/* sub_0800300C @ 0x0800300C */

void sub_0800300C(void)

{
  DAT_03001069 = DAT_03001069 & 0xfb;
  return;
}


/* sub_0800301A @ 0x0800301A */

void sub_0800301A(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = sub_0802FCA0(0,0,param_3,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08003030 @ 0x08003030 */

void sub_08003030(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_0802BFBC(param_1[iVar2],&local_c);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08003070 @ 0x08003070 */

void sub_08003070(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  
  sub_08011C0C(&DAT_03001c4c,0x27,0,in_r3,in_r3);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049978;
    puVar1[1] = 1;
  }
  sub_0803D8A0();
  return;
}


/* sub_08003072 @ 0x08003072 */

void sub_08003072(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08011C0C(*(undefined4 *)(param_1 + 0x18),0x27,0,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049978;
    puVar1[1] = 1;
  }
  sub_0803D8A0();
  return;
}


/* sub_08003096 @ 0x08003096 */

void sub_08003096(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = *(int *)(&DAT_03001990)[param_1[iVar1]];
  __call_via_r2((int *)(&DAT_03001990)[param_1[iVar1]],&local_c,*(int *)(iVar2 + 0xc) + iVar2);
  return;
}


/* sub_080030DA @ 0x080030DA */

void sub_080030DA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08012588((&gUnknown_0879B704)[param_1[iVar1]],DAT_03001030,param_3,param_4,param_4);
  return;
}


/* sub_080030F8 @ 0x080030F8 */

void sub_080030F8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = DAT_03001030;
  *DAT_03001030 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  sub_08012588((&gUnknown_0879B704)[param_1[iVar2]],DAT_03001030,&DAT_03001030,piVar1,param_4);
  return;
}


/* sub_08003126 @ 0x08003126 */

void sub_08003126(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  DAT_03001030[1] = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = DAT_03001030;
  *DAT_03001030 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  sub_08012588((&gUnknown_0879B704)[param_1[iVar2]],DAT_03001030,&DAT_03001030,piVar1,param_4);
  return;
}


/* sub_08003164 @ 0x08003164 */

void sub_08003164(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  DAT_03001030[2] = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  DAT_03001030[1] = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = DAT_03001030;
  *DAT_03001030 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  sub_08012588((&gUnknown_0879B704)[param_1[iVar2]],DAT_03001030,&DAT_03001030,piVar1,param_4);
  return;
}


/* sub_080031C8 @ 0x080031C8 */

void sub_080031C8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  DAT_03001030[3] = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  DAT_03001030[2] = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  DAT_03001030[1] = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = DAT_03001030;
  *DAT_03001030 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  sub_08012588((&gUnknown_0879B704)[param_1[iVar2]],DAT_03001030,&DAT_03001030,piVar1,param_4);
  return;
}


/* sub_08003226 @ 0x08003226 */

void sub_08003226(int *param_1)

{
  int iVar1;
  undefined1 auStack_70 [112];
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004098(auStack_70,(&gUnknown_0879B704)[param_1[iVar1]],DAT_03001030);
  return;
}


/* sub_0800324A @ 0x0800324A */

void sub_0800324A(int *param_1)

{
  int iVar1;
  undefined1 auStack_70 [112];
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  *DAT_03001030 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004098(auStack_70,(&gUnknown_0879B704)[param_1[iVar1]],DAT_03001030);
  return;
}


/* sub_0800327E @ 0x0800327E */

void sub_0800327E(int *param_1)

{
  int iVar1;
  undefined1 auStack_70 [112];
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03001030[1] = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  *DAT_03001030 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004098(auStack_70,(&gUnknown_0879B704)[param_1[iVar1]],DAT_03001030);
  return;
}


/* sub_080032C2 @ 0x080032C2 */

void sub_080032C2(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *param_1;
  uVar4 = 0;
  *param_1 = iVar1 + -1;
  iVar5 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = param_1[iVar1 + -1];
  uVar3 = 0;
  if (0 < iVar5) {
    do {
      iVar2 = sub_08004364(&DAT_03001068,iVar1 + uVar3);
      if (iVar2 != 0) {
        uVar4 = uVar4 | 1 << (uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar5);
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar4;
  return;
}


/* sub_08003310 @ 0x08003310 */

void sub_08003310(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  uVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  iVar1 = 1 << (uVar4 & 0xff);
  if (iVar1 <= (int)uVar3) {
    uVar3 = iVar1 - 1;
  }
  iVar1 = 0;
  if (0 < (int)uVar4) {
    do {
      if ((uVar3 & 1) == 0) {
        sub_08004396(&DAT_03001068,iVar2 + iVar1);
      }
      else {
        sub_08004380();
      }
      uVar3 = (int)uVar3 >> 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar4);
  }
  return;
}


/* sub_08003320 @ 0x08003320 */

void sub_08003320(int *param_1,int param_2)

{
  int iVar1;
  uint unaff_r4;
  uint uVar2;
  int iVar3;
  
  *param_1 = param_2;
  uVar2 = param_1[param_2 + 1];
  *param_1 = param_2 + -1;
  iVar3 = param_1[param_2];
  if ((int)unaff_r4 < 0) {
    unaff_r4 = 0;
  }
  iVar1 = 1 << (uVar2 & 0xff);
  if (iVar1 <= (int)unaff_r4) {
    unaff_r4 = iVar1 - 1;
  }
  iVar1 = 0;
  if (0 < (int)uVar2) {
    do {
      if ((unaff_r4 & 1) == 0) {
        sub_08004396(&DAT_03001068,iVar3 + iVar1);
      }
      else {
        sub_08004380();
      }
      unaff_r4 = (int)unaff_r4 >> 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return;
}


/* sub_08003366 @ 0x08003366 */

void sub_08003366(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = sub_0802FCA0(0,1,param_3,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_0800337C @ 0x0800337C */

void sub_0800337C(void)

{
  undefined4 in_r3;
  
  sub_08011C0C(&DAT_03001c4c,0x1c,0,in_r3,in_r3);
  return;
}


/* sub_0800337E @ 0x0800337E */

void sub_0800337E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011C0C(*(undefined4 *)(param_1 + 0x18),0x1c,0,param_4,param_4);
  return;
}


/* sub_0800338C @ 0x0800338C */

void sub_0800338C(void)

{
  DAT_03001540 = 0;
  return;
}


/* sub_0800339C @ 0x0800339C */

void sub_0800339C(void)

{
  DAT_03001069 = DAT_03001069 | 0x10;
  return;
}


/* sub_080033AA @ 0x080033AA */

void sub_080033AA(void)

{
  DAT_03001069 = DAT_03001069 & 0xef;
  return;
}


/* sub_080033B8 @ 0x080033B8 */

void sub_080033B8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001540;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080033D2 @ 0x080033D2 */

void sub_080033D2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080043D8(&DAT_03001068,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_080033EA @ 0x080033EA */

void sub_080033EA(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (&DAT_03001584)[(uint)DAT_03001068 * 0x1a];
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_0800340E @ 0x0800340E */

void sub_0800340E(void)

{
  DAT_03001069 = DAT_03001069 | 0x20;
  return;
}


/* sub_0800341C @ 0x0800341C */

void sub_0800341C(void)

{
  DAT_03001069 = DAT_03001069 & 0xdf;
  return;
}


/* sub_0800342A @ 0x0800342A */

void sub_0800342A(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B5D8;
  }
  sub_0803D8A0();
  return;
}


/* sub_08003450 @ 0x08003450 */

void sub_08003450(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08030384(0,param_1[iVar1]);
  iVar1 = sub_0803D8A0();
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1 + -1;
  return;
}


/* sub_0800347A @ 0x0800347A */

void sub_0800347A(void)

{
  undefined4 in_r3;
  
  sub_08011C0C(&DAT_03001c4c,0x1f,0,in_r3,in_r3);
  return;
}


/* sub_0800347C @ 0x0800347C */

void sub_0800347C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011C0C(*(undefined4 *)(param_1 + 0x18),0x1f,0,param_4,param_4);
  return;
}


/* sub_0800348A @ 0x0800348A */

void sub_0800348A(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (&DAT_03001576)[iVar1 * 0x34] = (&DAT_03001578)[iVar1 * 0x34];
    (&DAT_0300157a)[iVar1 * 0x34] = (&DAT_0300157c)[iVar1 * 0x34];
    if ((int)((uint)(byte)(&DAT_03001573)[iVar1 * 0x68] << 0x1f) < 0) {
      sub_08013C66();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  return;
}


/* sub_080034B8 @ 0x080034B8 */

void sub_080034B8(int *param_1)

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
  int local_14;
  int local_10;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  uVar2 = sub_080001C6(param_1[iVar1]);
  sub_0800FDFA(&local_34,uVar2);
  local_24 = local_34 + local_2c >> 1;
  local_20 = local_30 + local_28 >> 1;
  iVar1 = __16__rt_sdiv(2,local_14);
  local_18 = __16__rt_sdiv(2,local_10);
  local_1c = local_24 - iVar1;
  local_18 = local_20 - local_18;
  sub_08009816(&local_2c,&DAT_030019a4,&local_1c,&local_14);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = local_2c;
  return;
}


/* sub_08003556 @ 0x08003556 */

void sub_08003556(int *param_1)

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
  int local_14;
  int local_10;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  uVar2 = sub_080001C6(param_1[iVar1]);
  sub_0800FDFA(&local_34,uVar2);
  local_24 = local_34 + local_2c >> 1;
  local_20 = local_30 + local_28 >> 1;
  iVar1 = __16__rt_sdiv(2,local_14);
  local_18 = __16__rt_sdiv(2,local_10);
  local_1c = local_24 - iVar1;
  local_18 = local_20 - local_18;
  sub_08009816(&local_2c,&DAT_030019a4,&local_1c,&local_14);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = local_28;
  return;
}


/* sub_080035F4 @ 0x080035F4 */

void sub_080035F4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar3 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar2 = param_1[iVar4 + -1];
  *param_1 = iVar4 + -3;
  iVar1 = param_1[iVar4 + -2];
  *param_1 = iVar4 + -4;
  sub_08031808(param_1[iVar4 + -3],iVar1,iVar2,iVar3);
  return;
}


/* sub_08003626 @ 0x08003626 */

void sub_08003626(void)

{
  sub_0805058C(0);
  sub_0803D8A0();
  sub_08011DB4(&DAT_03001c4c);
  sub_080315B0(0);
  sub_0803D8A0();
  sub_08011E0E(&DAT_03001c4c);
  sub_0800938C(&DAT_030019a4,1);
  sub_08050568(0);
  sub_0803D8A0();
  return;
}


/* sub_0800365E @ 0x0800365E */

void sub_0800365E(int *param_1)

{
  int iVar1;
  
  sub_0805058C(0);
  sub_0803D8A0();
  sub_08011DB4(&DAT_03001c4c);
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08031E84(0,param_1[iVar1]);
  sub_0803D8A0();
  sub_08011E0E(&DAT_03001c4c);
  sub_0800938C(&DAT_030019a4,1);
  sub_08050568(0);
  sub_0803D8A0();
  return;
}


/* sub_080036A4 @ 0x080036A4 */

void sub_080036A4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = param_1[iVar1];
  sub_0801712C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
  (&DAT_03001574)[(uint)DAT_03001068 * 0x68] = (char)iVar1;
  if (DAT_03001c34 != 0) {
    sub_08010692(DAT_03001c34,&DAT_03001560 + (uint)DAT_03001068 * 0x68,(uint)DAT_03001068 * 0x68,
                 0x68,param_4);
  }
  sub_0801711C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
  return;
}


/* sub_08003724 @ 0x08003724 */

void sub_08003724(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_080335BC(0,1,param_3,param_4,param_4);
  sub_0803D8A0();
  return;
}


/* sub_08003734 @ 0x08003734 */

void sub_08003734(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)DAT_03003304;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = uVar1 & 1;
  return;
}


/* sub_0800374C @ 0x0800374C */

void sub_0800374C(void)

{
  sub_0803FA38();
  return;
}


/* sub_08003754 @ 0x08003754 */

void sub_08003754(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (param_1[iVar1] != 0) {
    DAT_03001988 = 1;
    return;
  }
  DAT_03001988 = 0;
  return;
}


/* sub_08003774 @ 0x08003774 */

void sub_08003774(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = (&DAT_03001584)[iVar1 * 0x1a] + iVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_080037A6 @ 0x080037A6 */

void sub_080037A6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = *(int *)(&gUIStringPtrs + param_1[iVar1] * 4);
  *param_1 = iVar1;
  param_1[iVar1] = iVar2;
  return;
}


/* sub_080037C4 @ 0x080037C4 */

void sub_080037C4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b6c = DAT_03002b6c + (short)((uint)(param_1[iVar1] * 0x445) >> 8);
  return;
}


/* sub_080037E0 @ 0x080037E0 */

void sub_080037E0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b64 = DAT_03002b64 + (short)(param_1[iVar1] * 0xa4 >> 6);
  return;
}


/* sub_080037FC @ 0x080037FC */

void sub_080037FC(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b7c = DAT_03002b7c + param_1[iVar1];
  DAT_03002b78 = DAT_03002b78 + param_1[iVar1];
  return;
}


/* sub_08003818 @ 0x08003818 */

void sub_08003818(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b74 = param_1[iVar1] + DAT_03002b74;
  return;
}


/* sub_0800382E @ 0x0800382E */

void sub_0800382E(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b80 = param_1[iVar1] + DAT_03002b80;
  return;
}


/* sub_08003844 @ 0x08003844 */

void sub_08003844(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b70 = param_1[iVar1] + DAT_03002b70;
  return;
}


/* sub_0800385A @ 0x0800385A */

void sub_0800385A(void)

{
  DAT_03002b68 = __16__rt_sdiv(2,DAT_03002b68);
  return;
}


/* sub_0800386C @ 0x0800386C */

void sub_0800386C(void)

{
  DAT_03002b5d = __16__rt_sdiv(2,DAT_03002b5d);
  return;
}


/* sub_0800387E @ 0x0800387E */

void sub_0800387E(void)

{
  DAT_03002b5e = __16__rt_sdiv(2,DAT_03002b5e);
  return;
}


/* sub_08003890 @ 0x08003890 */

void sub_08003890(void)

{
  DAT_03002b6a = (short)((uint)DAT_03002b6a * 7 >> 3);
  return;
}


/* sub_0800389E @ 0x0800389E */

void sub_0800389E(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b5c = (char)param_1[iVar1] + DAT_03002b5c;
  return;
}


/* sub_080038B4 @ 0x080038B4 */

void sub_080038B4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_0803643C(0,param_1[iVar2],param_3,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_080038D4 @ 0x080038D4 */

void sub_080038D4(int *param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  sub_08011C0C(&DAT_03001c4c,0x23,&local_c);
  return;
}


/* sub_08003904 @ 0x08003904 */

void sub_08003904(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar2 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar1 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  sub_08013B54(&DAT_03001560 + param_1[iVar3 + -2] * 0x68,iVar1,iVar2);
  return;
}


/* sub_0800393C @ 0x0800393C */

void sub_0800393C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = sub_08013BCC(&DAT_03001560 + param_1[iVar1 + -1] * 0x68,iVar2);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08003978 @ 0x08003978 */

void sub_08003978(void)

{
  DAT_03001069 = DAT_03001069 | 0x40;
  return;
}


/* sub_08003986 @ 0x08003986 */

void sub_08003986(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iStack_c;
  int iStack_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iStack_8 = param_1[iVar2 + -1] + -4;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iStack_c = param_1[iVar2] + -4;
  uVar1 = sub_08026DE4(0,&iStack_c,iVar3 != 0);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_080039E4 @ 0x080039E4 */

void sub_080039E4(int *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = *(ushort *)(&DAT_0300158c + param_1[iVar2] * 0x68);
  *param_1 = iVar2;
  param_1[iVar2] = (uint)uVar1;
  return;
}


/* sub_08003A14 @ 0x08003A14 */

void sub_08003A14(int *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar3 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  puVar2 = (ushort *)(&DAT_0300158c + param_1[iVar4 + -1] * 0x68);
  uVar1 = *puVar2;
  do {
    *puVar2 = (ushort)((uint)uVar1 + iVar3);
  } while ((uint)*puVar2 != ((uint)uVar1 + iVar3 & 0xffff));
  return;
}


/* sub_08003A4E @ 0x08003A4E */

void sub_08003A4E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = sub_080001C6(param_1[iVar1 + -1]);
  *(int *)(iVar1 + 0x1a8) = iVar2 << 10;
  return;
}


/* sub_08003A74 @ 0x08003A74 */

void sub_08003A74(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar2 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar3 = param_1[iVar4 + -1];
  *param_1 = iVar4 + -3;
  iVar5 = param_1[iVar4 + -2];
  *param_1 = iVar4 + -4;
  iVar6 = param_1[iVar4 + -3];
  *param_1 = iVar4 + -5;
  if (param_1[iVar4 + -4] == 0) {
    iVar4 = (uint)DAT_03001068 * 0x68;
    pbVar1 = &DAT_03001588 + iVar4;
    uVar7 = (uint)*pbVar1 + iVar6;
    do {
      *pbVar1 = (byte)uVar7;
    } while ((uint)*pbVar1 != (uVar7 & 0xff));
    pbVar1 = &DAT_03001589 + iVar4;
    uVar7 = (uint)*pbVar1 + iVar5;
    do {
      *pbVar1 = (byte)uVar7;
    } while ((uint)*pbVar1 != (uVar7 & 0xff));
    pbVar1 = &DAT_0300158a + iVar4;
    uVar7 = (uint)*pbVar1 + iVar3;
    do {
      *pbVar1 = (byte)uVar7;
    } while ((uint)*pbVar1 != (uVar7 & 0xff));
    pbVar1 = &DAT_0300158b + iVar4;
    uVar7 = (uint)*pbVar1 + iVar2;
    do {
      *pbVar1 = (byte)uVar7;
    } while ((uint)*pbVar1 != (uVar7 & 0xff));
  }
  else {
    DAT_03001544 = param_1[iVar4 + -4] * 0x3c;
    DAT_03001558 = 0;
    DAT_03001548 = iVar6;
    DAT_0300154c = iVar5;
    DAT_03001550 = iVar3;
    DAT_03001554 = iVar2;
  }
  if (DAT_03001c34 != 0) {
    sub_0801064C();
  }
  return;
}


/* sub_08003B48 @ 0x08003B48 */

void sub_08003B48(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  if (200 < iVar2) {
    iVar2 = 200;
  }
  puVar3 = &DAT_03001560 + param_1[iVar1 + -1] * 0x68;
  iVar1 = sub_080135D2(puVar3);
  if (iVar1 < iVar2) {
    sub_08013678(puVar3,iVar1,iVar2);
    sub_080135BC(puVar3,iVar2);
  }
  return;
}


/* sub_08003B94 @ 0x08003B94 */

void sub_08003B94(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  local_c = param_1[iVar2 + -2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_10 = param_1[iVar2];
  iVar1 = sub_0803A84A(0,0,&local_10,iVar3,iVar1,1);
  sub_0800927E(&DAT_03001990,*(undefined1 *)(iVar1 + 4),iVar1);
  return;
}


/* sub_08003BEA @ 0x08003BEA */

void sub_08003BEA(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __iwram_end;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08003BFC @ 0x08003BFC */

void sub_08003BFC(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03001544 = param_1[iVar1] * 0x3c;
  DAT_03001548 = 0;
  DAT_0300154c = 0;
  DAT_03001550 = 0;
  DAT_03001554 = 0;
  DAT_03001558 = 1;
  if (DAT_03001c34 != 0) {
    sub_0801064C();
  }
  return;
}


/* sub_08003C50 @ 0x08003C50 */

int sub_08003C50(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  do {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    uVar3 = uVar2 & 0x7f;
    iVar1 = iVar1 * 0x80 + uVar3;
  } while ((int)(uVar2 << 0x18) < 0);
  if ((int)(uVar3 << 0x1f) < 0) {
    return -(iVar1 >> 1);
  }
  return iVar1 >> 1;
}


/* ScriptOp_00 @ 0x08003C74 */

void ScriptOp_00(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_2;
  *param_2 = pbVar3 + 1;
  iVar2 = *param_1;
  bVar1 = *pbVar3;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (uint)bVar1;
  return;
}


/* sub_08003C8A @ 0x08003C8A */

void sub_08003C8A(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  do {
    uVar3 = (uint)*(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    uVar4 = uVar3 & 0x7f;
    iVar2 = iVar2 * 0x80 + uVar4;
  } while ((int)(uVar3 << 0x18) < 0);
  iVar2 = iVar2 >> 1;
  if ((int)(uVar4 << 0x1f) < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08003CBE @ 0x08003CBE */

void sub_08003CBE(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *(byte *)*param_2;
  pbVar2 = (byte *)*param_2 + 1;
  *param_2 = pbVar2;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],&gScriptNativeFuncs,pbVar2,param_4);
  return;
}


/* sub_08003CD4 @ 0x08003CD4 */

void sub_08003CD4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2],(&gScriptSetterFuncs)[bVar1],&gScriptSetterFuncs,pbVar3,param_4);
  return;
}


/* sub_08003CF6 @ 0x08003CF6 */

void sub_08003CF6(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *param_1 = iVar1;
  return;
}


/* sub_08003D16 @ 0x08003D16 */

void sub_08003D16(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)(puVar1[1] != 0 || *puVar1 != 0);
  return;
}


/* sub_08003D30 @ 0x08003D30 */

void sub_08003D30(int *param_1)

{
  param_1[*param_1] = -param_1[*param_1];
  return;
}


/* sub_08003D3E @ 0x08003D3E */

void sub_08003D3E(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  *param_1 = *param_1 + param_1[1];
  return;
}


/* sub_08003D52 @ 0x08003D52 */

void sub_08003D52(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  *param_1 = *param_1 - param_1[1];
  return;
}


/* sub_08003D66 @ 0x08003D66 */

void sub_08003D66(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  *param_1 = param_1[1] * *param_1;
  return;
}


/* sub_08003D7A @ 0x08003D7A */

void sub_08003D7A(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  iVar1 = __16__rt_sdiv(param_1[1],*param_1);
  *param_1 = iVar1;
  return;
}


/* sub_08003D92 @ 0x08003D92 */

void sub_08003D92(int *param_1)

{
  int iVar1;
  int extraout_r1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  __16__rt_sdiv(param_1[1],*param_1);
  *param_1 = extraout_r1;
  return;
}


/* sub_08003DAA @ 0x08003DAA */

void sub_08003DAA(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)(*puVar1 == puVar1[1]);
  return;
}


/* sub_08003DC4 @ 0x08003DC4 */

void sub_08003DC4(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)(*puVar1 != puVar1[1]);
  return;
}


/* sub_08003DDE @ 0x08003DDE */

void sub_08003DDE(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)puVar1[1] < (int)*puVar1);
  return;
}


/* sub_08003DF8 @ 0x08003DF8 */

void sub_08003DF8(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)puVar1[1] <= (int)*puVar1);
  return;
}


/* sub_08003E12 @ 0x08003E12 */

void sub_08003E12(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)*puVar1 < (int)puVar1[1]);
  return;
}


/* sub_08003E2C @ 0x08003E2C */

void sub_08003E2C(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)*puVar1 <= (int)puVar1[1]);
  return;
}


/* sub_08003E46 @ 0x08003E46 */

void sub_08003E46(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *param_2 = puVar1 + CONCAT11(*puVar1,puVar1[1]);
  return;
}


/* sub_08003E56 @ 0x08003E56 */

void sub_08003E56(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (undefined1 *)*param_2;
  if (param_1[iVar2] == 0) {
    *param_2 = puVar1 + CONCAT11(*puVar1,puVar1[1]);
    return;
  }
  *param_2 = puVar1 + 2;
  return;
}


/* sub_08003E7C @ 0x08003E7C */

void sub_08003E7C(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


/* sub_08003E84 @ 0x08003E84 */

void sub_08003E84(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],pbVar3,param_4,param_4);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2] + 1,(&gScriptSetterFuncs)[bVar1]);
  return;
}


/* sub_08003EB4 @ 0x08003EB4 */

void sub_08003EB4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],pbVar3,param_4,param_4);
  iVar2 = param_1[*param_1] + 1;
  param_1[*param_1] = iVar2;
  __call_via_r1(iVar2,(&gScriptSetterFuncs)[bVar1]);
  return;
}


/* sub_08003EE4 @ 0x08003EE4 */

void sub_08003EE4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *(byte *)*param_2;
  pbVar2 = (byte *)*param_2 + 1;
  *param_2 = pbVar2;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],pbVar2,param_4,param_4);
  __call_via_r1(param_1[*param_1] + 1,(&gScriptSetterFuncs)[bVar1]);
  return;
}


/* sub_08003F10 @ 0x08003F10 */

void sub_08003F10(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],pbVar3,param_4,param_4);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2] + -1,(&gScriptSetterFuncs)[bVar1]);
  return;
}


/* sub_08003F48 @ 0x08003F48 */

void sub_08003F48(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],pbVar3,param_4,param_4);
  iVar2 = param_1[*param_1] + -1;
  param_1[*param_1] = iVar2;
  __call_via_r1(iVar2,(&gScriptSetterFuncs)[bVar1]);
  return;
}


/* sub_08003F78 @ 0x08003F78 */

void sub_08003F78(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *(byte *)*param_2;
  pbVar2 = (byte *)*param_2 + 1;
  *param_2 = pbVar2;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],pbVar2,param_4,param_4);
  __call_via_r1(param_1[*param_1] + -1,(&gScriptSetterFuncs)[bVar1]);
  return;
}


/* sub_08003FA4 @ 0x08003FA4 */

void sub_08003FA4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  param_1 = param_1 + 0x11;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08003FC0 @ 0x08003FC0 */

void sub_08003FC0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x44);
  iVar2 = piVar3[*(int *)(param_1 + 0x44)] + -1;
  piVar3[*(int *)(param_1 + 0x44)] = iVar2;
  puVar1 = (undefined1 *)*param_2;
  if (iVar2 == 0) {
    *param_2 = (int)(puVar1 + 2);
    *piVar3 = *piVar3 + -1;
    return;
  }
  *param_2 = (int)puVar1 - (uint)CONCAT11(*puVar1,puVar1[1]);
  return;
}


/* sub_08003FEE @ 0x08003FEE */

void sub_08003FEE(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  do {
    iVar1 = 0;
    do {
      uVar3 = (uint)*(byte *)*param_2;
      *param_2 = (byte *)*param_2 + 1;
      uVar4 = uVar3 & 0x7f;
      iVar1 = iVar1 * 0x80 + uVar4;
    } while ((int)(uVar3 << 0x18) < 0);
    iVar1 = iVar1 >> 1;
    if ((int)(uVar4 << 0x1f) < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    param_1[iVar2 + 1] = iVar1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return;
}


/* ScriptVM_Run @ 0x08004038 */

void ScriptVM_Run(undefined4 *param_1,byte *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *local_1c;
  undefined4 *puStack_18;
  
  puVar1 = &DAT_03001038 + DAT_03001034;
  DAT_03001034 = DAT_03001034 + 1;
  *puVar1 = param_1;
  DAT_03001030 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    DAT_03001030 = param_1 + 0x17;
  }
  param_1[0x16] = DAT_03001030;
  *param_1 = 0;
  param_1[0x11] = 0;
  local_1c = param_2;
  puStack_18 = param_3;
  while( true ) {
    bVar2 = *local_1c;
    local_1c = local_1c + 1;
    if ((&gScriptOpcodeFuncs)[bVar2] == (undefined *)0x0) break;
    __call_via_r2(param_1,&local_1c);
  }
  DAT_03001034 = DAT_03001034 + -1;
  if (DAT_03001034 != 0) {
    DAT_03001030 = *(undefined4 **)((&DAT_03001034)[DAT_03001034] + 0x58);
  }
  return;
}


/* sub_08004098 @ 0x08004098 */

undefined4 * sub_08004098(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int a0;
  int a2;
  int a3;
  
  a2 = param_3;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x6c), param_1 != (undefined4 *)0x0)) {
    a3 = 0;
    *param_1 = 0;
    param_1[0x11] = 0;
    cVar1 = *(char *)(*param_2 + 2);
    if (cVar1 == '\0') {
      ScriptVM_Run(param_1,*param_2 + 3,param_3,0,param_4);
    }
    else if (cVar1 == '\x04') {
      a0 = sub_0803D5B8(0x800);
      sub_08049120(a0,*param_2 + 4,a2,a3);
      ScriptVM_Run(param_1,a0,param_3);
      sub_0803D63C(a0);
    }
    else {
      sub_0803DF14(L"\"Expected dialog to start with a code block\"",
                   "T:\\Source\\ByteCodeInterpreter\\ByteCodeInterpreter.cpp",0x3c);
    }
  }
  return param_1;
}


/* sub_08004102 @ 0x08004102 */

void sub_08004102(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_03001034 != 0) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < DAT_03001034) {
      do {
        iVar1 = (&DAT_03001038)[iVar2];
        if (*(undefined4 **)(iVar1 + 0x58) == param_1) {
          if (iVar3 == 0) {
            *(undefined4 *)(iVar1 + 0x5c) = *param_1;
            *(undefined4 *)(iVar1 + 0x60) = param_1[1];
            *(undefined4 *)(iVar1 + 100) = param_1[2];
            *(undefined4 *)(iVar1 + 0x68) = param_1[3];
            iVar3 = iVar1 + 0x5c;
          }
          *(int *)(iVar1 + 0x58) = iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_03001034);
    }
    DAT_03001030 = *(undefined4 *)((&DAT_03001034)[DAT_03001034] + 0x58);
  }
  return;
}


