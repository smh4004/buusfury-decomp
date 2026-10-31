/* Ghidra reference decompilation of code_08023A78 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08023A78 @ 0x08023A78 */

void sub_08023A78(undefined4 param_1)

{
  undefined1 auStack_40 [52];
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  sub_08006718(param_1,auStack_40,0x5f,1);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_08023AAA @ 0x08023AAA */

undefined4 sub_08023AAA(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10c)) {
    case 0:
    case 1:
      *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x38) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x38) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10c) * 4 + param_1 + 0x114) + 0x38) = 1;
      DAT_03002f58 = *(int *)(param_1 + 0x10c) == 0;
      break;
    case 2:
    case 4:
    case 6:
      *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x38) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x38) = 0;
      *(undefined4 *)(*(int *)(param_1 + 300) + 0x38) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10c) * 4 + param_1 + 0x114) + 0x38) = 1;
      DAT_03002f5c = *(int *)(param_1 + 0x10c) + -2;
      break;
    case 9:
      puVar1 = (undefined4 *)sub_0803D5B8(0x11c);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *(undefined1 *)(puVar1 + 0x45) = 0;
        *puVar1 = &_0804B550;
        puVar1[0x46] = 0;
      }
      iVar2 = sub_0803D8A0();
      if (iVar2 != 2) {
        sub_080503A4(0);
        sub_08040160();
        return 0;
      }
      puVar1 = (undefined4 *)sub_0803D5B8(0xf6c);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *puVar1 = &_0804CAA8;
        puVar1[0x65] = 0;
        puVar1[0x161] = 0;
        sub_08004838(puVar1 + 0x17d);
        sub_08046FF4((int)puVar1 + 0xeca,(int)puVar1 + 0xed6,2,0x8050869);
        sub_08046FF4(puVar1 + 0x3b6,puVar1 + 0x3ba,4,0x8050535);
        sub_08046FF4((int)puVar1 + 0xf32,(int)puVar1 + 0xf3e,2,0x8050869);
        sub_08046FF4(puVar1 + 0x3d0,puVar1 + 0x3d4,4,0x8050535);
      }
      sub_0803D850(puVar1);
      return 1;
    }
  }
  else if (param_3 == 1) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
    if (puVar1 != (undefined4 *)0x0) {
      sub_08005460(puVar1,0x5e,0xd,1,param_4);
      *puVar1 = &_08049B2C;
      puVar1[0xbe] = 1;
    }
    sub_0803D850(puVar1);
    return 1;
  }
  return 0;
}


/* sub_08023C20 @ 0x08023C20 */

undefined4 sub_08023C20(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_03002f50 != 0) {
    DAT_03002f50 = 0;
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    return 0;
  }
  uVar2 = sub_080067F4();
  return uVar2;
}


/* sub_08023C5E @ 0x08023C5E */

void sub_08023C5E(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
  case 1:
  case 2:
    DAT_03002f50 = 1;
  }
  return;
}


/* sub_08023CB8 @ 0x08023CB8 */

void sub_08023CB8(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = *(int **)(param_2 + 4);
  iVar6 = piVar7[0x69];
  *(int *)(param_1 + 0x10) = (piVar7[0x68] >> 8) << 8;
  *(int *)(param_1 + 0x14) = (iVar6 >> 8) << 8;
  iVar6 = piVar7[0x69];
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x38) * 0x100;
  uVar2 = __16__rt_sdiv(iVar8,(*(int *)(param_1 + 0x18) - (piVar7[0x68] >> 8)) * 0x10000);
  uVar3 = __16__rt_sdiv(iVar8,(iVar4 - (iVar6 >> 8)) * 0x10000);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = iVar4;
  if (iVar4 < 0) {
    iVar6 = -iVar4;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  iVar8 = iVar5;
  if (iVar5 < 0) {
    iVar8 = -iVar5;
  }
  if (iVar8 < iVar6) {
    if (iVar4 < 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined1 *)(piVar7 + 4) = uVar1;
  }
  else {
    *(char *)(piVar7 + 4) = '\x01' - (-1 < iVar5);
  }
  iVar6 = piVar7[0x5e];
  *(int *)(param_1 + 0x24) = piVar7[0x5f];
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x20) = iVar6;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38) * 4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x38) * -4;
  __call_via_r3(piVar7,0xe,0,*(int *)(*piVar7 + 0x30) + *piVar7,uVar2,uVar2,uVar3,uVar2);
  __call_via_r1(piVar7,*(int *)(*piVar7 + 0x3c) + *piVar7);
  *(undefined1 *)(piVar7 + 2) = 0x24;
  return;
}


/* sub_08023DBA @ 0x08023DBA */

void sub_08023DBA(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34) + -8;
  *(int *)(param_1 + 0x34) = iVar2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar2;
  iVar2 = *(int *)(param_1 + 0xc) + 8;
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar2;
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_2 + 0x178) = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x28) >> 8);
  *(int *)(param_2 + 0x17c) = iVar2 + (iVar1 >> 8);
  return;
}


/* sub_08023E28 @ 0x08023E28 */

void sub_08023E28(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 4);
  iVar1 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar1;
  if (7 < iVar1) {
    if (iVar1 == 8) {
      __call_via_r3(piVar4,0xe,1,*(int *)(*piVar4 + 0x30) + *piVar4);
      sub_08023DBA(param_1,piVar4);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar1 < iVar2 / 2 + 8) {
        sub_08023DBA(param_1,piVar4);
      }
      else if (iVar1 < iVar2 + 8) {
        iVar3 = 2;
        if (*(int *)piVar4[0x14] == 4) {
          iVar3 = 2 - (((iVar1 - iVar2) + 8) * 0x10000000 >> 0x1f);
        }
        __call_via_r3(piVar4,0xe,iVar3,*(int *)(*piVar4 + 0x30) + *piVar4);
        sub_08023DBA(param_1,piVar4);
      }
      else if (iVar2 + 8 == iVar1) {
        __call_via_r3(piVar4,0xe,0,*(int *)(*piVar4 + 0x30) + *piVar4);
        iVar1 = *(int *)(param_1 + 0x24);
        piVar4[0x5e] = *(int *)(param_1 + 0x20);
        piVar4[0x5f] = iVar1;
      }
      else if (iVar2 + 0x10 <= iVar1) {
        iVar1 = *(int *)(*piVar4 + 0x40);
        __call_via_r1(piVar4,iVar1 + *piVar4,iVar1,param_4,param_4);
        __call_via_r2(piVar4,0,*(int *)(*piVar4 + 0x28) + *piVar4);
      }
    }
  }
  return;
}


/* sub_08023EE6 @ 0x08023EE6 */

undefined4 sub_08023EE6(int param_1)

{
  if (*(int *)(param_1 + 0x38) + 0x10 <= *(int *)(param_1 + 0x3c)) {
    return 1;
  }
  return 0;
}


/* sub_08023EF8 @ 0x08023EF8 */

void sub_08023EF8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12,0,param_4,param_4);
  return;
}


/* sub_08023F0E @ 0x08023F0E */

void sub_08023F0E(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iStack_c;
  int iStack_8;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x80) {
    if (uVar2 < 4) {
      *(undefined1 *)((int)param_2 + 0x11) = 0;
    }
    else {
      *(byte *)((int)param_2 + 0x11) = (byte)((uVar2 << 0x1c) >> 0x1e);
      if ((uVar2 << 0x1c) >> 0x1e == 0) {
        *(undefined1 *)((int)param_2 + 0x11) = 2;
      }
      iStack_c = (param_2[0x68] >> 8) +
                 *(int *)(&gUnknown_0872C358 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_8 = (param_2[0x69] >> 8) + *(int *)(&DAT_0872c35c + (uint)*(byte *)(param_2 + 4) * 8);
      sub_080249E0(&iStack_c);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08023F8A @ 0x08023F8A */

void sub_08023F8A(void)

{
  sub_0803E32C(&DAT_03003e5c,&DAT_0831959c,0x40,0);
  return;
}


/* sub_08023FA8 @ 0x08023FA8 */

bool sub_08023FA8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  int *piVar2;
  char cVar3;
  char cVar4;
  undefined4 in_cr11;
  undefined8 uVar5;
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  iVar1 = 0;
  local_14 = (int *)0x0;
  local_10 = DAT_03001c34;
  local_18 = &_0804AE70;
  if (param_2 != 0) {
    iVar1 = param_2 + 0x18c;
  }
  sub_0801599C(&local_18,iVar1);
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03002fa8);
  sub_0803E378(&DAT_03003e5c,&DAT_0831959c,0x40,0);
  uVar5 = CONCAT44(extraout_r1,local_14);
  local_18 = &_08049ACC;
  cVar4 = (int)local_14 < 0;
  cVar3 = '\0';
  if (local_14 != (int *)0x0) {
    piVar2 = (int *)*local_14;
    cVar3 = SCARRY4(*piVar2,(int)piVar2);
    cVar4 = '\0';
    uVar5 = __call_via_r2(local_14,1,*piVar2 + (int)piVar2);
  }
  if (cVar4 != cVar3) {
    coprocessor_load(0,in_cr11,(int)uVar5 + -0xc);
  }
  return *(undefined4 **)((int)((ulonglong)uVar5 >> 0x20) + 0x14) != &DAT_03002fa8;
}


/* sub_08024024 @ 0x08024024 */

undefined4 * sub_08024024(void)

{
  return &DAT_03002fac;
}


/* sub_08024048 @ 0x08024048 */

void sub_08024048(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  sub_08024120();
  uVar1 = *(undefined1 *)(param_1 + 0x11c);
  puVar2 = (undefined4 *)sub_0803D5B8(0x134);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_080492EC;
    *(undefined1 *)(puVar2 + 0x45) = uVar1;
    puVar2[0x47] = 0;
    puVar2[0x48] = 0;
    puVar2[0x46] = 0;
    sub_0804912C((int)(puVar2 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar2 + 0x41),0,0x10);
    puVar2[0x49] = 0xffff;
    DAT_03002f50 = 0;
    DAT_03002f54 = 0;
    *puVar2 = &_08049A9C;
    puVar2[0x4b] = 0;
    *(undefined1 *)(puVar2 + 0x4c) = uVar1;
  }
  sub_08040160(puVar2);
  return;
}


