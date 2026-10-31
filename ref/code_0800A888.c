/* Ghidra reference decompilation of code_0800A888 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0800A888 @ 0x0800A888 */

uint sub_0800A888(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_03001c34 != 0) {
    iVar2 = *(int *)(DAT_03001c34 + 0x1a0) - *(int *)(param_2 + 0x1a0);
    iVar3 = *(int *)(DAT_03001c34 + 0x1a4) - *(int *)(param_2 + 0x1a4);
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = -iVar2;
    }
    iVar5 = iVar3;
    if (iVar3 < 0) {
      iVar5 = -iVar3;
    }
    if (iVar4 < iVar5) {
      if (iVar3 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
      }
    }
    else if (iVar2 < 1) {
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 3;
    }
  }
  uVar1 = *(int *)(param_1 + 4) - 1;
  *(uint *)(param_1 + 4) = uVar1;
  return uVar1 >> 0x1f;
}


/* sub_0800A8E8 @ 0x0800A8E8 */

undefined4 * sub_0800A8E8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B338;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0800A90E @ 0x0800A90E */

undefined4 * sub_0800A90E(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B338;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0800A93C @ 0x0800A93C */

void sub_0800A93C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0xff;
    *param_1 = 0;
    param_1[2] = param_2;
  }
  return;
}


/* sub_0800A95A @ 0x0800A95A */

void sub_0800A95A(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  do {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      iVar2 = __call_via_r2(piVar1,param_2,*(int *)(*piVar1 + 8) + *piVar1);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = *(int *)*param_1;
      __call_via_r1((int *)*param_1,*(int *)(iVar2 + 4) + iVar2);
    }
    iVar2 = (*(byte *)(param_1 + 1) + 1) * 0x1000000;
    *(char *)(param_1 + 1) = (char)((uint)iVar2 >> 0x18);
    if (*(int *)param_1[2] <= iVar2 >> 0x18) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    puVar3 = (undefined4 *)((int *)param_1[2])[(char)param_1[1] + 1];
    iVar2 = __call_via_r2(puVar3,param_2,*puVar3);
    *param_1 = iVar2;
  } while( true );
}


/* sub_0800A9B0 @ 0x0800A9B0 */

undefined4 * sub_0800A9B0(void)

{
  return &DAT_03001af4;
}


/* sub_0800A9B4 @ 0x0800A9B4 */

undefined4 sub_0800A9B4(void)

{
  return 0;
}


/* sub_0800A9B8 @ 0x0800A9B8 */

void sub_0800A9B8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_2,1,param_3,*(int *)(*param_2 + 0x74) + *param_2,param_4);
  return;
}


/* sub_0800A9D0 @ 0x0800A9D0 */

void sub_0800A9D0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 0x34);
      iVar2 = *piVar1;
      __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


/* sub_0800A9FE @ 0x0800A9FE */

void sub_0800A9FE(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  sub_0800A9D0();
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    do {
      piVar1 = (int *)param_1[iVar3 * 2 + 2];
      iVar2 = *piVar1;
      __call_via_r2(piVar1,*param_1,*(int *)(iVar2 + 8) + iVar2);
      piVar1 = (int *)param_1[iVar3 * 2 + 2];
      iVar2 = *piVar1;
      __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[1]);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800AA4A @ 0x0800AA4A */

void sub_0800AA4A(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(&gUnknown_0870F514 + param_2 * 8);
  piVar2 = (int *)__call_via_r2(puVar1,*param_1,*puVar1,param_4,param_4);
  iVar3 = param_1[1];
  puVar1 = param_1 + iVar3 * 2 + 1 + -1;
  iVar4 = *(int *)*puVar1;
  __call_via_r2((int *)*puVar1,*param_1,*(int *)(iVar4 + 8) + iVar4);
  iVar4 = param_1[0xc];
  uVar5 = *puVar1;
  param_1[0xc] = iVar4 + 1;
  param_1[iVar4 + 0xd] = uVar5;
  *puVar1 = piVar2;
  param_1[iVar3 * 2 + 1] = &gUnknown_0870F514 + param_2 * 8;
  __call_via_r2(piVar2,*param_1,*(int *)*piVar2 + *piVar2);
  return;
}


/* sub_0800AA9C @ 0x0800AA9C */

void sub_0800AA9C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)param_1[1] < 5) {
    puVar1 = *(undefined4 **)(&gUnknown_0870F514 + param_2 * 8);
    piVar2 = (int *)__call_via_r2(puVar1,*param_1,*puVar1,param_4,param_4);
    iVar3 = param_1[1];
    param_1[1] = iVar3 + 1;
    param_1[iVar3 * 2 + 2] = piVar2;
    param_1[iVar3 * 2 + 3] = &gUnknown_0870F514 + param_2 * 8;
    __call_via_r2(piVar2,*param_1,*(int *)*piVar2 + *piVar2);
  }
  return;
}


/* sub_0800AAD8 @ 0x0800AAD8 */

void sub_0800AAD8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 1;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  piVar2 = (int *)piVar1[(iVar3 + -1) * 2 + 1];
  iVar4 = *piVar2;
  __call_via_r2(piVar2,*param_1,*(int *)(iVar4 + 8) + iVar4,param_4,param_4);
  iVar4 = param_1[0xc];
  iVar3 = piVar1[(iVar3 + -1) * 2 + 1];
  param_1[0xc] = iVar4 + 1;
  param_1[iVar4 + 0xd] = iVar3;
  return;
}


/* sub_0800AB0C @ 0x0800AB0C */

void sub_0800AB0C(undefined4 *param_1)

{
  int iVar1;
  
  sub_0800A9D0();
  iVar1 = *(int *)param_1[param_1[1] * 2];
  __call_via_r2((int *)param_1[param_1[1] * 2],*param_1,*(int *)(iVar1 + 4) + iVar1);
  return;
}


/* sub_0800AB2E @ 0x0800AB2E */

void sub_0800AB2E(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800A9D0();
  __call_via_r3(*(int *)(param_1[param_1[1] * 2 + 1] + 4),*param_1,param_2,
                *(undefined4 *)(*(int *)(param_1[param_1[1] * 2 + 1] + 4) + 4),param_4);
  return;
}


/* sub_0800AB54 @ 0x0800AB54 */

void sub_0800AB54(int param_1)

{
  undefined1 local_40 [2];
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  
  sub_0803F540(local_40,0x20,8);
  local_34 = &gUnknown_0806F150;
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_34 = &gUnknown_0806E050;
  }
  local_3d = (undefined1)*(undefined4 *)(param_1 + 0x18);
  local_3e = 1;
  local_20 = 0x803f70d;
  local_40[0] = 1;
  local_38 = 7;
  local_3c = 0x10;
  *(undefined1 *)(param_1 + 8) = 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  sub_08046E40(local_1c,0,local_10);
  sub_0803DC96(local_40,&_0800AD88,*(int *)(param_1 + 0x14) + 0x3ff >> 10);
  sub_0804915C((int)local_40,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
               0x8071710);
  sub_0803F58C(local_40,0);
  return;
}


/* sub_0800ABC8 @ 0x0800ABC8 */

undefined4 *
sub_0800ABC8(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x28), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x100);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804C904;
    param_1[5] = *param_3;
    param_1[6] = param_4;
    param_1[7] = param_5;
    iVar1 = param_2[1];
    param_1[8] = (*param_2 + -0x10) * 8;
    param_1[9] = iVar1 << 3;
    sub_0800AB54(param_1);
  }
  return param_1;
}


/* sub_0800AC40 @ 0x0800AC40 */

void sub_0800AC40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + -4;
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 4) = (iVar1 >> 3) + 8;
  }
  return;
}


/* sub_0800AC64 @ 0x0800AC64 */

undefined4 sub_0800AC64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20) >> 3;
  iVar1 = *(int *)(param_1 + 0x24) >> 3;
  if ((((DAT_030019bc < iVar3 + 0x20) && (iVar3 < DAT_030019c4)) && (DAT_030019c0 < iVar1 + 8)) &&
     (iVar1 < DAT_030019c8)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0800ACB6 @ 0x0800ACB6 */

undefined4 sub_0800ACB6(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x40006000;
  uVar1 = (uint)(((*(int *)(param_1 + 0x20) >> 3) - DAT_030019cc) * 0x800000) >> 7 | 0x40006000;
  *puVar2 = uVar1;
  *puVar2 = uVar1 | (*(int *)(param_1 + 0x24) >> 3) - DAT_030019d0 & 0xffU;
  puVar2[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000) + 0x400;
  return 0;
}


/* sub_0800AD10 @ 0x0800AD10 */

undefined4 sub_0800AD10(void)

{
  return 1;
}


/* sub_0800AD14 @ 0x0800AD14 */

undefined4 sub_0800AD14(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 10) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  else if (param_2 == 0xc) {
    __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
  }
  return 0;
}


/* sub_0800AD3E @ 0x0800AD3E */

