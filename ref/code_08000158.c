/* Ghidra reference decompilation of code_08000158 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08000158 @ 0x08000158 */

undefined4 sub_08000158(int param_1)

{
  undefined4 uVar1;
  
  if (9 < param_1) {
    return *(undefined4 *)(&DAT_086b6bb4 + param_1 * 4);
  }
  if (param_1 == 0) {
    if (DAT_03001c34 != 0) {
      return *(undefined4 *)(DAT_03001c34 + 0x58);
    }
    uVar1 = sub_0801713C(&gUnknown_086B82EC +
                         (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
    return uVar1;
  }
  if (param_1 < 9) {
    uVar1 = sub_0801713C(&gUnknown_086B82EC +
                         (uint)(byte)(&DAT_03001574)[(param_1 + -1) * 0x68] * 0x18);
    return uVar1;
  }
  return *(undefined4 *)(DAT_03001bac + 0x58);
}


/* sub_080001C6 @ 0x080001C6 */

int sub_080001C6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 0) {
    iVar1 = sub_08011C70(&DAT_03001c4c,7,-(param_1 + 1));
    return iVar1;
  }
  if (param_1 == 0) {
    if (DAT_03001c34 != 0) {
      return DAT_03001c34;
    }
  }
  else if (param_1 == 9) {
    return DAT_03001bac;
  }
  uVar2 = sub_08000158();
  iVar1 = sub_08011C70(&DAT_03001c4c,5,uVar2);
  return iVar1;
}


/* sub_08000206 @ 0x08000206 */

