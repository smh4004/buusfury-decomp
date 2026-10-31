/* Ghidra reference decompilation of code_0802DF44 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0802DF44 @ 0x0802DF44 */

void sub_0802DF44(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) - (*(int *)(param_2 + 0x1a0) >> 8);
  iVar3 = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) - (*(int *)(param_2 + 0x1a4) >> 8);
  if (iVar2 + iVar3 < 0 == SBORROW4(iVar2,-iVar3)) {
    iVar1 = iVar2 * 0xf;
    if (iVar1 + iVar3 * 4 < 0 == SBORROW4(iVar1,iVar3 * -4)) {
      if (iVar3 < iVar2) {
        *(undefined1 *)(param_2 + 0x11) = 9;
      }
      else if (iVar1 == iVar3 * 4 || iVar1 + iVar3 * -4 < 0 != SBORROW4(iVar1,iVar3 * 4)) {
        *(undefined1 *)(param_2 + 0x11) = 5;
      }
      else {
        *(undefined1 *)(param_2 + 0x11) = 7;
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x11) = 3;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x11) = 1;
  }
  return;
}


/* sub_0802DFCA @ 0x0802DFCA */

undefined4 * sub_0802DFCA(void)

{
  return &DAT_030030d4;
}


/* sub_0802DFD8 @ 0x0802DFD8 */

void sub_0802DFD8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_r5;
  int iVar2;
  
  iVar1 = sub_0800EE9E(param_2);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0x60);
    if (iVar2 == iVar1) {
      unaff_r5 = sub_08000158(0x5e);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0xdc);
      if (iVar2 == iVar1) {
        unaff_r5 = sub_08000158(0xdb);
      }
      else {
        iVar2 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0xe5);
        if (iVar2 == iVar1) {
          unaff_r5 = sub_08000158(0xe4);
        }
      }
    }
    sub_0800EDF8(param_2,unaff_r5);
  }
  sub_0800EE9E(param_2);
  return;
}


/* sub_0802E036 @ 0x0802E036 */

undefined4 * sub_0802E036(void)

{
  return &DAT_030030d8;
}


/* sub_0802E040 @ 0x0802E040 */

void sub_0802E040(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_r5;
  int iVar2;
  
  iVar1 = sub_0800EE9E(param_2);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0x5e);
    if (iVar2 == iVar1) {
      unaff_r5 = sub_08000158(0x60);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0xdb);
      if (iVar2 == iVar1) {
        unaff_r5 = sub_08000158(0xdc);
      }
      else {
        iVar2 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0xe4);
        if (iVar2 == iVar1) {
          unaff_r5 = sub_08000158(0xe5);
        }
      }
    }
    sub_0800EDF8(param_2,unaff_r5);
  }
  sub_0800EE9E(param_2);
  return;
}


/* sub_0802E09E @ 0x0802E09E */

undefined4 * sub_0802E09E(void)

{
  return &DAT_030030dc;
}


/* sub_0802E0A8 @ 0x0802E0A8 */

undefined4 sub_0802E0A8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  sub_0803BB48();
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_2 + 0x1a0);
  iVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x1a4);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 0x800) {
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0x800) {
      return 1;
    }
  }
  return 0;
}


/* sub_0802E100 @ 0x0802E100 */

undefined4 sub_0802E100(void)

{
  return 0;
}


/* sub_0802E104 @ 0x0802E104 */

void sub_0802E104(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0x32;
    puVar1[1] = uVar2;
    puVar1[5] = 0;
    *puVar1 = &_08049A3C;
    puVar1[7] = iVar3 << 8;
    puVar1[8] = iVar4 << 8;
  }
  return;
}


/* sub_0802E130 @ 0x0802E130 */

void sub_0802E130(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,3,0,param_4,param_4);
  return;
}


/* sub_0802E146 @ 0x0802E146 */

void sub_0802E146(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iStack_c;
  int iStack_8;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x30) {
    uVar2 = (uint)uVar1 << 0x16;
    *(char *)((int)param_2 + 0x11) = (char)(uVar2 >> 0x18);
    if (2 < uVar2 >> 0x18) {
      *(undefined1 *)((int)param_2 + 0x11) = 2;
    }
    iStack_c = (param_2[0x68] >> 8) +
               *(int *)(&gUnknown_08757324 + (uint)*(byte *)(param_2 + 4) * 8);
    iStack_8 = (param_2[0x69] >> 8) + *(int *)(&DAT_08757328 + (uint)*(byte *)(param_2 + 4) * 8);
    sub_080249E0(&iStack_c);
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802E1BA @ 0x0802E1BA */

void sub_0802E1BA(void)

{
  sub_0803E32C(&DAT_03003e5c,&DAT_0831959c,0x40,0);
  return;
}


/* sub_0802E1D8 @ 0x0802E1D8 */

bool sub_0802E1D8(undefined4 param_1,int param_2)

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
  sub_0800ECDA(param_2,3);
  sub_0800ED18(param_2,&DAT_030030e0);
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
  return *(undefined4 **)((int)((ulonglong)uVar5 >> 0x20) + 0x14) != &DAT_030030e0;
}


/* sub_0802E254 @ 0x0802E254 */

undefined4 * sub_0802E254(void)

{
  return &DAT_030030e4;
}


/* sub_0802E278 @ 0x0802E278 */

void sub_0802E278(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  
  sub_0800DE6C();
  if (((*(char *)(param_2 + 0x11) == '\x02') && (*(int *)(param_1 + 8) == 0)) &&
     (iVar1 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar1)) {
    iVar1 = (uint)*(byte *)(param_2 + 0x10) * 8;
    local_18 = (*(int *)(param_2 + 0x1a0) >> 8) + *(int *)(&DAT_08757354 + iVar1);
    local_14 = (*(int *)(param_2 + 0x1a4) >> 8) + *(int *)(&DAT_08757358 + iVar1);
    uVar2 = sub_0801C900(0,&local_18,*(undefined1 *)(param_2 + 0x10),param_2,local_18);
    sub_0801191A(&DAT_03001c4c,uVar2);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}


/* sub_0802E2F2 @ 0x0802E2F2 */

undefined4 * sub_0802E2F2(void)

{
  return &DAT_030030e8;
}


/* sub_0802E300 @ 0x0802E300 */

undefined4 sub_0802E300(undefined4 param_1,int param_2)

{
  if (*(int *)(*(int *)(param_2 + 0x58) + 0x9c) != *(int *)(param_2 + 0x50)) {
    sub_0800ECDA(param_2,0x12);
    sub_0800ED18(param_2,&DAT_03001b20);
  }
  if (*(short *)(param_2 + 0x176) < 0) {
    *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + 1;
    return 0;
  }
  return 1;
}


/* sub_0802E33A @ 0x0802E33A */

undefined4 * sub_0802E33A(void)

{
  return &DAT_030030f8;
}


/* sub_0802E348 @ 0x0802E348 */

void sub_0802E348(int param_1,undefined4 param_2,int param_3)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - (*(int *)(param_3 + 0x18) >> 10);
  return;
}


/* sub_0802E354 @ 0x0802E354 */

void sub_0802E354(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0x96;
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  uVar2 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D74;
    puVar1[1] = uVar2;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  sub_08010BB8(DAT_03001c34,puVar1);
  return;
}


/* sub_0802E384 @ 0x0802E384 */

