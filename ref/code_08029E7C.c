/* Ghidra reference decompilation of code_08029E7C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08029E7C @ 0x08029E7C */

void sub_08029E7C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804CBB0;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_08029E9E @ 0x08029E9E */

undefined4 sub_08029E9E(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x1e4) == *(int *)(param_1 + 0xc)) {
    uVar1 = __call_via_r3();
    return uVar1;
  }
  return 0;
}


/* sub_08029EA2 @ 0x08029EA2 */

undefined4 sub_08029EA2(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_4 + param_2) == *(int *)(param_1 + 0xc)) {
    uVar1 = __call_via_r3();
    return uVar1;
  }
  return 0;
}


/* sub_08029EC0 @ 0x08029EC0 */

undefined4 * sub_08029EC0(void)

{
  return &DAT_03002ff8;
}


/* sub_08029EC4 @ 0x08029EC4 */

undefined4 sub_08029EC4(undefined4 param_1,int param_2)

{
  *(int *)(param_2 + 0x1e4) = *(int *)(param_2 + 0x1e4) + 1;
  return 0;
}


/* sub_08029ED8 @ 0x08029ED8 */

undefined4 sub_08029ED8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  int iStack_1c;
  int iStack_18;
  
  if ((DAT_03001b94 == 0) || (*(int *)(DAT_03001b94 + 0x1cc) == 0)) {
    uVar1 = 0;
  }
  else {
    sub_0800FE78(&iStack_24);
    sub_0800FE78(&iStack_34,param_2);
    iStack_38 = iStack_30 + iStack_28 >> 1;
    iStack_48 = iStack_34 + iStack_2c >> 1;
    iStack_50 = iStack_34 + -4;
    if ((iStack_50 < iStack_1c) &&
       (((iStack_24 < iStack_2c + 3 && (iStack_30 < iStack_18)) && (iStack_20 < iStack_28 + -6)))) {
      iStack_44 = iStack_20 + iStack_18 >> 1;
      iVar3 = iStack_24 + iStack_1c >> 1;
      iVar2 = iVar3 - iStack_48;
      iStack_4c = iStack_44 - iStack_38;
      iVar4 = iVar2;
      if (iVar2 < 0) {
        iVar4 = -iVar2;
      }
      iVar5 = iStack_4c;
      if (iStack_4c < 0) {
        iVar5 = -iStack_4c;
      }
      if (iVar5 < iVar4) {
        iStack_4c = iStack_28 + 3;
        iStack_30 = iStack_38;
        if (iVar2 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 2;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 3;
          iStack_50 = iStack_48;
          iStack_48 = iStack_2c + 3;
        }
      }
      else {
        iStack_50 = iVar2;
        iStack_3c = iStack_48;
        iStack_48 = iVar3;
        iStack_40 = iStack_4c;
        sub_0800FDFA(&iStack_50,param_2);
        if (iStack_40 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 1;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 0;
          iStack_4c = iStack_28 + -6;
        }
      }
      if (((iStack_50 < iStack_1c) && (iStack_24 < iStack_48)) &&
         ((iStack_30 < iStack_18 && (iStack_20 < iStack_4c)))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_08029FE6 @ 0x08029FE6 */

undefined4 * sub_08029FE6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08049DF0;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0802A00C @ 0x0802A00C */

void sub_0802A00C(int param_1)

{
  undefined4 *puVar1;
  
  if (DAT_03001c34 != 0) {
    puVar1 = (undefined4 *)(DAT_03001c34 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(DAT_03001c34 + 0x1a0);
    *(undefined4 *)(param_1 + 0x20) = *puVar1;
    sub_0803BB00();
  }
  return;
}


/* sub_0802A028 @ 0x0802A028 */

undefined4 sub_0802A028(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_03001c34 == 0) {
    uVar1 = 0;
  }
  else {
    puVar4 = (undefined4 *)(DAT_03001c34 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(DAT_03001c34 + 0x1a0);
    *(undefined4 *)(param_1 + 0x20) = *puVar4;
    iVar3 = *(int *)(param_1 + 0x1c) - param_2[0x68];
    iVar2 = *(int *)(param_1 + 0x20) - param_2[0x69];
    if ((iVar3 * iVar3 >> 8) + (iVar2 * iVar2 >> 8) < 0x401) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = sub_0803BB48();
    }
  }
  return uVar1;
}


/* sub_0802A09E @ 0x0802A09E */

void sub_0802A09E(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0x32;
    puVar1[1] = uVar2;
    puVar1[5] = 0;
    *puVar1 = &_08049DA8;
  }
  return;
}


/* sub_0802A0C4 @ 0x0802A0C4 */

void sub_0802A0C4(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 auStack_78 [4];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 uStack_64;
  undefined4 uStack_60;
  undefined *puStack_5c;
  int *piStack_58;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int *piStack_18;
  
  piVar1 = DAT_03001b94;
  if ((DAT_03001b94 != (int *)0x0) && (DAT_03001b94[0x73] != 0)) {
    iStack_1c = param_1;
    piStack_18 = param_2;
    sub_0800FE78(&local_2c,DAT_03001b94);
    sub_0800FE78(&local_3c,param_2);
    local_4c = local_3c + local_34 >> 1;
    local_70 = local_38 + local_30 >> 1;
    local_7c = local_28 + local_20 >> 1;
    local_80 = local_2c + local_24 >> 1;
    local_88 = local_80 - local_4c;
    iVar5 = local_7c - local_70;
    iVar3 = local_88;
    if (local_88 < 0) {
      iVar3 = -local_88;
    }
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    local_84 = iVar5;
    local_44 = local_4c;
    local_40 = local_70;
    if (iVar4 < iVar3) {
      local_68 = local_30 + 3;
      if (local_88 < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        local_74 = local_3c + -4;
        local_6c = local_4c;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        local_74 = local_4c;
        local_6c = local_34 + 3;
      }
    }
    else {
      local_48 = (int *)local_70;
      sub_0800FDFA(&local_88,param_2);
      local_74 = local_88;
      local_6c = local_80;
      if (iVar5 < 1) {
        *(undefined1 *)(param_2 + 4) = 1;
        local_70 = local_38;
        local_68 = local_84;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
        local_70 = local_38;
        local_68 = local_30 + -6;
      }
    }
    uStack_64 = (undefined1)param_2[4];
    puStack_5c = &gUnknown_086B8098;
    uStack_60 = 0x400;
    auStack_78[0] = 0;
    iVar3 = *piVar1;
    piStack_58 = param_2;
    local_48 = param_2;
    iVar3 = __call_via_r3(piVar1,0,auStack_78,*(int *)(iVar3 + 0x24) + iVar3);
    if (iVar3 != 0) {
      iVar5 = param_2[0x16];
      iVar3 = sub_08000158(0x60);
      if (((iVar3 == iVar5) || (iVar3 = sub_08000158(0xe5), iVar3 == iVar5)) ||
         (iVar3 = sub_08000158(0xdc), iVar3 == iVar5)) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319410,0x40,0);
      }
      else {
        iVar3 = sub_08000158(0xee);
        if (((iVar3 == iVar5) || (iVar3 = sub_08000158(0xf4), iVar3 == iVar5)) ||
           (iVar3 = sub_08000158(0xed), iVar3 == iVar5)) {
          sub_0803E378(&DAT_03003e5c,&DAT_08319590,0x40,0);
        }
        else {
          iVar3 = sub_0803FACC(2);
          sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
        }
      }
    }
    cVar2 = sub_0803FACC(*(undefined4 *)(iStack_1c + 4));
    __call_via_r2(param_2,cVar2 + '\x04',*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802A276 @ 0x0802A276 */

void sub_0802A276(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  return;
}


/* sub_0802A288 @ 0x0802A288 */

undefined4 * sub_0802A288(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  pbVar2 = *(byte **)(param_2 + 0x58);
  uVar4 = 3;
  bVar1 = *pbVar2;
  if ((bVar1 < 7) || (*(int *)(pbVar2 + 0x6c) == 0)) {
    uVar4 = 2;
  }
  if ((1 < uVar4) && ((bVar1 < 6 || (*(int *)(pbVar2 + 0x68) == 0)))) {
    uVar4 = 1;
  }
  if ((uVar4 != 0) && ((bVar1 < 5 || (*(int *)(pbVar2 + 100) == 0)))) {
    uVar4 = 0;
  }
  puVar3 = (undefined4 *)sub_0803D5B8(8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_080497C4;
    puVar3[1] = uVar4;
  }
  return puVar3;
}


/* sub_0802A2EC @ 0x0802A2EC */

undefined4 * sub_0802A2EC(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x80;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x80);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x80);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x80);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_08049C98;
    uVar2 = param_2[1];
    param_1[10] = *param_2;
    param_1[0xb] = uVar2;
    param_1[7] = 0;
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[1] = param_2[1];
    if (param_3 == 0) {
      param_1[1] = param_2[1] + 0x2c;
    }
    param_1[0x13] = param_4;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0x10] = 8;
    param_1[6] = 0xffffffff;
    param_1[0x11] = param_3;
    uVar2 = param_2[1];
    param_1[10] = *param_2;
    param_1[0xb] = uVar2;
    uVar2 = param_2[1];
    param_1[8] = *param_2;
    param_1[9] = uVar2;
    param_1[0x12] = &gUnknown_0875043C + param_1[0x11] * 0x24;
    iVar1 = param_1[0x11] * 8;
    uVar2 = *(undefined4 *)(&gUnknown_0807268C + iVar1);
    param_1[0xf] = *(undefined4 *)(&DAT_08072690 + iVar1);
    param_1[0xe] = uVar2;
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831944C,0x40,0);
  }
  return param_1;
}