undefined4 sub_0800AD3E(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (iVar1 < 0x100) {
    uVar2 = 0;
  }
  else {
    uVar2 = sub_0800ABC8(0,param_1,param_2,param_3,param_4,param_1,uVar2,uVar3,uVar4);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return uVar2;
}


/* sub_0800ADA0 @ 0x0800ADA0 */

void sub_0800ADA0(int param_1)

{
  int a0;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  a0 = param_1 + 0x80;
  local_1c = 0x40;
  local_18 = 0x40;
  local_24 = 0;
  local_20 = 0;
  sub_0804915C(a0,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0x78) * 0x20),(int)&local_24);
  local_24 = 0x40;
  local_1c = 0x80;
  local_20 = 0;
  local_18 = 0x40;
  sub_0804915C(a0,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0x7a) * 0x20),(int)&local_24);
  local_20 = 0;
  local_24 = 0x80;
  local_1c = 0xa0;
  local_18 = 0x40;
  sub_0804915C(a0,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0x7c) * 0x20),(int)&local_24);
  return;
}


/* sub_0800AE00 @ 0x0800AE00 */

undefined4 sub_0800AE00(int param_1,int *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_2;
  if (*psVar4 == 10) {
    *param_2 = (int)(psVar4 + 1);
  }
  else if (psVar4 != *(short **)(param_1 + 0x10)) {
    return 0;
  }
  sVar1 = *(short *)*param_2;
  while (sVar1 == 8) {
    if (param_3 != 0) {
      *(char *)(param_1 + 0x83) = (char)*(undefined2 *)(*param_2 + 2);
    }
    iVar2 = *param_2;
    *param_2 = iVar2 + 4;
    sVar1 = *(short *)(iVar2 + 4);
  }
  if (*(short *)*param_2 == 0x2d) {
    psVar4 = (short *)*param_2 + 1;
    *param_2 = (int)psVar4;
    sVar1 = *psVar4;
    while (sVar1 == 0x20) {
      iVar2 = *param_2;
      *param_2 = iVar2 + 2;
      sVar1 = *(short *)(iVar2 + 2);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* sub_0800AE64 @ 0x0800AE64 */

undefined4 sub_0800AE64(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50) + -1;
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_0800AE74 @ 0x0800AE74 */

void sub_0800AE74(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  iVar6 = param_1 + 0x80;
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18))) {
    if (*(int *)(param_1 + 0x30) != 0) {
      if (*(int *)(param_1 + 0x48) != 0) {
        sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x48));
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (**(short **)(param_1 + 0x18) != 0) {
        Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x10),
                          *(undefined4 *)(param_1 + 0xa4));
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x2c) = 1;
        return;
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        if ((int)((uint)DAT_03003304 << 0x1e) < 0) {
          DAT_03002a60 = 0xffffffff;
        }
        else {
          DAT_03002a60 = *(undefined4 *)(param_1 + 0x34);
        }
      }
      *(undefined4 *)(param_1 + 0xb4) = 0x800ae65;
      return;
    }
    goto _0800B022;
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) goto _0800B022;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x0e';
  }
  else {
    iStack_2c = 0;
    uStack_24 = *(undefined4 *)(param_1 + 0x14);
    puStack_18 = &uStack_24;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
      iVar4 = sub_0800AE00(param_1,puStack_18,0);
      if ((iVar4 != 0) &&
         (*(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1, *(int *)(param_1 + 0x28) == 0)) {
        iVar7 = iVar7 + -0x14;
      }
      sub_0803DE6A(iVar6,uStack_24,iVar7,&uStack_28);
      iStack_2c = iStack_2c + 1;
    } while ((iStack_2c < **(int **)(param_1 + 0x4c)) && (iStack_1c == 0));
    puVar2 = *(undefined4 **)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x28) == 0) {
      cVar1 = (char)puVar2[3];
    }
    else {
      cVar1 = (char)puVar2[3] + ((char)*puVar2 - (char)iStack_2c) * '\a';
    }
    *(char *)(param_1 + 0x65) = cVar1;
    if ((*(int *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x48) == 0)) {
      iVar4 = 0;
      if (param_1 != 0) {
        iVar4 = param_1 + 0xc;
      }
      uVar3 = sub_080178C8(0,iVar4);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
  iVar4 = sub_0800AE00(param_1,param_1 + 0x14,1);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    iVar7 = iVar7 + -0x14;
  }
  sub_0803DE6A(iVar6,*(undefined4 *)(param_1 + 0x14),iVar7,&uStack_28);
  *(int *)(param_1 + 0x20) = iStack_1c;
  *(undefined4 *)(param_1 + 0x14) = uStack_28;
  *(undefined4 *)(param_1 + 0x18) = uStack_24;
  if (*(int *)(param_1 + 0x28) == 0) {
    cVar1 = (char)*(undefined4 *)(*(int *)(param_1 + 0x4c) + 8);
    if (iVar4 != 0) {
      *(char *)(param_1 + 100) = cVar1 + '\x14';
      goto _0800AFF2;
    }
    *(char *)(param_1 + 100) = cVar1;
  }
  else {
    *(char *)(param_1 + 100) =
         (char)*(undefined4 *)(*(int *)(param_1 + 0x4c) + 8) + (char)(iVar7 - iStack_20 >> 1);
    if (iVar4 != 0) {
_0800AFF2:
      iVar4 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x3c) = iVar4 + 1;
      iVar4 = iVar4 * 2 + param_1;
      *(undefined1 *)(iVar4 + 0x40) = *(undefined1 *)(param_1 + 100);
      *(undefined1 *)(iVar4 + 0x41) = *(undefined1 *)(param_1 + 0x65);
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar4 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar4;
  if (**(int **)(param_1 + 0x4c) <= iVar4) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
_0800B022:
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    do {
      if (**(short **)(param_1 + 0x14) != 8) {
        *(uint *)(param_1 + 0x84) = (uint)*(byte *)(param_1 + 100);
        *(uint *)(param_1 + 0x88) = (uint)*(byte *)(param_1 + 0x65);
        sub_0803DE50(iVar6,**(undefined2 **)(param_1 + 0x14));
        uVar5 = (uint)**(ushort **)(param_1 + 0x14);
        if (uVar5 < 0xff) {
          iVar6 = **(int **)(param_1 + 0x8c);
          cVar1 = (char)*(undefined2 *)(iVar6 + (uint)*(ushort *)(iVar6 + uVar5 * 2) * 2);
        }
        else {
          cVar1 = (char)(*(int **)(param_1 + 0x8c))[1];
        }
        *(char *)(param_1 + 100) = cVar1 + '\x01' + *(char *)(param_1 + 100);
        *(ushort **)(param_1 + 0x14) = *(ushort **)(param_1 + 0x14) + 1;
        return;
      }
      *(char *)(param_1 + 0x83) = (char)(*(short **)(param_1 + 0x14))[1];
      iVar4 = *(int *)(param_1 + 0x14) + 4;
      *(int *)(param_1 + 0x14) = iVar4;
    } while (iVar4 != *(int *)(param_1 + 0x18));
  }
  return;
}


/* sub_0800B0A8 @ 0x0800B0A8 */