void sub_0802E384(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((DAT_03003304 & 0xf3) != 0) {
    piVar3 = (int *)(*(int *)(param_1 + 4) + 4);
    *piVar3 = *piVar3 + -5;
  }
  *(bool *)((int)param_2 + 0x11) = *(int *)(*(int *)(param_1 + 4) + 4) < *(int *)(param_1 + 8) / 2;
  if (*(int *)(*(int *)(param_1 + 4) + 4) < 1) {
    iVar1 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar1) {
      iVar1 = sub_0803FACC(0x1000);
      sub_0800FE34(&iStack_2c,param_2);
      iStack_18 = iStack_28 + iStack_20 >> 1;
      iStack_1c = iStack_2c + iStack_24 >> 1;
      uVar2 = sub_0802A81C(0,&iStack_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802E42E @ 0x0802E42E */

void sub_0802E42E(undefined4 param_1)

{
  sub_08010BB8(DAT_03001c34,&DAT_03001c3c);
  sub_0803D63C(param_1);
  return;
}


/* sub_0802E444 @ 0x0802E444 */

undefined4 *
sub_0802E444(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x54), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,param_4);
    *param_1 = &_0804AC5C;
    iVar4 = *param_2;
    iVar7 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar4 << 8;
    param_1[9] = iVar7 << 8;
    iVar7 = *param_5 - *param_2;
    puVar8 = param_1 + 0x10;
    iVar5 = param_5[1] - param_2[1];
    iVar4 = iVar7;
    if (iVar7 < 0) {
      iVar4 = -iVar7;
    }
    iVar1 = iVar5;
    if (iVar5 < 0) {
      iVar1 = -iVar5;
    }
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    iVar1 = iVar7 * 0x20000 >> 8;
    iVar6 = iVar5 * 0x20000 >> 8;
    uVar2 = __16__rt_sdiv(iVar4 * 0x100,iVar1 << 8,iVar6,iVar5 * 0x100,iVar1,iVar6,puVar8,iVar1);
    uVar3 = __16__rt_sdiv(iVar4 * 0x100,iVar6 << 8);
    *puVar8 = uVar2;
    param_1[0x11] = uVar3;
    param_1[6] = &gUnknown_087579B8;
    param_1[0x13] = 0;
    iVar4 = iVar7 * 2;
    if (iVar4 + iVar5 * 5 < 0 == SBORROW4(iVar4,iVar5 * -5)) {
      iVar7 = iVar7 * 0xc;
      if (iVar7 + iVar5 * 5 < 0 == SBORROW4(iVar7,iVar5 * -5)) {
        iVar1 = iVar4 + iVar5 * -5;
        if (iVar1 == 0 || iVar1 < 0 != SBORROW4(iVar4,iVar5 * 5)) {
          iVar4 = iVar7 + iVar5 * -5;
          if (iVar4 == 0 || iVar4 < 0 != SBORROW4(iVar7,iVar5 * 5)) {
            param_1[6] = &UNK_087579e8;
          }
          else {
            param_1[6] = &UNK_08757a00;
          }
        }
        else {
          param_1[6] = &UNK_08757a18;
        }
      }
      else {
        param_1[6] = &DAT_087579d0;
      }
    }
    *(undefined1 *)(param_1 + 2) = 0x37;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_0802E55A @ 0x0802E55A */

void sub_0802E55A(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  return;
}


/* sub_0802E55E @ 0x0802E55E */

void sub_0802E55E(int param_1)

{
  sub_08011944(*(undefined4 *)(param_1 + 4));
  return;
}


/* sub_0802E568 @ 0x0802E568 */

void sub_0802E568(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
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
  
  uVar2 = *(int *)(param_1 + 0x48) + 1;
  *(uint *)(param_1 + 0x48) = uVar2;
  if ((uVar2 & 3) == 0) {
    if (*(uint *)(param_1 + 0x4c) == 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0xc;
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -0xc;
    }
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) ^ 1;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  sub_08019B4E(param_1);
  if (param_2 != 0) {
    iVar3 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
    if (iVar3 == 0) {
      sub_08011944(&DAT_03001c4c,param_1);
    }
    else if (*(int *)(param_1 + 0x1c) != 0) {
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
      iVar3 = sub_08011C70(&DAT_03001c4c,0,auStack_48);
      uVar1 = DAT_03001c34;
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)sub_0803D5B8(0xc);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = &_0804AB34;
        }
        sub_0800ECDA(uVar1,0x15);
        sub_0800ED18(uVar1,puVar4);
        sub_08011944(&DAT_03001c4c,param_1);
      }
    }
  }
  return;
}


/* sub_0802E65C @ 0x0802E65C */

undefined4 sub_0802E65C(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30)) &&
              (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
             (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
            (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))) {
      sub_08011944(&DAT_03001c4c,param_1,*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x34),param_4);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}


/* sub_0802E6AC @ 0x0802E6AC */

void sub_0802E6AC(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_0802BFBC(*(undefined4 *)(param_1 + 4),&gUnknown_087573A0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}


/* sub_0802E6CC @ 0x0802E6CC */

void sub_0802E6CC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011944(&DAT_03001c4c,param_1[3],param_3,param_4,param_4);
  sub_080115B0(&DAT_03001c4c);
  sub_0801157E(&DAT_03001c4c);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_0802E6FA @ 0x0802E6FA */

void sub_0802E6FA(void)

{
  sub_080115B0(&DAT_03001c4c);
  return;
}


/* sub_0802E708 @ 0x0802E708 */

bool sub_0802E708(int param_1)

{
  ushort uVar1;
  
  sub_0801157E(&DAT_03001c4c);
  sub_08011A1E(&DAT_03001c4c);
  uVar1 = *(short *)(param_1 + 8) + 1;
  *(ushort *)(param_1 + 8) = uVar1;
  return 0x3c < uVar1;
}


/* sub_0802E732 @ 0x0802E732 */

undefined4 * sub_0802E732(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0x200;
  iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0x200);
    iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804A394;
  sub_0803F540(param_1 + 4,0x20);
  param_1[7] = &gUnknown_0807012C;
  *(undefined1 *)((int)param_1 + 0x13) = 2;
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  param_1[0xc] = 0x803f5a5;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0x78;
  param_1[6] = 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0x7fffffff;
  param_1[0x11] = 0;
  return param_1;
}


/* sub_0802E7AA @ 0x0802E7AA */

void sub_0802E7AA(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 1;
  return;
}


/* sub_0802E7B0 @ 0x0802E7B0 */

undefined4 sub_0802E7B0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}


/* sub_0802E7B4 @ 0x0802E7B4 */

undefined4 sub_0802E7B4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  sub_08046E40(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x14) = 8;
  *(undefined4 *)(param_1 + 0x18) = 7;
  sub_0803DC96(param_1 + 0x10,&_0802E82C,DAT_03002c00);
  sub_0804915C(param_1 + 0x10,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
               0x87573a8);
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x8078600c;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffffc00;
  return 0;
}


/* sub_0802E80E @ 0x0802E80E */

undefined4 sub_0802E80E(void)

{
  return 2;
}


/* sub_0802E83C @ 0x0802E83C */

undefined4 * sub_0802E83C(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iStack_20;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x178), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    piVar6 = param_1 + 0x45;
    *param_1 = &_0804A5E0;
    *piVar6 = 0;
    sub_08011B04(&DAT_03001c4c);
    sub_080115B0(&DAT_03001c4c);
    sub_0801157E(&DAT_03001c4c);
    param_1[0x5d] = param_2;
    iVar1 = sub_0800433E(&DAT_03001068);
    iStack_20 = __16__rt_sdiv(iVar1,0x90);
    if (0x30 < iStack_20) {
      iStack_20 = 0x30;
    }
    iVar1 = 0x70 - ((iVar1 + -1) * iStack_20 >> 1);
    param_1[0x58] = 0;
    uVar5 = 0;
    do {
      if (((&DAT_03001560)[uVar5 * 0x68] & 1) != 0) {
        iVar4 = *piVar6;
        if (DAT_03001068 == uVar5) {
          param_1[0x58] = iVar4;
        }
        *piVar6 = iVar4 + 1;
        piVar6[iVar4 * 2 + 1] = uVar5;
        uVar2 = sub_0801713C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[uVar5 * 0x68] * 0x18);
        iVar3 = sub_0800EB60(0,uVar2,&DAT_03001b0c);
        piVar6[iVar4 * 2 + 2] = iVar3;
        *(undefined4 *)(iVar3 + 0x70) = 0x58;
        *(int *)(iVar3 + 0x6c) = iVar1;
        iVar1 = iVar1 + iStack_20;
        if ((-1 < (int)((uint)(byte)(&DAT_03001560)[piVar6[iVar4 * 2 + 1] * 0x68] << 0x1e)) &&
           (*(undefined1 *)(piVar6[iVar4 * 2 + 2] + 0x10) = 1,
           *(undefined **)(piVar6[iVar4 * 2 + 2] + 0x38) != &gUnknown_0805682C)) {
          sub_0800EECC();
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 9);
    iVar1 = piVar6[param_1[0x58] * 2 + 2];
    param_1[0x59] = iVar1;
    sub_0800ECDA(iVar1,1);
    sub_0800ED18(iVar1,&DAT_03001b58);
  }
  return param_1;
}


/* sub_0802E97A @ 0x0802E97A */

/* WARNING: Control flow encountered bad instruction data */

