/* Ghidra reference decompilation of code_08006290 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08006290 @ 0x08006290 */

void sub_08006290(int param_1)

{
  undefined1 auStack_44 [52];
  
  *(uint *)(*(int *)(param_1 + 0x11c) + 8) = (uint)(2 < *(int *)(param_1 + 0x10c));
  sub_0803F540(auStack_44,0xf0,0xa0);
  sub_08006718(param_1,auStack_44,2,1);
  sub_08049150((int)auStack_44,0x6000040);
  sub_0803F58C(auStack_44,0);
  return;
}


/* sub_080062D8 @ 0x080062D8 */

void sub_080062D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar1 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,iVar2 + 0x2e,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = param_1 + 0x114;
  }
  uVar1 = sub_08006880(0,param_1,0,iVar2,0,0x6d,0x21,0xdd);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08006880(0,param_1,1,iVar2,1,0x6d,0x33,0xdd);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08006880(0,param_1,2,iVar2,2,0x6d,0x45,0xdd);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,0,3,1,0xffffffff,0xffffffff,0x10,0x10,0x28,0xffffffff,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,1,0,2,0xffffffff,0xffffffff,0x11,0x10,0x3a,0xffffffff,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,2,1,3,0xffffffff,0xffffffff,0x12,0x10,0x4c,0xffffffff,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,3,2,0,0xffffffff,0xffffffff,0x14,0x78,0x70,0xffffffff,1);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}


/* sub_080064E6 @ 0x080064E6 */

void sub_080064E6(int *param_1)

{
  if (param_1[0x46] != DAT_03001914) {
    sub_08006B5E(&DAT_03001914);
  }
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08006512 @ 0x08006512 */

undefined4 sub_08006512(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40);
    sub_080335BC(0,0);
    sub_0803D8A0();
    sub_0800536A();
    sub_08049144(0x5000000,0x805652c,0x200);
    sub_08049144(0x5000200,0x805652c,0x200);
    return 0;
  }
  if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40);
    puVar1 = (undefined4 *)sub_0803D5B8(0x11c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_080494D8;
    }
    sub_0803D850();
    return 1;
  }
  return 0;
}


/* sub_080065BC @ 0x080065BC */

undefined4 sub_080065BC(void)

{
  return 0;
}


/* sub_080065C0 @ 0x080065C0 */

undefined1 sub_080065C0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return DAT_03001914._1_1_;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      return (undefined1)DAT_03001914;
    }
    return 0;
  }
  return DAT_03001914._2_1_;
}


/* sub_080065E4 @ 0x080065E4 */

void sub_080065E4(undefined4 param_1,int param_2,undefined1 param_3)

{
  if (param_2 == 0) {
    sub_08006AB8(&DAT_03001914);
  }
  else if (param_2 == 1) {
    sub_08006ACA(&DAT_03001914);
  }
  else if (param_2 == 2) {
    DAT_03001914._0_1_ = param_3;
  }
  return;
}


/* sub_0800660E @ 0x0800660E */

undefined4 sub_0800660E(void)

{
  return 8;
}


/* sub_08006618 @ 0x08006618 */

void sub_08006618(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &_0804920C;
  if (0 < (int)param_1[1]) {
    do {
      piVar1 = (int *)param_1[iVar2 + 2];
      if (piVar1 != (int *)0x0) {
        __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  *param_1 = &_080491F0;
  return;
}


/* sub_0800664E @ 0x0800664E */

void sub_0800664E(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  iVar3 = iVar2 + 1;
  *piVar1 = iVar3;
  piVar1[iVar2 + 1] = (int)param_2;
  iVar2 = *param_2;
  __call_via_r2(param_2,iVar2,*(int *)(iVar2 + 0xc) + iVar2,iVar3,param_4);
  return;
}


/* sub_0800666C @ 0x0800666C */

void sub_0800666C(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)(param_1 + 4);
    iVar3 = *piVar2;
    iVar1 = 0;
    if (0 < iVar3) {
      do {
        if ((int *)piVar2[iVar1 + 1] == param_2) goto _08006690;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar3);
    }
    iVar1 = -1;
_08006690:
    *piVar2 = iVar3 + -1;
    iVar3 = (iVar3 + -1) - iVar1;
    if (iVar3 != 0) {
      sub_08049138((int)(piVar2 + iVar1 + 1),(int)(piVar2 + iVar1 + 2),iVar3 * 4);
    }
    if (param_2 != (int *)0x0) {
      __call_via_r2(param_2,1,*(int *)*param_2 + *param_2);
    }
  }
  return;
}


/* sub_080066BA @ 0x080066BA */

void sub_080066BA(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar2 * 4 + param_1 + 8);
      if (piVar1 != (int *)0x0) {
        __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_080066EC @ 0x080066EC */

void sub_080066EC(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


/* sub_08006718 @ 0x08006718 */

void sub_08006718(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  sub_08004F1C(param_2,0,0,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  local_24 = 8;
  local_20 = 0x18;
  local_1c = 0xe8;
  local_18 = 0x98;
  sub_08004F50(param_2,&local_24);
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0x78;
  *(undefined4 *)(param_2 + 8) = 0x10;
  *(undefined **)(param_2 + 0xc) = &gUnknown_082B9BA0;
  param_2[3] = 5;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  sub_0803DADA(param_2,*(undefined4 *)(&gUIStringPtrs + param_3 * 4));
  if ((param_4 != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 4))) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


/* sub_080067A0 @ 0x080067A0 */

undefined4 sub_080067A0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      iVar2 = __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 4) + iVar2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return 0;
}


/* sub_080067D6 @ 0x080067D6 */

void sub_080067D6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1[0x44] == 0) {
    param_1[0x44] = 1;
    iVar1 = *(int *)(*param_1 + 0x24);
    __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  }
  return;
}


/* sub_080067F4 @ 0x080067F4 */

undefined4 sub_080067F4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *(int *)param_1[iVar4 + 2];
      __call_via_r1((int *)param_1[iVar4 + 2],*(int *)(iVar3 + 0x14) + iVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  piVar1 = (int *)param_1[0x42];
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
    if (0 < param_1[1]) {
      do {
        iVar3 = *(int *)param_1[iVar4 + 2];
        iVar3 = __call_via_r1((int *)param_1[iVar4 + 2],*(int *)(iVar3 + 0x10) + iVar3);
        if (iVar3 != 0) {
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1[1]);
    }
  }
  else {
    iVar4 = __call_via_r1(piVar1,*(int *)(*piVar1 + 0x10) + *piVar1);
    if (iVar4 != 0) {
      return 0;
    }
  }
  uVar2 = __call_via_r1(param_1,*(int *)(*param_1 + 0x28) + *param_1);
  return uVar2;
}


/* sub_08006880 @ 0x08006880 */

void sub_08006880(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,int param_8)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    param_1[1] = param_2;
    *param_1 = &_0804BF3C;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = param_6;
    param_1[5] = param_7;
    param_1[7] = param_5;
    param_1[6] = (param_8 - param_6) + -2;
  }
  return;
}


/* sub_080068B8 @ 0x080068B8 */

void sub_080068B8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iStack_20;
  
  piVar3 = (int *)**(int **)(param_1 + 0xc);
  iVar1 = __call_via_r2(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                        *piVar3 + (int)piVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = **(int **)(param_1 + 0xc);
  uVar2 = __call_via_r2(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                        *(int *)(iVar5 + 8) + iVar5);
  iVar1 = __16__rt_sdiv(uVar2,iVar4 * iVar1);
  iVar4 = *(int *)(param_2 + 0x28) * *(int *)(param_1 + 0x14) + *(int *)(param_2 + 0x24) +
          *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    sub_08046E40(iVar4 + 1);
    puVar6 = (undefined1 *)(*(int *)(param_2 + 0x28) + iVar4);
    iVar1 = 0;
    do {
      *puVar6 = 0x73;
      sub_08046E40(puVar6 + 1,0x70,*(undefined4 *)(param_1 + 0x18));
      puVar6[*(int *)(param_1 + 0x18) + 1] = 1;
      iVar1 = iVar1 + 1;
      puVar6 = puVar6 + *(int *)(param_2 + 0x28);
    } while (iVar1 < 3);
    sub_08046E40(puVar6 + 1,0x73,*(undefined4 *)(param_1 + 0x18));
  }
  else {
    iVar5 = *(int *)(param_1 + 0x18) - iVar1;
    if (iVar5 == 0) {
      sub_08046E40(iVar4 + 1,10);
      puVar6 = (undefined1 *)(*(int *)(param_2 + 0x28) + iVar4);
      iVar1 = 0;
      do {
        *puVar6 = 10;
        sub_08046E40(puVar6 + 1,3,*(undefined4 *)(param_1 + 0x18));
        puVar6[*(int *)(param_1 + 0x18) + 1] = 0x68;
        iVar1 = iVar1 + 1;
        puVar6 = puVar6 + *(int *)(param_2 + 0x28);
      } while (iVar1 < 3);
      sub_08046E40(puVar6 + 1,0x68,*(undefined4 *)(param_1 + 0x18));
    }
    else {
      sub_08046E40(iVar4 + 1,10,iVar1);
      sub_08046E40(iVar4 + iVar1 + 1,1,iVar5);
      puVar6 = (undefined1 *)(*(int *)(param_2 + 0x28) + iVar4);
      iStack_20 = 0;
      do {
        *puVar6 = 10;
        sub_08046E40(puVar6 + 1,3,iVar1);
        puVar6[iVar1 + 1] = 0x68;
        sub_08046E40(puVar6 + iVar1 + 2,0x70,iVar5 + -1);
        puVar6[*(int *)(param_1 + 0x18) + 1] = 1;
        puVar6 = puVar6 + *(int *)(param_2 + 0x28);
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 3);
      sub_08046E40(puVar6 + 1,0x68,iVar1);
      sub_08046E40(puVar6 + iVar1 + 1,0x73,iVar5);
    }
  }
  return;
}