undefined4 sub_0800B0A8(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  
  if (((DAT_03003304 & 1) == 0) && (-1 < (int)((uint)DAT_03003304 << 0x1e))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  if (*(int *)(param_1 + 0x38) != 0) {
    if (((int)((uint)DAT_03003304 << 0x19) < 0) && (*(int *)(param_1 + 0x34) != 0)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
    if (((int)((uint)DAT_03003304 << 0x18) < 0) &&
       (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38) + -1)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
  }
  if (((int)((uint)DAT_03003302 << 0x16) < 0) && (0x22 < *(int *)(param_1 + 0x60))) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -2;
  }
  if (((int)((uint)DAT_03003302 << 0x17) < 0) && (*(int *)(param_1 + 0x60) < 0x7e)) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 2;
  }
  iVar3 = 1;
  uVar2 = (uint)(byte)DAT_03001914;
  if (uVar2 < 4) {
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      __16__rt_sdiv(5 - uVar2);
      if (extraout_r1 != 0) {
        return 0;
      }
    }
  }
  else {
    iVar3 = uVar2 - 3;
  }
  do {
    sub_0800AE74(param_1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  sub_0800ADA0(param_1);
  return 0;
}


/* sub_0800B156 @ 0x0800B156 */

undefined4 sub_0800B156(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar1;
  if (7 < iVar1) {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    if (**(short **)(param_1 + 0x14) == 0x5e) {
      *(short **)(param_1 + 0x14) = *(short **)(param_1 + 0x14) + 1;
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0xb4) = 0x800b0a9;
  }
  return 0;
}


/* sub_0800B188 @ 0x0800B188 */

undefined4 *
sub_0800B188(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  puStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  puStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xb8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804E454;
    param_1[3] = &_080496B4;
    *param_1 = &_08049F60;
    param_1[3] = &DAT_08049f90;
    sub_0803F540(param_1 + 0x20,0xa0,0x40);
    param_1[5] = param_3;
    param_1[10] = 0;
    param_1[7] = 0;
    uVar3 = *puStack_18;
    uVar2 = puStack_18[1];
    param_1[0xb] = 1;
    param_1[0x18] = uVar2;
    param_1[0x17] = uVar3;
    param_1[8] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0x12] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    param_1[0x16] = 0;
    param_1[0x23] = &gUnknown_0806EE6C;
    *(undefined1 *)((int)param_1 + 0x81) = 0xf;
    sub_08049144((int)(param_1 + 0x1e),iStack_20,8);
    param_1[9] = 0;
    if (param_6 == 0) {
      param_1[0x15] = 0xa0;
      iVar1 = param_1[0x17];
      param_1[0x1a] = iVar1 + -0x50;
      param_1[0x1b] = iVar1 + -0x10;
      param_1[0x1c] = iVar1 + 0x30;
    }
    else {
      param_1[9] = 1;
      param_1[0x15] = 0xe0;
      param_1[0x2a] = 0x40;
      param_1[0x2c] = 0x1000;
      param_1[0x2b] = 0x40;
      param_1[0x26] = 0x40;
      param_1[0x27] = 0x40;
      Wfz_LoadContainer(param_6,param_1[0x29]);
      uStack_2c = 0x40;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_28 = 0x40;
      sub_0804915C((int)(param_1 + 0x20),
                   (int)(&DAT_06010000 + (uint)*(ushort *)((int)param_1 + 0x7e) * 0x20),
                   (int)&uStack_34);
      param_1[0x2a] = 0xa0;
      param_1[0x2b] = 0x40;
      param_1[0x2c] = 0x2800;
      param_1[0x26] = param_1[0x2a];
      param_1[0x27] = 0x40;
      iVar1 = param_1[0x17];
      if (param_7 == 0) {
        param_1[0x1a] = iVar1 + -0x70;
        param_1[0x1b] = iVar1 + -0x30;
        param_1[0x1d] = iVar1 + 0x30;
        param_1[0x1c] = iVar1 + 0x10;
      }
      else {
        param_1[0x1d] = iVar1 + -0x70;
        param_1[0x1a] = iVar1 + -0x30;
        param_1[0x1c] = iVar1 + 0x50;
        param_1[0x1b] = iVar1 + 0x10;
      }
    }
    param_1[0x13] = &UNK_08071730 + param_5 * 0x14;
    Wfz_LoadContainer(*(undefined4 *)(&DAT_08071740 + param_5 * 0x14),param_1[0x29]);
    *(undefined1 *)((int)param_1 + 0x83) = 2;
    sub_0800ADA0(param_1);
    param_1[0x14] = 1;
    param_1[0x2d] = 0x800b157;
  }
  return param_1;
}


/* sub_0800B2BE @ 0x0800B2BE */

void sub_0800B2BE(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &_08049F60;
  param_1[3] = &DAT_08049f90;
  for (iVar1 = param_1[9] + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
    sub_0801142A(&DAT_03001c4c,*(undefined2 *)((int)param_1 + iVar1 * 2 + 0x78));
  }
  if (param_1[0x12] != 0) {
    sub_08011944(&DAT_03001c4c,param_1[0x12]);
  }
  sub_0803F58C(param_1 + 0x20,0);
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800B32C @ 0x0800B32C */

void sub_0800B32C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = -((int)((uint)DAT_03003304 << 0x1e) >> 0x1f);
  puVar2 = param_4;
  if (iVar1 != 0) {
    puVar2 = &DAT_03002a60;
    DAT_03002a60 = 0xffffffff;
    iVar1 = 0x800ae65;
    *(undefined4 *)(param_1 + 0xb4) = 0x800ae65;
  }
  __call_via_r1(param_1,*(undefined4 *)(param_1 + 0xb4),iVar1,puVar2,param_4);
  return;
}


/* sub_0800B354 @ 0x0800B354 */

void sub_0800B354(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x68);
  iVar2 = *(int *)(param_2 + 0x34) * 2 + param_2;
  bVar1 = *(byte *)(iVar2 + 0x40);
  param_1[1] = *(int *)(param_2 + 0x60) + (uint)*(byte *)(iVar2 + 0x41) + -0x20;
  *param_1 = iVar3 + (uint)bVar1;
  return;
}


/* sub_0800B374 @ 0x0800B374 */

int sub_0800B374(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    iVar2 = param_2[1];
    puVar13 = (uint *)*param_2;
    param_2[1] = iVar2 + 0x20;
    iVar3 = param_2[2];
    param_2[2] = iVar3 + 1;
    iVar10 = *(int *)(param_1 + 0x50);
    uVar1 = __16__rt_sdiv(iVar10,0x800);
    iVar10 = iVar10 + -8;
    iVar7 = iVar10 * *(int *)(param_1 + 0x5c);
    iVar8 = *(int *)(param_1 + 0x60);
    *puVar13 = 0xc0002100;
    iVar11 = iVar10 * 0x20;
    iVar4 = (*(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x68) + iVar11) - iVar7;
    uVar12 = iVar8 + 0xe0U & 0xff;
    uVar5 = (uint)(((int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + iVar4) >> 3) << 0x17) >> 7 | 0xc0002100
            | uVar12;
    *puVar13 = uVar5;
    puVar13[1] = *(ushort *)(param_1 + 0x78) & 0x3ff | puVar13[1] & 0xfffffc00;
    uVar9 = (uint)(iVar3 << 0x1b) >> 2;
    *puVar13 = uVar5 | uVar9;
    puVar13[2] = 0xc0002100;
    iVar3 = (*(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x6c) + iVar11) - iVar7;
    uVar5 = (uint)(((int)(((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3) >> 3) << 0x17) >> 7 | 0xc0002100;
    puVar13[2] = uVar5 | uVar12;
    puVar13[3] = *(ushort *)(param_1 + 0x7a) & 0x3ff | puVar13[3] & 0xfffffc00;
    puVar13[2] = uVar9 | uVar5 | uVar12;
    puVar6 = puVar13 + 4;
    *puVar6 = 0xc000a100;
    iVar3 = (*(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x70) + iVar10 * 0x10) - iVar7;
    uVar5 = (uint)(((int)(((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3) >> 3) << 0x17) >> 7 | 0xc000a100;
    *puVar6 = uVar5 | uVar12;
    puVar13[5] = *(ushort *)(param_1 + 0x7c) & 0x3ff | puVar13[5] & 0xfffffc00;
    *puVar6 = uVar5 | uVar12 | uVar9;
    puVar6 = puVar13 + 6;
    if (*(int *)(param_1 + 0x24) != 0) {
      *puVar6 = 0xc0002100;
      iVar7 = (*(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x74) + iVar11) - iVar7;
      uVar5 = (uint)(((int)(((uint)(iVar7 >> 0x1f) >> 0x1d) + iVar7) >> 3) << 0x17) >> 7 |
              0xc0002100;
      *puVar6 = uVar5 | uVar12;
      puVar13[7] = *(ushort *)(param_1 + 0x7e) & 0x3ff | puVar13[7] & 0xfffffc00;
      *puVar6 = uVar5 | uVar12 | uVar9;
      puVar6 = puVar13 + 8;
    }
    *(undefined2 *)(iVar2 + 6) = uVar1;
    *(undefined2 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0x16) = 0;
    *(undefined2 *)(iVar2 + 0x1e) = uVar1;
    *param_2 = puVar6;
    iVar2 = 0;
  }
  return iVar2;
}


/* sub_0800B530 @ 0x0800B530 */

undefined4 sub_0800B530(undefined4 param_1)

{
  if (*(short *)(&DAT_0300158c + (uint)DAT_03001068 * 0x68) == 0) {
    sub_08011944(&DAT_03001c4c,param_1);
    return 0;
  }
  return 1;
}


/* sub_0800B55C @ 0x0800B55C */

undefined4 sub_0800B55C(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  uVar3 = (uint)(iVar1 * 0x8000000) >> 0x1e;
  if (*(uint *)(param_1 + 0x10) != uVar3) {
    *(uint *)(param_1 + 0x10) = uVar3;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 (int)(&gUnknown_087144D8 + uVar3 * 0x100),0x100);
  }
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x405c2000;
  *puVar2 = *(uint *)(*(int *)(param_1 + 0x18) + 0x28) & 0xff | 0x405c2000;
  puVar2[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000) + 0x400;
  return 0;
}


/* sub_0800B5C2 @ 0x0800B5C2 */

undefined4 sub_0800B5C2(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800B5CE @ 0x0800B5CE */

void sub_0800B5CE(int param_1)

{
  sub_08011818();
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}


/* sub_0800B5DE @ 0x0800B5DE */

undefined4 sub_0800B5DE(int param_1,int param_2)

{
  if (param_2 == 0xb) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return 0;
  }
  return 0;
}


/* sub_0800B5F0 @ 0x0800B5F0 */

undefined4 * sub_0800B5F0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x200;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x200);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804B4D8;
    sub_0803F540(param_1 + 6,0x20,0x10);
    param_1[4] = 0xffffffff;
    param_1[5] = param_2;
    param_1[9] = &gUnknown_0807012C;
    *(undefined1 *)((int)param_1 + 0x1b) = 2;
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    param_1[0xe] = 0x803f70d;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return param_1;
}


