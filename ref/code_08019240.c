/* Ghidra reference decompilation of code_08019240 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08019240 @ 0x08019240 */

undefined4 sub_08019240(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return 1;
}


/* sub_08019268 @ 0x08019268 */

undefined4 * sub_08019268(void)

{
  return &DAT_03002ba8;
}


/* sub_0801926C @ 0x0801926C */

undefined4 sub_0801926C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return 1;
}


/* sub_08019284 @ 0x08019284 */

void sub_08019284(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(*(undefined4 **)(&gUnknown_0870F514 + *(int *)(param_1 + 0xc) * 8),param_2,
                **(undefined4 **)(&gUnknown_0870F514 + *(int *)(param_1 + 0xc) * 8),param_4,param_4)
  ;
  return;
}


/* sub_08019298 @ 0x08019298 */

void sub_08019298(void)

{
  __call_via_r3();
  return;
}


/* sub_080192B0 @ 0x080192B0 */

void sub_080192B0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_080192BA @ 0x080192BA */

void sub_080192BA(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  while (iVar1 != 0) {
    param_2 = (int *)(*param_2 + 4);
    iVar1 = *param_2;
  }
  *param_2 = param_1;
  return;
}


/* sub_080192CE @ 0x080192CE */

void sub_080192CE(int *param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_3 = 1;
  *param_4 = 0;
  param_4[1] = 0;
  iVar4 = *param_2 - *param_1;
  iVar1 = param_2[1] - param_1[1];
  if (iVar4 != 0 || iVar1 != 0) {
    iVar2 = iVar4 * iVar4 + iVar1 * iVar1;
    sub_08046BFC(iVar2,iVar2 >> 0x1f,0x10);
    iVar2 = sub_0803FB1E();
    iVar2 = __16__rt_sdiv(param_5,iVar2 * 100);
    iVar2 = (iVar2 >> 8) + 1;
    *param_3 = iVar2;
    uVar3 = __16__rt_sdiv(iVar2,iVar4 * 0x100);
    *param_4 = uVar3;
    uVar3 = __16__rt_sdiv(*param_3,iVar1 * 0x100);
    param_4[1] = uVar3;
  }
  return;
}


/* sub_08019348 @ 0x08019348 */

void sub_08019348(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}


/* sub_0801934E @ 0x0801934E */

void sub_0801934E(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C0C4;
  }
  sub_0803D8A0();
  *param_1 = 0;
  return;
}


/* sub_0801936A @ 0x0801936A */

void sub_0801936A(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 == (int *)0x0) {
    if (param_2 != (int *)0x0) {
      __call_via_r2(param_2,1,*(int *)*param_2 + *param_2,param_4,param_4);
    }
  }
  else {
    iVar2 = *param_3;
    while (iVar2 != 0) {
      param_3 = (int *)(*param_3 + 4);
      iVar2 = *param_3;
    }
    *param_3 = (int)param_2;
    if (*param_1 == 0) {
      puVar1 = (undefined4 *)sub_0803D5B8(4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804C0C4;
      }
      sub_0803D8A0();
    }
  }
  return;
}


/* sub_080193AE @ 0x080193AE */

undefined4 sub_080193AE(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0xc) {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    __call_via_r2(piVar1,param_1,*(int *)(*piVar1 + 8) + *piVar1);
    iVar2 = *(int *)*param_1;
    iVar2 = __call_via_r2((int *)*param_1,param_1,*(int *)(iVar2 + 0xc) + iVar2);
    if (iVar2 != 0) {
      piVar1 = (int *)*param_1;
      if ((piVar1[1] == 0) &&
         (iVar2 = __call_via_r1(piVar1,*(int *)(*piVar1 + 0x10) + *piVar1), iVar2 != 0)) {
        return 1;
      }
      sub_08019444(&DAT_03002bac,*param_1,param_1);
    }
    return 2;
  }
  if (param_2 == 0xd) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,param_1,*(int *)(*piVar1 + 4) + *piVar1);
    }
    return 1;
  }
  if (param_2 == 0xe) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
    }
    *param_1 = 0;
    return 1;
  }
  return 0;
}


/* sub_08019444 @ 0x08019444 */

void sub_08019444(undefined4 param_1,int *param_2,int *param_3)

{
  *param_3 = param_2[1];
  param_2[1] = 0;
  if (param_2 != (int *)0x0) {
    __call_via_r2(param_2,1,*(int *)*param_2 + *param_2);
  }
  sub_080193AE(param_3,0xd);
  return;
}


/* sub_08019474 @ 0x08019474 */

void sub_08019474(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_2 + 4) + 0x1c) = *(undefined4 *)(param_1 + 8);
  return;
}


/* sub_0801947C @ 0x0801947C */

void sub_0801947C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)(iVar1 + 0x24);
  iVar3 = *(int *)(iVar1 + 0x30);
  iVar4 = *(int *)(iVar1 + 0x2c) - *piVar2;
  iVar5 = *(int *)(iVar1 + 0x28);
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0x18) = iVar3 - iVar5;
  iVar3 = *piVar2;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + 0x28) << 8;
  *(int *)(param_1 + 0x24) = iVar3 << 8;
  sub_080192CE(piVar2,param_1 + 8,param_1 + 0x2c,param_1 + 0x1c,*(undefined4 *)(param_1 + 0x10),
               iVar4);
  return;
}


/* sub_080194C6 @ 0x080194C6 */

void sub_080194C6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 8) << 8;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0xc) << 8;
  }
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(iVar1 + 0x24) = *(int *)(param_1 + 0x24) >> 8;
  *(int *)(iVar1 + 0x28) = iVar2 >> 8;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x28) + *(int *)(param_1 + 0x18);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x24) + iVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x18);
  return;
}


/* sub_0801952C @ 0x0801952C */

undefined4 * sub_0801952C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x44), param_1 != (undefined4 *)0x0)) {
    iVar1 = sub_0803FACC(0x1000);
    sub_0802A81C(param_1,param_2,&gUnknown_08712FDC,4,iVar1 + 0x1000,0x400,param_3);
    *param_1 = &_0804A2C0;
  }
  return param_1;
}


/* sub_0801957C @ 0x0801957C */

undefined4 sub_0801957C(void)

{
  if (((DAT_03003304 & 1) == 0) && (-1 < (int)((uint)DAT_03003304 << 0x1e))) {
    return 0;
  }
  return 1;
}