void sub_08000206(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001058;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08000218 @ 0x08000218 */

void sub_08000218(undefined4 param_1)

{
  DAT_03001058 = param_1;
  return;
}


/* sub_0800021C @ 0x0800021C */

void sub_0800021C(void)

{
  return;
}


/* sub_0800021E @ 0x0800021E */

void sub_0800021E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0300105c;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08000230 @ 0x08000230 */

void sub_08000230(undefined4 param_1)

{
  DAT_0300105c = param_1;
  return;
}


/* sub_08000236 @ 0x08000236 */

void sub_08000236(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001060;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08000248 @ 0x08000248 */

void sub_08000248(undefined4 param_1)

{
  DAT_03001060 = param_1;
  return;
}


/* sub_0800024E @ 0x0800024E */

void sub_0800024E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001064;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08000260 @ 0x08000260 */

void sub_08000260(undefined4 param_1)

{
  DAT_03001064 = param_1;
  return;
}


/* sub_08000266 @ 0x08000266 */

void sub_08000266(undefined4 param_1)

{
  *DAT_03001030 = param_1;
  return;
}


/* sub_0800026E @ 0x0800026E */

void sub_0800026E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_03001030;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08000282 @ 0x08000282 */

void sub_08000282(undefined4 param_1)

{
  *(undefined4 *)(DAT_03001030 + 4) = param_1;
  return;
}


/* sub_0800028A @ 0x0800028A */

void sub_0800028A(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001030 + 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_0800029E @ 0x0800029E */

void sub_0800029E(undefined4 param_1)

{
  *(undefined4 *)(DAT_03001030 + 8) = param_1;
  return;
}


/* sub_080002A6 @ 0x080002A6 */

void sub_080002A6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001030 + 8);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_080002BA @ 0x080002BA */

void sub_080002BA(undefined4 param_1)

{
  *(undefined4 *)(DAT_03001030 + 0xc) = param_1;
  return;
}


/* sub_080002C2 @ 0x080002C2 */

void sub_080002C2(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001030 + 0xc);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_080002D6 @ 0x080002D6 */

void sub_080002D6(undefined4 param_1)

{
  DAT_03001020 = param_1;
  return;
}


/* sub_080002DC @ 0x080002DC */

void sub_080002DC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001020;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080002EE @ 0x080002EE */

void sub_080002EE(undefined4 param_1)

{
  DAT_03001024 = param_1;
  return;
}


/* sub_080002F4 @ 0x080002F4 */

void sub_080002F4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001024;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080002F8 @ 0x080002F8 */

void sub_080002F8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = param_3;
  return;
}


/* sub_08000306 @ 0x08000306 */

void sub_08000306(undefined4 param_1)

{
  DAT_03001028 = param_1;
  return;
}


/* sub_0800030C @ 0x0800030C */

void sub_0800030C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001028;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08000310 @ 0x08000310 */

void sub_08000310(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = param_3;
  return;
}


/* sub_0800031E @ 0x0800031E */

void sub_0800031E(undefined4 param_1)

{
  DAT_0300102c = param_1;
  return;
}


/* sub_08000324 @ 0x08000324 */

void sub_08000324(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0300102c;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08000336 @ 0x08000336 */

void sub_08000336(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = (&DAT_03001576)[(uint)DAT_03001068 * 0x34];
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}


/* sub_0800035C @ 0x0800035C */

void sub_0800035C(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = (&DAT_03001578)[(uint)DAT_03001068 * 0x34];
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}


/* sub_08000382 @ 0x08000382 */

void sub_08000382(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = (&DAT_0300157c)[(uint)DAT_03001068 * 0x34];
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}


/* sub_080003A8 @ 0x080003A8 */

void sub_080003A8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0300155c;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080003E4 @ 0x080003E4 */

void sub_080003E4(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03002bb0;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_080003F6 @ 0x080003F6 */

void sub_080003F6(undefined1 param_1)

{
  DAT_03002bb0 = param_1;
  return;
}


/* sub_080003FC @ 0x080003FC */

void sub_080003FC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  short *psVar3;
  int iVar4;
  
  piVar1 = DAT_03001c34;
  if (DAT_03001c34 == (int *)0x0) {
    puVar2 = &DAT_03001560 + (uint)DAT_03001068 * 0x68;
  }
  else {
    if (param_1 < 1) {
      iVar4 = *(int *)(*DAT_03001c34 + 0x7c);
      __call_via_r1(DAT_03001c34,iVar4 + *DAT_03001c34,iVar4,param_4,param_4);
    }
    iVar4 = *piVar1;
    puVar2 = (undefined1 *)__call_via_r1(piVar1,*(int *)(iVar4 + 0x80) + iVar4);
  }
  psVar3 = (short *)(puVar2 + 0x16);
  if (param_1 < 0) {
    do {
      *psVar3 = 0;
    } while (*psVar3 != 0);
  }
  else if (param_1 < *(short *)(puVar2 + 0x18)) {
    do {
      *psVar3 = (short)param_1;
    } while (*psVar3 != (short)param_1);
  }
  else {
    *psVar3 = *(short *)(puVar2 + 0x18);
  }
  if ((int)((uint)(byte)puVar2[0x13] << 0x1f) < 0) {
    sub_08013C66();
  }
  return;
}


/* sub_08000402 @ 0x08000402 */

void sub_08000402(undefined4 *param_1)

{
  undefined1 *puVar1;
  short *psVar2;
  int unaff_r4;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    puVar1 = &DAT_03001560 + (uint)DAT_03001068 * 0x68;
  }
  else {
    if (unaff_r4 < 1) {
      __call_via_r1(piVar3,*(int *)(*piVar3 + 0x7c) + *piVar3);
    }
    puVar1 = (undefined1 *)__call_via_r1(piVar3,*(int *)(*piVar3 + 0x80) + *piVar3);
  }
  psVar2 = (short *)(puVar1 + 0x16);
  if (unaff_r4 < 0) {
    do {
      *psVar2 = 0;
    } while (*psVar2 != 0);
  }
  else if (unaff_r4 < *(short *)(puVar1 + 0x18)) {
    do {
      *psVar2 = (short)unaff_r4;
    } while (*psVar2 != (short)unaff_r4);
  }
  else {
    *psVar2 = *(short *)(puVar1 + 0x18);
  }
  if ((int)((uint)(byte)puVar1[0x13] << 0x1f) < 0) {
    sub_08013C66();
  }
  return;
}


/* sub_08000478 @ 0x08000478 */

void sub_08000478(short param_1)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_03001068;
  do {
    (&DAT_03001576)[uVar1 * 0x34] = param_1;
  } while ((&DAT_03001576)[uVar1 * 0x34] != param_1);
  do {
    (&DAT_03001578)[uVar1 * 0x34] = param_1;
  } while ((&DAT_03001578)[uVar1 * 0x34] != param_1);
  if ((int)((uint)(byte)(&DAT_03001573)[uVar1 * 0x68] << 0x1f) < 0) {
    sub_08013C66();
  }
  return;
}


/* sub_0800047C @ 0x0800047C */

void sub_0800047C(int param_1,undefined4 param_2,short param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x14);
  bVar1 = *pbVar2;
  do {
    *(short *)(pbVar2 + (uint)bVar1 * 0x68 + 0x50e) = param_3;
  } while (*(short *)(pbVar2 + (uint)bVar1 * 0x68 + 0x50e) != param_3);
  do {
    *(short *)(pbVar2 + (uint)bVar1 * 0x68 + 0x510) = param_3;
  } while (*(short *)(pbVar2 + (uint)bVar1 * 0x68 + 0x510) != param_3);
  if ((int)((uint)pbVar2[(uint)bVar1 * 0x68 + 0x50b] << 0x1f) < 0) {
    sub_08013C66();
  }
  return;
}


/* sub_080004BA @ 0x080004BA */

void sub_080004BA(int *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (uint)DAT_03001068 * 0x68;
  iVar5 = *param_1;
  iVar4 = iVar5 + 1;
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar3] * 0x18] << 0x1e) < 0
     ) {
    uVar1 = *(ushort *)(&DAT_03001580 + iVar3);
    *param_1 = iVar4;
    param_1[iVar5 + 1] = (uint)uVar1;
  }
  else if (((&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar3] * 0x18] & 1) == 0) {
    sVar2 = (&DAT_0300157a)[(uint)DAT_03001068 * 0x34];
    *param_1 = iVar4;
    param_1[iVar5 + 1] = (int)sVar2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_0300157e + iVar3);
    *param_1 = iVar4;
    param_1[iVar5 + 1] = (uint)uVar1;
  }
  return;
}