void sub_0802E97A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *unaff_r8;
  uint unaff_r11;
  undefined4 in_r12;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar7 = auStack_28;
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  uVar4 = 0;
  REG_DISPCNT = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BG1CNT = 0x1e83;
  sub_0804912C(0x6000000,0,0x9640);
  uStack_1c = 0x1e;
  uStack_18 = 0x14;
  uStack_24 = 0;
  uStack_20 = 0;
  puVar9 = (undefined *)0x802e9d9;
  sub_0803DA10(&uStack_24,&DAT_0600f000,1);
  REG_DISPCNT = 0x1240;
  puVar5 = (uint *)(param_1 + 0x114);
  uVar1 = *puVar5;
  puVar6 = &gUnknown_08757A30;
  bVar12 = uVar1 == 0;
  bVar10 = true;
  bVar11 = false;
  iVar3 = extraout_r1;
  puVar8 = (undefined4 *)auStack_28;
  if (0 < (int)uVar1) {
    do {
      if (!bVar12) {
        *(undefined4 *)(uVar1 + 4) = param_4;
        *(uint *)(uVar1 + 8) = uVar4;
        *(uint **)(uVar1 + 0xc) = puVar5;
        *(undefined4 **)(uVar1 + 0x10) = puVar6;
      }
      if (bVar11) {
        uVar1 = *unaff_r8;
        puVar6 = (undefined4 *)unaff_r8[1];
        unaff_r11 = unaff_r8[2];
        puVar7 = (undefined1 *)unaff_r8[3];
        unaff_r8 = unaff_r8 + 5;
      }
      puVar9 = &UNK_0802e9f9;
      sub_0801191A(uVar1);
      uVar1 = *puVar5;
      uVar4 = uVar4 + 1;
      bVar10 = uVar4 <= uVar1;
      bVar11 = SBORROW4(uVar1,uVar4);
      bVar12 = uVar1 == uVar4;
      iVar3 = extraout_r1_00;
      puVar8 = (undefined4 *)puVar7;
    } while (!bVar12 && (int)uVar4 <= (int)uVar1);
  }
  if (!bVar10) {
    iVar3 = 0xdc;
  }
  if (bVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar11) {
    *puVar5 = (uint)puVar6;
    *(uint **)(param_1 + 0x118) = unaff_r8;
    *(uint *)(param_1 + 0x11c) = unaff_r11;
    *(undefined4 *)(param_1 + 0x120) = in_r12;
    iVar3 = 0x3000 - (int)puVar9;
  }
  sub_0800ECDA(uVar1,iVar3);
  sub_0800ED18(puVar5,&DAT_03001b58);
  puVar8[3] = 0;
  puVar8[4] = L"Cancel";
  *puVar8 = 0x84;
  puVar8[2] = 1;
  puVar8[1] = 0;
  uVar2 = sub_08013E64(0,param_1,0,0xc);
  sub_0800664E(param_1,uVar2);
  uVar2 = puVar6[1];
  puVar8[2] = 0;
  puVar8[3] = uVar2;
  puVar8[1] = 5;
  *puVar8 = L"Select";
  uVar2 = sub_08014124(0,param_1,0x1c,0x90);
  sub_0800664E(param_1,uVar2);
  iVar3 = sub_0803FFE8(puVar6[1],L"Select");
  puVar8[3] = 0;
  *puVar8 = 0x84;
  puVar8[1] = 1;
  puVar8[2] = 1;
  uVar2 = sub_08013E64(0,param_1,1,iVar3 + 0x1e);
  sub_0800664E(param_1,uVar2);
  puVar8[3] = puVar6[1];
  puVar8[2] = 0;
  *puVar8 = puVar8[4];
  puVar8[1] = 5;
  uVar2 = sub_08014124(0,param_1,iVar3 + 0x2e,0x90);
  sub_0800664E(param_1,uVar2);
  puVar8[3] = 0;
  puVar8[2] = 1;
  *puVar8 = 0x4a;
  puVar8[1] = 4;
  uVar2 = sub_08013E64(0,param_1,4,0x18);
  *(undefined4 *)(uVar4 + 0x28) = uVar2;
  puVar8[3] = 0;
  puVar8[2] = 1;
  *puVar8 = 0x4a;
  puVar8[1] = 5;
  uVar2 = sub_08013E64(0,param_1,5,200);
  *(undefined4 *)(uVar4 + 0x2c) = uVar2;
  sub_0800664E(param_1,*(undefined4 *)(uVar4 + 0x28));
  sub_0800664E(param_1,*(undefined4 *)(uVar4 + 0x2c));
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}


/* sub_0802EB64 @ 0x0802EB64 */

void sub_0802EB64(int *param_1)

{
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_0802EB94 @ 0x0802EB94 */

void sub_0802EB94(void)

{
  sub_080067D6();
  sub_080115B0(&DAT_03001c4c);
  return;
}


/* sub_0802EBA4 @ 0x0802EBA4 */

void sub_0802EBA4(undefined4 param_1)

{
  sub_0801157E(&DAT_03001c4c);
  sub_08011A1E(&DAT_03001c4c);
  sub_080067F4(param_1);
  return;
}


/* sub_0802EBBE @ 0x0802EBBE */

int sub_0802EBBE(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x160);
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 0x114) <= iVar1) {
      return -1;
    }
  } while (-1 < (int)((uint)(byte)(&DAT_03001560)[((int *)(param_1 + 0x114))[iVar1 * 2 + 1] * 0x68]
                     << 0x1e));
  return iVar1;
}


/* sub_0802EC00 @ 0x0802EC00 */

int sub_0802EC00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x160);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return -1;
    }
  } while (-1 < (int)((uint)(byte)(&DAT_03001560)[*(int *)(iVar1 * 8 + param_1 + 0x118) * 0x68] <<
                     0x1e));
  return iVar1;
}


/* sub_0802EC3E @ 0x0802EC3E */

void sub_0802EC3E(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_44 [52];
  
  iVar2 = *(int *)(param_1 + 0x168);
  iVar1 = sub_0802EC00();
  *(uint *)(iVar2 + 8) = (uint)(iVar1 != -1);
  iVar2 = *(int *)(param_1 + 0x16c);
  iVar1 = sub_0802EBBE(param_1);
  *(uint *)(iVar2 + 8) = (uint)(iVar1 != -1);
  sub_0803F540(auStack_44,0xf0,0xa0);
  sub_08006718(param_1,auStack_44,0xc,1);
  sub_08049150((int)auStack_44,0x6000040);
  sub_0803F58C(auStack_44,0);
  return;
}


/* sub_0802EC9C @ 0x0802EC9C */

void sub_0802EC9C(int param_1)

{
  undefined4 uVar1;
  
  sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
  uVar1 = *(undefined4 *)(param_1 + 0x164);
  sub_0800ECDA(uVar1,0);
  sub_0800ED18(uVar1,&DAT_03001b0c);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x160) * 8 + param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  sub_0800ECDA(uVar1,1);
  sub_0800ED18(uVar1,&DAT_03001b58);
  return;
}


/* sub_0802ECEA @ 0x0802ECEA */

