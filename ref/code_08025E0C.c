/* Ghidra reference decompilation of code_08025E0C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08025E0C @ 0x08025E0C */

int sub_08025E0C(int param_1)

{
  return *(int *)(param_1 + 0x802c) >> 1;
}


/* sub_08025E18 @ 0x08025E18 */

int sub_08025E18(int param_1)

{
  return *(int *)(param_1 + 0x8030) >> 1;
}


/* sub_08025E24 @ 0x08025E24 */

void sub_08025E24(void)

{
  sub_080261D4(0);
  return;
}


/* sub_08025E2E @ 0x08025E2E */

undefined4 * sub_08025E2E(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_08024A7C(puVar1);
  *puVar1 = &_0804A994;
  return puVar1;
}


/* sub_08025E50 @ 0x08025E50 */

undefined4 * sub_08025E50(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [36];
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x2c), param_1 != (undefined4 *)0x0)) {
    sub_08024A7C(param_1);
    *param_1 = &_0804A52C;
    param_1[6] = param_3;
    (&DAT_0300112d)[(int)param_2 >> 3] =
         (&DAT_0300112d)[(int)param_2 >> 3] | (byte)(1 << (param_2 & 7));
    iVar1 = 0;
    param_1[8] = &gScouterTable + param_2 * 0x10;
    param_1[4] = 0;
    param_1[7] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0x68;
    iStack_3c = 0x38;
    sub_0803DA78(auStack_38,&gUnknown_0806EE6C,&uStack_48);
    uStack_44 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(param_1[8] + 2) * 4);
    do {
      sub_0803DE6A(auStack_38,uStack_44,0x68,&uStack_48);
      iVar1 = iVar1 + 1;
    } while (iStack_3c == 0);
    iVar1 = iVar1 * 0x10 + -0x38;
    param_1[5] = iVar1;
    if (iVar1 < 0) {
      param_1[5] = 0;
    }
  }
  return param_1;
}


/* sub_08025EF0 @ 0x08025EF0 */

void sub_08025EF0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0804A52C;
  if (param_1[7] != 0) {
    sub_0803F58C(param_1[7],1,param_3,param_4,param_4);
  }
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08025F16 @ 0x08025F16 */

void sub_08025F16(int param_1)

{
  int iVar1;
  
  iVar1 = sub_0803F540(0,0x68,*(int *)(param_1 + 0x14) + 0x38);
  *(int *)(param_1 + 0x1c) = iVar1;
  *(undefined4 **)(iVar1 + 0xc) = &gUnknown_0806EE6C;
  *(undefined1 *)(*(int *)(param_1 + 0x1c) + 3) = 2;
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0xe;
  *(undefined1 *)(*(int *)(param_1 + 0x1c) + 1) = 0x10;
  sub_08046E40(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x24),0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
  sub_0803DD66(*(undefined4 *)(param_1 + 0x1c),0x68,
               *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(*(int *)(param_1 + 0x20) + 2) * 4)
              );
  return;
}


/* sub_08025F64 @ 0x08025F64 */

void sub_08025F64(void)

{
  return;
}


/* sub_08025F66 @ 0x08025F66 */

void sub_08025F66(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_18 = 0;
  local_14 = *(undefined4 *)(param_1 + 0x10);
  local_10 = 0x68;
  local_c = *(int *)(param_1 + 0x10) + 0x38;
  sub_0804915C(*(int *)(param_1 + 0x1c),0x6009800,(int)&local_18);
  *(uint *)(*(int *)(param_1 + 0x24) + 0x20) = (uint)(0 < *(int *)(param_1 + 0x10));
  *(uint *)(*(int *)(param_1 + 0x28) + 0x20) =
       (uint)(*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14));
  return;
}


/* sub_08025FAC @ 0x08025FAC */

void sub_08025FAC(int *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((int)((uint)DAT_03003302 << 0x19) < 0) && (param_1[4] != 0)) {
    param_1[4] = param_1[4] + -1;
    sub_08025F66(param_1);
    cVar1 = '\x01';
  }
  if ((int)((uint)DAT_03003302 << 0x18) < 0) {
    if (param_1[4] < param_1[5]) {
      param_1[4] = param_1[4] + 1;
      sub_08025F66(param_1);
      cVar1 = '\x01';
    }
  }
  if (*(char *)((int)param_1 + 0xd) != cVar1) {
    *(char *)((int)param_1 + 0xd) = cVar1;
  }
  if ((int)((uint)DAT_03003304 << 0x1e) < 0) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  if ((DAT_03003304 & 1) != 0) {
    __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
  }
  return;
}


/* sub_0802601A @ 0x0802601A */

undefined4 sub_0802601A(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    puVar1 = (undefined4 *)sub_0803D5B8(0x520);
    if (puVar1 != (undefined4 *)0x0) {
      sub_080261D4(puVar1);
      *puVar1 = &_0804E3C8;
    }
    sub_0803D850(puVar1);
    return 0;
  }
  uVar2 = sub_08024C04();
  return uVar2;
}


/* sub_08026048 @ 0x08026048 */

void sub_08026048(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined1 auStack_1048 [4096];
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  sub_08011B04(&DAT_03001c4c);
  iVar1 = sub_08011F20(*(undefined4 *)(*(int *)(param_1 + 0x20) + 8));
  sub_0803F540(auStack_48,0xf0,0xa0);
  Wfz_LoadContainer(&DAT_08732384,local_24);
  sub_08024D94(*(undefined4 *)(param_1 + 0x20),auStack_48,*(undefined4 *)(param_1 + 0x18));
  if (iVar1 != 0) {
    Wfz_LoadContainer(iVar1,auStack_1048);
    local_1058 = 0xa8;
    uStack_1054 = 8;
    uStack_1050 = 0xe8;
    uStack_104c = 0x48;
    sub_0803F922(auStack_48,auStack_1048,&local_1058);
  }
  sub_0803F9B8(auStack_48,&DAT_06000040);
  sub_0803F58C(auStack_48,0);
  piVar2 = (int *)sub_080272EC(0,*(undefined4 *)(param_1 + 0x20));
  sub_0801191A(&DAT_03001c4c,piVar2);
  __call_via_r2(piVar2,2,*(int *)(*piVar2 + 0x28) + *piVar2);
  local_24 = 0;
  local_1c = 0x1e;
  local_20 = 0;
  local_18 = 0x14;
  sub_0803DA10(&local_24,&DAT_0600f800,1);
  sub_0804912C(0x600f000,0,0x800);
  local_24 = 0xf;
  local_20 = 0xb;
  local_1c = 0x1c;
  local_18 = 0x12;
  sub_0803DA10(&local_24,&DAT_0600f000,0x260);
  REG_BG2CNT = 0x1e83;
  REG_BG3CNT = 0x1f83;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_DISPCNT = 0x1c40;
  uVar3 = sub_080271D0(0,1);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = sub_080271D0(0,0);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x24));
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x28));
  sub_08025F16(param_1);
  sub_08025F66(param_1);
  return;
}


