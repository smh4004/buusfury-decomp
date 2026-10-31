/* Ghidra reference decompilation of code_0800419C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0800419C @ 0x0800419C */

void sub_0800419C(void)

{
  undefined4 *puVar1;
  undefined1 auStack_14 [4];
  
  sub_0803D7AA(auStack_14);
  sub_08004E0C(0);
  sub_0803D8A0();
  sub_08006AE8(&DAT_03001914);
  if ((DAT_030038a9 != '\x01') || (DAT_030038b0 != &PTR_gUnknown_083B3590_083bbb10)) {
    sub_0803F110();
  }
  sub_080179E8(0);
  sub_0803D8A0();
  do {
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
    sub_0803D7FA();
  } while( true );
}


/* sub_0800421C @ 0x0800421C */

void sub_0800421C(void)

{
  return;
}


/* sub_0800421E @ 0x0800421E */

void sub_0800421E(int param_1)

{
  undefined4 local_70 [17];
  undefined4 local_2c;
  
  local_70[0] = 0;
  local_2c = 0;
  ScriptVM_Run(local_70,*(undefined4 *)(param_1 + 4),0);
  return;
}


/* sub_08004236 @ 0x08004236 */

void sub_08004236(int param_1)

{
  undefined4 auStack_70 [17];
  undefined4 uStack_2c;
  
  auStack_70[0] = 0;
  uStack_2c = 0;
  ScriptVM_Run(auStack_70,param_1 + 4,0);
  return;
}


/* sub_0800423A @ 0x0800423A */

void sub_0800423A(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_70 [17];
  undefined4 local_2c;
  
  local_70[0] = param_1;
  local_2c = param_1;
  ScriptVM_Run(local_70,param_2,0);
  return;
}


/* sub_0800424E @ 0x0800424E */

void sub_0800424E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08012588(*(undefined4 *)(param_1 + 4),0,param_3,param_4,param_4);
  return;
}


/* sub_0800425A @ 0x0800425A */

void sub_0800425A(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_20 [16];
  
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1d) < 0) &&
     (iVar1 = *(int *)(param_1 + 0x4d4) + -1, *(int *)(param_1 + 0x4d4) = iVar1, iVar1 == 0)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfb;
    sub_08012588(&gUnknown_0877CD58,0);
  }
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1b) < 0) &&
     (uVar2 = *(int *)(param_1 + 0x4d8) + 1, *(uint *)(param_1 + 0x4d8) = uVar2, 35999 < uVar2)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xef;
    sub_08012588(&gUnknown_0877CD88,0);
  }
  if (((*(int *)(param_1 + 0x4dc) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x4dc) + -1, *(int *)(param_1 + 0x4dc) = iVar1, iVar1 == 0)) &&
     (DAT_03001c34 != 0)) {
    sub_0801064C();
  }
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1a) < 0) && (DAT_03001c34 != 0)) {
    sub_0800FDFA(auStack_20);
    iVar1 = sub_08009324(auStack_20,DAT_03001a50);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xdf;
      sub_08012588(&gUnknown_0877CCDC,0);
    }
  }
  return;
}


/* sub_0800425C @ 0x0800425C */

void sub_0800425C(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_20 [16];
  
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1d) < 0) &&
     (iVar1 = *(int *)(param_1 + 0x4d4) + -1, *(int *)(param_1 + 0x4d4) = iVar1, iVar1 == 0)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfb;
    sub_08012588(&gUnknown_0877CD58,0);
  }
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1b) < 0) &&
     (uVar2 = *(int *)(param_1 + 0x4d8) + 1, *(uint *)(param_1 + 0x4d8) = uVar2, 35999 < uVar2)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xef;
    sub_08012588(&gUnknown_0877CD88,0);
  }
  if (((*(int *)(param_1 + 0x4dc) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x4dc) + -1, *(int *)(param_1 + 0x4dc) = iVar1, iVar1 == 0)) &&
     (DAT_03001c34 != 0)) {
    sub_0801064C();
  }
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1a) < 0) && (DAT_03001c34 != 0)) {
    sub_0800FDFA(auStack_20);
    iVar1 = sub_08009324(auStack_20,DAT_03001a50);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xdf;
      sub_08012588(&gUnknown_0877CCDC,0);
    }
  }
  return;
}


/* sub_080042FC @ 0x080042FC */

void sub_080042FC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  bool bVar3;
  undefined8 uVar4;
  
  iVar1 = sub_0804912C(param_1,0,0x8a8);
  uVar4 = CONCAT44(extraout_r1,iVar1);
  iVar1 = 0;
  bVar3 = false;
  do {
    iVar2 = (int)uVar4;
    if (!bVar3) {
      *(undefined **)(iVar2 + -4) = &gUnknown_086FDA4C;
      *(undefined4 *)(iVar2 + -8) = 0x4f8;
      *(int *)(iVar2 + -0xc) = param_1;
      *(undefined4 *)((int)((ulonglong)uVar4 >> 0x20) + 4) = 0x4f8;
    }
    uVar4 = sub_0801339C(iVar1 * 0x68 + param_1 + 0x4f8);
    iVar1 = iVar1 + 1;
    bVar3 = iVar1 == 9;
  } while (iVar1 < 9);
  return;
}


/* sub_0800432C @ 0x0800432C */

void sub_0800432C(int param_1)

{
  *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) - DAT_03000f94;
  return;
}


/* sub_0800433E @ 0x0800433E */

int sub_0800433E(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x68;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 - ((int)((uint)*(byte *)(iVar3 + param_1 + 0x4f8) << 0x1f) >> 0x1f);
  } while (iVar2 < 8);
  return iVar1;
}


/* sub_08004364 @ 0x08004364 */

undefined4 sub_08004364(int param_1,uint param_2)

{
  if (((uint)*(byte *)(((int)param_2 >> 3) + param_1 + 0x55) & 1 << (param_2 & 7)) != 0) {
    return 1;
  }
  return 0;
}


/* sub_08004380 @ 0x08004380 */

void sub_08004380(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0x55) = (byte)(1 << (param_2 & 7)) | *(byte *)(param_1 + 0x55);
  return;
}


/* sub_08004396 @ 0x08004396 */

void sub_08004396(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & ~(byte)(1 << (param_2 & 7));
  return;
}


/* sub_080043AC @ 0x080043AC */

void sub_080043AC(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) ^ (byte)(1 << (param_2 & 7));
  return;
}


/* sub_080043C2 @ 0x080043C2 */

void sub_080043C2(byte *param_1)

{
  sub_08013B34(param_1 + (uint)*param_1 * 0x68 + 0x4f8);
  return;
}


/* sub_080043D8 @ 0x080043D8 */

void sub_080043D8(byte *param_1)

{
  sub_08013914(param_1 + (uint)*param_1 * 0x68 + 0x4f8);
  return;
}


/* sub_080043EE @ 0x080043EE */

int sub_080043EE(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xe4);
  iVar1 = 0;
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      uVar3 = ((int *)(param_1 + 0xe4))[iVar2 + 1];
      if (((uVar3 & 0xfffffff) == param_2) && (uVar3 >> 0x1c == 0)) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return iVar1;
}


/* sub_0800441E @ 0x0800441E */

int sub_0800441E(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xe4);
  iVar1 = 0;
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      if ((((int *)(param_1 + 0xe4))[iVar2 + 1] & 0xfffffffU) == param_2) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return iVar1;
}


/* sub_08004448 @ 0x08004448 */