/* sub_080240B0 @ 0x080240B0 */

void sub_080240B0(void)

{
  sub_0802426E();
  return;
}


/* sub_080240B8 @ 0x080240B8 */

undefined4 sub_080240B8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_03002f54 != 0) &&
     (iVar2 = *(int *)(param_1 + 0x118) + 1, *(int *)(param_1 + 0x118) = iVar2, 10 < iVar2)) {
    sub_08040182();
    return 2;
  }
  uVar1 = sub_080067F4();
  return uVar1;
}


/* sub_080240E0 @ 0x080240E0 */

undefined4 sub_080240E0(int param_1,undefined1 *param_2)

{
  *param_2 = (char)*(undefined4 *)(param_1 + 300);
  return 1;
}


/* sub_080240EC @ 0x080240EC */

void sub_080240EC(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x130) == param_3) &&
     (iVar1 = *(int *)(param_1 + 300) + 1, *(int *)(param_1 + 300) = iVar1, 4 < iVar1)) {
    DAT_03002f54 = 1;
  }
  return;
}


/* sub_08024120 @ 0x08024120 */

void sub_08024120(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  
  local_1c = (undefined4 *)0x0;
  local_24 = 1;
  local_20 = 1;
  uVar3 = sub_08013E64(0,param_1,1,0xc,0x1c);
  sub_0800664E(param_1,uVar3);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  uVar3 = sub_08014124(0,param_1,0x1c,0x28,L"Cancel");
  sub_0800664E(param_1,uVar3);
  cVar1 = *(char *)(param_1 + 0x114);
  if (cVar1 == '\0') {
    local_20 = 0;
    local_1c = &gUnknown_0807012C;
    local_24 = 5;
    uVar3 = sub_08014124(0,param_1,0x10,0x10,L"Waiting for a friend...");
    sub_0800664E(param_1,uVar3);
  }
  else if (cVar1 == '\x01') {
    local_20 = 0;
    local_1c = &gUnknown_0807012C;
    local_24 = 5;
    uVar3 = sub_08014124(0,param_1,0x10,0x10,L"Please select a saved game");
    sub_0800664E(param_1,uVar3);
  }
  else if (cVar1 == '\x02') {
    local_20 = 0;
    local_1c = &gUnknown_0807012C;
    local_24 = 5;
    uVar3 = sub_08014124(0,param_1,0x10,0x10,L"No Saved Games");
    sub_0800664E(param_1,uVar3);
  }
  else if (cVar1 == '\x03') {
    local_20 = 0;
    local_1c = &gUnknown_0807012C;
    local_24 = 5;
    uVar3 = sub_08014124(0,param_1,0x10,0x10,L"Disconnected");
    sub_0800664E(param_1,uVar3);
  }
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x1dc0);
  local_24 = 7;
  local_20 = 8;
  local_1c = (undefined4 *)0x18;
  uStack_18 = 0xf;
  sub_0803DA10(&local_24,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f80;
  uVar2 = REG_DISPCNT;
  REG_DISPCNT = uVar2 | 0x100;
  return;
}


/* sub_0802426E @ 0x0802426E */

void sub_0802426E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_0802428E @ 0x0802428E */

void sub_0802428E(undefined4 param_1)

{
  undefined1 auStack_40 [52];
  
  sub_0803F540(auStack_40,0x88,0x38);
  sub_08005096(auStack_40);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6009640);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_080242C2 @ 0x080242C2 */

bool sub_080242C2(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 1) {
    sub_0803D876(1);
  }
  return param_3 == 1;
}


/* sub_080242EC @ 0x080242EC */

void sub_080242EC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  sub_08024120();
  if (*(int *)(param_1 + 0x128) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x120);
    uVar3 = *(undefined4 *)(param_1 + 0x124);
    puVar1 = (undefined4 *)sub_0803D5B8(0x144);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_080492EC;
      *(undefined1 *)(puVar1 + 0x45) = 7;
      puVar1[0x47] = 0;
      puVar1[0x48] = 0;
      puVar1[0x46] = 0;
      sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
      sub_0804912C((int)(puVar1 + 0x41),0,0x10);
      puVar1[0x49] = 0xffff;
      DAT_03002f50 = 0;
      DAT_03002f54 = 0;
      *puVar1 = &_08049E64;
      puVar1[0x4e] = 0;
      DAT_03002fb0 = 0xffffffff;
      puVar1[0x4c] = uVar2;
      puVar1[0x4d] = uVar3;
      puVar1[0x4f] = 0;
      puVar1[0x50] = 0;
      DAT_03002fb4 = 0;
    }
    sub_08040160(puVar1);
  }
  else if (*(int *)(param_1 + 0x128) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x118);
    puVar1 = (undefined4 *)sub_0803D5B8(0x144);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_080492EC;
      *(undefined1 *)(puVar1 + 0x45) = 7;
      puVar1[0x47] = 0;
      puVar1[0x48] = 0;
      puVar1[0x46] = 0;
      sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
      sub_0804912C((int)(puVar1 + 0x41),0,0x10);
      puVar1[0x49] = 0xffff;
      DAT_03002f50 = 0;
      DAT_03002f54 = 0;
      *puVar1 = &_08049E64;
      puVar1[0x4e] = 1;
      DAT_03002fb0 = 0xffffffff;
      puVar1[0x4b] = uVar2;
      puVar1[0x4f] = 0;
      puVar1[0x50] = 0;
      DAT_03002fb4 = 0;
    }
    sub_08040160(puVar1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}


/* sub_080243EC @ 0x080243EC */

void sub_080243EC(void)

{
  sub_0802426E();
  return;
}


/* sub_080243F4 @ 0x080243F4 */

undefined4 sub_080243F4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_03002f50 == 0) {
    if ((DAT_03002fb4 != 0) &&
       (iVar2 = *(int *)(param_1 + 0x11c) + 1, *(int *)(param_1 + 0x11c) = iVar2, 0x1e < iVar2)) {
      sub_08040182();
      return 2;
    }
    uVar1 = sub_080067F4();
  }
  else {
    DAT_03002f50 = 0;
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0802442C @ 0x0802442C */

undefined4 sub_0802442C(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      sub_08049138((int)(param_2 + 4),*(int *)(param_1 + 0x130),0x20);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[3] = (char)*(undefined4 *)(param_1 + 0x13c);
      return 0x24;
    }
    if (iVar1 == 2) {
      *param_2 = 1;
      param_2[1] = 0;
      param_2[3] = (char)*(undefined4 *)(param_1 + 0x13c);
      return 4;
    }
    if (iVar1 == 3) {
      *param_2 = 1;
      param_2[1] = 1;
      param_2[3] = (char)*(undefined4 *)(param_1 + 0x13c);
      return 4;
    }
  }
  *param_2 = (char)*(undefined4 *)(param_1 + 300);
  param_2[1] = (char)*(undefined4 *)(param_1 + 0x13c);
  return 2;
}


/* sub_08024490 @ 0x08024490 */

void sub_08024490(int param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  switch(param_3) {
  case 3:
  case 4:
  case 5:
    iVar1 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
    if (iVar1 == 0) {
      DAT_03002f50 = 1;
      return;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    DAT_03002fb4 = 0;
    break;
  case 7:
    if (*(int *)(param_1 + 0x138) == 0) {
      piVar2 = (int *)(param_1 + 0x140);
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        sub_08049138(*(int *)(param_1 + 0x134),(int)(param_2 + 4),0x20);
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          iVar1 = 2;
          if (*param_2 != 0) {
            iVar1 = 3;
          }
          *piVar2 = iVar1;
        }
        goto _08024512;
      }
      iVar1 = 1;
      *(undefined4 *)(param_1 + 0x13c) = 1;
      if (param_2[3] != 0) {
        iVar1 = 2;
      }
      *piVar2 = iVar1;
    }
    else if (*(int *)(param_1 + 0x138) != 1) {
      return;
    }
_08024512:
    DAT_03002fb0 = (uint)*param_2;
    *(undefined4 *)(param_1 + 0x13c) = 1;
    DAT_03002fb4 = (uint)(param_2[1] != 0);
    return;
  }
  return;
}


/* sub_08024574 @ 0x08024574 */

void sub_08024574(void)

{
  undefined4 *puVar1;
  
  sub_08024120();
  puVar1 = (undefined4 *)sub_0803D5B8(300);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080492EC;
    *(undefined1 *)(puVar1 + 0x45) = 5;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x46] = 0;
    sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar1 + 0x41),0,0x10);
    puVar1[0x49] = 0xffff;
    DAT_03002f50 = 0;
    *puVar1 = &_0804A1F4;
    DAT_03002f54 = 0;
  }
  sub_08040160(puVar1);
  return;
}


/* sub_080245D0 @ 0x080245D0 */

void sub_080245D0(void)

{
  sub_0802426E();
  return;
}


/* sub_080245D8 @ 0x080245D8 */

undefined4 sub_080245D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_03002f54 != 0) &&
     (iVar2 = *(int *)(param_1 + 0x118) + 1, *(int *)(param_1 + 0x118) = iVar2, 10 < iVar2)) {
    sub_08040182();
    return 2;
  }
  uVar1 = sub_080067F4();
  return uVar1;
}


/* sub_08024600 @ 0x08024600 */

undefined4
sub_08024600(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*DAT_03004a8c + 0x24);
  iVar2 = __call_via_r1(DAT_03004a8c,iVar2 + *DAT_03004a8c,iVar2,param_4,param_4);
  if (iVar2 == 0) {
    *param_2 = (char)DAT_03002f54;
    uVar1 = 1;
  }
  else {
    sub_08049144((int)param_2,0x3002f58,0x10);
    uVar1 = 0x10;
  }
  return uVar1;
}