/* sub_0802A3A8 @ 0x0802A3A8 */

void sub_0802A3A8(undefined4 *param_1,int param_2)

{
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


/* sub_0802A3D2 @ 0x0802A3D2 */

void sub_0802A3D2(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (param_2 != 0) {
      iStack_24 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x38);
      local_18 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x3c);
      local_1c = iStack_24;
      uStack_30 = *(undefined4 *)(param_1 + 0x4c);
      uStack_3c = (undefined1)*(undefined4 *)(param_1 + 0x44);
      puStack_34 = &gUnknown_086B8090;
      uStack_38 = 0x400;
      auStack_50[0] = 0;
      piVar5 = (int *)(param_1 + 0x20);
      piVar2 = piVar5;
      if (iStack_24 < *(int *)(param_1 + 0x20)) {
        piVar2 = &local_1c;
      }
      iStack_4c = *piVar2 + -4;
      piVar2 = (int *)(param_1 + 0x24);
      piVar6 = piVar2;
      if (local_18 < *(int *)(param_1 + 0x24)) {
        piVar6 = &local_18;
      }
      iStack_48 = *piVar6 + -4;
      if (*piVar5 < iStack_24) {
        piVar5 = &local_1c;
      }
      iStack_44 = *piVar5 + 4;
      if (*piVar2 < local_18) {
        piVar2 = &local_18;
      }
      iStack_40 = *piVar2 + 4;
      iStack_20 = param_1;
      iVar1 = sub_08009324(&iStack_4c,DAT_03001a50);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        iVar1 = sub_08011C0C(&DAT_03001c4c,0,auStack_50);
        if (iVar1 == 0) {
          if (*(int *)(param_1 + 0x40) < 0x30) {
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x38) * 4;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x3c) * 4;
          }
          iVar1 = *(int *)(param_1 + 0x1c) + 1;
          *(int *)(param_1 + 0x1c) = iVar1;
          if (0xf0 < iVar1) {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        else {
          iVar1 = sub_080116FC(&DAT_03001c4c);
          if (0x3ff < iVar1) {
            iVar1 = sub_0803FACC(0x1000);
            uVar3 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
            sub_0801191A(&DAT_03001c4c,uVar3);
          }
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    local_1c = *(int *)(param_1 + 0x38) * 4;
    local_18 = *(int *)(param_1 + 0x3c) * 4;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + local_1c;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + local_18;
    iVar1 = *(int *)(param_1 + 0x40) + -4;
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar1 < 1) {
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  iVar4 = iVar1 >> 2;
  *(int *)(param_1 + 0x14) = iVar1;
  if (*(int *)(param_1 + 0x18) != iVar4) {
    *(int *)(param_1 + 0x18) = iVar4;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(*(int *)(param_1 + 0x48) + ((iVar4 << 0x1f) >> 0x1f) * -0xc + 8),0x40);
    sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010040,
                 *(int *)(*(int *)(param_1 + 0x48) + 0x20),0x40);
  }
  return;
}


/* sub_0802A5B0 @ 0x0802A5B0 */

void sub_0802A5B0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_0802A5C0 @ 0x0802A5C0 */

undefined4 sub_0802A5C0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) - DAT_030019bc;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x24) - DAT_030019c0;
  *(int *)(param_1 + 0x30) = iVar1;
  return 1;
}


/* sub_0802A5EC @ 0x0802A5EC */

void sub_0802A5EC(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x48) + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x30) + (int)*pcVar1 + *param_5;
  uVar2 = *(int *)(param_1 + 0x34) + (int)pcVar1[1] + param_5[1];
  if ((((iVar3 < 0xf0) && (0 < (int)(iVar3 + (uint)(byte)pcVar1[2]))) && ((int)uVar2 < 0xa0)) &&
     (0 < (int)(uVar2 + (byte)pcVar1[3]))) {
    *(undefined4 *)*param_3 = *(undefined4 *)(pcVar1 + 4);
    uVar5 = *(uint *)*param_3;
    uVar4 = (uint)(iVar3 * 0x800000) >> 7;
    *(uint *)*param_3 = uVar4 | uVar5 & 0xfe00ffff;
    *(uint *)*param_3 = uVar2 & 0xff | uVar4 | uVar5 & 0xfe00ff00;
    uVar4 = *(uint *)(*param_3 + 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) + param_4 & 0x3ff;
    *(uint *)(*param_3 + 4) = uVar2 | uVar4 & 0xfffffc00;
    *(uint *)(*param_3 + 4) =
         (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar4 & 0xfffff000;
    *param_3 = *param_3 + 8;
  }
  return;
}


/* sub_0802A69A @ 0x0802A69A */