undefined4 sub_0802ECEA(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    DAT_03001068 = (undefined1)*(undefined4 *)(*(int *)(param_1 + 0x160) * 8 + param_1 + 0x118);
    DAT_03001544 = 0;
    sub_0803D876(2);
    uVar1 = 1;
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    sub_0803D876(1);
    uVar1 = 1;
  }
  else {
    if (param_3 == 4) {
      uVar1 = sub_0802EC00(param_1);
      *(undefined4 *)(param_1 + 0x160) = uVar1;
      sub_0802EC9C(param_1);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else if (param_3 == 5) {
      uVar1 = sub_0802EBBE(param_1);
      *(undefined4 *)(param_1 + 0x160) = uVar1;
      sub_0802EC9C(param_1);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0802ED98 @ 0x0802ED98 */

void sub_0802ED98(int *param_1)

{
  int *piVar1;
  int *a1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 auStack_88 [8];
  int iStack_80;
  uint local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  int local_58 [4];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 auStack_38 [24];
  int *piStack_20;
  int *piStack_1c;
  int local_18;
  
  sub_08046FF4(auStack_38,&piStack_20,8,0x8050761);
  sub_0803FCF4(auStack_38,param_1 + 3);
  piVar1 = param_1 + 0x11;
  sub_0803FCB4();
  param_1[0x15] = param_1[0x15] - *param_1;
  param_1[0x16] = param_1[0x16] - param_1[1];
  sub_0803FD76(local_58 + 2,piVar1,auStack_38);
  sub_08047018(piVar1,local_58 + 2,auStack_38,8,0x80502a1);
  a1 = param_1 + 0x17;
  sub_0804035C();
  local_44 = *param_1;
  local_40 = param_1[1];
  local_3c = param_1[2];
  param_1[0x20] = param_1[0x20] - local_44;
  param_1[0x21] = param_1[0x21] - local_40;
  param_1[0x22] = param_1[0x22] - local_3c;
  local_48 = param_1[3] << 5;
  local_5c = __16__rt_sdiv(2);
  local_18 = (int)local_5c >> 0xf;
  uVar2 = local_5c & 0x7fff;
  local_58[0] = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)((local_18 + 0x40) * 0x1000000) >> 0x16))
                      * (0x8000 - uVar2) +
                     uVar2 * *(int *)(&gUnknown_087B6EEC +
                                     ((uint)((local_18 + 0x41) * 0x1000000) >> 0x16))) >> 0x10;
  local_58[3] = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)(local_18 << 0x18) >> 0x16)) *
                      (0x8000 - uVar2) +
                     *(int *)(&gUnknown_087B6EEC + ((uint)((local_18 + 1) * 0x1000000) >> 0x16)) *
                     uVar2) >> 0x10;
  local_58[1] = 0;
  local_58[2] = 0;
  local_68 = sub_08054A64(0x46b504f7);
  local_60 = 0;
  local_5c = 0;
  local_48 = param_1[4] << 5;
  local_64 = local_68;
  local_7c = __16__rt_sdiv(2);
  iVar3 = (int)local_7c >> 0xf;
  uVar2 = local_7c & 0x7fff;
  local_78 = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x16)) *
                   (0x8000 - uVar2) +
                  uVar2 * *(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x41) * 0x1000000) >> 0x16)
                                  )) >> 0x10;
  local_70 = 0;
  local_6c = 0;
  local_74 = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)(iVar3 << 0x18) >> 0x16)) * (0x8000 - uVar2)
                  + *(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 1) * 0x1000000) >> 0x16)) * uVar2
                  ) >> 0x10;
  sub_08052F08(auStack_88,local_58,&local_68);
  sub_08052F08(&iStack_98,auStack_88,&local_78);
  sub_08046FF4(&iStack_c8,&iStack_98,0xc,0x8050791);
  iVar6 = iStack_94 * 2 * iStack_98 >> 0xf;
  iVar3 = iStack_90 * 2;
  iStack_cc = iVar3 * iStack_98 >> 0xf;
  iVar4 = iStack_8c * 2;
  iStack_d0 = iVar4 * iStack_98 >> 0xf;
  iVar7 = iStack_94 * 2 * iStack_94 >> 0xf;
  iStack_d4 = iVar3 * iStack_94 >> 0xf;
  iStack_d8 = iVar4 * iStack_94 >> 0xf;
  iVar3 = iVar3 * iStack_90 >> 0xf;
  iVar5 = iVar4 * iStack_8c >> 0xf;
  iStack_c8 = 0x8000 - (iVar3 + iVar5) >> 5;
  iStack_c4 = iStack_d4 - iStack_d0 >> 5;
  iVar4 = iVar4 * iStack_90 >> 0xf;
  iStack_c0 = iStack_d8 + iStack_cc >> 5;
  iStack_bc = iStack_d4 + iStack_d0 >> 5;
  iStack_b8 = 0x8000 - (iVar5 + iVar7) >> 5;
  iStack_ac = iVar4 + iVar6 >> 5;
  iStack_b4 = iVar4 - iVar6 >> 5;
  iStack_a8 = 0x8000 - (iVar7 + iVar3) >> 5;
  iStack_b0 = iStack_d8 - iStack_cc >> 5;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  sub_08049174((int)auStack_f8,(int)a1,(int)&iStack_c8);
  sub_08047018(a1,auStack_f8,&iStack_c8,0xc,0x80502ad);
  *a1 = *a1 << 1;
  param_1[0x1a] = param_1[0x1a] << 1;
  param_1[0x20] = param_1[0x20] << 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x400;
  param_1[0x1f] = 0;
  iVar3 = (int)(param_1[4] - 0x2f80U) >> 10;
  uVar2 = param_1[4] - 0x2f80U & 0x3ff;
  param_1[5] = ((int)(*(int *)(&gUnknown_087B72EC + ((uint)(iVar3 << 0x18) >> 0x16)) *
                      (0x400 - uVar2) +
                     *(int *)(&gUnknown_087B72EC + ((uint)((iVar3 + 1) * 0x1000000) >> 0x16)) *
                     uVar2) >> 0x10) * param_1[2] >> 10;
  iVar3 = (int)(param_1[4] + 0x7ef9U) >> 10;
  uVar2 = param_1[4] + 0x7ef9U & 0x3ff;
  iVar3 = (((int)((0x400 - uVar2) * *(int *)(&gUnknown_087B72EC + ((uint)(iVar3 << 0x18) >> 0x16)) +
                 uVar2 * *(int *)(&gUnknown_087B72EC + ((uint)((iVar3 + 1) * 0x1000000) >> 0x16)))
           >> 0x10) *
           (((int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x16)) *
                   (0x400 - uVar2) +
                  *(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x41) * 0x1000000) >> 0x16)) *
                  uVar2) >> 0x10) * param_1[2] >> 10) >> 10) + -0x400;
  iVar4 = *param_1 - (iVar3 * param_1[0x12] >> 10) >> 10;
  piStack_1c = param_1 + 0x13;
  param_1[6] = iVar4;
  iVar5 = param_1[1] - (iVar3 * param_1[0x14] >> 10) >> 10;
  param_1[7] = iVar5;
  param_1[8] = iVar4;
  param_1[9] = iVar5;
  iStack_80 = iVar4 - (param_1[0x12] * 0xe0 >> 10);
  local_7c = iVar5 - (param_1[0x14] * 0xe0 >> 10);
  piStack_20 = param_1 + 6;
  sub_08053294(piStack_20,&iStack_80);
  iStack_80 = iVar4 - (*piVar1 * 0x70 >> 10);
  local_7c = iVar5 - (*piStack_1c * 0x70 >> 10);
  sub_08053294(piStack_20,&iStack_80);
  iStack_80 = (*piVar1 * 0x70 >> 10) + iVar4;
  local_7c = (*piStack_1c * 0x70 >> 10) + iVar5;
  sub_08053294(piStack_20,&iStack_80);
  iVar3 = param_1[3] >> 10;
  iStack_80 = (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0xec) * 0x1000000) >> 0x16)) * 0xe0 >>
              0x10) + iVar4;
  local_7c = iVar5 - (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 300) * 0x1000000) >> 0x16)) *
                      0xe0 >> 0x10);
  sub_08053294(piStack_20,&iStack_80);
  iStack_80 = (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x14) * 0x1000000) >> 0x16)) * 0xe0 >>
              0x10) + iVar4;
  local_7c = iVar5 - (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x54) * 0x1000000) >> 0x16)) *
                      0xe0 >> 0x10);
  sub_08053294(piStack_20,&iStack_80);
  param_1[8] = param_1[8] + 1;
  param_1[9] = param_1[9] + 1;
  return;
}


/* sub_0802EF16 @ 0x0802EF16 */