/* sub_080261C0 @ 0x080261C0 */

void sub_080261C0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_080261D4 @ 0x080261D4 */

undefined4 * sub_080261D4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x520), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08024A7C(param_1);
  *param_1 = &_0804A570;
  param_1[3] = 0;
  sub_08011C0C(DAT_03002844,0x16,param_1 + 3);
  return param_1;
}


/* sub_08026212 @ 0x08026212 */

void sub_08026212(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_08024A9C(param_1,1,param_3,param_4,param_4);
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      uVar1 = sub_08027390(0,iVar2 * 0x28 + param_1 + 0x10);
      sub_0801191A(&DAT_03001c4c,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  uVar1 = sub_08026F94(0);
  *(undefined4 *)(param_1 + 0x51c) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  REG_DISPCNT = 0x1940;
  return;
}


/* sub_08026274 @ 0x08026274 */

void sub_08026274(void)

{
  sub_080256F0(0);
  return;
}


/* sub_0802627E @ 0x0802627E */

void sub_0802627E(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar2 = iVar1 * 0x28 + param_1 + 0xc;
      if ((((*(int *)(iVar2 + 0x18) <= *param_2) && (*param_2 < *(int *)(iVar2 + 0x20))) &&
          (*(int *)(iVar2 + 0x1c) <= param_2[1])) && (param_2[1] < *(int *)(iVar2 + 0x24))) {
        iVar3 = *param_2 - (*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x20) >> 1);
        iVar5 = param_2[1] - (*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x24) >> 1);
        if (iVar3 * iVar3 + iVar5 * iVar5 < 0x7fffffff) {
          iVar4 = *(int *)(iVar2 + 0x28);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x518) != iVar4) {
    if (*(int *)(param_1 + 0x518) != 0) {
      sub_08027448();
    }
    *(int *)(param_1 + 0x518) = iVar4;
    if (iVar4 != 0) {
      sub_08027424(iVar4);
    }
  }
  return;
}


/* sub_0802632E @ 0x0802632E */

void sub_0802632E(int param_1)

{
  int local_c;
  int local_8;
  
  local_c = *(int *)(*(int *)(param_1 + 0x51c) + 0xc10) >> 8;
  local_8 = *(int *)(*(int *)(param_1 + 0x51c) + 0xc14) >> 8;
  sub_0802627E(param_1,&local_c);
  return;
}


/* sub_08026360 @ 0x08026360 */

void sub_08026360(int param_1)

{
  if ((DAT_03003306 & 1) != 0) {
    if (*(int *)(param_1 + 0x518) != 0) {
      *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x518);
      *(undefined4 *)(param_1 + 0x510) = 1;
      sub_08024BE6();
      REG_BLDCNT = 0x3f5f;
    }
  }
  return;
}


/* sub_0802638A @ 0x0802638A */

undefined4 sub_0802638A(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x510) == 0) {
    uVar1 = sub_08024C04();
  }
  else {
    uVar1 = sub_0802745E(*(undefined4 *)(param_1 + 0x514));
    uVar2 = sub_08027454(*(undefined4 *)(param_1 + 0x514));
    sub_08025E50(0,uVar2,uVar1);
    sub_0803D850();
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_080263BE @ 0x080263BE */

int sub_080263BE(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x51c) + 0xc10) >> 10;
}


/* sub_080263E2 @ 0x080263E2 */

int sub_080263E2(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x51c) + 0xc14) >> 10;
}


/* sub_0802641C @ 0x0802641C */

void sub_0802641C(undefined4 param_1)

{
  int a1;
  undefined1 auStack_78 [92];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  sub_08024A9C(param_1,1);
  a1 = sub_0803D5B8(0x9600);
  Wfz_LoadContainer(&gUnknown_08732604,a1);
  sub_08049138(0x6000040,a1,0x9600);
  sub_0803D63C(a1);
  sub_0804912C(0x600f000,0,0x800);
  uStack_14 = 0x1e;
  uStack_10 = 0x14;
  uStack_1c = 0;
  uStack_18 = 0;
  sub_0803DA10(&uStack_1c,&DAT_0600f000,1);
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0x1d40;
  sub_08004098(auStack_78,&gUnknown_0877D0C0,0);
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  return;
}


/* sub_0802648E @ 0x0802648E */

void sub_0802648E(void)

{
  sub_080256F0(0);
  return;
}


/* sub_08026498 @ 0x08026498 */

void sub_08026498(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((DAT_03003304 & 1) != 0) {
    iVar1 = *(int *)(*param_1 + 0x1c);
    __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  }
  return;
}


/* sub_080264CC @ 0x080264CC */

undefined4 * sub_080264CC(void)

{
  return &DAT_03002fc0;
}


/* sub_080264D4 @ 0x080264D4 */

void sub_080264D4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12,0,param_4,param_4);
  return;
}


/* sub_080264EA @ 0x080264EA */

