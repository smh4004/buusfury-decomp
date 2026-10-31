/* Ghidra reference decompilation of code_0801711C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801711C @ 0x0801711C */

void sub_0801711C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  __call_via_r1(*(int **)(param_1 + 8),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0801712C @ 0x0801712C */

void sub_0801712C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r1(*(int **)(param_1 + 8),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0801713C @ 0x0801713C */

undefined4 sub_0801713C(int param_1)

{
  return *(undefined4 *)(&DAT_086b6bb4 + (uint)*(ushort *)(param_1 + 0xe) * 4);
}


/* sub_0801714A @ 0x0801714A */

void sub_0801714A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  iVar2 = *piVar1;
  __call_via_r1(*(int **)(param_1 + 8),iVar2 + (int)piVar1,iVar2,param_4,param_4);
  return;
}


/* sub_08017160 @ 0x08017160 */

void sub_08017160(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(300), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    *param_1 = &_0804B024;
    param_1[0x48] = 0;
    param_1[0x45] = param_2;
    param_1[0x47] = 0;
    param_1[0x46] = (uint)(byte)(&DAT_0300156c)[param_2 * 0x68];
  }
  return;
}


/* sub_080171A8 @ 0x080171A8 */

void sub_080171A8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar1 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,iVar2 + 0x2e,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  if (2 < *(int *)(param_1 + 0x118)) {
    uVar1 = sub_08013E64(0,param_1,2,0xd4,0x28,2,0,0);
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    uVar1 = sub_08013E64(0,param_1,3,0xd4,0x70,3,1,0);
    *(undefined4 *)(param_1 + 0x128) = uVar1;
    sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x124));
    sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x128));
  }
  uVar1 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x22,0x14,L"Journal",2,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0xce,0x14,L"Inventory",2,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}


/* sub_08017350 @ 0x08017350 */

void sub_08017350(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_16c [264];
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined1 *local_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  int iStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_28;
  
  sub_0803F540(&uStack_48,0xf0,0xa0);
  sub_08006718(param_1,&uStack_48,0x1c,1);
  local_4c = &DAT_03001560 + *(int *)(param_1 + 0x114) * 0x68;
  uVar1 = *(uint *)(param_1 + 0x120);
  iVar3 = (uVar1 & 0xfffffffe) - 4;
  if (*(int *)(param_1 + 0x11c) < iVar3) {
    *(int *)(param_1 + 0x11c) = iVar3;
  }
  if ((int)uVar1 < *(int *)(param_1 + 0x11c)) {
    *(uint *)(param_1 + 0x11c) = uVar1 & 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x11c) < 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (2 < *(int *)(param_1 + 0x118)) {
    *(uint *)(*(int *)(param_1 + 0x124) + 8) = (uint)(1 < (int)uVar1);
    *(uint *)(*(int *)(param_1 + 0x128) + 8) =
         (uint)((int)(*(uint *)(param_1 + 0x120) & 0xfffffffe) <
               (int)(*(int *)(param_1 + 0x118) - 1U & 0xfffffffe));
    sub_080051B0(&uStack_48,0xdb,0x37,0x70);
    sub_08005154(&uStack_48,0x28,0x50,0x58);
    sub_08005154(&uStack_48,0x88,0x50,0xb8);
  }
  puStack_3c = &gUnknown_0807012C;
  uStack_47 = 0xc;
  uStack_46 = 1;
  uStack_28 = 0x803f5a5;
  uStack_48 = 1;
  iVar3 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x11c) + iVar3;
    if (*(int *)(param_1 + 0x118) <= iVar4) break;
    iStack_54 = ((iVar3 << 0x1f) >> 0x1f) * -0x60 + 0x40;
    iStack_50 = (iVar3 >> 1) * 0x34 + 0x28;
    pcVar2 = (char *)sub_080135A2(local_4c,iVar4);
    iStack_44 = iStack_54;
    iStack_40 = iStack_50;
    uStack_45 = 6;
    if (*(int *)(param_1 + 0x120) != iVar4) {
      uStack_45 = 2;
    }
    sub_0803DD66(&uStack_48,0x60,
                 *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(pcVar2 + 0xc) * 4));
    iStack_64 = iStack_44 + -0xc;
    iStack_5c = iStack_44 + 0xc;
    iStack_60 = iStack_40 + -8;
    iStack_58 = iStack_40 + 3;
    sub_08029138(auStack_16c,pcVar2);
    sub_0803F922(&uStack_48,auStack_16c,&iStack_64);
    if (*pcVar2 != -1) {
      iStack_40 = iStack_40 + 0xc;
      sub_0803DC96(&uStack_48,&gUnknown_08058660,(byte)local_4c[iVar4 * 2 + 0x2e] + 1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  sub_08049150((int)&uStack_48,0x6000040);
  sub_0803F58C(&uStack_48,0);
  return;
}


/* sub_080174E8 @ 0x080174E8 */

undefined4 sub_080174E8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  switch(param_3) {
  case 0:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    uVar4 = *(undefined4 *)(param_1 + 0x114);
    uVar5 = *(undefined4 *)(param_1 + 0x120);
    uVar6 = sub_0803D5B8(0x124);
    puVar2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    puVar1 = (undefined4 *)uVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804AFF8;
      puVar1[0x45] = uVar4;
      puVar1[0x46] = uVar5;
      puVar2 = puVar1 + 0x47;
    }
    sub_0803D8A0(puVar1,puVar2);
    return 0;
  case 1:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(1);
    return 1;
  case 2:
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    iVar3 = *(int *)(param_1 + 0x120) + -2;
    *(int *)(param_1 + 0x120) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  default:
    break;
  case 3:
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    iVar3 = *(int *)(param_1 + 0x120) + 2;
    *(int *)(param_1 + 0x120) = iVar3;
    if (*(int *)(param_1 + 0x118) <= iVar3) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x118) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
    break;
  case 6:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(2);
    return 1;
  case 7:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(3);
    return 1;
  }
  return 0;
}


/* sub_080175FC @ 0x080175FC */

undefined4 sub_080175FC(int param_1)

{
  uint uVar1;
  
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    return 4;
  }
  if ((DAT_03003304 & 0x30) != 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    uVar1 = *(uint *)(param_1 + 0x120) ^ 1;
    *(uint *)(param_1 + 0x120) = uVar1;
    if (*(int *)(param_1 + 0x118) <= (int)uVar1) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x118) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_0801765E @ 0x0801765E */

undefined4 sub_0801765E(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x118) == 0) {
    return 0;
  }
  *param_2 = ((*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c)) * -0x80000000 >> 0x1f) * -0x60
             + 0x10;
  param_2[1] = (*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c) >> 1) * 0x34 + 0x25;
  return 1;
}


/* sub_080176AC @ 0x080176AC */

undefined4 * sub_080176AC(undefined4 *param_1)