/* sub_0800051A @ 0x0800051A */

void sub_0800051A(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)DAT_03001068;
  iVar3 = uVar2 * 0x68;
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  if ((int)(short)(&DAT_0300157c)[uVar2 * 0x34] < (int)param_1) {
    param_1 = (uint)(short)(&DAT_0300157c)[uVar2 * 0x34];
  }
  uVar1 = (ushort)param_1;
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar3] * 0x18] << 0x1e) < 0
     ) {
    do {
      *(ushort *)(&DAT_03001580 + iVar3) = uVar1;
    } while ((uint)*(ushort *)(&DAT_03001580 + iVar3) != (param_1 & 0xffff));
  }
  else if (((&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar3] * 0x18] & 1) == 0) {
    do {
      (&DAT_0300157a)[uVar2 * 0x34] = uVar1;
    } while ((&DAT_0300157a)[uVar2 * 0x34] != uVar1);
  }
  else {
    do {
      *(ushort *)(&DAT_0300157e + iVar3) = uVar1;
    } while ((uint)*(ushort *)(&DAT_0300157e + iVar3) != (param_1 & 0xffff));
  }
  return;
}


/* sub_0800058E @ 0x0800058E */

void sub_0800058E(short param_1)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_03001068;
  do {
    (&DAT_0300157a)[uVar1 * 0x34] = param_1;
  } while ((&DAT_0300157a)[uVar1 * 0x34] != param_1);
  do {
    (&DAT_0300157c)[uVar1 * 0x34] = param_1;
  } while ((&DAT_0300157c)[uVar1 * 0x34] != param_1);
  return;
}


/* sub_080005C4 @ 0x080005C4 */

void sub_080005C4(int param_1)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  DAT_0300155c = param_1;
  return;
}


/* sub_080005DC @ 0x080005DC */

