/* Ghidra reference decompilation of code_0803A498 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0803A498 @ 0x0803A498 */

void sub_0803A498(undefined4 param_1,int param_2)

{
  *(short *)(param_2 + 0x12) = (short)**(undefined4 **)(param_2 + 0x50) * 8 + -1;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(char *)(param_2 + 0x11) = (char)**(undefined4 **)(param_2 + 0x50) + -1;
  return;
}


/* sub_0803A4AE @ 0x0803A4AE */

void sub_0803A4AE(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (*(ushort *)((int)param_2 + 0x12) == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  else {
    uVar1 = *(ushort *)((int)param_2 + 0x12) - 1;
    *(short *)((int)param_2 + 0x12) = (short)uVar1;
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
  }
  return;
}


/* sub_0803A4D0 @ 0x0803A4D0 */

bool sub_0803A4D0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    sub_0800ECDA(param_2,0x12,param_3,param_4,param_4);
    sub_0800ED18(param_2,&DAT_030032c8);
  }
  *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + 0x80;
  return *(int *)(*(int *)(param_2 + 0x58) + 0x9c) != *(int *)(param_2 + 0x50);
}


/* sub_0803A510 @ 0x0803A510 */

void sub_0803A510(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AB14;
  }
  return;
}


/* sub_0803A52C @ 0x0803A52C */

void sub_0803A52C(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0803A538 @ 0x0803A538 */

void sub_0803A538(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> 3;
  if (uVar1 == 4) {
    sub_0800EE78();
  }
  else {
    *(char *)(param_2 + 0x11) = (char)uVar1;
  }
  return;
}


/* sub_0803A556 @ 0x0803A556 */

bool sub_0803A556(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,&DAT_030032cc);
  }
  return *(undefined4 **)(param_2 + 0x14) != &DAT_030032cc;
}


/* sub_0803A584 @ 0x0803A584 */

void sub_0803A584(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C22C;
  }
  return;
}


/* sub_0803A5A0 @ 0x0803A5A0 */

void sub_0803A5A0(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0803A5AC @ 0x0803A5AC */

void sub_0803A5AC(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> 3;
  if (**(uint **)(param_2 + 0x50) == (uint)uVar1) {
    sub_0800ECDA(param_2,0x14);
    sub_0800ED18(param_2,&DAT_03001b20);
    return;
  }
  *(char *)(param_2 + 0x11) = (char)uVar1;
  return;
}


/* sub_0803A5DA @ 0x0803A5DA */

bool sub_0803A5DA(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    sub_0800ECDA(param_2,0x12,param_3,param_4,param_4);
    sub_0800ED18(param_2,&DAT_030032d0);
  }
  *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + -0x80;
  return *(int *)(*(int *)(param_2 + 0x58) + 0x9c) != *(int *)(param_2 + 0x50);
}


/* sub_0803A61A @ 0x0803A61A */

void sub_0803A61A(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A168;
  }
  return;
}


/* sub_0803A638 @ 0x0803A638 */

undefined4 sub_0803A638(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_34 [8];
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  
  iVar2 = 0;
  do {
    sub_08049138((int)auStack_34,0x877b0b0,0x20);
    local_28 = (undefined2)(&gUnknown_0877B0D0)[iVar2 * 2];
    local_26 = (undefined2)(&DAT_0877b0d4)[iVar2 * 2];
    uVar1 = sub_0800F68C(0,auStack_34,&gUnknown_08711274 + local_2c * 0x1c,0xffffffff);
    sub_0801191A(&DAT_03001c4c,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 1;
}


/* sub_0803A68E @ 0x0803A68E */

undefined4 * sub_0803A68E(void)

{
  return &DAT_030032d4;
}


/* sub_0803A6A0 @ 0x0803A6A0 */

void sub_0803A6A0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_18;
  int iStack_14;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (**(int **)(param_2 + 0x50) * 8 - (uint)uVar1 == 0) {
    iVar2 = sub_080116FC(&DAT_03001c4c);
    if (iVar2 < 0x600) {
      sub_0800EE78(param_2);
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 0;
      iVar2 = *(int *)(param_2 + 0x1a0) >> 8;
      iStack_18 = iVar2 + 0x20;
      iStack_14 = (*(int *)(param_2 + 0x1a4) >> 8) + -0x10;
      uVar3 = sub_08036FA2(0,&iStack_18,param_2,2,iStack_18,iStack_14,iVar2);
      *(undefined4 *)(param_1 + 4) = uVar3;
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
  }
  else if ((int)(uint)(uVar1 >> 3) < **(int **)(param_2 + 0x50)) {
    *(char *)(param_2 + 0x11) = (char)(uVar1 >> 3);
  }
  else if (300 < uVar1) {
    sub_0800EE78(param_2);
  }
  return;
}


/* sub_0803A736 @ 0x0803A736 */

bool sub_0803A736(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x58) + 0xa0) != *(int *)(param_2 + 0x50)) {
    return true;
  }
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D438;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
    sub_0800ED18(param_2,puVar1);
  }
  return *(int *)(param_2 + 0x14) != *(int *)(param_1 + 8);
}


/* sub_0803A77E @ 0x0803A77E */

void sub_0803A77E(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BDF8;
  }
  return;
}


/* sub_0803A79C @ 0x0803A79C */

undefined4 sub_0803A79C(int param_1,int *param_2,int param_3)

{
  int aiStack_8 [2];
  
  if (*(int *)(param_3 + 4) != 0) {
    aiStack_8[0] = *(int *)(param_1 + 0xc) * *(int *)(param_3 + 0x18) >> 0x10;
    __call_via_r2(param_2,aiStack_8,*(int *)(*param_2 + 0x60) + *param_2);
  }
  return 1;
}


/* sub_0803A7CA @ 0x0803A7CA */

bool sub_0803A7CA(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08000158(0x12d);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  return iVar2 == 0;
}


/* sub_0803A7CC @ 0x0803A7CC */

bool sub_0803A7CC(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08000158(0x12d);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  return iVar2 == 0;
}


/* sub_0803A7EE @ 0x0803A7EE */

undefined4 * sub_0803A7EE(void)

{
  return &DAT_030032d8;
}


/* sub_0803A7FC @ 0x0803A7FC */

void sub_0803A7FC(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb) = param_2;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x10) - (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) - (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x14) + (uint)*(byte *)(param_1 + 0xb);
  return;
}


/* sub_0803A84A @ 0x0803A84A */

undefined4 *
sub_0803A84A(undefined4 *param_1,undefined1 param_2,undefined4 *param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x830), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_080493B4;
    *(undefined1 *)((int)param_1 + 10) = param_5;
    *(undefined1 *)((int)param_1 + 9) = param_6;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar1 = *param_3;
    param_1[5] = param_3[1];
    param_1[4] = uVar1;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_0803A7FC(param_1,param_4);
  }
  return param_1;
}


/* sub_0803A898 @ 0x0803A898 */