/* sub_0800B664 @ 0x0800B664 */

undefined4 sub_0800B664(undefined4 param_1)

{
  if ((-1 < *(int *)(&DAT_03001568 + (uint)DAT_03001068 * 0x68)) &&
     ((int)((uint)(byte)(&gUnknown_086B82EC)
                        [(uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18] << 0x1c) < 0
     )) {
    return 1;
  }
  sub_08011944(&DAT_03001c4c,param_1);
  return 0;
}


/* sub_0800B6A2 @ 0x0800B6A2 */

undefined4 sub_0800B6A2(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  short extraout_r1;
  short extraout_r1_00;
  
  iVar5 = *(int *)(&DAT_03001568 + (uint)DAT_03001068 * 0x68) * 0x445 >> 0x10;
  if (*(int *)(param_1 + 0x10) != iVar5) {
    *(int *)(param_1 + 0x10) = iVar5;
    sub_080530F4();
    uVar1 = extraout_r1 + 0x30;
    sVar4 = sub_08053010();
    uVar2 = extraout_r1_00 + 0x30;
    uVar3 = sVar4 + 0x30;
    sub_08046E40(*(undefined4 *)(param_1 + 0x3c),0,*(undefined4 *)(param_1 + 0x48));
    if (uVar1 < 0xff) {
      uVar6 = (uint)*(ushort *)
                     (&gUnknown_0806F500 +
                     (uint)*(ushort *)(&gUnknown_0806F500 + (uint)uVar1 * 2) * 2);
    }
    else {
      uVar6 = 0;
    }
    *(uint *)(param_1 + 0x1c) = 8 - (uVar6 + 1);
    *(undefined4 *)(param_1 + 0x20) = 0xf;
    iVar5 = param_1 + 0x18;
    sub_0803DE50(iVar5,uVar1);
    *(undefined4 *)(param_1 + 0x1c) = 8;
    *(undefined4 *)(param_1 + 0x20) = 0xf;
    sub_0803DE50(iVar5,0x3a);
    if (uVar2 < 0xff) {
      uVar6 = (uint)*(ushort *)
                     (&gUnknown_0806E05C +
                     (uint)*(ushort *)(&gUnknown_0806E05C + (uint)uVar2 * 2) * 2);
    }
    else {
      uVar6 = 0xb;
    }
    *(uint *)(param_1 + 0x1c) = 0x12 - (uVar6 + 1);
    *(undefined4 *)(param_1 + 0x20) = 0xf;
    sub_0803DE50(iVar5,uVar2);
    if (uVar3 < 0xff) {
      uVar6 = (uint)*(ushort *)
                     (&gUnknown_0806E05C +
                     (uint)*(ushort *)(&gUnknown_0806E05C + (uint)uVar3 * 2) * 2);
    }
    else {
      uVar6 = 0xb;
    }
    *(uint *)(param_1 + 0x1c) = 0x18 - (uVar6 + 1);
    *(undefined4 *)(param_1 + 0x20) = 0xf;
    sub_0803DE50(iVar5,uVar3);
    sub_0803F9B8(iVar5,&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20);
  }
  puVar7 = (uint *)*param_2;
  *param_2 = puVar7 + 2;
  *puVar7 = 0x80086000;
  *puVar7 = 0x88U - *(int *)(*(int *)(param_1 + 0x14) + 0x28) & 0xff | 0x80086000;
  puVar7[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar7[1] & 0xfffff000) + 0x400;
  return 0;
}


/* sub_0800B820 @ 0x0800B820 */

undefined4 sub_0800B820(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800B82C @ 0x0800B82C */

void sub_0800B82C(int param_1)

{
  sub_08011818();
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}


/* sub_0800B83C @ 0x0800B83C */

undefined4 sub_0800B83C(int param_1,int param_2)

{
  if (param_2 == 0xb) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return 0;
  }
  return 0;
}


/* sub_0800B84E @ 0x0800B84E */

void sub_0800B84E(int param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 0xff;
  return;
}


/* sub_0800B854 @ 0x0800B854 */

undefined4 * sub_0800B854(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0x500;
  iVar1 = sub_0801124C(&DAT_03001c4c,0x500);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0x500);
    iVar1 = sub_0801124C(&DAT_03001c4c,0x500);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_08049FEC;
  *(undefined1 *)(param_1 + 2) = 0x10;
  param_1[1] = 0;
  param_1[10] = 8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 7) = 0xff;
  return param_1;
}


/* sub_0800B8B2 @ 0x0800B8B2 */

void sub_0800B8B2(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049FEC;
  if (param_1[6] != 0) {
    sub_08011944(&DAT_03001c4c,param_1[6]);
  }
  if (param_1[0xb] != 0) {
    sub_08011944(&DAT_03001c4c,param_1[0xb]);
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


/* sub_0800B8FC @ 0x0800B8FC */

void sub_0800B8FC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 < -0x10) {
    sub_08011944(&DAT_03001c4c,param_1,0xfffffff0,param_4,param_4);
  }
  else if (8 < iVar1) {
    *(undefined4 *)(param_1 + 0x28) = 8;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* sub_0800B928 @ 0x0800B928 */

void sub_0800B928(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x2c) == 0) && (-1 < *(int *)(&DAT_03001568 + (uint)DAT_03001068 * 0x68)))
  {
    if ((int)((uint)(byte)(&gUnknown_086B82EC)
                          [(uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18] << 0x1c) <
        0) {
      uVar1 = sub_0800B5F0(0,param_1,param_3,
                           (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 2,param_4);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
  }
  if (((int)((uint)DAT_03003304 << 0x16) < 0) && (iVar2 = sub_080043C2(&DAT_03001068), iVar2 != 0))
  {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
  }
  sub_0800B8FC(param_1);
  return;
}


/* sub_0800B99C @ 0x0800B99C */

void sub_0800B99C(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  undefined1 auStack_520 [512];
  undefined1 auStack_320 [768];
  undefined4 local_20;
  undefined4 local_1c;
  int iStack_18;
  
  puVar3 = (uint *)*param_2;
  *puVar3 = 0x80086000;
  *puVar3 = *(uint *)(param_1 + 0x28) & 0xff | 0x80086000;
  puVar3[1] = (puVar3[1] & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff) + 0x400;
  puVar3[2] = 0x40282000;
  puVar3[2] = *(uint *)(param_1 + 0x28) & 0xff | 0x40282000;
  puVar3[3] = (puVar3[3] & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0x10 & 0x3ff) + 0x400;
  puVar3[4] = 0x80386000;
  puVar3[4] = *(uint *)(param_1 + 0x28) & 0xff | 0x80386000;
  puVar3[5] = (puVar3[5] & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0x18 & 0x3ff) + 0x400;
  psVar8 = (short *)(param_3 + 0x16);
  *param_2 = puVar3 + 6;
  if (((*psVar8 != 0) && (*psVar8 * 5 <= (int)*(short *)(param_3 + 0x18))) &&
     (0x3c < DAT_03000f94 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = DAT_03000f94;
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319494,0x20,0);
  }
  software_interrupt(6);
  software_interrupt(6);
  local_20._0_2_ = CONCAT11((char)*(undefined2 *)(param_3 + 0x1a) * ')',(char)*psVar8 * ')');
  software_interrupt(6);
  local_20._0_3_ = CONCAT12((char)*(undefined2 *)(param_3 + 0x1e) * ')',(undefined2)local_20);
  software_interrupt(6);
  local_20 = CONCAT13((char)*(undefined2 *)(param_3 + 0x20) * ')',(undefined3)local_20);
  uVar2 = sub_0801363E(param_3,0x48);
  local_1c._0_2_ = CONCAT11((char)(*(int *)(param_3 + 4) >> 0xf),uVar2);
  iVar4 = sub_080135A2(param_3,*(undefined1 *)(param_3 + 0x15));
  iVar5 = __call_via_r1(param_3,*(undefined4 *)(iVar4 + 0x10));
  if (iVar5 == 0) {
    iStack_18 = *(int *)(iVar4 + 8);
  }
  else {
    iStack_18 = *(int *)(iVar4 + 4);
  }
  if (local_20._2_1_ < local_20._3_1_) {
    local_20._0_3_ = CONCAT12(local_20._3_1_,(undefined2)local_20);
  }
  bVar1 = local_20._2_1_;
  if (local_20._1_1_ < local_20._2_1_) {
    local_20._0_2_ = CONCAT11(bVar1,(undefined1)local_20);
  }
  iVar4 = sub_08046C54(&local_20,(uint *)(param_1 + 0x1c),0xc);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x1c) = local_20;
    *(uint *)(param_1 + 0x20) = local_1c;
    *(int *)(param_1 + 0x24) = iStack_18;
    sub_08049138((int)auStack_520,iStack_18,0x200);
    sub_08049138((int)auStack_320,0x87137d8,0x300);
    uVar6 = local_20 & 0xff;
    if (uVar6 < 0x29) {
      do {
        iVar4 = uVar6 * 0x10;
        auStack_520[*(int *)(&DAT_08071cb0 + iVar4)] = 1;
        uVar6 = uVar6 + 1;
        auStack_520[*(int *)(&DAT_08071cb4 + iVar4)] = 1;
        auStack_520[*(int *)(&DAT_08071cb8 + iVar4)] = 1;
      } while ((int)uVar6 < 0x29);
    }
    uVar6 = 0;
    uVar7 = uVar6;
    if (local_20._3_1_ != '\0') {
      do {
        auStack_520[(&gUnknown_08071F40)[uVar7 * 4]] =
             (&gUnknown_08713FD8)[(&gUnknown_08071F40)[uVar7 * 4]];
        uVar6 = uVar7 + 1;
        auStack_520[(&DAT_08071f44)[uVar7 * 4]] = (&gUnknown_08713FD8)[(&DAT_08071f44)[uVar7 * 4]];
        auStack_520[(&DAT_08071f48)[uVar7 * 4]] = (&gUnknown_08713FD8)[(&DAT_08071f48)[uVar7 * 4]];
        uVar7 = uVar6;
      } while ((int)uVar6 < (int)(local_20 >> 0x18));
    }
    uVar7 = uVar6;
    if ((int)uVar6 < (int)(local_20 >> 0x10 & 0xff)) {
      do {
        auStack_520[(&gUnknown_08071F40)[uVar7 * 4]] =
             (&gUnknown_08713AD8)[(&gUnknown_08071F40)[uVar7 * 4]];
        uVar6 = uVar7 + 1;
        auStack_520[(&DAT_08071f44)[uVar7 * 4]] = (&gUnknown_08713AD8)[(&DAT_08071f44)[uVar7 * 4]];
        auStack_520[(&DAT_08071f48)[uVar7 * 4]] = (&gUnknown_08713AD8)[(&DAT_08071f48)[uVar7 * 4]];
        uVar7 = uVar6;
      } while ((int)uVar6 < (int)(local_20 >> 0x10 & 0xff));
    }
    if ((int)uVar6 < (int)(uint)local_20._1_1_) {
      uVar6 = (uint)local_20._1_1_;
    }
    for (; (int)uVar6 < 0x29; uVar6 = uVar6 + 1) {
      auStack_520[(&gUnknown_08071F40)[uVar6 * 4]] = 1;
      auStack_520[(&DAT_08071f44)[uVar6 * 4]] = 1;
      auStack_520[(&DAT_08071f48)[uVar6 * 4]] = 1;
    }
    uVar6 = local_1c & 0xff;
    if (uVar6 < 0x48) {
      do {
        iVar4 = uVar6 * 8;
        auStack_520[*(int *)(&gUnknown_080721D0 + iVar4)] = 1;
        uVar6 = uVar6 + 1;
        auStack_520[*(int *)(&DAT_080721d4 + iVar4)] = 1;
      } while ((int)uVar6 < 0x48);
    }
    iVar4 = (int)(char)(&gUnknown_08071CA8)[local_1c >> 8 & 0xff];
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      auStack_520[*(int *)(&gUnknown_08072410 + iVar4 * 4)] = 1;
    }
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),(int)auStack_520,
                 0x500);
  }
  return;
}


