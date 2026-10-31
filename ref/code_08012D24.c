/* Ghidra reference decompilation of code_08012D24 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08012D24 @ 0x08012D24 */

void sub_08012D24(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  sub_0800DE60();
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(iVar1 + 0x14) * 0x18] << 0x19) < 0) {
    sub_0801712C();
    *(undefined *)(iVar1 + 0x14) = (&DAT_086b8303)[(uint)*(byte *)(iVar1 + 0x14) * 0x18];
  }
  return;
}


/* sub_08012D64 @ 0x08012D64 */

void sub_08012D64(undefined4 param_1,int param_2)

{
  sub_0800DE60();
  *(undefined1 *)(param_2 + 0x1b9) = 0;
  *(undefined1 *)(param_2 + 0x1b8) = 0;
  return;
}


/* sub_08012D78 @ 0x08012D78 */

void sub_08012D78(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x1b9) = 0x80;
  *(undefined1 *)(param_2 + 0x1b8) = 0x80;
  sub_0803D63C();
  return;
}


/* sub_08012D8A @ 0x08012D8A */

void sub_08012D8A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 0x84);
  iVar1 = __call_via_r1(param_2,iVar1 + *param_2,iVar1,param_4,param_4);
  if (((uint)*(ushort *)(iVar1 + 2) << 0x18) >> 0x1c != 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((*(ushort *)(iVar1 + 4) & 1) == 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((int)((uint)*(ushort *)(iVar1 + 4) << 0x1e) < 0) {
      sub_08012B5E(param_2);
    }
  }
  else {
    sub_08012A24(param_2);
  }
  return;
}


/* sub_08012DEE @ 0x08012DEE */

void sub_08012DEE(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((*(ushort *)(iVar1 + 2) & *(ushort *)(param_2 + 0x8c)) == *(ushort *)(param_2 + 0x8c)) {
    piVar4 = param_2 + 0x68;
    local_24 = *piVar4 + *(int *)(&gUnknown_0807268C + (uint)*(byte *)(param_2 + 4) * 8) *
                         param_2[0x8f];
    local_20 = param_2[0x69] +
               *(int *)(&DAT_08072690 + (uint)*(byte *)(param_2 + 4) * 8) * param_2[0x8f];
    local_18 = param_2 + 0x67;
    iVar1 = sub_080097EA(&DAT_030019a4,&local_24);
    if (iVar1 == 0) {
      sub_0800797C(8,100);
      puVar2 = (undefined4 *)sub_0803D5B8(8);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar2 + 1) = 3;
        *puVar2 = &_0804D75C;
      }
      sub_0800ECDA(param_2,9);
      sub_0800ED18(param_2,puVar2);
      sub_0803E378(&DAT_03003e5c,&DAT_0831956c,0x40,0);
    }
    else {
      *piVar4 = local_24;
      local_1c = param_2 + 0x69;
      param_2[0x69] = local_20;
      iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      piVar3 = param_2 + 0x8e;
      if (((int)((uint)*(ushort *)(iVar1 + 2) << 0x19) < 0) && ((char)param_2[4] != '\x01')) {
        local_20 = local_20 - *piVar3;
      }
      iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (((int)((uint)*(ushort *)(iVar1 + 2) << 0x18) < 0) && ((char)param_2[4] != '\0')) {
        local_20 = local_20 + *piVar3;
      }
      iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (((int)((uint)*(ushort *)(iVar1 + 2) << 0x1a) < 0) && ((char)param_2[4] != '\x02')) {
        local_24 = local_24 - *piVar3;
      }
      iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (((int)((uint)*(ushort *)(iVar1 + 2) << 0x1b) < 0) && ((char)param_2[4] != '\x03')) {
        local_24 = local_24 + *piVar3;
      }
      iVar1 = sub_080097EA(&DAT_030019a4,&local_24,local_18);
      if (iVar1 != 0) {
        *piVar4 = local_24;
        *local_1c = local_20;
      }
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((*(ushort *)(iVar1 + 4) & 1) == 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((int)((uint)*(ushort *)(iVar1 + 4) << 0x1e) < 0) {
      sub_08012B5E(param_2);
    }
  }
  else {
    sub_08012A24(param_2);
  }
  return;
}


/* sub_08012FC4 @ 0x08012FC4 */

void sub_08012FC4(undefined4 param_1,int param_2)

{
  sub_0800DEB0();
  if ((*(ushort *)(param_2 + 0x12) & 0xf) == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_083193D4,0x20,0);
  }
  return;
}


/* sub_08012FE6 @ 0x08012FE6 */

void sub_08012FE6(int param_1,int *param_2)

{
  int iVar1;
  
  sub_0800DFBE();
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  param_2[0x73] = (uint)(*(char *)(iVar1 + 0x67) == '\0');
  *(undefined1 *)(param_2 + 0x6e) = 0x80;
  *(undefined1 *)((int)param_2 + 0x1b9) = 0x80;
  return;
}


/* sub_08013022 @ 0x08013022 */

void sub_08013022(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_2 + 0x84);
  iVar4 = __call_via_r1(param_2,iVar4 + *param_2,iVar4,param_4,param_4);
  if ((((int)((uint)*(ushort *)(iVar4 + 2) << 0x17) < 0) && (7 < *(byte *)param_2[0x16])) &&
     (*(int *)((byte *)param_2[0x16] + 0x70) != 0)) {
    puVar2 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804C744;
      puVar2[2] = 0;
      puVar2[1] = 0;
    }
    sub_0800ECDA(param_2,7);
    sub_0800ED18(param_2,puVar2);
  }
  else {
    iVar4 = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 4) = iVar4;
    if (0x400 < iVar4) {
      if ((*(byte *)param_2[0x16] < 9) || (*(int *)((byte *)param_2[0x16] + 0x74) == 0)) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        __call_via_r2(param_2,8,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    iVar4 = DAT_03000f94;
    uVar1 = *(ushort *)(iVar3 + 4) & 0xf0;
    if ((*(ushort *)(iVar3 + 4) & 0xf0) != 0) {
      if ((((uint)(DAT_03000f94 - param_2[0x8d]) < 0x14) && ((uVar1 & ~-uVar1) == 0)) &&
         ((*(ushort *)(param_2 + 0x8c) & uVar1) != 0)) {
        __call_via_r2(param_2,2,*(int *)(*param_2 + 0x28) + *param_2);
        return;
      }
      *(ushort *)(param_2 + 0x8c) = uVar1;
      param_2[0x8d] = iVar4;
    }
    iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if (((uint)*(ushort *)(iVar4 + 2) << 0x18) >> 0x1c != 0) {
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x1a) < 0) {
        *(undefined1 *)(param_2 + 4) = 2;
      }
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x1b) < 0) {
        *(undefined1 *)(param_2 + 4) = 3;
      }
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x19) < 0) {
        *(undefined1 *)(param_2 + 4) = 1;
      }
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x18) < 0) {
        *(undefined1 *)(param_2 + 4) = 0;
      }
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
    }
    iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((*(ushort *)(iVar4 + 4) & 1) == 0) {
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x1e) < 0) {
        sub_08012B5E(param_2);
      }
    }
    else {
      sub_08012A24(param_2);
    }
  }
  return;
}


/* sub_080131BA @ 0x080131BA */