/* sub_08024630 @ 0x08024630 */

void sub_08024630(undefined4 param_1,char *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 - 3U < 5) {
    iVar2 = (uint)*(byte *)(param_3 + 0x8024641) * 2;
    switch(param_3) {
    case 5:
      iVar1 = *(int *)(*DAT_03004a8c + 0x24);
      iVar2 = __call_via_r1(DAT_03004a8c,iVar1 + *DAT_03004a8c,iVar1,iVar2,param_4);
      if (iVar2 == 0) {
        sub_08049144(0x3002f58,(int)param_2,0x10);
        DAT_03002f54 = 1;
      }
      else {
        DAT_03002f54 = (uint)(*param_2 != '\0');
      }
      break;
    case 6:
    case 7:
      iVar1 = *(int *)(*DAT_03004a8c + 0x24);
      iVar2 = __call_via_r1(DAT_03004a8c,iVar1 + *DAT_03004a8c,iVar1,iVar2,param_4);
      if (iVar2 == 0) {
        DAT_03002f54 = 1;
      }
    }
  }
  return;
}


/* sub_080246B4 @ 0x080246B4 */

undefined4 * sub_080246B4(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x58), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x40,param_3);
    *param_1 = &_0804BFCC;
    sub_08011568(param_1);
    cVar2 = DAT_03002fb8 + '\x01';
    bVar5 = DAT_03002fb8 == '\0';
    DAT_03002fb8 = cVar2;
    if (bVar5) {
      DAT_03002fba = sub_0801124C(&DAT_03001c4c,0x1300);
      sub_08049138((int)(&DAT_06010000 + DAT_03002fba * 0x20),0x872c3b8,0x1300);
    }
    iVar3 = *param_2;
    iVar4 = param_2[1];
    bVar1 = *(byte *)(param_3 + 0x10);
    param_1[0x14] = 0;
    param_1[8] = iVar3 << 8;
    param_1[9] = iVar4 << 8;
    *(undefined1 *)(param_1 + 0x11) = 0;
    param_1[0x10] = 0;
    param_1[0x15] = &gUnknown_0872D6B8 + (uint)bVar1 * 0x3c;
    param_1[6] = &gUnknown_0872D6B8 + (uint)bVar1 * 0x3c;
    iVar3 = sub_0803FACC(0xc0);
    iVar4 = (uint)bVar1 * 8;
    param_1[0x12] = iVar3 + *(int *)(&DAT_0872c398 + iVar4) + -0x60;
    iVar3 = sub_0803FACC(0xc0);
    param_1[0x13] = iVar3 + *(int *)(&DAT_0872c39c + iVar4) + -0x60;
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_08024768 @ 0x08024768 */

void sub_08024768(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804BFCC;
  DAT_03002fb8 = DAT_03002fb8 + -1;
  if ((DAT_03002fb8 == '\0') && (DAT_03002fba != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)DAT_03002fba);
    DAT_03002fba = -1;
  }
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


/* sub_080247BE @ 0x080247BE */

void sub_080247BE(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  int iStack_14;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar2;
  uVar3 = iVar2 >> 2;
  uVar4 = uVar3 & 0xff;
  *(char *)(param_1 + 0x44) = (char)uVar3;
  if (uVar4 < 5) {
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x54) + uVar4 * 0xc;
    sub_08019B4E(param_1);
    piVar1 = DAT_03001c34;
    if ((((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x40) == 0)) &&
       ((DAT_03001c34 != (int *)0x0 && (DAT_03001c34[0x73] != 0)))) {
      iStack_38 = *(int *)(param_1 + 0x20) >> 8;
      iStack_40 = iStack_38 + -8;
      iStack_34 = *(int *)(param_1 + 0x24) >> 8;
      iStack_3c = iStack_34 + -8;
      iStack_38 = iStack_38 + 8;
      iStack_34 = iStack_34 + 8;
      sub_0800FE78(&iStack_54,DAT_03001c34);
      if (((iStack_54 < iStack_38) && ((iStack_40 < iStack_4c && (iStack_50 < iStack_34)))) &&
         (iStack_3c < iStack_48)) {
        uStack_24 = *(undefined4 *)(param_1 + 0x1c);
        auStack_30[0] = *(undefined1 *)(param_1 + 0x10);
        puStack_28 = &gUnknown_086B80A8;
        uStack_2c = sub_08054A64(0x424ccccd);
        uStack_44 = *(undefined1 *)(param_1 + 0x11);
        *(undefined4 *)(param_1 + 0x40) = 1;
        if (0x80 < DAT_03000f94 - DAT_03002fbc) {
          DAT_03002fbc = DAT_03000f94;
        }
        iStack_14 = param_1;
        sub_0800E9D8(piVar1,auStack_30);
        __call_via_r2(piVar1,auStack_30,*(int *)(*piVar1 + 0x5c) + *piVar1);
        iVar2 = __call_via_r2(piVar1,0x17,*(int *)(*piVar1 + 0x34) + *piVar1);
        if (iVar2 != 0) {
          __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
        }
      }
    }
  }
  else {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}


/* sub_080248DC @ 0x080248DC */

undefined4 sub_080248DC(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x18) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x38) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x3c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (uint)DAT_03002fba + (*(int *)(*(int *)(param_1 + 0x18) + 8) + -0x872c3b8 >> 5) & 0x3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffffc00;
  puVar1[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_08024978 @ 0x08024978 */

undefined4 sub_08024978(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 == 10) {
    cVar2 = DAT_03002fb8 + -1;
    bVar3 = DAT_03002fb8 == '\x01';
    DAT_03002fb8 = cVar2;
    if ((bVar3) && (DAT_03002fba != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)DAT_03002fba,param_3,2,param_4);
      DAT_03002fba = -1;
    }
    uVar1 = 0;
  }
  else if (param_2 == 0xb) {
    cVar2 = DAT_03002fb8 + '\x01';
    bVar3 = DAT_03002fb8 == '\0';
    DAT_03002fb8 = cVar2;
    if (bVar3) {
      DAT_03002fba = sub_0801124C(&DAT_03001c4c,0x1300);
      sub_08049138((int)(&DAT_06010000 + DAT_03002fba * 0x20),0x872c3b8,0x1300);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}


/* sub_080249E0 @ 0x080249E0 */

void sub_080249E0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if ((0x13ff < iVar1) && (3 < 0x80 - DAT_03001c50)) {
    uVar2 = sub_080246B4(0,param_1,param_2);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_08024A2C @ 0x08024A2C */

undefined4 * sub_08024A2C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_080499D4;
  }
  return param_1;
}


/* sub_08024A54 @ 0x08024A54 */

undefined4 * sub_08024A54(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08009AEC(puVar1,param_1);
    *puVar1 = &_080499D4;
  }
  return puVar1;
}


/* sub_08024A7C @ 0x08024A7C */

void sub_08024A7C(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049370;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 6) = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}


/* sub_08024A9C @ 0x08024A9C */

void sub_08024A9C(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int a0;
  short *a1;
  short *psVar1;
  int iVar2;
  int a2;
  uint unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 in_cr6;
  undefined8 uVar5;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar3 = auStack_28;
  sub_08011B04(&DAT_03001c4c);
  sub_0804912C(0x6000000,0,0x40);
  a2 = 0x40;
  a0 = sub_08049138(0x600ddc0,0x873198c,0x40);
  iVar2 = 0x3770377;
  if (param_2 == 0) {
    iVar2 = 0;
    a2 = -0x7fe4ad2;
  }
  if (param_2 < 1) {
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(iVar2 + 4) = param_4;
    *(int *)(iVar2 + 8) = param_2;
    *(int **)(iVar2 + 0xc) = param_1;
    *(undefined4 *)(iVar2 + 0x10) = unaff_r10;
    *(undefined4 *)(iVar2 + 0x14) = unaff_r11;
    *(undefined4 *)(iVar2 + 0x18) = in_r12;
    iVar2 = iVar2 + 0x1c;
  }
  sub_0804912C(a0,iVar2,a2);
  *(undefined1 *)(param_1 + 1) = 1;
  a1 = (short *)sub_0803D5B8(0x1000);
  Wfz_LoadContainer(&UNK_087315e8,a1);
  sub_08049138(0x600de00,(int)a1,0xa00);
  Wfz_LoadContainer(&gUnknown_087317C8,a1);
  iVar2 = 0;
  psVar1 = a1;
  do {
    iVar2 = iVar2 + 1;
    *psVar1 = *psVar1 + (short)(unaff_r7 >> 1) + -0x88;
    psVar1 = psVar1 + 1;
  } while (iVar2 < (int)(unaff_r7 >> 1));
  sub_08049138(0x600e800,(int)a1,unaff_r7);
  uVar5 = __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
  uVar4 = (int)uVar5 == 0;
  if (!(bool)uVar4) {
    Wfz_LoadContainer(&DAT_087318b4,a1);
    sub_08049138(0x600dcc0,(int)a1,0x100);
    uStack_1c = 2;
    uStack_18 = 2;
    uVar4 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uVar5 = sub_0803DA10(&uStack_24,0x600e800,0x373);
  }
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  if (!(bool)uVar4) {
    coprocessor_store(8,in_cr6,unaff_r8);
    puVar3 = *(undefined1 **)(iVar2 + -4);
    iVar2 = *(int *)(iVar2 + -0x18);
  }
  iVar2 = __call_via_r1((int)uVar5,iVar2);
  if (iVar2 != 0) {
    Wfz_LoadContainer(&DAT_08731914,a1);
    sub_08049138(0x600dbc0,(int)a1,0x100);
    *(undefined4 *)(puVar3 + 4) = 0x1c;
    *(undefined4 *)(puVar3 + 0xc) = 0x1e;
    *(undefined4 *)(puVar3 + 0x10) = 2;
    *(undefined4 *)(puVar3 + 8) = 0;
    sub_0803DA10(puVar3 + 4,0x600e800,0x36f);
  }
  sub_0803D63C(a1);
  REG_BG0CNT = 0x1d80;
  REG_BG3CNT = 0x1f83;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  sub_080115B0(&DAT_03001c4c);
  sub_0801157E(&DAT_03001c4c);
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}