void sub_08004448(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xe4);
  if (*piVar1 != 0xfa) {
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    piVar1[iVar2 + 1] = param_2 & 0xfffffff;
  }
  return;
}


/* sub_08004468 @ 0x08004468 */

void sub_08004468(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (int *)(param_1 + 0xe4);
  iVar4 = *piVar2;
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      if (((piVar2[iVar3 + 1] & 0xfffffffU) == param_2) && ((uint)piVar2[iVar3 + 1] >> 0x1c == 0)) {
        *piVar2 = iVar4 + -1;
        iVar4 = (iVar4 + -1) - iVar3;
        if (iVar4 == 0) {
          return;
        }
        sub_08049138((int)(piVar2 + iVar3 + 1),(int)(piVar2 + iVar3 + 2),iVar4 * 4);
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = 0;
  if (0 < iVar4) {
    while ((piVar2[iVar3 + 1] & 0xfffffffU) != param_2) {
      iVar3 = iVar3 + 1;
      if (iVar4 <= iVar3) {
        return;
      }
    }
    uVar5 = piVar2[iVar3 + 1];
    piVar1 = (int *)(((uVar5 >> 0x1c) - 1) * 0x68 + param_1 +
                     (uint)(byte)(&DAT_086f8300)[(uVar5 & 0xfffffff) * 0x2c] * 4 + 0x534);
    iVar4 = *(int *)(&gUnknown_080555B8 +
                    (uint)(byte)(&DAT_086f8300)[(uVar5 & 0xfffffff) * 0x2c] * 4);
    do {
      *piVar1 = iVar4;
    } while (*piVar1 != iVar4);
    iVar4 = *piVar2;
    *piVar2 = iVar4 + -1;
    iVar4 = (iVar4 + -1) - iVar3;
    if (iVar4 != 0) {
      sub_08049138((int)(piVar2 + iVar3 + 1),(int)(piVar2 + iVar3 + 2),iVar4 * 4);
      return;
    }
  }
  return;
}


/* sub_08004544 @ 0x08004544 */

void sub_08004544(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_3 * 4;
  piVar2 = (int *)(iVar3 + param_2 * 0x68 + param_1 + 0x534);
  if (*piVar2 != *(int *)(&gUnknown_080555B8 + iVar3)) {
    iVar5 = *(int *)(param_1 + 0xe4);
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        puVar1 = (uint *)((int *)(param_1 + 0xe4) + iVar4 + 1);
        if (((*puVar1 >> 0x1c) - 1 == param_2) &&
           ((byte)(&DAT_086f8300)[(*puVar1 & 0xfffffff) * 0x2c] == param_3)) {
          *puVar1 = *puVar1 & 0xfffffff;
          iVar3 = *(int *)(&gUnknown_080555B8 + iVar3);
          do {
            *piVar2 = iVar3;
          } while (*piVar2 != iVar3);
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    sub_0803DF14(L"\"Internal equipment consistency error!\"","T:\\Source\\GameData.cpp",0x107,0,
                 param_4);
  }
  return;
}


/* sub_080045C8 @ 0x080045C8 */

void sub_080045C8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x68 + param_1 + 0x4f8;
  iVar1 = param_4 * 0x2c;
  puVar2 = (uint *)(param_3 * 4 + param_1 + 0xe8);
  if ((param_3 != -1) && (*puVar2 >> 0x1c != 0)) {
    sub_08004544(param_1,(*puVar2 >> 0x1c) - 1,(&DAT_086f8300)[iVar1]);
  }
  if (*(int *)((uint)(byte)(&DAT_086f8300)[iVar1] * 4 + iVar4 + 0x3c) !=
      *(int *)(&gUnknown_080555B8 + (uint)(byte)(&DAT_086f8300)[iVar1] * 4)) {
    sub_08004544(param_1,param_2);
  }
  piVar3 = (int *)((uint)(byte)(&DAT_086f8300)[iVar1] * 4 + iVar4 + 0x3c);
  do {
    *piVar3 = param_4;
  } while (*piVar3 != param_4);
  if (param_3 != -1) {
    *puVar2 = *puVar2 & 0xfffffff | (param_2 + 1) * 0x10000000;
  }
  return;
}


/* sub_08004656 @ 0x08004656 */

void sub_08004656(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0xe4);
  uVar3 = piVar4[param_2 + 1];
  if (uVar3 >> 0x1c != 0) {
    piVar1 = (int *)(((uVar3 >> 0x1c) - 1) * 0x68 + param_1 +
                     (uint)(byte)(&DAT_086f8300)[(uVar3 & 0xfffffff) * 0x2c] * 4 + 0x534);
    iVar2 = *(int *)(&gUnknown_080555B8 +
                    (uint)(byte)(&DAT_086f8300)[(uVar3 & 0xfffffff) * 0x2c] * 4);
    do {
      *piVar1 = iVar2;
    } while (*piVar1 != iVar2);
  }
  iVar2 = *piVar4;
  *piVar4 = iVar2 + -1;
  iVar2 = (iVar2 + -1) - param_2;
  if (iVar2 != 0) {
    sub_08049138((int)(piVar4 + param_2 + 1),(int)(piVar4 + param_2 + 2),iVar2 * 4);
  }
  return;
}


/* sub_080046AE @ 0x080046AE */

void sub_080046AE(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4dc) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + *(int *)(param_1 + 0x4e0);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + *(int *)(param_1 + 0x4e4);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_1 + 0x4e8);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + *(int *)(param_1 + 0x4e8);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + *(int *)(param_1 + 0x4ec);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_1 + 0x4f0);
  }
  return;
}


/* sub_080046F4 @ 0x080046F4 */

void sub_080046F4(int param_1)

{
  int iVar1;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1e)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
    iVar1 = sub_0800B854(0);
    *(undefined4 *)(iVar1 + 0x28) = 0xfffffff0;
    *(undefined4 *)(iVar1 + 0x14) = 1;
    sub_0801191A(&DAT_03001c4c);
  }
  return;
}


/* sub_08004722 @ 0x08004722 */

void sub_08004722(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  puVar1 = (undefined4 *)sub_0803D5B8(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800B854(puVar1);
    *puVar1 = &_0804B500;
    puVar1[0xc] = param_2;
    puVar1[0xd] = param_3;
  }
  puVar1[10] = 0xfffffff0;
  puVar1[5] = 1;
  sub_0801191A(&DAT_03001c4c);
  return;
}


/* sub_08004764 @ 0x08004764 */

void sub_08004764(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((int)((uint)*(byte *)(param_1 + 1) << 0x1e) < 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfd;
    sub_08011C70(&DAT_03001c4c,0x15,0,param_4,param_4);
  }
  return;
}


/* sub_08004784 @ 0x08004784 */