void sub_0802EF16(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_r4;
  int *unaff_r5;
  int *unaff_r6;
  int iVar6;
  int iStack00000028;
  int iStack0000002c;
  int iStack00000030;
  int iStack00000034;
  int iStack00000038;
  int iStack0000003c;
  int iStack00000040;
  int iStack00000044;
  int iStack00000048;
  int iStack0000004c;
  int iStack00000050;
  int iStack00000054;
  int iStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000070;
  int in_stack_00000074;
  int in_stack_00000080;
  int in_stack_00000084;
  int *in_stack_000000e0;
  int *in_stack_000000e4;
  
  iVar5 = in_stack_0000006c * 2 * in_stack_00000068 >> 0xf;
  iVar1 = in_stack_00000070 * 2;
  iStack00000034 = iVar1 * in_stack_00000068 >> 0xf;
  iVar3 = in_stack_00000074 * 2;
  iStack00000030 = iVar3 * in_stack_00000068 >> 0xf;
  iVar6 = in_stack_0000006c * 2 * in_stack_0000006c >> 0xf;
  iStack0000002c = iVar1 * in_stack_0000006c >> 0xf;
  iStack00000028 = iVar3 * in_stack_0000006c >> 0xf;
  iVar1 = iVar1 * in_stack_00000070 >> 0xf;
  iVar4 = iVar3 * in_stack_00000074 >> 0xf;
  iStack00000038 = 0x8000 - (iVar1 + iVar4) >> 5;
  iStack0000003c = iStack0000002c - iStack00000030 >> 5;
  iVar3 = iVar3 * in_stack_00000070 >> 0xf;
  iStack00000040 = iStack00000028 + iStack00000034 >> 5;
  iStack00000044 = iStack0000002c + iStack00000030 >> 5;
  iStack00000048 = 0x8000 - (iVar4 + iVar6) >> 5;
  iStack00000054 = iVar3 + iVar5 >> 5;
  iStack0000004c = iVar3 - iVar5 >> 5;
  iStack00000058 = 0x8000 - (iVar6 + iVar1) >> 5;
  iStack00000050 = iStack00000028 - iStack00000034 >> 5;
  uStack0000005c = 0;
  uStack00000060 = 0;
  uStack00000064 = 0;
  sub_08049174((int)&stack0x00000008,(int)unaff_r5,(int)&stack0x00000038);
  sub_08047018(unaff_r5,&stack0x00000008,&stack0x00000038,0xc);
  *unaff_r5 = *unaff_r5 << 1;
  unaff_r5[3] = unaff_r5[3] << 1;
  unaff_r5[9] = unaff_r5[9] << 1;
  unaff_r5[6] = 0;
  unaff_r5[7] = 0x400;
  unaff_r5[8] = 0;
  iVar1 = (int)(unaff_r4[4] - 0x2f80U) >> 10;
  uVar2 = unaff_r4[4] - 0x2f80U & 0x3ff;
  unaff_r4[5] = ((int)(*(int *)(&gUnknown_087B72EC + ((uint)(iVar1 << 0x18) >> 0x16)) *
                       (0x400 - uVar2) +
                      *(int *)(&gUnknown_087B72EC + ((uint)((iVar1 + 1) * 0x1000000) >> 0x16)) *
                      uVar2) >> 0x10) * unaff_r4[2] >> 10;
  iVar1 = (int)(unaff_r4[4] + 0x7ef9U) >> 10;
  uVar2 = unaff_r4[4] + 0x7ef9U & 0x3ff;
  iVar1 = (((int)((0x400 - uVar2) * *(int *)(&gUnknown_087B72EC + ((uint)(iVar1 << 0x18) >> 0x16)) +
                 uVar2 * *(int *)(&gUnknown_087B72EC + ((uint)((iVar1 + 1) * 0x1000000) >> 0x16)))
           >> 0x10) *
           (((int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x16)) *
                   (0x400 - uVar2) +
                  *(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 0x41) * 0x1000000) >> 0x16)) *
                  uVar2) >> 0x10) * unaff_r4[2] >> 10) >> 10) + -0x400;
  iVar4 = *unaff_r4 - (iVar1 * unaff_r6[1] >> 10) >> 10;
  in_stack_000000e4 = unaff_r6 + 2;
  iVar3 = unaff_r6[3];
  unaff_r4[6] = iVar4;
  iVar3 = unaff_r4[1] - (iVar1 * iVar3 >> 10) >> 10;
  unaff_r4[7] = iVar3;
  unaff_r4[8] = iVar4;
  unaff_r4[9] = iVar3;
  in_stack_00000080 = iVar4 - (unaff_r6[1] * 0xe0 >> 10);
  in_stack_00000084 = iVar3 - (unaff_r6[3] * 0xe0 >> 10);
  in_stack_000000e0 = unaff_r4 + 6;
  sub_08053294(in_stack_000000e0,&stack0x00000080);
  in_stack_00000080 = iVar4 - (*unaff_r6 * 0x70 >> 10);
  in_stack_00000084 = iVar3 - (*in_stack_000000e4 * 0x70 >> 10);
  sub_08053294(in_stack_000000e0,&stack0x00000080);
  in_stack_00000080 = (*unaff_r6 * 0x70 >> 10) + iVar4;
  in_stack_00000084 = (*in_stack_000000e4 * 0x70 >> 10) + iVar3;
  sub_08053294(in_stack_000000e0,&stack0x00000080);
  iVar1 = unaff_r4[3] >> 10;
  in_stack_00000080 =
       (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 0xec) * 0x1000000) >> 0x16)) * 0xe0 >> 0x10)
       + iVar4;
  in_stack_00000084 =
       iVar3 - (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 300) * 0x1000000) >> 0x16)) * 0xe0 >>
               0x10);
  sub_08053294(in_stack_000000e0,&stack0x00000080);
  in_stack_00000080 =
       (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 0x14) * 0x1000000) >> 0x16)) * 0xe0 >> 0x10)
       + iVar4;
  in_stack_00000084 =
       iVar3 - (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 0x54) * 0x1000000) >> 0x16)) * 0xe0
               >> 0x10);
  sub_08053294(in_stack_000000e0,&stack0x00000080);
  unaff_r4[8] = unaff_r4[8] + 1;
  unaff_r4[9] = unaff_r4[9] + 1;
  return;
}


/* sub_0802F1C6 @ 0x0802F1C6 */

void sub_0802F1C6(int param_1,int param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  int local_20;
  int local_1c;
  int local_18;
  
  *param_3 = 0;
  sub_08049180((int)&local_20,param_2,param_1 + 0x5c);
  if ((0 < local_18) && (local_18 <= *(int *)(param_1 + 0x14))) {
    *param_3 = 1;
    *param_5 = local_18;
    software_interrupt(6);
    *param_4 = local_20 * 0x78 + 0x78;
    software_interrupt(6);
    param_4[1] = local_1c * -0x50 + 0x50;
  }
  return;
}


/* sub_0802F21A @ 0x0802F21A */

undefined4 * sub_0802F21A(void)

{
  return &DAT_030030fc;
}


/* sub_0802F21C @ 0x0802F21C */

undefined4 * sub_0802F21C(void)

{
  return &DAT_030030fc;
}


/* sub_0802F224 @ 0x0802F224 */

void sub_0802F224(undefined4 param_1,int param_2)

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


/* sub_0802F23A @ 0x0802F23A */

undefined4 sub_0802F23A(int param_1,int *param_2)

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
      iStack_20 = -iStack_20;
      iVar4 = iStack_2c;
    }
    else {
      *(byte *)(param_2 + 4) = (byte)((uint)iStack_20 >> 0x1f);
      iStack_24 = -iStack_24;
      iVar4 = iStack_28;
    }
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      if ((undefined4 *)param_2[5] != &DAT_03003100) {
        sub_0800ECDA(param_2,1);
        sub_0800ED18(param_2,&DAT_03003100);
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


/* sub_0802F3F2 @ 0x0802F3F2 */

bool sub_0802F3F2(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *unaff_r4;
  undefined4 *unaff_r5;
  int *unaff_r7;
  undefined4 in_stack_00000024;
  int iStack00000028;
  
  iStack00000028 = param_1 - *param_3;
  iVar1 = __call_via_r2(unaff_r4,param_2,*(int *)(*unaff_r4 + 0x54) + *unaff_r4);
  if (iVar1 == 0) {
    __call_via_r2(unaff_r4,0,*(int *)(*unaff_r4 + 0x48) + *unaff_r4);
  }
  else {
    *unaff_r5 = in_stack_00000024;
    *unaff_r7 = iStack00000028;
    __call_via_r2(unaff_r4,0,*(int *)(*unaff_r4 + 0x48) + *unaff_r4);
  }
  return iVar1 == 0;
}


/* sub_0802F434 @ 0x0802F434 */

undefined4 * sub_0802F434(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B1A0;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0802F458 @ 0x0802F458 */

undefined4 sub_0802F458(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [12];
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  sub_08046FF4(local_20,&stack0xfffffff0,8,0x8050751);
  local_20[0] = 0;
  local_20[1] = 0;
  local_24 = 0xfffff800;
  local_20[3] = 0xfffff800;
  local_28 = 0x1000;
  local_20[2] = 0x1000;
  iVar1 = sub_0803FACC(2);
  local_38 = param_2[0x68] + local_20[iVar1 * 2];
  local_34 = param_2[0x69] + local_20[iVar1 * 2 + 1];
  local_30 = local_38;
  local_2c = local_34;
  local_28 = local_38;
  local_24 = local_34;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  iVar1 = sub_08000158(0x57);
  iVar1 = sub_08009904(&DAT_030019a4,&local_28,iVar1 + 8);
  if (iVar1 == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    uVar2 = 0;
  }
  else {
    sub_08049138((int)auStack_48,0x8757a54,0x20);
    uStack_3c = (undefined2)((uint)local_28 >> 8);
    uStack_3a = (undefined2)((uint)local_24 >> 8);
    iVar3 = sub_0800F68C(0,auStack_48,&DAT_08711514,0xffffffff);
    sub_0801191A(&DAT_03001c4c,iVar3);
    *(int **)(iVar3 + 500) = param_2;
    iVar1 = param_2[0x7c];
    if (iVar1 == 0) {
      param_2[0x7c] = iVar3;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x1f8);
      while (iVar4 != 0) {
        iVar1 = *(int *)(iVar1 + 0x1f8);
        iVar4 = *(int *)(iVar1 + 0x1f8);
      }
      *(int *)(iVar1 + 0x1f8) = iVar3;
      *(int *)(iVar3 + 0x1fc) = iVar1;
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0802F4FA @ 0x0802F4FA */

undefined4 sub_0802F4FA(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined2 uStack0000000c;
  undefined2 uStack0000000e;
  undefined4 in_stack_00000024;
  
  uStack0000000c = (undefined2)((uint)param_1 >> 8);
  uStack0000000e = (undefined2)((uint)in_stack_00000024 >> 8);
  iVar1 = sub_0800F68C(0,unaff_r5,&DAT_08711514,0xffffffff);
  sub_0801191A(*unaff_r6,iVar1);
  *(int **)(iVar1 + 500) = unaff_r4;
  iVar2 = unaff_r4[0x7c];
  if (iVar2 == 0) {
    unaff_r4[0x7c] = iVar1;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x1f8);
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar2 + 0x1f8);
      iVar3 = *(int *)(iVar2 + 0x1f8);
    }
    *(int *)(iVar2 + 0x1f8) = iVar1;
    *(int *)(iVar1 + 0x1fc) = iVar2;
  }
  __call_via_r2(unaff_r4,0,*(int *)(*unaff_r4 + 0x48) + *unaff_r4);
  return 1;
}


/* sub_0802F570 @ 0x0802F570 */

void sub_0802F570(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = 0x78;
  *(undefined4 *)(param_2 + 0x204) = 0;
  return;
}


/* sub_0802F580 @ 0x0802F580 */

undefined4 sub_0802F580(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x204) == 8) {
    *(undefined4 *)(param_1 + 4) = 0x1e0;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
    if ((*(int *)(param_1 + 4) == 0) && (iVar1 = sub_0802F458(param_1), iVar1 != 0)) {
      *(int *)(param_2 + 0x204) = *(int *)(param_2 + 0x204) + 1;
      *(undefined4 *)(param_1 + 4) = 0x78;
    }
  }
  return 0;
}