/* sub_08019594 @ 0x08019594 */

undefined4 sub_08019594(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_080195A8 @ 0x080195A8 */

undefined4 * sub_080195A8(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char extraout_r1;
  char extraout_r1_00;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x200;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x200);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804CE28;
    param_1[4] = param_2;
    *(undefined1 *)(param_1 + 5) = 0xff;
    *(undefined1 *)(param_1 + 2) = 0x10;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0xf8;
    *(undefined1 *)((int)param_1 + 0x17) = 1;
    sub_08053034(param_3 * 0x35);
    *(char *)((int)param_1 + 0x15) = extraout_r1;
    sub_08053034(param_4 * 0x35);
    *(char *)((int)param_1 + 0x16) = extraout_r1_00 - extraout_r1;
  }
  return param_1;
}


/* sub_08019628 @ 0x08019628 */

void sub_08019628(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x17)) * 0x1000000;
  iVar2 = iVar1 >> 0x18;
  *(char *)(param_1 + 0x18) = (char)((uint)iVar1 >> 0x18);
  if (iVar2 < -8) {
    sub_08011944(&DAT_03001c4c,param_1,0xfffffff8,param_4,param_4);
  }
  else if (8 < iVar2) {
    *(undefined1 *)(param_1 + 0x18) = 8;
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}


/* sub_08019658 @ 0x08019658 */

undefined4 sub_08019658(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_214 [512];
  
  puVar1 = (uint *)*param_2;
  *puVar1 = 0x40a06000;
  *puVar1 = *(byte *)(param_1 + 0x18) | 0x40a06000;
  uVar4 = (puVar1[1] & 0xfffff3ff) + 0x400;
  puVar1[1] = uVar4;
  puVar1[1] = uVar4 & 0xfffffc00 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[2] = 0x40c06000;
  puVar1[2] = *(byte *)(param_1 + 0x18) | 0x40c06000;
  uVar4 = (puVar1[3] & 0xfffff3ff) + 0x400;
  puVar1[3] = uVar4;
  puVar1[3] = uVar4 & 0xfffffc00 | *(ushort *)(param_1 + 0xc) + 8 & 0x3ff;
  *param_2 = puVar1 + 4;
  uVar4 = (uint)*(byte *)(param_1 + 0x15);
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    iVar3 = __call_via_r2(piVar2,*(undefined1 *)(param_1 + 0x16),*(int *)(*piVar2 + 100) + *piVar2);
    uVar4 = iVar3 + uVar4;
  }
  if (*(byte *)(param_1 + 0x14) != uVar4) {
    *(char *)(param_1 + 0x14) = (char)uVar4;
    sub_08049138((int)auStack_214,0x87196e4,0x200);
    for (; (int)uVar4 < 0x35; uVar4 = uVar4 + 1) {
      iVar3 = uVar4 * 0x10;
      auStack_214[*(int *)(&gUnknown_087198E4 + iVar3)] = 1;
      auStack_214[*(int *)(&DAT_087198e8 + iVar3)] = 1;
      auStack_214[*(int *)(&DAT_087198ec + iVar3)] = 1;
      auStack_214[*(int *)(&DAT_087198f0 + iVar3)] = 1;
    }
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),(int)auStack_214,
                 0x200);
  }
  return 0;
}


/* sub_0801971E @ 0x0801971E */

undefined4 sub_0801971E(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 0x12) {
    if (param_1[4] == param_3) {
      sub_08011944(&DAT_03001c4c,param_1,param_3,0x12,param_4);
    }
    return 0;
  }
  if (param_2 < 0x13) {
    if (param_2 == 0xb) {
      *(undefined1 *)(param_1 + 5) = 0xff;
      return 0;
    }
    if (param_2 == 0xc) {
      __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
      return 0;
    }
    if (param_2 == 0x11) {
      if (param_1[4] == param_3) {
        param_1[4] = 0;
      }
      return 0;
    }
  }
  else {
    if (param_2 == 0x13) {
      *(undefined1 *)((int)param_1 + 0x17) = 0xff;
      *(char *)((int)param_1 + 0x15) = (char)param_1[5];
      param_1[4] = 0;
      return 1;
    }
    if (param_2 == 0x20) {
      param_1[4] = param_3;
      return 1;
    }
  }
  return 0;
}


/* sub_0801978C @ 0x0801978C */

undefined4 sub_0801978C(undefined4 param_1,int param_2)

{
  if (3 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_080197B4 @ 0x080197B4 */

undefined4 * sub_080197B4(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(100), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,param_3);
    *param_1 = &_0804B454;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = &gUnknown_0871370C + (uint)*(byte *)(param_1 + 4) * 0x30;
    param_1[6] = &gUnknown_0871370C + (uint)*(byte *)(param_1 + 4) * 0x30;
    iVar1 = (uint)*(byte *)(param_1 + 4) * 8;
    param_1[0x10] = param_4 * *(int *)(&gUnknown_08719C40 + iVar1);
    param_1[0x11] = param_4 * *(int *)(&DAT_08719c44 + iVar1);
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    sub_08019B4E(param_1);
    iVar1 = sub_0803FACC(2);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar1 + 0x14) * 0xc,0x40,0,iVar2);
  }
  return param_1;
}


/* sub_0801984E @ 0x0801984E */

void sub_0801984E(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined **)(param_1 + 0x18) = &gUnknown_087137CC;
  return;
}


/* sub_08019858 @ 0x08019858 */