/* sub_080069E6 @ 0x080069E6 */

undefined4 sub_080069E6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    piVar2 = (int *)**(int **)(param_1 + 0xc);
    iVar1 = __call_via_r2(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                          *piVar2 + (int)piVar2,param_4,param_4);
    if (((int)((uint)DAT_03003304 << 0x1a) < 0) &&
       (iVar3 = **(int **)(param_1 + 0xc),
       iVar3 = __call_via_r2(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                             *(int *)(iVar3 + 0x10) + iVar3), iVar3 < iVar1)) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      iVar3 = **(int **)(param_1 + 0xc);
      __call_via_r3(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),iVar1 + -1,
                    *(int *)(iVar3 + 4) + iVar3);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
      return 1;
    }
    if (((int)((uint)DAT_03003304 << 0x1b) < 0) &&
       (iVar3 = **(int **)(param_1 + 0xc),
       iVar3 = __call_via_r2(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                             *(int *)(iVar3 + 0xc) + iVar3), iVar1 < iVar3)) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      iVar3 = **(int **)(param_1 + 0xc);
      __call_via_r3(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),iVar1 + 1,
                    *(int *)(iVar3 + 4) + iVar3);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
      return 1;
    }
  }
  return 0;
}


/* sub_08006AB8 @ 0x08006AB8 */

void sub_08006AB8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  sub_0803E42A(&DAT_03003e5c);
  return;
}


/* sub_08006ACA @ 0x08006ACA */

void sub_08006ACA(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  sub_0803F18C(&DAT_030038a4);
  return;
}


/* sub_08006ADA @ 0x08006ADA */

int sub_08006ADA(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = sub_0803FC4E(param_1,4,param_3,param_4,param_4);
  return iVar1 + 0x12345678;
}


/* sub_08006AE8 @ 0x08006AE8 */

void sub_08006AE8(byte *param_1)

{
  int iVar1;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  int local_18;
  
  sub_0803FC3A(&DAT_03004a68,&local_1c,0,8);
  iVar1 = sub_0803FC4E(&local_1c);
  if ((((iVar1 + 0x12345678 == local_18) && (local_1c < 9)) && (local_1a < 9)) && (local_1b < 9)) {
    *param_1 = local_1c;
    param_1[1] = local_1b;
    param_1[2] = local_1a;
    param_1[3] = local_19;
  }
  else {
    *param_1 = 4;
    param_1[2] = 4;
    param_1[1] = 6;
    param_1[3] = 0;
  }
  sub_0803F18C(&DAT_030038a4,param_1[2]);
  sub_0803E42A(&DAT_03003e5c,param_1[1]);
  return;
}


/* sub_08006B5E @ 0x08006B5E */

void sub_08006B5E(undefined1 *param_1)

{
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  int local_14;
  
  local_18 = *param_1;
  local_17 = param_1[1];
  local_16 = param_1[2];
  local_15 = param_1[3];
  local_14 = sub_0803FC4E(param_1,4);
  local_14 = local_14 + 0x12345678;
  sub_0803FBDE(&DAT_03004a68,0,&local_18,8);
  return;
}


/* sub_08006BA0 @ 0x08006BA0 */

void sub_08006BA0(int *param_1)

{
  sub_08011AA0(&DAT_03001c4c);
  if (DAT_03002bac == 0) {
    sub_08011C0C(&DAT_03001c4c,0xc,0);
  }
  __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
  return;
}


/* sub_08006BD0 @ 0x08006BD0 */

void sub_08006BD0(void)

{
  sub_08011C0C(&DAT_03001c4c,0xd,0);
  sub_080193AE(&DAT_03002bd8,0xd);
  return;
}


/* sub_08006BE8 @ 0x08006BE8 */

void sub_08006BE8(int *param_1)

{
  sub_08011E94(&DAT_03001c4c);
  sub_08011C0C(&DAT_03001c4c,0xe,0);
  sub_080193AE(&DAT_03002bd8,0xe);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08006C18 @ 0x08006C18 */

bool sub_08006C18(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  
  iVar1 = sub_08011C0C(&DAT_03001c4c,0xc,0,in_r3,in_r3);
  iVar2 = sub_080193AE(&DAT_03002bd8,0xc);
  return iVar1 == 0 && iVar2 == 1;
}


/* sub_08006C3E @ 0x08006C3E */

void sub_08006C3E(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      __call_via_r3(piVar1,0xd,0,*(int *)(iVar2 + 0x24) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  sub_080193AE(&DAT_03002bd8,0xd);
  return;
}


/* sub_08006C74 @ 0x08006C74 */

void sub_08006C74(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      piVar2 = (int *)param_1[iVar3 + 2];
      iVar1 = 0;
      if (0 < DAT_03001c50) {
        do {
          if ((int *)(&DAT_03001c54)[iVar1] == piVar2) {
            __call_via_r3(piVar2,0xe,0,*(int *)(*piVar2 + 0x24) + *piVar2);
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_03001c50);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  sub_080193AE(&DAT_03002bd8,0xe);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08006CE0 @ 0x08006CE0 */

bool sub_08006CE0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar3 = *(int **)(iVar4 * 4 + param_1 + 8);
      iVar1 = 0;
      if (0 < DAT_03001c50) {
        do {
          if ((int *)(&DAT_03001c54)[iVar1] == piVar3) {
            uVar2 = __call_via_r3(piVar3,0xc,0,*(int *)(*piVar3 + 0x24) + *piVar3);
            uVar5 = uVar5 | uVar2;
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_03001c50);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  iVar4 = sub_080193AE(&DAT_03002bd8,0xc);
  return iVar4 == 1 && uVar5 == 0;
}


/* sub_08006D5C @ 0x08006D5C */

undefined4 * sub_08006D5C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = param_2;
    sub_08010D7C(param_2);
  }
  return param_1;
}


/* sub_08006D80 @ 0x08006D80 */

void sub_08006D80(undefined4 *param_1,int param_2)

{
  sub_08010D9A(*param_1);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08006D98 @ 0x08006D98 */

undefined4 * sub_08006D98(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080496CC;
    param_1[1] = 0x100;
    param_1[2] = 8;
    param_1[3] = param_2;
    sub_08010D7C(param_2);
    *param_1 = &_0804BB74;
  }
  return param_1;
}


/* sub_08006DCE @ 0x08006DCE */

void sub_08006DCE(void)

{
  sub_08007064();
  return;
}


/* sub_08006DD6 @ 0x08006DD6 */

undefined4 * sub_08006DD6(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080495B4;
    param_1[1] = 0;
    param_1[2] = 8;
    param_1[3] = param_2;
    sub_08010D7C(param_2);
    *param_1 = &_0804B57C;
  }
  return param_1;
}


/* sub_08006E0A @ 0x08006E0A */

void sub_08006E0A(void)

{
  sub_08007064();
  return;
}


/* sub_08006E24 @ 0x08006E24 */

void sub_08006E24(int param_1)

{
  sub_08011AA0(&DAT_03001c4c);
  sub_080124F8(*(undefined4 *)(param_1 + 4));
  return;
}


/* sub_08006E3C @ 0x08006E3C */

undefined4 sub_08006E3C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  sub_08011A1E(&DAT_03001c4c);
  sub_080126D4(&DAT_03002a64,DAT_03001c34);
  sub_0800425C(&DAT_03001068);
  if ((DAT_03001a34 == 0) && ((int)((uint)DAT_03003304 << 0x1d) < 0)) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,in_r3);
    puVar1 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0x100;
      puVar1[2] = 0x10;
      *puVar1 = &_0804A920;
    }
    sub_0803D8A0();
    sub_08011DB4(&DAT_03001c4c);
    puVar1 = (undefined4 *)sub_0803D5B8(0x8044);
    if (puVar1 != (undefined4 *)0x0) {
      sub_080256F0(puVar1);
      *puVar1 = &_0804E384;
    }
    sub_0803D8A0(puVar1);
    sub_08011E0E(&DAT_03001c4c);
    sub_0800938C(&DAT_030019a4,1);
    puVar1 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804A4B8;
      puVar1[1] = 0;
      puVar1[2] = 0x10;
    }
    sub_0803D8A0();
  }
  else if (((int)((uint)DAT_03003304 << 0x1c) < 0) &&
          ((&DAT_03001576)[(uint)DAT_03001068 * 0x34] != 0)) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,in_r3);
    if (DAT_03001068 == 8) {
      uVar2 = sub_0802BFBC(0x27,&UNK_08070198);
      sub_0801191A(&DAT_03001c4c,uVar2);
      puVar1 = (undefined4 *)sub_0803D5B8(4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804A014;
      }
      sub_0803D8A0();
      sub_08011E94(&DAT_03001c4c);
      sub_08011944(&DAT_03001c4c,uVar2);
    }
    else {
      puVar1 = (undefined4 *)sub_0803D5B8(0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0x100;
        puVar1[2] = 0x10;
        *puVar1 = &_0804A920;
      }
      sub_0803D8A0();
      sub_08011DB4(&DAT_03001c4c);
      puVar1 = (undefined4 *)sub_0803D5B8(0x158);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        puVar1[0x45] = 0;
        puVar1[0x46] = 0;
        puVar1[0x48] = 0;
        puVar1[0x49] = 0;
        puVar1[0x55] = 0;
        *puVar1 = &_0804AC88;
      }
      sub_0803D8A0();
      sub_08011E0E(&DAT_03001c4c);
      sub_0800938C(&DAT_030019a4,1);
      sub_08011C0C(&DAT_03001c4c,0x1a,0);
      puVar1 = (undefined4 *)sub_0803D5B8(0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804A4B8;
        puVar1[1] = 0;
        puVar1[2] = 0x10;
      }
      sub_0803D8A0();
    }
  }
  return 0;
}