/* sub_0800BB52 @ 0x0800BB52 */

void sub_0800BB52(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  byte in_stack_00000500;
  byte in_stack_00000501;
  byte in_stack_00000502;
  byte in_stack_00000503;
  byte in_stack_00000504;
  byte in_stack_00000505;
  
  sub_08049138(param_1,param_2,param_3);
  sub_08049138(unaff_r5 + unaff_r6,0x87137d8,0x300);
  uVar1 = (uint)in_stack_00000500;
  if (uVar1 < 0x29) {
    do {
      iVar3 = uVar1 * 0x10;
      *(undefined1 *)(unaff_r5 + *(int *)(&DAT_08071cb0 + iVar3)) = 1;
      uVar1 = uVar1 + 1;
      *(undefined1 *)(unaff_r5 + *(int *)(&DAT_08071cb4 + iVar3)) = 1;
      *(undefined1 *)(unaff_r5 + *(int *)(&DAT_08071cb8 + iVar3)) = 1;
    } while ((int)uVar1 < 0x29);
  }
  uVar1 = 0;
  uVar2 = uVar1;
  if (in_stack_00000503 != 0) {
    do {
      *(undefined *)(unaff_r5 + (&gUnknown_08071F40)[uVar2 * 4]) =
           (&gUnknown_08713FD8)[(&gUnknown_08071F40)[uVar2 * 4]];
      uVar1 = uVar2 + 1;
      *(undefined *)(unaff_r5 + (&DAT_08071f44)[uVar2 * 4]) =
           (&gUnknown_08713FD8)[(&DAT_08071f44)[uVar2 * 4]];
      *(undefined *)(unaff_r5 + (&DAT_08071f48)[uVar2 * 4]) =
           (&gUnknown_08713FD8)[(&DAT_08071f48)[uVar2 * 4]];
      uVar2 = uVar1;
    } while ((int)uVar1 < (int)(uint)in_stack_00000503);
  }
  uVar2 = uVar1;
  if ((int)uVar1 < (int)(uint)in_stack_00000502) {
    do {
      *(undefined *)(unaff_r5 + (&gUnknown_08071F40)[uVar2 * 4]) =
           (&gUnknown_08713AD8)[(&gUnknown_08071F40)[uVar2 * 4]];
      uVar1 = uVar2 + 1;
      *(undefined *)(unaff_r5 + (&DAT_08071f44)[uVar2 * 4]) =
           (&gUnknown_08713AD8)[(&DAT_08071f44)[uVar2 * 4]];
      *(undefined *)(unaff_r5 + (&DAT_08071f48)[uVar2 * 4]) =
           (&gUnknown_08713AD8)[(&DAT_08071f48)[uVar2 * 4]];
      uVar2 = uVar1;
    } while ((int)uVar1 < (int)(uint)in_stack_00000502);
  }
  if ((int)uVar1 < (int)(uint)in_stack_00000501) {
    uVar1 = (uint)in_stack_00000501;
  }
  for (; (int)uVar1 < 0x29; uVar1 = uVar1 + 1) {
    *(undefined1 *)(unaff_r5 + (&gUnknown_08071F40)[uVar1 * 4]) = 1;
    *(undefined1 *)(unaff_r5 + (&DAT_08071f44)[uVar1 * 4]) = 1;
    *(undefined1 *)(unaff_r5 + (&DAT_08071f48)[uVar1 * 4]) = 1;
  }
  uVar1 = (uint)in_stack_00000504;
  if (uVar1 < 0x48) {
    do {
      iVar3 = uVar1 * 8;
      *(undefined1 *)(unaff_r5 + *(int *)(&gUnknown_080721D0 + iVar3)) = 1;
      uVar1 = uVar1 + 1;
      *(undefined1 *)(unaff_r5 + *(int *)(&DAT_080721d4 + iVar3)) = 1;
    } while ((int)uVar1 < 0x48);
  }
  iVar3 = (int)(char)(&gUnknown_08071CA8)[in_stack_00000505];
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *(undefined1 *)(unaff_r5 + *(int *)(&gUnknown_08072410 + iVar3 * 4)) = 1;
  }
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(unaff_r4 + 0xc) * 0x20),unaff_r5,0x500);
  return;
}


/* sub_0800BCC8 @ 0x0800BCC8 */

undefined4 sub_0800BCC8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x18) == 0) &&
     (*(short *)(&DAT_0300158c + (uint)DAT_03001068 * 0x68) != 0)) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_08049680;
      *(undefined2 *)((int)puVar1 + 0xe) = 0x100;
      iVar2 = sub_0801124C(&DAT_03001c4c,0x100);
      if (iVar2 == -1) {
        sub_08011732(&DAT_03001c4c,0x100);
        iVar2 = sub_0801124C(&DAT_03001c4c,0x100);
      }
      *(short *)(puVar1 + 3) = (short)iVar2;
      *puVar1 = &_0804C070;
      puVar1[4] = 0xffffffff;
      puVar1[5] = 0;
      puVar1[6] = param_1;
    }
    *(undefined4 **)(param_1 + 0x18) = puVar1;
    sub_0801191A(&DAT_03001c4c,puVar1);
  }
  sub_0800B99C(param_1,param_2,&DAT_03001560 + (uint)DAT_03001068 * 0x68);
  return 0;
}


/* sub_0800BD5A @ 0x0800BD5A */