undefined4 sub_0802A69A(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_18 = *param_2;
  if ((*(int *)(param_1 + 0x40) < 0x30) && (*(char *)(param_1 + 0x10) == '\0')) {
    sub_0802A5EC(param_1,0,&local_18,0,&DAT_087502a4);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x40) + -1) {
    do {
      local_20 = iVar1 * *(int *)(param_1 + 0x38);
      local_1c = iVar1 * *(int *)(param_1 + 0x3c);
      sub_0802A5EC(param_1,2,&local_18,2,&local_20,local_1c);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x40) + -1);
  }
  *param_2 = local_18;
  return 0;
}


/* sub_0802A704 @ 0x0802A704 */

undefined4 sub_0802A704(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 0x14) == (param_1[0x11] ^ 1U)) {
      iVar2 = param_1[8] + param_1[0x10] * param_1[0xe];
      iVar3 = param_1[9] + param_1[0x10] * param_1[0xf];
      if ((((*(int *)(param_3 + 4) < iVar2 + 0xc) && (iVar2 + -0xc < *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_3 + 8) < iVar3 + 0xc)) && (iVar3 + -0xc < *(int *)(param_3 + 0x10))) {
        *(undefined1 *)(param_1 + 4) = 1;
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0xb) {
    param_1[6] = -1;
    uVar1 = 0;
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0802A7A0 @ 0x0802A7A0 */

undefined4 sub_0802A7A0(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_0802A7B4 @ 0x0802A7B4 */

void sub_0802A7B4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x38) = uVar1;
  if (uVar1 >> 0x10 != 0) {
    uVar1 = *(int *)(param_1 + 0x34) + ((int)uVar1 >> 0x10) * 0xc;
    *(uint *)(param_1 + 0x34) = uVar1;
    if ((uint)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x3c) * 0xc) <= uVar1) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x44);
    }
    sub_0802A7F4(param_1);
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffff;
  return;
}


/* sub_0802A7F4 @ 0x0802A7F4 */

void sub_0802A7F4(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *(char **)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x10) - (int)*pcVar2;
  *(int *)(param_1 + 0x20) = iVar3;
  iVar4 = *(int *)(param_1 + 0x14) - (int)pcVar2[1];
  *(int *)(param_1 + 0x24) = iVar4;
  bVar1 = pcVar2[2];
  *(uint *)(param_1 + 0x2c) = iVar4 + (uint)(byte)pcVar2[3];
  *(uint *)(param_1 + 0x28) = iVar3 + (uint)bVar1;
  return;
}


/* sub_0802A81C @ 0x0802A81C */

undefined4 *
sub_0802A81C(undefined4 *param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x44), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)param_6;
    iVar3 = sub_0801124C(&DAT_03001c4c,param_6);
    if (iVar3 == -1) {
      sub_08011732(&DAT_03001c4c,param_6);
      iVar3 = sub_0801124C(&DAT_03001c4c,param_6);
    }
    *(short *)(param_1 + 3) = (short)iVar3;
    *param_1 = &_0804CF3C;
    uVar4 = *param_2;
    param_1[5] = param_2[1];
    param_1[4] = uVar4;
    param_1[0xd] = param_3;
    param_1[0xf] = param_4;
    param_1[0x10] = param_5;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 2) = param_7;
    param_1[1] = param_1[5];
    cVar2 = *param_3;
    param_1[8] = param_1[4] - (int)cVar2;
    iVar3 = param_1[5] - (int)param_3[1];
    param_1[9] = iVar3;
    bVar1 = param_3[2];
    param_1[0xb] = iVar3 + (uint)(byte)param_3[3];
    param_1[10] = (param_1[4] - (int)cVar2) + (uint)bVar1;
  }
  return param_1;
}


/* sub_0802A8AA @ 0x0802A8AA */

void sub_0802A8AA(int param_1)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x38) = uVar3;
  if (uVar3 >> 0x10 != 0) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x34) + ((int)uVar3 >> 0x10) * 0xc);
    *(char **)(param_1 + 0x34) = pcVar2;
    iVar4 = *(int *)(param_1 + 0x3c) - ((int)uVar3 >> 0x10);
    *(int *)(param_1 + 0x3c) = iVar4;
    if (iVar4 < 1) {
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10) - (int)*pcVar2;
    *(int *)(param_1 + 0x20) = iVar4;
    iVar5 = *(int *)(param_1 + 0x14) - (int)pcVar2[1];
    *(int *)(param_1 + 0x24) = iVar5;
    bVar1 = pcVar2[2];
    *(uint *)(param_1 + 0x2c) = iVar5 + (uint)(byte)pcVar2[3];
    *(uint *)(param_1 + 0x28) = iVar4 + (uint)bVar1;
  }
  *(uint *)(param_1 + 0x38) = uVar3 & 0xffff;
  return;
}


/* sub_0802A904 @ 0x0802A904 */

undefined4 sub_0802A904(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24) - DAT_030019c0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) - DAT_030019bc;
  *(int *)(param_1 + 0x1c) = iVar2;
  if ((((*(int *)(param_1 + 0x20) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x28))) &&
      (*(int *)(param_1 + 0x24) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x2c))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0802A950 @ 0x0802A950 */

bool sub_0802A950(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x34) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x18) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x1c) & 0xff;
  uVar2 = puVar1[1];
  puVar1[1] = uVar2 | 0xc00;
  puVar1[1] = uVar2 & 0xfffffc00 | 0xc00 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  return *(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x30);
}


/* sub_0802A9A8 @ 0x0802A9A8 */

void sub_0802A9A8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = iVar1;
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
               (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
  return;
}


/* sub_0802A9C6 @ 0x0802A9C6 */

undefined4 sub_0802A9C6(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0xb) {
    param_1[0xc] = 0;
  }
  else if (param_2 == 0xc) {
    iVar1 = *(int *)(*param_1 + 8);
    __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  }
  return 0;
}


/* sub_0802A9EC @ 0x0802A9EC */

undefined4 sub_0802A9EC(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_0802AA0C @ 0x0802AA0C */

undefined4 sub_0802AA0C(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1e8) = DAT_03000f94;
  return 0;
}


/* sub_0802AA1A @ 0x0802AA1A */

undefined4 * sub_0802AA1A(void)

{
  return &DAT_03002ffc;
}


/* sub_0802AA1E @ 0x0802AA1E */

undefined4 sub_0802AA1E(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1ec) = DAT_03000f94;
  return 0;
}


/* sub_0802AA2C @ 0x0802AA2C */

undefined4 * sub_0802AA2C(void)

{
  return &DAT_03003000;
}


/* sub_0802AA3C @ 0x0802AA3C */

void sub_0802AA3C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804A668;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_0802AA5E @ 0x0802AA5E */

undefined4 sub_0802AA5E(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x1e8)) {
    uVar1 = __call_via_r3();
    return uVar1;
  }
  return 0;
}


/* sub_0802AA80 @ 0x0802AA80 */

void sub_0802AA80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804AA5C;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_0802AAA2 @ 0x0802AAA2 */

undefined4 sub_0802AAA2(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x1ec)) {
    uVar1 = __call_via_r3();
    return uVar1;
  }
  return 0;
}