/* sub_08024BE6 @ 0x08024BE6 */

void sub_08024BE6(int param_1)

{
  REG_BLDCNT = 0x3e5e;
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}


/* sub_08024BF2 @ 0x08024BF2 */

void sub_08024BF2(int param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    REG_BLDCNT = 0x3f5f;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}


/* sub_08024C04 @ 0x08024C04 */

undefined4 sub_08024C04(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 6) == '\x01') {
    iVar2 = *(int *)(*param_1 + 0x34);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    sub_0803D850();
    uVar1 = 0;
  }
  else if (*(char *)((int)param_1 + 6) == '\x02') {
    iVar2 = *(int *)(*param_1 + 0x38);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    sub_0803D850();
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_08024C38 @ 0x08024C38 */

void sub_08024C38(int *param_1)

{
  __call_via_r1(param_1,*(int *)(*param_1 + 0x3c) + *param_1);
  sub_08011A1E(&DAT_03001c4c);
  sub_080115B0(&DAT_03001c4c);
  return;
}


/* sub_08024C54 @ 0x08024C54 */

undefined4 sub_08024C54(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_214 [256];
  undefined1 auStack_114 [256];
  
  sub_0801157E(&DAT_03001c4c);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x40) + *param_1);
  if (param_1[2] == 0) {
    if (((int)((uint)DAT_03003304 << 0x16) < 0) &&
       (iVar3 = __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1), iVar3 != 0)) {
      *(undefined1 *)((int)param_1 + 6) = 1;
      REG_BLDCNT = 0x3e5e;
      param_1[2] = 1;
      Wfz_LoadContainer(&DAT_087318b4,auStack_214);
      sub_08049138(0x600dcc0,(int)auStack_114,0x100);
    }
    if (((int)((uint)DAT_03003304 << 0x17) < 0) &&
       (iVar3 = __call_via_r1(param_1,*(int *)(*param_1 + 0x30) + *param_1), iVar3 != 0)) {
      *(undefined1 *)((int)param_1 + 6) = 2;
      REG_BLDCNT = 0x3e5e;
      param_1[2] = 1;
      Wfz_LoadContainer(&DAT_08731914,auStack_214);
      sub_08049138(0x600dbc0,(int)auStack_114,0x100);
    }
    if (((int)((uint)DAT_03003304 << 0x1e) < 0) || ((int)((uint)DAT_03003304 << 0x1d) < 0)) {
      __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
    }
    if (*(byte *)((int)param_1 + 5) < 0x10) {
      cVar1 = *(byte *)((int)param_1 + 5) + 1;
      *(char *)((int)param_1 + 5) = cVar1;
      REG_BLDALPHA = cVar1;
    }
  }
  else {
    cVar1 = *(char *)((int)param_1 + 5) + -1;
    *(char *)((int)param_1 + 5) = cVar1;
    REG_BLDALPHA = cVar1;
    if (*(char *)((int)param_1 + 5) == '\0') {
      uVar2 = __call_via_r1(param_1,*(int *)(*param_1 + 0x28) + *param_1);
      return uVar2;
    }
  }
  return 0;
}


/* sub_08024D94 @ 0x08024D94 */

void sub_08024D94(ushort *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint local_24;
  
  *(undefined **)(param_2 + 0xc) = &gUnknown_0806E050;
  param_2[3] = 2;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  *(undefined4 *)(param_2 + 4) = 0x38;
  *(undefined4 *)(param_2 + 8) = 0x90;
  param_2[1] = 8;
  *param_2 = 1;
  if (param_1 != (ushort *)0x0) {
    sub_0803DADA(param_2,*(undefined4 *)(&gUIStringPtrs + (uint)*param_1 * 4));
  }
  param_2[3] = 2;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 8) = 0x16;
  *(undefined4 *)(param_2 + 4) = 0x70;
  sub_0803DADA(param_2,&gUnknown_080588BC);
  *(undefined4 *)(param_2 + 8) = 0x20;
  *(undefined4 *)(param_2 + 4) = 0x70;
  sub_0803DADA(param_2,&gUnknown_080588CA);
  *(undefined4 *)(param_2 + 8) = 0x2a;
  *(undefined4 *)(param_2 + 4) = 0x70;
  sub_0803DADA(param_2,&gUnknown_080588DA);
  *(undefined4 *)(param_2 + 8) = 0x34;
  *(undefined4 *)(param_2 + 4) = 0x70;
  sub_0803DADA(param_2,&gUnknown_080588EA);
  *param_2 = 2;
  param_2[3] = 2;
  uVar4 = 0xffffffff;
  local_24 = 0xffffffff;
  uVar5 = uVar4;
  if ((param_1 != (ushort *)0x0) && (iVar1 = *(int *)(param_1 + 6), iVar1 != -1)) {
    if (iVar1 < 0) {
      iVar2 = (iVar1 + 2) * -0x68;
      if (param_3 == -1) {
        param_3 = (int)(short)(&DAT_03001576)[(iVar1 + 2) * -0x34];
      }
      local_24 = (uint)*(ushort *)(&DAT_030015ac + iVar2);
      uVar4 = (uint)*(ushort *)(&DAT_030015ae + iVar2);
      uVar5 = (uint)*(ushort *)(&DAT_030015b0 + iVar2);
    }
    else {
      iVar1 = iVar1 * 0x1c;
      if (param_3 == -1) {
        param_3 = *(int *)(&DAT_08711278 + iVar1);
      }
      local_24 = (uint)(byte)(&DAT_08711281)[iVar1];
      uVar4 = (uint)(byte)(&DAT_08711282)[iVar1];
      uVar5 = (uint)(byte)(&DAT_08711283)[iVar1];
    }
  }
  *(undefined4 *)(param_2 + 4) = 0xa0;
  *(undefined4 *)(param_2 + 8) = 0x16;
  if (param_3 == -1) {
    pcVar3 = sub_08024F2C;
  }
  else {
    pcVar3 = (code *)0x8024f34;
  }
  sub_0803DC96(param_2,pcVar3);
  *(undefined4 *)(param_2 + 4) = 0xa0;
  *(undefined4 *)(param_2 + 8) = 0x20;
  if (local_24 == 0xffffffff) {
    pcVar3 = sub_08024F2C;
  }
  else {
    pcVar3 = (code *)0x8024f34;
  }
  sub_0803DC96(param_2,pcVar3,local_24);
  *(undefined4 *)(param_2 + 4) = 0xa0;
  *(undefined4 *)(param_2 + 8) = 0x2a;
  if (uVar4 == 0xffffffff) {
    pcVar3 = sub_08024F2C;
  }
  else {
    pcVar3 = (code *)0x8024f34;
  }
  sub_0803DC96(param_2,pcVar3,uVar4);
  *(undefined4 *)(param_2 + 4) = 0xa0;
  *(undefined4 *)(param_2 + 8) = 0x34;
  if (uVar5 == 0xffffffff) {
    pcVar3 = sub_08024F2C;
  }
  else {
    pcVar3 = (code *)0x8024f34;
  }
  sub_0803DC96(param_2,pcVar3,uVar5);
  if ((param_1 == (ushort *)0x0) || (*(int *)(param_1 + 4) == 0)) {
    *(undefined4 *)(param_2 + 4) = 200;
    *(undefined4 *)(param_2 + 8) = 0x22;
    *param_2 = 1;
    sub_0803DD66(param_2,0x38,L"No\nPortrait\nData");
  }
  return;
}


/* sub_08024F2C @ 0x08024F2C */