{
  *param_1 = &_0804A040;
  sub_08049144((int)(param_1 + 1),0x5000000,0x200);
  sub_08049144((int)(param_1 + 0x81),0x5000200,0x200);
  return param_1;
}


/* sub_080176D6 @ 0x080176D6 */

void sub_080176D6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort auStack_414 [256];
  undefined1 auStack_214 [512];
  
  iVar1 = 0x100;
  if ((param_2 < 0x101) && (iVar1 = param_2, param_2 < 0)) {
    iVar1 = 0;
  }
  iVar2 = 0;
  do {
    uVar4 = (uint)*(ushort *)(iVar2 * 2 + param_1 + 4);
    iVar3 = iVar2 + 1;
    auStack_414[iVar2] =
         (ushort)(iVar1 * (uVar4 & 0x1f) >> 8) |
         (ushort)(((int)(iVar1 * ((uVar4 << 0x16) >> 0x1b)) >> 8) << 5) |
         (ushort)(((int)(iVar1 * ((uVar4 << 0x11) >> 0x1b)) >> 8) << 10);
    iVar2 = iVar3;
  } while (iVar3 < 0x200);
  sub_08049144(0x5000000,(int)auStack_414,0x200);
  sub_08049144(0x5000200,(int)auStack_214,0x200);
  return;
}


/* sub_0801774C @ 0x0801774C */

void sub_0801774C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort auStack_414 [256];
  undefined1 auStack_214 [512];
  
  iVar2 = 0x100;
  if ((param_2 < 0x101) && (iVar2 = param_2, param_2 < 0)) {
    iVar2 = 0;
  }
  iVar1 = iVar2 * 0x1f;
  iVar2 = 0x100 - iVar2;
  iVar3 = 0;
  do {
    uVar5 = (uint)*(ushort *)(iVar3 * 2 + param_1 + 4);
    iVar4 = iVar3 + 1;
    auStack_414[iVar3] =
         (ushort)(iVar2 * (uVar5 & 0x1f) + iVar1 >> 8) |
         (ushort)(((int)(iVar2 * ((uVar5 << 0x16) >> 0x1b) + iVar1) >> 8) << 5) |
         (ushort)(((int)(iVar2 * ((uVar5 << 0x11) >> 0x1b) + iVar1) >> 8) << 10);
    iVar3 = iVar4;
  } while (iVar4 < 0x200);
  sub_08049144(0x5000000,(int)auStack_414,0x200);
  sub_08049144(0x5000200,(int)auStack_214,0x200);
  return;
}


/* sub_080177D2 @ 0x080177D2 */

bool sub_080177D2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x404) + 1;
  *(int *)(param_1 + 0x404) = iVar1;
  iVar1 = __16__rt_sdiv(*(undefined4 *)(param_1 + 0x408),iVar1 * 0x100,param_3,param_4,param_4);
  sub_080176D6(param_1,0x100 - iVar1);
  return *(int *)(param_1 + 0x408) <= *(int *)(param_1 + 0x404);
}


/* sub_08017806 @ 0x08017806 */

undefined4 sub_08017806(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  __16__rt_sdiv(*(undefined4 *)(param_1 + 8),iVar1 * 0x100);
  sub_080070CC();
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}


/* sub_0801782C @ 0x0801782C */

bool sub_0801782C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x404) + 1;
  *(int *)(param_1 + 0x404) = iVar1;
  uVar2 = __16__rt_sdiv(*(undefined4 *)(param_1 + 0x408),iVar1 * 0x100,param_3,param_4,param_4);
  sub_0801774C(param_1,uVar2);
  return *(int *)(param_1 + 0x408) <= *(int *)(param_1 + 0x404);
}


/* sub_0801785C @ 0x0801785C */

undefined4 sub_0801785C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = __16__rt_sdiv(*(undefined4 *)(param_1 + 8),iVar1 * 0x100);
  sub_080070DA(0x100 - iVar1);
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}


/* sub_08017888 @ 0x08017888 */

undefined4 sub_08017888(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar2;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < iVar2) {
    __16__rt_sdiv(iVar1,(iVar1 * 2 - iVar2) * 0x100);
  }
  else {
    __16__rt_sdiv(iVar1,iVar2 * 0x100);
  }
  sub_080070DA();
  if (*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * -2 < 0 ==
      SBORROW4(*(int *)(param_1 + 4),*(int *)(param_1 + 8) * 2)) {
    return 1;
  }
  return 0;
}


/* sub_080178C8 @ 0x080178C8 */

undefined4 * sub_080178C8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [36];
  undefined4 uStack_24;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x100);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804C974;
    param_1[4] = 0;
    param_1[5] = param_2;
    sub_0803F540(auStack_48,0x10,0x10);
    Wfz_LoadContainer(&gUnknown_086B7E8C,uStack_24);
    sub_0803F9B8(auStack_48,&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20);
    param_1[1] = 1;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_0803F58C(auStack_48,0);
  }
  return param_1;
}


/* sub_0801794C @ 0x0801794C */

undefined4 sub_0801794C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 * 0x10000000 < 0) {
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)**(int **)(param_1 + 0x14);
    iVar2 = *piVar3;
    uVar1 = __call_via_r1(*(int **)(param_1 + 0x14),iVar2 + (int)piVar3,iVar2,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801796A @ 0x0801796A */

undefined4 sub_0801796A(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int local_18;
  int iStack_14;
  
  puVar3 = (uint *)*param_2;
  *param_2 = puVar3 + 2;
  *puVar3 = 0x40002000;
  uVar2 = puVar3[1];
  puVar3[1] = uVar2 & 0xfffff3ff;
  puVar3[1] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  iVar1 = **(int **)(param_1 + 0x14);
  __call_via_r2(&local_18,*(int **)(param_1 + 0x14),*(int *)(iVar1 + 4) + iVar1);
  *puVar3 = (uint)((local_18 + -0x10) * 0x800000) >> 7 | *puVar3 & 0xfe00ff00 |
            iStack_14 + 0xf4U & 0xff;
  return 0;
}


/* sub_080179E8 @ 0x080179E8 */

undefined4 * sub_080179E8(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x3c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492B8;
  sub_0803F540(param_1 + 2,0xf0,0xa0);
  param_1[1] = 0;
  return param_1;
}


/* sub_08017A14 @ 0x08017A14 */

void sub_08017A14(int param_1)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  sub_0804912C(0x6000000,0,0x18000);
  sub_08049168(0x6007800,2,0x800);
  uStack_20 = 5;
  uStack_1c = 0x1e;
  uStack_18 = 0x10;
  uStack_24 = 0;
  sub_0803DA10(&uStack_24,&DAT_06007800,2);
  Wfz_LoadContainer(&gUnknown_086F9EC8,*(undefined4 *)(param_1 + 0x2c));
  uStack_20 = 0x28;
  uStack_1c = 0xf0;
  uStack_18 = 0x80;
  uStack_24 = 0;
  sub_0804915C(param_1 + 8,0x6000080,(int)&uStack_24);
  sub_08049168(0x600f800,0x202,0x800);
  uStack_20 = 5;
  uStack_1c = 0x1e;
  uStack_24 = 0;
  uStack_18 = 0x10;
  sub_0803DA10(&uStack_24,&DAT_0600f800,0x202);
  Wfz_LoadContainer(&gUnknown_086FA398,*(undefined4 *)(param_1 + 0x2c));
  uStack_20 = 0x28;
  uStack_1c = 0xf0;
  uStack_18 = 0x80;
  uStack_24 = 0;
  sub_0804915C(param_1 + 8,0x6008080,(int)&uStack_24);
  REG_BG3CNT = 0xf83;
  REG_BG2CNT = 0x1f83;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_DISPCNT = 0xc00;
  REG_BLDCNT = 0x844;
  DAT_04000053 = 0x10;
  REG_BLDALPHA = 0;
  sub_08049144(0x5000000,0x805652c,0x200);
  return;
}