void sub_080264EA(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  int iStack_10;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x10) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 2);
    if ((*(short *)((int)param_2 + 0x12) == 4) &&
       (iVar2 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar2)) {
      iStack_14 = (param_2[0x68] >> 8) + *(int *)(&DAT_0874ca40 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_10 = (param_2[0x69] >> 8) + *(int *)(&DAT_0874ca44 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_080274B4(0,&iStack_14,(char)param_2[4],param_2);
      sub_0801191A(&DAT_03001c4c,uVar3);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083193F8,0x40,0);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08026588 @ 0x08026588 */

void sub_08026588(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *local_14;
  int *local_10;
  undefined4 local_c;
  
  iVar1 = 0;
  local_10 = (int *)0x0;
  local_c = DAT_03001c34;
  local_14 = &_0804AE70;
  if (param_2 != 0) {
    iVar1 = param_2 + 0x18c;
  }
  sub_0801599C(&local_14,iVar1);
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03002fc4);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_080265D6 @ 0x080265D6 */

bool sub_080265D6(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03002fc4;
}


/* sub_080265E8 @ 0x080265E8 */

undefined4 * sub_080265E8(void)

{
  return &DAT_03002fc8;
}


/* sub_0802660C @ 0x0802660C */

void sub_0802660C(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_08026618 @ 0x08026618 */

void sub_08026618(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_18;
  int iStack_14;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    uVar3 = (uint)uVar1 << 0x15;
    uVar4 = uVar3 >> 0x18;
    *(char *)((int)param_2 + 0x11) = (char)(uVar3 >> 0x18);
    if (2 < uVar4) {
      *(char *)((int)param_2 + 0x11) = '\x01' - (char)((int)((uVar4 + 1) * -0x80000000) >> 0x1f);
    }
    if ((*(short *)((int)param_2 + 0x12) == 8) &&
       (iVar2 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar2)) {
      iStack_18 = (param_2[0x68] >> 8) + *(int *)(&DAT_0874ca70 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_14 = (param_2[0x69] >> 8) + *(int *)(&DAT_0874ca74 + (uint)*(byte *)(param_2 + 4) * 8);
      DAT_03002fd0 = sub_0802A2EC(0,&iStack_18,(char)param_2[4],param_2,iStack_18);
      sub_0801191A(&DAT_03001c4c,DAT_03002fd0);
    }
  }
  else {
    iVar2 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[iVar2] == DAT_03002fd0) {
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_03001c50);
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_080266D8 @ 0x080266D8 */

void sub_080266D8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *local_14;
  int *local_10;
  undefined4 local_c;
  
  iVar1 = 0;
  local_10 = (int *)0x0;
  local_c = DAT_03001c34;
  local_14 = &_0804AE70;
  if (param_2 != 0) {
    iVar1 = param_2 + 0x18c;
  }
  sub_0801599C(&local_14,iVar1);
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03002fcc);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_08026726 @ 0x08026726 */

bool sub_08026726(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03002fcc;
}


/* sub_08026738 @ 0x08026738 */

undefined4 * sub_08026738(void)

{
  return &DAT_03002fd4;
}


/* sub_08026754 @ 0x08026754 */

void sub_08026754(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12,0,param_4,param_4);
  return;
}


/* sub_0802676A @ 0x0802676A */

void sub_0802676A(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  int iStack_10;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if ((*(short *)((int)param_2 + 0x12) == 8) &&
       (iVar2 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar2)) {
      iStack_14 = (param_2[0x68] >> 8) + *(int *)(&DAT_0874caa4 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_10 = (param_2[0x69] >> 8) + *(int *)(&DAT_0874caa8 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_080276A8(0,&iStack_14,(char)param_2[4],param_2);
      sub_0801191A(&DAT_03001c4c,uVar3);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083193F8,0x40,0);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08026808 @ 0x08026808 */

void sub_08026808(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *local_14;
  int *local_10;
  undefined4 local_c;
  
  iVar1 = 0;
  local_10 = (int *)0x0;
  local_c = DAT_03001c34;
  local_14 = &_0804AE70;
  if (param_2 != 0) {
    iVar1 = param_2 + 0x18c;
  }
  sub_0801599C(&local_14,iVar1);
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03002fd8);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_08026856 @ 0x08026856 */

bool sub_08026856(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03002fd8;
}


/* sub_08026868 @ 0x08026868 */

undefined4 * sub_08026868(void)

{
  return &DAT_03002fdc;
}


/* sub_0802688C @ 0x0802688C */

undefined4 sub_0802688C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
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
  
  if ((DAT_03001b94 == 0) || (*(int *)(DAT_03001b94 + 0x1cc) == 0)) {
    uVar1 = 0;
  }
  else {
    sub_0800FDFA(&iStack_40);
    iStack_2c = iStack_3c + iStack_34 >> 1;
    iStack_30 = iStack_40 + iStack_38 >> 1;
    sub_0800FDFA(&iStack_28,param_2,iStack_34,param_4,iStack_30,iStack_2c);
    iStack_30 = iStack_30 - (iStack_28 + iStack_20 >> 1);
    iStack_2c = iStack_2c - (iStack_24 + iStack_1c >> 1);
    if (iStack_30 < 0) {
      iStack_30 = -iStack_30;
    }
    if (iStack_2c < 0) {
      iStack_2c = -iStack_2c;
    }
    if ((iStack_30 < 0x10) || (iStack_2c < 0x10)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_0802692C @ 0x0802692C */

undefined4 * sub_0802692C(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804A120;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08026954 @ 0x08026954 */

void sub_08026954(undefined4 *param_1,int *param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804B230;
    param_1[1] = *param_2 * 0x71d >> 8;
    param_1[2] = param_2[1] * 0x71d >> 8;
  }
  return;
}


/* sub_0802697E @ 0x0802697E */

void sub_0802697E(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12,0,param_4,param_4);
  return;
}


/* sub_08026994 @ 0x08026994 */

void sub_08026994(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_18;
  int iStack_14;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x18) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if ((*(short *)((int)param_2 + 0x12) == 0x10) &&
       (iVar2 = sub_080116FC(&DAT_03001c4c), 0xff < iVar2)) {
      iStack_18 = (param_2[0x68] >> 8) + *(int *)(&DAT_0874cad4 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_14 = (param_2[0x69] >> 8) + *(int *)(&DAT_0874cad8 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_0801C6E4(0,&iStack_18,param_1 + 4,param_2,iStack_18);
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08026A26 @ 0x08026A26 */

void sub_08026A26(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int local_24 [2];
  undefined *local_1c;
  int *local_18;
  int local_14;
  
  iVar2 = 0;
  local_18 = (int *)0x0;
  local_14 = DAT_03001c34;
  local_1c = &_0804AE70;
  if (param_2 != 0) {
    iVar2 = param_2 + 0x18c;
  }
  sub_0801599C(&local_1c,iVar2);
  local_24[0] = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) - (*(int *)(param_2 + 0x1a0) >> 8);
  local_24[1] = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) - (*(int *)(param_2 + 0x1a4) >> 8);
  local_24[1 < *(byte *)(param_2 + 0x10)] = 0;
  if (local_24[0] < -0x80) {
    local_24[0] = -0x80;
  }
  if (0x80 < local_24[0]) {
    local_24[0] = 0x80;
  }
  if (local_24[1] < -0x80) {
    local_24[1] = -0x80;
  }
  if (0x80 < local_24[1]) {
    local_24[1] = 0x80;
  }
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B230;
    puVar1[1] = local_24[0] * 0x71d >> 8;
    puVar1[2] = local_24[1] * 0x71d >> 8;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar1);
  local_1c = &_08049ACC;
  if (local_18 != (int *)0x0) {
    __call_via_r2(local_18,1,*(int *)*local_18 + *local_18);
  }
  return;
}


/* sub_08026B1A @ 0x08026B1A */

void sub_08026B1A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  return;
}


/* sub_08026B2C @ 0x08026B2C */

undefined4 * sub_08026B2C(void)

{
  return &DAT_03002fe0;
}


/* sub_08026B4C @ 0x08026B4C */

undefined4 * sub_08026B4C(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x80;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x80);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x80);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x80);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804C048;
    param_1[6] = param_2;
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    *(char *)(param_1 + 4) = (char)param_3;
    param_1[5] = &UNK_0874cb04 + param_3 * 8;
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),
                 *(int *)(&DAT_0874cb08 + param_3 * 8),0x80);
  }
  return param_1;
}