void sub_08019858(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0xff < iVar1) {
    uVar2 = sub_080197B4(0,param_1,param_2,param_3,param_4);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_08019888 @ 0x08019888 */

void sub_08019888(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_1c = param_1;
  iStack_18 = param_2;
  if (*(int *)(param_1 + 0x54) != 0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      if (*(int *)(param_1 + 0x60) != 0) {
        local_24 = *(int *)(param_1 + 0x20) >> 8;
        local_20 = *(int *)(param_1 + 0x24) >> 8;
        uVar3 = *(undefined4 *)(param_1 + 0x60);
        iVar1 = sub_080116FC(&DAT_03001c4c);
        if (0xff < iVar1) {
          uVar3 = sub_080197B4(0,&local_24,uVar3,2);
          sub_0801191A(&DAT_03001c4c,uVar3);
        }
      }
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0x10;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined **)(param_1 + 0x18) = &gUnknown_087137CC;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
    iVar1 = *(int *)(param_1 + 0x48) + 1;
    iVar2 = iVar1 >> 3;
    *(int *)(param_1 + 0x48) = iVar1;
    if (3 < iVar2) {
      iVar2 = 2 - ((iVar2 << 0x1f) >> 0x1f);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) + iVar2 * 0xc;
    sub_08019B4E(param_1);
    iVar1 = sub_08019B7C(param_1);
    if (iVar1 == 0) {
      sub_08011944(&DAT_03001c4c,param_1);
    }
    else {
      iVar1 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0x10;
        *(undefined **)(param_1 + 0x18) = &gUnknown_087137CC;
      }
      else if ((iStack_18 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        uStack_30 = *(undefined4 *)(param_1 + 0x1c);
        uStack_3c = *(undefined1 *)(param_1 + 0x10);
        puStack_34 = &gUnknown_086B80A8;
        uStack_38 = 0x400;
        uStack_4c = *(undefined4 *)(param_1 + 0x28);
        uStack_48 = *(undefined4 *)(param_1 + 0x2c);
        uStack_44 = *(undefined4 *)(param_1 + 0x30);
        uStack_40 = *(undefined4 *)(param_1 + 0x34);
        auStack_50[0] = *(undefined1 *)(param_1 + 0x11);
        if ((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
          *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x1cc) = 0;
        }
        local_20 = param_1;
        iVar1 = sub_08011C70(&DAT_03001c4c,0,auStack_50);
        if (iVar1 != 0) {
          iVar1 = sub_0803FACC(2);
          sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar1 + 0x30) * 0xc,0x40,0);
          *(undefined4 *)(param_1 + 0x54) = 1;
        }
        if ((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
          *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x1cc) = 1;
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) + -1;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      sub_08011944(&DAT_03001c4c,param_1);
    }
  }
  return;
}


/* sub_080199F6 @ 0x080199F6 */

undefined4 sub_080199F6(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_18;
  int iStack_14;
  
  uVar3 = DAT_03001c34;
  if (param_2 != 0) {
    if (param_2 == 0x1d) {
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(int *)(param_1 + 0x60) = param_3;
      return 1;
    }
    if (param_2 == 0x1e) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
      *(int *)(param_1 + 0x60) = param_3;
      return 1;
    }
    uVar3 = sub_08019CC4(param_1);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      return 0;
    }
    cVar1 = **(char **)(param_3 + 0x1c);
    if ((((cVar1 == '\x01') && (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
        (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
       ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34) &&
        (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))) {
      if ((*(char **)(param_3 + 0x1c))[1] == '\r') {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0x10;
      *(undefined **)(param_1 + 0x18) = &gUnknown_087137CC;
      return 1;
    }
    if (((cVar1 == '\0') && (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
       ((*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc) &&
        ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34) &&
         (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))))) {
      iStack_18 = *(int *)(param_1 + 0x20) >> 8;
      iStack_14 = *(int *)(param_1 + 0x24) >> 8;
      iVar2 = sub_080116FC(&DAT_03001c4c);
      if (0xff < iVar2) {
        uVar3 = sub_080197B4(0,&iStack_18,uVar3,2);
        sub_0801191A(&DAT_03001c4c,uVar3);
      }
      sub_08011944(&DAT_03001c4c,param_1);
      return 1;
    }
  }
  return 0;
}


/* sub_08019B04 @ 0x08019B04 */

undefined4 * sub_08019B04(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  *param_1 = &_08049680;
  *(short *)((int)param_1 + 0xe) = (short)param_2;
  iVar1 = sub_0801124C(&DAT_03001c4c);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,param_2);
    iVar1 = sub_0801124C(&DAT_03001c4c,param_2);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804BB1C;
  param_1[5] = 0;
  param_1[7] = param_3;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 0x10);
    *(char *)((int)param_1 + 0x11) = (char)*(undefined4 *)(param_3 + 0x1d0);
  }
  return param_1;
}


/* sub_08019B4E @ 0x08019B4E */

void sub_08019B4E(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  iVar4 = (*(int *)(param_1 + 0x20) >> 8) - (int)*pcVar2;
  *(int *)(param_1 + 0x28) = iVar4;
  iVar3 = *(int *)(param_1 + 0x24) >> 8;
  iVar5 = iVar3 - pcVar2[1];
  *(int *)(param_1 + 0x2c) = iVar5;
  bVar1 = pcVar2[2];
  *(uint *)(param_1 + 0x34) = iVar5 + (uint)(byte)pcVar2[3];
  *(int *)(param_1 + 4) = iVar3;
  *(uint *)(param_1 + 0x30) = iVar4 + (uint)bVar1;
  return;
}


/* sub_08019B7C @ 0x08019B7C */

undefined4 sub_08019B7C(int param_1)

{
  char cVar1;
  
  if (DAT_03002c04 != 0) {
    return 1;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x2c) < DAT_030019c8) {
      return 1;
    }
    return 0;
  }
  if (cVar1 == '\x01') {
    if (DAT_030019c0 < *(int *)(param_1 + 0x34)) {
      return 1;
    }
    return 0;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      return 0;
    }
    if (*(int *)(param_1 + 0x28) < DAT_030019c4) {
      return 1;
    }
    return 0;
  }
  if (DAT_030019bc < *(int *)(param_1 + 0x30)) {
    return 1;
  }
  return 0;
}


/* sub_08019BE4 @ 0x08019BE4 */

void sub_08019BE4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_08019BF4 @ 0x08019BF4 */

undefined4 sub_08019BF4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x28) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x30))) &&
      (*(int *)(param_1 + 0x2c) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x34))) {
    iVar2 = *(int *)(param_1 + 0x28) - DAT_030019bc;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x2c) - DAT_030019c0;
    *(int *)(param_1 + 0x38) = iVar2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08019C44 @ 0x08019C44 */

bool sub_08019C44(int param_1,int *param_2)

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
  uVar2 = *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffffc00;
  puVar1[1] = uVar2 | uVar3 & 0xfffff000 | (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  return *(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14);
}


/* sub_08019CA6 @ 0x08019CA6 */

void sub_08019CA6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1;
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
               (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
  return;
}