/* sub_08017AE6 @ 0x08017AE6 */

undefined4 sub_08017AE6(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = iVar1 + 1;
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 < 0xa1) {
    uVar3 = 0;
  }
  else if (iVar2 < 0xb1) {
    DAT_04000053 = -0x50 - (char)iVar2;
    REG_BLDALPHA = (char)*(undefined4 *)(param_1 + 4) + '`';
    uVar3 = 0;
  }
  else if (iVar2 < 0x140) {
    uVar3 = 0;
  }
  else if (iVar1 == 0x13f) {
    Wfz_LoadContainer(&gUnknown_086FABF4,*(undefined4 *)(param_1 + 0x2c));
    sub_08049168(0x6007800,2,0x800);
    uStack_1c = 3;
    uStack_14 = 0xd;
    uStack_18 = 0x1e;
    uStack_20 = 0;
    sub_0803DA10(&uStack_20,&DAT_06007800,2);
    uStack_1c = 0x11;
    uStack_14 = 0x14;
    uStack_20 = 0;
    uStack_18 = 0x1e;
    sub_0803DA10(&uStack_20,&DAT_06007800,0x12e);
    uStack_1c = 0x18;
    uStack_14 = 0x68;
    uStack_18 = 0xf0;
    uStack_20 = 0;
    sub_0804915C(param_1 + 8,0x6000080,(int)&uStack_20);
    uStack_1c = 0x88;
    uStack_14 = 0xa0;
    uStack_20 = 0;
    uStack_18 = 0xf0;
    sub_0804915C(param_1 + 8,0x6004b80,(int)&uStack_20);
    uVar3 = 0;
  }
  else if (iVar2 < 0x151) {
    DAT_04000053 = (char)iVar1 + -0x3f;
    REG_BLDALPHA = 'P' - (char)*(undefined4 *)(param_1 + 4);
    uVar3 = 0;
  }
  else if (iVar2 < 0x1f5) {
    uVar3 = 0;
  }
  else if (iVar2 < 0x205) {
    DAT_04000053 = (char)(0x204 - iVar2 >> 1);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_08017C1C @ 0x08017C1C */

undefined4 *
sub_08017C1C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_34 [16];
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1d4), param_1 != (undefined4 *)0x0)) {
    sub_080110D8(param_1,uStack_20,param_4,param_5,param_6);
    *param_1 = &_0804C92C;
    *(undefined2 *)(param_1 + 0x6f) = 0;
    param_1[0x70] = 0;
    param_1[0x74] = uStack_1c;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    sub_0800FDFA(auStack_34,param_1);
    sub_08009930(auStack_34,DAT_03001a4c,0);
    sub_08009930(auStack_34,DAT_03001a54,0);
  }
  return param_1;
}


/* sub_08017C90 @ 0x08017C90 */

void sub_08017C90(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_0804C92C;
  sub_08004102(param_1 + 0x70);
  piVar1 = (int *)param_1[0x6c];
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,*(int *)(*piVar1 + 4) + *piVar1);
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


/* sub_08017CE2 @ 0x08017CE2 */

undefined4 sub_08017CE2(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [36];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_2 == 3) {
    if ((((param_1[0x74] == 0) || (sub_0800FDFA(&local_24,param_1), param_3[2] <= local_24)) ||
        (local_1c <= *param_3)) || ((param_3[3] <= local_20 || (local_18 <= param_3[1])))) {
      uVar3 = 0;
    }
    else {
      iVar1 = param_3[4];
      *(byte *)(param_1 + 4) = *(byte *)(iVar1 + 0x10) ^ 1;
      local_1c = *(int *)(iVar1 + 0x1a0) - param_1[0x68];
      local_18 = *(int *)(iVar1 + 0x1a4) - param_1[0x69];
      __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
      sub_0801246E(auStack_48,param_1[0x74],param_1 + 0x6f,&local_1c,param_1 + 0x70);
      DAT_03001bac = param_1;
      puVar2 = (undefined4 *)sub_0803D5B8(8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_08049D18;
        puVar2[1] = auStack_48;
      }
      sub_0803D8A0(puVar2);
      DAT_03001bac = (int *)0x0;
      sub_080124D2(auStack_48,0);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = sub_080102D8(param_1);
  }
  return uVar3;
}


/* sub_08017DA2 @ 0x08017DA2 */

void sub_08017DA2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = sub_08000158(*(undefined4 *)(param_1 + 0x10));
  sub_08017C1C(0,uVar1,*(undefined4 *)(param_1 + 0xc),param_1 + 0x14,param_1 + 8,param_2);
  return;
}


/* sub_08017DCA @ 0x08017DCA */

void sub_08017DCA(undefined4 param_1)

{
  undefined1 auStack_18 [16];
  
  sub_0800FDFA(auStack_18,param_1);
  sub_08009930(auStack_18,DAT_03001a4c,1);
  sub_08009930(auStack_18,DAT_03001a54,1);
  return;
}


/* sub_08017DF4 @ 0x08017DF4 */

void sub_08017DF4(undefined4 param_1)

{
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_0800FDFA(&local_1c,param_1);
  if ((((DAT_03001c34 == 0) || (sub_0800FDFA(&local_2c), local_24 <= local_1c)) ||
      (local_14 <= local_2c)) || ((local_20 <= local_18 || (local_10 <= local_28)))) {
    sub_08009930(&local_1c,DAT_03001a4c,0);
    sub_08009930(&local_1c,DAT_03001a54,0);
  }
  return;
}


/* sub_08017E64 @ 0x08017E64 */

undefined4 * sub_08017E64(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x14), param_1 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    uVar5 = *(undefined4 *)(param_2 + 0x20);
    uVar1 = sub_0800776C();
    *param_1 = &_0804E444;
    *(short *)(param_1 + 1) = (short)uVar2 + -0x13;
    *(short *)((int)param_1 + 6) = (short)uVar3 + -0xb;
    *(short *)(param_1 + 2) = (short)uVar4 + 4;
    *(short *)((int)param_1 + 10) = (short)uVar5 + 4;
    *param_1 = &_0804A0C0;
    param_1[4] = param_2;
    param_1[3] = uVar1;
  }
  return param_1;
}