/* sub_08026BBC @ 0x08026BBC */

void sub_08026BBC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x8030) < *(int *)(*(int *)(param_1 + 0x18) + 0x8028)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x8020) < *(int *)(*(int *)(param_1 + 0x18) + 0x8030)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x801c) < *(int *)(*(int *)(param_1 + 0x18) + 0x802c)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = param_1;
    if (cVar1 == '\x03') {
      if (*(int *)(*(int *)(param_1 + 0x18) + 0x802c) < *(int *)(*(int *)(param_1 + 0x18) + 0x8024))
      {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
  }
  if (iVar2 == 0) {
    uVar3 = 3;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
  }
  else {
    iVar2 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar2;
    uVar3 = (uint)(iVar2 * 0x8000000) >> 0x1d;
    if (3 < uVar3) {
      uVar3 = 7 - uVar3;
    }
  }
  if (*(byte *)(param_1 + 0x11) != uVar3) {
    *(char *)(param_1 + 0x11) = (char)uVar3;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(*(int *)(param_1 + 0x14) + 4) + uVar3 * 0x80,0x80);
  }
  return;
}


/* sub_08026C62 @ 0x08026C62 */

undefined4 sub_08026C62(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = **(undefined4 **)(param_1 + 0x14);
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000;
  return 0;
}


/* sub_08026C9C @ 0x08026C9C */

void sub_08026C9C(undefined4 *param_1,undefined4 param_2,int param_3,undefined2 param_4,
                 short param_5)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804DA60;
    param_1[7] = param_3;
    param_1[4] = param_2;
    *(undefined2 *)(param_1 + 3) = param_4;
    *(short *)(param_1 + 5) = *(short *)(param_3 + 0x14) + param_5;
    param_1[6] = (uint)(*(char *)(param_3 + 0x16) != '\0');
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[1] = *(undefined4 *)(param_3 + 0xc);
  }
  return;
}


/* sub_08026CDA @ 0x08026CDA */

undefined4 sub_08026CDA(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((((*piVar2 < *(int *)(iVar1 + 0x8034)) && (*(int *)(iVar1 + 0x802c) < piVar2[2])) &&
      (piVar2[1] < *(int *)(iVar1 + 0x8038))) && (*(int *)(iVar1 + 0x8030) < piVar2[3])) {
    return 1;
  }
  return 0;
}


/* sub_08026D14 @ 0x08026D14 */

undefined4 sub_08026D14(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  *puVar1 = (*(int **)(param_1 + 0x1c))[1] - *(int *)(*(int *)(param_1 + 0x10) + 0x8030) & 0xffU |
            (uint)((**(int **)(param_1 + 0x1c) - *(int *)(*(int *)(param_1 + 0x10) + 0x802c)) *
                  0x800000) >> 7 | *(uint *)(*(int *)(param_1 + 0x1c) + 0x10) & 0xfe00ff00;
  puVar1[1] = *(ushort *)(param_1 + 0x14) & 0x3ff | puVar1[1] & 0xfffffc00 | 0xc00;
  return 0;
}


/* sub_08026D7C @ 0x08026D7C */

int sub_08026D7C(int param_1,int param_2,uint param_3)

{
  if (param_2 == 4) {
    if ((int)param_3 >> 1 == (uint)*(ushort *)(param_1 + 0xc)) {
      *(uint *)(param_1 + 0x18) = param_3 & 1;
      return 1;
    }
    param_1 = 0;
  }
  else {
    if (param_2 != 8) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0xc) != param_3) {
      return 0;
    }
  }
  return param_1;
}


/* sub_08026DA8 @ 0x08026DA8 */

void sub_08026DA8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0804E148;
  sub_0801142A(&DAT_03001c4c,*(undefined2 *)(param_1 + 5),param_3,param_4,param_4);
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08026DE4 @ 0x08026DE4 */

undefined4 * sub_08026DE4(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x40;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x40);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804D634;
    uVar2 = param_2[1];
    uVar3 = *param_2;
    param_1[8] = uVar2;
    param_1[7] = uVar3;
    param_1[4] = param_3;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 2) = 0x37;
    param_1[1] = uVar2;
    if (param_3 == 0) {
      sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x874cfac,0x40);
    }
    else {
      sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x874cf2c,0x40);
    }
  }
  return param_1;
}


/* sub_08026E6A @ 0x08026E6A */

void sub_08026E6A(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    uVar2 = (uint)(iVar1 * 0x4000000) >> 0x1d;
    if (3 < uVar2) {
      uVar2 = 7 - uVar2;
    }
    if (*(uint *)(param_1 + 0x18) != uVar2) {
      *(uint *)(param_1 + 0x18) = uVar2;
      sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                   (int)(&DAT_0874cf2c + uVar2 * 0x40),0x40);
    }
  }
  return;
}


/* sub_08026EA4 @ 0x08026EA4 */

undefined4 sub_08026EA4(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x2000;
  uVar2 = (uint)(*(int *)(param_1 + 0x1c) << 0x17) >> 7 | 0x2000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | *(uint *)(param_1 + 0x20) & 0xff;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffffc00 | 0xc00;
  return 0;
}


/* sub_08026EE6 @ 0x08026EE6 */

undefined4 * sub_08026EE6(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    uStack_18 = 0;
    uStack_14 = 0;
    sub_08026DE4(param_1,&uStack_18,1);
    *param_1 = &_0804D594;
    param_1[0xb] = param_2;
    iVar1 = param_3[1];
    param_1[9] = *param_3 + -4;
    param_1[10] = iVar1 + -4;
  }
  return param_1;
}


/* sub_08026F2A @ 0x08026F2A */