undefined4 sub_0800BD5A(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0xb) {
    *(undefined1 *)(param_1 + 0x1c) = 0xff;
    uVar1 = 0;
  }
  else if (param_2 == 0xc) {
    sub_0800B8FC();
    uVar1 = 0;
  }
  else if (param_2 == 0x15) {
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0800BD86 @ 0x0800BD86 */

undefined4 sub_0800BD86(undefined4 param_1,int param_2)

{
  if (3 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800BD92 @ 0x0800BD92 */

void sub_0800BD92(int param_1)

{
  sub_08011818();
  *(undefined1 *)(param_1 + 0x1c) = 0xff;
  return;
}


/* sub_0800BDA0 @ 0x0800BDA0 */

void sub_0800BDA0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 0x30);
  iVar2 = __call_via_r1(*(int **)(param_1 + 0x30),*(int *)(iVar2 + 0x80) + iVar2);
  if (((*(int *)(param_1 + 0x2c) == 0) && (-1 < *(int *)(iVar2 + 8))) &&
     ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(iVar2 + 0x14) * 0x18] << 0x1c) < 0)) {
    uVar1 = sub_0800B5F0(0,param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  iVar3 = **(int **)(param_1 + 0x30);
  iVar3 = __call_via_r1(*(int **)(param_1 + 0x30),*(int *)(iVar3 + 0x84) + iVar3);
  if (((int)((uint)*(ushort *)(iVar3 + 4) << 0x16) < 0) && (iVar2 = sub_08013B34(iVar2), iVar2 != 0)
     ) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
  }
  iVar2 = **(int **)(param_1 + 0x34);
  uVar1 = __call_via_r1(*(int **)(param_1 + 0x34),*(int *)(iVar2 + 0x80) + iVar2);
  iVar2 = **(int **)(param_1 + 0x34);
  iVar2 = __call_via_r1(*(int **)(param_1 + 0x34),*(int *)(iVar2 + 0x84) + iVar2);
  if ((int)((uint)*(ushort *)(iVar2 + 4) << 0x16) < 0) {
    sub_08013B34(uVar1);
  }
  sub_0800B8FC(param_1);
  return;
}


/* sub_0800BE4E @ 0x0800BE4E */

undefined4 sub_0800BE4E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 0x30);
  iVar3 = *(int *)(iVar2 + 0x80);
  uVar1 = __call_via_r1(*(int **)(param_1 + 0x30),iVar3 + iVar2,iVar3,param_4,param_4);
  sub_0800B99C(param_1,param_2,uVar1);
  return 0;
}


/* sub_0800BE90 @ 0x0800BE90 */

void sub_0800BE90(int param_1)

{
  int iVar1;
  int local_58 [4];
  undefined1 local_48 [2];
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_28;
  undefined4 local_24;
  
  sub_0803F540(local_48,0xf0);
  Wfz_LoadContainer(&gUnknown_0807248C,local_24);
  local_3c = &gUnknown_0806E050;
  local_44 = 0x78;
  local_40 = 0xb;
  local_45 = 2;
  local_46 = 1;
  local_28 = 0x803f5a5;
  local_48[0] = 1;
  sub_0803DADA(local_48,*(undefined4 *)(&gUIStringPtrs + *(int *)(param_1 + 0x14) * 4));
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0x20;
  local_58[3] = 0x10;
  iVar1 = 0;
  do {
    sub_0804915C((int)local_48,
                 (int)(&DAT_06010000 + iVar1 * 0x200 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 (int)local_58);
    iVar1 = iVar1 + 1;
    local_58[0] = local_58[0] + 0x20;
    local_58[2] = local_58[2] + 0x20;
  } while (iVar1 < 7);
  local_58[2] = 0xf0;
  sub_0804915C((int)local_48,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e00,(int)local_58);
  sub_0803F58C(local_48,0);
  return;
}


/* sub_0800BF34 @ 0x0800BF34 */

undefined4 *
sub_0800BF34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0xf00;
    iVar1 = sub_0801124C(&DAT_03001c4c,0xf00);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0xf00,param_3,0,param_4);
      iVar1 = sub_0801124C(&DAT_03001c4c,0xf00);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804B528;
    param_1[5] = param_2;
    *(undefined1 *)(param_1 + 2) = 0x10;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0xf0;
    sub_0800BE90(param_1);
  }
  return param_1;
}


/* sub_0800BF94 @ 0x0800BF94 */

undefined4 sub_0800BF94(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x10) + -1;
  *(char *)(param_1 + 0x10) = cVar2;
  if (cVar2 == '\0') {
    sub_08011944(&DAT_03001c4c,param_1);
    if (DAT_03001a34 != 0) {
      uVar1 = sub_0800C0C8(0);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
    return 0;
  }
  return 1;
}


/* sub_0800BFCE @ 0x0800BFCE */

undefined4 sub_0800BFCE(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = param_2[1];
  param_2[1] = iVar4 + 0x20;
  iVar5 = param_2[2];
  param_2[2] = iVar5 + 1;
  iVar6 = 0;
  uVar8 = (uint)(iVar5 << 0x1b) >> 2;
  puVar3 = (uint *)*param_2;
  do {
    puVar2 = puVar3;
    uVar7 = iVar6 * 0x200000 + 0x80006180;
    *puVar2 = uVar7;
    iVar5 = iVar6 * 0x10;
    iVar6 = iVar6 + 1;
    puVar2[1] = (uint)*(ushort *)(param_1 + 0xc) + iVar5 & 0x3ff | puVar2[1] & 0xfffffc00;
    *puVar2 = uVar7 & 0xc1ffffff | uVar8;
    puVar3 = puVar2 + 2;
  } while (iVar6 < 7);
  *puVar3 = 0x40e02180;
  puVar2[3] = *(ushort *)(param_1 + 0xc) + 0x70 & 0x3ff | puVar2[3] & 0xfffffc00;
  uVar8 = uVar8 | 0x40e02180;
  *puVar3 = uVar8;
  *param_2 = puVar2 + 4;
  *(undefined2 *)(iVar4 + 6) = 0x100;
  *(undefined2 *)(iVar4 + 0xe) = 0;
  *(undefined2 *)(iVar4 + 0x16) = 0;
  if (*(byte *)(param_1 + 0x10) < 0x11) {
    uVar1 = sub_08046F30(*(byte *)(param_1 + 0x10),0x1000,0x100,uVar8,param_4);
    *(undefined2 *)(iVar4 + 0x1e) = uVar1;
  }
  else {
    *(undefined2 *)(iVar4 + 0x1e) = 0x100;
  }
  return 0;
}


/* sub_0800C060 @ 0x0800C060 */

undefined4 sub_0800C060(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800C06C @ 0x0800C06C */

void sub_0800C06C(undefined4 param_1)

{
  undefined4 uVar1;
  
  sub_08011944(&DAT_03001c4c,param_1);
  if (DAT_03001a34 != 0) {
    uVar1 = sub_0800C0C8(0);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return;
}


/* sub_0800C094 @ 0x0800C094 */

undefined4 sub_0800C094(undefined4 param_1,int param_2)

{
  if (param_2 == 0xb) {
    sub_0800BE90();
  }
  return 0;
}


/* sub_0800C0C8 @ 0x0800C0C8 */

undefined4 * sub_0800C0C8(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x50), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0xf00;
  iVar1 = sub_0801124C(&DAT_03001c4c,0xf00);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0xf00);
    iVar1 = sub_0801124C(&DAT_03001c4c,0xf00);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804D8C8;
  sub_0803F540(param_1 + 7,0xf0,0x10);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0x11;
  param_1[10] = &gUnknown_0806E050;
  param_1[8] = 0x78;
  param_1[9] = 0xb;
  *(undefined1 *)((int)param_1 + 0x1f) = 2;
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  param_1[0xf] = 0x803f5a5;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}


/* sub_0800C144 @ 0x0800C144 */

void sub_0800C144(int param_1)

{
  int a0;
  int iVar1;
  int local_24 [4];
  
  Wfz_LoadContainer(&gUnknown_0807248C,*(undefined4 *)(param_1 + 0x40));
  a0 = param_1 + 0x1c;
  sub_0803DADA(a0,*(undefined4 *)
                   (&gUIStringPtrs + ((uint)(*(int *)(param_1 + 0x18) << 0x10) >> 0xe)));
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x20;
  local_24[3] = 0x10;
  iVar1 = 0;
  do {
    sub_0804915C(a0,(int)(&DAT_06010000 + iVar1 * 0x200 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 (int)local_24);
    iVar1 = iVar1 + 1;
    local_24[0] = local_24[0] + 0x20;
    local_24[2] = local_24[2] + 0x20;
  } while (iVar1 < 7);
  local_24[2] = 0xf0;
  sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e00,(int)local_24);
  return;
}


/* sub_0800C1BC @ 0x0800C1BC */

void sub_0800C1BC(int param_1)