bool sub_08004784(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_34;
  
  if (param_1 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = param_1 >> 0x10;
    if (uVar1 == 0) {
      bVar4 = false;
    }
    else {
      uVar2 = 1 << (param_1 & 7);
      uVar3 = (param_1 & 0xffff) >> 3;
      if (uVar1 == 1) {
        if (((byte)(&DAT_030010bd)[uVar3] & uVar2) == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      else if (uVar1 == 2) {
        bVar4 = ((byte)(&DAT_030010bd)[uVar3] & uVar2) == 0;
      }
      else if (uVar1 == 3) {
        if (((byte)(&DAT_030010bd)[uVar3] & uVar2) == 0) {
          bVar4 = false;
        }
        else {
          (&DAT_030010bd)[uVar3] = (&DAT_030010bd)[uVar3] & ~(byte)uVar2;
          bVar4 = true;
        }
      }
      else {
        uStack_78 = 0;
        uStack_34 = 0;
        ScriptVM_Run(&uStack_78,param_1,0);
        if (iStack_74 == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
    }
  }
  return bVar4;
}


/* sub_08004838 @ 0x08004838 */

int sub_08004838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(0x8a8), param_1 != 0)) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    uVar3 = 0x8050365;
    sub_08046FF4(param_1 + 0x4f8,param_1 + 0x8a0,0x68,0x8050365,param_4);
    iVar1 = sub_0804912C(param_1,0,0x8a8);
    uVar5 = CONCAT44(extraout_r1,iVar1);
    iVar1 = 0;
    bVar4 = true;
    do {
      iVar2 = (int)uVar5;
      if (!bVar4) {
        *(undefined **)(iVar2 + -4) = &gUnknown_086FDA4C;
        *(undefined4 *)(iVar2 + -8) = 0x4f8;
        *(int *)(iVar2 + -0xc) = iVar1;
        *(undefined4 *)(iVar2 + -0x10) = uVar3;
        *(undefined4 *)((int)((ulonglong)uVar5 >> 0x20) + 4) = 0x4f8;
      }
      uVar5 = sub_0801339C(iVar1 * 0x68 + param_1 + 0x4f8);
      iVar1 = iVar1 + 1;
      bVar4 = iVar1 == 9;
    } while (iVar1 < 9);
  }
  return param_1;
}


/* sub_08004896 @ 0x08004896 */

void sub_08004896(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803FC4E(param_1,0x8a8,param_3,param_4,param_4);
  return;
}


/* sub_080048A0 @ 0x080048A0 */

void sub_080048A0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_8c8 [2216];
  int local_20;
  
  sub_08004838(auStack_8c8);
  sub_0803FC3A(&DAT_03004a68,auStack_8c8,param_2 * 0x8b0 + 0x10,0x8b0);
  iVar1 = sub_0803FC4E(auStack_8c8,0x8a8);
  if (iVar1 == local_20) {
    sub_080502BC(param_1,auStack_8c8);
  }
  else {
    iVar1 = sub_0804912C(param_1,0,0x8a8);
    uVar4 = CONCAT44(extraout_r1,iVar1);
    iVar1 = 0;
    bVar3 = false;
    do {
      iVar2 = (int)uVar4;
      if (!bVar3) {
        *(undefined **)(iVar2 + -4) = &gUnknown_086FDA4C;
        *(undefined4 *)(iVar2 + -8) = 0x4f8;
        *(int *)(iVar2 + -0xc) = param_1;
        *(undefined4 *)((int)((ulonglong)uVar4 >> 0x20) + 4) = 0x4f8;
      }
      uVar4 = sub_0801339C(iVar1 * 0x68 + param_1 + 0x4f8);
      iVar1 = iVar1 + 1;
      bVar3 = iVar1 == 9;
    } while (iVar1 < 9);
  }
  return;
}


/* sub_0800491A @ 0x0800491A */

void sub_0800491A(undefined4 param_1,int param_2)

{
  undefined1 auStack_8c4 [2216];
  undefined4 local_1c;
  
  sub_08004838(auStack_8c4);
  sub_080502BC(auStack_8c4,param_1);
  local_1c = sub_0803FC4E(auStack_8c4,0x8a8);
  sub_0803FBDE(&DAT_03004a68,param_2 * 0x8b0 + 0x10,auStack_8c4,0x8b0);
  return;
}


/* sub_08004962 @ 0x08004962 */

void sub_08004962(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  undefined1 auStack_8c8 [1232];
  int iStack_3f8;
  undefined4 uStack_20;
  
  *(undefined1 *)(param_1 + 0x8a0) = DAT_0300197c;
  *(undefined1 *)(param_1 + 0x8a1) = DAT_0300197d;
  *(undefined1 *)(param_1 + 0x8a2) = DAT_0300197e;
  *(short *)(param_1 + 0x8a4) = (short)*param_3;
  *(short *)(param_1 + 0x8a6) = (short)param_3[1];
  bVar1 = *(byte *)(param_1 + 1);
  *(byte *)(param_1 + 1) = bVar1 | 1;
  if (param_4 == 0) {
    *(byte *)(param_1 + 1) = bVar1 & 0xf7 | 1;
  }
  else {
    *(byte *)(param_1 + 1) = bVar1 | 9;
  }
  sub_08004838(auStack_8c8);
  sub_080502BC(auStack_8c8,param_1);
  iStack_3f8 = DAT_03000f94 + iStack_3f8;
  uStack_20 = sub_0803FC4E(auStack_8c8,0x8a8);
  sub_0803FBDE(&DAT_03004a68,param_2 * 0x8b0 + 0x10,auStack_8c8,0x8b0);
  return;
}


/* sub_080049F2 @ 0x080049F2 */

void sub_080049F2(undefined4 param_1,int param_2)

{
  undefined1 auStack_8c4 [2216];
  undefined4 local_1c;
  
  sub_08004838(auStack_8c4);
  sub_080502BC(auStack_8c4,param_1);
  local_1c = sub_0803FC4E(auStack_8c4,0x8a8);
  sub_0803FBDE(&DAT_03004a68,param_2 * 0x8b0 + 0x10,auStack_8c4,0x8b0);
  return;
}


/* sub_08004A3A @ 0x08004A3A */

void sub_08004A3A(int param_1)

{
  undefined1 auStack_8c0 [2216];
  undefined4 local_18;
  
  sub_08004838(auStack_8c0);
  local_18 = sub_0803FC4E(auStack_8c0,0x8a8);
  sub_0803FBDE(&DAT_03004a68,param_1 * 0x8b0 + 0x10,auStack_8c0,0x8b0);
  return;
}


/* sub_08004A76 @ 0x08004A76 */

void sub_08004A76(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Area_Lookup(*(undefined1 *)(param_1 + 0x8a0),*(undefined1 *)(param_1 + 0x8a1),param_3,param_4,
              param_4);
  return;
}


/* sub_08004A88 @ 0x08004A88 */

void sub_08004A88(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar1 = 0;
    iVar4 = *(int *)((&gUnknown_0874C948)[iVar3] + 0x14);
    if (0 < iVar4) {
      do {
        pbVar2 = *(byte **)(iVar1 * 4 + (&gUnknown_0874C948)[iVar3] + 0x18);
        if ((*pbVar2 == param_2) && (pbVar2[1] == param_3)) {
          param_1 = (uint)(*(ushort *)(pbVar2 + 2) >> 3) + param_1;
          *(byte *)(param_1 + 0x8d) =
               (byte)(1 << (*(ushort *)(pbVar2 + 2) & 7)) | *(byte *)(param_1 + 0x8d);
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
    iVar3 = iVar3 + 1;
    if (0x36 < iVar3) {
      return;
    }
  } while( true );
}


/* sub_08004B08 @ 0x08004B08 */

int sub_08004B08(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar1 = (&gUnknown_0874C948)[iVar4];
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x14)) {
      do {
        pcVar3 = *(char **)(iVar2 * 4 + iVar1 + 0x18);
        if ((*pcVar3 == DAT_0300197c) && (pcVar3[1] == DAT_0300197d)) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x14));
    }
    iVar4 = iVar4 + 1;
    if (0x36 < iVar4) {
      return 0;
    }
  } while( true );
}


/* sub_08004B52 @ 0x08004B52 */