/* sub_08017EC2 @ 0x08017EC2 */

void sub_08017EC2(int param_1)

{
  DAT_0300155c = DAT_0300155c + *(int *)(*(int *)(param_1 + 0x60) + 0xc);
  sub_0803E378(&DAT_03003e5c,&DAT_083194b8,0x40,0);
  sub_08011944(&DAT_03001c4c,param_1);
  return;
}


/* sub_08017EFE @ 0x08017EFE */

void sub_08017EFE(int param_1)

{
  sub_08017EC2(*(undefined4 *)(param_1 + 0x10));
  sub_0801268A(&DAT_03002a64,param_1);
  return;
}


/* sub_08017F14 @ 0x08017F14 */

void sub_08017F14(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *(int *)(param_1 + 0x48) = *param_2;
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = *param_2 - (uint)(**(byte **)(param_1 + 0x60) >> 1);
  *(int *)(param_1 + 0x38) = iVar1;
  *(uint *)(param_1 + 0x40) = iVar1 + (uint)**(byte **)(param_1 + 0x60);
  *(int *)(param_1 + 4) = param_2[1];
  return;
}


/* sub_08017F38 @ 0x08017F38 */

int * sub_08017F38(int *param_1,byte *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3[1];
  iVar2 = *(int *)(param_2 + 8);
  *param_1 = (*param_3 + *(int *)(param_2 + 4)) - (uint)(*param_2 >> 1);
  param_1[1] = iVar1 + iVar2;
  return param_1 + 2;
}


/* sub_08017F5A @ 0x08017F5A */

undefined4 * sub_08017F5A(undefined4 *param_1,byte *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x6c), param_1 != (undefined4 *)0x0)) {
    iStack_28 = param_3[1] + *(int *)(param_2 + 8);
    iStack_2c = (*param_3 + *(int *)(param_2 + 4)) - (uint)(*param_2 >> 1);
    sub_08018550(param_1,*(undefined4 *)(param_2 + 0x10),&iStack_2c,param_2 + 2);
    puStack_18 = param_1 + 0xc;
    *param_1 = &_08049CC4;
    puStack_1c = param_1 + 0xd;
    piStack_20 = param_1 + 0x14;
    piStack_24 = param_1 + 0x15;
    param_1[0x19] = 0xffffffff;
    param_1[0x18] = param_2;
    param_1[9] = 0;
    param_1[0xb] = 0;
    uVar2 = sub_0803FAAC();
    param_1[10] = uVar2;
    iVar3 = param_3[1];
    *piStack_20 = *param_3 << 8;
    *piStack_24 = iVar3 << 8;
    iVar3 = sub_0803FACC(0x100);
    param_1[0x16] = (param_4[1] * (iVar3 + -0x80) >> 8) + *param_4;
    iVar3 = sub_0803FACC(0x100);
    param_1[0x17] = (*param_4 * (iVar3 + -0x80) >> 8) + param_4[1];
    iVar3 = sub_0803FACC(0x40);
    param_1[0x16] = param_1[0x16] * (iVar3 + 0xe0) >> 8;
    iVar3 = sub_0803FACC(0x40);
    param_1[0x17] = param_1[0x17] * (iVar3 + 0xe0) >> 8;
    *(undefined1 *)(param_1 + 2) = 0x38;
    *puStack_18 = 0;
    *puStack_1c = 0x80;
    uVar2 = sub_08017E64(0,param_1);
    param_1[0x1a] = uVar2;
    puVar1 = &DAT_03002a68 + DAT_03002a64;
    DAT_03002a64 = DAT_03002a64 + 1;
    *puVar1 = uVar2;
    iVar3 = param_3[1];
    param_1[0x12] = *param_3;
    param_1[0x13] = iVar3;
    iVar3 = *param_3 - (uint)(*(byte *)param_1[0x18] >> 1);
    param_1[0xe] = iVar3;
    param_1[0x10] = iVar3 + (uint)*(byte *)param_1[0x18];
    param_1[1] = param_3[1];
  }
  return param_1;
}


/* sub_08018078 @ 0x08018078 */

void sub_08018078(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x24) = iVar1;
  if (600 < iVar1) {
    sub_0801268A(&DAT_03002a64,*(undefined4 *)(param_1 + 0x68),param_3,param_4,param_4);
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}


/* sub_0801809E @ 0x0801809E */