/* sub_0802AAD0 @ 0x0802AAD0 */

undefined4 * sub_0802AAD0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804B188;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0802AAEE @ 0x0802AAEE */

undefined4 sub_0802AAEE(void)

{
  undefined4 uVar1;
  
  if (DAT_03002fe4 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = __call_via_r3();
  }
  return uVar1;
}


/* sub_0802AB10 @ 0x0802AB10 */

void sub_0802AB10(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0802AB1C @ 0x0802AB1C */

void sub_0802AB1C(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  undefined *puStack_18;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 8) {
    *(undefined1 *)((int)param_2 + 0x11) = 0;
  }
  else if (uVar2 < 0x38) {
    *(char *)((int)param_2 + 0x11) = '\x01' - (char)((int)((uVar2 + 8) * 0x10000000) >> 0x1f);
  }
  else if (uVar2 < 0x48) {
    *(char *)((int)param_2 + 0x11) = (char)((int)(uVar2 - 0x38) >> 3) + '\x03';
    if (*(short *)((int)param_2 + 0x12) == 0x40) {
      iVar4 = param_2[0x16];
      iVar3 = sub_08000158(0x2b);
      puStack_18 = &DAT_03003e5c;
      if (iVar3 == iVar4) {
        iVar3 = sub_080116FC(&DAT_03001c4c);
        if (0xbf < iVar3) {
          iStack_20 = (param_2[0x68] >> 8) +
                      *(int *)(&DAT_08752d6c + (uint)*(byte *)(param_2 + 4) * 8);
          iStack_1c = (param_2[0x69] >> 8) +
                      *(int *)(&DAT_08752d70 + (uint)*(byte *)(param_2 + 4) * 8);
          DAT_03003008 = sub_08028C04(0,&iStack_20,(char)param_2[4],param_2,iStack_20);
          sub_0801191A(&DAT_03001c4c,DAT_03003008);
          sub_0803E378(puStack_18,&gUnknown_08319308,0x40,0);
        }
      }
      else {
        iVar3 = sub_080116FC(&DAT_03001c4c);
        if (0xbf < iVar3) {
          iStack_20 = (param_2[0x68] >> 8) +
                      *(int *)(&DAT_08752d8c + (uint)*(byte *)(param_2 + 4) * 8);
          iStack_1c = (param_2[0x69] >> 8) +
                      *(int *)(&DAT_08752d90 + (uint)*(byte *)(param_2 + 4) * 8);
          DAT_03003008 = sub_08028C04(0,&iStack_20,(char)param_2[4],param_2,iStack_20);
          sub_0801191A(&DAT_03001c4c,DAT_03003008);
          sub_0803E378(puStack_18,&gUnknown_08319308,0x40,0);
        }
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[iVar3] == DAT_03003008) {
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_03001c50);
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802AC80 @ 0x0802AC80 */

void sub_0802AC80(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_03001c50) {
    do {
      if ((&DAT_03001c54)[iVar1] == DAT_03003008) {
        sub_08011C70(&DAT_03001c4c,0x26,DAT_03003008);
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_03001c50);
  }
  return;
}


/* sub_0802ACB2 @ 0x0802ACB2 */

void sub_0802ACB2(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *local_18;
  int *local_14;
  int *local_10;
  
  iVar1 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
  if ((0 < *(short *)(iVar1 + 0x16)) && (DAT_03001c34[0x73] != 0)) {
    iVar1 = 0;
    local_14 = (int *)0x0;
    local_10 = DAT_03001c34;
    local_18 = &_0804AE70;
    if (param_2 != 0) {
      iVar1 = param_2 + 0x18c;
    }
    sub_0801599C(&local_18,iVar1);
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,&DAT_03003004);
    local_18 = &_08049ACC;
    if (local_14 != (int *)0x0) {
      __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
    }
  }
  return;
}


/* sub_0802AD22 @ 0x0802AD22 */

bool sub_0802AD22(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003004;
}


/* sub_0802AD34 @ 0x0802AD34 */

undefined4 * sub_0802AD34(void)

{
  return &DAT_0300300c;
}


/* sub_0802AD58 @ 0x0802AD58 */

void sub_0802AD58(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  if (-0x32 < *(short *)(param_2 + 0x176)) {
    *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + -1;
  }
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    *(undefined2 *)(param_2 + 0x12) = 8;
  }
  *(char *)(param_2 + 0x11) = (char)(*(ushort *)(param_2 + 0x12) >> 3);
  return;
}


/* sub_0802AD88 @ 0x0802AD88 */

void sub_0802AD88(undefined4 param_1,int param_2)

{
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03003014);
  DAT_0300302c = 0;
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}


/* sub_0802ADAA @ 0x0802ADAA */

undefined4 sub_0802ADAA(void)

{
  return 0;
}


/* sub_0802ADAE @ 0x0802ADAE */

undefined4 * sub_0802ADAE(void)

{
  return &DAT_03003010;
}


/* sub_0802ADBC @ 0x0802ADBC */

void sub_0802ADBC(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0802ADC8 @ 0x0802ADC8 */

void sub_0802ADC8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x60) {
    *(byte *)((int)param_2 + 0x11) = (byte)(((uint)uVar1 << 0x1b) >> 0x1e);
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}


/* sub_0802ADF0 @ 0x0802ADF0 */

void sub_0802ADF0(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_0300301c);
  return;
}


/* sub_0802AE06 @ 0x0802AE06 */

bool sub_0802AE06(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_0300301c;
}


/* sub_0802AE18 @ 0x0802AE18 */

undefined4 * sub_0802AE18(void)

{
  return &DAT_03003020;
}


/* sub_0802AE24 @ 0x0802AE24 */

void sub_0802AE24(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x13,0,param_4,param_4);
  return;
}


/* sub_0802AE3A @ 0x0802AE3A */

void sub_0802AE3A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  if (*(short *)((int)param_2 + 0x176) < 0) {
    *(short *)((int)param_2 + 0x176) = *(short *)((int)param_2 + 0x176) + 1;
  }
  else {
    uVar1 = *(short *)((int)param_2 + 0x12) + 1;
    *(ushort *)((int)param_2 + 0x12) = uVar1;
    if (7 < uVar1) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,0x16,param_4);
      return;
    }
  }
  *(char *)((int)param_2 + 0x11) = (char)(*(ushort *)((int)param_2 + 0x12) >> 3);
  return;
}


/* sub_0802AE76 @ 0x0802AE76 */

void sub_0802AE76(undefined4 param_1,int param_2)

{
  if (*(int *)(*(int *)(param_2 + 0x58) + 0xa0) == *(int *)(param_2 + 0x50)) {
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,&DAT_03003024);
  }
  return;
}


/* sub_0802AE98 @ 0x0802AE98 */

bool sub_0802AE98(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003024;
}


/* sub_0802AEAA @ 0x0802AEAA */

undefined4 * sub_0802AEAA(void)

{
  return &DAT_03003028;
}


/* sub_0802AEB4 @ 0x0802AEB4 */

void sub_0802AEB4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0802AEC0 @ 0x0802AEC0 */

void sub_0802AEC0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (0x1f < uVar1) {
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  *(char *)(param_2 + 0x11) = (char)(*(ushort *)(param_2 + 0x12) >> 3);
  return;
}