undefined4 * sub_08024F2C(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xb20), param_1 != (undefined4 *)0x0)) {
    sub_08024A7C(param_1);
    *param_1 = &_0804A950;
    uVar2 = 0;
    piVar3 = param_1 + 4;
    piVar4 = param_1 + 0xed;
    param_1[4] = 0;
    *piVar4 = 0;
    do {
      if (((uint)(byte)(&DAT_0300112d)[(int)uVar2 >> 3] & 1 << (uVar2 & 7)) != 0) {
        iVar6 = *piVar3;
        *piVar3 = iVar6 + 1;
        piVar3[iVar6 + 1] = uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xe8);
    sVar5 = 0;
    iVar6 = 0;
    if (0 < (int)param_1[4]) {
      do {
        sVar1 = *(short *)(&gUnknown_0874D380 + piVar3[iVar6 + 1] * 0x10);
        if (sVar5 == sVar1) {
          piVar4[*piVar4 * 2] = iVar6;
        }
        else {
          iVar7 = *piVar4;
          *piVar4 = iVar7 + 1;
          piVar4[iVar7 * 2 + 1] = iVar6;
          piVar4[iVar7 * 2 + 2] = iVar6;
          sVar5 = sVar1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_1[4]);
    }
    param_1[0x2be] = 0;
    param_1[0x2c3] = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    param_1[0x2c4] = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (*piVar4 == 0) {
      param_1[0x2c5] = 0xffffffff;
    }
    else {
      param_1[0x2c5] = param_1[0xee];
    }
  }
  return param_1;
}


/* sub_08024F3C @ 0x08024F3C */

undefined4 * sub_08024F3C(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xb20), param_1 != (undefined4 *)0x0)) {
    sub_08024A7C(param_1);
    *param_1 = &_0804A950;
    uVar2 = 0;
    piVar3 = param_1 + 4;
    piVar4 = param_1 + 0xed;
    param_1[4] = 0;
    *piVar4 = 0;
    do {
      if (((uint)(byte)(&DAT_0300112d)[(int)uVar2 >> 3] & 1 << (uVar2 & 7)) != 0) {
        iVar6 = *piVar3;
        *piVar3 = iVar6 + 1;
        piVar3[iVar6 + 1] = uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xe8);
    sVar5 = 0;
    iVar6 = 0;
    if (0 < (int)param_1[4]) {
      do {
        sVar1 = *(short *)(&gUnknown_0874D380 + piVar3[iVar6 + 1] * 0x10);
        if (sVar5 == sVar1) {
          piVar4[*piVar4 * 2] = iVar6;
        }
        else {
          iVar7 = *piVar4;
          *piVar4 = iVar7 + 1;
          piVar4[iVar7 * 2 + 1] = iVar6;
          piVar4[iVar7 * 2 + 2] = iVar6;
          sVar5 = sVar1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_1[4]);
    }
    param_1[0x2be] = 0;
    param_1[0x2c3] = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    param_1[0x2c4] = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (*piVar4 == 0) {
      param_1[0x2c5] = 0xffffffff;
    }
    else {
      param_1[0x2c5] = param_1[0xee];
    }
  }
  return param_1;
}


/* sub_08025004 @ 0x08025004 */

void sub_08025004(int param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_1c = 0;
  local_18 = *(undefined4 *)(param_1 + 0xb18);
  local_14 = 0x68;
  local_10 = *(int *)(param_1 + 0xb18) + 0x38;
  sub_0804915C(*(int *)(param_1 + 0xb0c),0x6009800,(int)&local_1c);
  *(uint *)(*(int *)(param_1 + 0xafc) + 0x20) = (uint)(0 < *(int *)(param_1 + 0xb18));
  *(uint *)(*(int *)(param_1 + 0xb00) + 0x20) =
       (uint)(*(int *)(param_1 + 0xb18) < *(int *)(param_1 + 0xb1c));
  return;
}


/* sub_08025056 @ 0x08025056 */

void sub_08025056(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 local_1064;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined1 auStack_1054 [4092];
  int local_58;
  undefined1 local_54 [3];
  undefined1 local_51;
  undefined4 local_50;
  int local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = param_1 + 0x10;
  puVar6 = (undefined *)0x0;
  if (*(int *)(param_1 + 0xb14) != -1) {
    puVar6 = &gUnknown_0874D380 + *(int *)(*(int *)(param_1 + 0xb14) * 4 + local_1c + 4) * 0x10;
  }
  local_18 = param_1;
  if (*(int *)(param_1 + 0xb0c) != 0) {
    sub_0803F58C(*(int *)(param_1 + 0xb0c),1);
    *(undefined4 *)(param_1 + 0xb0c) = 0;
  }
  sub_0803F540(local_54,0xf0,0xa0);
  Wfz_LoadContainer(&DAT_087319e0,local_30);
  sub_08024D94(puVar6,local_54,0xffffffff);
  if ((puVar6 != (undefined *)0x0) && (*(int *)(puVar6 + 8) != 0)) {
    uVar1 = sub_08011F20(*(undefined4 *)(puVar6 + 8));
    Wfz_LoadContainer(uVar1,auStack_1054);
    local_1064 = 0xa8;
    uStack_1060 = 8;
    uStack_105c = 0xe8;
    uStack_1058 = 0x48;
    sub_0803F922(local_54,auStack_1054,&local_1064);
  }
  sub_0803F9B8(local_54,&DAT_06000040);
  local_20 = local_18 + 0xac0;
  piVar5 = (int *)(local_18 + 0x3b4);
  if (*(char *)(local_18 + 0xe) == '\0') {
    local_2c = 0x68;
    local_28 = 0x38;
    local_24 = 0x16c0;
    local_3c = 0x68;
    local_38 = 0x38;
    sub_08046E40(local_30,0,0x16c0);
    local_54[0] = 1;
    iVar2 = *piVar5;
    if (iVar2 == 0) {
      local_51 = 3;
      local_4c = 0x20;
      local_50 = 0x34;
      sub_0803DADA(local_54,L"Database Empty");
      *(undefined4 *)(*(int *)(param_1 + 0xb04) + 0x20) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xb08) + 0x20) = 0;
    }
    else {
      local_58 = *(int *)(param_1 + 0xb10) + -3;
      if (iVar2 <= *(int *)(param_1 + 0xb10) + 4) {
        local_58 = iVar2 + -7;
      }
      if (local_58 < 0) {
        local_58 = 0;
      }
      iVar2 = 0;
      do {
        iVar3 = iVar2 + local_58;
        if (*piVar5 <= iVar3) break;
        local_51 = 2;
        if (*(int *)(param_1 + 0xb10) != iVar3) {
          local_51 = 0x75;
        }
        local_4c = iVar2 * 8 + 7;
        local_50 = 0x34;
        sub_0803DADA(local_54,*(undefined4 *)
                               (&gUIStringPtrs +
                               (uint)*(ushort *)
                                      (&gUnknown_0874D380 +
                                      *(int *)(piVar5[iVar3 * 2 + 1] * 4 + local_1c + 4) * 0x10) * 4
                               ));
        iVar2 = iVar2 + 1;
      } while (iVar2 < 7);
    }
    *(uint *)(*(int *)(local_20 + 0x3c) + 0x20) = (uint)(2 < *(int *)(param_1 + 0xb10));
    *(uint *)(*(int *)(param_1 + 0xb00) + 0x20) = (uint)(*(int *)(param_1 + 0xb10) < *piVar5 + -4);
    sub_0803F9B8(local_54,&DAT_06009800);
  }
  if (*(int *)(local_20 + 0x38) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(local_20 + 0x38));
  }
  if (puVar6 == (undefined *)0x0) {
    *(undefined4 *)(local_20 + 0x38) = 0;
  }
  else {
    piVar4 = (int *)sub_080272EC(0,puVar6);
    *(int **)(local_20 + 0x38) = piVar4;
    if (*(char *)(local_18 + 0xe) != '\0') {
      __call_via_r2(piVar4,2,*(int *)(*piVar4 + 0x28) + *piVar4);
    }
    sub_0801191A(&DAT_03001c4c,*(undefined4 *)(local_20 + 0x38));
  }
  sub_0803F58C(local_54,0);
  if (*(char *)(local_18 + 0xe) == '\x01') {
    iVar2 = sub_0803F540(0,0x68,*(int *)(param_1 + 0xb1c) + 0x38);
    *(int *)(param_1 + 0xb0c) = iVar2;
    *(undefined4 **)(iVar2 + 0xc) = &gUnknown_0806EE6C;
    *(undefined1 *)(*(int *)(param_1 + 0xb0c) + 3) = 2;
    iVar2 = *(int *)(param_1 + 0xb0c);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0xe;
    *(undefined1 *)(*(int *)(param_1 + 0xb0c) + 1) = 0x10;
    sub_08046E40(*(undefined4 *)(*(int *)(param_1 + 0xb0c) + 0x24),0,
                 *(undefined4 *)(*(int *)(param_1 + 0xb0c) + 0x30));
    sub_0803DD66(*(undefined4 *)(param_1 + 0xb0c),0x68,
                 *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(puVar6 + 2) * 4));
    sub_08025004(local_18);
  }
  else {
    uVar1 = 0;
    if ((*piVar5 != 0) &&
       (piVar5[*(int *)(param_1 + 0xb10) * 2 + 1] != piVar5[*(int *)(param_1 + 0xb10) * 2 + 2])) {
      uVar1 = 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xb04) + 0x20) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0xb08) + 0x20) = uVar1;
  }
  return;
}


/* sub_08025354 @ 0x08025354 */

undefined4 sub_08025354(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [36];
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar2 = sub_08024C04(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0xb14) * 4 + param_1 + 0x14);
      uStack_40 = 0x68;
      iStack_3c = 0x38;
      uStack_48 = 0;
      uStack_44 = 0;
      sub_0803DA78(auStack_38,&gUnknown_0806EE6C,&uStack_48);
      uStack_44 = *(undefined4 *)
                   (&gUIStringPtrs + (uint)*(ushort *)(&DAT_0874d382 + iVar1 * 0x10) * 4);
      iVar1 = 0;
      do {
        sub_0803DE6A(auStack_38,uStack_44,0x68,&uStack_48);
        iVar1 = iVar1 + 1;
      } while (iStack_3c == 0);
      iVar1 = iVar1 * 0x10 + -0x38;
      *(int *)(param_1 + 0xb1c) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0xb1c) = 0;
      }
      *(undefined4 *)(param_1 + 0xb18) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    sub_08025056(param_1);
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_080253EA @ 0x080253EA */

void sub_080253EA(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_08024BE6();
    REG_BLDCNT = 0x3e41;
  }
  else {
    sub_08024BF2();
  }
  return;
}


/* sub_08025404 @ 0x08025404 */

void sub_08025404(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x3b4);
  if (((int)((uint)DAT_03003304 << 0x19) < 0) && (*(int *)(param_1 + 0xb10) != 0)) {
    iVar1 = *(int *)(param_1 + 0xb10) + -1;
    *(int *)(param_1 + 0xb10) = iVar1;
    *(int *)(param_1 + 0xb14) = piVar2[iVar1 * 2 + 1];
    sub_08025056(param_1);
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
  }
  if ((int)((uint)DAT_03003304 << 0x18) < 0) {
    if (*(int *)(param_1 + 0xb10) < *piVar2 + -1) {
      iVar1 = *(int *)(param_1 + 0xb10) + 1;
      *(int *)(param_1 + 0xb10) = iVar1;
      *(int *)(param_1 + 0xb14) = piVar2[iVar1 * 2 + 1];
      sub_08025056(param_1);
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    }
  }
  if ((*piVar2 != 0) && ((DAT_03003304 & 1) != 0)) {
    sub_08024BE6(param_1);
    REG_BLDCNT = 0x3e41;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}


/* sub_080254A8 @ 0x080254A8 */