undefined4 sub_0801809E(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  
  if (*(int *)(param_1 + 0x2c) < 0x3c) {
    local_18 = (int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    local_1c = (int *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    local_20 = *local_1c + *(int *)(param_1 + 0x5c);
    local_2c = local_24 >> 8;
    local_28 = local_20 >> 8;
    if ((local_2c != *(int *)(param_1 + 0x48)) || (local_28 != *(int *)(param_1 + 0x4c))) {
      local_34 = local_2c - *(int *)(param_1 + 0x48);
      local_30 = local_28 - *(int *)(param_1 + 0x4c);
      local_3c = *(int *)(param_1 + 0x14) + local_34;
      iStack_38 = *(int *)(param_1 + 0x18) + local_30;
      local_34 = *(int *)(param_1 + 0x1c) + local_34;
      local_30 = *(int *)(param_1 + 0x20) + local_30;
      iVar1 = sub_08009324(&local_3c,DAT_03001a4c);
      if (iVar1 != 0) {
        *local_18 = local_24;
        *local_1c = local_20;
        *(int *)(param_1 + 0x48) = local_2c;
        *(int *)(param_1 + 0x4c) = local_28;
        local_2c = local_2c - (uint)(**(byte **)(param_1 + 0x60) >> 1);
        *(int *)(param_1 + 0x38) = local_2c;
        *(uint *)(param_1 + 0x40) = local_2c + (uint)**(byte **)(param_1 + 0x60);
        *(int *)(param_1 + 4) = local_28;
        *(int *)(param_1 + 0x14) = local_3c;
        *(int *)(param_1 + 0x18) = iStack_38;
        *(int *)(param_1 + 0x1c) = local_34;
        *(int *)(param_1 + 0x20) = local_30;
        iVar1 = *(int *)(param_1 + 0x68);
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = *(undefined4 *)(param_1 + 0x1c);
        uVar4 = *(undefined4 *)(param_1 + 0x20);
        *(short *)(iVar1 + 4) = (short)*(undefined4 *)(param_1 + 0x14) + -0x13;
        *(short *)(iVar1 + 6) = (short)uVar2 + -0xb;
        *(short *)(iVar1 + 8) = (short)uVar3 + 4;
        *(short *)(iVar1 + 10) = (short)uVar4 + 4;
      }
    }
    iVar1 = *(int *)(param_1 + 0x34) + -4;
    *(int *)(param_1 + 0x34) = iVar1;
    iVar1 = *(int *)(param_1 + 0x30) + iVar1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 < 1) {
      *(int *)(param_1 + 0x30) = -iVar1;
      *(undefined4 *)(param_1 + 0x34) = 0x80;
    }
  }
  else {
    *(int *)(param_1 + 0x30) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x4c) - (*(int *)(param_1 + 0x30) >> 8);
  *(int *)(param_1 + 0x44) = iVar1;
  *(uint *)(param_1 + 0x3c) = iVar1 - (uint)*(byte *)(*(int *)(param_1 + 0x60) + 1);
  local_3c = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x14)) {
    local_3c = *(int *)(param_1 + 0x38);
  }
  iStack_38 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x18)) {
    iStack_38 = *(int *)(param_1 + 0x3c);
  }
  local_34 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x40)) {
    local_34 = *(int *)(param_1 + 0x40);
  }
  local_30 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x44)) {
    local_30 = *(int *)(param_1 + 0x44);
  }
  if ((*(int *)(param_1 + 0x24) < 0x1e1) || (-1 < DAT_03000f94 << 0x1d)) {
    if ((local_3c < DAT_030019c4) &&
       (((DAT_030019bc < local_34 && (iStack_38 < DAT_030019c8)) && (DAT_030019c0 < local_30)))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_08018284 @ 0x08018284 */

void sub_08018284(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x28) = iVar1;
  uVar3 = (uint)(iVar1 * 0x1000000) >> 0x1b;
  if (3 < uVar3) {
    uVar3 = 0;
  }
  if (*(uint *)(param_1 + 100) != uVar3) {
    *(uint *)(param_1 + 100) = uVar3;
    iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x10);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(param_1 + 0x60) + uVar3 * iVar1 + 0x18,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x38) - DAT_030019cc;
  uVar3 = *(int *)(param_1 + 0x3c) - DAT_030019d0;
  puVar2 = (uint *)*param_2;
  *param_2 = (int)(puVar2 + 2);
  *puVar2 = uVar3 & 0xff |
            (uint)(iVar1 * 0x800000) >> 7 | *(uint *)(*(int *)(param_1 + 0x60) + 0x14) & 0xfe00ff00;
  uVar4 = puVar2[1];
  uVar3 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar2[1] = uVar3 | uVar4 & 0xfffff3ff;
  uVar5 = *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar2[1] = uVar3 | uVar4 & 0xfffff000 | uVar5;
  sub_08018614(param_1,param_2,uVar5,0xc00,iVar1);
  return;
}


/* sub_0801832E @ 0x0801832E */

void sub_0801832E(int param_1,int param_2)

{
  if (param_2 == 0xb) {
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
    sub_0801870E();
  }
  else {
    sub_0801870E();
  }
  return;
}


/* sub_08018346 @ 0x08018346 */

void sub_08018346(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = (&PTR_gUnknown_086FC260_086fc250)[param_2];
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if ((0x2fff < iVar1) && (8 < 0x30 - DAT_03002a64)) {
    uVar2 = sub_08017F5A(0,puVar3,param_1,param_3,param_4);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_08018394 @ 0x08018394 */

void sub_08018394(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  
  piVar2 = (int *)param_2[1];
  bVar4 = piVar2 == DAT_03001bac;
  if (bVar4) {
    DAT_03002a58 = 1;
  }
  __call_via_r1(piVar2,*(int *)(*piVar2 + 0x3c) + *piVar2);
  local_24 = piVar2[0x68] >> 8;
  local_18 = piVar2[0x69] >> 8;
  local_20 = (uint)*(byte *)(piVar2 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = *param_2;
  *param_2 = 0;
  local_1c = local_24;
  sub_08011944(&DAT_03001c4c,piVar2);
  local_24 = CONCAT22((short)local_18,(short)local_1c);
  uVar3 = sub_08000158(uVar3);
  piVar2 = (int *)sub_0801111C(0,uVar3,&local_24);
  *(char *)(piVar2 + 4) = (char)local_20;
  sub_0801191A(&DAT_03001c4c,piVar2);
  sub_080192BA(uVar1,piVar2 + 99);
  if (bVar4) {
    DAT_03001bac = piVar2;
  }
  return;
}


/* sub_08018432 @ 0x08018432 */

void sub_08018432(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  bool bVar4;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *puStack_18;
  
  piVar3 = (int *)param_2[1];
  bVar4 = piVar3 == DAT_03001bac;
  if (bVar4) {
    DAT_03002a58 = 1;
  }
  local_1c = param_1;
  puStack_18 = param_2;
  __call_via_r1(piVar3,*(int *)(*piVar3 + 0x3c) + *piVar3);
  local_24 = piVar3[0x68] >> 8;
  local_20 = piVar3[0x69] >> 8;
  iVar1 = piVar3[4];
  uVar2 = *param_2;
  *param_2 = 0;
  sub_08011944(&DAT_03001c4c,piVar3);
  piVar3 = (int *)sub_08009124(&DAT_0300197c,*(undefined4 *)(local_1c + 8),&local_24,(char)iVar1);
  sub_080192BA(uVar2,piVar3 + 99);
  if (bVar4) {
    DAT_03001bac = piVar3;
  }
  return;
}


/* sub_080184C0 @ 0x080184C0 */

void sub_080184C0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar6 = *(char **)(*(int *)(param_1 + 0x10) + 8);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + -1;
    if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar6 + 2) != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar6 + 2),param_3,2,param_4);
      pcVar6[2] = -1;
      pcVar6[3] = -1;
    }
  }
  iVar5 = sub_08013E38(param_2,param_3);
  *(int *)(param_1 + 0x10) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    pcVar6 = *(char **)(iVar5 + 8);
    uVar3 = *(ushort *)(iVar5 + 2);
    iVar5 = *(int *)(iVar5 + 4);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + '\x01';
    if (cVar1 == '\0') {
      sVar4 = sub_0801124C(&DAT_03001c4c,(uint)uVar3);
      *(short *)(pcVar6 + 2) = sVar4;
      sub_08049138((int)(&DAT_06010000 + sVar4 * 0x20),iVar5,(uint)uVar3);
    }
    bVar2 = (*(byte **)(param_1 + 0x10))[1];
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) + (uint)**(byte **)(param_1 + 0x10);
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x18) + (uint)bVar2;
  }
  return;
}


/* sub_08018550 @ 0x08018550 */

undefined4 *
sub_08018550(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)param_2;
    iVar1 = sub_0801124C(&DAT_03001c4c,param_2);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,param_2);
      iVar1 = sub_0801124C(&DAT_03001c4c,param_2);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804C534;
    param_1[4] = 0;
    uVar2 = param_3[1];
    param_1[5] = *param_3;
    param_1[6] = uVar2;
    sub_080184C0(param_1,*param_4,param_4[1]);
    param_1[1] = param_3[1];
  }
  return param_1;
}