undefined4 sub_08004B52(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar1 = 0;
    iVar4 = *(int *)((&gUnknown_0874C948)[iVar3] + 0x14);
    if (0 < iVar4) {
      do {
        pbVar2 = *(byte **)(iVar1 * 4 + (&gUnknown_0874C948)[iVar3] + 0x18);
        if ((*pbVar2 == param_2) && (pbVar2[1] == param_3)) {
          if (((uint)*(byte *)((uint)(*(ushort *)(pbVar2 + 2) >> 3) + param_1 + 0x8d) &
              1 << (*(ushort *)(pbVar2 + 2) & 7)) != 0) {
            return 1;
          }
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
    iVar3 = iVar3 + 1;
    if (0x36 < iVar3) {
      return 0;
    }
  } while( true );
}


/* sub_08004BC0 @ 0x08004BC0 */

void sub_08004BC0(uint *param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 auStack_84 [4];
  undefined2 local_80;
  uint *local_18;
  
  sub_080048A0(&DAT_03001068);
  bVar1 = DAT_03001069 & 1;
  *param_1 = DAT_03001069 & 1;
  if (bVar1 == 0) {
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined2 *)((int)param_1 + 6) = 0;
  }
  else {
    sub_08004A76(&DAT_03001068);
    uVar3 = sub_08008A36();
    *(undefined2 *)((int)param_1 + 6) = uVar3;
    sub_080530C8(DAT_03001538);
    param_1[2] = extraout_r1;
    sub_08004098(auStack_84,&gUnknown_0877CCA4,0);
    uVar6 = 0;
    *(undefined2 *)(param_1 + 1) = local_80;
    param_1[0x1f] = (uint)DAT_03001068;
    local_18 = param_1 + 3;
    do {
      puVar2 = local_18;
      if ((param_1[0x1f] == uVar6) || (((&DAT_03001560)[uVar6 * 0x68] & 1) != 0)) {
        uVar5 = *local_18;
        puVar7 = local_18 + uVar5 * 3 + 1;
        *local_18 = uVar5 + 1;
        local_18[uVar5 * 3 + 3] = uVar6;
        uVar4 = sub_0801713C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[uVar6 * 0x68] * 0x18);
        *puVar7 = uVar4;
        uVar4 = param_1[0x1f];
        puVar2[uVar5 * 3 + 2] = (uint)(uVar4 == uVar6);
        if ((int)((uint)DAT_03001069 << 0x1c) < 0) {
          puVar2[uVar5 * 3 + 2] =
               (uint)(uVar4 == uVar6) | ((uint)(byte)(&DAT_03001560)[uVar6 * 0x68] << 0x1e) >> 0x1f;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 9);
  }
  return;
}


/* sub_08004C8C @ 0x08004C8C */

undefined4 sub_08004C8C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar2 = param_1 + 0xc;
    do {
      if (*(int *)(iVar1 * 0xc + iVar2 + 0xc) == *(int *)(param_1 + 0x7c)) {
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) {
            return 0;
          }
        } while (*(int *)(iVar1 * 0xc + iVar2 + 8) == 0);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 * 0xc + iVar2 + 0xc);
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  return 0;
}


/* sub_08004CE0 @ 0x08004CE0 */

undefined4 sub_08004CE0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = 0;
  if (0 < iVar3) {
    iVar2 = param_1 + 0xc;
    do {
      if (*(int *)(iVar1 * 0xc + iVar2 + 0xc) == *(int *)(param_1 + 0x7c)) {
        do {
          iVar1 = iVar1 + 1;
          if (iVar3 <= iVar1) {
            return 0;
          }
        } while (*(int *)(iVar1 * 0xc + iVar2 + 8) == 0);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 * 0xc + iVar2 + 0xc);
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return 0;
}


/* sub_08004D38 @ 0x08004D38 */

int sub_08004D38(int param_1)

{
  int iVar1;
  undefined1 auStack_8bc [1272];
  undefined1 auStack_3c4 [936];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(0x180), param_1 != 0)) {
    sub_08046FF4(param_1,param_1 + 0x180,0x80,0x805049d);
    sub_08046DD0(auStack_8bc,&DAT_03001068,0x8a8);
    iVar1 = 0;
    do {
      sub_08004BC0(iVar1 * 0x80 + param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    sub_08046DD0(&DAT_03001068,auStack_8bc,0x4f8);
    sub_08047018(&DAT_03001560,auStack_3c4,&uStack_1c,0x68,0x805023d);
    DAT_0300190c = uStack_18;
    DAT_03001908 = uStack_1c;
  }
  return param_1;
}


/* sub_08004DC0 @ 0x08004DC0 */

undefined4 sub_08004DC0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 0x80) != 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 0;
}


/* sub_08004DD8 @ 0x08004DD8 */

void sub_08004DD8(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2 * 0x80) = 0;
  *(undefined4 *)(param_2 * 0x80 + param_1 + 0xc) = 0;
  sub_08004A3A(param_2);
  return;
}


/* sub_08004E0C @ 0x08004E0C */

void sub_08004E0C(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049354;
    param_1[1] = 0;
  }
  return;
}


/* sub_08004E26 @ 0x08004E26 */

void sub_08004E26(void)

{
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [36];
  undefined4 uStack_18;
  
  sub_0804912C(0x6000000,0,0x18000);
  sub_0803F540(auStack_3c,0xf0,0xa0);
  Wfz_LoadContainer(&gUnknown_08055620,uStack_18);
  sub_0803F9B8(auStack_3c,&DAT_06000040);
  uStack_44 = 0x1e;
  uStack_40 = 0x14;
  uStack_4c = 0;
  uStack_48 = 0;
  sub_0803DA10(&uStack_4c,&DAT_0600f800,1);
  REG_BG3CNT = 0x1f83;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_DISPCNT = 0x800;
  REG_BLDCNT = 0x2048;
  DAT_04000053 = 0;
  REG_BLDALPHA = 0;
  sub_08049144(0x5000000,0x805652c,0x200);
  DAT_03003301 = 0;
  sub_0803F58C(auStack_3c,0);
  return;
}


/* sub_08004EA6 @ 0x08004EA6 */

undefined4 sub_08004EA6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 < 0x11) {
    REG_BLDALPHA = (char)iVar1;
    return 0;
  }
  if (iVar1 < 0x97) {
    return 0;
  }
  if (iVar1 < 0xa7) {
    REG_BLDALPHA = -0x5a - (char)iVar1;
    return 0;
  }
  if (iVar1 < 0xb4) {
    return 0;
  }
  return 1;
}


/* sub_08004EDA @ 0x08004EDA */

void sub_08004EDA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03003301 = 1;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_08004F1C @ 0x08004F1C */

void sub_08004F1C(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint a1;
  
  a1 = 0x1010101;
  param_2 = *(int *)(param_1 + 0x24) + param_3 * *(int *)(param_1 + 0x28) + param_2;
  if (param_5 != 0) {
    do {
      sub_0804912C(param_2,a1,param_4);
      param_5 = param_5 + -1;
      param_2 = *(int *)(param_1 + 0x28) + param_2;
      a1 = a1 ^ 0x31313131;
    } while (param_5 != 0);
  }
  return;
}


/* sub_08004F50 @ 0x08004F50 */