void sub_080254A8(int *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((int)((uint)DAT_03003302 << 0x19) < 0) && (param_1[0x2c6] != 0)) {
    param_1[0x2c6] = param_1[0x2c6] + -1;
    sub_08025004(param_1);
    cVar1 = '\x01';
  }
  if ((int)((uint)DAT_03003302 << 0x18) < 0) {
    if (param_1[0x2c6] < param_1[0x2c7]) {
      param_1[0x2c6] = param_1[0x2c6] + 1;
      sub_08025004(param_1);
      cVar1 = '\x01';
    }
  }
  if ((char)param_1[3] != cVar1) {
    *(char *)(param_1 + 3) = cVar1;
  }
  if ((DAT_03003304 & 1) != 0) {
    __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
  }
  return;
}


/* sub_08025510 @ 0x08025510 */

void sub_08025510(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x3b4);
  if (*piVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xb10);
    iVar4 = piVar1[iVar2 * 2 + 1];
    if (iVar4 != piVar1[iVar2 * 2 + 2]) {
      if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
        iVar3 = *(int *)(param_1 + 0xb14) + -1;
        *(int *)(param_1 + 0xb14) = iVar3;
        if (iVar3 < iVar4) {
          *(int *)(param_1 + 0xb14) = piVar1[iVar2 * 2 + 2];
        }
        sub_08025056(param_1);
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      }
      if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
        iVar4 = piVar1[*(int *)(param_1 + 0xb10) * 2 + 2];
        iVar2 = *(int *)(param_1 + 0xb14) + 1;
        *(int *)(param_1 + 0xb14) = iVar2;
        if (iVar4 < iVar2) {
          *(int *)(param_1 + 0xb14) = piVar1[*(int *)(param_1 + 0xb10) * 2 + 1];
        }
        sub_08025056(param_1);
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      }
    }
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08025404(param_1);
  }
  else {
    sub_080254A8(param_1);
  }
  return;
}


/* sub_080255C4 @ 0x080255C4 */

void sub_080255C4(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  sub_0804912C(0x6000000,0,0x40);
  uStack_1c = 0x1e;
  uStack_18 = 0x14;
  uStack_24 = 0;
  uStack_20 = 0;
  sub_0803DA10(&uStack_24,&DAT_0600f800,1);
  sub_0804912C(0x600f000,0,0x800);
  uStack_24 = 0xf;
  uStack_20 = 0xb;
  uStack_1c = 0x1c;
  uStack_18 = 0x12;
  sub_0803DA10(&uStack_24,&DAT_0600f000,0x260);
  uVar1 = sub_080271D0(0,0);
  *(undefined4 *)(param_1 + 0xb00) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  uVar1 = sub_080271D0(0,1);
  *(undefined4 *)(param_1 + 0xafc) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  uVar1 = sub_080271D0(0,2);
  *(undefined4 *)(param_1 + 0xb04) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  uVar1 = sub_080271D0(0,3);
  *(undefined4 *)(param_1 + 0xb08) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  sub_08025056(param_1);
  REG_BG2CNT = 0x1e83;
  REG_BG3CNT = 0x1f83;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BLDCNT = 0x3f5f;
  REG_DISPCNT = 0x1c40;
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}


/* sub_080256F0 @ 0x080256F0 */

undefined4 * sub_080256F0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x8044), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08024A7C(param_1);
  *param_1 = &_0804A4E8;
  param_1[0x200f] = 0;
  param_1[0x200b] = 0;
  param_1[0x200c] = 0;
  param_1[0x200d] = 0xf0;
  param_1[0x200e] = param_1[0x200c] + 0xa0;
  uVar1 = sub_08004B08(&DAT_03001068);
  param_1[0x2010] = uVar1;
  return param_1;
}


/* sub_0802573C @ 0x0802573C */