void sub_080005DC(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0300197c;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_080005F0 @ 0x080005F0 */

void sub_080005F0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0300197d;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_08000604 @ 0x08000604 */

void sub_08000604(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0300197e;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_08000618 @ 0x08000618 */

void sub_08000618(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03001068;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_0800062C @ 0x0800062C */

void sub_0800062C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&gUIStringPtrs +
                  (uint)*(ushort *)
                         (&DAT_086b82ee +
                         (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18) * 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08000678 @ 0x08000678 */

void sub_08000678(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&gUIStringPtrs +
                  (uint)*(ushort *)
                         (&DAT_086b82f0 +
                         (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18) * 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_080006AC @ 0x080006AC */

void sub_080006AC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = *(int *)(&gUIStringPtrs +
                  (uint)*(ushort *)
                         (&DAT_086b82ee + (uint)(byte)(&DAT_03001574)[param_1[iVar1] * 0x68] * 0x18)
                  * 4);
  *param_1 = iVar1;
  param_1[iVar1] = iVar2;
  return;
}


/* sub_080006EC @ 0x080006EC */

void sub_080006EC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03002a60;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080006FE @ 0x080006FE */

void sub_080006FE(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Player_GetLevel(&DAT_03001560 + (uint)DAT_03001068 * 0x68);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_0800070E @ 0x0800070E */

void sub_0800070E(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_r4;
  
  iVar1 = Player_GetLevel(param_1 + 0x4f8);
  iVar2 = *unaff_r4;
  *unaff_r4 = iVar2 + 1;
  unaff_r4[iVar2 + 1] = iVar1;
  return;
}


/* sub_08000726 @ 0x08000726 */

void sub_08000726(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_0803FACC(param_1[iVar2]);
  param_1[iVar2] = iVar1;
  return;
}


/* sub_08000738 @ 0x08000738 */

void sub_08000738(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_0803FADE(param_1[iVar2] * 0x28f5d >> 8);
  param_1[iVar2] = iVar1;
  return;
}


/* sub_08000750 @ 0x08000750 */

void sub_08000750(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar3 = param_1[iVar1 + -1];
  iVar2 = *(int *)(&gUnknown_087B6EEC + ((uint)(iVar2 << 0x18) >> 0x16));
  *param_1 = iVar1 + -1;
  param_1[iVar1 + -1] = iVar3 * iVar2 >> 0x10;
  return;
}


/* sub_08000782 @ 0x08000782 */

void sub_08000782(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar2 = *(int *)(&gUnknown_087B6EEC + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x16));
  iVar3 = param_1[iVar1 + -1];
  *param_1 = iVar1 + -1;
  param_1[iVar1 + -1] = iVar3 * iVar2 >> 0x10;
  return;
}


/* sub_080007B6 @ 0x080007B6 */

void sub_080007B6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08004364(&DAT_03001068,param_1[iVar2]);
  param_1[iVar2] = iVar1;
  return;
}


/* sub_080007CC @ 0x080007CC */

void sub_080007CC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08004364(&DAT_03001068,param_1[iVar2]);
  param_1[iVar2] = 1 - iVar1;
  return;
}


/* sub_080007E6 @ 0x080007E6 */

void sub_080007E6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004380(&DAT_03001068,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_080007FE @ 0x080007FE */

void sub_080007FE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004396(&DAT_03001068,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_08000800 @ 0x08000800 */

void sub_08000800(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004396(&DAT_03001068,param_1[iVar1]);
  return;
}


/* sub_0800080C @ 0x0800080C */

void sub_0800080C(void)

{
  sub_08004396(&DAT_03001068);
  return;
}


/* sub_08000816 @ 0x08000816 */

void sub_08000816(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + param_1[iVar1] * 0xc,0x40,0);
  return;
}


/* sub_08000818 @ 0x08000818 */

void sub_08000818(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0803E378(iVar2 + 0x5c4,&gUnknown_083192A8 + param_1[iVar1] * 0xc,0x40,0);
  return;
}


/* sub_08000840 @ 0x08000840 */

void sub_08000840(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + param_1[iVar1 + -1] * 0xc,iVar2,0);
  return;
}


/* sub_08000872 @ 0x08000872 */

void sub_08000872(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0803E302(&DAT_03003e5c,&gUnknown_083192A8 + param_1[iVar1] * 0xc,&DAT_03003898,
               param_1[iVar1] * 2,param_4);
  return;
}


/* sub_08000874 @ 0x08000874 */

void sub_08000874(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0803E302(iVar2 + 0x5c4,&gUnknown_083192A8 + param_1[iVar1] * 0xc,iVar2,param_1[iVar1] * 2,
               param_4);
  return;
}


/* sub_08000898 @ 0x08000898 */

void sub_08000898(void)

{
  sub_0803E2EC(&DAT_03003e5c);
  return;
}


/* sub_0800089A @ 0x0800089A */

void sub_0800089A(int param_1)

{
  sub_0803E2EC(*(int *)(param_1 + 4) + 0x5c4);
  return;
}


/* sub_080008A8 @ 0x080008A8 */

void sub_080008A8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if ((DAT_030038a9 != '\x01') || (DAT_030038b0 != &gUnknown_083BB78C + param_1[iVar1] * 5)) {
    sub_0803F110();
  }
  return;
}


/* sub_080008AA @ 0x080008AA */

void sub_080008AA(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  if ((DAT_030038a9 != '\x01') || (DAT_030038b0 != &gUnknown_083BB78C + param_2[iVar1] * 5)) {
    sub_0803F110();
  }
  return;
}


/* sub_080008FC @ 0x080008FC */

void sub_080008FC(void)

{
  DAT_030038a9 = 0;
  return;
}


/* sub_08000906 @ 0x08000906 */

void sub_08000906(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080096AC(&DAT_030019a4,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_08000908 @ 0x08000908 */

void sub_08000908(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080096AC(&DAT_030019a4,param_1[iVar1]);
  return;
}


/* sub_0800091E @ 0x0800091E */

void sub_0800091E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08009692(&DAT_030019a4,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_08000936 @ 0x08000936 */

void sub_08000936(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_080096C4(&DAT_030019a4,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}


/* sub_08000952 @ 0x08000952 */

void sub_08000952(void)

{
  sub_080096C4();
  return;
}


/* sub_08000958 @ 0x08000958 */

void sub_08000958(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_08009728(&DAT_030019a4,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}


/* sub_0800097A @ 0x0800097A */

void sub_0800097A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_080096EA(&DAT_030019a4,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}


/* sub_0800099C @ 0x0800099C */

void sub_0800099C(int *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_18 = param_1[iVar1];
  sub_08009930(&local_18,DAT_03001a4c,1);
  sub_08009930(&local_18,DAT_03001a54,1);
  return;
}


/* sub_080009F6 @ 0x080009F6 */

void sub_080009F6(int *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_18 = param_1[iVar1];
  sub_08009930(&local_18,DAT_03001a4c,0);
  sub_08009930(&local_18,DAT_03001a54,0);
  return;
}


/* sub_08000A50 @ 0x08000A50 */

void sub_08000A50(int *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
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
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  sub_08009930(&local_14,DAT_03001a50,1);
  return;
}


/* sub_08000AA0 @ 0x08000AA0 */

void sub_08000AA0(int *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
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
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  sub_08009930(&local_14,DAT_03001a50,0);
  return;
}


/* sub_08000AF0 @ 0x08000AF0 */

void sub_08000AF0(void)

{
  sub_080046F4(&DAT_03001068);
  return;
}


/* sub_08000AF2 @ 0x08000AF2 */

void sub_08000AF2(int param_1)

{
  sub_080046F4(*(undefined4 *)(param_1 + 0x14));
  return;
}


/* sub_08000AFC @ 0x08000AFC */

void sub_08000AFC(void)

{
  sub_08004764(&DAT_03001068);
  return;
}


/* sub_08000AFE @ 0x08000AFE */

void sub_08000AFE(int param_1)

{
  sub_08004764(*(undefined4 *)(param_1 + 0x14));
  return;
}


/* sub_08000B08 @ 0x08000B08 */

void sub_08000B08(int *param_1)

{
  param_1[*param_1] = (uint)(byte)(&DAT_0300106a)[param_1[*param_1]];
  return;
}


/* sub_08000B0A @ 0x08000B0A */

void sub_08000B0A(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 * 4 + param_1);
  *puVar1 = (uint)(byte)(&DAT_0300106a)[*puVar1];
  return;
}


/* sub_08000B1C @ 0x08000B1C */

void sub_08000B1C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  if ((byte)(&DAT_0300106a)[iVar2] + 1 < 0x100) {
    (&DAT_0300106a)[iVar2] = (char)((byte)(&DAT_0300106a)[iVar2] + 1);
  }
  else {
    (&DAT_0300106a)[iVar2] = 0xff;
  }
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C83C;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = iVar2;
  }
  if (DAT_03001c34 != 0) {
    iVar3 = DAT_03001c34 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08000B80 @ 0x08000B80 */

void sub_08000B80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = param_1[iVar1 + -1];
  if ((int)((uint)(byte)(&DAT_0300106a)[iVar1] + iVar2) < 0x100) {
    (&DAT_0300106a)[iVar1] = (char)((uint)(byte)(&DAT_0300106a)[iVar1] + iVar2);
    return;
  }
  (&DAT_0300106a)[iVar1] = 0xff;
  return;
}


/* sub_08000BB2 @ 0x08000BB2 */

void sub_08000BB2(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_0300106a)[param_1[iVar1]] = (&DAT_0300106a)[param_1[iVar1]] + -1;
  return;
}


/* sub_08000BCC @ 0x08000BCC */

void sub_08000BCC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  (&DAT_0300106a)[param_1[iVar1 + -1]] = (&DAT_0300106a)[param_1[iVar1 + -1]] - (char)iVar2;
  return;
}


/* sub_08000BD8 @ 0x08000BD8 */

void sub_08000BD8(int *param_1,int param_2,char param_3)

{
  *param_1 = param_2 + -1;
  (&DAT_0300106a)[param_1[param_2]] = (&DAT_0300106a)[param_1[param_2]] - param_3;
  return;
}


/* sub_08000BF0 @ 0x08000BF0 */

void sub_08000BF0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8 [2];
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_8[0] = CONCAT22((short)iVar2,(short)param_1[iVar3]);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_08000158(param_1[iVar2]);
  uVar1 = sub_0801111C(0,uVar1,local_8);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_08000C36 @ 0x08000C36 */

void sub_08000C36(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08009108(&DAT_0300197c,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_08000C4E @ 0x08000C4E */

void sub_08000C4E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (param_1[iVar1] < 0) {
    iVar1 = sub_08011CCA(&DAT_03001c4c,7,-(param_1[iVar1] + 1),param_4,param_4);
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    param_1[iVar3 + 1] = iVar1;
  }
  else {
    uVar2 = sub_08000158();
    iVar1 = sub_08011CCA(&DAT_03001c4c,5,uVar2);
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    param_1[iVar3 + 1] = iVar1;
  }
  return;
}


/* sub_08000C9A @ 0x08000C9A */

void sub_08000C9A(void)

{
  sub_08019348(&DAT_03002bac);
  return;
}


/* sub_08000C9C @ 0x08000C9C */

void sub_08000C9C(int param_1)

{
  sub_08019348(*(undefined4 *)(param_1 + 0x1c));
  return;
}


/* sub_08000CA6 @ 0x08000CA6 */

void sub_08000CA6(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_080001C6(param_1[iVar2]);
  if ((DAT_03001008 == (undefined4 *)0x0) &&
     (DAT_03001008 = (undefined4 *)sub_0803D5B8(0x28), DAT_03001008 != (undefined4 *)0x0)) {
    *DAT_03001008 = &_0804DEEC;
    DAT_03001008[1] = 0;
  }
  piVar1 = DAT_03001008 + 1;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  piVar1[iVar3 + 1] = iVar2;
  return;
}


/* sub_08000CE8 @ 0x08000CE8 */

void sub_08000CE8(void)

{
  if (DAT_03001008 == 0) {
    sub_0801934E(&DAT_03002bac);
  }
  else {
    sub_0803D8A0();
    DAT_03002bac = 0;
    DAT_03001008 = 0;
  }
  return;
}


/* sub_08000D0A @ 0x08000D0A */

void sub_08000D0A(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C7D8;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_08000D62 @ 0x08000D62 */

void sub_08000D62(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *(char *)(puVar1 + 2) = (char)iVar3;
    *puVar1 = &_0804D818;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08000DB2 @ 0x08000DB2 */

void sub_08000DB2(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804E0E8;
    puVar1[1] = 0;
    *(char *)(puVar1 + 2) = (char)iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08000E1C @ 0x08000E1C */

void sub_08000E1C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C414;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_08000E74 @ 0x08000E74 */

void sub_08000E74(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B2B4;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08000EC0 @ 0x08000EC0 */

void sub_08000EC0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B2B4;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_08000F18 @ 0x08000F18 */

void sub_08000F18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar5 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar1 = param_1[iVar4 + -1];
  *param_1 = iVar4 + -3;
  iVar4 = param_1[iVar4 + -2];
  uVar2 = sub_080001C6(iVar1);
  puVar3 = (undefined4 *)sub_0803D5B8(0x20);
  iVar1 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_0804DCE0;
    puVar3[1] = 0;
    puVar3[5] = iVar5;
    puVar3[7] = uVar2;
  }
  iVar4 = sub_080001C6(iVar4);
  if (iVar4 != 0) {
    iVar1 = iVar4 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar3,iVar1);
  return;
}


/* sub_08000F78 @ 0x08000F78 */

void sub_08000F78(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar5 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar4 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar2 = param_1[iVar2 + -3];
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[5] = iVar3;
    *puVar1 = &_0804DCF4;
    puVar1[7] = iVar4;
    puVar1[8] = iVar5;
  }
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08000FDE @ 0x08000FDE */

void sub_08000FDE(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B918;
    puVar1[1] = 0;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_0800101E @ 0x0800101E */

void sub_0800101E(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  local_10 = param_1[iVar2 + -1];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_14 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  uVar1 = sub_0805082C(0,&local_14,0xf,iVar3);
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar1,iVar3);
  return;
}


/* sub_08001080 @ 0x08001080 */

void sub_08001080(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar5 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar4 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar2 = param_1[iVar2 + -3];
  puVar1 = (undefined4 *)sub_0803D5B8(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AE5C;
    puVar1[1] = 0;
    puVar1[6] = iVar4;
    puVar1[7] = iVar5;
    puVar1[0xf] = 0;
    puVar1[0xe] = iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001104 @ 0x08001104 */

void sub_08001104(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C428;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_0800115C @ 0x0800115C */

void sub_0800115C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar1 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar4 = param_1[iVar4 + -1];
  uVar2 = sub_080001C6(iVar1);
  puVar3 = (undefined4 *)sub_0803D5B8(0xc);
  iVar1 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_0804AE70;
    puVar3[1] = 0;
    puVar3[2] = uVar2;
  }
  iVar4 = sub_080001C6(iVar4);
  if (iVar4 != 0) {
    iVar1 = iVar4 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar3,iVar1);
  return;
}


/* sub_080011B0 @ 0x080011B0 */

void sub_080011B0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C43C;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_08001208 @ 0x08001208 */

void sub_08001208(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar5 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar4 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar2 = param_1[iVar2 + -3];
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AE84;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[5] = iVar4;
    puVar1[6] = iVar5;
    puVar1[8] = 0;
  }
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_0800126C @ 0x0800126C */

void sub_0800126C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AB58;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_080012B8 @ 0x080012B8 */

void sub_080012B8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C450;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08001304 @ 0x08001304 */

void sub_08001304(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar6 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar5 = param_1[iVar3 + -2];
  *param_1 = iVar3 + -4;
  iVar7 = param_1[iVar3 + -3];
  *param_1 = iVar3 + -5;
  iVar3 = param_1[iVar3 + -4];
  if (iVar6 < 2) {
    iVar6 = 2;
  }
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804C800;
    puVar1[2] = iVar7;
    puVar1[3] = iVar5;
    puVar1[4] = iVar4;
    puVar1[5] = iVar6;
    puVar1[7] = iVar6 >> 1;
    puVar1[6] = iVar6;
    uVar2 = __16__rt_sdiv(iVar6 >> 1,0x100);
    puVar1[8] = uVar2;
  }
  iVar3 = sub_080001C6(iVar3);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar3 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08001336 @ 0x08001336 */

void sub_08001336(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r5;
  undefined4 unaff_r6;
  int iVar4;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *param_1 = param_2 + -1;
  iVar4 = param_1[param_2];
  if (unaff_r5 < 2) {
    unaff_r5 = 2;
  }
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804C800;
    puVar1[2] = unaff_r6;
    puVar1[3] = in_stack_00000004;
    puVar1[4] = in_stack_00000008;
    puVar1[5] = unaff_r5;
    puVar1[7] = unaff_r5 >> 1;
    puVar1[6] = unaff_r5;
    uVar2 = __16__rt_sdiv(unaff_r5 >> 1,0x100);
    puVar1[8] = uVar2;
  }
  iVar4 = sub_080001C6(iVar4);
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = iVar4 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_080013B4 @ 0x080013B4 */

void sub_080013B4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AE9C;
    puVar1[1] = 0;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_080013F4 @ 0x080013F4 */

void sub_080013F4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B2C8;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08001440 @ 0x08001440 */

void sub_08001440(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DEA0;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_0800148C @ 0x0800148C */

void sub_0800148C(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  local_10 = param_1[iVar2 + -1];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_14 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  uVar1 = sub_0805082C(0,&local_14,2,iVar3);
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar1,iVar3);
  return;
}


/* sub_080014EE @ 0x080014EE */

void sub_080014EE(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DD1C;
    puVar1[1] = 0;
    *(char *)(puVar1 + 2) = (char)iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_0800154A @ 0x0800154A */

void sub_0800154A(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar3 = param_1[iVar3];
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar4 = param_1[iVar4];
  iVar5 = *param_1;
  *param_1 = iVar5 + -1;
  local_10 = CONCAT31(CONCAT21(CONCAT11((char)iVar2,(char)iVar3),(char)iVar4),(char)param_1[iVar5]);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  uVar1 = sub_0802B8F0(0,&local_10);
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar1,iVar3);
  return;
}


/* sub_080015BA @ 0x080015BA */

void sub_080015BA(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DEC8;
    puVar1[1] = 0;
    *(char *)(puVar1 + 2) = (char)iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08001606 @ 0x08001606 */

void sub_08001606(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C814;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08001670 @ 0x08001670 */

void sub_08001670(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar5 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar3 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar6 = param_1[iVar2 + -3];
  *param_1 = iVar2 + -5;
  iVar2 = param_1[iVar2 + -4];
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804BF14;
    puVar1[3] = iVar3;
    puVar1[4] = iVar4;
    puVar1[5] = iVar5;
    puVar1[2] = iVar6;
  }
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_080016E6 @ 0x080016E6 */

void sub_080016E6(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DD30;
    puVar1[1] = 0;
    *(char *)(puVar1 + 2) = (char)iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08001732 @ 0x08001732 */

void sub_08001732(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C828;
    puVar1[1] = 0;
    puVar1[3] = iVar3;
    puVar1[2] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_0800178A @ 0x0800178A */

void sub_0800178A(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C83C;
    puVar1[1] = 0;
    puVar1[3] = iVar3;
    puVar1[2] = 0;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_080017D8 @ 0x080017D8 */

void sub_080017D8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar5 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar7 = param_1[iVar2 + -3];
  *param_1 = iVar2 + -5;
  iVar8 = param_1[iVar2 + -4];
  *param_1 = iVar2 + -6;
  iVar6 = param_1[iVar2 + -5];
  *param_1 = iVar2 + -7;
  iVar2 = param_1[iVar2 + -6];
  puVar1 = (undefined4 *)sub_0803D5B8(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804E268;
    *(char *)(puVar1 + 2) = (char)iVar6;
    puVar1[4] = iVar7;
    puVar1[3] = iVar8;
    puVar1[5] = (uint)(iVar5 == 0);
    puVar1[6] = iVar4;
    puVar1[7] = iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001884 @ 0x08001884 */

void sub_08001884(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C850;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = 0;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_080018D2 @ 0x080018D2 */

void sub_080018D2(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DD44;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08001940 @ 0x08001940 */

void sub_08001940(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DD58;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_08001998 @ 0x08001998 */

void sub_08001998(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B940;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_080019F0 @ 0x080019F0 */

void sub_080019F0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C864;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}


/* sub_08001A48 @ 0x08001A48 */

void sub_08001A48(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar1 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar3 = param_1[iVar3 + -1];
  uVar2 = sub_080001C6(iVar1);
  uVar2 = sub_08015AF0(0,uVar2,&local_14);
  iVar1 = sub_080001C6(iVar3);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = iVar1 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar2,iVar3);
  return;
}


/* sub_08001AB0 @ 0x08001AB0 */

void sub_08001AB0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_10 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_14 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  uVar1 = sub_0805082C(0,&local_14,1,100);
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar1,iVar3);
  return;
}


/* sub_08001B0A @ 0x08001B0A */

void sub_08001B0A(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  local_10 = param_1[iVar2 + -1];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_14 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  uVar1 = sub_0805082C(0,&local_14,1,iVar3);
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar1,iVar3);
  return;
}


/* sub_08001B6C @ 0x08001B6C */

void sub_08001B6C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804E0FC;
    puVar1[1] = 0;
    puVar1[4] = (uint)(iVar3 != 0);
    puVar1[3] = 0;
  }
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}


/* sub_08001BC2 @ 0x08001BC2 */

void sub_08001BC2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2],param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DEB4;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001C1C @ 0x08001C1C */

void sub_08001C1C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2],param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DEB4;
    puVar1[1] = 0;
    puVar1[2] = 1;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001C5E @ 0x08001C5E */

void sub_08001C5E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar5 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2 + -2],param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C43C;
    puVar1[1] = 0;
    puVar1[2] = iVar4;
    puVar1[3] = iVar5;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001CB0 @ 0x08001CB0 */

void sub_08001CB0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar6 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar5 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2 + -3],param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x34);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B92C;
    puVar1[1] = 0;
    puVar1[2] = iVar5;
    puVar1[3] = iVar6;
    puVar1[4] = iVar4;
    puVar1[0xc] = 0;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001D12 @ 0x08001D12 */

void sub_08001D12(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar5 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2 + -2],param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x30);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DD08;
    puVar1[1] = 0;
    puVar1[2] = iVar4;
    puVar1[3] = iVar5;
    puVar1[0xb] = 0;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001D66 @ 0x08001D66 */

void sub_08001D66(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AB58;
    puVar1[1] = 0;
    puVar1[2] = iVar4;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001DAE @ 0x08001DAE */

void sub_08001DAE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar5 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2 + -2],param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CD60;
    puVar1[1] = 0;
    puVar1[2] = iVar4;
    puVar1[3] = iVar5;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}


/* sub_08001E00 @ 0x08001E00 */

void sub_08001E00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar1 + -1]);
  *(int *)(iVar1 + 0x18) = iVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 0x30) + iVar2;
  return;
}