void sub_08004F50(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = param_2[2] - *param_2;
  iVar4 = param_2[3] - param_2[1];
  puVar6 = (undefined4 *)
           (*(int *)(param_1 + 0x28) * param_2[1] + *(int *)(param_1 + 0x24) + *param_2);
  puVar1 = (undefined1 *)((int)puVar6 + iVar5 + -5);
  iVar3 = 0;
  puVar2 = puVar6;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = 0x13f6e1d;
    *(undefined2 *)(puVar2 + 1) = 0x3001;
    *puVar1 = 0x30;
    *(undefined4 *)(puVar1 + 1) = 0x3f6e1d01;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x28) + (int)puVar2);
    puVar1 = puVar1 + *(int *)(param_1 + 0x28);
  } while (iVar3 < 3);
  for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
    *puVar2 = 0x13f6e1d;
    *(undefined2 *)(puVar2 + 1) = 0x3001;
    *puVar1 = 0x30;
    *(undefined4 *)(puVar1 + 1) = 0x3f6e1d01;
    *(undefined2 *)(puVar1 + 5) = 0x101;
    puVar1[7] = 1;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x28) + (int)puVar2);
    puVar1 = puVar1 + *(int *)(param_1 + 0x28);
  }
  sub_08046E40(puVar6,0x1d,iVar5);
  iVar3 = *(int *)(param_1 + 0x28);
  sub_08046E40((int)puVar6 + iVar3 + 1,0x6e);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 2,0x3f);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 3,1);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 3,1,iVar5 + -6);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 5,0x30);
  iVar3 = (iVar4 + -10) * *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 5,0x30,iVar5 + -10);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 3,1,iVar5 + -6);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 2,0x1d,iVar5 + -4);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 1,0x6e,iVar5 + -2);
  iVar3 = (int)puVar6 + *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40(iVar3,0x3f,iVar5);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40(iVar3 + 3,1,iVar5);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40(iVar3 + 3,1,iVar5);
  sub_08046E40(*(int *)(param_1 + 0x28) + iVar3 + 3,1,iVar5);
  return;
}


/* sub_08005096 @ 0x08005096 */

void sub_08005096(int param_1)

{
  int iVar1;
  int iVar2;
  int a0;
  uint a1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_24 = 0;
  local_1c = 8;
  local_18 = *(int *)(param_1 + 0x2c) + -8;
  local_20 = 0;
  sub_0803F974(param_1,&local_24,0);
  local_1c = *(int *)(param_1 + 0x28);
  local_24 = local_1c + -8;
  local_18 = *(int *)(param_1 + 0x2c) + -8;
  local_20 = 0;
  sub_0803F974(param_1,&local_24,0);
  local_18 = *(int *)(param_1 + 0x2c);
  local_1c = *(undefined4 *)(param_1 + 0x28);
  local_20 = local_18 + -8;
  local_24 = 0;
  sub_0803F974(param_1,&local_24,0);
  iVar1 = *(int *)(param_1 + 0x28);
  local_1c = iVar1 + -0xc;
  local_24 = 0xc;
  local_18 = *(int *)(param_1 + 0x2c) + -0xc;
  local_20 = 4;
  a1 = 0x1010101;
  a0 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28) * 4 + 0xc;
  for (iVar2 = *(int *)(param_1 + 0x2c) + -0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    sub_0804912C(a0,a1,iVar1 + -0x18);
    a0 = *(int *)(param_1 + 0x28) + a0;
    a1 = a1 ^ 0x31313131;
  }
  local_24 = 8;
  local_18 = *(int *)(param_1 + 0x2c) + -8;
  local_1c = *(int *)(param_1 + 0x28) + -8;
  local_20 = 0;
  sub_08004F50(param_1,&local_24);
  return;
}


/* sub_08005154 @ 0x08005154 */

void sub_08005154(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  puVar3 = (undefined1 *)(iVar2 + param_3 * *(int *)(param_1 + 0x28) + param_2);
  iVar1 = (param_4 - param_2) + -2;
  *puVar3 = 0x2f;
  sub_08046E40(puVar3 + 1,0x30,iVar1,iVar2,param_4);
  puVar3[(param_4 - param_2) + -1] = 0x31;
  sub_08046E40(puVar3 + (1 - *(int *)(param_1 + 0x28)),0x2f,iVar1);
  sub_08046E40(puVar3 + *(int *)(param_1 + 0x28) + 1,0x31,iVar1);
  return;
}


/* sub_080051B0 @ 0x080051B0 */

void sub_080051B0(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x24) + param_3 * *(int *)(param_1 + 0x28) + param_2);
  *puVar1 = 0x2f;
  puVar1 = puVar1 + *(int *)(param_1 + 0x28) + -1;
  for (iVar2 = (param_4 - param_3) + -2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0x2f;
    puVar1[1] = 0x30;
    puVar1[2] = 0x31;
    puVar1 = puVar1 + *(int *)(param_1 + 0x28);
  }
  puVar1[1] = 0x31;
  return;
}


/* sub_080051E6 @ 0x080051E6 */

void sub_080051E6(undefined4 param_1)

{
  undefined1 auStack_40 [36];
  undefined4 uStack_1c;
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  Wfz_LoadContainer(&gUnknown_083BE3D4,uStack_1c);
  sub_0803F9D4(auStack_40,&gUnknown_080561CC,&gUnknown_08056A2C);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_080051E8 @ 0x080051E8 */

void sub_080051E8(undefined4 param_1)

{
  undefined1 auStack_40 [36];
  undefined4 local_1c;
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  Wfz_LoadContainer(&gUnknown_083BE3D4,local_1c);
  sub_0803F9D4(auStack_40,&gUnknown_080561CC,&gUnknown_08056A2C);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_08005228 @ 0x08005228 */

void sub_08005228(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080060A8(puVar1,param_1,0,1,1,0xffffffff,0xffffffff,1,0x78,0x78,0,1);
    *puVar1 = &_0804D82C;
  }
  sub_0800664E(param_1,puVar1);
  puVar1 = (undefined4 *)sub_0803D5B8(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080060A8(puVar1,param_1,1,0,0,0xffffffff,0xffffffff,2,0x78,0x86,1,1);
    *puVar1 = &_0804D82C;
  }
  sub_0800664E(param_1,puVar1);
  uVar2 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar2);
  return;
}


/* sub_080052C4 @ 0x080052C4 */

undefined4 sub_080052C4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &_0804920C;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_08049B00;
    }
    sub_0803D850();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    uVar2 = 1;
  }
  else if (param_3 == 1) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &_0804920C;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      puVar1[0x45] = &_0804BF28;
      *puVar1 = &_0804A430;
      puVar1[0x45] = &DAT_0804a468;
      *(undefined1 *)(puVar1 + 0x46) = (undefined1)DAT_03001914;
      *(undefined1 *)((int)puVar1 + 0x119) = DAT_03001914._1_1_;
      *(undefined1 *)((int)puVar1 + 0x11a) = DAT_03001914._2_1_;
      *(undefined1 *)((int)puVar1 + 0x11b) = DAT_03001914._3_1_;
    }
    sub_0803D850();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_08005366 @ 0x08005366 */

undefined4 sub_08005366(void)

{
  return 0;
}


/* sub_0800536A @ 0x0800536A */

void sub_0800536A(void)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  REG_DISPCNT = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BLDCNT = 0;
  REG_BG1CNT = 0x1e83;
  sub_0804912C(0x6000000,0,0x9640);
  uStack_18 = 0x1e;
  uStack_14 = 0x14;
  uStack_20 = 0;
  uStack_1c = 0;
  sub_0803DA10(&uStack_20,&DAT_0600f000,1);
  REG_DISPCNT = 0x200;
  return;
}


/* sub_080053CC @ 0x080053CC */

void sub_080053CC(undefined4 param_1)