/* sub_080185B8 @ 0x080185B8 */

void sub_080185B8(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = &_0804C534;
  if (param_1[4] != 0) {
    pcVar2 = *(char **)(param_1[4] + 8);
    cVar1 = *pcVar2;
    *pcVar2 = cVar1 + -1;
    if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
      pcVar2[2] = -1;
      pcVar2[3] = -1;
    }
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


/* sub_08018614 @ 0x08018614 */

undefined4 sub_08018614(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = *(int *)(param_1 + 0x14) - DAT_030019cc;
    uVar1 = *(int *)(param_1 + 0x18) - DAT_030019d0;
    puVar2 = (uint *)*param_2;
    *param_2 = (int)(puVar2 + 2);
    *puVar2 = (uint)(iVar3 * 0x800000) >> 7 | *(uint *)(*(int *)(param_1 + 0x10) + 0xc) & 0xfe00ff00
              | uVar1 & 0xff;
    uVar1 = puVar2[1];
    uVar4 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    puVar2[1] = uVar4 | uVar1 & 0xfffff3ff;
    puVar2[1] = *(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 8) + 2) & 0x3ff |
                uVar4 | uVar1 & 0xfffff000;
  }
  return 0;
}


/* sub_08018696 @ 0x08018696 */

void sub_08018696(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  
  sub_08011818();
  iVar4 = *(int *)(param_1 + 0x10);
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


/* sub_080186D4 @ 0x080186D4 */

void sub_080186D4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x10) + 8);
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


/* sub_0801870E @ 0x0801870E */

undefined4 sub_0801870E(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_2 == 10) {
    if (*(int *)(param_1 + 0x10) != 0) {
      pcVar5 = *(char **)(*(int *)(param_1 + 0x10) + 8);
      cVar1 = *pcVar5;
      *pcVar5 = cVar1 + -1;
      if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar5 + 2) != -1)) {
        sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar5 + 2),&gUnknown_086FCCC8,2,param_4);
        pcVar5[2] = -1;
        pcVar5[3] = -1;
      }
    }
  }
  else if ((param_2 == 0xb) && (iVar4 = *(int *)(param_1 + 0x10), iVar4 != 0)) {
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
  return 0;
}


/* sub_080187A4 @ 0x080187A4 */

undefined4 sub_080187A4(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x290) = *param_3;
    iVar2 = __call_via_r3();
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}


/* sub_080187A8 @ 0x080187A8 */

undefined4 sub_080187A8(int param_1,undefined1 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x290) = *param_2;
    iVar2 = __call_via_r3();
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}


/* sub_080187D4 @ 0x080187D4 */

void sub_080187D4(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,7,*(int *)(*param_2 + 0x28) + *param_2);
  param_2[0x72] = 1;
  return;
}


/* sub_080187F0 @ 0x080187F0 */

undefined4 sub_080187F0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,7,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,7,*(int *)(*param_2 + 0x28) + *param_2);
    param_2[0x72] = 1;
  }
  return 1;
}


/* sub_08018820 @ 0x08018820 */

void sub_08018820(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c8) = 0;
  *(undefined4 *)(param_2 + 0x210) = DAT_03000f94;
  return;
}


/* sub_08018836 @ 0x08018836 */

undefined4 * sub_08018836(void)

{
  return &DAT_03002b98;
}


/* sub_0801883A @ 0x0801883A */

void sub_0801883A(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,7,*(int *)(*param_2 + 0x28) + *param_2);
  param_2[0x72] = 1;
  return;
}


/* sub_08018860 @ 0x08018860 */

undefined4 sub_08018860(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 4),*(int *)(*param_2 + 0x6c) + *param_2,param_1,
                param_4);
  return 0;
}


/* sub_08018876 @ 0x08018876 */

undefined4 * sub_08018876(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B0B0;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801888C @ 0x0801888C */

undefined4 sub_0801888C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(*param_2 + 0x6c) + *param_2,param_1,
                param_4);
  return 1;
}


/* sub_080188A8 @ 0x080188A8 */

void sub_080188A8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_080499E4;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_080188CA @ 0x080188CA */

undefined4 sub_080188CA(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_0803FADE(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != 0) {
    uVar2 = __call_via_r3(*(int *)(param_1 + 0x10),param_2,param_3,
                          *(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
    return uVar2;
  }
  return 0;
}


/* sub_080188F4 @ 0x080188F4 */

undefined4 sub_080188F4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 4),*(int *)(*param_2 + 0x68) + *param_2,param_1,
                param_4);
  return 1;
}


/* sub_0801890A @ 0x0801890A */

undefined4 * sub_0801890A(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BC98;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_08018920 @ 0x08018920 */

undefined4 sub_08018920(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(*param_2 + 0x68) + *param_2,param_1,
                param_4);
  return 1;
}


/* sub_08018936 @ 0x08018936 */

void sub_08018936(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(*param_2 + 0x68) + *param_2,param_1,
                param_4);
  return;
}


/* sub_08018950 @ 0x08018950 */

void sub_08018950(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_2 != (int *)0x0) {
    do {
      piVar3 = (int *)param_2[0x7c];
      sub_0800FE34(&local_24,param_2);
      __call_via_r3(param_2,*(undefined4 *)(param_1 + 0xc),param_3,
                    *(int *)(*param_2 + 0x74) + *param_2);
      sub_08011944(&DAT_03001c4c,param_2);
      iVar1 = sub_080116FC(&DAT_03001c4c);
      if (0x3ff < iVar1) {
        local_28 = local_20 + local_18 >> 1;
        local_2c = local_24 + local_1c >> 1;
        uVar2 = sub_0801952C(0,&local_2c,0x38);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      param_2 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  return;
}


/* sub_080189CC @ 0x080189CC */

undefined4 sub_080189CC(int param_1,int param_2)

{
  byte local_24 [28];
  
  local_24[0] = *(byte *)(param_2 + 0x10) ^ 1;
  sub_08018950(*(undefined4 *)(param_1 + 4),param_2,local_24);
  return 0;
}


/* sub_080189E8 @ 0x080189E8 */

undefined4 * sub_080189E8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049C08;
    puVar1[1] = param_1;
  }
  return puVar1;
}


/* sub_08018A08 @ 0x08018A08 */