void sub_0803A898(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  iVar1 = *(int *)(*param_1 + 8);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0803A8AC @ 0x0803A8AC */

/* WARNING: Instruction at (ram,0x0803aa44) overlaps instruction at (ram,0x0803aa42)
    */

void sub_0803A8AC(int param_1,int param_2)

{
  uint uVar1;
  uint *a2;
  uint *a0;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr15;
  undefined1 auStack_82c [2000];
  uint *puStack_5c;
  int iStack_58;
  int *piStack_54;
  uint uStack_50;
  uint uVar12;
  int iStack_44;
  uint uStack_40;
  int local_1c;
  int local_18;
  
  iVar6 = *(int *)(param_2 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (iVar6 < (int)uVar1) {
    local_18 = *(int *)(param_2 + 0x20);
    if (*(int *)(param_1 + 0x18) < local_18) {
      local_1c = *(int *)(param_2 + 0x1c);
      if (local_1c < *(int *)(param_1 + 0x24)) {
        if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x24)) {
          if ((((iVar6 <= *(int *)(param_1 + 0x18)) && (local_1c <= *(int *)(param_1 + 0x1c))) &&
              ((int)uVar1 <= local_18)) && (*(int *)(param_1 + 0x24) <= *(int *)(param_2 + 0x24))) {
            if (*(char *)(param_1 + 8) == '\x02') {
              return;
            }
            *(undefined1 *)(param_1 + 8) = 2;
            sub_08049138((int)(&DAT_0600e000 + (uint)*(byte *)(param_1 + 4) * 0x800),param_1 + 0x30,
                         0x800);
            return;
          }
          *(undefined1 *)(param_1 + 8) = 1;
          iVar2 = *(int *)(param_2 + 0x18);
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(param_1 + 0x18) < iVar2) {
            iVar6 = iVar2;
          }
          uVar12 = *(uint *)(param_1 + 0x1c);
          if ((int)*(uint *)(param_1 + 0x1c) < (int)*(uint *)(param_2 + 0x1c)) {
            uVar12 = *(uint *)(param_2 + 0x1c);
          }
          iStack_44 = *(int *)(param_1 + 0x20);
          if (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x20)) {
            iStack_44 = *(int *)(param_2 + 0x20);
          }
          uStack_40 = *(uint *)(param_1 + 0x24);
          if ((int)*(uint *)(param_2 + 0x24) < (int)*(uint *)(param_1 + 0x24)) {
            uStack_40 = *(uint *)(param_2 + 0x24);
          }
          iVar2 = *(int *)(param_1 + 0x10);
          iVar4 = *(int *)(param_1 + 0x14);
          piStack_54 = (int *)(iStack_44 - *(int *)(param_1 + 0x10));
          uVar3 = uStack_40 - *(int *)(param_1 + 0x14);
          uVar7 = 0x803a9ed;
          uStack_50 = uVar3;
          sub_0804912C((int)auStack_82c,0,0x800);
          puVar5 = (uint *)&stack0xffffffb8;
          iVar6 = iVar6 - iVar2 >> 3;
          a2 = (uint *)((int)(uVar12 - iVar4) >> 3);
          a0 = (uint *)((int)(uVar3 + 7) >> 3);
          bVar10 = a2 <= a0;
          bVar11 = SBORROW4((int)a0,(int)a2);
          bVar8 = (int)a0 - (int)a2 < 0;
          bVar9 = a0 == a2;
          if ((int)a2 < (int)a0) {
            if (!bVar10 || bVar9) {
              uStack_50 = uStack_40;
              puStack_5c = a0;
              iStack_58 = param_1;
              piStack_54 = &local_1c;
            }
            if (bVar9) {
              coprocessor_function(0xd,0xc,0,in_cr9,in_cr9,in_cr5);
            }
            if ((int)a0 <= (int)a2) {
              coprocessor_store(2,in_cr4,uVar1 - 0x214);
            }
            if (bVar9) {
              unaff_r10 = unaff_r9 | uStack_40 << 0x1a;
              coprocessor_function(6,8,6,in_cr0,in_cr9,in_cr1);
            }
            if (bVar10 && !bVar9) {
              coprocessor_function(8,1,3,in_cr1,in_cr15,in_cr11);
            }
            if (!bVar8) {
              bVar10 = uStack_40 < 2;
              bVar11 = SBORROW4(1,uStack_40);
              puVar5 = (uint *)(1 - uStack_40);
              bVar8 = (int)puVar5 < 0;
              bVar9 = puVar5 == (uint *)0x0;
            }
            if (bVar8) {
              unaff_r9 = iVar6 + 0x14000;
            }
            if (!bVar10 || bVar9) {
              local_1c = 0x803aa42;
            }
            if (bVar8) {
              bVar11 = SCARRY4((int)a0,0x10000000);
              puVar5 = a0 + 0x4000000;
              bVar9 = puVar5 == (uint *)0x0;
            }
            if (!bVar11) {
              a0[-1] = 0x803aa4a;
              a0[-2] = uVar7;
              a0[-3] = uVar1;
              a0[-4] = unaff_r11;
              a0[-5] = unaff_r10;
              a0[-6] = uStack_40;
              a0[-7] = (uint)&local_1c;
              a0[-8] = 0x800;
              a0 = a0 + -9;
              *a0 = (uint)puVar5;
            }
          }
          else {
            a0 = (uint *)(uint)*(byte *)(param_1 + 4);
          }
          if (!bVar9) {
            *a0 = unaff_r9;
            a0[-1] = uStack_40;
            a0[-2] = (uint)&local_1c;
          }
          sub_08049138((int)a0,iVar6,(int)a2);
          return;
        }
      }
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    sub_0804912C((int)(&DAT_0600e000 + (uint)*(byte *)(param_1 + 4) * 0x800),0,0x800);
  }
  return;
}


/* sub_0803AA58 @ 0x0803AA58 */