void sub_080131BA(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((((int)((uint)*(ushort *)(iVar1 + 2) << 0x17) < 0) && (7 < *(byte *)param_2[0x16])) &&
     (*(int *)((byte *)param_2[0x16] + 0x70) != 0)) {
    puVar2 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804C744;
      puVar2[2] = 0;
      puVar2[1] = 0;
    }
    sub_0800ECDA(param_2,7);
    sub_0800ED18(param_2,puVar2);
  }
  else {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if (((uint)*(ushort *)(iVar1 + 2) << 0x18) >> 0x1c == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      iVar1 = 0;
      iStack_18 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      piVar3 = param_2 + 0x8e;
      piVar4 = param_2 + 0x68;
      if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x1a) < 0) {
        iStack_1c = param_2[0x69];
        iStack_20 = *piVar4 - *piVar3;
        sub_08012960(param_2,&iStack_20,2);
        iVar1 = 1;
      }
      else if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x1b) < 0) {
        iStack_1c = param_2[0x69];
        iStack_20 = *piVar4 + *piVar3;
        sub_08012960(param_2,&iStack_20,2);
        iVar1 = 2;
      }
      if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x19) < 0) {
        iStack_20 = *piVar4;
        iStack_1c = param_2[0x69] - *piVar3;
        sub_08012960(param_2,&iStack_20,1);
        iVar1 = iVar1 + 3;
      }
      else if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x18) < 0) {
        iStack_20 = *piVar4;
        iStack_1c = param_2[0x69] + *piVar3;
        sub_08012960(param_2,&iStack_20,1);
        iVar1 = iVar1 + 6;
      }
      *(undefined *)(param_2 + 4) = (&UNK_083c348c)[(uint)*(byte *)(param_2 + 4) + iVar1 * 4];
    }
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((*(ushort *)(iVar1 + 4) & 1) == 0) {
      iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar1 + 4) << 0x1e) < 0) {
        sub_08012B5E(param_2);
      }
    }
    else {
      sub_08012A24(param_2);
    }
  }
  return;
}


/* sub_08013340 @ 0x08013340 */

void sub_08013340(undefined4 param_1,int param_2)

{
  sub_0800DE60();
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}


/* sub_08013352 @ 0x08013352 */

void sub_08013352(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 8;
  *(int *)(param_2 + 0x1a0) = *(int *)(param_2 + 0x1a0) + *(int *)(&gUnknown_083C34B0 + iVar1);
  *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(&DAT_083c34b4 + iVar1);
  return;
}


/* sub_08013378 @ 0x08013378 */

undefined4 sub_08013378(int param_1)

{
  if (param_1 < 0x32) {
    return 0;
  }
  if (200 < param_1) {
    return 0x30132f3;
  }
  return *(undefined4 *)(&DAT_086b6fbc + param_1 * 4);
}


/* sub_0801339C @ 0x0801339C */

void sub_0801339C(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  sVar2 = *(short *)(param_2 + 2);
  do {
    *(short *)(param_1 + 0x16) = sVar2;
  } while (*(short *)(param_1 + 0x16) != sVar2);
  do {
    *(short *)(param_1 + 0x18) = sVar2;
  } while (*(short *)(param_1 + 0x18) != sVar2);
  sVar2 = *(short *)(param_2 + 4);
  do {
    *(short *)(param_1 + 0x1a) = sVar2;
  } while (*(short *)(param_1 + 0x1a) != sVar2);
  do {
    *(short *)(param_1 + 0x1c) = sVar2;
  } while (*(short *)(param_1 + 0x1c) != sVar2);
  bVar1 = param_2[6];
  do {
    param_1[0x28] = bVar1;
  } while (param_1[0x28] != bVar1);
  bVar1 = param_2[7];
  do {
    param_1[0x29] = bVar1;
  } while (param_1[0x29] != bVar1);
  bVar1 = param_2[8];
  do {
    param_1[0x2a] = bVar1;
  } while (param_1[0x2a] != bVar1);
  bVar1 = param_2[9];
  do {
    param_1[0x2b] = bVar1;
  } while (param_1[0x2b] != bVar1);
  uVar3 = (uint)*param_2;
  if (uVar3 < 0x32) {
    iVar4 = 0;
  }
  else if (uVar3 < 0xc9) {
    iVar4 = *(int *)(&DAT_086b6fbc + uVar3 * 4);
  }
  else {
    iVar4 = 0x30132f3;
  }
  do {
    *(int *)(param_1 + 0x24) = iVar4;
  } while (*(int *)(param_1 + 0x24) != iVar4);
  *param_1 = 2;
  param_1[0x14] = param_2[10];
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  do {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  } while (*(int *)(param_1 + 0x3c) != 0);
  do {
    *(undefined4 *)(param_1 + 0x40) = 0x2c;
  } while (*(int *)(param_1 + 0x40) != 0x2c);
  do {
    *(undefined4 *)(param_1 + 0x44) = 0x4d;
  } while (*(int *)(param_1 + 0x44) != 0x4d);
  do {
    *(undefined4 *)(param_1 + 0x48) = 0x70;
  } while (*(int *)(param_1 + 0x48) != 0x70);
  bVar1 = param_2[0xb];
  param_1[0xc] = bVar1;
  iVar4 = 0;
  if (bVar1 != 0) {
    do {
      iVar5 = iVar4 + 1;
      param_1[iVar4 + 0xd] = param_2[iVar4 + 0xc];
      iVar4 = iVar5;
    } while (iVar5 < (int)(uint)(byte)param_1[0xc]);
  }
  return;
}


/* sub_08013492 @ 0x08013492 */

uint sub_08013492(int param_1)

{
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    return (uint)*(ushort *)(param_1 + 0x20);
  }
  if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) != 0) {
    return (uint)*(ushort *)(param_1 + 0x1e);
  }
  return (int)*(short *)(param_1 + 0x1a);
}


/* sub_080134B8 @ 0x080134B8 */

undefined4 sub_080134B8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 * (uint)*(byte *)(param_1 + 0x56)) >> 4;
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    if (iVar1 <= (int)(uint)*(ushort *)(param_1 + 0x20)) {
      return 1;
    }
    return 0;
  }
  if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) == 0) {
    if (iVar1 <= *(short *)(param_1 + 0x1a)) {
      return 1;
    }
    return 0;
  }
  if (iVar1 <= (int)(uint)*(ushort *)(param_1 + 0x1e)) {
    return 1;
  }
  return 0;
}


/* sub_08013504 @ 0x08013504 */

void sub_08013504(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    if ((int)(uint)*(ushort *)(param_1 + 0x20) < (int)param_2) {
      do {
        *(undefined2 *)(param_1 + 0x20) = 0;
      } while (*(short *)(param_1 + 0x20) != 0);
    }
    else {
      uVar1 = (uint)*(ushort *)(param_1 + 0x20) - (param_2 & 0xffff);
      do {
        *(short *)(param_1 + 0x20) = (short)uVar1;
      } while ((uint)*(ushort *)(param_1 + 0x20) != (uVar1 & 0xffff));
    }
  }
  else if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) == 0) {
    if ((int)*(short *)(param_1 + 0x1a) < (int)param_2) {
      do {
        *(undefined2 *)(param_1 + 0x1a) = 0;
      } while (*(short *)(param_1 + 0x1a) != 0);
    }
    else {
      iVar2 = (*(ushort *)(param_1 + 0x1a) - param_2) * 0x10000;
      do {
        *(short *)(param_1 + 0x1a) = (short)((uint)iVar2 >> 0x10);
      } while ((int)*(short *)(param_1 + 0x1a) != iVar2 >> 0x10);
    }
  }
  else if ((int)(uint)*(ushort *)(param_1 + 0x1e) < (int)param_2) {
    do {
      *(undefined2 *)(param_1 + 0x1e) = 0;
    } while (*(short *)(param_1 + 0x1e) != 0);
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x1e) - (param_2 & 0xffff);
    do {
      *(short *)(param_1 + 0x1e) = (short)uVar1;
    } while ((uint)*(ushort *)(param_1 + 0x1e) != (uVar1 & 0xffff));
  }
  return;
}