/* sub_0802F5C2 @ 0x0802F5C2 */

void sub_0802F5C2(void)

{
  return;
}


/* sub_0802F5C4 @ 0x0802F5C4 */

void sub_0802F5C4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AD18;
  }
  return;
}


/* sub_0802F5EC @ 0x0802F5EC */

void sub_0802F5EC(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0802F5F8 @ 0x0802F5F8 */

void sub_0802F5F8(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x10) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if ((*(short *)((int)param_2 + 0x12) == 1) &&
       (iVar2 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar2)) {
      iStack_18 = (param_2[0x68] >> 8) + *(int *)(&DAT_08757a84 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_14 = (param_2[0x69] >> 8) + *(int *)(&DAT_08757a88 + (uint)*(byte *)(param_2 + 4) * 8);
      DAT_0300310c = sub_0802A2EC(0,&iStack_18,(char)param_2[4],param_2,iStack_18);
      sub_0801191A(&DAT_03001c4c,DAT_0300310c);
    }
  }
  else {
    iVar2 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[iVar2] == DAT_0300310c) {
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_03001c50);
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802F602 @ 0x0802F602 */

void sub_0802F602(ushort param_1,int param_2)

{
  int iVar1;
  int *unaff_r4;
  int in_stack_00000010;
  int in_stack_00000014;
  
  *(ushort *)(param_2 + 0x12) = param_1;
  if (param_1 < 0x10) {
    *(char *)((int)unaff_r4 + 0x11) = (char)(param_1 >> 3);
    if ((*(short *)((int)unaff_r4 + 0x12) == 1) &&
       (iVar1 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar1)) {
      in_stack_00000010 =
           (unaff_r4[0x68] >> 8) + *(int *)(&DAT_08757a84 + (uint)*(byte *)(unaff_r4 + 4) * 8);
      in_stack_00000014 =
           (unaff_r4[0x69] >> 8) + *(int *)(&DAT_08757a88 + (uint)*(byte *)(unaff_r4 + 4) * 8);
      DAT_0300310c = sub_0802A2EC(0,&stack0x00000010,(char)unaff_r4[4],unaff_r4);
      sub_0801191A(&DAT_03001c4c,DAT_0300310c);
    }
  }
  else {
    iVar1 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[iVar1] == DAT_0300310c) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_03001c50);
    }
    __call_via_r2(unaff_r4,0,*(int *)(*unaff_r4 + 0x28) + *unaff_r4);
  }
  return;
}


/* sub_0802F6A8 @ 0x0802F6A8 */

void sub_0802F6A8(undefined4 param_1,int param_2)

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
  sub_0800ED18(param_2,&DAT_03003108);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_0802F6F6 @ 0x0802F6F6 */

bool sub_0802F6F6(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003108;
}


/* sub_0802F6F8 @ 0x0802F6F8 */

int sub_0802F6F8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (*(undefined4 **)(param_2 + 0x14) != &DAT_03003108) {
    iVar1 = 0;
  }
  return param_3 - iVar1;
}


/* sub_0802F708 @ 0x0802F708 */

undefined4 * sub_0802F708(void)

{
  return &DAT_03003110;
}


/* sub_0802F724 @ 0x0802F724 */

undefined4 sub_0802F724(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_2 + 500) == 0) {
    return 1;
  }
  piVar1 = (int *)(*(int *)(param_2 + 500) + 0x204);
  *piVar1 = *piVar1 + -1;
  return 1;
}


/* sub_0802F742 @ 0x0802F742 */

undefined4 * sub_0802F742(void)

{
  return &DAT_03003114;
}


/* sub_0802F74C @ 0x0802F74C */

void sub_0802F74C(int param_1,int *param_2)

{
  if ((DAT_03001b94 != 0) && (*(int *)(DAT_03001b94 + 0x1cc) != 0)) {
    __call_via_r3(param_2,4,0,*(int *)(*param_2 + 0x30) + *param_2);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined2 *)(param_1 + 8) = 0x3c;
  }
  return;
}


/* sub_0802F77C @ 0x0802F77C */

/* WARNING: Removing unreachable block (ram,0x0802f81a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 sub_0802F77C(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined1 auStack_7c [4];
  int iStack_78;
  int iStack_70;
  int iStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  int *piStack_5c;
  int iStack_50;
  int *piStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int aiStack_30 [2];
  int iStack_28;
  undefined *puStack_20;
  int iStack_1c;
  int *piStack_18;
  
  piVar1 = DAT_03001b94;
  if ((DAT_03001b94 == (int *)0x0) || (DAT_03001b94[0x73] == 0)) {
    uVar2 = 0;
  }
  else {
    puStack_20 = &DAT_03003e5c;
    iStack_1c = param_1;
    piStack_18 = param_2;
    sub_0803E378(&DAT_03003e5c,&DAT_08319590,0x40,0);
    sub_0800FE78(aiStack_30,piVar1);
    sub_0800FE78(&iStack_40,param_2);
    iStack_50 = iStack_40 + iStack_38 >> 1;
    iStack_44 = iStack_3c + iStack_34 >> 1;
    uVar3 = (aiStack_30[0] + iStack_28 >> 1) - iStack_50;
    uVar5 = uVar3;
    if ((int)uVar3 < 0) {
      uVar5 = -uVar3;
    }
    if (uVar3 < 0x80000000) {
      coprocessor_moveto(0xc,0,1,uVar5,in_cr0,in_cr2);
    }
    if (uVar5 == 0) {
      coprocessor_load(2,in_cr4,piVar1 + -0x91);
    }
    if (0x7fffffff < uVar3 || uVar5 == 0) {
      return uRamffffffe4;
    }
    iStack_6c = uVar5 + 3;
    if ((int)uVar3 < 1) {
      *(undefined1 *)(param_2 + 4) = 2;
      iStack_78 = iStack_40 + -4;
      iStack_70 = iStack_50;
    }
    else {
      *(undefined1 *)(param_2 + 4) = 3;
      iStack_70 = iStack_38 + 3;
      iStack_78 = iStack_50;
    }
    uStack_68 = (undefined1)param_2[4];
    puStack_60 = &gUnknown_086B8098;
    uStack_64 = 0x400;
    auStack_7c[0] = 0;
    piStack_4c = param_2;
    iStack_48 = iStack_50;
    piStack_5c = param_2;
    iVar4 = __call_via_r3(piVar1,0,auStack_7c,*(int *)(*piVar1 + 0x24) + *piVar1);
    *(int *)(iStack_1c + 4) = iVar4;
    if (iVar4 != 0) {
      iVar4 = sub_0803FACC(2);
      sub_0803E378(puStack_20,&gUnknown_083192A8 + (iVar4 + 0x30) * 0xc,0x40,0);
    }
    __call_via_r2(param_2,4,*(int *)(*param_2 + 0x28) + *param_2);
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0802F8DA @ 0x0802F8DA */