void sub_0803AA58(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int aiStack_680 [16];
  int iStack_640;
  int iStack_63c;
  int iStack_638;
  uint uStack_634;
  int iStack_630;
  int iStack_62c;
  int local_628 [128];
  int local_428 [128];
  int local_228 [125];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_1c = param_1;
  iStack_18 = param_2;
  if (((*(char *)(param_1 + 0xd) != *(char *)(param_1 + 0xb)) ||
      (*(char *)(param_1 + 0xc) != *(char *)(param_1 + 10))) || (*(char *)(param_1 + 9) != '\0')) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xb);
    *(char *)(param_1 + 0xc) = *(char *)(param_1 + 10);
    DAT_030032dc = DAT_030032dc ^ 1;
    *(undefined4 *)(param_1 + 0x28) = 0x80000000;
    *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
    sub_0803AE10(local_228,*(undefined1 *)(param_1 + 0xb));
    if ((*(char *)(param_1 + 9) == '\0') || (*(byte *)(param_1 + 0xb) < 4)) {
      sub_0804912C((int)local_428,0,0x200);
      sub_08049138((int)local_628,(int)local_228,0x200);
    }
    else {
      sub_0803AE10(local_628,*(byte *)(param_1 + 0xb) - 3);
      iVar5 = 0;
      iVar6 = iVar5;
      if (0 < (int)(*(byte *)(param_1 + 0xb) - 3)) {
        do {
          iVar2 = sub_0803FACC(4);
          iVar5 = iVar6 + 1;
          local_428[iVar6] = iVar2 + (local_228[iVar6] - local_628[iVar6]);
          iVar6 = iVar5;
        } while (iVar5 < (int)(*(byte *)(param_1 + 0xb) - 3));
      }
      if (iVar5 < (int)(uint)*(byte *)(param_1 + 0xb)) {
        do {
          iVar6 = iVar5 + 1;
          local_428[iVar5] = local_228[iVar5];
          iVar5 = iVar6;
        } while (iVar6 < (int)(uint)*(byte *)(param_1 + 0xb));
      }
    }
    uVar7 = (uint)DAT_03001a68 + (uint)DAT_030032dc * 0x3c;
    iStack_62c = uVar7 + 1;
    iStack_630 = (uint)*(byte *)(param_1 + 10) * 0x1010101;
    sub_0804912C(uVar7 * 0x40 + 0x6000000,iStack_630,0x40);
    uStack_634 = *(byte *)(param_1 + 0xb) + 7 >> 3;
    iStack_28 = 0;
    if (uStack_634 == 0) goto _0803ACD2;
    uStack_20 = uVar7 & 0xffff;
    do {
      iStack_638 = iStack_28 * 8;
      iStack_63c = iStack_638 + 7;
      iStack_640 = local_228[iStack_28 * 8] + 7 >> 3;
      iVar5 = local_628[iStack_63c] + -3 >> 3;
      iVar6 = 0;
      if (0 < iVar5) {
        do {
          iVar2 = iVar6 * 2;
          iVar6 = iVar6 + 1;
          *(short *)(iStack_28 * 0x40 + param_1 + iVar2 + 0x30) = (short)uStack_20;
        } while (iVar6 < iVar5);
      }
      if (iVar6 < iStack_640) {
        iStack_24 = iStack_28 * 0x40 + param_1;
        do {
          piVar3 = aiStack_680;
          iVar5 = iStack_638;
          if (iStack_638 <= iStack_63c) {
            do {
              iVar2 = local_228[iVar5] + iVar6 * -8;
              iVar8 = iVar2 - local_428[iVar5];
              if (iVar2 < 1) {
                *piVar3 = 0;
                piVar3[1] = 0;
                piVar3 = piVar3 + 2;
              }
              else if (iVar8 < 8) {
                if (8 < iVar2) {
                  iVar2 = 8;
                }
                iVar4 = 0;
                if (0 < iVar8) {
                  do {
                    iVar4 = iVar4 + 1;
                    *(undefined1 *)piVar3 = *(undefined1 *)(param_1 + 10);
                    piVar3 = (int *)((int)piVar3 + 1);
                  } while (iVar4 < iVar8);
                }
                for (; iVar4 < iVar2; iVar4 = iVar4 + 1) {
                  *(undefined1 *)piVar3 = 2;
                  piVar3 = (int *)((int)piVar3 + 1);
                }
                for (; iVar4 < 8; iVar4 = iVar4 + 1) {
                  *(undefined1 *)piVar3 = 0;
                  piVar3 = (int *)((int)piVar3 + 1);
                }
              }
              else {
                *piVar3 = iStack_630;
                piVar3[1] = iStack_630;
                piVar3 = piVar3 + 2;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iStack_63c);
          }
          sub_08049138(iStack_62c * 0x40 + 0x6000000,(int)aiStack_680,0x40);
          iVar5 = iStack_62c + 1;
          *(short *)(iStack_24 + iVar6 * 2 + 0x30) = (short)iStack_62c;
          iVar6 = iVar6 + 1;
          iStack_62c = iVar5;
        } while (iVar6 < iStack_640);
      }
      if (iVar6 < 0x10) {
        do {
          iVar5 = iVar6 * 2;
          iVar6 = iVar6 + 1;
          *(undefined2 *)(iStack_28 * 0x40 + param_1 + iVar5 + 0x30) = 0;
        } while (iVar6 < 0x10);
      }
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < (int)uStack_634);
    for (; iStack_28 < 0x10; iStack_28 = iStack_28 + 1) {
_0803ACD2:
      sub_0804912C(iStack_28 * 0x40 + param_1 + 0x30,0,0x20);
    }
    iVar5 = 0;
    do {
      iVar6 = 0x10;
      iVar2 = iVar5 * 0x40 + param_1;
      do {
        iVar8 = 0x1f - iVar6;
        iVar4 = iVar6 * 2;
        iVar6 = iVar6 + 1;
        *(ushort *)(iVar2 + iVar4 + 0x30) = *(ushort *)(iVar2 + iVar8 * 2 + 0x30) | 0x400;
      } while (iVar6 < 0x20);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x10);
    iVar5 = 0x10;
    do {
      iVar6 = 0;
      do {
        iVar2 = iVar6 * 2;
        iVar6 = iVar6 + 1;
        *(ushort *)(iVar5 * 0x40 + param_1 + iVar2 + 0x30) =
             *(ushort *)((0x1f - iVar5) * 0x40 + param_1 + iVar2 + 0x30) | 0x800;
      } while (iVar6 < 0x20);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
  }
  iStack_2c = *(int *)(iStack_18 + 0x18) - *(int *)(param_1 + 0x10);
  iStack_28 = *(int *)(iStack_18 + 0x1c) - *(int *)(param_1 + 0x14);
  iStack_34 = iStack_2c >> 3;
  iStack_30 = iStack_28 >> 3;
  if ((*(int *)(param_1 + 0x28) != iStack_34) || (*(int *)(param_1 + 0x2c) != iStack_30)) {
    *(int *)(param_1 + 0x2c) = iStack_30;
    *(int *)(param_1 + 0x28) = iStack_34;
    sub_0803A8AC(param_1,iStack_18);
  }
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)iStack_2c;
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)iStack_28;
  return;
}


/* sub_0803ADC0 @ 0x0803ADC0 */

void sub_0803ADC0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x10) - (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) - (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x14) + (uint)*(byte *)(param_1 + 0xb);
  return;
}


/* sub_0803AE10 @ 0x0803AE10 */

void sub_0803AE10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * -2 + 3;
  iVar2 = 0;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      *(int *)(param_1 + iVar2 * 4) = iVar1;
      *(int *)(iVar1 * 4 + param_1 + -4) = iVar2;
      if (iVar3 < 0) {
        iVar3 = iVar2 * 4 + iVar3 + 6;
      }
      else {
        iVar3 = (iVar2 - iVar1) * 4 + iVar3 + 10;
        iVar1 = iVar1 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (0x80 - param_2 != 0) {
    sub_0804912C(param_2 * 4 + param_1,0,(0x80 - param_2) * 4);
  }
  return;
}


/* sub_0803AE5A @ 0x0803AE5A */

undefined4 * sub_0803AE5A(void)

{
  return &DAT_030032e0;
}


/* sub_0803AE5C @ 0x0803AE5C */

undefined4 * sub_0803AE5C(void)

{
  return &DAT_030032e0;
}


/* sub_0803AE64 @ 0x0803AE64 */

undefined4 * sub_0803AE64(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804CB20;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0803AE82 @ 0x0803AE82 */

undefined4 * sub_0803AE82(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D674;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0803AEA8 @ 0x0803AEA8 */

undefined4 * sub_0803AEA8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804A884;
    uVar2 = param_2[1];
    param_1[5] = *param_2;
    param_1[6] = uVar2;
    param_1[7] = param_3;
    iVar1 = sub_0803A84A(0,0,param_2,1,2,0);
    param_1[3] = iVar1;
    sub_0800927E(&DAT_03001990,*(undefined1 *)(iVar1 + 4));
    sub_080096C4(&DAT_030019a4,0,1);
    sub_080096EA(&DAT_030019a4,0,1);
    sub_080096EA(&DAT_030019a4,1,2);
    sub_080096EA(&DAT_030019a4,2,2);
    sub_080096EA(&DAT_030019a4,3,2);
    sub_080096EA(&DAT_030019a4,4,2);
    sub_08009728(&DAT_030019a4,0x32,0x32);
    sub_080096AC(&DAT_030019a4,0);
    param_1[4] = 0x100;
    DAT_030032e4 = 0;
  }
  return param_1;
}