{
  sub_0800536A();
  sub_08005228(param_1);
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  if ((DAT_030038a9 != '\x01') || (DAT_030038b0 != &PTR_gUnknown_083B3590_083bbb10)) {
    sub_0803F110();
  }
  return;
}


/* sub_08005402 @ 0x08005402 */

void sub_08005402(int param_1,int param_2)

{
  if ((*(char *)(param_1 + 5) != '\x01') || (*(int *)(param_1 + 0xc) != param_2)) {
    sub_0803F110();
  }
  return;
}


/* sub_08005460 @ 0x08005460 */

undefined4 *
sub_08005460(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x2f8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    *param_1 = &_08049728;
    sub_08004D38(param_1 + 0x4b);
    param_1[0x45] = param_2;
    param_1[0x46] = param_3;
    param_1[0x4a] = 0;
    param_1[0x48] = param_4;
    param_1[0x47] = 0xffffffff;
    *(undefined1 *)(param_1 + 0x49) = 6;
  }
  return param_1;
}


/* sub_080054BA @ 0x080054BA */

void sub_080054BA(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x47] != param_1[0x4a]) {
    param_1[0x47] = param_1[0x4a];
    sub_08011B04(&DAT_03001c4c);
    iVar4 = 0;
    do {
      iVar3 = 0;
      piVar1 = param_1 + (param_1[0x47] + iVar4) * 0x20 + 0x4e;
      if (0 < *piVar1) {
        do {
          iVar2 = sub_0800EB60(0,piVar1[iVar3 * 3 + 1],&DAT_03001b0c);
          param_1[iVar4 * 8 + iVar3 + 0xae] = iVar2;
          if (piVar1[iVar3 * 3 + 2] == 0) {
            sub_0800EECC(iVar2,&gUnknown_0805682C);
            *(undefined1 *)(iVar2 + 0x10) = 1;
          }
          *(int *)(iVar2 + 0x6c) = iVar3 * 0x10 + 0x12;
          *(int *)(iVar2 + 0x70) = iVar4 * 0x34 + 0x44;
          sub_0801191A(&DAT_03001c4c,iVar2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
  }
  return;
}


/* sub_08005578 @ 0x08005578 */

void sub_08005578(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = 2;
  if (*(int *)(param_1 + 0x10c) == param_3) {
    uVar1 = *(undefined1 *)(param_1 + 0x124);
  }
  param_2[3] = uVar1;
  *(undefined **)(param_2 + 0xc) = &gUnknown_0806E050;
  *param_2 = 0;
  *(int *)(param_2 + 8) = param_4 + 8;
  *(undefined4 *)(param_2 + 4) = 0x10;
  sub_0803DC96(param_2,L"Game %d",param_3 + 1);
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  *(int *)(param_2 + 8) = param_4 + 0xe;
  *(undefined4 *)(param_2 + 4) = 100;
  if (*(int *)(param_1 + 300 + param_3 * 0x80) == 0) {
    sub_0803DADA(param_2,*(undefined4 *)(&gUIStringPtrs + *(int *)(param_1 + 0x118) * 4));
  }
  else {
    iVar3 = param_3 * 0x80 + param_1 + 300;
    sub_0803DCC4(param_2,0x6c,*(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(iVar3 + 4) * 4));
    *(int *)(param_2 + 8) = param_4 + 0x1b;
    *(undefined4 *)(param_2 + 4) = 100;
    sub_0803DCC4(param_2,0x6c,*(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(iVar3 + 6) * 4));
    uVar2 = *(undefined4 *)(iVar3 + 8);
    *(int *)(param_2 + 8) = param_4 + 0x28;
    *(undefined4 *)(param_2 + 4) = 100;
    uVar4 = sub_0805313C(uVar2);
    sub_0803DC96(param_2,L"%d:%02d",(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
  }
  return;
}


/* sub_08005632 @ 0x08005632 */

void sub_08005632(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_44 [52];
  
  iVar1 = *(int *)(param_1 + 0x10c);
  if (iVar1 < *(int *)(param_1 + 0x128)) {
    *(int *)(param_1 + 0x128) = iVar1;
  }
  if (*(int *)(param_1 + 0x128) + 1 < iVar1) {
    *(int *)(param_1 + 0x128) = iVar1 + -1;
  }
  if ((*(int *)(param_1 + 0x120) == 0) || (iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2ac) + 8) = uVar2;
  if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x10c) == 2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 8) = uVar2;
  sub_0803F540(auStack_44,0xf0,0xa0);
  sub_08006718(param_1,auStack_44,*(undefined4 *)(param_1 + 0x114),1);
  sub_08005578(param_1,auStack_44,*(undefined4 *)(param_1 + 0x128),0x20);
  sub_08005578(param_1,auStack_44,*(int *)(param_1 + 0x128) + 1,0x54);
  sub_08005154(auStack_44,0x14,0x50,0xd0);
  sub_080051B0(auStack_44,0xdb,0x2e,0x74);
  sub_08049150((int)auStack_44,0x6000040);
  sub_080054BA(param_1);
  sub_0803F58C(auStack_44,0);
  return;
}


/* sub_08005714 @ 0x08005714 */

undefined4 sub_08005714(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 2) {
    if (*(int *)(param_1 + 0x10c) != 0) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (param_3 == 3) {
    if (*(int *)(param_1 + 0x10c) < 2) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_08005740 @ 0x08005740 */

void sub_08005740(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  wchar16 *pwVar3;
  
  sub_08011B04(&DAT_03001c4c);
  sub_080115B0(&DAT_03001c4c);
  sub_0801157E(&DAT_03001c4c);
  pwVar3 = L"Cancel";
  uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0,L"Cancel");
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar1 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,iVar2 + 0x2e,0x90,pwVar3,5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,2,0xd4,0x1e,2,1,0);
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  uVar1 = sub_08013E64(0,param_1,3,0xd4,0x74,3,1,0);
  *(undefined4 *)(param_1 + 0x2b0) = uVar1;
  sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x2ac));
  sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x2b0));
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}


/* sub_08005864 @ 0x08005864 */

void sub_08005864(int *param_1)

{
  sub_08011B04(&DAT_03001c4c);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08005882 @ 0x08005882 */

undefined4 sub_08005882(int param_1,undefined4 *param_2)

{
  *param_2 = 0x10;
  param_2[1] = (*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x128)) * 0x34 + 0x26;
  return 1;
}


/* sub_0800589C @ 0x0800589C */

void sub_0800589C(void)

{
  sub_080067D6();
  sub_080115B0(&DAT_03001c4c);
  return;
}


/* sub_080058AC @ 0x080058AC */

void sub_080058AC(undefined4 param_1)

{
  sub_0801157E(&DAT_03001c4c);
  sub_08011A1E(&DAT_03001c4c);
  sub_080067F4(param_1);
  return;
}


/* sub_080058C6 @ 0x080058C6 */

void sub_080058C6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(*param_1 + 0x24);
  __call_via_r1(param_1,iVar3 + *param_1,iVar3,param_4,param_4);
  iVar3 = param_1[0x43];
  iVar4 = param_1[0xbe];
  uVar5 = sub_0803D5B8(0x124);
  puVar2 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  puVar1 = (undefined4 *)uVar5;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804920C;
    puVar1[1] = 0;
    puVar1[0x43] = 0;
    puVar1[0x42] = 0;
    puVar1[0x44] = 0;
    *puVar1 = &_080496FC;
    puVar1[0x45] = iVar3;
    iVar3 = param_1[0xc0];
    puVar1[0x46] = param_1[0xbf];
    puVar1[0x47] = iVar3;
    puVar1[0x48] = iVar4;
    puVar2 = puVar1 + 0x49;
  }
  sub_0803D8A0(puVar1,puVar2);
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  REG_DISPCNT = 0;
  DAT_03001910 = param_1[0x43];
  sub_0803D876(2);
  return;
}