/* sub_0802AEDA @ 0x0802AEDA */

void sub_0802AEDA(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_03003030);
  DAT_0300302c = 1;
  return;
}


/* sub_0802AEF8 @ 0x0802AEF8 */

undefined4 * sub_0802AEF8(void)

{
  return &DAT_03003034;
}


/* sub_0802AF04 @ 0x0802AF04 */

void sub_0802AF04(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0802AF10 @ 0x0802AF10 */

void sub_0802AF10(undefined4 param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_34 [4];
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  if (*(short *)((int)param_2 + 0x12) == 0) {
    DAT_03003044 = DAT_03001c34[0x68];
    DAT_03003048 = DAT_03001c34[0x69];
    uVar3 = sub_08000158(0x36);
    sub_0800EDF8(DAT_03001c34,uVar3);
    piVar1 = DAT_03001c34;
    local_24 = param_2[0x68] >> 8;
    local_20 = param_2[0x69] >> 8;
    local_30 = local_24 + *(int *)(&gUnknown_08752DF8 + (uint)*(byte *)(param_2 + 4) * 8);
    local_2c = local_20 + *(int *)(&DAT_08752dfc + (uint)*(byte *)(param_2 + 4) * 8);
    local_1c = local_30;
    local_18 = local_2c;
    local_28 = (undefined4 *)sub_0803D5B8(0xc);
    if (local_28 != (undefined4 *)0x0) {
      *local_28 = &_0804C2CC;
      local_28[1] = local_1c << 8;
      local_28[2] = local_18 << 8;
    }
    sub_0800ECDA(piVar1,0);
    sub_0800ED18(piVar1,local_28);
  }
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  uVar4 = (uint)uVar2;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  if (uVar4 < 0x18) {
    if (uVar4 == 8) {
      puVar5 = (undefined4 *)sub_0803D5B8();
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = &_0804D300;
        puVar5[1] = param_2;
      }
      sub_08021094(&DAT_03002bd8,puVar5);
      sub_08011944(&DAT_03001c4c,DAT_03001c34);
    }
    *(char *)((int)param_2 + 0x11) = (char)(*(ushort *)((int)param_2 + 0x12) >> 3);
  }
  else if (uVar4 < 0x70) {
    *(char *)((int)param_2 + 0x11) = '\x03' - (char)((int)((uVar4 + 8) * 0x10000000) >> 0x1f);
    if ((*(ushort *)((int)param_2 + 0x12) & 7) == 0) {
      uVar4 = (uint)DAT_03001068;
      uVar8 = (uint)(*(ushort *)((int)param_2 + 0x1b2) >> 2);
      puVar6 = &DAT_03001576 + uVar4 * 0x34;
      if ((int)(short)*puVar6 <= (int)uVar8) {
        uVar8 = (uint)(short)*puVar6;
      }
      iVar7 = (*puVar6 - uVar8) * 0x10000;
      do {
        *puVar6 = (ushort)((uint)iVar7 >> 0x10);
      } while ((int)(short)*puVar6 != iVar7 >> 0x10);
      if (*puVar6 == 0) {
        do {
          *puVar6 = 1;
        } while (*puVar6 != 1);
        DAT_03003038 = 1;
      }
      if ((int)((uint)(byte)(&DAT_03001573)[uVar4 * 0x68] << 0x1f) < 0) {
        sub_08013C66();
      }
      local_18 = uVar8 << 10;
      __call_via_r2(param_2,&local_18,*(int *)(*param_2 + 0x60) + *param_2);
    }
    if ((*(ushort *)((int)param_2 + 0x12) & 0x1f) == 0) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831932C,0x40,0);
    }
  }
  else if (uVar4 < 0x80) {
    *(char *)((int)param_2 + 0x11) = (char)((int)(uVar4 - 0x70) >> 3) + '\x05';
    if (*(short *)((int)param_2 + 0x12) == 0x78) {
      local_18 = CONCAT22((short)((uint)DAT_03003048 >> 8),(short)((uint)DAT_03003044 >> 8));
      uVar3 = sub_0801713C(&gUnknown_086B82EC +
                           (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
      uVar3 = sub_080109AA(0,uVar3,&local_18,1);
      sub_0801191A(&DAT_03001c4c,uVar3);
      piVar1 = DAT_03001c34;
      puVar5 = (undefined4 *)sub_0803D5B8(8);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = &_0804D300;
        puVar5[1] = piVar1;
      }
      sub_08021094(&DAT_03002bd8,puVar5);
      uVar3 = sub_0801713C(&gUnknown_086B82EC +
                           (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
      sub_0800EDF8(DAT_03001c34,uVar3);
      piVar1 = DAT_03001c34;
      puVar5 = (undefined4 *)sub_0803D5B8(8);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = &_0804C790;
      }
      sub_0800ECDA(piVar1,0);
      sub_0800ED18(piVar1,puVar5);
      if (DAT_03003038 != 0) {
        local_24 = 0;
        local_1c = 0x400;
        __call_via_r2(DAT_03001c34,auStack_34,*(int *)(*DAT_03001c34 + 0x5c) + *DAT_03001c34);
      }
    }
  }
  else if (0x9f < uVar4) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802B19C @ 0x0802B19C */

void sub_0802B19C(undefined4 param_1,int param_2)

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
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_0300303c);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_0802B1EA @ 0x0802B1EA */

bool sub_0802B1EA(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_0300303c;
}


/* sub_0802B1FC @ 0x0802B1FC */

undefined4 * sub_0802B1FC(void)

{
  return &DAT_03003040;
}


/* sub_0802B214 @ 0x0802B214 */

void sub_0802B214(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0802B220 @ 0x0802B220 */

void sub_0802B220(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iStack_1c;
  int iStack_18;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if (*(short *)((int)param_2 + 0x12) == 0x10) {
      iVar3 = param_2[0x16];
      iVar2 = sub_08000158(0x2b);
      if (iVar2 == iVar3) {
        iVar2 = sub_080116FC(&DAT_03001c4c);
        if (0xbf < iVar2) {
          iStack_1c = (param_2[0x68] >> 8) +
                      *(int *)(&DAT_08752e28 + (uint)*(byte *)(param_2 + 4) * 8);
          iStack_18 = (param_2[0x69] >> 8) +
                      *(int *)(&DAT_08752e2c + (uint)*(byte *)(param_2 + 4) * 8);
          DAT_03003050 = sub_080286D4(0,&iStack_1c,(char)param_2[4],param_2);
          sub_0801191A(&DAT_03001c4c,DAT_03003050);
        }
      }
      else {
        iVar2 = sub_080116FC(&DAT_03001c4c);
        if (0xbf < iVar2) {
          iStack_1c = (param_2[0x68] >> 8) +
                      *(int *)(&DAT_08752e48 + (uint)*(byte *)(param_2 + 4) * 8);
          iStack_18 = (param_2[0x69] >> 8) +
                      *(int *)(&DAT_08752e4c + (uint)*(byte *)(param_2 + 4) * 8);
          DAT_03003050 = sub_080286D4(0,&iStack_1c,(char)param_2[4],param_2);
          sub_0801191A(&DAT_03001c4c,DAT_03003050);
        }
      }
    }
  }
  else {
    iVar2 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[iVar2] == DAT_03003050) {
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_03001c50);
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802B332 @ 0x0802B332 */

void sub_0802B332(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *local_18;
  int *local_14;
  int *local_10;
  
  iVar1 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
  if ((0 < *(short *)(iVar1 + 0x16)) && (DAT_03001c34[0x73] != 0)) {
    iVar1 = 0;
    local_14 = (int *)0x0;
    local_10 = DAT_03001c34;
    local_18 = &_0804AE70;
    if (param_2 != 0) {
      iVar1 = param_2 + 0x18c;
    }
    sub_0801599C(&local_18,iVar1);
    sub_0800ECDA(param_2,0x12);
    sub_0800ED18(param_2,&DAT_0300304c);
    local_18 = &_08049ACC;
    if (local_14 != (int *)0x0) {
      __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
    }
  }
  return;
}


/* sub_0802B3A2 @ 0x0802B3A2 */

bool sub_0802B3A2(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_0300304c;
}


/* sub_0802B3B4 @ 0x0802B3B4 */

undefined4 * sub_0802B3B4(void)

{
  return &DAT_03003054;
}


/* sub_0802B3D0 @ 0x0802B3D0 */

void sub_0802B3D0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_08000158(0x2b);
  uVar1 = sub_08011C70(&DAT_03001c4c,5,uVar1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


/* sub_0802B3EA @ 0x0802B3EA */

int sub_0802B3EA(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
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
  int iStack_1c;
  int iStack_18;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    sub_0800FDFA(&iStack_4c,*(undefined4 *)(param_1 + 8));
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800FDFA(&iStack_34,param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    iStack_20 = iStack_18;
    if (iStack_18 < 0) {
      iStack_20 = -iStack_18;
    }
    if (iStack_20 < iStack_24) {
      uVar1 = 3;
      if (iStack_1c < 1) {
        uVar1 = 2;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar2 = iStack_24;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_18 < 1;
      iVar2 = iStack_20;
    }
    if (iVar2 < *(int *)(param_1 + 4)) {
      iVar2 = 0;
    }
    else {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_24 = iStack_1c << 8;
      iStack_20 = iStack_18 << 8;
      piVar4 = param_2 + 0x68;
      iVar3 = __16__rt_sdiv(iVar2 * 0x100,iStack_1c << 0x10);
      iStack_38 = __16__rt_sdiv(iVar2 * 0x100,iStack_20 << 8);
      iStack_44 = *piVar4 + iVar3;
      iStack_40 = param_2[0x69] + iStack_38;
      piVar5 = param_2 + 0x69;
      iStack_3c = iVar3;
      iStack_34 = iStack_44;
      iStack_30 = iStack_40;
      iStack_2c = iStack_44;
      iStack_28 = iStack_40;
      iVar2 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 == 0) {
        iStack_34 = iStack_2c;
        iStack_30 = param_2[0x69];
        iStack_38 = iStack_2c - *piVar4;
        iVar2 = iStack_38;
        if (iStack_38 < 0) {
          iVar2 = -iStack_38;
        }
        if ((iVar2 < 0x401) ||
           (iVar2 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2),
           iVar2 == 0)) {
          iStack_34 = *piVar4;
          iStack_30 = iStack_28;
          iStack_38 = iStack_28 - param_2[0x69];
          iVar2 = iStack_38;
          if (iStack_38 < 0) {
            iVar2 = -iStack_38;
          }
          if ((0x400 < iVar2) &&
             (iVar2 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2),
             iVar2 != 0)) {
            *piVar4 = iStack_34;
            *piVar5 = iStack_30;
          }
        }
        else {
          *piVar4 = iStack_34;
          *piVar5 = iStack_30;
        }
      }
      else {
        *piVar4 = iStack_2c;
        *piVar5 = iStack_28;
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      iVar2 = 0;
    }
  }
  return iVar2;
}


/* sub_0802B590 @ 0x0802B590 */

undefined4 * sub_0802B590(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BC68;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0802B5B0 @ 0x0802B5B0 */

undefined4 * sub_0802B5B0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804C608;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_0802B5D4 @ 0x0802B5D4 */

void sub_0802B5D4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x14,0,param_4,param_4);
  return;
}


/* sub_0802B5EA @ 0x0802B5EA */

void sub_0802B5EA(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  int local_10;
  
  uVar3 = *(ushort *)((int)param_2 + 0x12) + 1;
  uVar4 = uVar3 & 0xffff;
  *(short *)((int)param_2 + 0x12) = (short)uVar3;
  if (uVar4 < 0x10) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar4 >> 3);
    if ((*(short *)((int)param_2 + 0x12) == 8) &&
       (iVar1 = sub_080116FC(&DAT_03001c4c), 0x7f < iVar1)) {
      local_14 = (param_2[0x68] >> 8) + *(int *)(&DAT_08752e7c + (uint)*(byte *)(param_2 + 4) * 8);
      local_10 = (param_2[0x69] >> 8) + *(int *)(&DAT_08752e80 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar2 = sub_0802A2EC(0,&local_14,(char)param_2[4],param_2);
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
  }
  else if ((0x40 < uVar4) &&
          (*(undefined1 *)((int)param_2 + 0x11) = 2, 0x47 < *(ushort *)((int)param_2 + 0x12))) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802B684 @ 0x0802B684 */

void sub_0802B684(undefined4 param_1,int param_2)

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
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_0300305c);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_0802B6D2 @ 0x0802B6D2 */

bool sub_0802B6D2(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_0300305c;
}


/* sub_0802B6E4 @ 0x0802B6E4 */

undefined4 * sub_0802B6E4(void)

{
  return &DAT_03003058;
}


/* sub_0802B700 @ 0x0802B700 */

undefined4 * sub_0802B700(void)

{
  return &DAT_03003064;
}


/* sub_0802B708 @ 0x0802B708 */

undefined4 sub_0802B708(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int local_14;
  
  iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar2 == 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  iVar2 = sub_0803FADE(*(undefined4 *)(param_1 + 8));
  if (iVar2 != 0) {
    uVar1 = sub_0803FACC(4);
    *(undefined1 *)(param_2 + 4) = uVar1;
  }
  iVar3 = *(int *)(param_1 + 4) * *(int *)(&DAT_08752eb8 + (uint)*(byte *)(param_2 + 4) * 8) >> 8;
  iVar7 = *(int *)(param_1 + 4) * *(int *)(&gUnknown_08752EB4 + (uint)*(byte *)(param_2 + 4) * 8) >>
          8;
  iVar4 = param_2[0x68] + iVar7;
  iVar6 = param_2[0x69] + iVar3;
  iVar2 = iVar4;
  iVar8 = iVar6;
  local_18 = iVar4;
  local_14 = iVar6;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2,param_4,iVar4,iVar6,iVar7,iVar3,iVar4
                ,iVar6);
  iVar5 = __call_via_r2(param_2,&local_18,*(int *)(*param_2 + 0x54) + *param_2);
  if (iVar5 == 0) {
    uVar1 = sub_0803FACC(4);
    *(undefined1 *)(param_2 + 4) = uVar1;
  }
  else {
    param_2[0x68] = local_18;
    param_2[0x69] = local_14;
  }
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2,param_4,iVar4,iVar6,iVar7,iVar3,iVar2
                ,iVar8);
  return 0;
}