/* sub_0800700C @ 0x0800700C */

void sub_0800700C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*DAT_03002be0 + 0xc);
  __call_via_r1(DAT_03002be0,iVar1 + *DAT_03002be0,iVar1,param_4,param_4);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
  sub_080115B0(&DAT_03001c4c);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x20) + *param_1);
  return;
}


/* sub_08007040 @ 0x08007040 */

void sub_08007040(int *param_1)

{
  __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
  sub_0800965C(&DAT_030019a4);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x28) + *param_1);
  return;
}


/* sub_08007064 @ 0x08007064 */

void sub_08007064(void)

{
  sub_0801157E(&DAT_03001c4c);
  return;
}


/* Palette_Fade @ 0x08007074 */

void Palette_Fade(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0x100;
  pbVar4 = &gMasterPalette;
  if ((param_4 < 0x101) && (iVar5 = param_4, param_4 < 0)) {
    iVar5 = 0;
  }
  puVar3 = &DAT_05000000;
  iVar2 = 0x100 - iVar5;
  iVar1 = 0x200;
  do {
    *puVar3 = (ushort)((int)(iVar2 * (uint)*pbVar4 + iVar5 * param_1) >> 0xb) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[1] + iVar5 * param_2) >> 0xb) << 5) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[2] + iVar5 * param_3) >> 0xb) << 10);
    puVar3 = puVar3 + 1;
    pbVar4 = pbVar4 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* sub_080070CC @ 0x080070CC */

void sub_080070CC(int param_1)

{
  int iVar1;
  ushort *puVar2;
  byte *pbVar3;
  int iVar4;
  
  param_1 = 0x100 - param_1;
  iVar4 = 0x100;
  pbVar3 = &gMasterPalette;
  if ((param_1 < 0x101) && (iVar4 = param_1, param_1 < 0)) {
    iVar4 = 0;
  }
  puVar2 = &DAT_05000000;
  iVar4 = 0x100 - iVar4;
  iVar1 = 0x200;
  do {
    *puVar2 = (ushort)((int)(iVar4 * (uint)*pbVar3) >> 0xb) |
              (ushort)(((int)(iVar4 * (uint)pbVar3[1]) >> 0xb) << 5) |
              (ushort)(((int)(iVar4 * (uint)pbVar3[2]) >> 0xb) << 10);
    puVar2 = puVar2 + 1;
    pbVar3 = pbVar3 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* sub_080070DA @ 0x080070DA */

void sub_080070DA(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0x100;
  pbVar4 = &gMasterPalette;
  if ((param_1 < 0x101) && (iVar5 = param_1, param_1 < 0)) {
    iVar5 = 0;
  }
  puVar3 = &DAT_05000000;
  iVar2 = 0x100 - iVar5;
  iVar1 = 0x200;
  do {
    *puVar3 = (ushort)((int)(iVar2 * (uint)*pbVar4 + iVar5 * 0xff) >> 0xb) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[1] + iVar5 * 0xff) >> 0xb) << 5) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[2] + iVar5 * 0xff) >> 0xb) << 10);
    puVar3 = puVar3 + 1;
    pbVar4 = pbVar4 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* sub_080070E4 @ 0x080070E4 */

bool sub_080070E4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x2c);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + param_1[2];
  Palette_Fade(0,0,0,0x100 - (iVar1 + param_1[2]));
  return 0xff < param_1[1];
}


/* sub_08007116 @ 0x08007116 */

void sub_08007116(void)

{
  sub_08011A1E(&DAT_03001c4c);
  return;
}


/* sub_08007124 @ 0x08007124 */

void sub_08007124(void)

{
  sub_08011A1E(&DAT_03001c4c);
  return;
}


/* sub_08007132 @ 0x08007132 */

bool sub_08007132(int *param_1)

{
  int iVar1;
  
  __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 - param_1[2];
  Palette_Fade(0,0,0,0x100 - (iVar1 - param_1[2]));
  return param_1[1] < 1;
}


/* sub_08007168 @ 0x08007168 */

undefined4 sub_08007168(int param_1)

{
  if ((DAT_03003302 & *(byte *)(param_1 + 4)) != 0) {
    return 1;
  }
  return 0;
}


/* sub_0800717C @ 0x0800717C */

void sub_0800717C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

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


/* sub_080071A6 @ 0x080071A6 */

undefined4 * sub_080071A6(void)

{
  return &DAT_03001918;
}


/* sub_080071AA @ 0x080071AA */

undefined4 * sub_080071AA(void)

{
  return &DAT_03001920;
}


/* sub_080071B0 @ 0x080071B0 */

undefined4 * sub_080071B0(void)

{
  return &DAT_03001928;
}


/* sub_080071B6 @ 0x080071B6 */

undefined4 * sub_080071B6(void)

{
  return &DAT_03001930;
}


/* sub_080071C4 @ 0x080071C4 */

undefined4 * sub_080071C4(undefined4 *param_1,int param_2)

{
  byte bVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_08049BC4;
    param_1[5] = param_2;
    bVar1 = *(byte *)(param_2 + 0x10);
    *(byte *)(param_1 + 4) = bVar1;
    *(undefined *)((int)param_1 + 0x11) = (&gUnknown_080707BC)[bVar1];
  }
  return param_1;
}


/* sub_080071F8 @ 0x080071F8 */

void sub_080071F8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((*(ushort *)(iVar1 + 2) & (ushort)*(byte *)(param_1 + 0x11)) != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    local_1c = ((int)*(short *)(iVar4 + 0x14) - (int)*(short *)(iVar4 + 8)) + (param_2[0x68] >> 8);
    local_18 = ((int)*(short *)(iVar4 + 0x16) - (int)*(short *)(iVar4 + 10)) + (param_2[0x69] >> 8);
    local_20 = CONCAT22((short)local_18,(short)local_1c);
    iVar2 = __call_via_r2(param_2,2,*(int *)(*param_2 + 0x34) + *param_2);
    iVar1 = param_2[0x8c];
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
    sub_08006D98(0,param_2);
    sub_0803D8A0();
    piVar3 = (int *)sub_08008D44(&DAT_0300197c,*(undefined1 *)(iVar4 + 0x11),
                                 *(undefined1 *)(iVar4 + 0x12),&local_20);
    *(undefined1 *)(piVar3 + 4) = *(undefined1 *)(iVar4 + 0x10);
    sub_08006DD6(0,piVar3);
    sub_0803D8A0();
    if (iVar2 != 0) {
      *(short *)(piVar3 + 0x8c) = (short)iVar1;
      __call_via_r2(piVar3,2,*(int *)(*piVar3 + 0x28) + *piVar3);
    }
  }
  return;
}