/* sub_08005948 @ 0x08005948 */

undefined4 sub_08005948(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    sub_080058C6();
    return 1;
  }
  if (param_3 == 1) {
    sub_0804912C(0x5000200,0,0x200);
    sub_0804912C(0x5000000,0,0x200);
    REG_DISPCNT = 0;
    sub_0803D876(1);
    return 1;
  }
  if (param_3 == 2) {
    if (*(int *)(param_1 + 0x10c) != 0) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (param_3 == 3) {
    if (*(int *)(param_1 + 0x10c) < 2) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_080059C8 @ 0x080059C8 */

void sub_080059C8(undefined4 param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  REG_DISPCNT = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BLDCNT = 0;
  sub_08005740(param_1);
  REG_BG1CNT = 0x1e83;
  REG_DISPCNT = 0x1240;
  sub_0804912C(0x6000000,0,0x9640);
  uStack_18 = 0x1e;
  uStack_14 = 0x14;
  uStack_20 = 0;
  uStack_1c = 0;
  sub_0803DA10(&uStack_20,&DAT_0600f000,1);
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}


/* sub_08005A50 @ 0x08005A50 */

undefined4 sub_08005A50(void)

{
  sub_080058C6();
  return 0;
}


/* sub_08005A5A @ 0x08005A5A */

void sub_08005A5A(undefined4 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  sub_08005740();
  uVar2 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar2);
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x1040;
  return;
}


/* sub_08005ABE @ 0x08005ABE */

undefined4 sub_08005ABE(int *param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  switch(param_3) {
  case 0:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319494,0x40,0);
    if (param_1[0xbe] == 0) {
      __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
      sub_08009680(&DAT_030019a4);
      DAT_03001910 = param_1[0x43];
      if (param_1[DAT_03001910 * 0x20 + 0x4b] == 0) {
        sub_080042FC(&DAT_03001068);
        sub_0800432C(&DAT_03001068);
        puVar3 = (undefined4 *)sub_0803D5B8(4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &_080494AC;
        }
        sub_0803D850();
        sub_08012588(&gUnknown_0877CBF0,0);
      }
      else {
        sub_080048A0();
        DAT_03001068 = (byte)param_1[param_1[0x43] * 0x20 + 0x6a];
        DAT_03001544 = 0;
        sub_0800432C(&DAT_03001068);
        puVar2 = (undefined1 *)sub_08004A76(&DAT_03001068);
        puVar3 = (undefined4 *)sub_0803D5B8(0x40c);
        if (puVar3 != (undefined4 *)0x0) {
          sub_080176AC(puVar3);
          *puVar3 = &_0804BBA4;
          puVar3[0x102] = 0x10;
          puVar3[0x101] = 0;
        }
        sub_0803D8A0(puVar3);
        puVar3 = (undefined4 *)sub_0803D5B8(4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &_080494AC;
        }
        sub_0803D850();
        sub_08008D44(&DAT_0300197c,*puVar2,puVar2[1],&DAT_0300190c,DAT_03001908._2_1_,1);
        sub_0801711C(&gUnknown_086B82EC +
                     (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
        puVar3 = (undefined4 *)sub_0803D5B8(0xc);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &_080495B4;
          puVar3[1] = 0;
          puVar3[2] = 4;
        }
        sub_0803D8A0();
      }
    }
    else if ((param_1 + 0x4b)[param_1[0x43] * 0x20] != 0) {
      puVar3 = (undefined4 *)sub_0803D5B8(0x114);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_0804920C;
        puVar3[1] = 0;
        puVar3[0x43] = 0;
        puVar3[0x42] = 0;
        puVar3[0x44] = 0;
        *puVar3 = &_08049CEC;
      }
      iVar4 = sub_0803D8A0();
      if (iVar4 == 2) {
        sub_08004DD8(param_1 + 0x4b,param_1[0x43]);
        *(undefined4 *)(param_1[0xad] + 8) = 0;
        param_1[0x47] = -1;
        param_1[0x44] = 0;
      }
    }
    return 1;
  case 1:
    uVar1 = REG_DISPCNT;
    REG_DISPCNT = uVar1 & 0xefff;
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar3 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &_0804920C;
      puVar3[1] = 0;
      puVar3[0x43] = 0;
      puVar3[0x42] = 0;
      puVar3[0x44] = 0;
      *puVar3 = &_08049B00;
    }
    sub_0803D850();
    return 1;
  case 2:
    if (param_1[0x43] != 0) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      iVar4 = param_1[0x43];
      param_1[0x43] = iVar4 + -1;
      if (param_1[0xbe] != 0) {
        *(int *)(param_1[0xad] + 8) = param_1[(iVar4 + -1) * 0x20 + 0x4b];
      }
    }
    param_1[0x47] = -1;
    param_1[0x44] = 0;
    break;
  case 3:
    if (param_1[0x43] < 2) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      iVar4 = param_1[0x43];
      param_1[0x43] = iVar4 + 1;
      if (param_1[0xbe] != 0) {
        *(int *)(param_1[0xad] + 8) = param_1[(iVar4 + 1) * 0x20 + 0x4b];
      }
    }
    param_1[0x47] = -1;
    param_1[0x44] = 0;
    break;
  case 6:
  case 7:
    if (param_1[0xbe] == 0) {
      param_1[0x45] = 0xb;
      param_1[0x44] = 0;
      *(undefined1 *)(param_1 + 0x49) = 3;
      param_1[0xbe] = 1;
      *(int *)(param_1[0xad] + 8) = param_1[param_1[0x43] * 0x20 + 0x4b];
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
      param_1[0x44] = 0;
    }
    else {
      param_1[0x45] = 9;
      param_1[0x44] = 0;
      *(undefined1 *)(param_1 + 0x49) = 6;
      param_1[0xbe] = 0;
      *(undefined4 *)(param_1[0xad] + 8) = 1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
      param_1[0x44] = 0;
    }
  }
  return 0;
}


/* sub_08005E3A @ 0x08005E3A */

undefined4 sub_08005E3A(int param_1)