/* sub_08001E2C @ 0x08001E2C */

void sub_08001E2C(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar4 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  uVar1 = sub_080001C6(param_1[iVar3 + -1]);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = iVar4;
    *puVar2 = &_0804DCCC;
    puVar2[3] = uVar1;
  }
  sub_0801936A(&DAT_03002bac,puVar2,&DAT_03002bd8);
  return;
}


/* sub_08001E6E @ 0x08001E6E */

void sub_08001E6E(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  local_8 = param_1[iVar2 + -1];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  uVar1 = sub_08021174(0,&local_c,iVar3);
  sub_0801936A(&DAT_03002bac,uVar1,&DAT_03002bd8);
  return;
}


/* sub_08001ED0 @ 0x08001ED0 */

void sub_08001ED0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = iVar2;
    *puVar1 = &_0804B2A0;
  }
  sub_0801936A(&DAT_03002bac,puVar1,&DAT_03002bd8);
  return;
}


/* sub_08001F00 @ 0x08001F00 */

void sub_08001F00(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804C7EC;
    puVar1[2] = iVar2;
  }
  sub_0801936A(&DAT_03002bac,puVar1,&DAT_03002bd8);
  return;
}


/* sub_08001F30 @ 0x08001F30 */

void sub_08001F30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804E0D4;
    puVar1[2] = iVar2;
  }
  sub_0801936A(&DAT_03002bac,puVar1,&DAT_03002bd8);
  return;
}