/* sub_0803AF58 @ 0x0803AF58 */

bool sub_0803AF58(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar2 = iVar1;
  if (iVar1 < *param_2) {
    iVar2 = *param_2;
  }
  if (param_2[2] < iVar2) {
    iVar2 = param_2[2];
  }
  iVar4 = iVar3;
  if (iVar3 < param_2[1]) {
    iVar4 = param_2[1];
  }
  if (param_2[3] < iVar4) {
    iVar4 = param_2[3];
  }
  return (iVar1 - iVar2) * (iVar1 - iVar2) + (iVar3 - iVar4) * (iVar3 - iVar4) <
         *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x10) >> 0x10;
}


/* sub_0803AFA6 @ 0x0803AFA6 */

void sub_0803AFA6(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 < 0x100) {
    DAT_030032e4 = '\x01';
    iVar5 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar5) {
      iVar5 = sub_0803FACC(0x1000);
      local_24 = *(int *)(param_1 + 0x14);
      local_20 = *(int *)(param_1 + 0x18) + 0x32;
      local_1c = local_24;
      local_18 = local_20;
      uVar1 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar5 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
    iVar5 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar5) {
      iVar5 = sub_0803FACC(0x1000);
      local_24 = *(int *)(param_1 + 0x14);
      local_20 = *(int *)(param_1 + 0x18) + -0x32;
      local_1c = local_24;
      local_18 = local_20;
      uVar1 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar5 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
    iVar5 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar5) {
      iVar5 = sub_0803FACC(0x1000);
      local_20 = *(int *)(param_1 + 0x18);
      local_24 = *(int *)(param_1 + 0x14) + 0x32;
      local_1c = local_24;
      local_18 = local_20;
      uVar1 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar5 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
    iVar5 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar5) {
      iVar5 = sub_0803FACC(0x1000);
      local_20 = *(int *)(param_1 + 0x18);
      local_24 = *(int *)(param_1 + 0x14) + -0x32;
      local_1c = local_24;
      local_18 = local_20;
      uVar1 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar5 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
  }
  else if (iVar5 < 0x4000) {
    iVar2 = sub_08054A64(0x424ccccd);
    *(int *)(param_1 + 0x10) = iVar5 + iVar2;
  }
  else {
    DAT_030032e4 = '\x02';
    *(int *)(param_1 + 0x10) = iVar5 + 0x80;
  }
  if (DAT_030032e4 != '\x01') {
    iVar2 = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) - *(int *)(param_1 + 0x14);
    iVar3 = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) - *(int *)(param_1 + 0x18);
    uStack_38 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x14);
    iStack_34 = *(int *)(param_1 + 0x10) >> 8;
    local_24 = *(int *)(param_1 + 0x1c);
    uStack_2c = 0x400;
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = -iVar2;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = -iVar3;
    }
    if (iVar4 < iVar5) {
      uStack_30 = 3;
      if (iVar2 < 1) {
        uStack_30 = 2;
      }
    }
    else {
      uStack_30 = 1;
      if (0 < iVar3) {
        uStack_30 = 0;
      }
    }
    puStack_28 = &gUnknown_086B8098;
    sub_08011C70(&DAT_03001c4c,0x28,&uStack_3c);
    if (DAT_030032e4 == '\x02') {
      iVar5 = (0x80 - (*(int *)(param_1 + 0x10) >> 8)) * 0x32 >> 6;
      if (iVar5 < 1) {
        iVar5 = 0;
        DAT_030032e4 = '\x03';
      }
      sub_08009728(&DAT_030019a4,iVar5,100);
    }
    if ((DAT_030032e4 != '\x03') && (DAT_030032e4 != '\x01')) {
      return;
    }
  }
  sub_08011944(&DAT_03001c4c,param_1);
  return;
}


/* sub_0803B1DC @ 0x0803B1DC */

undefined4 sub_0803B1DC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803A7FC(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x10) >> 8 & 0xff,param_3,param_4,
               param_4);
  return 0;
}


/* sub_0803B1F0 @ 0x0803B1F0 */

undefined4 sub_0803B1F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    return 0;
  }
  if (*(int *)(param_3 + 0x30) == param_1) {
    return 0;
  }
  if (((**(char **)(param_3 + 0x1c) == '\x01') &&
      (iVar1 = sub_0803AF58(param_1,param_3 + 4), iVar1 != 0)) && (DAT_030032e4 == '\0')) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (0 < iVar1) {
      iVar2 = sub_08054A64(0x42cccccd);
      iVar1 = iVar1 - iVar2;
      *(int *)(param_1 + 0x10) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    return 1;
  }
  return 0;
}


/* sub_0803B240 @ 0x0803B240 */

void sub_0803B240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  DAT_030032e4 = 0;
  sub_0800FE78(&local_28,param_2);
  local_18 = local_28 + local_20 >> 1;
  local_14 = local_24 + local_1c >> 1;
  local_10 = local_18 + 2;
  local_c = local_14 + -0x11;
  uVar1 = sub_0803AEA8(0,&local_10,param_2,param_4,local_10,local_c);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_0803B294 @ 0x0803B294 */

undefined4 sub_0803B294(void)

{
  if ((DAT_030032e4 != '\x03') && (DAT_030032e4 != '\x01')) {
    return 0;
  }
  return 1;
}


/* sub_0803B2A8 @ 0x0803B2A8 */

void sub_0803B2A8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B698;
  }
  return;
}


/* sub_0803B2BA @ 0x0803B2BA */

undefined4 * sub_0803B2BA(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D91C;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0803B2EC @ 0x0803B2EC */

void sub_0803B2EC(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (*(ushort *)((int)param_2 + 0x12) == 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  else {
    uVar1 = *(ushort *)((int)param_2 + 0x12) - 1;
    *(short *)((int)param_2 + 0x12) = (short)uVar1;
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
  }
  return;
}


/* sub_0803B30E @ 0x0803B30E */

bool sub_0803B30E(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x58) + 0x9c) != *(int *)(param_2 + 0x50)) {
    return true;
  }
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804DBA8;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
    sub_0800ED18(param_2,puVar1);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return *(int *)(param_2 + 0x14) != *(int *)(param_1 + 8);
}


/* sub_0803B356 @ 0x0803B356 */

void sub_0803B356(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CB48;
  }
  return;
}


/* sub_0803B370 @ 0x0803B370 */