/* sub_0802B7C6 @ 0x0802B7C6 */

void sub_0802B7C6(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049A6C;
    puVar1[1] = uVar3;
    puVar1[2] = uVar2;
  }
  return;
}


/* sub_0802B7E8 @ 0x0802B7E8 */

void sub_0802B7E8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,3,0,param_4,param_4);
  return;
}


/* sub_0802B7FE @ 0x0802B7FE */

void sub_0802B7FE(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  undefined1 auStack_14 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 4);
    if (*(short *)((int)param_2 + 0x12) == 0x10) {
      sub_0800FF44(auStack_14,param_2);
      sub_08019858(auStack_14,param_2,1);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_0802B844 @ 0x0802B844 */

void sub_0802B844(undefined4 param_1,int param_2)

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
  sub_0800ED18(param_2,&DAT_03003068);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_0802B88A @ 0x0802B88A */

bool sub_0802B88A(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003068;
}


/* sub_0802B89C @ 0x0802B89C */

undefined4 * sub_0802B89C(void)

{
  return &DAT_0300306c;
}


/* sub_0802B8B4 @ 0x0802B8B4 */

undefined4 * sub_0802B8B4(void)

{
  return &DAT_03003070;
}


/* sub_0802B8BC @ 0x0802B8BC */

int sub_0802B8BC(byte *param_1,byte *param_2)

{
  return ((uint)*param_2 - (uint)*param_1) * ((uint)*param_2 - (uint)*param_1) +
         ((uint)param_2[1] - (uint)param_1[1]) * ((uint)param_2[1] - (uint)param_1[1]) +
         ((uint)param_2[2] - (uint)param_1[2]) * ((uint)param_2[2] - (uint)param_1[2]) +
         ((uint)param_2[3] - (uint)param_1[3]) * ((uint)param_2[3] - (uint)param_1[3]);
}


/* sub_0802B8F0 @ 0x0802B8F0 */

void sub_0802B8F0(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    uVar1 = 0;
    param_1[1] = 0;
    *param_1 = &_0804D4A8;
    param_1[2] = 0;
    uVar2 = 0xffffffff;
    do {
      iVar3 = uVar1 * 8;
      uVar4 = ((uint)(byte)(&gUnknown_08752EEC)[iVar3] - (uint)*param_2) *
              ((uint)(byte)(&gUnknown_08752EEC)[iVar3] - (uint)*param_2) +
              ((uint)(byte)(&DAT_08752eed)[iVar3] - (uint)param_2[1]) *
              ((uint)(byte)(&DAT_08752eed)[iVar3] - (uint)param_2[1]) +
              ((uint)(byte)(&DAT_08752eee)[iVar3] - (uint)param_2[2]) *
              ((uint)(byte)(&DAT_08752eee)[iVar3] - (uint)param_2[2]) +
              ((uint)(byte)(&DAT_08752eef)[iVar3] - (uint)param_2[3]) *
              ((uint)(byte)(&DAT_08752eef)[iVar3] - (uint)param_2[3]);
      if (uVar4 < uVar2) {
        param_1[2] = (&DAT_08752ef0)[uVar1 * 2];
        uVar2 = uVar4;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x14);
  }
  return;
}


/* sub_0802B960 @ 0x0802B960 */

void sub_0802B960(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_2 + 4) + 0x38) != *(int *)(param_1 + 8)) {
    sub_0800EECC();
  }
  return;
}