/* sub_080072CC @ 0x080072CC */

undefined4 * sub_080072CC(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar2 != (undefined4 *)0x0) {
    sub_08009AEC(puVar2,param_1);
    *puVar2 = &_08049BC4;
    puVar2[5] = param_1;
    bVar1 = *(byte *)(param_1 + 0x10);
    *(byte *)(puVar2 + 4) = bVar1;
    *(undefined *)((int)puVar2 + 0x11) = (&gUnknown_080707BC)[bVar1];
  }
  return puVar2;
}


/* sub_08007304 @ 0x08007304 */

undefined4 * sub_08007304(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_08049784;
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return param_1;
}


/* sub_0800733A @ 0x0800733A */

void sub_0800733A(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08049784;
  sub_08004102(param_1 + 5);
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],*piVar1 + (int)piVar1);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08007368 @ 0x08007368 */

void sub_08007368(int param_1)

{
  undefined4 local_dc [17];
  undefined4 local_98;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    local_dc[0] = 0;
    local_98 = 0;
    ScriptVM_Run(local_dc,*(int *)(param_1 + 0x10),param_1 + 0x14);
  }
  return;
}


/* sub_08007386 @ 0x08007386 */

undefined4 * sub_08007386(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08009AEC(puVar1,param_1);
    *puVar1 = &_08049784;
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return puVar1;
}


/* sub_080073C0 @ 0x080073C0 */

undefined4 * sub_080073C0(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_08049BD4;
    param_1[5] = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return param_1;
}


/* sub_080073F0 @ 0x080073F0 */

void sub_080073F0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_34 [44];
  
  sub_0801246E(auStack_34,*(undefined4 *)(param_1 + 0x14),param_1 + 0x10,&gUnknown_080707C0,
               param_2 + 0x214);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D18;
    puVar1[1] = auStack_34;
  }
  sub_0803D8A0(puVar1);
  sub_080124D2(auStack_34,0);
  return;
}


/* sub_0800742C @ 0x0800742C */

undefined4 * sub_0800742C(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08009AEC(puVar1,param_1);
    *puVar1 = &_08049BD4;
    puVar1[5] = *(undefined4 *)(param_1 + 0x10);
    *(undefined2 *)(puVar1 + 4) = 0;
  }
  return puVar1;
}


/* sub_08007464 @ 0x08007464 */

undefined4 * sub_08007464(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_08049794;
  }
  return param_1;
}


/* sub_0800748C @ 0x0800748C */

void sub_0800748C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08012588(&gUnknown_0877CE00,0,param_3,param_4,param_4);
  return;
}


/* sub_08007498 @ 0x08007498 */

undefined4 * sub_08007498(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08009AEC(puVar1,param_1);
    *puVar1 = &_08049794;
  }
  return puVar1;
}


/* sub_080074C4 @ 0x080074C4 */

undefined4 * sub_080074C4(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_0804C11C;
  }
  return param_1;
}


/* sub_080074EC @ 0x080074EC */

void sub_080074EC(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080496CC;
    puVar1[1] = 0x100;
    puVar1[2] = 0x10;
  }
  sub_0803D8A0();
  sub_08011DB4(&DAT_03001c4c);
  sub_08024F3C(0);
  sub_0803D8A0();
  sub_0800938C(&DAT_030019a4,1);
  sub_08011E0E(&DAT_03001c4c);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080495B4;
    puVar1[1] = 0;
    puVar1[2] = 0x10;
  }
  sub_0803D8A0();
  return;
}


/* sub_08007532 @ 0x08007532 */

void sub_08007532(undefined4 *param_1)

{
  undefined4 unaff_r5;
  
  *param_1 = &_080495B4;
  param_1[1] = 0;
  param_1[2] = unaff_r5;
  sub_0803D8A0();
  return;
}


/* sub_08007542 @ 0x08007542 */

undefined4 * sub_08007542(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08009AEC(puVar1,param_1);
    *puVar1 = &_0804C11C;
  }
  return puVar1;
}


/* sub_08007574 @ 0x08007574 */

undefined4 * sub_08007574(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_0804A09C;
    param_1[5] = param_2;
    uVar1 = *(byte *)(param_2 + 0x10) & 0xf;
    *(char *)(param_1 + 4) = (char)uVar1;
    *(undefined *)((int)param_1 + 0x11) = (&gUnknown_080707D8)[uVar1];
  }
  return param_1;
}


/* sub_080075AC @ 0x080075AC */

void sub_080075AC(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((*(ushort *)(iVar2 + 2) & (ushort)*(byte *)(param_1 + 0x11)) != 0) {
    iVar6 = *(int *)(param_1 + 0x14);
    iVar3 = __call_via_r2(param_2,2,*(int *)(*param_2 + 0x34) + *param_2);
    iVar2 = param_2[0x8c];
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
    sub_08006D98(0,param_2);
    sub_0803D8A0();
    piVar4 = (int *)sub_08008D44(&DAT_0300197c,*(undefined1 *)(iVar6 + 0x11),
                                 *(undefined1 *)(iVar6 + 0x12),iVar6 + 0x14,
                                 *(undefined1 *)(iVar6 + 0x13),1);
    if (DAT_03001a34 == 0) {
      bVar1 = *(byte *)(iVar6 + 0x10);
      if (bVar1 >> 4 == 0) {
        *(byte *)(piVar4 + 4) = bVar1;
      }
      else {
        *(byte *)(piVar4 + 4) = (bVar1 >> 4) - 1;
      }
      sub_08006DD6(0,piVar4);
      sub_0803D8A0();
      if (iVar3 != 0) {
        *(short *)(piVar4 + 0x8c) = (short)iVar2;
        __call_via_r2(piVar4,2,*(int *)(*piVar4 + 0x28) + *piVar4);
      }
    }
    else {
      puVar5 = (undefined4 *)sub_0803D5B8(0xc);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = &_080495B4;
        puVar5[1] = 0;
        puVar5[2] = 4;
      }
      sub_0803D8A0();
    }
  }
  return;
}


/* sub_08007674 @ 0x08007674 */

undefined4 * sub_08007674(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08009AEC(puVar1,param_1);
    *puVar1 = &_0804A09C;
    puVar1[5] = param_1;
    uVar2 = *(byte *)(param_1 + 0x10) & 0xf;
    *(char *)(puVar1 + 4) = (char)uVar2;
    *(undefined *)((int)puVar1 + 0x11) = (&gUnknown_080707D8)[uVar2];
  }
  return puVar1;
}


/* sub_080076B4 @ 0x080076B4 */

void sub_080076B4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011C0C(&DAT_03001c4c,0x17,*(undefined4 *)(param_1 + 0x10),param_4,param_4);
  return;
}


/* sub_080076C4 @ 0x080076C4 */

undefined4 * sub_080076C4(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08009AEC(puVar1,param_1);
    *puVar1 = &_0804B070;
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  return puVar1;
}


/* sub_080076F4 @ 0x080076F4 */

ushort sub_080076F4(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_3 + 0x84);
  iVar1 = __call_via_r1(param_3,iVar1 + *param_3,iVar1,param_4,param_4);
  return *(ushort *)(iVar1 + 4) & 1;
}


/* sub_0800770C @ 0x0800770C */

undefined4 * sub_0800770C(void)

{
  return &DAT_03001938;
}


/* sub_08007714 @ 0x08007714 */