/* sub_08013598 @ 0x08013598 */

void sub_08013598(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)(param_2 * (uint)*(byte *)(param_1 + 0x56)) >> 4;
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    if ((int)(uint)*(ushort *)(param_1 + 0x20) < (int)uVar2) {
      do {
        *(undefined2 *)(param_1 + 0x20) = 0;
      } while (*(short *)(param_1 + 0x20) != 0);
    }
    else {
      uVar2 = (uint)*(ushort *)(param_1 + 0x20) - (uVar2 & 0xffff);
      do {
        *(short *)(param_1 + 0x20) = (short)uVar2;
      } while ((uint)*(ushort *)(param_1 + 0x20) != (uVar2 & 0xffff));
    }
  }
  else if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) == 0) {
    if ((int)*(short *)(param_1 + 0x1a) < (int)uVar2) {
      do {
        *(undefined2 *)(param_1 + 0x1a) = 0;
      } while (*(short *)(param_1 + 0x1a) != 0);
    }
    else {
      iVar1 = (*(ushort *)(param_1 + 0x1a) - uVar2) * 0x10000;
      do {
        *(short *)(param_1 + 0x1a) = (short)((uint)iVar1 >> 0x10);
      } while ((int)*(short *)(param_1 + 0x1a) != iVar1 >> 0x10);
    }
  }
  else if ((int)(uint)*(ushort *)(param_1 + 0x1e) < (int)uVar2) {
    do {
      *(undefined2 *)(param_1 + 0x1e) = 0;
    } while (*(short *)(param_1 + 0x1e) != 0);
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x1e) - (uVar2 & 0xffff);
    do {
      *(short *)(param_1 + 0x1e) = (short)uVar2;
    } while ((uint)*(ushort *)(param_1 + 0x1e) != (uVar2 & 0xffff));
  }
  return;
}


/* sub_080135A2 @ 0x080135A2 */

undefined * sub_080135A2(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    return &gUnknown_0871DAF8;
  }
  return &gUnknown_0871DAF8 + (uint)*(byte *)(param_1 + param_2 + 0xd) * 0x18;
}


/* sub_080135BC @ 0x080135BC */

void sub_080135BC(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_086b6fbc + param_2 * 4);
  do {
    *(int *)(param_1 + 0x24) = iVar1;
  } while (*(int *)(param_1 + 0x24) != iVar1);
  return;
}


/* sub_080135D2 @ 0x080135D2 */

int sub_080135D2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x24);
  iVar2 = 0;
  iVar3 = 0x96;
  do {
    iVar1 = iVar2 + iVar3 >> 1;
    if (uVar4 < *(uint *)(&gExpTable + iVar1 * 4)) {
      iVar3 = iVar1 + -1;
    }
    else {
      if (uVar4 <= *(uint *)(&gExpTable + iVar1 * 4)) {
        return iVar1 + 0x32;
      }
      iVar2 = iVar1 + 1;
    }
  } while (iVar2 < iVar3);
  return (uint)(*(uint *)(&gExpTable + iVar2 * 4) <= uVar4) + iVar2 + 0x31;
}


/* sub_0801361C @ 0x0801361C */

int sub_0801361C(int param_1)

{
  int iVar1;
  
  iVar1 = sub_080135D2();
  if (199 < iVar1) {
    return 0;
  }
  return (int)(&PTR_gUnknown_086B4B58_086b6fc0)[iVar1] - *(int *)(param_1 + 0x24);
}


/* sub_0801363E @ 0x0801363E */

int sub_0801363E(int param_1,int param_2)

{
  int iVar1;
  
  if (0x30132f2 < *(uint *)(param_1 + 0x24)) {
    return param_2;
  }
  iVar1 = sub_080135D2(param_1);
  iVar1 = sub_08046F30((int)(&PTR_gUnknown_086B4B58_086b6fc0)[iVar1] -
                       *(int *)(&DAT_086b6fbc + iVar1 * 4),
                       param_2 * (*(int *)(param_1 + 0x24) - *(int *)(&DAT_086b6fbc + iVar1 * 4)));
  return iVar1;
}


/* sub_08013678 @ 0x08013678 */

void sub_08013678(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = (uint)(byte)(&DAT_086b82f8)[(uint)*(byte *)(param_1 + 0x14) * 0x18] * 0x20;
  iVar8 = param_2;
  if (param_2 < param_3) {
    do {
      iVar3 = sub_0803FACC(0x100);
      iVar4 = sub_0803FACC(0x100);
      iVar5 = sub_0803FACC(0x100);
      iVar6 = sub_0803FACC(0x100);
      iVar3 = (((uint)(iVar3 * *(int *)(&gUnknown_086B72E0 + iVar2)) >> 8) +
               *(int *)(&DAT_086b72e4 + iVar2) >> 0x10) + (int)*(short *)(param_1 + 0x18);
      iVar3 = ((iVar3 * (((uint)(iVar4 * *(int *)(&DAT_086b72e8 + iVar2)) >> 8) +
                        *(int *)(&DAT_086b72ec + iVar2)) >> 0x10) + iVar3) * 0x10000;
      iVar4 = iVar3 >> 0x10;
      do {
        uVar1 = (undefined2)((uint)iVar3 >> 0x10);
        *(undefined2 *)(param_1 + 0x16) = uVar1;
      } while (*(short *)(param_1 + 0x16) != iVar4);
      do {
        *(undefined2 *)(param_1 + 0x18) = uVar1;
      } while (*(short *)(param_1 + 0x18) != iVar4);
      iVar3 = ((uint)(iVar5 * *(int *)(&DAT_086b72f0 + iVar2) + *(int *)(&DAT_086b72f4 + iVar2)) >>
              0x10) + (int)*(short *)(param_1 + 0x1c);
      iVar3 = ((iVar3 * (((uint)(iVar6 * *(int *)(&DAT_086b72f8 + iVar2)) >> 8) +
                        *(int *)(&DAT_086b72fc + iVar2)) >> 0x10) + iVar3) * 0x10000;
      iVar4 = iVar3 >> 0x10;
      do {
        uVar1 = (undefined2)((uint)iVar3 >> 0x10);
        *(undefined2 *)(param_1 + 0x1a) = uVar1;
      } while (*(short *)(param_1 + 0x1a) != iVar4);
      do {
        *(undefined2 *)(param_1 + 0x1c) = uVar1;
      } while (*(short *)(param_1 + 0x1c) != iVar4);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_3);
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x2c) + (param_3 - param_2) * 3;
  do {
    *(short *)(param_1 + 0x2c) = (short)uVar7;
  } while ((uint)*(ushort *)(param_1 + 0x2c) != (uVar7 & 0xffff));
  return;
}


/* sub_0801375E @ 0x0801375E */