bool sub_0802F8DA(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(short *)(param_1 + 8) != 0) {
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
    }
    if (*(short *)(param_1 + 8) == 0) {
      iVar1 = sub_0802F77C(param_1,param_2);
      *(int *)(param_1 + 0xc) = 1 - iVar1;
    }
  }
  return *(int *)(*(int *)(param_2 + 0x58) + 100) != *(int *)(param_2 + 0x50);
}


/* sub_0802F918 @ 0x0802F918 */

void sub_0802F918(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AD68;
  }
  return;
}


/* sub_0802F944 @ 0x0802F944 */

undefined4 sub_0802F944(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = sub_08000158(0xfc);
  iVar2 = sub_08011C70(&DAT_03001c4c,5,uVar1);
  if (((iVar2 != 0) && (*(undefined4 **)(iVar2 + 0x14) == &DAT_03001b30)) &&
     (iVar2 = sub_0800EEB0(iVar2,0x12), iVar2 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_0802F976 @ 0x0802F976 */

undefined4 * sub_0802F976(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804C1E4;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0802F9A0 @ 0x0802F9A0 */

int sub_0802F9A0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = sub_08000158(0xfc);
  iVar2 = sub_08011C70(&DAT_03001c4c,5,uVar1);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 != 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    puVar3 = (undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a0);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4);
    if (*(int *)(*(int *)(param_1 + 4) + 0x1a0) < param_2[0x68]) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0x2800;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x100;
      iVar2 = __call_via_r2(param_2,puVar3,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 != 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
        return 1;
      }
    }
    *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a0);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -0x2800;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x100;
    iVar2 = __call_via_r2(param_2,puVar3,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      iVar2 = 1;
    }
  }
  return iVar2;
}


/* sub_0802F9E6 @ 0x0802F9E6 */

bool sub_0802F9E6(int param_1,int param_2)

{
  int iVar1;
  int unaff_r4;
  int *unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  
  if (*(int *)(param_2 + param_1 + 0xa1) < *(int *)(param_1 + 0xa1 + (int)unaff_r5)) {
    *(int *)(unaff_r4 + 0xc) = *(int *)(unaff_r4 + 0xc) + 0x2800;
    *(int *)(unaff_r4 + 0x10) = *(int *)(unaff_r4 + 0x10) + 0x100;
    iVar1 = __call_via_r2(unaff_r5,unaff_r6,*(int *)(*unaff_r5 + 0x54) + *unaff_r5);
    if (iVar1 != 0) {
      __call_via_r2(unaff_r5,0,*(int *)(*unaff_r5 + 0x48) + *unaff_r5);
      return true;
    }
  }
  iVar1 = *(int *)(unaff_r4 + 4);
  *unaff_r6 = *(undefined4 *)(iVar1 + 0x1a0);
  *unaff_r7 = *(undefined4 *)(iVar1 + 0x1a4);
  *(int *)(unaff_r4 + 0xc) = *(int *)(unaff_r4 + 0xc) + -0x2800;
  *(int *)(unaff_r4 + 0x10) = *(int *)(unaff_r4 + 0x10) + 0x100;
  iVar1 = __call_via_r2(unaff_r5,unaff_r6,*(int *)(*unaff_r5 + 0x54) + *unaff_r5);
  if (iVar1 != 0) {
    __call_via_r2(unaff_r5,0,*(int *)(*unaff_r5 + 0x48) + *unaff_r5);
  }
  return iVar1 != 0;
}


/* sub_0802FBE8 @ 0x0802FBE8 */

undefined4 sub_0802FBE8(void)

{
  int iVar1;
  ushort *puVar2;
  byte *unaff_r4;
  int *unaff_r6;
  
  iVar1 = __call_via_r1(unaff_r6,*(int *)(*unaff_r6 + 0x80) + *unaff_r6);
  puVar2 = (ushort *)(iVar1 + 0x1a);
  iVar1 = (*puVar2 - 1) * 0x10000;
  do {
    *puVar2 = (ushort)((uint)iVar1 >> 0x10);
  } while ((int)(short)*puVar2 != iVar1 >> 0x10);
  if ((*unaff_r4 & 0x1f) == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831938C,0x40,0);
  }
  return 0;
}


/* sub_0802FC3C @ 0x0802FC3C */

undefined4 sub_0802FC3C(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x20);
  *(char *)(param_1 + 0x20) = cVar1 + -1;
  if (cVar1 == '\0') {
    return 1;
  }
  return 0;
}


/* sub_0802FC52 @ 0x0802FC52 */

void sub_0802FC52(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


/* sub_0802FC5C @ 0x0802FC5C */

undefined4 sub_0802FC5C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  byte *pbVar9;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  
  piVar6 = DAT_03001c34;
  cVar2 = *(char *)(param_1 + 0x14);
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 8) == 0) {
      iVar7 = sub_0802F9A0(param_1,param_2);
      *(int *)(param_1 + 8) = iVar7;
      if (*(int *)(param_1 + 4) == 0) {
        return 1;
      }
      if (iVar7 != 0) {
        uStack_18 = CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 8),
                             (short)((uint)*(undefined4 *)(param_1 + 0xc) >> 8));
        uVar5 = sub_0800A1D4(auStack_1c,param_2);
        *(undefined4 *)(param_1 + 0x18) = uVar5;
      }
    }
    iVar7 = **(int **)(param_1 + 4);
    iVar7 = __call_via_r2(*(int **)(param_1 + 4),9,*(int *)(iVar7 + 0x34) + iVar7);
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        uVar5 = 0;
      }
      else {
        iVar7 = **(int **)(param_1 + 0x18);
        iVar7 = __call_via_r2(*(int **)(param_1 + 0x18),param_2,*(int *)(iVar7 + 8) + iVar7);
        if (iVar7 != 0) {
          if (*(int *)(*(int *)(param_1 + 4) + 0x1a0) < param_2[0x68]) {
            uVar4 = 2;
          }
          else {
            uVar4 = 3;
          }
          *(undefined1 *)(param_2 + 4) = uVar4;
          *(undefined1 *)(param_1 + 0x14) = 1;
          iVar7 = **(int **)(param_1 + 0x18);
          __call_via_r1(*(int **)(param_1 + 0x18),*(int *)(iVar7 + 4) + iVar7);
          sub_0800ECDA(param_2,0x12);
          sub_0800ED18(param_2,&DAT_03003118);
          piVar6 = DAT_03001c34;
          iVar7 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
          sVar3 = *(short *)(iVar7 + 0x1a);
          iVar7 = __call_via_r1(piVar6,*(int *)(*piVar6 + 0x80) + *piVar6);
          if (*(short *)(iVar7 + 0x1c) >> 2 < sVar3) {
            iVar7 = __call_via_r1(piVar6,*(int *)(*piVar6 + 0x80) + *piVar6);
            sVar3 = *(short *)(iVar7 + 0x1a);
            iVar7 = __call_via_r1(piVar6,*(int *)(*piVar6 + 0x80) + *piVar6);
            *(int *)(param_1 + 0x1c) = (int)sVar3 - ((int)*(short *)(iVar7 + 0x1c) >> 2);
          }
          else {
            *(undefined4 *)(param_1 + 0x1c) = 0;
          }
        }
        uVar5 = 0;
      }
    }
    else {
      piVar6 = *(int **)(param_1 + 0x18);
      if (piVar6 != (int *)0x0) {
        __call_via_r1(piVar6,*(int *)(*piVar6 + 4) + *piVar6);
      }
      uVar5 = 1;
    }
    return uVar5;
  }
  if (cVar2 == '\x01') {
    uStack_18 = param_4;
    iVar7 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
    pbVar9 = (byte *)(param_1 + 0x20);
    if ((int)*(short *)(iVar7 + 0x1a) == *(int *)(param_1 + 0x1c)) {
      __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
      *(undefined1 *)(param_1 + 0x14) = 2;
      *pbVar9 = 0x3c;
    }
    else {
      bVar1 = *pbVar9;
      *pbVar9 = bVar1 + 1;
      if ((bVar1 + 1 & 7) == 0) {
        iVar7 = *piVar6;
        iVar7 = __call_via_r1(piVar6,*(int *)(iVar7 + 0x80) + iVar7);
        puVar8 = (ushort *)(iVar7 + 0x1a);
        iVar7 = (*puVar8 - 1) * 0x10000;
        do {
          *puVar8 = (ushort)((uint)iVar7 >> 0x10);
        } while ((int)(short)*puVar8 != iVar7 >> 0x10);
      }
      if ((*pbVar9 & 0x1f) == 0) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831938C,0x40,0);
      }
    }
    return 0;
  }
  if (cVar2 == '\x02') {
    cVar2 = *(char *)(param_1 + 0x20);
    *(char *)(param_1 + 0x20) = cVar2 + -1;
    if (cVar2 == '\0') {
      return 1;
    }
    return 0;
  }
  return 1;
}