undefined4 sub_08007714(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_3 + 0x84);
  iVar2 = __call_via_r1(param_3,iVar2 + *param_3,iVar2,param_4,param_4);
  if (((*(ushort *)(iVar2 + 4) & 1) == 0) || (*(char *)(param_1 + 4) != (char)param_3[4])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0800773E @ 0x0800773E */

undefined4 sub_0800773E(int param_1,int param_2)

{
  if (*(char *)(param_1 + 4) == *(char *)(param_2 + 0x10)) {
    return 1;
  }
  return 0;
}


/* sub_0800774E @ 0x0800774E */

undefined4 * sub_0800774E(void)

{
  return &DAT_0300193c;
}


/* sub_08007752 @ 0x08007752 */

undefined4 * sub_08007752(void)

{
  return &DAT_03001944;
}


/* sub_08007758 @ 0x08007758 */

undefined4 * sub_08007758(void)

{
  return &DAT_03001954;
}


/* sub_0800775E @ 0x0800775E */

undefined4 * sub_0800775E(void)

{
  return &DAT_0300194c;
}


/* sub_08007768 @ 0x08007768 */

undefined4 sub_08007768(void)

{
  return 1;
}


/* sub_0800776C @ 0x0800776C */

undefined4 * sub_0800776C(void)

{
  return &DAT_0300195c;
}


/* sub_08007774 @ 0x08007774 */

bool sub_08007774(int param_1)

{
  bool bVar1;
  
  bVar1 = DAT_03002b28 != *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = DAT_03002b28;
  return bVar1;
}


/* sub_08007790 @ 0x08007790 */

void sub_08007790(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804ACE0;
    puVar1[1] = 0;
  }
  return;
}


/* sub_080077B0 @ 0x080077B0 */

undefined4 sub_080077B0(void)

{
  return 1;
}


/* sub_080077B4 @ 0x080077B4 */

void sub_080077B4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

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


/* sub_080077DE @ 0x080077DE */

undefined4 * sub_080077DE(void)

{
  return &DAT_03001960;
}


/* sub_080077EC @ 0x080077EC */

void sub_080077EC(int param_1)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  sub_0800FDFA(&local_14,*(undefined4 *)(param_1 + 4));
  local_1c = ((((local_14 + local_c) / 2 + -0x78) * 0x400 - DAT_030019a4) * 3 >> 6) + DAT_030019a4;
  local_18 = ((((local_10 + local_8) / 2 + -0x54) * 0x400 - DAT_030019a8) * 9 >> 7) + DAT_030019a8;
  sub_08009744(&DAT_030019a4,&local_1c);
  return;
}


/* sub_08007858 @ 0x08007858 */

undefined4 * sub_08007858(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  
  puStack_20 = param_1;
  piStack_1c = param_2;
  uStack_18 = param_3;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804AB24;
    iStack_28 = *param_2 * 0x400 - DAT_030019a4;
    iStack_24 = param_2[1] * 0x400 - DAT_030019a8;
    iStack_30 = iStack_28;
    if (iStack_28 < 0) {
      iStack_30 = -iStack_28;
    }
    iStack_2c = iStack_24;
    if (iStack_24 < 0) {
      iStack_2c = -iStack_24;
    }
    piVar1 = &iStack_2c;
    if (iStack_2c < iStack_30) {
      piVar1 = &iStack_30;
    }
    iVar2 = __16__rt_sdiv(uStack_18,*piVar1);
    param_1[3] = (iVar2 >> 10) + 1;
    iVar2 = param_1[3];
    uVar3 = __16__rt_sdiv(iVar2 * 0x400,iStack_28 << 10);
    uVar4 = __16__rt_sdiv(iVar2 * 0x400,iStack_24 << 10);
    param_1[1] = uVar3;
    param_1[2] = uVar4;
  }
  return param_1;
}


/* sub_08007916 @ 0x08007916 */

void sub_08007916(int param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  
  local_14 = DAT_030019a4 + *(int *)(param_1 + 4);
  local_10 = DAT_030019a8 + *(int *)(param_1 + 8);
  if (DAT_03001a34 == 0) {
    sub_08009744(&DAT_030019a4,&local_14);
  }
  else {
    DAT_030019a4 = local_14;
    DAT_030019a8 = local_10;
    sub_0802ED98(&DAT_030019a4);
  }
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    sub_080210B6(&DAT_03002bd8);
  }
  return;
}


/* sub_0800797C @ 0x0800797C */

void sub_0800797C(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A720;
  }
  puVar1[2] = param_1;
  *(char *)(puVar1 + 1) = (char)param_2;
  *(char *)((int)puVar1 + 5) =
       (char)((int)(((uint)(100 - param_2 >> 0x1f) >> 0x1c) + (100 - param_2)) >> 4) + '\x01';
  *(undefined1 *)((int)puVar1 + 6) = 1;
  sub_080210D6(&DAT_03002bd8);
  sub_08021094(&DAT_03002bd8,puVar1);
  return;
}


/* sub_080079BC @ 0x080079BC */

void sub_080079BC(int param_1)

{
  char cVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = local_18;
  if (local_18 == 0) {
    local_14 = local_18;
    sub_080097A6(&DAT_030019a4,&local_18);
    sub_080210F2(&DAT_03002bd8);
  }
  else {
    cVar1 = *(char *)(param_1 + 6) + -1;
    *(char *)(param_1 + 6) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_1 + 5);
      iVar2 = sub_0803FAAC();
      *(int *)(param_1 + 0xc) = (int)((uint)*(byte *)(param_1 + 4) * (iVar2 + -0x8000)) >> 0x13;
      iVar2 = sub_0803FAAC();
      *(int *)(param_1 + 0x10) = (int)((uint)*(byte *)(param_1 + 4) * (iVar2 + -0x8000)) >> 0x13;
    }
    sub_080097A6(&DAT_030019a4,param_1 + 0xc);
  }
  return;
}


/* sub_08007A28 @ 0x08007A28 */

void sub_08007A28(int param_1)

{
  sub_0804912C((int)(&DAT_0600e000 + (uint)*(byte *)(param_1 + 4) * 0x800),0,0x800);
  return;
}


/* sub_08007A3E @ 0x08007A3E */

void sub_08007A3E(void)

{
  return;
}


/* sub_08007A40 @ 0x08007A40 */

void sub_08007A40(undefined1 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_1;
    *puVar1 = &_08049548;
  }
  return;
}


/* sub_08007A60 @ 0x08007A60 */