void sub_08018A08(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  if (param_2[0xa5] != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 2;
  }
  uVar2 = *(byte *)(param_2 + 0xa4) ^ 1;
  iVar1 = sub_0803FACC(0x40);
  uVar3 = (uint)(*(int *)(param_1 + 0xc) * (iVar1 + 0x60)) >> 7;
  *(uint *)(((int)uVar2 >> 1 ^ 1U) * 4 + param_1 + 4) =
       uVar3 * *(int *)(&gUnknown_086FDA20 + uVar2 * 4);
  iVar1 = sub_0803FACC(0x8000);
  *(int *)(((int)uVar2 >> 1) * 4 + param_1 + 4) = (int)(uVar3 * (iVar1 + -0x4000)) >> 0xc;
  *(char *)(param_2 + 4) = (char)uVar2;
  if (param_2[0x72] == 0) {
    __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08018A92 @ 0x08018A92 */

undefined4 sub_08018A92(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined *puStack_58;
  int *piStack_54;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  int *piStack_20;
  int *piStack_1c;
  int *local_18;
  
  local_18 = param_2 + 0x70;
  iVar2 = *(int *)(*param_2 + 0x34) + *param_2;
  if (param_2[0x72] == 0) {
    iVar2 = __call_via_r2(param_2,9,iVar2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  else {
    iVar2 = __call_via_r2(param_2,7,iVar2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,7,*(int *)(*param_2 + 0x28) + *param_2);
    }
    iVar2 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  sub_0800FDFA(auStack_30,param_2);
  piStack_1c = param_2 + 0x68;
  piStack_20 = (int *)(param_1 + 4);
  *piStack_1c = *piStack_1c + *(int *)(param_1 + 4);
  param_2[0x69] = param_2[0x69] + *(int *)(param_1 + 8);
  sub_0800FDFA(&uStack_40,param_2);
  __call_via_r3(param_2,auStack_30,1,*(int *)(*param_2 + 0x4c) + *param_2);
  iVar2 = __call_via_r2(param_2,&uStack_40,*(int *)(*param_2 + 0x50) + *param_2);
  if (iVar2 == 0) {
    *piStack_1c = *piStack_1c - *piStack_20;
    piStack_1c[1] = piStack_1c[1] - *(int *)(param_1 + 8);
    __call_via_r3(param_2,auStack_30,0,*(int *)(*param_2 + 0x4c) + *param_2);
    if ((param_2[0xa5] != 0) || (param_2[0xa6] != 0)) {
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      uStack_68 = uStack_38;
      uStack_64 = uStack_34;
      uStack_60 = (undefined1)param_2[0xa4];
      puStack_58 = &gUnknown_086B80A0;
      piStack_54 = param_2;
      uStack_5c = sub_08054A64(0x43cccccd);
      piVar1 = local_18;
      auStack_74[0] = 1;
      local_18[3] = 0;
      piStack_44 = param_2;
      sub_08011C0C(&DAT_03001c4c,0,auStack_74);
      piVar1[3] = 1;
      return 1;
    }
  }
  else {
    __call_via_r3(param_2,&uStack_40,0,*(int *)(*param_2 + 0x4c) + *param_2);
  }
  return 0;
}


/* sub_08018BCA @ 0x08018BCA */

void sub_08018BCA(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A138;
    puVar1[3] = uVar2;
  }
  return;
}


/* sub_08018BF0 @ 0x08018BF0 */

undefined4 sub_08018BF0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_08018C08 @ 0x08018C08 */

undefined4 * sub_08018C08(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080497D4;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_08018C24 @ 0x08018C24 */

void sub_08018C24(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(ushort *)(param_2 + 0x12) - 1;
  if (iVar1 < 0) {
    iVar1 = **(int **)(param_2 + 0x50) * 8 + -1;
  }
  *(short *)(param_2 + 0x12) = (short)iVar1;
  *(char *)(param_2 + 0x11) = (char)(iVar1 >> 3);
  return;
}


/* sub_08018C3A @ 0x08018C3A */

undefined4 sub_08018C3A(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iStack_54;
  int iStack_50;
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
  int *piStack_1c;
  int *piStack_18;
  
  if (DAT_03001b94 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800FDFA(&iStack_54);
    iStack_40 = iStack_50 + iStack_48 >> 1;
    iStack_44 = iStack_54 + iStack_4c >> 1;
    sub_0800FDFA(&iStack_3c,param_2);
    iStack_24 = iStack_44 - (iStack_3c + iStack_34 >> 1);
    iStack_20 = iStack_40 - (iStack_38 + iStack_30 >> 1);
    iStack_2c = iStack_24;
    if (iStack_24 < 0) {
      iStack_2c = -iStack_24;
    }
    iStack_28 = iStack_20;
    if (iStack_20 < 0) {
      iStack_28 = -iStack_20;
    }
    if (iStack_28 < iStack_2c) {
      uVar1 = 2;
      if (-1 < iStack_24) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar4 = iStack_2c;
    }
    else {
      *(byte *)(param_2 + 4) = (byte)((uint)iStack_20 >> 0x1f);
      iVar4 = iStack_28;
    }
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      if ((undefined4 *)param_2[5] != &DAT_03002b9c) {
        sub_0800ECDA(param_2,1);
        sub_0800ED18(param_2,&DAT_03002b9c);
      }
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_2c = iStack_24 * 0x100;
      iStack_28 = iStack_20 * 0x100;
      iStack_50 = *(int *)(param_1 + 4) * iStack_28 >> 8;
      iStack_54 = *(int *)(param_1 + 4) * iStack_2c >> 8;
      piVar6 = param_2 + 0x68;
      iStack_4c = iStack_54;
      iStack_48 = iStack_50;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_54 << 8);
      iStack_40 = __16__rt_sdiv(iVar4 * 0x100,iStack_48 << 8);
      piVar7 = param_2 + 0x69;
      iStack_54 = *piVar6 - iVar3;
      iStack_50 = param_2[0x69] - iStack_40;
      iStack_44 = iVar3;
      iStack_3c = iStack_54;
      iStack_38 = iStack_50;
      iStack_34 = iStack_54;
      iStack_30 = iStack_50;
      iVar4 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar4 == 0) {
        piVar5 = (int *)(param_1 + 4);
        piStack_18 = piVar5;
        if (iStack_24 < 0) {
          iStack_40 = -*(int *)(param_1 + 4);
          piVar5 = &iStack_40;
        }
        iStack_3c = *piVar6 - *piVar5;
        piStack_1c = param_2 + 0x69;
        iStack_38 = *piStack_1c;
        iVar4 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar4 == 0) {
          iStack_3c = *piVar6;
          piVar5 = piStack_18;
          if (iStack_20 < 0) {
            iStack_40 = -*(int *)(param_1 + 4);
            piVar5 = &iStack_40;
          }
          iStack_38 = *piStack_1c - *piVar5;
          iVar4 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
          if (iVar4 == 0) {
            __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
            return 1;
          }
          *piVar6 = iStack_3c;
          *piVar7 = iStack_38;
        }
        else {
          *piVar6 = iStack_3c;
          *piVar7 = iStack_38;
        }
      }
      else {
        *piVar6 = iStack_34;
        *piVar7 = iStack_30;
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* sub_08018E28 @ 0x08018E28 */

undefined4 * sub_08018E28(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049C58;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_08018E4C @ 0x08018E4C */

undefined4 sub_08018E4C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 0x70);
  __call_via_r1(param_2,iVar1 + *param_2,iVar1,param_4,param_4);
  return 0;
}


/* sub_08018E5E @ 0x08018E5E */

undefined4 * sub_08018E5E(void)

{
  return &DAT_03002ba4;
}


/* sub_08018E62 @ 0x08018E62 */

undefined4 sub_08018E62(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 0x70);
  __call_via_r1(param_2,iVar1 + *param_2,iVar1,param_4,param_4);
  return 2;
}


/* sub_08018E74 @ 0x08018E74 */

void sub_08018E74(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 0x70);
  __call_via_r1(param_2,iVar1 + *param_2,iVar1,param_4,param_4);
  return;
}


/* sub_08018E88 @ 0x08018E88 */

void sub_08018E88(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0804AAF4;
  iVar2 = 0;
  if (0 < (int)param_1[2]) {
    do {
      iVar1 = *(int *)param_1[iVar2 + 3];
      __call_via_r1((int *)param_1[iVar2 + 3],*(int *)(iVar1 + 0xc) + iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[2]);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08018EBE @ 0x08018EBE */

undefined4 * sub_08018EBE(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &_0804AAF4;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar4 = 0;
  param_1[2] = iVar1;
  puVar5 = param_1;
  iVar6 = param_2;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(iVar4 * 4 + param_2 + 0x10);
      uVar3 = __call_via_r2(puVar2,param_3,*puVar2,param_4,puVar5,iVar6);
      param_1[iVar4 + 3] = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[2]);
  }
  return param_1;
}


/* sub_08018EF6 @ 0x08018EF6 */

void sub_08018EF6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
  piVar2 = (int *)*piVar1;
  iVar3 = *piVar2;
  __call_via_r2(piVar1,param_2,iVar3 + (int)piVar2,iVar3,param_4);
  return;
}


/* sub_08018F0C @ 0x08018F0C */

undefined4 sub_08018F0C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
  iVar2 = *piVar1;
  iVar2 = __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 4) + iVar2);
  if (iVar2 != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
    iVar2 = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 4) = iVar2;
    if (*(int *)(param_1 + 8) <= iVar2) {
      *(undefined4 *)(param_1 + 4) = 0;
      return 1;
    }
    piVar1 = *(int **)(iVar2 * 4 + param_1 + 0xc);
    piVar3 = (int *)*piVar1;
    __call_via_r2(piVar1,param_2,*piVar3 + (int)piVar3);
  }
  return 0;
}