/* sub_08001F60 @ 0x08001F60 */

void sub_08001F60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804D480;
    puVar1[2] = iVar2;
    puVar1[3] = iVar3;
  }
  sub_0801936A(&DAT_03002bac,puVar1,&DAT_03002bd8);
  return;
}


/* sub_08001F9C @ 0x08001F9C */

void sub_08001F9C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804D494;
    puVar1[2] = iVar2;
    puVar1[3] = iVar3;
    puVar1[4] = iVar4;
  }
  sub_0801936A(&DAT_03002bac,puVar1,&DAT_03002bd8);
  return;
}


/* sub_08001FE4 @ 0x08001FE4 */

void sub_08001FE4(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  local_8 = param_1[iVar1 + -1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  sub_08015B68(0,&local_c,iVar2);
  sub_0803D8A0();
  return;
}


/* sub_0800201E @ 0x0800201E */

void sub_0800201E(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  uVar1 = sub_080001C6(param_1[iVar2 + -1]);
  sub_0800FDFA(&local_20,uVar1);
  iVar2 = local_1c + local_14 >> 1;
  iVar3 = local_20 + local_18 >> 1;
  local_10 = iVar3 + -0x78;
  local_c = iVar2 + -0x50;
  sub_08015B68(0,&local_10,iVar4,local_14,iVar3,iVar2);
  sub_0803D8A0();
  return;
}


/* sub_0800207E @ 0x0800207E */

void sub_0800207E(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  uVar1 = sub_080001C6(param_1[iVar3]);
  if (DAT_03001a34 == 0) {
    puVar2 = (undefined4 *)sub_0803D5B8(8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804D300;
      puVar2[1] = uVar1;
    }
    sub_08021094(&DAT_03002bd8,puVar2);
  }
  else {
    puVar2 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804E324;
      puVar2[1] = uVar1;
      puVar2[2] = 0xffffffff;
    }
    sub_08021094(&DAT_03002bd8,puVar2);
  }
  return;
}


/* sub_080020D8 @ 0x080020D8 */

void sub_080020D8(void)

{
  sub_080210B6(&DAT_03002bd8);
  return;
}


/* sub_080020DA @ 0x080020DA */

void sub_080020DA(int param_1)

{
  sub_080210B6(*(undefined4 *)(param_1 + 0x20));
  return;
}


/* sub_080020E4 @ 0x080020E4 */

void sub_080020E4(void)

{
  DAT_0300100c = 1;
  return;
}


/* sub_080020EC @ 0x080020EC */

void sub_080020EC(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_18 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_1c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar3 = param_1[iVar1 + -1];
  *param_1 = iVar1 + -3;
  iVar1 = param_1[iVar1 + -2];
  if (DAT_0300100c != 0) {
    sub_08009196(&DAT_0300197c);
    DAT_0300100c = 0;
  }
  Scene_Load(&DAT_0300197c,iVar1,iVar3,iVar2,&local_1c,1,0);
  return;
}