undefined4 * sub_08007A60(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1008), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    iVar2 = 0;
    *param_1 = &_08049604;
    do {
      iVar1 = *(int *)(iVar2 * 4 + param_3 + 4);
      if (iVar1 == 0) {
        sub_0804912C((int)(param_1 + iVar2 * 0x200 + 2),0,0x800);
      }
      else {
        Wfz_LoadContainer(iVar1,param_1 + iVar2 * 0x200 + 2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  return param_1;
}


/* sub_08007AB4 @ 0x08007AB4 */

void sub_08007AB4(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int a2;
  uint uVar4;
  
  iVar2 = (param_2 << 0x17) >> 0x1f;
  uVar4 = param_2 >> 3 & 0x1e;
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = 0;
  a2 = uVar4 * 2;
  do {
    sub_08049138((int)(&DAT_0600e000 + a2 + iVar3 * 0x40 + (uint)bVar1 * 0x800),
                 iVar2 * -0x800 + param_1 + iVar3 * 0x40 + a2 + 8,(0x20 - uVar4) * 2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (uVar4 != 0) {
    iVar3 = 0;
    do {
      sub_08049138((int)(&DAT_0600e000 + iVar3 * 0x40 + (uint)bVar1 * 0x800),
                   (-iVar2 ^ 1U) * 0x800 + param_1 + iVar3 * 0x40 + 8,a2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  return;
}


/* sub_08007B26 @ 0x08007B26 */

void sub_08007B26(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_2 + 0xc) << 3) >> 10;
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)iVar2;
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = 0;
  sub_08007AB4(param_1,iVar2);
  return;
}


/* sub_08007B54 @ 0x08007B54 */

void sub_08007B54(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_08007B62 @ 0x08007B62 */

undefined4 * sub_08007B62(undefined1 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x1008);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_1;
    iVar3 = 0;
    *puVar1 = &_08049604;
    do {
      iVar2 = *(int *)(iVar3 * 4 + param_2 + 4);
      if (iVar2 == 0) {
        sub_0804912C((int)(puVar1 + iVar3 * 0x200 + 2),0,0x800);
      }
      else {
        Wfz_LoadContainer(iVar2,puVar1 + iVar3 * 0x200 + 2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  return puVar1;
}


/* sub_08007B78 @ 0x08007B78 */

undefined4 * sub_08007B78(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x204c), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_08049410;
    param_1[2] = param_3;
    *(undefined1 *)(param_1 + 8) = 0xff;
    *(undefined1 *)((int)param_1 + 0x21) = 0xff;
    *(undefined1 *)((int)param_1 + 0x22) = 0xff;
    *(undefined1 *)((int)param_1 + 0x23) = 0xff;
    param_1[4] = &gUnknown_08070808;
    param_1[5] = &gUnknown_08070808;
    param_1[6] = &gUnknown_08070808;
    param_1[7] = &gUnknown_08070808;
    param_1[3] = (int)*(short *)(param_3 + 0x16);
    param_1[0xf] = *(undefined4 *)(param_3 + 4);
    param_1[0x10] = *(undefined4 *)(param_3 + 8);
    param_1[0x11] = *(undefined4 *)(param_1[2] + 0xc);
    param_1[0x12] = *(undefined4 *)(param_1[2] + 0x10);
    uVar3 = (uint)*(byte *)(param_1[2] + 0x15) * (uint)*(byte *)(param_1[2] + 0x14);
    if ((uVar3 < 5) && (iVar2 = 0, uVar3 != 0)) {
      do {
        iVar1 = *(int *)(param_1[2] + iVar2 * 4 + 0x18);
        if (iVar1 != 0) {
          *(char *)((int)param_1 + iVar2 + 0x20) = (char)iVar2;
          Wfz_LoadContainer(iVar1,param_1 + iVar2 * 0x200 + 0x13);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar3);
    }
  }
  return param_1;
}


/* sub_08007C12 @ 0x08007C12 */

void sub_08007C12(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_834 [2048];
  uint local_34 [5];
  uint uStack_20;
  int iStack_1c;
  int *local_18;
  
  local_34[0] = 0xff;
  local_34[1] = 0xff;
  local_34[2] = 0xff;
  local_34[3] = 0xff;
  uVar7 = 0;
  uVar4 = 0;
  do {
    iVar1 = param_2[1] + uVar4;
    if ((iVar1 < 0) || ((int)(uint)*(byte *)(*(int *)(param_1 + 8) + 0x15) <= iVar1)) {
      uVar7 = uVar7 | 3 << ((uVar4 & 0x7f) << 1);
    }
    else {
      iVar2 = 0;
      do {
        uVar8 = uVar4 * 2 + iVar2;
        iVar6 = *param_2 + iVar2;
        if ((iVar6 < 0) ||
           (uStack_20 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x14), (int)uStack_20 <= iVar6)) {
          uVar7 = uVar7 | 1 << (uVar8 & 0xff);
        }
        else {
          local_34[uVar8] = uStack_20 * iVar1 + iVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  uVar8 = 0;
  uVar4 = 0;
  do {
    iVar1 = uVar4 * 4;
    uVar5 = local_34[uVar4];
    if (uVar5 == 0xff) {
      *(undefined **)(iVar1 + param_1 + 0x10) = &gUnknown_08070808;
    }
    else if (*(int *)(*(int *)(param_1 + 8) + uVar5 * 4 + 0x18) == 0) {
      *(undefined **)(iVar1 + param_1 + 0x10) = &gUnknown_08070808;
      uVar7 = uVar7 | 1 << (uVar4 & 0xff);
    }
    else {
      uVar3 = 0;
      do {
        if (*(byte *)(param_1 + uVar3 + 0x20) == uVar5) {
          uVar8 = uVar8 | 1 << (uVar3 & 0xff);
          uVar7 = uVar7 | 1 << (uVar4 & 0xff);
          *(uint *)(iVar1 + param_1 + 0x10) = uVar3 * 0x800 + param_1 + 0x4c;
          break;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 4);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  uVar4 = 0;
  iStack_1c = param_1;
  local_18 = param_2;
  do {
    if ((1 << (uVar4 & 0xff) & uVar7) == 0) {
      uVar5 = 0;
      do {
        if ((1 << (uVar5 & 0xff) & uVar8) == 0) {
          uVar8 = uVar8 | 1 << (uVar5 & 0xff);
          uVar3 = local_34[uVar4];
          *(char *)(param_1 + uVar5 + 0x20) = (char)uVar3;
          local_34[4] = uVar5 * 0x800 + param_1 + 0x4c;
          *(uint *)(uVar4 * 4 + param_1 + 0x10) = local_34[4];
          Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 8) + uVar3 * 4 + 0x18),auStack_834);
          sub_08049138(local_34[4],(int)auStack_834,0x800);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 4);
    }
    uVar4 = uVar4 + 1;
    if (3 < (int)uVar4) {
      iVar1 = local_18[1];
      *(int *)(param_1 + 0x24) = *local_18;
      *(int *)(param_1 + 0x28) = iVar1;
      iVar1 = local_18[1];
      *(int *)(param_1 + 0x2c) = *local_18 << 8;
      *(int *)(param_1 + 0x30) = iVar1 << 8;
      return;
    }
  } while( true );
}


/* sub_08007D98 @ 0x08007D98 */

void sub_08007D98(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (uint)(*param_2 << 0x18) >> 0x1b;
  uVar5 = (uint)(param_2[1] << 0x18) >> 0x1b;
  bVar1 = *(byte *)(param_1 + 4);
  if (uVar5 < 0x20) {
    uVar3 = uVar5;
    do {
      sub_08049144((int)(&DAT_0600e000 + uVar2 * 2 + uVar3 * 0x40 + (uint)bVar1 * 0x800),
                   *(int *)(param_1 + 0x10) + uVar3 * 0x40 + uVar2 * 2,(0x20 - uVar2) * 2);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x20);
  }
  if ((uVar2 != 0) && (uVar5 < 0x20)) {
    uVar3 = uVar5;
    do {
      sub_08049144((int)(&DAT_0600e000 + uVar3 * 0x40 + (uint)bVar1 * 0x800),
                   *(int *)(param_1 + 0x14) + uVar3 * 0x40,uVar2 << 1);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x20);
  }
  iVar4 = 0;
  if (uVar5 != 0) {
    do {
      sub_08049144((int)(&DAT_0600e000 + uVar2 * 2 + iVar4 * 0x40 + (uint)bVar1 * 0x800),
                   *(int *)(param_1 + 0x18) + iVar4 * 0x40 + uVar2 * 2,(0x20 - uVar2) * 2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar5);
  }
  if ((uVar2 != 0) && (iVar4 = 0, uVar5 != 0)) {
    do {
      sub_08049144((int)(&DAT_0600e000 + iVar4 * 0x40 + (uint)bVar1 * 0x800),
                   *(int *)(param_1 + 0x1c) + iVar4 * 0x40,uVar2 << 1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar5);
  }
  return;
}


/* sub_08007E84 @ 0x08007E84 */

int sub_08007E84(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = *(int *)(param_2 + 0x18) * *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44) +
             *(int *)(param_2 + 0x30);
  local_10 = *(int *)(param_2 + 0x1c) * *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48) +
             *(int *)(param_2 + 0x34);
  local_1c = local_14 >> 10;
  local_18 = local_10 >> 10;
  local_24 = local_1c + -8;
  local_20 = local_18 + -0x30;
  local_2c = local_24 >> 8;
  local_28 = local_20 >> 8;
  sub_08007C12(param_1,&local_2c);
  sub_08007D98(param_1,&local_24);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)local_1c;
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)local_18;
  iVar2 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x34) = (local_1c - *(int *)(param_2 + 0x18)) - *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x38) = (local_18 - iVar2) - *(int *)(param_1 + 0x30);
  return param_1 + 0x3c;
}


/* sub_08007F2E @ 0x08007F2E */

int sub_08007F2E(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = *(int *)(param_2 + 0x18) * *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44) +
             *(int *)(param_2 + 0x30);
  local_10 = *(int *)(param_2 + 0x1c) * *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48) +
             *(int *)(param_2 + 0x34);
  local_1c = local_14 >> 10;
  local_18 = local_10 >> 10;
  local_24 = local_1c + -8;
  local_20 = local_18 + -0x30;
  local_2c = local_24 >> 8;
  local_28 = local_20 >> 8;
  if ((local_2c != *(int *)(param_1 + 0x24)) || (local_28 != *(int *)(param_1 + 0x28))) {
    sub_08007C12(param_1,&local_2c);
  }
  sub_08007D98(param_1,&local_24);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)local_1c;
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)local_18;
  iVar2 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x34) = (local_1c - *(int *)(param_2 + 0x18)) - *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x38) = (local_18 - iVar2) - *(int *)(param_1 + 0x30);
  return param_1 + 0x3c;
}


/* sub_08007FE8 @ 0x08007FE8 */

void sub_08007FE8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  *(int *)(param_1 + 0x44) = iVar2;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  *(int *)(param_1 + 0x48) = iVar1;
  *(int *)(param_1 + 0x44) = iVar2 + *param_2 * 0x400;
  *(int *)(param_1 + 0x48) = iVar1 + param_2[1] * 0x400;
  return;
}


/* sub_0800800A @ 0x0800800A */