/* sub_08018F74 @ 0x08018F74 */

void sub_08018F74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) < *(int *)(param_1 + 8)) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
    iVar2 = *piVar1;
    iVar3 = *(int *)(iVar2 + 8);
    __call_via_r2(piVar1,param_2,iVar3 + iVar2,iVar3,param_4);
  }
  return;
}


/* sub_08018F90 @ 0x08018F90 */

undefined4 * sub_08018F90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)sub_0803D5B8(*(int *)(param_1 + 0xc) * 4 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    iVar5 = 0;
    *puVar1 = &_0804930C;
    *puVar1 = &_0804AAF4;
    puVar1[1] = 0;
    iVar2 = *(int *)(param_1 + 0xc);
    puVar1[2] = iVar2;
    if (0 < iVar2) {
      do {
        puVar3 = *(undefined4 **)(iVar5 * 4 + param_1 + 0x10);
        uVar4 = __call_via_r2(puVar3,param_2,*puVar3);
        puVar1[iVar5 + 3] = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)puVar1[2]);
    }
  }
  return puVar1;
}


/* sub_08018FDA @ 0x08018FDA */

int sub_08018FDA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(iVar2 * 4 + param_1 + 0x10);
      iVar1 = __call_via_r3(iVar1,param_2,param_3,*(undefined4 *)(iVar1 + 4),param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return 0;
}


/* sub_0801900A @ 0x0801900A */

uint sub_0801900A(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar4 = 1;
  iVar3 = 0;
  iVar5 = param_1;
  uVar6 = param_3;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(iVar3 * 4 + param_1 + 0x10);
      uVar2 = __call_via_r3(iVar1,param_2,param_3,*(undefined4 *)(iVar1 + 4),iVar5,param_2,uVar6);
      if (uVar2 == 2) {
        return 2;
      }
      uVar4 = uVar4 & uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  return uVar4;
}


/* sub_08019042 @ 0x08019042 */

void sub_08019042(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(iVar2 * 4 + param_1 + 0x10);
      __call_via_r3(iVar1,param_2,param_3,*(undefined4 *)(iVar1 + 8),param_4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return;
}


/* sub_08019074 @ 0x08019074 */

void sub_08019074(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0804BDA8;
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    do {
      iVar1 = *(int *)param_1[iVar2 + 2];
      __call_via_r1((int *)param_1[iVar2 + 2],*(int *)(iVar1 + 0xc) + iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080190AA @ 0x080190AA */

undefined4 * sub_080190AA(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &_0804BDA8;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar4 = 0;
  param_1[1] = iVar1;
  puVar5 = param_1;
  iVar6 = param_2;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(iVar4 * 4 + param_2 + 0x10);
      uVar3 = __call_via_r2(puVar2,param_3,*puVar2,param_4,puVar5,iVar6);
      param_1[iVar4 + 2] = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[1]);
  }
  return param_1;
}


/* sub_080190DE @ 0x080190DE */

void sub_080190DE(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      piVar2 = (int *)*piVar1;
      __call_via_r2(piVar1,param_2,*piVar2 + (int)piVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


/* sub_08019108 @ 0x08019108 */

uint sub_08019108(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 1;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
      iVar3 = *piVar1;
      uVar2 = __call_via_r2(piVar1,param_2,*(int *)(iVar3 + 4) + iVar3);
      uVar5 = uVar5 & uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  return uVar5;
}


/* sub_08019138 @ 0x08019138 */

void sub_08019138(int param_1,undefined4 param_2)

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


/* sub_08019162 @ 0x08019162 */

uint sub_08019162(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
      iVar3 = *piVar1;
      uVar2 = __call_via_r2(piVar1,param_2,*(int *)(iVar3 + 4) + iVar3);
      uVar5 = uVar5 | uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  return uVar5;
}


/* sub_08019192 @ 0x08019192 */

undefined4 sub_08019192(int param_1,undefined4 param_2)

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


/* sub_080191C6 @ 0x080191C6 */

int sub_080191C6(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = sub_0803D5B8(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (iVar1 != 0) {
    sub_080190AA(iVar1,param_1,param_2);
  }
  return iVar1;
}


/* sub_080191E8 @ 0x080191E8 */

undefined4 * sub_080191E8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080190AA(puVar1,param_1,param_2);
    *puVar1 = &_0804B6D0;
  }
  return puVar1;
}


/* sub_0801920E @ 0x0801920E */

undefined4 * sub_0801920E(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080190AA(puVar1,param_1,param_2);
    *puVar1 = &_0804A710;
  }
  return puVar1;
}