void sub_0801375E(int param_1,int param_2,int param_3,short param_4)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  *(ushort *)(param_1 + 2) =
       (ushort)(byte)(&DAT_086b82f8)[(uint)*(byte *)(param_2 + 0x14) * 0x18] +
       (ushort)(byte)(&DAT_086b82f8)[(uint)*(byte *)(param_3 + 0x14) * 0x18] * 0x10 +
       param_4 * 0x100;
  (&DAT_03001560)[(uint)(byte)(&DAT_086b82f8)[(uint)*(byte *)(param_1 + 0x14) * 0x18] * 0x68] =
       (&DAT_03001560)[(uint)(byte)(&DAT_086b82f8)[(uint)*(byte *)(param_1 + 0x14) * 0x18] * 0x68] |
       1;
  sVar3 = (short)((uint)(((int)*(short *)(param_2 + 0x18) + (int)*(short *)(param_3 + 0x18)) * 0x9a)
                 >> 8);
  do {
    *(short *)(param_1 + 0x18) = sVar3;
  } while (*(short *)(param_1 + 0x18) != sVar3);
  sVar3 = (short)((uint)(((int)*(short *)(param_2 + 0x16) + (int)*(short *)(param_3 + 0x16)) * 0x9a)
                 >> 8);
  do {
    *(short *)(param_1 + 0x16) = sVar3;
  } while (*(short *)(param_1 + 0x16) != sVar3);
  sVar3 = (short)((uint)(((int)*(short *)(param_2 + 0x1c) + (int)*(short *)(param_3 + 0x1c)) * 0x9a)
                 >> 8);
  do {
    *(short *)(param_1 + 0x1c) = sVar3;
  } while (*(short *)(param_1 + 0x1c) != sVar3);
  sVar3 = (short)((uint)(((int)*(short *)(param_2 + 0x1a) + (int)*(short *)(param_3 + 0x1a)) * 0x9a)
                 >> 8);
  do {
    *(short *)(param_1 + 0x1a) = sVar3;
  } while (*(short *)(param_1 + 0x1a) != sVar3);
  uVar1 = (uint)(*(int *)(param_2 + 0x24) + *(int *)(param_3 + 0x24)) >> 1;
  do {
    *(uint *)(param_1 + 0x24) = uVar1;
  } while (*(uint *)(param_1 + 0x24) != uVar1);
  uVar1 = ((uint)*(byte *)(param_2 + 0x28) + (uint)*(byte *)(param_3 + 0x28) >> 1) + 10;
  do {
    *(byte *)(param_1 + 0x28) = (byte)uVar1;
  } while ((uint)*(byte *)(param_1 + 0x28) != (uVar1 & 0xff));
  uVar1 = ((uint)*(byte *)(param_2 + 0x29) + (uint)*(byte *)(param_3 + 0x29) >> 1) + 10;
  do {
    *(byte *)(param_1 + 0x29) = (byte)uVar1;
  } while ((uint)*(byte *)(param_1 + 0x29) != (uVar1 & 0xff));
  uVar1 = ((uint)*(byte *)(param_2 + 0x2a) + (uint)*(byte *)(param_3 + 0x2a) >> 1) + 10;
  do {
    *(byte *)(param_1 + 0x2a) = (byte)uVar1;
  } while ((uint)*(byte *)(param_1 + 0x2a) != (uVar1 & 0xff));
  uVar1 = ((uint)*(byte *)(param_2 + 0x2b) + (uint)*(byte *)(param_3 + 0x2b) >> 1) + 0x10;
  do {
    *(byte *)(param_1 + 0x2b) = (byte)uVar1;
  } while ((uint)*(byte *)(param_1 + 0x2b) != (uVar1 & 0xff));
  iVar2 = 0;
  do {
    iVar5 = iVar2 * 4;
    piVar4 = (int *)(iVar5 + param_2 + 0x3c);
    piVar6 = (int *)(iVar5 + param_3 + 0x3c);
    if (*piVar4 <= *piVar6) {
      piVar4 = piVar6;
    }
    *(int *)(iVar5 + param_1 + 0x3c) = *piVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


/* sub_08013914 @ 0x08013914 */

uint sub_08013914(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar4 = (uint)*(short *)(param_1 + 0x16);
  if (uVar4 != 0) {
    iVar7 = -((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1b
                   ) >> 0x1f);
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1d)
             < 0) {
      uVar5 = sub_08013914(&DAT_03001560 + (*(ushort *)(param_1 + 2) & 0xf) * 0x68,param_2,iVar7,
                           0x68,param_4);
      uVar4 = sub_08013914(&DAT_03001560 + (((uint)*(ushort *)(param_1 + 2) << 0x18) >> 0x1c) * 0x68
                           ,param_2);
      uVar4 = uVar4 | uVar5;
      if (uVar4 != 0) {
        uVar1 = *(ushort *)(param_1 + 2);
        sub_0801375E(param_1,&DAT_03001560 + (uVar1 & 0xf) * 0x68,
                     &DAT_03001560 + (((uint)uVar1 << 0x18) >> 0x1c) * 0x68,uVar1 >> 8);
        *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + 0x18);
        *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_1 + 0x1c);
        if (DAT_03001c34 != 0) {
          iVar7 = **(int **)(DAT_03001c34 + 0x14);
          iVar7 = __call_via_r1(*(int **)(DAT_03001c34 + 0x14),*(int *)(iVar7 + 0x14) + iVar7);
          if (iVar7 != 0) {
            sub_0800F53C(DAT_03001c34);
          }
          sub_0801064C(DAT_03001c34);
          if (iVar7 != 0) {
            sub_0800F558(DAT_03001c34);
          }
        }
      }
    }
    else {
      iVar7 = sub_080135D2(param_1);
      param_2 = *(int *)(param_1 + 0x24) + param_2;
      do {
        *(int *)(param_1 + 0x24) = param_2;
      } while (*(int *)(param_1 + 0x24) != param_2);
      if (iVar7 < 200) {
        if (*(undefined **)(param_1 + 0x24) < (&PTR_gUnknown_086B4B58_086b6fc0)[iVar7]) {
          uVar4 = 0;
        }
        else {
          uVar6 = sub_080135D2(param_1);
          sub_08013678(param_1,iVar7,uVar6);
          bVar2 = false;
          if ((DAT_03001c34 != 0) &&
             (iVar7 = **(int **)(DAT_03001c34 + 0x14),
             iVar7 = __call_via_r1(*(int **)(DAT_03001c34 + 0x14),*(int *)(iVar7 + 0x14) + iVar7),
             iVar7 != 0)) {
            bVar2 = true;
            sub_0800F53C(DAT_03001c34);
          }
          uVar3 = DAT_03001068;
          DAT_03001068 = (&DAT_086b82f8)[(uint)*(byte *)(param_1 + 0x14) * 0x18];
          sub_08012588(&gUnknown_0877C9E8,0);
          DAT_03001068 = uVar3;
          if ((DAT_03001c34 != 0) && (sub_0801064C(), bVar2)) {
            sub_0800F558(DAT_03001c34);
          }
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


/* sub_08013A90 @ 0x08013A90 */

void sub_08013A90(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)((uint)*(byte *)(param_1 + 0xc) + param_1 + 0xd) = param_2;
  iVar1 = (uint)*(byte *)(param_1 + 0xc) * 2 + param_1;
  do {
    *(char *)(iVar1 + 0x2e) = '\0';
  } while (*(char *)(iVar1 + 0x2e) != '\0');
  do {
    *(undefined1 *)(iVar1 + 0x2f) = 0;
  } while (*(char *)(iVar1 + 0x2f) != '\0');
  *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) + '\x01';
  return;
}


/* sub_08013ABA @ 0x08013ABA */

void sub_08013ABA(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    do {
      if (*(byte *)(param_1 + iVar4 + 0xd) == param_2) {
        bVar1 = *(char *)(param_1 + 0xc) - 1;
        *(byte *)(param_1 + 0xc) = bVar1;
        iVar2 = iVar4;
        if (iVar4 < (int)(uint)bVar1) {
          do {
            *(undefined1 *)(param_1 + iVar2 + 0xd) = *(undefined1 *)(param_1 + iVar2 + 0xe);
            iVar3 = iVar2 * 2 + param_1;
            iVar2 = iVar2 + 1;
            *(undefined1 *)(iVar3 + 0x2e) = *(undefined1 *)(iVar3 + 0x30);
            *(undefined1 *)(iVar3 + 0x2f) = *(undefined1 *)(iVar3 + 0x31);
          } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0xc));
        }
        if (*(byte *)(param_1 + 0xc) <= *(byte *)(param_1 + 0x15)) {
          *(undefined1 *)(param_1 + 0x15) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return;
}


/* sub_08013B12 @ 0x08013B12 */

void sub_08013B12(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0xc) != 0) {
    do {
      if (*(byte *)(param_1 + iVar1 + 0xd) == param_2) {
        *(undefined1 *)(param_1 + iVar1 + 0xd) = param_3;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return;
}


/* sub_08013B34 @ 0x08013B34 */

undefined4 sub_08013B34(int param_1)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0xc) == 0) {
    return 0;
  }
  bVar1 = *(char *)(param_1 + 0x15) + 1;
  *(byte *)(param_1 + 0x15) = bVar1;
  if (*(byte *)(param_1 + 0xc) <= bVar1) {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return 1;
}


/* sub_08013B54 @ 0x08013B54 */

void sub_08013B54(int param_1,uint param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0xc) != 0) {
    do {
      if (*(byte *)(param_1 + iVar1 + 0xd) == param_2) {
        param_1 = iVar1 * 2 + param_1;
        do {
          *(char *)(param_1 + 0x2e) = param_3;
        } while (*(char *)(param_1 + 0x2e) != param_3);
        do {
          *(char *)(param_1 + 0x2f) = param_3;
        } while (*(char *)(param_1 + 0x2f) != param_3);
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  sub_0803DF14(L"\"Energy attack level set for attack which doesn\'t exist for player!\"",
               "T:\\Source\\CharacterData.cpp",0x180,0,param_4);
  return;
}


/* sub_08013BCC @ 0x08013BCC */

undefined1 sub_08013BCC(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0xc) != 0) {
    do {
      if (*(byte *)(param_1 + iVar1 + 0xd) == param_2) {
        return *(undefined1 *)(iVar1 * 2 + param_1 + 0x2f);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  sub_0803DF14(L"\"Energy attack level requested for attack which doesn\'t exist for player!\"",
               "T:\\Source\\CharacterData.cpp",0x18d,0);
  return 0;
}


/* sub_08013C02 @ 0x08013C02 */

void sub_08013C02(int param_1,int param_2)

{
  undefined4 local_78 [17];
  undefined4 local_34;
  
  DAT_03002b70 = DAT_03002b70 + *(char *)(param_2 + 0x16);
  DAT_03002b74 = DAT_03002b74 + *(char *)(param_2 + 0x17);
  DAT_03002b78 = DAT_03002b78 + *(char *)(param_2 + 0x18);
  DAT_03002b7c = DAT_03002b7c + *(char *)(param_2 + 0x19);
  DAT_03002b80 = DAT_03002b80 + *(char *)(param_2 + 0x1a);
  DAT_03002b60 = DAT_03002b60 + (short)*(undefined4 *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | *(byte *)(param_2 + 0x24);
    local_78[0] = 0;
    local_34 = 0;
    ScriptVM_Run(local_78,*(undefined4 *)(param_2 + 0x28),0);
  }
  return;
}


/* sub_08013C66 @ 0x08013C66 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void sub_08013C66(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  DAT_03002b70 = (uint)*(byte *)(param_1 + 0x28);
  DAT_03002b74 = (uint)*(byte *)(param_1 + 0x29);
  DAT_03002b78 = (uint)*(byte *)(param_1 + 0x2a);
  DAT_03002b7c = (uint)*(byte *)(param_1 + 0x2a);
  DAT_03002b80 = (uint)*(byte *)(param_1 + 0x2b);
  DAT_03002b60 = 0x100;
  DAT_03002b62 = 0x100;
  DAT_03002b64 = 0;
  DAT_03002b66 = 0x100;
  DAT_03002b68 = 0x1000;
  DAT_03002b5d = 0x10;
  DAT_03002b5e = 0x10;
  DAT_03002b6a = 0x4000;
  DAT_03002b6c = 0;
  DAT_03002b5c = 0;
  DAT_03002b84 = 0;
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  do {
    sub_08013C02(param_1,&gEquipmentTable + *(int *)(iVar4 * 4 + param_1 + 0x3c) * 0x2c);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  sub_080046AE(&DAT_03001068,&DAT_03002b5c);
  uVar1 = DAT_03002b70;
  puVar2 = (ushort *)(param_1 + 0x4c);
  if ((int)DAT_03002b70 < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b70 & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  uVar1 = DAT_03002b74;
  puVar2 = (ushort *)(param_1 + 0x4e);
  if ((int)DAT_03002b74 < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b74 & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  uVar1 = DAT_03002b78;
  puVar2 = (ushort *)(param_1 + 0x50);
  if ((int)DAT_03002b78 < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b78 & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  uVar1 = DAT_03002b7c;
  puVar2 = (ushort *)(param_1 + 0x52);
  if ((int)DAT_03002b7c < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b7c & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  uVar1 = DAT_03002b80;
  puVar2 = (ushort *)(param_1 + 0x54);
  if ((int)DAT_03002b80 < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b80 & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  *(undefined2 *)(param_1 + 0x58) = DAT_03002b60;
  *(undefined2 *)(param_1 + 0x5a) = DAT_03002b62;
  *(undefined2 *)(param_1 + 0x5c) = DAT_03002b64;
  *(undefined2 *)(param_1 + 0x5e) = DAT_03002b66;
  *(undefined2 *)(param_1 + 0x60) = DAT_03002b68;
  *(undefined1 *)(param_1 + 0x56) = DAT_03002b5d;
  *(undefined1 *)(param_1 + 0x57) = DAT_03002b5e;
  *(undefined2 *)(param_1 + 0x62) = DAT_03002b6a;
  *(undefined2 *)(param_1 + 100) = DAT_03002b6c;
  *(undefined1 *)(param_1 + 0x66) = DAT_03002b5c;
  *(undefined1 *)(param_1 + 0x67) = DAT_03002b84;
  return;
}


/* sub_08013DD6 @ 0x08013DD6 */

void sub_08013DD6(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((ushort)(&DAT_086b82fa)[iVar1 * 0xc] == param_2) {
      *(char *)(param_1 + 0x14) = (char)iVar1;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x36);
  sub_0803DF14(L"\"Unable to find sprite index in character state data\"",
               "T:\\Source\\CharacterData.cpp",0x1c6,0);
  return;
}


/* sub_08013E06 @ 0x08013E06 */

void sub_08013E06(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar1 = *(int *)(param_1 + 4) - (((uint)*(ushort *)(param_1 + 0x62) << 8) >> 0xe),
     *(int *)(param_1 + 4) = iVar1, iVar1 < 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* sub_08013E38 @ 0x08013E38 */

byte * sub_08013E38(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (((byte)(&gUnknown_086B759C)[iVar1 * 0x10] == param_1) &&
       ((byte)(&DAT_086b759d)[iVar1 * 0x10] == param_2)) break;
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      return (byte *)0x0;
    }
  }
  return &gUnknown_086B759C + iVar1 * 0x10;
}


/* sub_08013E64 @ 0x08013E64 */

undefined4 *
sub_08013E64(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint a3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x3c), param_1 != (undefined4 *)0x0)) {
    param_1[1] = param_2;
    *param_1 = &_08049880;
    param_1[2] = param_7;
    param_1[3] = param_8;
    param_1[4] = 1;
    param_1[5] = param_6;
    param_3 = param_3 * 0xc;
    param_1[8] = &gUnknown_086B77A4 + param_3;
    param_1[9] = param_4;
    param_1[10] = param_5;
    a3 = (uint)(byte)(&DAT_086b77a8)[param_3];
    bVar1 = (&DAT_086b77a9)[param_3];
    param_1[0xb] = param_4 + a3;
    param_1[0xc] = param_5 + (uint)bVar1;
    bVar1 = (&DAT_086b77a8)[param_3];
    bVar2 = (&DAT_086b77a9)[param_3];
    param_1[0xd] = (uint)bVar2 * (uint)bVar1;
    uVar3 = sub_0803D5B8((uint)bVar2 * (uint)bVar1 * 3);
    iVar4 = 0;
    param_1[0xe] = uVar3;
    do {
      sub_08049120(param_1[0xe] + iVar4 * param_1[0xd],
                   *(int *)(iVar4 * 4 + *(int *)(param_1[8] + 8) + 4),iVar4 * 4,a3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  return param_1;
}


/* sub_08013EEC @ 0x08013EEC */

void sub_08013EEC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049880;
  sub_0803D63C(param_1[0xe]);
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08013F0C @ 0x08013F0C */

void sub_08013F0C(int param_1,int param_2,int param_3)

{
  byte bVar1;
  
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x28) = param_3;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 5);
  *(uint *)(param_1 + 0x2c) = param_2 + (uint)*(byte *)(*(int *)(param_1 + 0x20) + 4);
  *(uint *)(param_1 + 0x30) = param_3 + (uint)bVar1;
  return;
}