undefined4 sub_08026F2A(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x8030);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x24) - *(int *)(*(int *)(param_1 + 0x2c) + 0x802c);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x28) - iVar2;
  if ((((*(int *)(param_1 + 0x1c) < -7) || (0xef < *(int *)(param_1 + 0x1c))) ||
      (*(int *)(param_1 + 0x20) < -7)) || (0x9f < *(int *)(param_1 + 0x20))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_08026F94 @ 0x08026F94 */

undefined4 * sub_08026F94(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc28), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x400;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x400);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x400);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x400);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804D5E4;
    param_1[0x304] = 0x7800;
    param_1[0x305] = 0x5000;
    param_1[0x306] = 0;
    param_1[0x307] = 0;
    Wfz_LoadContainer(&DAT_0874d044,param_1 + 4,param_1 + 0x306);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),(int)(param_1 + 4),
                 0x400);
    *(undefined1 *)(param_1 + 2) = 0x10;
    param_1[0x309] = 0;
    param_1[0x308] = 0;
  }
  return param_1;
}


/* sub_08027020 @ 0x08027020 */

void sub_08027020(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((DAT_03003304 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc24) = 1;
    *(undefined4 *)(param_1 + 0xc20) = 0;
  }
  if ((DAT_03003306 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc24) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc20);
  if (*(int *)(param_1 + 0xc24) == 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 0xc20) = iVar2;
      if (-1 < iVar2 * -0x80000000) {
        sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                     (iVar2 >> 1) * 0x400 + param_1 + 0x10,0x400);
      }
    }
  }
  else if (iVar2 < 4) {
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 0xc20) = iVar2;
    if (-1 < iVar2 * -0x80000000) {
      sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                   (iVar2 >> 1) * 0x400 + param_1 + 0x10,0x400);
    }
  }
  piVar1 = (int *)(param_1 + 0xc18);
  if ((int)((uint)DAT_03003302 << 0x1a) < 0) {
    *piVar1 = *piVar1 + -0x80;
  }
  if ((int)((uint)DAT_03003302 << 0x1b) < 0) {
    *piVar1 = *piVar1 + 0x80;
  }
  piVar4 = (int *)(param_1 + 0xc1c);
  if ((int)((uint)DAT_03003302 << 0x19) < 0) {
    *piVar4 = *piVar4 + -0x80;
  }
  if ((int)((uint)DAT_03003302 << 0x18) < 0) {
    *piVar4 = *piVar4 + 0x80;
  }
  piVar3 = (int *)(param_1 + 0xc10);
  *piVar3 = *piVar3 + *piVar1;
  *(int *)(param_1 + 0xc14) = *(int *)(param_1 + 0xc14) + *(int *)(param_1 + 0xc1c);
  iVar2 = *(int *)(param_1 + 0xc18) * 3;
  *(int *)(param_1 + 0xc18) = (int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2;
  iVar2 = *(int *)(param_1 + 0xc1c) * 3;
  *(int *)(param_1 + 0xc1c) = (int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2;
  if (*piVar3 < 0x1000) {
    *piVar3 = 0x1000;
    *piVar1 = 0;
  }
  if (0xe000 < *piVar3) {
    *piVar3 = 0xe000;
    *piVar1 = 0;
  }
  piVar1 = (int *)(param_1 + 0xc14);
  if (*piVar1 < 0x1000) {
    *piVar1 = 0x1000;
    *piVar4 = 0;
  }
  if (0x9000 < *piVar1) {
    *piVar1 = 0x9000;
    *piVar4 = 0;
  }
  return;
}


/* sub_08027154 @ 0x08027154 */

undefined4 sub_08027154(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x80002000;
  uVar2 = (uint)(((*(int *)(param_1 + 0xc10) >> 8) + -0x10) * 0x800000) >> 7 | 0x80002000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | (*(int *)(param_1 + 0xc14) >> 8) + 0xf0U & 0xff;
  puVar1[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000) + 0x400;
  return 0;
}


/* sub_080271D0 @ 0x080271D0 */

undefined4 * sub_080271D0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0x40;
  iVar1 = sub_0801124C(&DAT_03001c4c,0x40);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0x40);
    iVar1 = sub_0801124C(&DAT_03001c4c,0x40);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804D60C;
  param_1[5] = 0;
  *(char *)(param_1 + 7) = (char)param_2;
  param_1[8] = 1;
  puVar2 = &DAT_0874d2dc;
  if (param_2 < 2) {
    puVar2 = &DAT_0874d25c;
  }
  param_1[4] = puVar2;
  param_1[6] = 0xffffffff;
  return param_1;
}


/* sub_08027234 @ 0x08027234 */

void sub_08027234(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    uVar2 = (uint)(iVar1 * 0x8000000) >> 0x1f;
  }
  if (*(uint *)(param_1 + 0x18) != uVar2) {
    *(uint *)(param_1 + 0x18) = uVar2;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(param_1 + 0x10) + uVar2 * 0x40,0x40);
  }
  return;
}


/* sub_0802726C @ 0x0802726C */

undefined4 sub_0802726C(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = *(undefined4 *)(&DAT_0874d24c + (uint)*(byte *)(param_1 + 0x1c) * 4);
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000;
  return 0;
}


/* sub_080272AC @ 0x080272AC */

void sub_080272AC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + (uint)*(byte *)(param_1 + 0x11) * 0x10 +
                   (uint)*(byte *)(param_1 + 0x10) * 4 + 4);
  *(int *)(param_1 + 0x54) = iVar1;
  *(uint *)(param_1 + 0x6c) = (0x38 - (uint)(*(byte *)(iVar1 + 6) >> 1)) - (int)*(char *)(iVar1 + 4)
  ;
  if (*(byte *)(iVar1 + 7) < 0x21) {
    *(undefined4 *)(param_1 + 0x70) = 0x40;
  }
  else {
    *(uint *)(param_1 + 0x70) =
         (0x38 - (uint)(*(byte *)(iVar1 + 7) >> 1)) - (int)*(char *)(iVar1 + 5);
  }
  return;
}


/* sub_080272EC @ 0x080272EC */

undefined4 * sub_080272EC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x198), param_1 != (undefined4 *)0x0)) {
    uVar1 = sub_08000158(*(undefined4 *)(param_2 + 4));
    sub_0800EB60(param_1,uVar1,&DAT_03001b0c);
    *param_1 = &_0804CE7C;
    param_1[0x65] = 0;
    sub_080272AC(param_1);
  }
  return param_1;
}


/* sub_0802732C @ 0x0802732C */

undefined4 sub_0802732C(void)

{
  sub_0800EF38();
  return 1;
}


/* sub_08027336 @ 0x08027336 */

void sub_08027336(int param_1)

{
  int iVar1;
  
  sub_0800EF08();
  iVar1 = *(int *)(param_1 + 0x194) + 1;
  *(int *)(param_1 + 0x194) = iVar1;
  *(undefined *)(param_1 + 0x10) = (&gUnknown_0874D35C)[(uint)(iVar1 * 0x800000) >> 0x1e];
  sub_080272AC(param_1);
  return;
}