/* sub_08019CC4 @ 0x08019CC4 */

undefined4 sub_08019CC4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 0xb) {
    param_1[5] = 0;
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1,0xc,param_4);
  }
  else if (((param_2 == 0x11) || (param_2 == 0x12)) && (param_1[7] == param_3)) {
    param_1[7] = 0;
  }
  return 0;
}


/* sub_08019D00 @ 0x08019D00 */

undefined4 sub_08019D00(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_08019D24 @ 0x08019D24 */

undefined4 sub_08019D24(void)

{
  return 0;
}


/* sub_08019D28 @ 0x08019D28 */

void sub_08019D28(void)

{
  return;
}


/* sub_08019D2A @ 0x08019D2A */

undefined4 sub_08019D2A(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,200,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019D2C @ 0x08019D2C */

undefined4 sub_08019D2C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,200,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019D42 @ 0x08019D42 */

void sub_08019D42(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804DE7C;
    puVar2[3] = (uint)bVar1;
    puVar2[1] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_08019D78 @ 0x08019D78 */

undefined4 sub_08019D78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03003284 == '\0') {
    if (DAT_03001988 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = sub_080134B8(param_1,(&gUnknown_0871DA98)
                                   [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)]
                           ,&gUnknown_0871DA98,param_4,param_4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08019D7A @ 0x08019D7A */

undefined4 sub_08019D7A(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*param_2 == '\0') {
    if (DAT_03001988 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = sub_080134B8(param_1,(&gUnknown_0871DA98)
                                   [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)]
                           ,&gUnknown_0871DA98,param_4,param_4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08019DA8 @ 0x08019DA8 */

void sub_08019DA8(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D05C;
    puVar2[2] = (uint)bVar1;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_08019DE0 @ 0x08019DE0 */

undefined4 sub_08019DE0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,0xc,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019DE2 @ 0x08019DE2 */

undefined4 sub_08019DE2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,0xc,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019DF8 @ 0x08019DF8 */

void sub_08019DF8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08013598(param_1,2,param_3,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804E244;
    puVar1[1] = 0;
    puVar1[3] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_08019E2A @ 0x08019E2A */

undefined4 sub_08019E2A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(undefined4 *)
                                  (&DAT_0871dab0 +
                                  (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 +
                                                 0x2e) * 4),&DAT_0871dab0,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019E2C @ 0x08019E2C */

undefined4 sub_08019E2C(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(undefined4 *)
                                  (&DAT_0871dab0 +
                                  (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 +
                                                 0x2e) * 4),&DAT_0871dab0,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019E52 @ 0x08019E52 */

void sub_08019E52(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  
  sub_08013598(param_1,*(undefined4 *)
                        (&DAT_0871dabc +
                        (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e) * 4),
               param_3,param_4,param_4);
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804DF18;
    puVar2[2] = (uint)bVar1;
  }
  sub_0800ECDA(param_2,3);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_08019E9E @ 0x08019E9E */

undefined4 sub_08019E9E(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,300,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019EA0 @ 0x08019EA0 */

undefined4 sub_08019EA0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,300,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019EB8 @ 0x08019EB8 */

void sub_08019EB8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08013598(param_1,300,param_3,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D9B0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_08019EEE @ 0x08019EEE */

undefined4 sub_08019EEE(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871da9b)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871da9b,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019EF0 @ 0x08019EF0 */

undefined4 sub_08019EF0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871da9b)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871da9b,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019F14 @ 0x08019F14 */

void sub_08019F14(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804E2D8;
    puVar2[3] = (uint)bVar1;
    puVar2[1] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_08019F4A @ 0x08019F4A */

undefined4 sub_08019F4A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(short *)(param_1 + 0x1c) * 0xccd + 0xffff >> 0x10,0xffff,0xccd,
                         param_4);
  }
  return uVar1;
}


/* sub_08019F4C @ 0x08019F4C */

undefined4 sub_08019F4C(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(short *)(param_1 + 0x1c) * 0xccd + 0xffff >> 0x10,0xffff,0xccd,
                         param_4);
  }
  return uVar1;
}


/* sub_08019F72 @ 0x08019F72 */

void sub_08019F72(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  
  sub_08013598(param_1,*(short *)(param_1 + 0x1c) * 0xccd + 0xffff >> 0x10,param_3,0xccd,param_4);
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804DC14;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[2] = (uint)bVar1;
  }
  sub_0800ECDA(param_2,3);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_08019FEC @ 0x08019FEC */

undefined4 sub_08019FEC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(undefined4 *)
                                  (&DAT_0871dac8 +
                                  (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 +
                                                 0x2e) * 4),&DAT_0871dac8,param_4,param_4);
  }
  return uVar1;
}


/* sub_08019FEE @ 0x08019FEE */

undefined4 sub_08019FEE(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(undefined4 *)
                                  (&DAT_0871dac8 +
                                  (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 +
                                                 0x2e) * 4),&DAT_0871dac8,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A014 @ 0x0801A014 */

void sub_0801A014(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  
  sub_08013598(param_1,*(undefined4 *)
                        (&DAT_0871dad4 +
                        (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e) * 4),
               param_3,param_4,param_4);
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804DC38;
    puVar2[1] = (uint)bVar1;
    puVar2[3] = 0;
  }
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_0801A064 @ 0x0801A064 */

undefined4 sub_0801A064(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,0x15e,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A066 @ 0x0801A066 */

undefined4 sub_0801A066(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,0x15e,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A07E @ 0x0801A07E */

void sub_0801A07E(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DC5C;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
  }
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_0801A0AA @ 0x0801A0AA */

undefined4 sub_0801A0AA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871da9e)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871da9e,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A0AC @ 0x0801A0AC */

undefined4 sub_0801A0AC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871da9e)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871da9e,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A0D0 @ 0x0801A0D0 */

void sub_0801A0D0(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D9D4;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = (uint)bVar1;
  }
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_0801A108 @ 0x0801A108 */

undefined4 sub_0801A108(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871daa1)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871daa1,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A10A @ 0x0801A10A */

undefined4 sub_0801A10A(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871daa1)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871daa1,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A12E @ 0x0801A12E */

void sub_0801A12E(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804E088;
    puVar2[5] = (uint)bVar1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_0801A168 @ 0x0801A168 */

undefined4 sub_0801A168(int param_1)

{
  if (DAT_03002c04 != 0) {
    return 0;
  }
  if (DAT_03001988 == 0) {
    return 0;
  }
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    return 0;
  }
  return 1;
}


/* sub_0801A19E @ 0x0801A19E */

void sub_0801A19E(int param_1)

{
  undefined1 auStack_80 [108];
  uint local_14 [5];
  
  local_14[0] = (uint)(byte)(&DAT_086b82f8)[(uint)*(byte *)(param_1 + 0x14) * 0x18];
  sub_08004098(auStack_80,&gUnknown_0877CFAC,local_14);
  return;
}


/* sub_0801A1C0 @ 0x0801A1C0 */

undefined4 sub_0801A1C0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03002c04 == 0) {
    if (DAT_03001988 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = sub_080134B8(param_1,0xa0,param_3,param_4,param_4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801A1C2 @ 0x0801A1C2 */

undefined4 sub_0801A1C2(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*param_2 == 0) {
    if (DAT_03001988 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = sub_080134B8(param_1,0xa0,param_3,param_4,param_4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801A1E4 @ 0x0801A1E4 */

void sub_0801A1E4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08013598(param_1,0xa0,param_3,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DC80;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_0801A216 @ 0x0801A216 */

undefined4 sub_0801A216(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else if (DAT_03002c04 == 0) {
    uVar1 = sub_080134B8(param_1,0x28,param_3,param_4,param_4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801A218 @ 0x0801A218 */

undefined4 sub_0801A218(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else if (DAT_03002c04 == 0) {
    uVar1 = sub_080134B8(param_1,0x28,param_3,param_4,param_4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801A23A @ 0x0801A23A */

void sub_0801A23A(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int local_44 [13];
  
  local_44[0] = 0;
  __call_via_r3(param_2,0x12,0,*(int *)(*param_2 + 0x30) + *param_2);
  local_48 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e) + 1;
  local_4c = 0;
  iVar1 = sub_080134B8(param_1,600);
  if (iVar1 == 0) {
    iVar1 = sub_080134B8(param_1,0x78);
    if (iVar1 == 0) {
      iVar1 = sub_080134B8(param_1,0x28);
      if (iVar1 != 0) {
        local_4c = 1;
      }
    }
    else {
      local_4c = 2;
    }
  }
  else {
    local_4c = 3;
  }
  if (local_4c < local_48) {
    piVar2 = &local_48;
  }
  else {
    piVar2 = &local_4c;
  }
  iVar1 = *piVar2;
  sub_0800FE34(&iStack_64,param_2);
  iStack_50 = iStack_60 + iStack_58 >> 1;
  iStack_54 = iStack_64 + iStack_5c >> 1;
  sub_080220D8(0,&iStack_54,local_44,iVar1);
  sub_0803D8A0();
  if (local_44[0] == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  else {
    uVar3 = sub_0801BAB0(0,local_44);
    sub_0800ED18(param_2,uVar3);
  }
  return;
}


/* sub_0801A334 @ 0x0801A334 */

undefined4 sub_0801A334(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871daa4)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871daa4,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A336 @ 0x0801A336 */

undefined4 sub_0801A336(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871daa4)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871daa4,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A35A @ 0x0801A35A */

void sub_0801A35A(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D9F8;
    puVar2[3] = (uint)bVar1;
    puVar2[1] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_0801A390 @ 0x0801A390 */

undefined4 sub_0801A390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871daa7)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871daa7,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A392 @ 0x0801A392 */

undefined4 sub_0801A392(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,(&DAT_0871daa7)
                                 [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)],
                         &DAT_0871daa7,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A3B6 @ 0x0801A3B6 */

void sub_0801A3B6(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804DA1C;
    puVar2[3] = (uint)bVar1;
    puVar2[1] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_0801A3EC @ 0x0801A3EC */

undefined4 sub_0801A3EC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(undefined4 *)
                                  (&DAT_0871dae0 +
                                  (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 +
                                                 0x2e) * 4),&DAT_0871dae0,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A3EE @ 0x0801A3EE */

undefined4 sub_0801A3EE(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(undefined4 *)
                                  (&DAT_0871dae0 +
                                  (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 +
                                                 0x2e) * 4),&DAT_0871dae0,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A414 @ 0x0801A414 */

void sub_0801A414(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  
  sub_08013598(param_1,*(undefined4 *)
                        (&DAT_0871daec +
                        (uint)*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e) * 4),
               param_3,param_4,param_4);
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D080;
    puVar2[4] = (uint)bVar1;
  }
  sub_0800ECDA(param_2,0xc);
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_0801A460 @ 0x0801A460 */

undefined4 sub_0801A460(void)

{
  return 1;
}


/* sub_0801A464 @ 0x0801A464 */

void sub_0801A464(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if ((&DAT_086b8302)[(uint)*(byte *)(param_1 + 0x14) * 0x18] == -1) {
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 1) = 2;
      *puVar1 = &_0804DFC0;
    }
    sub_0800ECDA(param_2,0xb);
    sub_0800ED18(param_2,puVar1);
  }
  else {
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 1) = 2;
      *puVar1 = &_0804D410;
    }
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,puVar1);
  }
  return;
}


/* sub_0801A4C4 @ 0x0801A4C4 */

undefined4 sub_0801A4C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 0x14) * 0x18;
  if ((&DAT_086b8303)[iVar2] == (&DAT_086b8302)[iVar2]) {
    uVar1 = 0;
  }
  else if ((int)((uint)(byte)(&gUnknown_086B82EC)[iVar2] << 0x1e) < 0) {
    uVar1 = 0;
  }
  else if (((&gUnknown_086B82EC)[iVar2] & 1) == 0) {
    if (DAT_03001988 == 0) {
      uVar1 = 0;
    }
    else if (*(int *)(param_1 + 4) == 0) {
      uVar1 = sub_080134B8(param_1,10,0,(&DAT_086b8302)[iVar2],param_4);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0801A512 @ 0x0801A512 */

void sub_0801A512(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 1) = 4;
      *puVar1 = &_0804E2B0;
    }
    sub_0800ECDA(param_2,10);
    sub_0800ED18(param_2,puVar1);
  }
  else {
    __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x28) + *param_2,
                  (uint)*(byte *)(param_1 + 0x14) * 2,param_4);
  }
  return;
}


/* sub_0801A55E @ 0x0801A55E */

undefined4 sub_0801A55E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (uint)*(byte *)(param_1 + 0x14) * 0x18;
  bVar1 = (&gUnknown_086B82EC)[iVar3];
  if ((int)((uint)bVar1 << 0x1e) < 0) {
    uVar2 = 1;
  }
  else if (DAT_03001988 == 0) {
    uVar2 = 0;
  }
  else if (((bVar1 & 1) == 0) || ((&DAT_086b8302)[iVar3] == -1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = sub_080134B8(param_1,10,&gUnknown_086B82EC + iVar3,DAT_03001988,param_4);
  }
  return uVar2;
}


/* sub_0801A5BC @ 0x0801A5BC */

void sub_0801A5BC(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x28) + *param_2,
                  (uint)*(byte *)(param_1 + 0x14) * 2,param_4);
  }
  else {
    puVar1 = (undefined4 *)sub_0803D5B8(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 1) = 4;
      *puVar1 = &_0804E2B0;
    }
    sub_0800ECDA(param_2,10);
    sub_0800ED18(param_2,puVar1);
  }
  return;
}


/* sub_0801A60A @ 0x0801A60A */

undefined4 sub_0801A60A(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_03001988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,0x15e,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A60C @ 0x0801A60C */

undefined4 sub_0801A60C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,0x15e,param_3,param_4,param_4);
  }
  return uVar1;
}


/* sub_0801A624 @ 0x0801A624 */

void sub_0801A624(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08013598(param_1,0x15e,param_3,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DFE8;
  }
  sub_0800ECDA(param_2,3);
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_0801A664 @ 0x0801A664 */

void sub_0801A664(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0804F944(auStack_24,param_2);
  sub_08052FB4(auStack_1c,auStack_24,&gUnknown_0871DD4C + iVar1);
  uVar2 = sub_080206B8(0,auStack_1c,*(undefined4 *)(&DAT_0871dd54 + iVar1),param_2,
                       &gUnknown_0876BA2C);
  *(undefined4 *)(param_1 + 8) = uVar2;
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_0801A6BA @ 0x0801A6BA */

void sub_0801A6BA(int param_1)

{
  sub_0802082A(*(undefined4 *)(param_1 + 8));
  sub_0803D63C(param_1);
  return;
}


/* sub_0801A6CC @ 0x0801A6CC */

void sub_0801A6CC(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        return;
      }
      sub_0804F944(auStack_20,param_2);
      sub_08052FB4(auStack_18,auStack_20,&UNK_0871dd7c + (uint)*(byte *)(param_2 + 4) * 8);
      sub_080207D2(*(undefined4 *)(param_1 + 8),(char)param_2[4],auStack_18);
    }
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar3 = *(int *)(param_1 + 4) + ((uint)*(byte *)(iVar2 + 0x56) * 0x496 >> 4);
    *(int *)(param_1 + 4) = iVar3;
    sub_08013504(iVar2,iVar3 >> 8);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
    iVar2 = sub_08013492(iVar2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(byte *)((int)param_2 + 0x11) =
           (byte)(((uint)*(ushort *)((int)param_2 + 0x12) << 0x1c) >> 0x1f);
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
  }
  return;
}


/* sub_0801A7AE @ 0x0801A7AE */

void sub_0801A7AE(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801A7C0 @ 0x0801A7C0 */

void sub_0801A7C0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  sub_0800DE60();
  sub_0804F944(auStack_20,param_2);
  sub_08052FB4(auStack_18,auStack_20,&UNK_0871dd9c + (uint)*(byte *)(param_2 + 0x10) * 8);
  uVar1 = sub_08037480(0,param_2,auStack_18,&gUnknown_0876ACC0 + *(int *)(param_1 + 8) * 0x10);
  *(undefined4 *)(param_1 + 4) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_0801A80E @ 0x0801A80E */

void sub_0801A80E(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  if (iVar1 == 0) {
    if (0x10 < uVar2) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
    }
  }
  else {
    *(byte *)((int)param_2 + 0x11) = (byte)(((uint)uVar2 << 0x1c) >> 0x1f);
  }
  return;
}


/* sub_0801A83E @ 0x0801A83E */

void sub_0801A83E(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((int)((uint)*(ushort *)(iVar1 + 2) << 0x1e) < 0) {
      if (*(int *)(param_1 + 0xc) < 1000) {
        __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
        iVar1 = *(int *)(param_1 + 0x10) + *(int *)(&DAT_0871ddbc + *(int *)(param_1 + 8) * 4);
        *(int *)(param_1 + 0x10) = iVar1;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (iVar1 >> 8);
        sub_08013504();
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xff;
        return;
      }
    }
    else {
      sub_080378A0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined2 *)((int)param_2 + 0x12) = 0;
    }
  }
  return;
}