void sub_0803B370(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0803B37E @ 0x0803B37E */

void sub_0803B37E(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 local_48 [4];
  undefined1 auStack_44 [16];
  undefined1 local_34;
  undefined4 local_30;
  undefined *local_2c;
  int local_28;
  int local_18;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if ((*(int *)(param_1 + 4) == 0) && (uVar1 - 0x50 < 0x18)) {
    sub_0800FE78(auStack_44,param_2);
    local_34 = *(undefined1 *)(param_2 + 0x10);
    local_2c = &gUnknown_086B8098;
    local_30 = 0x400;
    local_48[0] = 0;
    local_28 = param_2;
    local_18 = param_2;
    iVar2 = __call_via_r3(DAT_03001c34,0,local_48,*(int *)(*DAT_03001c34 + 0x24) + *DAT_03001c34);
    if (iVar2 != 0) {
      iVar2 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
      *(undefined4 *)(param_1 + 4) = 1;
    }
  }
  if (*(ushort *)(param_2 + 0x12) == 0x68) {
    sub_0800EE78(param_2);
  }
  else {
    *(char *)(param_2 + 0x11) = (char)(*(ushort *)(param_2 + 0x12) >> 3);
  }
  return;
}


/* sub_0803B410 @ 0x0803B410 */

void sub_0803B410(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0803B418 @ 0x0803B418 */

bool sub_0803B418(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = sub_0803FACC(2);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(DAT_03001c34 + 0x1a4);
      *(int *)(param_2 + 0x1a0) = *(int *)(DAT_03001c34 + 0x1a0) + -0x1400;
      *(undefined4 *)(param_2 + 0x1a4) = uVar2;
      *(undefined1 *)(param_2 + 0x10) = 3;
    }
    else {
      uVar2 = *(undefined4 *)(DAT_03001c34 + 0x1a4);
      *(int *)(param_2 + 0x1a0) = *(int *)(DAT_03001c34 + 0x1a0) + 0x400;
      *(undefined4 *)(param_2 + 0x1a4) = uVar2;
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
    *(undefined4 *)(param_1 + 4) = 1;
    puVar3 = (undefined4 *)sub_0803D5B8(8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &_0804D714;
    }
    *(undefined4 **)(param_1 + 8) = puVar3;
    sub_0800ECDA(param_2,0x12);
    sub_0800ED18(param_2,puVar3);
  }
  return *(int *)(param_2 + 0x14) != *(int *)(param_1 + 8);
}


/* sub_0803B4C8 @ 0x0803B4C8 */

void sub_0803B4C8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C174;
  }
  return;
}


/* sub_0803B4FC @ 0x0803B4FC */

uint sub_0803B4FC(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  
  local_2c = param_5;
  local_34 = param_5;
  local_28 = param_6;
  local_30 = param_6;
  local_38 = param_5;
  local_3c = -param_6;
  local_40 = -param_5;
  uVar9 = 0;
  uVar8 = 0;
  local_44 = param_6;
  iVar5 = 0xff;
  local_54 = param_3;
  local_50 = param_4;
  local_4c = param_3;
  local_48 = param_4;
  iStack_24 = param_1;
  piStack_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  do {
    local_4c = local_4c + local_3c;
    local_48 = local_48 + local_38;
    iVar2 = __call_via_r2(param_2,&local_4c,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      local_4c = local_4c - local_3c;
      local_48 = local_48 - local_38;
      local_58 = local_38;
      local_5c = local_3c;
      iVar2 = -local_2c;
      iVar6 = -local_28;
      local_2c = local_3c;
      local_28 = local_38;
      local_3c = iVar2;
      local_38 = iVar6;
    }
    else {
      local_5c = local_4c + local_2c;
      local_58 = local_48 + local_28;
      iVar2 = __call_via_r2(param_2,&local_5c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 != 0) {
        uVar8 = 1;
        break;
      }
    }
    bVar1 = 0 < iVar5;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  iVar5 = 0xff;
  do {
    local_54 = local_54 + local_44;
    local_50 = local_50 + local_40;
    iVar2 = __call_via_r2(param_2,&local_54,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      local_54 = local_54 - local_44;
      local_50 = local_50 - local_40;
      local_58 = local_40;
      local_5c = local_44;
      iVar2 = -local_34;
      iVar6 = -local_30;
      local_34 = local_44;
      local_30 = local_40;
      local_44 = iVar2;
      local_40 = iVar6;
    }
    else {
      local_5c = local_54 + local_34;
      local_58 = local_50 + local_30;
      iVar2 = __call_via_r2(param_2,&local_5c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 != 0) {
        uVar9 = 1;
        break;
      }
    }
    bVar1 = 0 < iVar5;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  piVar4 = (int *)(iStack_24 + 0xc);
  piVar3 = (int *)(iStack_24 + 0x10);
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      *piVar4 = local_54;
      *piVar3 = local_50;
      goto _0803B6DC;
    }
  }
  else if (uVar9 == 0) {
    *piVar4 = local_4c;
    *piVar3 = local_48;
    goto _0803B6DC;
  }
  iVar6 = param_7 - local_4c >> 8;
  iVar5 = param_8 - local_48 >> 8;
  iVar7 = param_7 - local_54 >> 8;
  iVar2 = param_8 - local_50 >> 8;
  if (iVar6 * iVar6 + iVar5 * iVar5 < iVar7 * iVar7 + iVar2 * iVar2) {
    *piVar4 = local_4c;
    *piVar3 = local_48;
  }
  else {
    *piVar4 = local_54;
    *piVar3 = local_50;
  }
_0803B6DC:
  *(undefined4 *)(iStack_24 + 0x14) = 1;
  return uVar8 | uVar9;
}


/* sub_0803B6EA @ 0x0803B6EA */

void sub_0803B6EA(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int *piStack_20;
  int local_1c;
  int local_18;
  
  local_28 = param_2[0x69];
  local_2c = param_2[0x68];
  iStack_34 = param_3 - local_2c;
  iStack_30 = param_4 - local_28;
  if (iStack_34 < 0) {
    iStack_34 = -iStack_34;
  }
  if (iStack_30 < 0) {
    iStack_30 = -iStack_30;
  }
  iStack_3c = param_2[0x68];
  iStack_38 = param_2[0x69];
  iVar1 = iStack_30 >> 8;
  iVar2 = iStack_34 >> 8;
  if (iStack_34 < iStack_30) {
    local_40 = iVar2 * 2;
    iVar3 = local_40 - iVar1;
    local_44 = iVar2 - iVar1;
    local_4c = 0;
    local_48 = 0x100;
  }
  else {
    local_40 = iVar1 * 2;
    iVar3 = local_40 - iVar2;
    local_44 = iVar1 - iVar2;
    local_48 = 0;
    local_4c = 0x100;
    iVar1 = iVar2;
  }
  local_44 = local_44 * 2;
  iStack_50 = 0x100;
  iStack_54 = 0x100;
  if (param_3 < local_2c) {
    iStack_54 = -0x100;
    local_4c = -local_4c;
  }
  if (param_4 < local_28) {
    iStack_50 = -0x100;
    local_48 = -local_48;
  }
  local_18 = param_4;
  local_1c = param_3;
  piStack_20 = param_2;
  iStack_24 = param_1;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 + 1 < *(int *)(param_1 + 8)) {
    iVar2 = iVar1;
  }
  while( true ) {
    do {
      while( true ) {
        iVar2 = iVar2 + -1;
        if (iVar2 < 1) {
          *(int *)(param_1 + 0xc) = local_1c;
          *(undefined4 *)(param_1 + 0x14) = 1;
          *(int *)(param_1 + 0x10) = local_18;
          return;
        }
        if (-1 < iVar3) break;
        iVar3 = iVar3 + local_40;
        iStack_3c = iStack_3c + local_4c;
        iStack_38 = iStack_38 + local_48;
        iVar1 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar1 == 0) {
          iStack_3c = iStack_3c - local_4c;
          iStack_38 = iStack_38 - local_48;
          sub_0803B4FC(param_1,param_2,iStack_3c,iStack_38,local_4c,local_48,local_1c,local_18,iVar2
                      );
          return;
        }
      }
      iVar3 = iVar3 + local_44;
      iStack_3c = iStack_3c + iStack_54;
      iStack_38 = iStack_38 + iStack_50;
      iVar1 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
    } while (iVar1 != 0);
    if (local_4c == iStack_54) {
      iStack_5c = 0;
      iStack_58 = iStack_50;
    }
    else {
      iStack_58 = 0;
      iStack_5c = iStack_54;
    }
    iStack_3c = (iStack_3c - iStack_54) + local_4c;
    iStack_38 = (iStack_38 - iStack_50) + local_48;
    iVar1 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar1 == 0) break;
    iStack_3c = iStack_3c + iStack_5c;
    iStack_38 = iStack_38 + iStack_58;
    iVar1 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar1 == 0) {
      iStack_3c = iStack_3c - iStack_54;
      iStack_38 = iStack_38 - iStack_50;
      sub_0803B4FC(param_1,param_2,iStack_3c,iStack_38,iStack_5c,iStack_58,local_1c,local_18,iVar2);
      return;
    }
  }
  iStack_3c = iStack_3c - local_4c;
  iStack_38 = iStack_38 - local_48;
  sub_0803B4FC(param_1,param_2,iStack_3c,iStack_38,local_4c,local_48,local_1c,local_18,iVar2);
  return;
}