/* sub_0802735C @ 0x0802735C */

void sub_0802735C(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  if (param_2 == 0) {
    sub_0800ED18(param_1,&DAT_03001b0c,param_3,param_4,param_4);
  }
  else {
    bVar1 = **(byte **)(param_1 + 0x58);
    if ((1 < bVar1) && (*(int *)(*(byte **)(param_1 + 0x58) + 0x58) != 0)) {
      sub_0800ED18(param_1,&DAT_03001b58,bVar1,param_4,param_4);
    }
  }
  return;
}


/* sub_08027390 @ 0x08027390 */

undefined4 * sub_08027390(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(400), param_1 != (undefined4 *)0x0)) {
    uVar3 = sub_08000158((&DAT_0874d384)[*param_2 * 4]);
    sub_0800EB60(param_1,uVar3,&DAT_03001b0c);
    *param_1 = &_0804CEB8;
    param_1[99] = param_2;
    uVar4 = param_2[2];
    *(char *)(param_1 + 4) = (char)uVar4;
    iVar5 = *(int *)(param_1[0x14] + (uint)*(byte *)((int)param_1 + 0x11) * 0x10 +
                     (uVar4 & 0xff) * 4 + 4);
    param_1[0x15] = iVar5;
    iVar6 = param_2[4];
    param_1[0x1b] = param_2[3];
    param_1[0x1c] = iVar6;
    cVar2 = *(char *)(iVar5 + 4);
    param_2[6] = param_2[4] + (int)*(char *)(iVar5 + 5);
    param_2[5] = param_2[3] + (int)cVar2;
    iVar5 = param_1[99];
    bVar1 = *(byte *)(param_1[0x15] + 7);
    *(uint *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x14) + (uint)*(byte *)(param_1[0x15] + 6);
    *(uint *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x18) + (uint)bVar1;
    *(undefined4 **)(param_1[99] + 0x24) = param_1;
  }
  return param_1;
}


/* sub_08027424 @ 0x08027424 */

void sub_08027424(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AE38;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  sub_0800ED80(param_1,puVar1);
  *(undefined1 *)(param_1 + 8) = 0x28;
  return;
}


/* sub_08027448 @ 0x08027448 */

void sub_08027448(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0x38;
  sub_0800EDA6();
  return;
}


/* sub_08027454 @ 0x08027454 */

undefined4 sub_08027454(int param_1)

{
  return **(undefined4 **)(param_1 + 0x18c);
}


/* sub_0802745E @ 0x0802745E */

undefined4 sub_0802745E(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18c) + 4);
}


/* sub_08027468 @ 0x08027468 */

void sub_08027468(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_1,&DAT_03001b0c,param_3,param_4,param_4);
  return;
}


/* sub_08027484 @ 0x08027484 */

void sub_08027484(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 4) + 1;
  *(char *)(param_1 + 4) = (char)iVar1;
  if (*(undefined **)(param_2 + 0x38) != (&gUnknown_0874D360)[(uint)(iVar1 * 0x8000000) >> 0x1d]) {
    sub_0800EECC();
  }
  return;
}


/* sub_080274A6 @ 0x080274A6 */

void sub_080274A6(void)

{
  sub_0803D63C();
  return;
}


/* sub_080274B4 @ 0x080274B4 */

undefined4 * sub_080274B4(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x80,param_4);
    *param_1 = &_08049F0C;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar2 << 8;
    param_1[6] = &gUnknown_0874E968 + param_3 * 0xc;
    param_1[0x10] = *(undefined4 *)(&gUnknown_0874E208 + param_3 * 8);
    param_1[0x11] = *(undefined4 *)(&DAT_0874e20c + param_3 * 8);
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_08027516 @ 0x08027516 */

void sub_08027516(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(param_1 + 0x20) >> 8;
  local_c = *(int *)(param_1 + 0x24) >> 8;
  sub_08011944(&DAT_03001c4c,param_1);
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    uVar2 = sub_0802A81C(0,&local_10,&gUnknown_08712FDC,4,0x2000,0x400,0x38);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_08027562 @ 0x08027562 */

void sub_08027562(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  int iStack_18;
  
  uVar1 = *(int *)(param_1 + 0x48) + 1;
  *(uint *)(param_1 + 0x48) = uVar1;
  if ((uVar1 & 3) == 0) {
    uVar1 = uVar1 * 0x10000000 >> 0x1e;
    if (uVar1 == 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -0x30;
    }
    else if (uVar1 == 1) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x30;
    }
    else if (uVar1 == 2) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x30;
    }
    else if (uVar1 == 3) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -0x30;
    }
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  sub_08019B4E(param_1);
  if ((((DAT_030019bc < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x28) < DAT_030019c4)) &&
      (DAT_030019c0 < *(int *)(param_1 + 0x34))) && (*(int *)(param_1 + 0x2c) < DAT_030019c8)) {
    iVar2 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
    if (iVar2 == 0) {
      sub_08027516(param_1);
    }
    else if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uStack_28 = *(undefined4 *)(param_1 + 0x1c);
      uStack_34 = *(undefined1 *)(param_1 + 0x10);
      puStack_2c = &gUnknown_086B8090;
      uStack_30 = 0x400;
      uStack_44 = *(undefined4 *)(param_1 + 0x28);
      uStack_40 = *(undefined4 *)(param_1 + 0x2c);
      uStack_3c = *(undefined4 *)(param_1 + 0x30);
      uStack_38 = *(undefined4 *)(param_1 + 0x34);
      auStack_48[0] = 0;
      iStack_18 = param_1;
      iVar2 = sub_08011C70(&DAT_03001c4c,0,auStack_48);
      if (iVar2 != 0) {
        sub_08027516(param_1);
      }
    }
  }
  else {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}


/* sub_0802764E @ 0x0802764E */