void sub_0802573C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0802574C @ 0x0802574C */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0802574C(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *unaff_r5;
  ushort *unaff_r6;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  uint in_r12;
  undefined1 *puVar16;
  byte *pbVar17;
  undefined *puVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  int *piVar24;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined1 auStack_100 [224];
  undefined4 uStack_20;
  int *piStack_18;
  
  puVar16 = auStack_100;
  puVar3 = (undefined4 *)auStack_100;
  sub_08024A9C(param_1,0);
  puVar8 = (undefined4 *)0x8000;
  sub_0804912C(param_1 + 0xc,0,0x8000);
  puVar11 = (undefined4 *)0x0;
  pbVar13 = (byte *)(param_1 + 0x801c);
  pbVar13[0] = 0;
  pbVar13[1] = 0;
  pbVar13[2] = 0;
  pbVar13[3] = 0;
  *(undefined4 *)(param_1 + 0x8020) = 0;
  *(undefined4 *)(param_1 + 0x8024) = 0;
  *(undefined4 *)(param_1 + 0x8028) = 0;
  *(undefined4 *)(param_1 + 0x800c) = 0;
  *(undefined4 *)(param_1 + 0x8010) = 0;
  *(undefined4 *)(param_1 + 0x8014) = 0;
  *(undefined4 *)(param_1 + 0x8018) = 0;
  puVar5 = (undefined4 *)0x0;
  piStack_18 = (int *)(param_1 + 0x8040);
  uStack_20 = 0;
  iVar1 = *(int *)(param_1 + 0x8040);
  if (iVar1 == 0) {
    pbVar17 = (byte *)0x0;
    puVar3 = (undefined4 *)0x0;
    puVar16 = auStack_100;
    goto _0802587A;
  }
  uVar2 = *(uint *)(iVar1 + 0x14);
  in_r12 = 0;
  bVar21 = uVar2 == 0;
  bVar19 = true;
  bVar20 = false;
  puVar5 = unaff_r8;
  pbVar17 = pbVar13;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      unaff_r5 = *(undefined4 **)(**(int **)(puVar16 + 0xe8) + in_r12 * 4 + 0x18);
      puVar12 = &gUnknown_08732360;
      uVar9 = (uint)(*(ushort *)((int)unaff_r5 + 2) >> 3);
      bVar20 = SCARRY4((int)(&DAT_03001068 + uVar9),0x80);
      puVar11 = (undefined4 *)(*(ushort *)((int)unaff_r5 + 2) & 7);
      puVar8 = (undefined4 *)(1 << (int)puVar11);
      bVar19 = ((uint)*(byte *)(uVar9 + 0x30010f5) & (uint)puVar8) == 0;
      bVar21 = false;
      unaff_r8 = puVar5;
      if (bVar19) {
        pbVar14 = pbVar17;
        if (bVar20) {
          puVar8 = (undefined4 *)*puVar5;
          unaff_r6 = (ushort *)puVar5[1];
          pbVar13 = (byte *)puVar5[2];
          unaff_r8 = (undefined4 *)puVar5[3];
          unaff_r9 = (undefined4 *)puVar5[4];
          unaff_r11 = puVar5[5];
          pbVar14 = (byte *)puVar5[6];
        }
        puVar3 = puVar8;
        if (bVar19) {
          puVar3 = (undefined4 *)((int)puVar8 - ((int)puVar8 >> 0x10));
          *(char *)puVar8 = (char)pbVar13;
        }
        if (bVar19 || bVar20) {
          bVar20 = SBORROW4((int)unaff_r5,(int)puVar3 >> 0x1f);
          puVar3 = (undefined4 *)((int)unaff_r5 - ((int)puVar3 >> 0x1f));
          bVar21 = (int)puVar3 < 0;
          bVar19 = puVar3 == (undefined4 *)0x0;
        }
        pbVar17 = pbVar14;
        if (!bVar19) {
          pbVar17 = pbVar14 + -0xa0;
          coprocessor_store(0xd,in_cr1,pbVar14);
        }
        puVar5 = (undefined4 *)0x0;
        if (bVar20) {
          _SHIFT = puVar16;
          puRamffffffec = puVar11;
          puRamfffffff0 = unaff_r5;
          puRamfffffff4 = unaff_r9;
          iRamfffffff8 = unaff_r10;
          uRamfffffffc = in_r12;
        }
      }
      else {
        puVar12 = (undefined4 *)unaff_r5[4];
        puVar11 = (undefined4 *)(((int)puVar12 - unaff_r5[2]) * (unaff_r5[3] - unaff_r5[1]));
        puVar3 = unaff_r5 + 5;
        unaff_r6 = (ushort *)((int)unaff_r5 + (int)puVar11 * 2 + 0x24);
        bVar21 = (int)unaff_r6 < 0;
        puVar5 = (undefined4 *)*puVar3;
      }
      pbVar14 = pbVar13;
      if (bVar21) {
        pbVar14 = pbVar13 + (int)puVar11 * -0x20000;
        unaff_r6 = (ushort *)(uint)*pbVar13;
      }
      bVar20 = puVar11 <= puVar5;
      bVar23 = SBORROW4((int)puVar5,(int)puVar11);
      bVar21 = (int)puVar5 - (int)puVar11 < 0;
      bVar19 = puVar5 == puVar11;
      if (bVar19) {
        puVar11 = (undefined4 *)puVar3[1];
        puVar12 = (undefined4 *)puVar3[3];
        bVar20 = puVar12 <= puVar11;
        bVar23 = SBORROW4((int)puVar11,(int)puVar12);
        bVar21 = (int)puVar11 - (int)puVar12 < 0;
        bVar19 = puVar11 == puVar12;
        if (!bVar19) goto _080257FE;
      }
      else {
_080257FE:
        if (!bVar20 || bVar19) {
          unaff_r6 = (ushort *)((uint)unaff_r9 ^ 0x3a0000);
          bVar21 = (int)unaff_r6 < 0;
          bVar19 = unaff_r6 == (ushort *)0x0;
        }
        if (bVar21) {
          bVar23 = SCARRY4(unaff_r10,0xbb0000);
          unaff_r6 = (ushort *)(unaff_r10 + 0xbb0000);
          bVar21 = (int)unaff_r6 < 0;
          bVar19 = unaff_r6 == (ushort *)0x0;
        }
        if (bVar23) {
          return *(undefined4 *)(unaff_r10 + -0x14);
        }
        if (bVar21) {
          bVar23 = SCARRY4(unaff_r10,0xfb0000);
          unaff_r6 = (ushort *)(unaff_r10 + 0xfb0000);
          bVar21 = (int)unaff_r6 < 0;
          bVar19 = unaff_r6 == (ushort *)0x0;
        }
        if (!bVar19 && bVar21 == bVar23) {
          *(undefined **)pbVar17 = &UNK_08025816;
          *(byte **)(pbVar17 + -4) = pbVar17;
          *(uint *)(pbVar17 + -8) = in_r12;
          *(undefined4 **)(pbVar17 + -0xc) = unaff_r8;
          *(undefined4 **)(pbVar17 + -0x10) = puVar11;
          *(undefined4 **)(pbVar17 + -0x14) = puVar3;
          *unaff_r8 = &UNK_0802581a;
          unaff_r8[-1] = pbVar17;
          unaff_r8[-2] = unaff_r10;
          unaff_r8[-3] = unaff_r9;
          unaff_r8[-4] = unaff_r8;
          unaff_r8[-5] = puVar12;
          unaff_r8[-6] = puVar11;
          unaff_r8[-7] = puVar5;
        }
        bVar23 = SBORROW4((int)puVar3,0x10);
        puVar3 = puVar3 + -4;
        bVar21 = (int)puVar3 < 0;
        *(undefined4 **)pbVar14 = puVar12;
        pbVar14 = pbVar14 + 4;
      }
      if (!bVar23) {
        *unaff_r9 = pbVar17;
        unaff_r9[-1] = puVar16;
        unaff_r9[-2] = unaff_r11;
        unaff_r9[-3] = unaff_r8;
        unaff_r9[-4] = param_1;
        unaff_r9[-5] = &gUnknown_08732360;
        unaff_r9[-6] = puVar3;
      }
      if (bVar21) {
        bVar23 = SCARRY4((int)puVar5,0x2a0000);
        pbVar14 = (byte *)(puVar5 + 0xa8000);
      }
      if (bVar23) {
        return unaff_r9[-6];
      }
      puVar5 = (undefined4 *)(uint)*(byte *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)(uint)*(byte *)((int)unaff_r5 + 1);
      if (puVar5 == puVar8) {
        *(undefined4 **)(puVar16 + 0xe0) = unaff_r5;
      }
      if (SBORROW4((int)puVar5,(int)puVar8)) {
        *puVar8 = pbVar17;
        puVar8[-1] = puVar16;
        puVar8[-2] = unaff_r11;
        puVar8[-3] = pbVar14;
        puVar8[-4] = unaff_r6;
        puVar8[-5] = puVar3;
      }
      if (puVar5 <= puVar8) {
        coprocessor_load(2,in_cr4,pbVar14 + -0x244);
      }
                    /* WARNING: Read-only address (ram,0x08732360) is written */
                    /* WARNING: Read-only address (ram,0x08732364) is written */
                    /* WARNING: Read-only address (ram,0x08732368) is written */
                    /* WARNING: Read-only address (ram,0x0873236c) is written */
      if (SBORROW4((int)puVar5,(int)puVar8)) {
        gUnknown_08732360 = puVar3;
        _UNK_08732364 = unaff_r11;
        DAT_08732368 = puVar16;
        _UNK_0873236c = pbVar17;
      }
      if (puVar5 <= puVar8) {
        coprocessor_store(2,in_cr4,0x8025642);
      }
      if (puVar5 != puVar8) {
        unaff_r9 = *(undefined4 **)(puVar16 + -4);
        param_1 = *(int *)(puVar16 + -8);
        puVar5 = *(undefined4 **)(puVar16 + -0xc);
        puVar3 = *(undefined4 **)(puVar16 + -0x10);
      }
      do {
        puVar11 = (undefined4 *)(uint)*unaff_r6;
        unaff_r6 = unaff_r6 + 1;
        pbVar13 = pbVar14;
_0802587A:
        if (puVar11 == (undefined4 *)0x0) {
          puVar16 = &_08025882 + -(int)puVar8;
        }
        pbVar14 = (byte *)((int)unaff_r5 + (int)pbVar13);
        *(short *)(pbVar14 + 0xc) = (short)puVar11;
        puVar11 = (undefined4 *)puVar3[2];
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while ((int)puVar5 < (int)puVar11);
      if (puVar11 < puVar5) {
        unaff_r6 = (ushort *)((uint)puVar5 & 0xc10000);
      }
      pbVar13 = pbVar14;
      if ((int)puVar11 <= (int)puVar5) {
        pbVar13 = pbVar14 + 0x244;
        coprocessor_storelong(2,in_cr4,pbVar14);
      }
      in_r12 = in_r12 + 1;
      uVar2 = *(uint *)(**(int **)(puVar16 + 0xe8) + 0x14);
      bVar19 = in_r12 <= uVar2;
      bVar20 = SBORROW4(uVar2,in_r12);
      bVar21 = uVar2 == in_r12;
      puVar5 = unaff_r8;
      puVar3 = (undefined4 *)puVar16;
      uVar9 = uVar2 - in_r12;
    } while ((int)in_r12 < (int)uVar2);
  }
  puVar6 = (uint *)in_r12;
  if (bVar20) {
    pbVar17 = (byte *)*unaff_r8;
    unaff_r9 = (undefined4 *)unaff_r8[-2];
    unaff_r6 = (ushort *)unaff_r8[-3];
    unaff_r5 = (undefined4 *)unaff_r8[-4];
    param_1 = unaff_r8[-5];
    puVar6 = (uint *)unaff_r8[-7];
    piVar10 = unaff_r8 + -8;
    unaff_r8 = unaff_r8 + -9;
    bVar19 = (bool)((byte)*piVar10 & 1);
    uVar2 = (uint)unaff_r8 ^ *piVar10 >> 1;
    bVar21 = uVar2 == 0;
    uVar9 = uVar2;
  }
  if (bVar21) {
    unaff_r6 = (ushort *)
               (uVar2 - (((uint)unaff_r8 >> ((uint)unaff_r8 & 0x1f) |
                         (int)unaff_r8 << 0x20 - ((uint)unaff_r8 & 0x1f)) + (uint)!bVar19));
  }
                    /* WARNING: Read-only address (ram,0x080258b8) is written */
                    /* WARNING: Read-only address (ram,0x080258bc) is written */
                    /* WARNING: Read-only address (ram,0x080258c0) is written */
                    /* WARNING: Read-only address (ram,0x080258c4) is written */
                    /* WARNING: Read-only address (ram,0x080258c8) is written */
                    /* WARNING: Read-only address (ram,0x080258cc) is written */
  if ((int)uVar9 < 0) {
    puRam080258b8 = puVar11;
    iRam080258bc = param_1;
    puRam080258c0 = unaff_r5;
    puRam080258c4 = unaff_r6;
    _UNK_080258c8 = puVar3;
    _UNK_080258cc = pbVar17;
  }
  if (bVar20) {
    *puVar6 = in_r12;
    puVar6[-1] = unaff_r11;
    puVar6[-2] = (uint)unaff_r5;
  }
  if (bVar21) {
    unaff_r6 = (ushort *)((int)unaff_r9 - (((int)puVar6 >> 0x10) + (uint)!bVar19));
  }
  if (bVar19) {
    unaff_r6 = (ushort *)((uint)puVar6 & (int)puVar6 >> 0x20);
  }
  if (!bVar21) {
    *unaff_r5 = unaff_r9;
    unaff_r5[-1] = unaff_r8;
    unaff_r5[-2] = pbVar13;
    unaff_r5[-3] = unaff_r6;
    unaff_r5 = unaff_r5 + -4;
  }
  unaff_r5[3] = unaff_r5[7] + -0xdf;
  unaff_r5[4] = unaff_r5[8] + -0x8f;
  unaff_r5[5] = unaff_r5[9] + -0x11;
  iVar1 = unaff_r5[10];
  puVar5 = (undefined4 *)(iVar1 + -0x90);
  unaff_r5[7] = unaff_r5[7] + -0x10;
  unaff_r5[8] = unaff_r5[8] + -0x10;
  unaff_r5[9] = unaff_r5[9] + -0xe0;
  unaff_r5[10] = puVar5;
  piVar24 = unaff_r5 + 0xb;
  unaff_r5[6] = iVar1 + -0x11;
  iVar1 = sub_08011C70(DAT_03002844,9,0);
  iVar7 = *(int *)(iVar1 + 0x1a0) >> 8;
  puVar3[0x35] = *(int *)(iVar1 + 0x1a4) >> 8;
  puVar3[0x34] = iVar7;
  iVar15 = puVar3[0x38];
  puVar3[0x36] = iVar7;
  puVar3[0x37] = puVar3[0x35];
  iVar1 = __16__rt_sdiv(DAT_03001a38,
                        puVar3[0x36] * (*(int *)(iVar15 + 0xc) - *(int *)(iVar15 + 4)) * 8 +
                        (DAT_03001a38 >> 1));
  *piVar24 = iVar1 + *(int *)(puVar3[0x38] + 4) * 8;
  iVar1 = __16__rt_sdiv(DAT_03001a3c,
                        puVar3[0x37] * (*(int *)(iVar15 + 0x10) - *(int *)(iVar15 + 8)) * 8 +
                        (DAT_03001a3c >> 1));
  unaff_r5[0xc] = iVar1 + *(int *)(puVar3[0x38] + 8) * 8;
  piVar10 = (int *)(param_1 + 0x802c);
  uVar4 = sub_08026EE6(0,param_1);
  sub_0801191A(&DAT_03001c4c,uVar4);
  *piVar24 = *piVar24 + -0x78;
  unaff_r5[0xc] = unaff_r5[0xc] + -0x50;
  *(int *)(param_1 + 0x8034) = *piVar10 + 0xf0;
  *(int *)(param_1 + 0x8038) = *(int *)(param_1 + 0x8030) + 0xa0;
  puVar8 = (undefined4 *)sub_0803D5B8(*(undefined4 *)(**(int **)puVar3[0x3a] + 4));
  Wfz_LoadContainer(**(undefined4 **)puVar3[0x3a],puVar8);
  sub_08049138(0x6000000,(int)puVar8,*(int *)(**(int **)puVar3[0x3a] + 4));
  puVar18 = &UNK_080259d1;
  sub_0803D63C(puVar8);
  puVar11 = *(undefined4 **)puVar3[0x3a];
  iVar1 = puVar11[2];
  uVar22 = iVar1 == 0;
  bVar21 = true;
  bVar19 = false;
  if (!(bool)uVar22) {
    piVar10 = (int *)sub_0801124C(&DAT_03001c4c,*(undefined4 *)(puVar11[4] + 4));
    iVar1 = sub_0803D5B8(*(undefined4 *)(*(int *)(*(int *)puVar3[0x3a] + 0x10) + 4));
    Wfz_LoadContainer(*(undefined4 *)(*(int *)puVar3[0x3a] + 0x10),iVar1);
    sub_08049138((int)(&DAT_06010000 + (int)piVar10 * 0x20),iVar1,
                 *(int *)(*(int *)(*(int *)puVar3[0x3a] + 0x10) + 4));
    sub_0803D63C(iVar1);
    iVar7 = *(int *)(*(int *)puVar3[0x3a] + 0xc);
    puVar8 = (undefined4 *)sub_0803D5B8(0x20);
    uVar22 = puVar8 == (undefined4 *)0x0;
    if (!(bool)uVar22) {
      puVar5 = (undefined4 *)0x0;
      uVar22 = puVar8 == (undefined4 *)0x0;
      *puVar3 = piVar10;
      sub_08026C9C(puVar8,param_1,iVar7);
      *puVar8 = &_0804E148;
    }
    if (!(bool)uVar22) {
      coprocessor_store(0xf,in_cr4,unaff_r9);
    }
    puVar18 = &UNK_08025a49;
    sub_0801191A(*(undefined4 *)(iVar7 + 4));
    puVar8 = (undefined4 *)0x1;
    puVar11 = *(undefined4 **)(*(int *)puVar3[0x3a] + 8);
    bVar21 = puVar11 != (undefined4 *)0x0;
    bVar19 = SBORROW4((int)puVar11,1);
    uVar22 = puVar11 == (undefined4 *)0x1;
    iVar1 = extraout_r1;
    if (1 < (int)puVar11) {
      do {
        *puVar3 = piVar10;
        puVar5 = puVar8;
        uVar4 = sub_08026C9C(0,param_1,*(int *)(*(int *)puVar3[0x3a] + 0xc) + (int)puVar8 * 0x18);
        puVar18 = &UNK_08025a77;
        sub_0801191A(*(undefined4 *)(iVar7 + 4),uVar4);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar11 = *(undefined4 **)(*(int *)puVar3[0x3a] + 8);
        bVar21 = puVar8 <= puVar11;
        bVar19 = SBORROW4((int)puVar11,(int)puVar8);
        uVar22 = puVar11 == puVar8;
        iVar1 = extraout_r1_00;
      } while (!(bool)uVar22 && (int)puVar8 <= (int)puVar11);
    }
  }
  if (bVar19) {
    *puVar11 = &UNK_08025a8a;
    puVar11[-1] = in_r12;
    puVar11[-2] = unaff_r11;
    puVar11[-3] = puVar8;
    puVar11[-4] = param_1;
    puVar11[-5] = puVar5;
    puVar11[-6] = iVar1;
  }
  if (bVar21) {
    puVar11[-1] = puVar18;
    puVar11[-2] = puVar3;
    puVar11[-3] = unaff_r11;
    puVar11[-4] = piVar10;
    puVar11[-5] = puVar11;
  }
  if ((bool)uVar22 == false) {
    *puVar3 = 0;
    puVar3[0x11] = 0;
    uVar22 = 1;
    ScriptVM_Run(puVar3);
    iVar1 = extraout_r1_01;
  }
  if (!(bool)uVar22) {
    coprocessor_store(2,in_cr2,iVar1);
  }
  uVar4 = sub_08026B4C(0,iVar1);
  sub_0801191A(&DAT_03001c4c,uVar4);
  uVar4 = sub_08026B4C(0,param_1,1);
  sub_0801191A(&DAT_03001c4c,uVar4);
  uVar4 = sub_08026B4C(0,param_1,2);
  sub_0801191A(&DAT_03001c4c,uVar4);
  uVar4 = sub_08026B4C(0,param_1,3);
  sub_0801191A(&DAT_03001c4c,uVar4);
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0x1d40;
  return 0x4000000;
}