/* sub_0803B934 @ 0x0803B934 */

void sub_0803B934(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *piStack_18;
  
  iVar2 = DAT_03001c34;
  piVar1 = (int *)(DAT_03001c34 + 0x1a0);
  local_20 = *(int *)(DAT_03001c34 + 0x1a4);
  local_24 = *piVar1;
  *piVar1 = *(int *)(param_1 + 0xc);
  piVar7 = param_2 + 0x68;
  *(undefined4 *)(iVar2 + 0x1a4) = *(undefined4 *)(param_1 + 0x10);
  local_3c = *piVar1 >> 8;
  local_38 = *(int *)(iVar2 + 0x1a4) >> 8;
  local_2c = local_3c - (*piVar7 >> 8);
  piVar8 = param_2 + 0x69;
  local_28 = local_38 - (param_2[0x69] >> 8);
  local_34 = local_2c;
  if (local_2c < 0) {
    local_34 = -local_2c;
  }
  local_30 = local_28;
  if (local_28 < 0) {
    local_30 = -local_28;
  }
  if (local_30 < local_34) {
    uVar5 = 3;
    if (local_2c < 1) {
      uVar5 = 2;
    }
    *(undefined1 *)(param_2 + 4) = uVar5;
    iVar9 = local_34;
  }
  else {
    *(bool *)(param_2 + 4) = local_28 < 1;
    iVar9 = local_30;
  }
  *piVar1 = local_24;
  *(int *)(iVar2 + 0x1a4) = local_20;
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  local_1c = param_1;
  piStack_18 = param_2;
  iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar2 == 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  local_34 = local_2c * 0x100;
  local_30 = local_28 * 0x100;
  iVar6 = *(int *)(local_1c + 4) * local_30;
  iVar2 = *(int *)(local_1c + 4) * local_34 >> 8;
  iVar3 = __16__rt_sdiv(iVar9 * 0x100,iVar2 << 8);
  iVar9 = __16__rt_sdiv(iVar9 * 0x100,(iVar6 >> 8) << 8);
  iVar6 = *piVar7 + iVar3;
  iVar9 = *piVar8 + iVar9;
  local_3c = iVar6;
  local_38 = iVar9;
  iVar4 = __call_via_r2(param_2,&local_3c,*(int *)(*param_2 + 0x54) + *param_2);
  if (iVar4 == 0) {
    local_24 = local_3c;
    local_20 = param_2[0x69];
    iVar4 = local_3c - *piVar7;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if ((iVar4 < 1) ||
       (iVar4 = __call_via_r2(param_2,&local_24,*(int *)(*param_2 + 0x54) + *param_2), iVar4 == 0))
    {
      local_24 = *piVar7;
      local_20 = local_38;
      iVar4 = local_38 - param_2[0x69];
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((0 < iVar4) &&
         (iVar4 = *(int *)(*param_2 + 0x54),
         iVar2 = __call_via_r2(param_2,&local_24,iVar4 + *param_2,iVar4,iVar3,iVar6,iVar9,iVar2),
         iVar2 != 0)) {
        *piVar7 = local_24;
        *piVar8 = local_20;
      }
    }
    else {
      *piVar7 = local_24;
      *piVar8 = local_20;
    }
  }
  else {
    *piVar7 = local_3c;
    *piVar8 = local_38;
  }
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  return;
}


/* sub_0803BB00 @ 0x0803BB00 */

void sub_0803BB00(int param_1,int *param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x18) = DAT_030032e5;
  DAT_030032e5 = DAT_030032e5 + 1 & 7;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  iVar1 = sub_0803B6EA(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20));
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* sub_0803BB48 @ 0x0803BB48 */

undefined4 sub_0803BB48(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2,param_4,param_4);
    iVar1 = sub_0803B6EA(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x20));
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  *(byte *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + 7U & 7;
  sub_0803B934(param_1,param_2);
  iVar2 = param_2[0x16];
  iVar1 = sub_08000158(0x4e);
  if (((iVar1 == iVar2) || (iVar1 = sub_08000158(0x11), iVar1 == iVar2)) ||
     (iVar1 = sub_08000158(0x4c), iVar1 == iVar2)) {
    if ((*(short *)((int)param_2 + 0x12) == 0) || (*(short *)((int)param_2 + 0x12) == 0x10)) {
      sub_0803E378(&DAT_03003e5c,&DAT_08319518,0x40,0);
    }
  }
  else {
    iVar1 = sub_08000158(0xa4);
    if ((((iVar1 == iVar2) || (iVar1 = sub_08000158(0x44), iVar1 == iVar2)) ||
        (iVar1 = sub_08000158(0xbf), iVar1 == iVar2)) &&
       ((*(short *)((int)param_2 + 0x12) == 8 || (*(short *)((int)param_2 + 0x12) == 0x18)))) {
      sub_0803E378(&DAT_03003e5c,&DAT_08319518,0x40,0);
    }
  }
  return 0;
}


/* sub_0803BC2C @ 0x0803BC2C */

void sub_0803BC2C(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    do {
      iVar1 = sub_0803FACC(0x126);
      *(int *)(param_1 + 0x1c) = (iVar1 + 0x60) * 0x100;
      iVar1 = sub_0803FACC(0xf0);
      *(int *)(param_1 + 0x20) = (iVar1 + 0x70) * 0x100;
      iVar1 = __call_via_r2(param_2,(int *)(param_1 + 0x1c),*(int *)(*param_2 + 0x54) + *param_2);
    } while (iVar1 == 0);
    iVar1 = *(int *)(param_1 + 0x1c) - param_2[0x68];
    iVar2 = *(int *)(param_1 + 0x20) - param_2[0x69];
  } while ((iVar1 * iVar1 >> 8) + (iVar2 * iVar2 >> 8) < 0x5000);
  return;
}


/* sub_0803BCAA @ 0x0803BCAA */

undefined4 sub_0803BCAA(int param_1,int param_2)

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


/* sub_0803BD06 @ 0x0803BD06 */

void sub_0803BD06(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined *local_14;
  int *local_10;
  int local_c;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  uVar1 = sub_08000158(0x34);
  local_c = sub_08011C70(&DAT_03001c4c,5,uVar1);
  if (local_c != 0) {
    piVar2 = (int *)0x0;
    local_10 = (int *)0x0;
    local_14 = &_0804AE70;
    if (param_2 != (int *)0x0) {
      piVar2 = param_2 + 99;
    }
    sub_0801599C(&local_14,piVar2);
    local_14 = &_08049ACC;
    if (local_10 != (int *)0x0) {
      __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
    }
  }
  return;
}


/* sub_0803BD64 @ 0x0803BD64 */