undefined4 sub_0800800A(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2 + *(int *)(param_1 + 0x34) >> 8;
  iVar2 = param_2[1] + *(int *)(param_1 + 0x38) >> 8;
  if ((((iVar3 < 0) || (iVar2 < 0)) || (1 < iVar3)) || (1 < iVar2)) {
    uVar1 = 0;
  }
  else if (*(short *)(((uint)((param_2[1] + *(int *)(param_1 + 0x38) >> 3) << 0x1b) >> 0x15) +
                      *(int *)((iVar2 * 2 + iVar3) * 4 + param_1 + 0x10) +
                     ((uint)((*param_2 + *(int *)(param_1 + 0x34) >> 3) << 0x1b) >> 0x1a)) == 0) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_1 + 0xc);
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_08008086 @ 0x08008086 */

void sub_08008086(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08007B78(0,param_1,param_2,param_4,param_4);
  return;
}


/* sub_0800808A @ 0x0800808A */

void sub_0800808A(void)

{
  sub_08007B78(0);
  return;
}


/* sub_08008098 @ 0x08008098 */

void sub_08008098(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  bVar1 = REG_VCOUNT._0_1_;
  uVar2 = (uint)bVar1;
  if ((0x36 < uVar2) && (uVar2 < 0xa0)) {
    puVar3 = (undefined4 *)(DAT_03001a4c + (uVar2 + 1) * 0x10);
    Ram04000020 = *puVar3;
    Ram04000024 = puVar3[1];
    DAT_04000028 = puVar3[2];
    DAT_0400002c = puVar3[3];
  }
  return;
}


/* sub_080080C0 @ 0x080080C0 */

undefined4 * sub_080080C0(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x27a0), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049C84;
    sub_08046FF4(param_1 + 0x18,param_1 + 0x80,4,0x8050525);
    sub_08046FF4(param_1 + 0x80,param_1 + 0xe8,4,0x8050525);
    param_1[1] = param_2;
    param_1[0x17] = 0;
    iVar3 = 0;
    do {
      param_1[iVar3 + 0xb] = 0xff;
      iVar2 = iVar3 + 1;
      param_1[iVar3 + 2] = &gUnknown_08071020;
      iVar3 = iVar2;
    } while (iVar2 < 9);
    uVar4 = (uint)*(byte *)(param_1[1] + 5) * (uint)*(byte *)(param_1[1] + 4);
    if ((uVar4 < 10) && (iVar3 = 0, uVar4 != 0)) {
      do {
        iVar2 = *(int *)(param_1[1] + iVar3 * 4 + 8);
        if (iVar2 != 0) {
          param_1[iVar3 + 0xb] = iVar3;
          Wfz_LoadContainer(iVar2,param_1 + iVar3 * 0x100 + 0xe8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar4);
    }
    DAT_03000fb4 = 0x8008099;
    uVar1 = REG_IE;
    REG_IE = uVar1 | 2;
    DAT_04000022 = 0;
    DAT_04000026 = 0;
  }
  return param_1;
}


/* sub_08008174 @ 0x08008174 */

void sub_08008174(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  
  *param_1 = &_08049C84;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xfffd;
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08008192 @ 0x08008192 */

void sub_08008192(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40 [11];
  uint *puVar2;
  
  uVar7 = *param_2 >> 10 & 0xffffff00;
  local_4c = (int)(param_2[6] - uVar7) >> 4;
  uVar3 = param_2[1] >> 10 & 0xffffff00;
  local_48 = (int)(param_2[7] - uVar3) >> 3;
  local_44 = (int)((param_2[8] - uVar7) + 0xf) >> 4;
  local_40[0] = (int)((param_2[9] - uVar3) + 7) >> 3;
  iVar9 = (int)(uVar7 << 0x17) >> 0x1f;
  uVar7 = -iVar9;
  iVar6 = (int)(uVar3 << 0x17) >> 0x1f;
  uVar3 = -iVar6;
  local_54 = 0;
  puVar2 = &local_4c;
  if ((int)local_4c < 1) {
    puVar2 = &local_54;
  }
  uStack_50 = *puVar2;
  local_54 = 0;
  puVar2 = &local_48;
  if ((int)local_48 < 1) {
    puVar2 = &local_54;
  }
  uVar1 = *puVar2;
  uStack_58 = 0x10;
  puVar2 = &local_44;
  if (0xf < (int)local_44) {
    puVar2 = &uStack_58;
  }
  local_54 = *puVar2;
  puVar2 = local_40;
  uStack_58 = 0x20;
  if (0x1f < (int)local_40[0]) {
    puVar2 = &uStack_58;
  }
  uVar8 = *puVar2;
  if ((int)local_48 < 0) {
    if ((int)local_4c < 0) {
      uVar10 = (local_4c << 0x1c) >> 0x1b;
      uVar4 = local_48 & 0x1f;
      puVar11 = &DAT_0600f000 + uVar10 + uVar4 * 0x40 + (uVar3 ^ 1) * 0x800 + (uVar7 ^ 1) * 0x20;
      iVar12 = uVar10 + *(int *)(param_1 + 8) + uVar4 * 0x20;
      if (uVar4 < 0x20) {
        do {
          REG_DMA3SAD = iVar12;
          REG_DMA3DAD = puVar11;
          REG_DMA3CNT._0_2_ = (short)((0x20 - uVar10) * 0x8000 >> 0x10);
          REG_DMA3CNT._2_2_ = 0x8000;
          iVar12 = iVar12 + 0x20;
          puVar11 = puVar11 + 0x40;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 0x20);
      }
    }
    iVar12 = (uVar3 ^ 1) * 0x800;
    if ((local_54 - uStack_50 & 0x7fffffff) != 0) {
      uVar4 = local_48 & 0x1f;
      puVar11 = &DAT_0600f000 + uStack_50 * 2 + uVar4 * 0x40 + iVar12 + iVar9 * -0x20;
      iVar13 = uStack_50 * 2 + *(int *)(param_1 + 0xc) + uVar4 * 0x20;
      if (uVar4 < 0x20) {
        do {
          REG_DMA3SAD = iVar13;
          REG_DMA3DAD = puVar11;
          REG_DMA3CNT._0_2_ = (short)((local_54 - uStack_50) * 0x10000 >> 0x10);
          REG_DMA3CNT._2_2_ = 0x8000;
          iVar13 = iVar13 + 0x20;
          puVar11 = puVar11 + 0x40;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 0x20);
      }
    }
    if (0x10 < (int)local_44) {
      local_48 = local_48 & 0x1f;
      puVar11 = &DAT_0600f000 + local_48 * 0x40 + iVar12 + (uVar7 ^ 1) * 0x20;
      iVar12 = *(int *)(param_1 + 0x10) + local_48 * 0x20;
      if (local_48 < 0x20) {
        do {
          REG_DMA3SAD = iVar12;
          REG_DMA3DAD = puVar11;
          REG_DMA3CNT._0_2_ = (short)((local_44 * 2 + -0x20) * 0x8000 >> 0x10);
          REG_DMA3CNT._2_2_ = 0x8000;
          iVar12 = iVar12 + 0x20;
          puVar11 = puVar11 + 0x40;
          local_48 = local_48 + 1;
        } while ((int)local_48 < 0x20);
      }
    }
  }
  if ((int)local_4c < 0) {
    uVar4 = (local_4c << 0x1c) >> 0x1b;
    iVar12 = *(int *)(param_1 + 0x14) + uVar1 * 0x20 + uVar4;
    puVar11 = &DAT_0600f000 + uVar4 + uVar1 * 0x40 + iVar6 * -0x800 + (uVar7 ^ 1) * 0x20;
    if ((int)uVar1 < (int)uVar8) {
      uVar10 = uVar1;
      do {
        REG_DMA3SAD = iVar12;
        REG_DMA3DAD = puVar11;
        REG_DMA3CNT._0_2_ = (short)((0x20 - uVar4) * 0x8000 >> 0x10);
        REG_DMA3CNT._2_2_ = 0x8000;
        iVar12 = iVar12 + 0x20;
        puVar11 = puVar11 + 0x40;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar8);
    }
  }
  iVar13 = uStack_50 * 2;
  iVar12 = local_54 - uStack_50;
  if (iVar12 * 2 != 0) {
    puVar11 = &DAT_0600f000 + iVar13 + uVar1 * 0x40 + iVar6 * -0x800 + iVar9 * -0x20;
    iVar5 = *(int *)(param_1 + 0x18) + uVar1 * 0x20 + iVar13;
    for (uVar4 = uVar1; (int)uVar4 < (int)uVar8; uVar4 = uVar4 + 1) {
      REG_DMA3SAD = iVar5;
      REG_DMA3DAD = puVar11;
      REG_DMA3CNT._0_2_ = (short)iVar12;
      REG_DMA3CNT._2_2_ = 0x8000;
      iVar5 = iVar5 + 0x20;
      puVar11 = puVar11 + 0x40;
    }
  }
  if (0x10 < (int)local_44) {
    puVar11 = &DAT_0600f000 + uVar1 * 0x40 + iVar6 * -0x800 + (uVar7 ^ 1) * 0x20;
    iVar6 = *(int *)(param_1 + 0x1c) + uVar1 * 0x20;
    if ((int)uVar1 < (int)uVar8) {
      do {
        REG_DMA3SAD = iVar6;
        REG_DMA3DAD = puVar11;
        REG_DMA3CNT._0_2_ = (short)((local_44 * 2 + -0x20) * 0x8000 >> 0x10);
        REG_DMA3CNT._2_2_ = 0x8000;
        puVar11 = puVar11 + 0x40;
        iVar6 = iVar6 + 0x20;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)uVar8);
    }
  }
  if (0x20 < (int)local_40[0]) {
    local_40[0] = local_40[0] & 0x1f;
    if ((int)local_4c < 0) {
      uVar1 = (local_4c << 0x1c) >> 0x1b;
      puVar11 = &DAT_0600f000 + uVar1 + (uVar3 ^ 1) * 0x800 + (uVar7 ^ 1) * 0x20;
      iVar6 = *(int *)(param_1 + 0x20) + uVar1;
      iVar5 = 0;
      if (local_40[0] != 0) {
        do {
          REG_DMA3SAD = iVar6;
          REG_DMA3DAD = puVar11;
          REG_DMA3CNT._0_2_ = (short)((0x20 - uVar1) * 0x8000 >> 0x10);
          REG_DMA3CNT._2_2_ = 0x8000;
          puVar11 = puVar11 + 0x40;
          iVar6 = iVar6 + 0x20;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)local_40[0]);
      }
    }
    iVar6 = (uVar3 ^ 1) * 0x800;
    if (iVar12 * 2 != 0) {
      puVar11 = &DAT_0600f000 + iVar13 + iVar6 + iVar9 * -0x20;
      iVar9 = 0;
      iVar13 = *(int *)(param_1 + 0x24) + iVar13;
      if (local_40[0] != 0) {
        do {
          REG_DMA3SAD = iVar13;
          REG_DMA3DAD = puVar11;
          REG_DMA3CNT._0_2_ = (short)((uint)(iVar12 * 0x10000) >> 0x10);
          REG_DMA3CNT._2_2_ = 0x8000;
          iVar13 = iVar13 + 0x20;
          puVar11 = puVar11 + 0x40;
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_40[0]);
      }
    }
    if (0x10 < (int)local_44) {
      puVar11 = &DAT_0600f000 + (uVar7 ^ 1) * 0x20 + iVar6;
      iVar6 = 0;
      iVar9 = *(int *)(param_1 + 0x28);
      if (local_40[0] != 0) {
        do {
          REG_DMA3SAD = iVar9;
          REG_DMA3DAD = puVar11;
          REG_DMA3CNT._0_2_ = (short)((local_44 * 2 + -0x20) * 0x8000 >> 0x10);
          REG_DMA3CNT._2_2_ = 0x8000;
          iVar9 = iVar9 + 0x20;
          puVar11 = puVar11 + 0x40;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_40[0]);
      }
    }
  }
  return;
}