/* sub_0802B97C @ 0x0802B97C */

void sub_0802B97C(int param_1,int param_2)

{
  *(undefined1 *)(*(int *)(param_2 + 4) + 8) = *(undefined1 *)(param_1 + 8);
  return;
}


/* sub_0802B984 @ 0x0802B984 */

void sub_0802B984(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + 0x10) = 0xff;
  } while (iVar1 < 5);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),0x8753008,0x400);
  return;
}


/* sub_0802B9A8 @ 0x0802B9A8 */

undefined4 * sub_0802B9A8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0xa0), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0x700;
  iVar1 = sub_0801124C(&DAT_03001c4c,0x700);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0x700);
    iVar1 = sub_0801124C(&DAT_03001c4c,0x700);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804B400;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 2) = 0x10;
  param_1[1] = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined1 *)((int)param_1 + iVar1 + 0x10) = 0xff;
    iVar1 = iVar2;
  } while (iVar2 < 5);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),0x8753008,0x400);
  return param_1;
}


/* sub_0802BA18 @ 0x0802BA18 */

void sub_0802BA18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_34 [8];
  
  local_34[0] = 0x7fffffff;
  local_34[1] = 0x7fffffff;
  local_34[2] = 0x7fffffff;
  local_34[3] = 0x7fffffff;
  iVar4 = 0;
  iVar5 = 0x7fffffff;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      iVar1 = iVar4 * 8 + param_1 + 0x1c;
      iVar3 = *(int *)(iVar1 + 4) - (DAT_030019a4 >> 10);
      iVar1 = *(int *)(iVar1 + 8) - (DAT_030019a8 >> 10);
      iVar2 = iVar3 * iVar3 + iVar1 * iVar1;
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      local_34[3] = iVar3 * DAT_030019e8 + iVar1 * DAT_030019f0 >> 10;
      local_34[0] = DAT_030019ec * iVar3 + iVar1 * DAT_030019f4 >> 10;
      iVar1 = local_34[3];
      if (local_34[3] < 0) {
        iVar1 = -local_34[3];
      }
      iVar2 = local_34[0];
      if (local_34[0] < 0) {
        iVar2 = -local_34[0];
      }
      if (iVar2 < iVar1) {
        if (local_34[3] < 1) {
          if (local_34[3] < 0) {
            local_34[2] = -local_34[3];
          }
          else {
            local_34[3] = 0;
            local_34[2] = 0;
          }
        }
        else {
        }
      }
      else if (local_34[0] < 1) {
        if (local_34[0] < 0) {
          local_34[1] = -local_34[0];
        }
        else {
          local_34[1] = 0;
          local_34[0] = 0;
        }
      }
      else {
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x1c));
  }
  iVar4 = 0;
  do {
    if (local_34[iVar4] < 100) {
      *(undefined1 *)(param_1 + iVar4 + 0x15) = 0;
    }
    else if (local_34[iVar4] < 400) {
      *(undefined1 *)(param_1 + iVar4 + 0x15) = 1;
    }
    else {
      *(undefined1 *)(param_1 + iVar4 + 0x15) = 2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  if (iVar5 < 0x271) {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  else if (iVar5 < 0xf424) {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x19) = 2;
  }
  return;
}


/* sub_0802BB40 @ 0x0802BB40 */

undefined4 sub_0802BB40(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  iVar9 = 0;
  puVar3 = (uint *)*param_2;
  do {
    puVar8 = puVar3;
    iVar4 = iVar9 * 0x14;
    iVar2 = iVar9 * 5;
    iVar5 = param_1 + iVar9;
    bVar1 = *(byte *)(iVar5 + 0x15);
    if ((uint)bVar1 != (uint)*(byte *)(iVar5 + 0x10)) {
      *(byte *)(iVar5 + 0x10) = bVar1;
      sub_08049138((int)(&DAT_06010000 +
                        (&DAT_08752fa4)[iVar2] + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                   (&DAT_08752fac)[iVar9 * 5] * (uint)bVar1 + (&DAT_08752fa8)[iVar9 * 5],
                   (&DAT_08752fac)[iVar9 * 5]);
    }
    uVar6 = (&DAT_08752fb4)[iVar9 * 5];
    *puVar8 = uVar6;
    iVar9 = iVar9 + 1;
    uVar7 = ((byte)(&DAT_08752fb0)[iVar4] + 8) * 0x10000;
    *puVar8 = uVar6 & 0xfe00ffff | uVar7;
    *puVar8 = uVar6 & 0xfe00ff00 | uVar7 | (byte)(&DAT_08752fb1)[iVar4] + 8 & 0xff;
    uVar6 = (puVar8[1] & 0xfffff3ff) + 0x400;
    puVar8[1] = uVar6;
    puVar8[1] = uVar6 & 0xfffffc00 |
                (uint)*(ushort *)(param_1 + 0xc) + ((int)(&DAT_08752fa4)[iVar2] >> 5) & 0x3ff;
    puVar3 = puVar8 + 2;
  } while (iVar9 < 5);
  puVar8[2] = 0x80082008;
  uVar6 = (puVar8[3] & 0xfffff3ff) + 0x400;
  puVar8[3] = uVar6;
  puVar8[3] = uVar6 & 0xfffffc00 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  *param_2 = puVar8 + 4;
  return 0;
}


/* sub_0802BC20 @ 0x0802BC20 */

undefined4 sub_0802BC20(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0xb) {
    iVar3 = 0;
    do {
      iVar4 = param_1 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar4 + 0x10) = 0xff;
    } while (iVar3 < 5);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),0x8753008,0x400);
    uVar2 = 0;
  }
  else if (param_2 == 0x1b) {
    piVar1 = (int *)(param_1 + 0x1c);
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
    iVar4 = param_3[1];
    piVar1[iVar3 * 2 + 1] = *param_3;
    piVar1[iVar3 * 2 + 2] = iVar4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0802BC70 @ 0x0802BC70 */

void sub_0802BC70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined4 in_cr6;
  undefined1 auStack_30 [28];
  
  iVar4 = 0;
  puVar7 = auStack_30;
  sub_0803E378(&DAT_03003e5c,&DAT_083194c4,0x40);
  iVar5 = *(int *)(param_2 + 4);
  iVar3 = **(int **)(iVar5 + 0x14);
  iVar3 = __call_via_r1(*(int **)(iVar5 + 0x14),*(int *)(iVar3 + 0x14) + iVar3);
  *(int *)(param_1 + 0x10) = iVar3;
  uVar8 = iVar3 == 0;
  if (!(bool)uVar8) {
    uVar8 = iVar5 == 0;
    iVar3 = sub_0800F53C();
  }
  iVar1 = iVar3;
  if (!(bool)uVar8) {
    iVar1 = iVar3 + -0x84;
    coprocessor_store(8,in_cr6,iVar3);
    puVar7 = *(undefined1 **)(iVar4 + -4);
  }
  __call_via_r3(iVar1,0xd,1);
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 < 0) {
    puVar6 = &UNK_086f82f0 + iVar3 * -0x2c;
  }
  else {
    puVar6 = &DAT_083bd304 + iVar3 * 0x34;
  }
  sub_0800FE34(puVar7 + 0xc,iVar5);
  *(int *)(puVar7 + 4) = *(int *)(puVar7 + 0xc) + *(int *)(puVar7 + 0x14) >> 1;
  *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + 0x10);
  uVar2 = sub_0802BD4C(0,puVar6,puVar7 + 4);
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}