void sub_0803BD64(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0xb3;
    puVar1[2] = 0x32;
    puVar1[5] = 0;
    *puVar1 = &_0804ADC0;
  }
  return;
}


/* sub_0803BD94 @ 0x0803BD94 */

void sub_0803BD94(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x24;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  iVar3 = *(int *)(param_2 + 0x1a0) >> 8;
  local_14 = iVar3 + *(int *)(&gUnknown_0877B180 + iVar1);
  local_10 = (*(int *)(param_2 + 0x1a4) >> 8) + *(int *)(&DAT_0877b184 + iVar1);
  uVar2 = sub_08021280(0,&local_14,*(undefined4 *)(&DAT_0877b188 + iVar1),param_2,&gUnknown_0872A6A8
                       ,local_14,local_10,iVar3);
  *(undefined4 *)(param_1 + 4) = uVar2;
  sub_0801191A(&DAT_03001c4c,uVar2);
  *(undefined4 *)(param_1 + 8) = 0x3c;
  return;
}


/* sub_0803BE02 @ 0x0803BE02 */

void sub_0803BE02(void)

{
  return;
}


/* sub_0803BE04 @ 0x0803BE04 */

void sub_0803BE04(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  sVar1 = *(short *)((int)param_2 + 0x12);
  if (sVar1 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = *(int *)(DAT_03001c34 + 0x1a0) - param_2[0x68];
      iVar2 = *(int *)(DAT_03001c34 + 0x1a4) - param_2[0x69];
      iVar7 = iVar8 >> 8;
      iVar3 = iVar2 >> 8;
      uVar4 = sub_0803FAF6(iVar7 * iVar7 + iVar3 * iVar3);
      uVar5 = __16__rt_sdiv(uVar4,iVar8);
      uVar6 = __16__rt_sdiv(uVar4,iVar2);
      *(undefined2 *)((int)param_2 + 0x12) = 1;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      sub_080214DA(*(undefined4 *)(param_1 + 4),(char)param_2[4],uVar5,uVar6,uVar4,iVar3,iVar7);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    *(short *)((int)param_2 + 0x12) = sVar1 + 1;
    if (0x1f < (ushort)(sVar1 + 1U)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      *(undefined1 *)(param_2 + 2) = 0x24;
    }
  }
  return;
}


/* sub_0803BEB2 @ 0x0803BEB2 */

void sub_0803BEB2(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0803BED0 @ 0x0803BED0 */

void sub_0803BED0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D6CC;
  }
  sub_0800ECDA(param_2,0x10);
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_0803BEF6 @ 0x0803BEF6 */

bool sub_0803BEF6(undefined4 param_1,int param_2)

{
  return *(int *)(*(int *)(param_2 + 0x58) + 0x94) != *(int *)(param_2 + 0x50);
}


/* sub_0803BF0E @ 0x0803BF0E */

undefined4 * sub_0803BF0E(void)

{
  return &DAT_030032e8;
}


/* sub_0803BF28 @ 0x0803BF28 */

void sub_0803BF28(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = sub_0803FACC(2);
  if (iVar1 == 0) {
    DAT_030032ec = DAT_030032ec + -1;
  }
  else {
    DAT_030032ec = DAT_030032ec + 1;
  }
  if (DAT_030032ec < 0) {
    DAT_030032ec = 4;
  }
  else if (4 < DAT_030032ec) {
    DAT_030032ec = 0;
  }
  iVar1 = *(int *)(&DAT_0877b1c0 + DAT_030032ec * 8);
  iVar4 = *(int *)(param_2 + 0x1a4);
  uVar2 = __16__rt_sdiv(0x3c00,(*(int *)(&gUnknown_0877B1BC + DAT_030032ec * 8) -
                               *(int *)(param_2 + 0x1a0)) * 0x100);
  uVar3 = __16__rt_sdiv(0x3c00,(iVar1 - iVar4) * 0x100);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 0x3c;
  *(int *)(param_2 + 0x214) = DAT_030032ec;
  *(undefined1 *)(param_2 + 8) = 0x24;
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = iVar4;
  if (iVar4 < 0) {
    iVar1 = -iVar4;
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = -iVar5;
  }
  if (iVar1 < iVar6) {
    if (iVar5 < 1) {
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
  }
  else if (iVar4 < 1) {
    *(undefined1 *)(param_2 + 0x10) = 2;
  }
  else {
    *(undefined1 *)(param_2 + 0x10) = 3;
  }
  return;
}


/* sub_0803BFFC @ 0x0803BFFC */

bool sub_0803BFFC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x58) + 0x90) != *(int *)(param_2 + 0x50)) {
    sub_0800ECDA(param_2,0xf,param_3,param_4,param_4);
    sub_0800ED18(param_2,&DAT_03001b20);
    *(undefined1 *)(param_2 + 8) = 0x24;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + -1;
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x1a0) = *(int *)(param_2 + 0x1a0) + *(int *)(param_1 + 4);
    *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(param_1 + 8);
  }
  return iVar1 == 0;
}


/* sub_0803C04A @ 0x0803C04A */

void sub_0803C04A(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_030032ec * 8;
  param_2[0x68] = *(int *)(&gUnknown_0877B1BC + iVar1);
  param_2[0x69] = *(int *)(&DAT_0877b1c0 + iVar1);
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  *(undefined1 *)(param_2 + 2) = 0x24;
  return;
}


/* sub_0803C07A @ 0x0803C07A */

void sub_0803C07A(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B678;
  }
  return;
}


/* sub_0803C08C @ 0x0803C08C */

undefined4 sub_0803C08C(undefined4 param_1,int param_2)

{
  if (*(int *)(*(int *)(DAT_03001c34 + 0x58) + 0xa0) == *(int *)(DAT_03001c34 + 0x50)) {
    *(undefined1 *)(param_2 + 8) = 0x38;
    return 1;
  }
  return 2;
}


/* sub_0803C0BC @ 0x0803C0BC */

undefined4 * sub_0803C0BC(void)

{
  return &DAT_030032f0;
}


/* sub_0803C0C4 @ 0x0803C0C4 */

void sub_0803C0C4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  iVar3 = *(int *)(param_2 + 4);
  *(char *)(iVar3 + 0x10) = (char)*(undefined4 *)(param_1 + 0xc);
  sub_0800ECDA(iVar3,0x12);
  sub_0800EE78(iVar3);
  *(undefined2 *)(iVar3 + 0x12) = 0;
  *(undefined1 *)(iVar3 + 8) = 0x38;
  *(undefined1 *)(iVar3 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(iVar3 + 0x10) * 0xc;
  iVar2 = *(int *)(iVar3 + 0x1a0) >> 8;
  local_18 = iVar2 + *(int *)(&gUnknown_0877B200 + iVar1);
  local_14 = (*(int *)(iVar3 + 0x1a4) >> 8) + *(int *)(&DAT_0877b204 + iVar1);
  iVar1 = sub_080206B8(0,&local_18,*(undefined4 *)(&DAT_0877b208 + iVar1),iVar3,&gUnknown_0871DA88,
                       local_14,iVar2);
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x10));
  return;
}


/* sub_0803C144 @ 0x0803C144 */