{
  int a0;
  int iVar1;
  int aiStack_24 [4];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14)) {
      Wfz_LoadContainer(&gUnknown_0807248C,*(undefined4 *)(param_1 + 0x40));
      a0 = param_1 + 0x1c;
      sub_0803DADA(a0,*(undefined4 *)
                       (&gUIStringPtrs + ((uint)(*(int *)(param_1 + 0x18) << 0x10) >> 0xe)));
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
      aiStack_24[0] = 0;
      aiStack_24[1] = 0;
      aiStack_24[2] = 0x20;
      aiStack_24[3] = 0x10;
      iVar1 = 0;
      do {
        sub_0804915C(a0,(int)(&DAT_06010000 +
                             iVar1 * 0x200 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                     (int)aiStack_24);
        iVar1 = iVar1 + 1;
        aiStack_24[0] = aiStack_24[0] + 0x20;
        aiStack_24[2] = aiStack_24[2] + 0x20;
      } while (iVar1 < 7);
      aiStack_24[2] = 0xf0;
      sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e00,(int)aiStack_24);
      return;
    }
  }
  return;
}


/* sub_0800C1D2 @ 0x0800C1D2 */

bool sub_0800C1D2(int param_1)

{
  return *(char *)(param_1 + 0x10) != '\0';
}


/* sub_0800C1E0 @ 0x0800C1E0 */

undefined4 sub_0800C1E0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = 0;
  piVar1 = (int *)*param_2;
  do {
    piVar2 = piVar1;
    *piVar2 = ((uint)(iVar3 << 0x1c) >> 7 | 0x80006000) + 0x88;
    iVar5 = iVar3 * 0x10;
    iVar3 = iVar3 + 1;
    uVar6 = piVar2[1];
    uVar4 = (uint)*(ushort *)(param_1 + 0xc) + iVar5 & 0x3ff;
    piVar2[1] = uVar4 | uVar6 & 0xfffffc00;
    piVar2[1] = uVar4 | uVar6 & 0xfffff000 | (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    piVar1 = piVar2 + 2;
  } while (iVar3 < 7);
  piVar2[2] = 0x40e02088;
  uVar6 = piVar2[3];
  uVar4 = *(ushort *)(param_1 + 0xc) + 0x70 & 0x3ff;
  piVar2[3] = uVar4 | uVar6 & 0xfffffc00;
  piVar2[3] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar4 | uVar6 & 0xfffff000;
  *param_2 = piVar2 + 6;
  return 0;
}


/* sub_0800C224 @ 0x0800C224 */

undefined4 sub_0800C224(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint unaff_r6;
  
  *param_3 = 0x40e02088;
  uVar1 = *(ushort *)(param_1 + 0xc) + 0x70 & 0x3ff | param_3[1] & 0xfffffc00;
  param_3[1] = uVar1;
  param_3[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar1 & ~unaff_r6;
  *param_2 = param_3 + 4;
  return 0;
}


/* sub_0800C254 @ 0x0800C254 */

undefined4 sub_0800C254(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0xb) {
    sub_0800C144();
    uVar1 = 0;
  }
  else if (param_2 == 0x17) {
    *(undefined1 *)(param_1 + 0x10) = 2;
    *(undefined4 *)(param_1 + 0x18) = param_3;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0800C298 @ 0x0800C298 */

void sub_0800C298(int param_1)

{
  undefined1 local_40 [2];
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  
  sub_0803F540(local_40,0x20,0x10);
  local_3d = *(undefined1 *)(*(int *)(param_1 + 0x14) + 5);
  local_3e = 1;
  local_20 = 0x803f5a5;
  local_34 = &gUnknown_0806F4F4;
  local_3c = 0x10;
  local_38 = 0xc;
  local_40[0] = 1;
  sub_08046E40(local_1c,0,local_10);
  if (*(char *)(*(int *)(param_1 + 0x14) + 5) != '\x02') {
    sub_0803DC96(local_40,&_0800C434,*(undefined1 *)(*(int *)(param_1 + 0x14) + 6));
  }
  sub_0803F9B8(local_40,&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20);
  sub_0803F58C(local_40,0);
  return;
}


/* sub_0800C300 @ 0x0800C300 */

undefined4 * sub_0800C300(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x200;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x200);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804D878;
    param_1[5] = param_2;
    iVar1 = sub_08011C70(&DAT_03001c4c,8,*(undefined1 *)(param_2 + 4));
    param_1[4] = iVar1;
    param_1[1] = *(int *)(iVar1 + 4) + 1;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar1 + 8);
    sub_0800C298(param_1);
  }
  return param_1;
}


/* sub_0800C368 @ 0x0800C368 */

void sub_0800C368(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x10);
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1(*(int **)(param_1 + 0x10),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0800C378 @ 0x0800C378 */

undefined4 sub_0800C378(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar2 = *(int *)(&gUnknown_087B6EEC + ((uint)(DAT_03000f94 << 0x18) >> 0x16));
  puVar4 = (uint *)*param_2;
  *param_2 = puVar4 + 2;
  *puVar4 = 0x80006000;
  uVar1 = (((uint)**(ushort **)(param_1 + 0x14) - DAT_030019cc) + -0x10) * 0x800000 >> 7 |
          0x80006000;
  *puVar4 = uVar1;
  *puVar4 = uVar1 | (((uint)*(ushort *)(*(int *)(param_1 + 0x14) + 2) + (iVar2 >> 0xe)) -
                    DAT_030019d0) + 0xf8 & 0xff;
  uVar3 = puVar4[1];
  uVar1 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar4[1] = uVar1 | uVar3 & 0xfffff3ff;
  puVar4[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar1 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_0800C3EC @ 0x0800C3EC */

undefined4 sub_0800C3EC(undefined4 param_1,int param_2)

{
  if (3 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800C3F8 @ 0x0800C3F8 */

void sub_0800C3F8(undefined4 param_1)

{
  sub_08011818();
  sub_0800C298(param_1);
  return;
}


/* sub_0800C408 @ 0x0800C408 */

undefined4 sub_0800C408(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0xb) {
    sub_0800C298();
  }
  else if (param_2 == 0x1f) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  return 0;
}


/* sub_0800C454 @ 0x0800C454 */

undefined4 * sub_0800C454(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08011874(param_1,&DAT_03001af8,&gUnknown_08072500,0x40);
  *param_1 = &_08049F38;
  iVar1 = param_2[1];
  param_1[7] = (*param_2 + -4) * 0x100;
  param_1[8] = (iVar1 + -4) * 0x100;
  param_1[9] = *param_3;
  param_1[10] = param_3[1];
  param_1[6] = 0x20;
  *(undefined1 *)(param_1 + 2) = 0x38;
  return param_1;
}


/* sub_0800C4A6 @ 0x0800C4A6 */

void sub_0800C4A6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    iVar1 = *(int *)(param_1 + 0x28) + 2;
    *(int *)(param_1 + 0x28) = iVar1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
  }
  return;
}


/* sub_0800C4DA @ 0x0800C4DA */

undefined4 sub_0800C4DA(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x20) >> 8;
  *(int *)(param_1 + 4) = iVar2;
  iVar3 = (*(int *)(param_1 + 0x1c) >> 8) - DAT_030019cc;
  *(int *)(param_1 + 0x30) = iVar2 - DAT_030019d0;
  *(int *)(param_1 + 0x2c) = iVar3;
  if ((((*(int *)(param_1 + 0x2c) < -7) || (0xef < *(int *)(param_1 + 0x2c))) ||
      (*(int *)(param_1 + 0x30) < -7)) || (0x9f < *(int *)(param_1 + 0x30))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0800C532 @ 0x0800C532 */

undefined4 sub_0800C532(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x2000;
  uVar1 = (uint)(*(int *)(param_1 + 0x2c) << 0x17) >> 7 | 0x2000;
  *puVar2 = uVar1;
  *puVar2 = *(uint *)(param_1 + 0x30) & 0xff | uVar1;
  puVar2[1] = puVar2[1] & 0xfffffc00 | 0xc00 | DAT_03001afa & 0x3ff;
  return 0;
}


/* sub_0800C574 @ 0x0800C574 */

undefined4 sub_0800C574(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0xc) {
    iVar2 = *(int *)(*param_1 + 8);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080118D4();
  }
  return uVar1;
}


/* sub_0800C58E @ 0x0800C58E */

undefined4 sub_0800C58E(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800C5A8 @ 0x0800C5A8 */

void sub_0800C5A8(int *param_1)

{
  sub_080119BC(&DAT_03001c4c,param_1,param_1[0xb]);
  param_1[0xb] = 0;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_0800C61E @ 0x0800C61E */

undefined * sub_0800C61E(int param_1)

{
  return &gUnknown_0807268C + *(int *)(param_1 + 0x10) * 8;
}


/* sub_0800C628 @ 0x0800C628 */

void sub_0800C628(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  DAT_03001014 = *(undefined4 *)(iVar2 + 0x20);
  DAT_03001010 = *(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 0x1c) >> 1;
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10) * 8;
  DAT_03001018 = *(int *)(&gUnknown_0807268C + iVar2) << 8;
  DAT_0300101c = *(int *)(&DAT_08072690 + iVar2) << 8;
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = piVar1[10];
  sub_08009930(piVar1 + 5,DAT_03001a4c,1,&DAT_03001018,&DAT_03001018);
  sub_08009930(piVar1 + 5,DAT_03001a54,1);
  sub_080119BC(&DAT_03001c4c,piVar1,piVar1[0xb]);
  piVar1[0xb] = 0;
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  __call_via_r1(iVar2 + 8,*(undefined4 *)(iVar2 + 8));
  return;
}


/* sub_0800C65E @ 0x0800C65E */

undefined4 * sub_0800C65E(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char acStack_1020 [4088];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804CE00;
    param_1[10] = param_2;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 5);
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(param_2 + 6);
    param_1[0xb] = param_3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 8);
    param_1[1] = *(undefined4 *)(param_3 + 4);
    param_1[9] = 0;
    param_1[4] = 0;
    piVar1 = *(int **)(param_3 + 0x20);
    iStack_28 = piVar1[2] - *piVar1;
    iStack_24 = piVar1[3] - piVar1[1];
    iStack_20 = iStack_28;
    iStack_1c = iStack_24;
    sub_08049138((int)acStack_1020,
                 (int)(&DAT_06010000 + (uint)*(ushort *)(param_1[0xb] + 0x16) * 0x20),
                 iStack_24 * iStack_28);
    iVar3 = param_1[0xb];
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x20) + 8);
    param_1[6] = *(undefined4 *)(*(int *)(iVar3 + 0x20) + 0xc);
    param_1[5] = uVar5;
    uVar5 = **(undefined4 **)(iVar3 + 0x20);
    uVar6 = 0;
    param_1[8] = (*(undefined4 **)(iVar3 + 0x20))[1];
    param_1[7] = uVar5;
    if (0 < iStack_1c) {
      do {
        iVar4 = *(int *)(*(int *)(iVar3 + 0x20) + 4) + uVar6;
        uVar2 = 0;
        if (0 < iStack_20) {
          iStack_18 = iVar4 + 1;
          do {
            if (acStack_1020
                [(((int)uVar6 >> 3) * iStack_20 + (uVar6 & 7)) * 8 + ((int)uVar2 >> 3) * 0x40 +
                 (uVar2 & 7)] != '\0') {
              iVar7 = **(int **)(iVar3 + 0x20) + uVar2;
              if (iVar7 < (int)param_1[5]) {
                param_1[5] = iVar7;
              }
              if (iVar4 < (int)param_1[6]) {
                param_1[6] = iVar4;
              }
              if ((int)param_1[7] <= iVar7) {
                param_1[7] = iVar7 + 1;
              }
              if ((int)param_1[8] <= iVar4) {
                param_1[8] = iStack_18;
              }
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < iStack_20);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iStack_1c);
    }
    param_1[6] = (int)(param_1[6] + param_1[8]) >> 1;
    if (*(int *)(iVar3 + 0x1c) != 0) {
      sub_08009930(param_1 + 5,DAT_03001a4c,0);
      sub_08009930(param_1 + 5,DAT_03001a54,0);
    }
  }
  return param_1;
}