undefined4 sub_0802764E(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else {
      if ((((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30)) &&
           (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
         (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))) {
        sub_08027516();
        return 1;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}


/* sub_080276A8 @ 0x080276A8 */

undefined4 * sub_080276A8(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,param_4);
    *param_1 = &_08049FC0;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar2 << 8;
    param_1[6] = &gUnknown_0874E614 + param_3 * 0xc;
    param_1[0x10] = *(undefined4 *)(&gUnknown_0874E234 + param_3 * 8);
    param_1[0x11] = *(undefined4 *)(&DAT_0874e238 + param_3 * 8);
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_0802770C @ 0x0802770C */

void sub_0802770C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  undefined4 in_cr11;
  undefined8 uVar8;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined *puStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  int local_14;
  int local_10;
  
  local_14 = *(int *)(param_1 + 0x20) >> 8;
  local_10 = *(int *)(param_1 + 0x24) >> 8;
  sub_08011944(&DAT_03001c4c,param_1);
  sub_0803E378(&DAT_03003e5c,&DAT_083194d0,0x40,0);
  iVar1 = sub_080116FC(&DAT_03001c4c);
  uVar8 = CONCAT44(0x400,iVar1);
  cVar7 = SBORROW4(iVar1,0x400);
  cVar6 = iVar1 + -0x400 < 0;
  if (0x3ff < iVar1) {
    iVar1 = sub_0802A81C(0,&local_14,&gUnknown_08712FDC,4);
    cVar7 = SCARRY4(iVar1,0);
    cVar6 = iVar1 < 0;
    uVar8 = sub_0801191A(&DAT_03001c4c);
  }
  iStack_38 = (int)((ulonglong)uVar8 >> 0x20);
  iVar1 = (int)uVar8;
  if (cVar6 != cVar7) {
    iVar1 = iVar1 + -0x14;
    coprocessor_load(0,in_cr11,iVar1);
  }
  uStack_30 = 0x5c4;
  puStack_34 = &gUnknown_0874E228;
  uVar2 = *(int *)(iVar1 + 0x48) + 1;
  *(uint *)(iVar1 + 0x48) = uVar2;
  piVar5 = (int *)(iVar1 + 0x40);
  iStack_3c = iVar1;
  if (((uVar2 & 3) == 0) && (iVar3 = sub_080116FC(&DAT_03001c4c), 0x3f < iVar3)) {
    iStack_44 = *(int *)(iVar1 + 0x20) - ((*piVar5 << 0xb) >> 8) >> 8;
    iStack_50 = (*(int *)(iVar1 + 0x44) << 0xb) >> 8;
    puStack_54 = (undefined *)((*piVar5 << 0xb) >> 8);
    iStack_5c = *(int *)(iVar1 + 0x20) - (int)puStack_54;
    iStack_58 = *(int *)(iVar1 + 0x24) - iStack_50;
    iStack_40 = iStack_58 >> 8;
    uStack_68 = 0x38;
    uStack_6c = 0x40;
    uStack_70 = 0x2aaa;
    iStack_4c = iStack_5c;
    iStack_48 = iStack_58;
    uVar4 = sub_0802A81C(0,&iStack_44,&DAT_0874e644,3);
    sub_0801191A(&DAT_03001c4c,uVar4);
  }
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + *piVar5;
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x44);
  sub_08019B4E(iVar1);
  if ((((DAT_030019bc < *(int *)(iVar1 + 0x30)) && (*(int *)(iVar1 + 0x28) < DAT_030019c4)) &&
      (DAT_030019c0 < *(int *)(iVar1 + 0x34))) && (*(int *)(iVar1 + 0x2c) < DAT_030019c8)) {
    iVar3 = sub_08009324((undefined4 *)(iVar1 + 0x28),DAT_03001a50);
    if (iVar3 == 0) {
      sub_0802770C(iVar1);
    }
    else if ((iStack_38 != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
      iStack_50 = *(undefined4 *)(iVar1 + 0x1c);
      iStack_5c = CONCAT31(iStack_5c._1_3_,*(undefined1 *)(iVar1 + 0x10));
      puStack_54 = &gUnknown_086B8090;
      iStack_58 = 0x400;
      uStack_6c = *(undefined4 *)(iVar1 + 0x28);
      uStack_68 = *(undefined4 *)(iVar1 + 0x2c);
      uStack_64 = *(undefined4 *)(iVar1 + 0x30);
      uStack_60 = *(undefined4 *)(iVar1 + 0x34);
      uStack_70 = uStack_70 & 0xffffff00;
      iStack_40 = iVar1;
      iVar3 = sub_08011C70(&DAT_03001c4c,0,&uStack_70);
      if (iVar3 != 0) {
        iVar3 = sub_0803FACC(2);
        sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
        sub_0802770C(iVar1);
      }
    }
  }
  else {
    sub_08011944(&DAT_03001c4c,iVar1);
  }
  return;
}


/* sub_080278E2 @ 0x080278E2 */

undefined4 sub_080278E2(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else {
      if ((((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30)) &&
           (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
         (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))) {
        sub_0802770C();
        return 1;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}


/* sub_08027948 @ 0x08027948 */

int sub_08027948(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08000158(0x95);
  if (iVar1 == param_1) {
    param_1 = sub_08000158(0x92);
  }
  iVar1 = 0;
  do {
    iVar2 = sub_08000158((&DAT_0874d384)[iVar1 * 4]);
    if (iVar2 == param_1) {
      iVar2 = (&DAT_0874d38c)[iVar1 * 4];
      if (param_2 == (undefined *)0x0) {
        if (iVar2 < 0) {
          return iVar1;
        }
      }
      else if ((-1 < iVar2) && (&gEnemyStats + iVar2 * 0x1c == param_2)) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
    if (0xe7 < iVar1) {
      iVar1 = 0;
      while (((param_2 != (undefined *)0x0 &&
              (((int)(&DAT_0874d38c)[iVar1 * 4] < 0 ||
               (&gEnemyStats + (&DAT_0874d38c)[iVar1 * 4] * 0x1c != param_2)))) ||
             (iVar2 = sub_08000158((&DAT_0874d384)[iVar1 * 4]), iVar2 != param_1))) {
        iVar1 = iVar1 + 1;
        if (0xe7 < iVar1) {
          return -1;
        }
      }
      return iVar1;
    }
  } while( true );
}


/* sub_080279E0 @ 0x080279E0 */

undefined4 * sub_080279E0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x40;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x40);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804D8A0;
    param_1[4] = *param_2 + -8;
    param_1[5] = param_2[1] + -8;
    uVar2 = __16__rt_sdiv(DAT_03001a38,(param_2[2] - *param_2) * 0x400000);
    param_1[6] = uVar2;
    uVar2 = __16__rt_sdiv(DAT_03001a3c,(param_2[3] - param_2[1]) * 0x400000);
    param_1[7] = uVar2;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x874ea00,0x40);
  }
  return param_1;
}


/* sub_08027A74 @ 0x08027A74 */

undefined4 sub_08027A74(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_03001c34;
  if (DAT_03001c34 != 0) {
    puVar3 = (uint *)*param_2;
    *param_2 = puVar3 + 2;
    iVar4 = param_2[1];
    param_2[1] = iVar4 + 0x20;
    iVar5 = param_2[2];
    param_2[2] = iVar5 + 1;
    *puVar3 = 0x2300;
    uVar2 = (uint)(((*(int *)(param_1 + 0x18) * (*(int *)(iVar1 + 0x1a0) >> 8) >> 0x16) +
                   *(int *)(param_1 + 0x10)) * 0x800000) >> 7 | 0x2300;
    *puVar3 = uVar2;
    *puVar3 = uVar2 | (*(int *)(param_1 + 0x1c) * (*(int *)(iVar1 + 0x1a4) >> 8) >> 0x16) +
                      *(int *)(param_1 + 0x14) & 0xffU | (uint)(iVar5 << 0x1b) >> 2;
    puVar3[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar3[1] & 0xfffffc00;
    *(short *)(iVar4 + 6) = (short)(DAT_030019e8 >> 2);
    *(short *)(iVar4 + 0x16) = (short)(DAT_030019ec >> 2);
    *(short *)(iVar4 + 0xe) = (short)(DAT_030019f0 >> 2);
    *(short *)(iVar4 + 0x1e) = (short)(DAT_030019f4 >> 2);
  }
  return 0;
}


/* sub_08027B18 @ 0x08027B18 */

undefined4 sub_08027B18(int param_1,int param_2)

{
  if (param_2 == 0xb) {
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),0x874ea00,0x40);
  }
  return 0;
}


/* sub_08027B4C @ 0x08027B4C */

void sub_08027B4C(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  undefined4 local_18;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  sub_0800FF44(auStack_28,uVar5);
  sub_080192CE(auStack_28,local_18,param_1 + 0x10,param_1 + 8,*(undefined4 *)(param_1 + 0x14));
  sub_0800ECDA(uVar5,3);
  sub_0800ED18(uVar5,&DAT_03001b10);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  if (iVar4 < iVar2) {
    uVar5 = 3;
    if (iVar1 < 1) {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 1;
    if (0 < iVar3) {
      uVar5 = 0;
    }
  }
  uVar5 = sub_08027CBC(0,auStack_28,param_1 + 8,uVar5);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  sub_0801191A(&DAT_03001c4c,uVar5);
  return;
}


/* sub_08027BCC @ 0x08027BCC */

void sub_08027BCC(void)

{
  return;
}


/* sub_08027BCE @ 0x08027BCE */

bool sub_08027BCE(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    sub_08027D3E(*(undefined4 *)(param_1 + 0x18));
  }
  return iVar1 == 0;
}


/* sub_08027BE6 @ 0x08027BE6 */

void sub_08027BE6(int param_1,undefined4 param_2)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_0800FE34(&local_24,*(undefined4 *)(param_1 + 0x1c));
  local_14 = local_24 + local_1c >> 1;
  local_10 = local_20 + local_18 >> 1;
  sub_08027B4C(param_1,param_2,&local_14);
  return;
}