/* sub_0801A8B0 @ 0x0801A8B0 */

void sub_0801A8B0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801A8CE @ 0x0801A8CE */

void sub_0801A8CE(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801A8F0 @ 0x0801A8F0 */

void sub_0801A8F0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0804F944(auStack_24,param_2);
  sub_08052FB4(auStack_1c,auStack_24,&gUnknown_0871DDC8 + iVar1);
  uVar2 = sub_080206B8(0,auStack_1c,*(undefined4 *)(&DAT_0871ddd0 + iVar1),param_2,
                       &gUnknown_087710FC);
  *(undefined4 *)(param_1 + 8) = uVar2;
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_0801A946 @ 0x0801A946 */

void sub_0801A946(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28) = 1;
  }
  sub_0802082A(*(undefined4 *)(param_1 + 8));
  sub_0803D63C(param_1);
  return;
}


/* sub_0801A964 @ 0x0801A964 */

void sub_0801A964(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        return;
      }
      sub_0804F944(auStack_20,param_2);
      sub_08052FB4(auStack_18,auStack_20,&UNK_0871ddf8 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_08038886(0,auStack_18,param_2);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      sub_0801191A(&DAT_03001c4c,uVar3);
      sub_0804F944(auStack_20,param_2);
      sub_08052FB4(auStack_18,auStack_20,&UNK_0871de18 + (uint)*(byte *)(param_2 + 4) * 8);
      sub_080207D2(*(undefined4 *)(param_1 + 8),(char)param_2[4],auStack_18);
    }
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar4 = *(int *)(param_1 + 4) + ((uint)*(byte *)(iVar2 + 0x56) * 0x496 >> 4);
    *(int *)(param_1 + 4) = iVar4;
    sub_08013504(iVar2,iVar4 >> 8);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
    iVar2 = sub_08013492(iVar2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(char *)((int)param_2 + 0x11) =
           '\x01' - (char)((int)((uint)*(ushort *)((int)param_2 + 0x12) << 0x1c) >> 0x1f);
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
  }
  return;
}