/* sub_08013F24 @ 0x08013F24 */

void sub_08013F24(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = 2;
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar1 = 1, *(int *)(*(int *)(param_1 + 4) + 0x108) != param_1)) {
      iVar1 = 0;
    }
    sub_0803F922(param_2,*(int *)(param_1 + 0x38) + iVar1 * *(int *)(param_1 + 0x34),param_1 + 0x24)
    ;
  }
  return;
}


/* sub_08013F58 @ 0x08013F58 */

void sub_08013F58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
    iVar1 = **(int **)(param_1 + 4);
    __call_via_r3(*(int **)(param_1 + 4),param_1,*(undefined4 *)(param_1 + 0x14),
                  *(int *)(iVar1 + 0x20) + iVar1,param_4);
  }
  return;
}


/* sub_08013F7C @ 0x08013F7C */

undefined4 sub_08013F7C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x20) + 2);
  if (*(int *)(*(int *)(param_1 + 4) + 0x108) == param_1) {
    if ((DAT_03003306 & uVar1) == 0) {
      if ((*(int *)(param_1 + 0xc) != 0) &&
         (iVar3 = *(int *)(param_1 + 0x18) + -1, *(int *)(param_1 + 0x18) = iVar3, iVar3 == 0)) {
        if (4 < *(int *)(param_1 + 0x1c)) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) / 2;
        }
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(param_1 + 8) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
          iVar3 = **(int **)(param_1 + 4);
          __call_via_r3(*(int **)(param_1 + 4),param_1,*(undefined4 *)(param_1 + 0x14),
                        *(int *)(iVar3 + 0x20) + iVar3,param_4);
        }
      }
    }
    else {
      sub_08005FB2(param_1);
      if (*(int *)(param_1 + 8) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
        iVar3 = **(int **)(param_1 + 4);
        __call_via_r3(*(int **)(param_1 + 4),param_1,*(undefined4 *)(param_1 + 0x14),
                      *(int *)(iVar3 + 0x20) + iVar3,param_4);
      }
    }
    uVar2 = 1;
  }
  else {
    if ((DAT_03003304 & uVar1) != 0) {
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x18) = 0x10;
      *(undefined4 *)(param_1 + 0x1c) = 0x10;
      sub_08005FA8(param_1);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_08014028 @ 0x08014028 */

undefined4 *
sub_08014028(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
            undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = param_1;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x3c), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar5);
    *param_1 = &_0804BF54;
    uVar2 = param_8[1];
    uVar3 = param_8[2];
    uVar4 = param_8[3];
    param_1[9] = *param_8;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar4;
    param_1[8] = param_9;
    param_1[7] = param_10;
    param_1[0xe] = (int)(param_1[10] + param_1[0xc]) >> 1;
    param_1[0xd] = (int)(param_1[9] + param_1[0xb]) >> 1;
    param_1[0xe] = param_1[0xe] + 3;
    iVar1 = sub_0803FFE8(&gUnknown_0806E050,param_1[8]);
    param_1[0xd] = param_1[0xd] - iVar1 / 2;
  }
  return param_1;
}