/* sub_0802FC88 @ 0x0802FC88 */

void sub_0802FC88(void)

{
  return;
}


/* sub_0802FC8A @ 0x0802FC8A */

void sub_0802FC8A(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A178;
  }
  return;
}


/* sub_0802FCA0 @ 0x0802FCA0 */

undefined4 * sub_0802FCA0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x400;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x400);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x400);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x400);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804BACC;
    sub_0803F540(param_1 + 6,0x40,0x10);
    param_1[4] = param_2;
    param_1[9] = &gUnknown_0806F4F4;
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    param_1[0xe] = 0x803f70d;
    *(undefined1 *)((int)param_1 + 0x1b) = 5;
    *(undefined1 *)(param_1 + 2) = 0x10;
    param_1[1] = 0;
    param_1[5] = 0xffffffff;
  }
  return param_1;
}


/* sub_0802FCF4 @ 0x0802FCF4 */

int sub_0802FCF4(void)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r7;
  *(undefined4 *)(unaff_r4 + 0x24) = *(undefined4 *)(unaff_r5 + 0xc);
  *(undefined1 *)(unaff_r6 + 2) = 1;
  *(undefined4 *)(unaff_r6 + 0x20) = 0x803f70d;
  *(undefined1 *)(unaff_r4 + 0x1b) = 5;
  *(undefined1 *)(unaff_r4 + 8) = 0x10;
  *(undefined4 *)(unaff_r4 + 4) = 0;
  *(undefined4 *)(unaff_r4 + 0x14) = 0xffffffff;
  return unaff_r4;
}


/* sub_0802FCFA @ 0x0802FCFA */

int sub_0802FCFA(undefined4 param_1,undefined1 param_2)

{
  int unaff_r4;
  int unaff_r6;
  
  *(undefined4 *)(unaff_r4 + 0x24) = param_1;
  *(undefined1 *)(unaff_r6 + 2) = param_2;
  *(undefined4 *)(unaff_r6 + 0x20) = 0x803f70d;
  *(undefined1 *)(unaff_r4 + 0x1b) = 5;
  *(undefined1 *)(unaff_r4 + 8) = 0x10;
  *(undefined4 *)(unaff_r4 + 4) = 0;
  *(undefined4 *)(unaff_r4 + 0x14) = 0xffffffff;
  return unaff_r4;
}


/* sub_0802FD16 @ 0x0802FD16 */

void sub_0802FD16(int param_1,short *param_2)

{
  int iVar1;
  int a0;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  sub_08046E40(*(undefined4 *)(param_1 + 0x3c),0,*(undefined4 *)(param_1 + 0x48));
  a0 = param_1 + 0x18;
  if (*param_2 != 0x30) {
    iVar1 = sub_0804F9A4(&gUnknown_0806EE6C);
    *(int *)(param_1 + 0x1c) = 0xc - iVar1;
    *(undefined4 *)(param_1 + 0x20) = 0xc;
    sub_0803DE50(a0,*param_2);
    *(undefined4 *)(param_1 + 0x1c) = 0xe;
    *(undefined4 *)(param_1 + 0x20) = 0xc;
    sub_0803DE50(a0,0x3a);
  }
  iVar1 = sub_0804F9A4(&gUnknown_0806EE6C,param_2[1]);
  *(int *)(param_1 + 0x1c) = 0x1b - iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,param_2[1]);
  iVar1 = sub_0804F9A4(&gUnknown_0806EE6C,param_2[2]);
  *(int *)(param_1 + 0x1c) = 0x25 - iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,param_2[2]);
  *(undefined4 *)(param_1 + 0x1c) = 0x27;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,0x3a);
  iVar1 = sub_0804F9A4(&gUnknown_0806EE6C,param_2[3]);
  *(int *)(param_1 + 0x1c) = 0x34 - iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,param_2[3]);
  iVar1 = sub_0804F9A4(&gUnknown_0806EE6C,param_2[4]);
  *(int *)(param_1 + 0x1c) = 0x3e - iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,param_2[4]);
  uStack_1c = 0x20;
  uStack_18 = 0x10;
  uStack_24 = 0;
  uStack_20 = 0;
  sub_0804915C(a0,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),(int)&uStack_24);
  uStack_20 = 0;
  uStack_24 = 0x20;
  uStack_1c = 0x40;
  uStack_18 = 0x10;
  sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200,(int)&uStack_24);
  return;
}


/* sub_0802FDF8 @ 0x0802FDF8 */

void sub_0802FDF8(int param_1,int param_2)

{
  int unaff_r4;
  int unaff_r6;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack0000000c = 0x20;
  uStack00000010 = 0x10;
  uStack00000004 = 0;
  uStack00000008 = 0;
  sub_0804915C(unaff_r6,param_1 * 0x20 + param_2,(int)&stack0x00000004);
  uStack00000008 = 0;
  uStack00000004 = 0x20;
  uStack0000000c = 0x40;
  uStack00000010 = 0x10;
  sub_0804915C(unaff_r6,(uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + 0x6010200,(int)&stack0x00000004);
  return;
}


/* sub_0802FDFA @ 0x0802FDFA */

void sub_0802FDFA(int param_1,int param_2)

{
  int unaff_r4;
  int unaff_r6;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack0000000c = 0x20;
  uStack00000010 = 0x10;
  sub_0804915C(unaff_r6,param_1 * 0x20 + param_2,(int)&stack0x00000004);
  uStack0000000c = 0x40;
  uStack00000010 = 0x10;
  sub_0804915C(unaff_r6,(uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + 0x6010200,(int)&stack0x00000004);
  return;
}


/* sub_0802FE02 @ 0x0802FE02 */

void sub_0802FE02(undefined4 param_1,int param_2)

{
  int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  undefined4 uStack0000000c;
  
  uStack0000000c = param_1;
  sub_0804915C(unaff_r6,param_2,(int)&stack0x00000004);
  uStack0000000c = 0x40;
  sub_0804915C(unaff_r6,(int)(&DAT_06010000 +
                             unaff_r7 * 0x20 + (uint)*(ushort *)(unaff_r4 + 0xc) * 0x20),
               (int)&stack0x00000004);
  return;
}


/* sub_0802FE36 @ 0x0802FE36 */

undefined4 sub_0802FE36(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  uint uVar4;
  int iVar5;
  undefined6 uVar6;
  short asStack_20 [6];
  undefined4 uVar2;
  
  uVar4 = DAT_0300153c;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = DAT_03001540;
  }
  if (uVar4 < 36000) {
    if (*(uint *)(param_1 + 0x14) != uVar4) {
      *(uint *)(param_1 + 0x14) = uVar4;
      uVar6 = sub_0805315C(uVar4 * 0x35 >> 5);
      uVar2 = (undefined4)uVar6;
      asStack_20[0] = (short)((uint6)uVar6 >> 0x20) + 0x30;
      iVar5 = 4;
      do {
        sVar1 = sub_0805311C(uVar2);
        asStack_20[iVar5] = sVar1 + 0x30;
        iVar5 = iVar5 + -1;
        uVar2 = extraout_r1;
      } while (0 < iVar5);
      sub_0802FD16(param_1,asStack_20);
    }
  }
  else if (*(uint *)(param_1 + 0x14) != 36000) {
    *(undefined4 *)(param_1 + 0x14) = 36000;
    sub_0802FD16(param_1,L"95999");
  }
  puVar3 = (undefined4 *)*param_2;
  *puVar3 = 0x80a86008;
  uVar4 = (puVar3[1] & 0xfffff3ff) + 0x400;
  puVar3[1] = uVar4;
  puVar3[1] = uVar4 & 0xfffffc00 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar3[2] = 0x80c86008;
  uVar4 = (puVar3[3] & 0xfffff3ff) + 0x400;
  puVar3[3] = uVar4;
  puVar3[3] = uVar4 & 0xfffffc00 | *(ushort *)(param_1 + 0xc) + 0x10 & 0x3ff;
  *param_2 = puVar3 + 4;
  return 0;
}


/* sub_0802FEEE @ 0x0802FEEE */

bool sub_0802FEEE(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x1c) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  return param_2 == 0x1c;
}


/* sub_0802FF28 @ 0x0802FF28 */

void sub_0802FF28(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 2;
  return;
}


/* sub_0802FF36 @ 0x0802FF36 */

void sub_0802FF36(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = sVar1;
  if (sVar1 == 4) {
    *(undefined1 *)(param_2 + 0x11) = 4;
    sub_0800EE78();
  }
  return;
}