/* sub_08027C20 @ 0x08027C20 */

void sub_08027C20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_18 = param_1 + 0x1c;
  uVar5 = *(undefined4 *)(param_2 + 4);
  iStack_20 = param_1;
  iStack_1c = param_2;
  sub_0800FF44(auStack_28,uVar5);
  sub_080192CE(auStack_28,iStack_18,param_1 + 0x10,param_1 + 8,*(undefined4 *)(param_1 + 0x14));
  sub_0800ECDA(uVar5,3);
  sub_0800ED18(uVar5,&DAT_03001b10);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  if (iVar4 < iVar2) {
    uVar5 = 3;
    if (iVar1 < 1) {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 1;
    if (0 < iVar3) {
      uVar5 = 0;
    }
  }
  uVar5 = sub_08027CBC(0,auStack_28,param_1 + 8,uVar5);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  sub_0801191A(&DAT_03001c4c,uVar5);
  return;
}


/* sub_08027C30 @ 0x08027C30 */

void sub_08027C30(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_0800FE34(&local_1c,*(undefined4 *)(param_2 + 4));
  sub_08011732(&DAT_03001c4c,0x400);
  local_24 = (local_1c + local_14 >> 1) + *(int *)(param_1 + 8);
  local_20 = (local_18 + local_10 >> 1) + *(int *)(param_1 + 0xc);
  uVar1 = sub_0801952C(0,&local_24,0x37);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08027C90 @ 0x08027C90 */

void sub_08027C90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  sub_08011732(&DAT_03001c4c,0x400,param_3,param_4,param_4);
  uVar1 = sub_0801952C(0,param_1 + 8,0x37);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08027CBC @ 0x08027CBC */

undefined4 * sub_08027CBC(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x54), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,0);
    *param_1 = &_0804D234;
    uVar1 = param_3[1];
    param_1[0x10] = *param_3;
    param_1[0x11] = uVar1;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x14] = 0;
    param_1[0x12] = &gUnknown_0871370C + param_4 * 0x30;
    param_1[0x13] = 0;
    param_1[6] = &gUnknown_0871370C + param_4 * 0x30;
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
    iVar2 = sub_0803FACC(2);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x14) * 0xc,0x40,0,iVar3);
  }
  return param_1;
}


/* sub_08027D3E @ 0x08027D3E */

void sub_08027D3E(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined **)(param_1 + 0x18) = &gUnknown_087137CC;
  return;
}


/* sub_08027D48 @ 0x08027D48 */

void sub_08027D48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
    iVar1 = *(int *)(param_1 + 0x50) + 1;
    iVar2 = iVar1 >> 3;
    *(int *)(param_1 + 0x50) = iVar1;
    if (3 < iVar2) {
      iVar2 = 2 - ((iVar2 << 0x1f) >> 0x1f);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x48) + iVar2 * 0xc;
    sub_08019B4E();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) + -1;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
    }
  }
  return;
}


/* sub_08027DB0 @ 0x08027DB0 */

undefined4 * sub_08027DB0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804A3E8;
  sub_08011732(&DAT_03001c4c,0x2800);
  uVar1 = sub_08028144(0,param_2);
  param_1[1] = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  return param_1;
}


/* sub_08027DEE @ 0x08027DEE */

void sub_08027DEE(void)

{
  return;
}


/* sub_08027DF0 @ 0x08027DF0 */

void sub_08027DF0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011944(&DAT_03001c4c,param_1[1],param_3,param_4,param_4);
  sub_08011E94(&DAT_03001c4c);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08027E16 @ 0x08027E16 */

void sub_08027E16(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r1(*(int **)(param_1 + 4),iVar2 + iVar1,iVar2,param_4,param_4);
  sub_080115B0(&DAT_03001c4c);
  return;
}


/* sub_08027E2E @ 0x08027E2E */

undefined4 sub_08027E2E(int param_1)

{
  sub_0801157E(&DAT_03001c4c);
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
}