{
  int iVar1;
  
  if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
    if ((*(int *)(*(int *)(param_1 + 0x10c) * 0x80 + param_1 + 300) != 0) &&
       (iVar1 = sub_08004C8C(), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    if ((*(int *)(*(int *)(param_1 + 0x10c) * 0x80 + param_1 + 300) != 0) &&
       (iVar1 = sub_08004CE0(), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  return 0;
}


/* sub_08005E9A @ 0x08005E9A */

void sub_08005E9A(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  iVar5 = *(int *)(param_1 + 0x10c) * 0x80;
  if (*(int *)(param_1 + 300 + iVar5) != 0) {
    iVar5 = iVar5 + param_1 + 300;
    iVar7 = 0;
    if (0 < *(int *)(iVar5 + 0xc)) {
      do {
        if (*(int *)(iVar7 * 0xc + iVar5 + 0x18) == *(int *)(iVar5 + 0x7c)) {
          piVar1 = *(int **)((*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x128)) * 0x20 +
                             param_1 + iVar7 * 4 + 0x2b8);
          iVar5 = *piVar1;
          __call_via_r2(piVar1,1,*(int *)(iVar5 + 0x28) + iVar5);
          iVar5 = *(int *)(param_1 + 0x10c);
          iVar6 = *(int *)(param_1 + 0x128);
          iVar9 = 0;
          do {
            iVar2 = iVar9 * 0xc;
            puVar3 = (undefined4 *)sub_0803D5B8(0x2c);
            if (puVar3 != (undefined4 *)0x0) {
              sVar8 = (ushort)(byte)(&DAT_080561ff)[iVar2] * (ushort)(byte)(&DAT_080561fe)[iVar2];
              *puVar3 = &_08049680;
              *(short *)((int)puVar3 + 0xe) = sVar8;
              iVar4 = sub_0801124C(&DAT_03001c4c,sVar8);
              if (iVar4 == -1) {
                sub_08011732(&DAT_03001c4c,sVar8);
                iVar4 = sub_0801124C(&DAT_03001c4c,sVar8);
              }
              *(short *)(puVar3 + 3) = (short)iVar4;
              *puVar3 = &_0804BA50;
              puVar3[10] = &DAT_080561fc + iVar2;
              puVar3[8] = iVar7 * 0x10 + 0x12;
              puVar3[9] = (iVar5 - iVar6) * 0x34 + 0x2c;
              *(undefined1 *)(puVar3 + 2) = 0x3a;
              sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(puVar3 + 3) * 0x20),
                           (&DAT_08056204)[iVar9 * 3],
                           (uint)(byte)(&DAT_080561ff)[iVar2] * (uint)(byte)(&DAT_080561fe)[iVar2]);
            }
            sub_0801191A(&DAT_03001c4c,puVar3);
            iVar9 = iVar9 + 1;
          } while (iVar9 < 4);
          return;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar5 + 0xc));
    }
  }
  return;
}


/* sub_08005FA8 @ 0x08005FA8 */

void sub_08005FA8(int param_1)

{
  *(int *)(*(int *)(param_1 + 4) + 0x108) = param_1;
  return;
}


/* sub_08005FB2 @ 0x08005FB2 */

void sub_08005FB2(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  return;
}


/* sub_08005FBE @ 0x08005FBE */

undefined4 *
sub_08005FBE(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[1] = param_2;
  *param_1 = &_0804A238;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  return param_1;
}


/* sub_08005FD4 @ 0x08005FD4 */

undefined4 sub_08005FD4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_4;
  if (*(int *)(param_1[1] + 0x10c) == param_1[2]) {
    uVar3 = (uint)DAT_03003304;
    if (((int)(uVar3 << 0x19) < 0) && (-1 < param_1[3])) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      iVar1 = param_1[1];
      *(int *)(iVar1 + 0x10c) = param_1[3];
      *(undefined4 *)(iVar1 + 0x110) = 0;
      return 1;
    }
    if (((int)(uVar3 << 0x18) < 0) && (-1 < param_1[4])) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      iVar1 = param_1[1];
      *(int *)(iVar1 + 0x10c) = param_1[4];
      *(undefined4 *)(iVar1 + 0x110) = 0;
      return 1;
    }
    iVar1 = -((int)(uVar3 << 0x1a) >> 0x1f);
    if ((iVar1 != 0) && (iVar1 = param_1[5], -1 < iVar1)) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      iVar1 = param_1[1];
      *(int *)(iVar1 + 0x10c) = param_1[5];
      *(undefined4 *)(iVar1 + 0x110) = 0;
      return 1;
    }
    if (((int)(uVar3 << 0x1b) < 0) && (-1 < param_1[6])) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      iVar1 = param_1[1];
      *(int *)(iVar1 + 0x10c) = param_1[6];
      *(undefined4 *)(iVar1 + 0x110) = 0;
      return 1;
    }
  }
  iVar4 = *(int *)(*param_1 + 0x18);
  uVar2 = __call_via_r1(param_1,iVar4 + *param_1,iVar4,iVar1,param_4);
  return uVar2;
}


/* sub_080060A8 @ 0x080060A8 */

undefined4 *
sub_080060A8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined1 param_12)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar1);
    *param_1 = &_0804B2DC;
    param_1[10] = param_11;
    param_1[7] = *(undefined4 *)(&gUIStringPtrs + param_8 * 4);
    param_1[8] = param_9;
    param_1[9] = param_10;
    *(undefined1 *)(param_1 + 0xb) = param_12;
  }
  return param_1;
}


/* sub_080060F8 @ 0x080060F8 */

undefined4 *
sub_080060F8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar1);
    *param_1 = &_0804B2DC;
    param_1[10] = param_11;
    param_1[7] = param_8;
    param_1[8] = param_9;
    param_1[9] = param_10;
    *(undefined1 *)(param_1 + 0xb) = param_12;
  }
  return param_1;
}


/* sub_08006142 @ 0x08006142 */

void sub_08006142(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_2 = *(undefined1 *)(param_1 + 0x2c);
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    uVar1 = 6;
  }
  else {
    uVar1 = 2;
  }
  param_2[3] = uVar1;
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 8) = uVar2;
  sub_0803DADA(param_2,*(undefined4 *)(param_1 + 0x1c));
  return;
}


/* sub_08006182 @ 0x08006182 */

undefined4 sub_08006182(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (((DAT_03003304 & 9) == 0) ||
     (piVar1 = *(int **)(param_1 + 4), piVar1[0x43] != *(int *)(param_1 + 8))) {
    uVar2 = 0;
  }
  else {
    uVar2 = __call_via_r3(piVar1,param_1,*(undefined4 *)(param_1 + 0x28),
                          *(int *)(*piVar1 + 0x20) + *piVar1,param_4);
  }
  return uVar2;
}


/* sub_080061B2 @ 0x080061B2 */

undefined4 sub_080061B2(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    cVar1 = *(char *)(param_1 + 0x2c);
    if (cVar1 == '\0') {
      *param_2 = *(int *)(param_1 + 0x20);
    }
    else if (cVar1 == '\x01') {
      iVar3 = sub_0803FFE8(&gUnknown_0807012C,*(undefined4 *)(param_1 + 0x1c),param_3,param_4,
                           param_4);
      *param_2 = *(int *)(param_1 + 0x20) - (iVar3 >> 1);
    }
    else if (cVar1 == '\x02') {
      iVar3 = sub_0803FFE8(&gUnknown_0807012C,*(undefined4 *)(param_1 + 0x1c),param_3,param_4,
                           param_4);
      *param_2 = *(int *)(param_1 + 0x20) - iVar3;
    }
    param_2[1] = *(int *)(param_1 + 0x24) + -4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0800620C @ 0x0800620C */

void sub_0800620C(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_2 = 1;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f70d;
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    uVar1 = 6;
  }
  else {
    uVar1 = 2;
  }
  param_2[3] = uVar1;
  *(undefined **)(param_2 + 0xc) = &gUnknown_0806E050;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 8) = uVar2;
  sub_0803DADA(param_2,*(undefined4 *)(param_1 + 0x1c));
  return;
}


/* sub_08006248 @ 0x08006248 */

bool sub_08006248(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8);
  if (bVar2) {
    iVar1 = sub_0803FFE8(&gUnknown_0806E050,*(undefined4 *)(param_1 + 0x1c),param_3,param_4,param_4)
    ;
    *param_2 = *(int *)(param_1 + 0x20) - (iVar1 >> 1);
    param_2[1] = *(int *)(param_1 + 0x24) + -3;
  }
  return bVar2;
}