/* sub_0800C7B6 @ 0x0800C7B6 */

void sub_0800C7B6(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_0804CE00;
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0800C7E2 @ 0x0800C7E2 */

undefined4 sub_0800C7E2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = sub_08011C70(&DAT_03001c4c,8,*(undefined1 *)(param_1 + 4));
  iVar2 = 0;
  if (0 < DAT_03001c50) {
    do {
      if ((&DAT_03001c54)[iVar2] == iVar1) {
        uVar3 = sub_0800C65E(0,param_1,iVar1);
        sub_080119BC(&DAT_03001c4c,iVar1,uVar3);
        return uVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_03001c50);
  }
  return 0;
}


/* sub_0800C858 @ 0x0800C858 */

void sub_0800C858(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = *(int *)(param_1 + 0x24) + -1;
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2c);
      puVar2 = *(undefined4 **)(iVar1 + 0x20);
      uVar4 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined4 *)(iVar1 + 0x24) = *puVar2;
      *(undefined4 *)(iVar1 + 0x28) = uVar4;
      *(undefined4 *)(iVar1 + 0x2c) = uVar8;
      *(undefined4 *)(iVar1 + 0x30) = uVar9;
    }
    else if (-1 < iVar1 * 0x40000000) {
      iVar1 = sub_0803FACC(5);
      iVar3 = sub_0803FACC(3);
      iVar5 = *(int *)(param_1 + 0x2c);
      piVar6 = *(int **)(iVar5 + 0x20);
      iVar10 = piVar6[1];
      iVar11 = piVar6[2];
      iVar7 = piVar6[3];
      *(int *)(iVar5 + 0x24) = *piVar6 + iVar1 + -2;
      *(int *)(iVar5 + 0x28) = iVar10 + iVar3 + -1;
      *(int *)(iVar5 + 0x2c) = iVar11 + iVar1 + -2;
      *(int *)(iVar5 + 0x30) = iVar7 + iVar3 + -1;
    }
  }
  return;
}


/* sub_0800C8C2 @ 0x0800C8C2 */

void sub_0800C8C2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1(*(int **)(param_1 + 0x2c),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0800C8D2 @ 0x0800C8D2 */

void sub_0800C8D2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  iVar2 = *(int *)(iVar1 + 0x10);
  __call_via_r2(*(int **)(param_1 + 0x2c),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_0800C8E2 @ 0x0800C8E2 */

void sub_0800C8E2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  iVar2 = *(int *)(iVar1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x2c),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_0800C8F2 @ 0x0800C8F2 */

void sub_0800C8F2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  iVar2 = *(int *)(iVar1 + 0x1c);
  __call_via_r1(*(int **)(param_1 + 0x2c),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0800C902 @ 0x0800C902 */

void sub_0800C902(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  iVar2 = *(int *)(iVar1 + 0x20);
  __call_via_r1(*(int **)(param_1 + 0x2c),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0800C912 @ 0x0800C912 */

void sub_0800C912(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_1c;
  int local_18;
  
  local_1c = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) >> 1;
  local_18 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) >> 1;
  uVar2 = sub_0800C454(0,&local_1c,&gUnknown_08072558);
  sub_0801191A(&DAT_03001c4c,uVar2);
  uVar2 = sub_0800C454(0,&local_1c,&DAT_08072560);
  sub_0801191A(&DAT_03001c4c,uVar2);
  uVar2 = sub_0800C454(0,&local_1c,&DAT_08072568);
  sub_0801191A(&DAT_03001c4c,uVar2);
  uVar2 = sub_0800C454(0,&local_1c,&DAT_08072570);
  sub_0801191A(&DAT_03001c4c,uVar2);
  cVar1 = *(char *)(param_1 + 0xc) + -1;
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x1c) = 0;
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar3) {
      iVar3 = sub_0803FACC(0x1000);
      uVar2 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar3 + 0x1000,0x400,0x38);
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
    puVar4 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0x10;
      *puVar4 = &_08049BB4;
      puVar4[2] = param_1;
    }
    iVar3 = DAT_0300225c * 4;
    DAT_0300225c = DAT_0300225c + 1;
    *(undefined4 **)(&DAT_03002260 + iVar3) = puVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0x17;
  }
  return;
}


/* sub_0800CA0A @ 0x0800CA0A */

uint sub_0800CA0A(int param_1,int param_2,char *param_3)

{
  uint uVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    if (param_2 != 2) {
      if (param_2 == 4) {
        uVar1 = __call_via_r3();
        bVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x1c) == 0;
        sub_08009930(param_1 + 0x14,DAT_03001a4c,bVar2);
        sub_08009930(param_1 + 0x14,DAT_03001a54,bVar2);
        return uVar1;
      }
      uVar1 = __call_via_r3();
      return uVar1;
    }
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x1c) != 0) {
      if (*param_3 == '\0') {
        return 0;
      }
      if ((((*(int *)(param_1 + 0x14) < *(int *)(param_3 + 0xc)) &&
           (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x1c))) &&
          (*(int *)(param_1 + 0x18) < *(int *)(param_3 + 0x10))) &&
         (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x20))) {
        return (1 << **(sbyte **)(param_3 + 0x1c) | 1 << (*(sbyte **)(param_3 + 0x1c))[1]) &
               (uint)*(ushort *)(param_1 + 0xe);
      }
    }
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0x1c) != 0) {
    if (*(int *)(param_3 + 0x18) == 0) {
      return 0;
    }
    if (((*(int *)(param_1 + 0x14) < *(int *)(param_3 + 0xc)) &&
        (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x1c))) &&
       ((*(int *)(param_1 + 0x18) < *(int *)(param_3 + 0x10) &&
        ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x20) &&
         (*(uint *)(param_1 + 0x10) = (uint)(byte)param_3[0x14],
         ((uint)*(ushort *)(param_1 + 0xe) &
         (1 << (uint)**(byte **)(param_3 + 0x1c) | 1 << (*(byte **)(param_3 + 0x1c))[1])) != 0))))))
    {
      sub_0800C912(param_1);
      return 1;
    }
  }
  return 0;
}