/* sub_08008598 @ 0x08008598 */

void sub_08008598(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined1 auStack_444 [1024];
  int aiStack_44 [9];
  int iStack_20;
  int iStack_1c;
  int *local_18;
  
  piVar9 = aiStack_44;
  iVar7 = -1;
  iStack_1c = param_1;
  local_18 = param_2;
  do {
    iVar5 = local_18[1] + iVar7;
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + 5);
    if (iVar5 < 0) {
      iVar5 = iVar5 + uVar1;
    }
    else if ((int)uVar1 <= iVar5) {
      iVar5 = iVar5 - uVar1;
    }
    iVar3 = -1;
    do {
      iVar2 = *local_18 + iVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
      }
      else {
        uVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
        if ((int)uVar1 <= iVar2) {
          iVar2 = iVar2 - uVar1;
        }
      }
      iVar3 = iVar3 + 1;
      *piVar9 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4) * iVar5 + iVar2;
      piVar9 = piVar9 + 1;
    } while (iVar3 < 2);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  uVar8 = 0;
  uVar6 = 0;
  uVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + aiStack_44[uVar1] * 4 + 8) == 0) {
      *(undefined **)(uVar1 * 4 + param_1 + 8) = &gUnknown_08071020;
      uVar8 = uVar8 | 1 << (uVar1 & 0xff);
    }
    else {
      uVar4 = 0;
      do {
        if (*(int *)(uVar4 * 4 + param_1 + 0x2c) == aiStack_44[uVar1]) {
          uVar6 = uVar6 | 1 << (uVar4 & 0xff);
          uVar8 = uVar8 | 1 << (uVar1 & 0xff);
          *(uint *)(uVar1 * 4 + param_1 + 8) = uVar4 * 0x400 + param_1 + 0x3a0;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 9);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 9);
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0xff) & uVar8) == 0) {
      uVar4 = 0;
      do {
        if ((1 << (uVar4 & 0xff) & uVar6) == 0) {
          uVar6 = uVar6 | 1 << (uVar4 & 0xff);
          iVar7 = aiStack_44[uVar1];
          *(int *)(uVar4 * 4 + param_1 + 0x2c) = iVar7;
          iStack_20 = uVar4 * 0x400 + param_1 + 0x3a0;
          *(int *)(uVar1 * 4 + param_1 + 8) = iStack_20;
          Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4 + 8),auStack_444);
          sub_08049138(iStack_20,(int)auStack_444,0x400);
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 9);
    }
    uVar1 = uVar1 + 1;
    if (8 < (int)uVar1) {
      iVar7 = *local_18;
      *(int *)(param_1 + 0x54) = local_18[1];
      *(int *)(param_1 + 0x50) = iVar7;
      return;
    }
  } while( true );
}


/* sub_080086D8 @ 0x080086D8 */

void sub_080086D8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar4 = param_2 + 2;
  if ((*(int *)(param_1 + 0x58) != param_2[4]) || (*(int *)(param_1 + 0x5c) != *piVar4)) {
    *(int *)(param_1 + 0x58) = param_2[4];
    iVar1 = 0x38;
    *(int *)(param_1 + 0x5c) = *piVar4;
    do {
      iVar2 = iVar1 * 2;
      iVar7 = param_2[4] + (int)*(short *)(&gUnknown_08071420 + iVar2) >> 10;
      uVar3 = param_2[4] + (int)*(short *)(&gUnknown_08071420 + iVar2) & 0x3ff;
      iVar5 = ((int)(*(int *)(&gUnknown_087B72EC + ((uint)(iVar7 << 0x18) >> 0x16)) *
                     (0x400 - uVar3) +
                    uVar3 * *(int *)(&gUnknown_087B72EC + ((uint)((iVar7 + 1) * 0x1000000) >> 0x16))
                    ) >> 0x10) * *piVar4 >> 10;
      iVar8 = iVar1 * 4 + param_1;
      *(int *)(iVar8 + -0x80) =
           iVar5 * ((int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar7 + 0x40) * 0x1000000) >> 0x16)
                                  ) * (0x400 - uVar3) +
                         *(int *)(&gUnknown_087B6EEC + ((uint)((iVar7 + 0x41) * 0x1000000) >> 0x16))
                         * uVar3) >> 0x10) >> 10;
      iVar1 = iVar1 + 1;
      *(int *)(iVar8 + 0x120) = (int)(iVar5 * (uint)*(ushort *)(&gUnknown_08071560 + iVar2)) >> 10;
    } while (iVar1 < 0xa0);
  }
  iVar1 = 0x38;
  do {
    iVar2 = iVar1 * 4 + param_1;
    iVar5 = *(int *)(iVar2 + -0x80);
    iVar7 = param_2[0x14];
    iVar8 = param_2[1];
    iVar2 = *(int *)(iVar2 + 0x120);
    iVar6 = iVar2 * param_2[0x11] * 10 >> 0x17;
    iVar9 = iVar2 * param_2[0x13] * 10 >> 0x17;
    iVar2 = iVar1 * 0x10;
    iVar1 = iVar1 + 1;
    piVar4 = (int *)(DAT_03001a4c + iVar2);
    piVar4[2] = (*param_2 - (iVar5 * param_2[0x12] >> 10) >> 2) + iVar6 * -0x78;
    *piVar4 = iVar6;
    piVar4[1] = iVar9;
    piVar4[3] = (iVar8 - (iVar5 * iVar7 >> 10) >> 2) + iVar9 * -0x78;
  } while (iVar1 < 0xa0);
  return;
}