/* sub_080140B2 @ 0x080140B2 */

undefined4 sub_080140B2(int param_1,undefined4 *param_2)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) != *(int *)(param_1 + 8)) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  param_2[1] = *(int *)(param_1 + 0x38) + -3;
  return 1;
}


/* sub_080140D2 @ 0x080140D2 */

void sub_080140D2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) &&
     ((DAT_03003302 & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  sub_08015BB8(param_2,param_1 + 0x24,param_1 + 0x34,*(undefined4 *)(param_1 + 0x20),uVar1);
  return;
}


/* sub_08014120 @ 0x08014120 */

undefined4 sub_08014120(void)

{
  return 0;
}


/* sub_08014124 @ 0x08014124 */

void sub_08014124(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    param_1[1] = param_2;
    *param_1 = &_0804A254;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[5] = param_5;
    *(undefined1 *)(param_1 + 6) = param_7;
    param_1[4] = param_6;
    param_1[7] = param_8;
  }
  return;
}


/* sub_08014156 @ 0x08014156 */

void sub_08014156(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  param_2[3] = (char)*(undefined4 *)(param_1 + 0x10);
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  *param_2 = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
  sub_0803DADA(param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}


/* sub_08014188 @ 0x08014188 */

undefined4 * sub_08014188(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_44;
  int *piStack_1c;
  int *piStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x574), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    *param_1 = &_080498C4;
    piStack_18 = param_1 + 0x4b;
    *piStack_18 = 0;
    piStack_1c = param_1 + 0x74;
    *piStack_1c = 0;
    param_1[0x47] = 0;
    param_1[0x4a] = 0;
    iVar2 = 0;
    uStack_88 = 0;
    uStack_44 = 0;
    do {
      Wfz_LoadContainer((&gUnknown_086B8028)[iVar2],param_1 + iVar2 * 0x40 + 0x9d);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar2 = 0;
    do {
      ScriptVM_Run(&uStack_88,(&DAT_08720568)[iVar2 * 4],0);
      if (iStack_84 == 0) {
        ScriptVM_Run(&uStack_88,(&DAT_0872056c)[iVar2 * 4],0);
        if (iStack_84 == 0) {
          ScriptVM_Run(&uStack_88,*(undefined4 *)(&UNK_08720570 + iVar2 * 0x10),0);
          if (iStack_84 != 0) {
            iVar1 = *piStack_18;
            *piStack_18 = iVar1 + 1;
            *(undefined1 *)(piStack_18 + iVar1 + 1) = (&gUnknown_08720564)[iVar2 * 0x10];
            *(undefined2 *)((int)piStack_18 + iVar1 * 4 + 6) = (&DAT_08720566)[iVar2 * 8];
          }
        }
        else {
          iVar1 = *piStack_1c;
          *piStack_1c = iVar1 + 1;
          *(undefined1 *)(piStack_1c + iVar1 + 1) = (&gUnknown_08720564)[iVar2 * 0x10];
          *(undefined2 *)((int)piStack_1c + iVar1 * 4 + 6) = (&DAT_08720566)[iVar2 * 8];
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x28);
  }
  return param_1;
}


/* sub_0801425C @ 0x0801425C */

void sub_0801425C(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_08013E64(0,param_1,1,0xc,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x22,0x14,L"Options",2,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0xce,0x14,L"Status",2,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,2,0xd4,0x28,2,1,0);
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  uVar1 = sub_08013E64(0,param_1,3,0xd4,0x70,3,1,0);
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x120));
  sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x124));
  uVar1 = sub_08015C62(0,param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x1f,0x18,
                       0x20,1,0);
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x20,
                       (*(int *)(*(int *)(param_1 + 0x114) + 0x28) -
                       *(int *)(*(int *)(param_1 + 0x114) + 0x20)) + 0x1c,0x20,0,1);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  sub_0800664E(param_1,uVar1);
  return;
}