void sub_0803C144(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  iVar4 = *(int *)(param_2 + 4);
  uVar1 = *(short *)(iVar4 + 0x12) + 1;
  *(ushort *)(iVar4 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      iVar2 = *(int *)(iVar4 + 0x1a4) >> 8;
      iVar3 = (uint)*(byte *)(iVar4 + 0x10) * 8;
      local_10 = (*(int *)(iVar4 + 0x1a0) >> 8) + *(int *)(&DAT_0877b230 + iVar3);
      local_c = iVar2 + *(int *)(&DAT_0877b234 + iVar3);
      sub_080207D2(*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(iVar4 + 0x10),&local_10,iVar2,
                   local_10);
    }
    *(char *)(iVar4 + 0x11) =
         '\x01' - (char)((int)((uint)*(ushort *)(iVar4 + 0x12) << 0x1c) >> 0x1f);
  }
  return;
}


/* sub_0803C1B0 @ 0x0803C1B0 */

undefined4 sub_0803C1B0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    iVar1 = **(int **)(param_2 + 4);
    __call_via_r2(*(int **)(param_2 + 4),0,*(int *)(iVar1 + 0x28) + iVar1);
    sub_0802082A(*(undefined4 *)(param_1 + 0x10));
    return 1;
  }
  return 0;
}


/* sub_0803C1E0 @ 0x0803C1E0 */

void sub_0803C1E0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  iVar3 = *(int *)(param_2 + 4);
  *(char *)(iVar3 + 0x10) = (char)*(undefined4 *)(param_1 + 0xc);
  sub_0800ECDA(iVar3,3);
  sub_0800EE78(iVar3);
  *(undefined2 *)(iVar3 + 0x12) = 0;
  *(undefined1 *)(iVar3 + 8) = 0x38;
  *(undefined1 *)(iVar3 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(iVar3 + 0x10) * 0xc;
  iVar2 = *(int *)(iVar3 + 0x1a0) >> 8;
  local_18 = iVar2 + *(int *)(&gUnknown_0877B254 + iVar1);
  local_14 = (*(int *)(iVar3 + 0x1a4) >> 8) + *(int *)(&DAT_0877b258 + iVar1);
  iVar1 = sub_080206B8(0,&local_18,*(undefined4 *)(&DAT_0877b25c + iVar1),iVar3,&gUnknown_0877C41C,
                       local_14,iVar2);
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x10));
  return;
}


/* sub_0803C260 @ 0x0803C260 */

void sub_0803C260(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  iVar4 = *(int *)(param_2 + 4);
  uVar1 = *(short *)(iVar4 + 0x12) + 1;
  *(ushort *)(iVar4 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      iVar2 = *(int *)(iVar4 + 0x1a4) >> 8;
      iVar3 = (uint)*(byte *)(iVar4 + 0x10) * 8;
      local_10 = (*(int *)(iVar4 + 0x1a0) >> 8) + *(int *)(&DAT_0877b284 + iVar3);
      local_c = iVar2 + *(int *)(&DAT_0877b288 + iVar3);
      sub_080207D2(*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(iVar4 + 0x10),&local_10,iVar2,
                   local_10);
    }
    *(undefined1 *)(iVar4 + 0x11) = 1;
  }
  return;
}


/* sub_0803C2C6 @ 0x0803C2C6 */

undefined4 sub_0803C2C6(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    iVar1 = **(int **)(param_2 + 4);
    __call_via_r2(*(int **)(param_2 + 4),0,*(int *)(iVar1 + 0x28) + iVar1);
    sub_0802082A(*(undefined4 *)(param_1 + 0x10));
    return 1;
  }
  return 0;
}


/* sub_0803C2F8 @ 0x0803C2F8 */

void sub_0803C2F8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  iVar3 = *(int *)(param_2 + 4);
  *(char *)(iVar3 + 0x10) = (char)*(undefined4 *)(param_1 + 0xc);
  sub_0800ECDA(iVar3,3);
  sub_0800EE78(iVar3);
  *(undefined2 *)(iVar3 + 0x12) = 0;
  *(undefined1 *)(iVar3 + 8) = 0x38;
  *(undefined1 *)(iVar3 + 0x11) = 0;
  iVar1 = (uint)*(byte *)(iVar3 + 0x10) * 0xc;
  iVar2 = *(int *)(iVar3 + 0x1a0) >> 8;
  local_18 = iVar2 + *(int *)(&gUnknown_0877B2A8 + iVar1);
  local_14 = (*(int *)(iVar3 + 0x1a4) >> 8) + *(int *)(&DAT_0877b2ac + iVar1);
  iVar1 = sub_080206B8(0,&local_18,*(undefined4 *)(&DAT_0877b2b0 + iVar1),iVar3,&gUnknown_08725038,
                       local_14,iVar2);
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 0x10));
  return;
}


/* sub_0803C378 @ 0x0803C378 */

void sub_0803C378(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  iVar4 = *(int *)(param_2 + 4);
  uVar1 = *(short *)(iVar4 + 0x12) + 1;
  *(ushort *)(iVar4 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      iVar2 = *(int *)(iVar4 + 0x1a4) >> 8;
      iVar3 = (uint)*(byte *)(iVar4 + 0x10) * 8;
      local_10 = (*(int *)(iVar4 + 0x1a0) >> 8) + *(int *)(&DAT_0877b2d8 + iVar3);
      local_c = iVar2 + *(int *)(&DAT_0877b2dc + iVar3);
      sub_080207D2(*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(iVar4 + 0x10),&local_10,iVar2,
                   local_10);
    }
    *(undefined1 *)(iVar4 + 0x11) = 1;
  }
  return;
}


/* sub_0803C3DE @ 0x0803C3DE */

undefined4 sub_0803C3DE(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    iVar1 = **(int **)(param_2 + 4);
    __call_via_r2(*(int **)(param_2 + 4),0,*(int *)(iVar1 + 0x28) + iVar1);
    sub_0802082A(*(undefined4 *)(param_1 + 0x10));
    return 1;
  }
  return 0;
}


/* sub_0803C410 @ 0x0803C410 */

void sub_0803C410(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  sub_0800ECDA(iVar1,0x12,param_3,param_4,param_4);
  sub_0800EE78(iVar1);
  *(char *)(iVar1 + 0x10) = (char)*(undefined4 *)(param_1 + 0xc);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined1 *)(iVar1 + 8) = 0x38;
  *(undefined1 *)(iVar1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* sub_0803C436 @ 0x0803C436 */

void sub_0803C436(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  iVar4 = *(int *)(param_2 + 4);
  uVar1 = *(short *)(iVar4 + 0x12) + 1;
  *(ushort *)(iVar4 + 0x12) = uVar1;
  if ((uVar1 < 0x20) && (*(char *)(iVar4 + 0x11) = (char)(uVar1 >> 3), uVar1 == 0x10)) {
    iVar2 = (uint)*(byte *)(iVar4 + 0x10) * 8;
    local_10 = (*(int *)(iVar4 + 0x1a0) >> 8) + *(int *)(&gUnknown_0877C430 + iVar2);
    local_c = (*(int *)(iVar4 + 0x1a4) >> 8) + *(int *)(&DAT_0877c434 + iVar2);
    uVar3 = sub_080286D4(0,&local_10,*(undefined1 *)(iVar4 + 0x10),iVar4,local_10);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    sub_0801191A(&DAT_03001c4c,uVar3);
  }
  return;
}


/* sub_0803C4AA @ 0x0803C4AA */

undefined4 sub_0803C4AA(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    iVar1 = **(int **)(param_2 + 4);
    __call_via_r2(*(int **)(param_2 + 4),0,*(int *)(iVar1 + 0x28) + iVar1);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x10) = 1;
    }
    return 1;
  }
  return 0;
}