/* sub_0801AA7E @ 0x0801AA7E */

void sub_0801AA7E(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801AA90 @ 0x0801AA90 */

void sub_0801AA90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  sub_0800DE60();
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0804F944(auStack_24,param_2);
  sub_08052FB4(auStack_1c,auStack_24,&UNK_0871de38 + iVar1);
  uVar2 = sub_08029384(0,auStack_1c,param_2,
                       *(undefined4 *)(&DAT_0871de68 + *(int *)(param_1 + 8) * 4),
                       *(undefined4 *)(&DAT_0871de40 + iVar1));
  *(undefined4 *)(param_1 + 4) = uVar2;
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_0801AAEA @ 0x0801AAEA */

void sub_0801AAEA(void)

{
  return;
}


/* sub_0801AAEC @ 0x0801AAEC */

void sub_0801AAEC(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  sVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(short *)((int)param_2 + 0x12) = sVar1;
  if (sVar1 == 0x10) {
    iVar2 = *(int *)(param_1 + 4);
    sub_0800FF44(&local_18,param_2);
    *(int *)(iVar2 + 0x20) = local_18 << 8;
    *(int *)(iVar2 + 0x24) = local_14 << 8;
    sub_080293E4(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
  }
  else if (sVar1 == 0x20) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0801AB3E @ 0x0801AB3E */

void sub_0801AB3E(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801AB5C @ 0x0801AB5C */

void sub_0801AB5C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801AB7C @ 0x0801AB7C */

void sub_0801AB7C(void)

{
  sub_0800DE60();
  sub_0803E378(&DAT_03003e5c,&gUnknown_083193C8,0x40,0);
  return;
}


/* sub_0801AB96 @ 0x0801AB96 */

void sub_0801AB96(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
    sub_08038DEC(*(undefined4 *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801ABBE @ 0x0801ABBE */

/* WARNING: Type propagation algorithm not settling */

void sub_0801ABBE(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int aiStack_20 [2];
  undefined *puStack_18;
  
  uVar1 = (uint)*(ushort *)((int)param_2 + 0x12);
  if (*(int *)(param_1 + 8) == 0) {
    puStack_18 = &gUnknown_08319428;
    if (*(int *)(param_1 + 4) == 0) {
      *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) + 1;
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x1e) < 0) {
        if (*(short *)((int)param_2 + 0x12) == 0x10) {
          sub_0804F944(&iStack_28,param_2);
          sub_08052FB4(aiStack_20,&iStack_28,&gUnknown_0871DE74 + (uint)*(byte *)(param_2 + 4) * 8);
          uVar4 = sub_08038AD8(0,param_2,aiStack_20,5,0);
          *(undefined4 *)(param_1 + 4) = uVar4;
          sub_0801191A(&DAT_03001c4c,uVar4);
          sub_0803E378(&DAT_03003e5c,puStack_18,0x40,0);
        }
        *(char *)((int)param_2 + 0x11) = (char)(*(ushort *)((int)param_2 + 0x12) >> 3);
      }
      else {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    else {
      if (uVar1 < 0x5a) {
        aiStack_20[1] = 0x60;
        iStack_24 = param_2[0x68] +
                    *(int *)(&gUnknown_0807268C + (uint)*(byte *)(param_2 + 4) * 8) * 0x60;
        aiStack_20[0] =
             param_2[0x69] + *(int *)(&DAT_08072690 + (uint)*(byte *)(param_2 + 4) * 8) * 0x60;
        iStack_2c = iStack_24 >> 8;
        iStack_28 = aiStack_20[0] >> 8;
        iVar2 = sub_080097C2(&DAT_030019a4,&iStack_2c,param_2 + 0x67);
        if (iVar2 == 0) {
          iStack_28 = 0;
          sub_08038E8A(*(undefined4 *)(param_1 + 4),&iStack_28);
        }
        else {
          param_2[0x68] = iStack_24;
          param_2[0x69] = aiStack_20[0];
          sub_08038E8A(*(undefined4 *)(param_1 + 4),aiStack_20 + 1);
        }
      }
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
      iVar3 = *(int *)(param_1 + 0xc) + ((uint)*(byte *)(iVar2 + 0x56) * 0x500 >> 4);
      *(int *)(param_1 + 0xc) = iVar3;
      sub_08013504(iVar2,iVar3 >> 8);
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xff;
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (((-1 < (int)((uint)*(ushort *)(iVar3 + 2) << 0x1e)) ||
          (299 < *(ushort *)((int)param_2 + 0x12))) || (iVar2 = sub_08013492(iVar2), iVar2 == 0)) {
        *(undefined4 *)(param_1 + 8) = 1;
        *(undefined2 *)((int)param_2 + 0x12) = 0;
        sub_08038E42(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
        sub_0803E302(&DAT_03003e5c,puStack_18);
        sub_0803E378(&DAT_03003e5c,&DAT_083193bc,0x40,0);
      }
      iVar2 = *(ushort *)((int)param_2 + 0x12) + 1;
      *(short *)((int)param_2 + 0x12) = (short)iVar2;
      *(char *)((int)param_2 + 0x11) = '\x02' - (char)(iVar2 * 0x10000000 >> 0x1f);
    }
  }
  else if (uVar1 < 0x18) {
    *(short *)((int)param_2 + 0x12) = (short)(uVar1 + 1);
    *(char *)((int)param_2 + 0x11) = '\x02' - (char)((int)((uVar1 + 1) * 0x10000000) >> 0x1f);
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0801AD96 @ 0x0801AD96 */

void sub_0801AD96(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801ADA8 @ 0x0801ADA8 */

void sub_0801ADA8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0804F944(auStack_24,param_2);
  sub_08052FB4(auStack_1c,auStack_24,&UNK_0871de94 + iVar1);
  uVar2 = sub_080206B8(0,auStack_1c,*(undefined4 *)(&DAT_0871de9c + iVar1),param_2,
                       &gUnknown_08725018 + *(int *)(param_1 + 0xc) * 0x10);
  *(undefined4 *)(param_1 + 8) = uVar2;
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_0801AE20 @ 0x0801AE20 */

void sub_0801AE20(int param_1)

{
  sub_0802082A(*(undefined4 *)(param_1 + 8));
  sub_0803D63C(param_1);
  return;
}


/* sub_0801AE32 @ 0x0801AE32 */

void sub_0801AE32(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        return;
      }
      sub_0804F944(auStack_20,param_2);
      sub_08052FB4(auStack_18,auStack_20,&gUnknown_0871DEC4 + (uint)*(byte *)(param_2 + 4) * 8);
      sub_080207D2(*(undefined4 *)(param_1 + 8),(char)param_2[4],auStack_18);
    }
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar3 = ((int)((uint)*(byte *)(iVar2 + 0x56) *
                  *(int *)(&DAT_0871dee4 + *(int *)(param_1 + 0xc) * 4)) >> 4) +
            *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar3;
    sub_08013504(iVar2,iVar3 >> 8);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
    iVar2 = sub_08013492(iVar2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(char *)((int)param_2 + 0x11) =
           '\x01' - (char)((int)((uint)*(ushort *)((int)param_2 + 0x12) << 0x1c) >> 0x1f);
      iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 2) << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
  }
  return;
}


/* sub_0801AF1C @ 0x0801AF1C */

void sub_0801AF1C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801AF2E @ 0x0801AF2E */

void sub_0801AF2E(int param_1)

{
  sub_0800DE60();
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


/* sub_0801AF3C @ 0x0801AF3C */

void sub_0801AF3C(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1c [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x28) {
    if (uVar1 == 0x10) {
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      sub_0800FF44(auStack_1c,param_2);
      sub_08019858(auStack_1c,param_2,1);
    }
  }
  else {
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar4 = *(short *)(iVar2 + 0x1c) * 0xccd + 0xffff >> 0x10;
    if ((*(char *)(param_1 + 4) == '\0') || (iVar3 = sub_080134B8(iVar2,iVar4), iVar3 == 0)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(undefined1 *)(param_1 + 4) = 0;
      sub_08013598(iVar2,iVar4);
      *(char *)((int)param_2 + 0x11) = '\x03' - *(char *)((int)param_2 + 0x11);
      *(undefined2 *)((int)param_2 + 0x12) = 0x10;
      sub_0800FF44(auStack_1c,param_2);
      sub_08019858(auStack_1c,param_2,1);
    }
  }
  return;
}


/* sub_0801AFE2 @ 0x0801AFE2 */

void sub_0801AFE2(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((int)((uint)*(ushort *)(iVar1 + 4) << 0x1e) < 0) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}


/* sub_0801B002 @ 0x0801B002 */

void sub_0801B002(void)

{
  sub_0803D63C();
  return;
}


/* sub_0801B00A @ 0x0801B00A */

void sub_0801B00A(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [8];
  
  sub_0800DE60();
  sub_0804F944(auStack_18,param_2);
  uVar1 = sub_08037C1C(0,param_2,auStack_18);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0);
  return;
}


/* sub_0801B04A @ 0x0801B04A */

void sub_0801B04A(int param_1)

{
  sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 0xc));
  if (*(char *)(param_1 + 4) == '\0') {
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
  else {
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0801B086 @ 0x0801B086 */

void sub_0801B086(void)

{
  return;
}


/* sub_0801B088 @ 0x0801B088 */

void sub_0801B088(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte extraout_r1;
  int *piVar4;
  int *piVar5;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*(char *)(param_1 + 4) == '\0') {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((int)((uint)*(ushort *)(iVar1 + 2) << 0x1e) < 0) {
      uVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
      sub_08013598(uVar3,4);
      iVar1 = *(ushort *)((int)param_2 + 0x12) + 1;
      *(short *)((int)param_2 + 0x12) = (short)iVar1;
      *(byte *)((int)param_2 + 0x11) = (byte)((uint)(iVar1 * 0x20000000) >> 0x1f);
    }
    else if (*(int *)(*(int *)(param_1 + 0xc) + 0x40) < 0x50) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(undefined1 *)(param_1 + 4) = 1;
      sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319428,0x40,0);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 < 0xb4) {
      iStack_18 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      uVar2 = (uint)*(ushort *)(iStack_18 + 2);
      if ((uVar2 << 0x18) >> 0x1c != 0) {
        piVar4 = param_2 + 0x8e;
        piVar5 = param_2 + 0x68;
        if ((int)(uVar2 << 0x1a) < 0) {
          iStack_1c = param_2[0x69];
          iStack_20 = *piVar5;
          iVar1 = __16__rt_sdiv(2,*piVar4);
          iStack_20 = iStack_20 - iVar1;
          sub_08012960(param_2,&iStack_20,2);
        }
        else if ((int)(uVar2 << 0x1b) < 0) {
          iStack_1c = param_2[0x69];
          iStack_20 = *piVar5;
          iVar1 = __16__rt_sdiv(2,*piVar4);
          iStack_20 = iStack_20 + iVar1;
          sub_08012960(param_2,&iStack_20,2);
        }
        if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x19) < 0) {
          iStack_1c = param_2[0x69];
          iStack_20 = *piVar5;
          iVar1 = __16__rt_sdiv(2,*piVar4);
          iStack_1c = iStack_1c - iVar1;
          sub_08012960(param_2,&iStack_20,1);
        }
        else if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x18) < 0) {
          iStack_1c = param_2[0x69];
          iStack_20 = *piVar5;
          iVar1 = __16__rt_sdiv(2,*piVar4);
          iStack_1c = iStack_1c + iVar1;
          sub_08012960(param_2,&iStack_20,1);
        }
        iVar1 = *(int *)(param_1 + 0xc);
        sub_0804F944(&iStack_20,param_2);
        *(int *)(iVar1 + 0x20) = iStack_20 << 8;
        *(int *)(iVar1 + 0x24) = iStack_1c << 8;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      sub_080530A4();
      *(byte *)((int)param_2 + 0x11) = (extraout_r1 & 7) + 2;
      sub_08037C72(*(undefined4 *)(param_1 + 0xc),param_2);
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}