/* sub_08014424 @ 0x08014424 */

void sub_08014424(int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  byte *pbStack_24;
  int local_20;
  undefined1 *puStack_1c;
  int *local_18;
  
  iVar2 = *(int *)(param_1 + 0x120);
  if (*param_3 == 0) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    iVar2 = *(int *)(param_1 + 0x124);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x10) = 1;
    *(uint *)(*(int *)(param_1 + 0x120) + 8) = (uint)(*(int *)(param_1 + 0x128) != 0);
    *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x10) = 1;
    *(uint *)(*(int *)(param_1 + 0x124) + 8) = (uint)(*(int *)(param_1 + 0x128) + 3 < *param_3);
    local_20 = param_1;
    puStack_1c = param_2;
    local_18 = param_3;
    sub_080051B0(param_2,0xdb,0x37,0x70);
    param_2[3] = 2;
    param_2[2] = 1;
    *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
    *param_2 = 0;
    param_2[1] = 0xe;
    iVar2 = 0;
    *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
    do {
      iVar1 = *(int *)(param_1 + 0x128) + iVar2;
      if (*local_18 <= iVar1) {
        return;
      }
      pbStack_24 = (byte *)(local_18 + iVar1 + 1);
      uStack_38 = *(undefined4 *)
                   (&gUIStringPtrs + (uint)*(ushort *)((int)local_18 + iVar1 * 4 + 6) * 4);
      iVar1 = 0;
      uStack_2c = uStack_38;
      do {
        sub_0803DE6A(param_2,uStack_38,0xb0,auStack_3c);
        iVar1 = iVar1 + 1;
      } while (iStack_30 == 0);
      iStack_28 = iVar2 * 0x1c;
      *(int *)(param_2 + 8) = iStack_28 + 0x43 + iVar1 * -7;
      *(undefined4 *)(param_2 + 4) = 0x20;
      sub_0803DD66(param_2,0xb0,uStack_2c);
      iStack_48 = iStack_28 + 0x31;
      uStack_44 = 0x1e;
      uStack_4c = 0xe;
      iStack_40 = iStack_28 + 0x41;
      sub_0803F922(param_2,(uint)*pbStack_24 * 0x100 + local_20 + 0x274,&uStack_4c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return;
}


/* sub_08014526 @ 0x08014526 */

void sub_08014526(int param_1)

{
  undefined1 auStack_40 [52];
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  sub_08006718(param_1,auStack_40,0x1e,0);
  if (*(int *)(param_1 + 0x11c) == 0) {
    sub_08014424(param_1,auStack_40,param_1 + 300);
  }
  else {
    sub_08014424(param_1,auStack_40,param_1 + 0x1d0);
  }
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_08014588 @ 0x08014588 */

undefined4 sub_08014588(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  switch(param_3) {
  default:
    break;
  case 1:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(1);
    return 1;
  case 2:
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    *(undefined4 *)(param_1 + 0x110) = 0;
    break;
  case 3:
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    *(undefined4 *)(param_1 + 0x110) = 0;
    break;
  case 6:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      puVar1[0x45] = &_0804BF28;
      *puVar1 = &_080498F0;
      puVar1[0x45] = &UNK_08049928;
      *(undefined1 *)(puVar1 + 0x46) = (undefined1)DAT_03001914;
      *(undefined1 *)((int)puVar1 + 0x119) = DAT_03001914._1_1_;
      *(undefined1 *)((int)puVar1 + 0x11a) = DAT_03001914._2_1_;
      *(undefined1 *)((int)puVar1 + 0x11b) = DAT_03001914._3_1_;
    }
    sub_0803D850();
    return 1;
  case 7:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x158);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_08049758;
      puVar1[0x45] = 0;
      puVar1[0x46] = 0;
      puVar1[0x48] = 0;
      puVar1[0x49] = 0;
      puVar1[0x55] = 0;
    }
    sub_0803D850();
    return 1;
  }
  return 0;
}


/* sub_080146B6 @ 0x080146B6 */

undefined4 sub_080146B6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    uVar1 = 1;
  }
  else {
    if (((int)((uint)DAT_03003304 << 0x1a) < 0) && (*(int *)(param_1 + 0x11c) != 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x38) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x38) = 0;
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    if (((int)((uint)DAT_03003304 << 0x1b) < 0) && (*(int *)(param_1 + 0x11c) != 1)) {
      *(undefined4 *)(param_1 + 0x11c) = 1;
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x38) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x38) = 1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08014770 @ 0x08014770 */

void sub_08014770(int param_1)

{
  undefined1 auStack_44 [52];
  
  *(uint *)(*(int *)(param_1 + 0x11c) + 8) = (uint)(2 < *(int *)(param_1 + 0x10c));
  sub_0803F540(auStack_44,0xf0,0xa0);
  sub_08006718(param_1,auStack_44,2,1);
  sub_08049150((int)auStack_44,0x6000040);
  sub_0803F58C(auStack_44,0);
  return;
}


/* sub_080147B8 @ 0x080147B8 */

void sub_080147B8(int param_1)

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
  uVar1 = sub_080060A8(0,param_1,3,2,0,4,4,0x14,0x46,0x70,0xffffffff,1);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,4,2,0,3,3,0x13,0xaa,0x70,0xffffffff,1);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x22,0x14,L"Equip",2,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0xce,0x14,L"Journal",2,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}