/* sub_08025B20 @ 0x08025B20 */

void sub_08025B20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_08025B34 @ 0x08025B34 */

void sub_08025B34(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *(int *)(param_1 + 0x802c) + -8;
  uVar6 = (uint)(iVar4 * 0x1000000) >> 0x1b;
  iVar1 = *(int *)(param_1 + 0x8030) + -0x30;
  iVar2 = iVar1 >> 8;
  iVar3 = 0x20 - uVar6;
  iVar4 = iVar4 >> 8;
  uVar5 = (uint)(iVar1 * 0x1000000) >> 0x1b;
  if (iVar2 < 0) {
    uVar7 = uVar5;
    if (uVar5 < 0x20) {
      do {
        sub_0804912C((int)(&DAT_0600f000 + uVar7 * 0x40),0,0x40);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x20);
    }
  }
  else {
    if (iVar4 < 0) {
      if (uVar5 < 0x20) {
        uVar7 = uVar5;
        do {
          sub_08049168((int)(&DAT_0600f000 + uVar6 * 2 + uVar7 * 0x40),0,iVar3 * 2);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x20);
      }
    }
    else if (uVar5 < 0x20) {
      uVar7 = uVar5;
      do {
        sub_08049144((int)(&DAT_0600f000 + uVar6 * 2 + uVar7 * 0x40),
                     uVar7 * 0x100 + iVar2 * 0x2000 + param_1 + iVar4 * 0x40 + 0xc + uVar6 * 2,
                     iVar3 * 2);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x20);
    }
    if (uVar6 != 0) {
      if (iVar4 < 3) {
        if (uVar5 < 0x20) {
          uVar7 = uVar5;
          do {
            sub_08049144((int)(&DAT_0600f000 + uVar7 * 0x40),
                         uVar7 * 0x100 + iVar2 * 0x2000 + param_1 + iVar4 * 0x40 + 0x4c,uVar6 << 1);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < 0x20);
        }
      }
      else if (uVar5 < 0x20) {
        uVar7 = uVar5;
        do {
          sub_08049168((int)(&DAT_0600f000 + uVar7 * 0x40),0,uVar6 << 1);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x20);
      }
    }
  }
  if (iVar2 < 3) {
    if (iVar4 < 0) {
      iVar1 = 0;
      if (uVar5 != 0) {
        do {
          sub_08049168((int)(&DAT_0600f000 + uVar6 * 2 + iVar1 * 0x40),0,iVar3 * 2);
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar5);
      }
    }
    else {
      iVar1 = 0;
      if (uVar5 != 0) {
        do {
          sub_08049144((int)(&DAT_0600f000 + uVar6 * 2 + iVar1 * 0x40),
                       iVar1 * 0x100 + iVar2 * 0x2000 + param_1 + iVar4 * 0x40 + 0x200c + uVar6 * 2,
                       iVar3 * 2);
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar5);
      }
    }
    if (uVar6 != 0) {
      if (iVar4 < 3) {
        iVar1 = 0;
        if (uVar5 != 0) {
          do {
            sub_08049144((int)(&DAT_0600f000 + iVar1 * 0x40),
                         iVar1 * 0x100 + iVar2 * 0x2000 + param_1 + iVar4 * 0x40 + 0x204c,uVar6 * 2)
            ;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar5);
        }
      }
      else {
        iVar1 = 0;
        if (uVar5 != 0) {
          do {
            sub_08049168((int)(&DAT_0600f000 + iVar1 * 0x40),0,uVar6 * 2);
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar5);
        }
      }
    }
  }
  else if (uVar5 < 0x20) {
    do {
      sub_0804912C((int)(&DAT_0600f000 + uVar5 * 0x40),0,0x40);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x20);
  }
  return;
}


/* sub_08025D2E @ 0x08025D2E */

void sub_08025D2E(int param_1)

{
  REG_BG2HOFS = (short)*(undefined4 *)(param_1 + 0x802c);
  REG_BG2VOFS = (short)*(undefined4 *)(param_1 + 0x8030);
  REG_BG3HOFS = (short)*(undefined4 *)(param_1 + 0x802c);
  REG_BG3VOFS = (short)*(undefined4 *)(param_1 + 0x8030);
  return;
}


/* sub_08025D48 @ 0x08025D48 */

void sub_08025D48(int *param_1)

{
  if (((int)((uint)DAT_03003302 << 0x1a) < 0) && (param_1[0x2003] < param_1[0x200b])) {
    param_1[0x200b] = param_1[0x200b] + -1;
  }
  if (((int)((uint)DAT_03003302 << 0x1b) < 0) && (param_1[0x200b] < param_1[0x2005])) {
    param_1[0x200b] = param_1[0x200b] + 1;
  }
  if (((int)((uint)DAT_03003302 << 0x19) < 0) && (param_1[0x2004] < param_1[0x200c])) {
    param_1[0x200c] = param_1[0x200c] + -1;
  }
  if (((int)((uint)DAT_03003302 << 0x18) < 0) && (param_1[0x200c] < param_1[0x2006])) {
    param_1[0x200c] = param_1[0x200c] + 1;
  }
  param_1[0x200d] = param_1[0x200b] + 0xf0;
  param_1[0x200e] = param_1[0x200c] + 0xa0;
  if ((uint)(((uint)DAT_03003302 << 0x18) >> 0x1c != 0) != param_1[0x200f]) {
    param_1[0x200f] = (uint)(((uint)DAT_03003302 << 0x18) >> 0x1c != 0);
  }
  if ((DAT_03003304 & 1) != 0) {
    __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
  }
  return;
}