/* sub_0802BD04 @ 0x0802BD04 */

undefined4 sub_0802BD04(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar3;
  if (iVar3 < 0x3c) {
    uVar1 = 0;
  }
  else {
    piVar2 = *(int **)(param_2 + 4);
    if (*(int *)(param_1 + 0x10) == 0) {
      __call_via_r2(piVar2,0,*(int *)(*piVar2 + 0x28) + *piVar2,param_4,param_4);
    }
    else {
      sub_0800F558(piVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0802BD4C @ 0x0802BD4C */

undefined4 * sub_0802BD4C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_18 [8];
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    sub_0800DA26(auStack_18,param_2,param_3);
    sub_0800D960(param_1,param_2,auStack_18);
    *param_1 = &_0804B358;
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 2) = 0x28;
  }
  return param_1;
}


/* sub_0802BD90 @ 0x0802BD90 */

undefined4 sub_0802BD90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x30) + 1;
  *(uint *)(param_1 + 0x30) = uVar2;
  if ((int)uVar2 < 0x3d) {
    if ((~uVar2 & 0xf) == 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    uVar1 = sub_0800DA3E();
  }
  else {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0802BDCC @ 0x0802BDCC */

void sub_0802BDCC(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) << 10;
  if (DAT_03001a34 != 0) {
    *(int *)(*(int *)(param_2 + 4) + 0x1ac) = iVar1;
    return;
  }
  *(int *)(*(int *)(param_2 + 4) + 0x180) = iVar1;
  return;
}


/* sub_0802BDF4 @ 0x0802BDF4 */

void sub_0802BDF4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_2 + 4);
  piVar3 = (int *)(iVar2 + 0x24);
  iVar1 = *(int *)(iVar2 + 0x30);
  iVar5 = *(int *)(iVar2 + 0x28);
  *(int *)(param_1 + 0x10) = *(int *)(iVar2 + 0x2c) - *piVar3;
  *(int *)(param_1 + 0x14) = iVar1 - iVar5;
  iVar1 = *piVar3;
  iVar5 = *(int *)(iVar2 + 0x28);
  iVar4 = *piVar3;
  *(int *)(param_1 + 0x24) = *(int *)(iVar2 + 0x28) << 8;
  *(int *)(param_1 + 0x20) = iVar4 << 8;
  *(undefined4 *)(param_1 + 0x28) = 0x2c;
  *(int *)(param_1 + 0x18) = (*(int *)(param_1 + 8) - iVar1) * 0x5d3 >> 8;
  *(int *)(param_1 + 0x1c) = ((*(int *)(param_1 + 0xc) - iVar5) * 0x5d3 + -0xba60 >> 8) + -0x200;
  return;
}


/* sub_0802BE5A @ 0x0802BE5A */

void sub_0802BE5A(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) + 0x20;
  *(int *)(param_1 + 0x1c) = iVar1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar1;
  iVar1 = *(int *)(param_1 + 0x28) + -1;
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 8) << 8;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0xc) << 8;
  }
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(iVar1 + 0x24) = *(int *)(param_1 + 0x20) >> 8;
  *(int *)(iVar1 + 0x28) = iVar2 >> 8;
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x28) + *(int *)(param_1 + 0x14);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x24) + iVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x18);
  return;
}