/* sub_08014A9C @ 0x08014A9C */

void sub_08014A9C(int *param_1)

{
  if (param_1[0x46] != DAT_03001914) {
    sub_08006B5E(&DAT_03001914);
  }
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08014AC8 @ 0x08014AC8 */

undefined4 sub_08014AC8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x10c) == 3) {
      sub_080335BC(0,0);
      sub_0803D8A0();
      sub_08015882();
      sub_08049144(0x5000000,0x805652c,0x200);
      sub_08049144(0x5000200,0x805652c,0x200);
    }
    else if (*(int *)(param_1 + 0x10c) == 4) {
      sub_0803D876(1);
      puVar1 = (undefined4 *)sub_0803D5B8(0x10);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 1;
        *puVar1 = &_08049264;
        puVar1[3] = 0;
        puVar1[2] = &gUnknown_0877CCC4;
      }
      iVar2 = DAT_0300225c * 4;
      DAT_0300225c = DAT_0300225c + 1;
      *(undefined4 **)(&DAT_03002260 + iVar2) = puVar1;
    }
    return 1;
  }
  if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(1);
    return 1;
  }
  if (param_3 == 6) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x118);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_08049588;
      puVar1[0x45] = 0;
    }
    sub_0803D850();
    return 1;
  }
  if (param_3 == 7) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_08014188(0);
    sub_0803D850();
    return 1;
  }
  return 0;
}


/* sub_08014BBC @ 0x08014BBC */

undefined4 sub_08014BBC(void)

{
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    return 1;
  }
  return 0;
}


/* sub_08014BE2 @ 0x08014BE2 */

undefined1 sub_08014BE2(undefined4 param_1,int param_2)

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


/* sub_08014C06 @ 0x08014C06 */

void sub_08014C06(undefined4 param_1,int param_2,undefined1 param_3)

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


/* sub_08014C30 @ 0x08014C30 */

undefined4 sub_08014C30(void)

{
  return 8;
}


/* sub_08014C5C @ 0x08014C5C */

void sub_08014C5C(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar4 = param_3;
  sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x114));
  *(undefined4 *)(param_1 + 0x114) = 0;
  sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x118));
  *(undefined4 *)(param_1 + 0x118) = 0;
  sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 0x124) = 0;
  iVar2 = 0xc;
  if (param_2 != 0) {
    uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0,iVar3,param_2,iVar4);
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    sub_0800664E(param_1,uVar1);
    uVar1 = sub_08014124(0,param_1,0x1c,0x90,*(undefined4 *)(&gUIStringPtrs + param_2 * 4),5,0,
                         &gUnknown_0807012C);
    *(undefined4 *)(param_1 + 0x120) = uVar1;
    sub_0800664E(param_1,uVar1);
    iVar2 = sub_0803FFE8(&gUnknown_0807012C,*(undefined4 *)(&gUIStringPtrs + param_2 * 4));
    iVar2 = iVar2 + 0x20;
  }
  if (param_3 != 0) {
    uVar1 = sub_08013E64(0,param_1,1,iVar2,0x84,1,1,0);
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    sub_0800664E(param_1,uVar1);
    uVar1 = sub_08014124(0,param_1,iVar2 + 0x10,0x90,*(undefined4 *)(&gUIStringPtrs + param_3 * 4),5
                         ,0,&gUnknown_0807012C);
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    sub_0800664E(param_1,uVar1);
  }
  return;
}


/* sub_08014D56 @ 0x08014D56 */

void sub_08014D56(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc + *(int *)(param_1 + 300) + 0x54)
          * 0x68;
  sub_08013C66(&DAT_03001560 + iVar1);
  if (*(char *)(param_1 + 0x130) == '\0') {
    if (*(short *)(&DAT_0300158c + iVar1) == 0) {
      sub_08014C5C(param_1,0,0x1a);
    }
    else {
      sub_08014C5C(param_1,0x36,0x1a);
    }
  }
  else if (*(char *)(param_1 + 0x130) == '\x01') {
    sub_08014C5C(param_1,0x18,0x1a);
  }
  return;
}


/* sub_08014DC2 @ 0x08014DC2 */

void sub_08014DC2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x130) = 0;
  uVar1 = sub_08014124(0,param_1,0xe0,0x90,L"Skills",5,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Skills");
  uVar1 = sub_08013E64(0,param_1,3,0xce - iVar2,0x84,3,1,0);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x22,0x14,L"Journal",2,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0xce,0x14,L"Inventory",2,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  local_24 = 0x4f;
  local_1c = 0;
  local_20 = 0xffffffff;
  uVar1 = sub_080060F8(0,param_1,1,3,2,0xffffffff,0xffffffff,&gUnknown_08057D1A,0xb2);
  sub_0800664E(param_1,uVar1);
  local_24 = 0x5b;
  local_1c = 0;
  local_20 = 0xffffffff;
  uVar1 = sub_080060F8(0,param_1,2,1,3,0xffffffff,0xffffffff,&gUnknown_08057D2C,0xb2);
  sub_0800664E(param_1,uVar1);
  local_24 = 0x67;
  local_1c = 0;
  local_20 = 0xffffffff;
  uVar1 = sub_080060F8(0,param_1,3,2,1,0xffffffff,0xffffffff,&gUnknown_08057D3E,0xb2);
  sub_0800664E(param_1,uVar1);
  local_24 = 0x73;
  local_1c = 0;
  local_20 = 0xffffffff;
  uVar1 = sub_080060F8(0,param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
                       &gUnknown_08057D50,0xb2);
  sub_0800664E(param_1,uVar1);
  local_24 = 0x10;
  local_20 = 0x1e;
  local_1c = 0xe0;
  local_18 = 0x2e;
  uVar1 = sub_08015D10(0,param_1,0,0xffffffff,0xffffffff,&local_24,100);
  *(undefined4 *)(param_1 + 300) = uVar1;
  if ((DAT_03001560 & 1) != 0) {
    sub_08015FFC(uVar1,L"Goku",0);
  }
  if ((DAT_030015c8 & 1) != 0) {
    sub_08015FFC(*(undefined4 *)(param_1 + 300),L"Gohan",1);
  }
  if ((DAT_03001630 & 1) != 0) {
    sub_08015FFC(*(undefined4 *)(param_1 + 300),L"Goten",2);
  }
  if ((DAT_03001698 & 1) != 0) {
    sub_08015FFC(*(undefined4 *)(param_1 + 300),L"Trunks",3);
  }
  if ((DAT_03001700 & 1) != 0) {
    sub_08015FFC(*(undefined4 *)(param_1 + 300),L"Vegeta",4);
  }
  if ((DAT_03001768 & 1) != 0) {
    sub_08015FFC(*(undefined4 *)(param_1 + 300),L"Gotenks",5);
  }
  if ((DAT_030017d0 & 1) != 0) {
    sub_08015FFC(*(undefined4 *)(param_1 + 300),L"Vegito",6);
  }
  if ((bRam03001838 & 1) != 0) {
    sub_08015FFC(*(undefined4 *)(param_1 + 300),L"Gogeta",7);
  }
  sub_0800664E(param_1,*(undefined4 *)(param_1 + 300));
  sub_08015FA8(*(undefined4 *)(param_1 + 300),DAT_03001068);
  sub_08014D56(param_1);
  return;
}


