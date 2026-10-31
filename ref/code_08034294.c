/* Ghidra reference decompilation of code_08034294 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08034294 @ 0x08034294 */

void sub_08034294(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0804BCA8;
  iVar1 = *(int *)param_1[1];
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1((int *)param_1[1],iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_080342A8 @ 0x080342A8 */

void sub_080342A8(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* sub_080342AE @ 0x080342AE */

undefined4 sub_080342AE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x14) + *param_1,param_4,param_4);
  if (iVar1 == 0) {
    if (param_1[2] != 0) {
      param_1[2] = 0;
      iVar1 = *(int *)param_1[1];
      __call_via_r2((int *)param_1[1],param_2,*(int *)(iVar1 + 8) + iVar1);
    }
    uVar2 = 0;
  }
  else {
    if (param_1[2] == 0) {
      param_1[2] = 1;
      piVar3 = *(int **)param_1[1];
      __call_via_r2((int *)param_1[1],param_2,*piVar3 + (int)piVar3);
    }
    iVar1 = *(int *)param_1[1];
    uVar2 = __call_via_r2((int *)param_1[1],param_2,*(int *)(iVar1 + 4) + iVar1);
  }
  return uVar2;
}


/* sub_08034306 @ 0x08034306 */

void sub_08034306(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = **(int **)(param_1 + 4);
    iVar2 = *(int *)(iVar1 + 8);
    __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + iVar1,iVar2,param_4);
  }
  return;
}


/* sub_0803431C @ 0x0803431C */

void sub_0803431C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)(*param_1 + 0x10) + *param_1,param_4,param_4);
  }
  return;
}


/* sub_08034334 @ 0x08034334 */

undefined4 sub_08034334(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_3 + 0x1a8);
  iVar2 = *(int *)(param_1 + 4) * 0x400;
  if ((iVar1 != iVar2 && iVar1 + *(int *)(param_1 + 4) * -0x400 < 0 == SBORROW4(iVar1,iVar2)) &&
     (iVar1 + *(int *)(param_1 + 8) * -0x400 < 0 != SBORROW4(iVar1,*(int *)(param_1 + 8) * 0x400)))
  {
    return 1;
  }
  return 0;
}


/* sub_08034354 @ 0x08034354 */

void sub_08034354(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D84;
    puVar1[1] = 0;
    puVar1[2] = 0x10;
  }
  return;
}


/* sub_0803436E @ 0x0803436E */

void sub_0803436E(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D84;
    puVar1[1] = 0x2c;
    puVar1[2] = 0x4c;
  }
  return;
}


/* sub_08034388 @ 0x08034388 */

void sub_08034388(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D84;
    puVar1[1] = 100;
    puVar1[2] = 200;
  }
  return;
}


/* sub_080343A8 @ 0x080343A8 */

void sub_080343A8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12,param_3,param_4,param_4);
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}


/* sub_080343C6 @ 0x080343C6 */

void sub_080343C6(int param_1,int *param_2)

{
  ushort uVar1;
  int local_64;
  int local_60;
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
  int local_34 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 == 0x24) {
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    sub_0800ECDA(param_2,0x14);
    sub_08046FF4(local_34,&stack0xffffffec,8,0x8050751);
    local_34[7] = 0;
    local_34[6] = 0x2000;
    local_34[1] = 0x2000;
    local_34[0] = 0;
    local_34[2] = 0;
    local_34[5] = 0;
    local_34[3] = 0xffffe000;
    local_34[4] = 0xffffe000;
    local_44 = *(int *)(DAT_03001c34 + 0x1a0) + local_34[*(int *)(param_1 + 4) * 2];
    local_40 = *(int *)(DAT_03001c34 + 0x1a4) + local_34[*(int *)(param_1 + 4) * 2 + 1];
    local_4c = local_44 >> 8;
    local_48 = local_40 >> 8;
    local_3c = local_4c;
    local_38 = local_48;
    sub_0800FDFA(&local_64,param_2);
    local_54 = local_5c - local_64;
    local_50 = local_58 - local_60;
    sub_08009816(&local_4c,&DAT_030019a4,&local_3c,&local_54);
    param_2[0x68] = local_4c << 8;
    param_2[0x69] = local_48 << 8;
  }
  else {
    if (0x47 < uVar1) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    if (0x35 < uVar1) {
      param_2[0x73] = 1;
      goto _080344C0;
    }
  }
  if (*(ushort *)((int)param_2 + 0x12) < 0x24) {
    *(char *)((int)param_2 + 0x11) = (char)(*(ushort *)((int)param_2 + 0x12) >> 2);
    return;
  }
_080344C0:
  *(char *)((int)param_2 + 0x11) = (char)((int)(*(ushort *)((int)param_2 + 0x12) - 0x24) >> 2);
  return;
}


/* sub_080344CA @ 0x080344CA */

void sub_080344CA(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_2 + 0x1a4);
  uVar2 = DAT_03003228 & 3;
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DF9C;
    puVar1[1] = uVar2;
  }
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_08034502 @ 0x08034502 */

undefined4 sub_08034502(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = sub_0800EEB0(param_2,0x11,param_3,param_4,param_4);
  if ((iVar1 == 0) && (iVar1 = sub_0800EEB0(param_2,0x13), iVar1 == 0)) {
    DAT_03003228 = DAT_03003228 + 1;
    if (0xb < (int)DAT_03003228) {
      DAT_03003228 = 0;
    }
    if ((DAT_03003228 & 3) == 0) {
      uVar2 = 1;
    }
    else {
      uVar4 = DAT_03003228 & 3;
      puVar3 = (undefined4 *)sub_0803D5B8(8);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_0804DF9C;
        puVar3[1] = uVar4;
      }
      sub_0800ED18(param_2,puVar3);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0803455C @ 0x0803455C */

undefined4 * sub_0803455C(void)

{
  return &DAT_03003224;
}


/* sub_08034574 @ 0x08034574 */

undefined4 sub_08034574(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if ((DAT_03001b94 == 0) || (*(int *)(DAT_03001b94 + 0x1cc) == 0)) {
    uVar1 = 0;
  }
  else {
    sub_0800FE78(&iStack_18);
    sub_0800FE78(&iStack_28,param_2);
    if ((((iStack_18 + iStack_10 >> 1) - (iStack_28 + iStack_20 >> 1)) + 0x2fU < 0x5f) &&
       (((iStack_14 + iStack_c >> 1) - (iStack_24 + iStack_1c >> 1)) + 0x2fU < 0x5f)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_080345FC @ 0x080345FC */

undefined4 * sub_080345FC(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804CB58;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08034624 @ 0x08034624 */

void sub_08034624(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_08034630 @ 0x08034630 */

void sub_08034630(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_2 + 0x12);
  *(undefined1 *)(param_2 + 0x11) = 0;
  if (0x7f < uVar2) {
    uVar1 = uVar2 - 0x80 & 0xffff;
    *(short *)(param_2 + 0x176) =
         (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xd);
    if (uVar1 < 0x40) {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x11) = 2;
    }
  }
  *(short *)(param_2 + 0x12) = (short)(uVar2 + 8);
  if (0xff < (uVar2 + 8 & 0xffff)) {
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  return;
}


/* sub_0803467A @ 0x0803467A */

void sub_0803467A(undefined4 param_1,int param_2)

{
  undefined1 auStack_3c [16];
  int local_2c;
  int local_28;
  undefined1 auStack_24 [16];
  int local_14;
  int local_10;
  
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_0300322c);
  if (DAT_03001c34 != 0) {
    sub_0800FDFA(auStack_3c);
    sub_0804F900(&local_2c,auStack_3c);
    sub_0800FDFA(auStack_24,param_2);
    sub_0804F900(&local_14,auStack_24);
    local_28 = local_28 - local_10;
    if (local_2c - local_14 < 1) {
      if (local_2c - local_14 < 0) {
        if (local_28 < 1) {
          if (local_28 < 0) {
            *(undefined1 *)(param_2 + 0x10) = 1;
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 2;
        }
      }
    }
    else if (local_28 < 1) {
      if (local_28 < 0) {
        *(undefined1 *)(param_2 + 0x10) = 3;
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
  }
  return;
}


/* sub_080346FC @ 0x080346FC */

undefined4 sub_080346FC(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = DAT_03001c34;
  if (DAT_03001c34 != 0) {
    if ((*(short *)((int)param_2 + 0x12) == 0) && (iVar1 = sub_0803FADE(0x4000), iVar1 != 0)) {
      sub_0800FDFA(auStack_40,iVar2);
      sub_0804F900(&iStack_30,auStack_40);
      sub_0800FDFA(&iStack_28,param_2);
      sub_0804F900(&iStack_18,&iStack_28);
      iStack_2c = iStack_2c - iStack_14;
      if (iStack_30 - iStack_18 < 1) {
        if (iStack_30 - iStack_18 < 0) {
          if (iStack_2c < 1) {
            if (iStack_2c < 0) {
              *(undefined1 *)(param_2 + 4) = 1;
            }
          }
          else {
            *(undefined1 *)(param_2 + 4) = 2;
          }
        }
      }
      else if (iStack_2c < 1) {
        if (iStack_2c < 0) {
          *(undefined1 *)(param_2 + 4) = 3;
        }
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
      }
    }
    if (0x80 < *(ushort *)((int)param_2 + 0x12)) {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_24 = (*(int *)(&UNK_087593fc + (uint)*(byte *)(param_2 + 4) * 8) << 7) >> 8;
      iStack_28 = (*(int *)(&gUnknown_087593F8 + (uint)*(byte *)(param_2 + 4) * 8) << 7) >> 8;
      iStack_30 = param_2[0x68] + iStack_28;
      iStack_2c = param_2[0x69] + iStack_24;
      iStack_20 = iStack_30;
      iStack_1c = iStack_2c;
      iStack_18 = iStack_30;
      iStack_14 = iStack_2c;
      iVar2 = __call_via_r2(param_2,&iStack_18,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      }
      else {
        param_2[0x68] = iStack_18;
        param_2[0x69] = iStack_14;
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      }
    }
  }
  return 0;
}


/* sub_08034816 @ 0x08034816 */

undefined4 * sub_08034816(void)

{
  return &DAT_03003230;
}


/* sub_0803481C @ 0x0803481C */

undefined4 sub_0803481C(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_5c [16];
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
  int local_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  
  local_24 = 0x80;
  if (DAT_03001c34 == 0) {
    uVar1 = 1;
  }
  else {
    piVar5 = (int *)(param_1 + 4);
    piVar4 = (int *)(param_1 + 8);
    iStack_1c = param_1;
    piStack_18 = param_2;
    if (*(short *)((int)param_2 + 0x12) == 0) {
      sub_0800FDFA(auStack_5c);
      sub_0804F900(&iStack_4c,auStack_5c);
      sub_0800FDFA(&iStack_44,param_2);
      sub_0804F900(&iStack_34,&iStack_44);
      iStack_2c = iStack_4c - iStack_34;
      iStack_28 = iStack_48 - iStack_30;
      iStack_34 = iStack_2c;
      if (iStack_2c < 0) {
        iStack_34 = -iStack_2c;
      }
      iStack_30 = iStack_28;
      if (iStack_28 < 0) {
        iStack_30 = -iStack_28;
      }
      if (iStack_30 < iStack_34) {
        uVar3 = 2;
        if (iStack_2c < 1) {
          uVar3 = 3;
        }
        *(undefined1 *)(param_2 + 4) = uVar3;
        iStack_20 = iStack_34;
      }
      else {
        *(bool *)(param_2 + 4) = 0 < iStack_28;
        iStack_20 = iStack_30;
      }
      if (iStack_20 == 0) {
        iStack_20 = 1;
      }
      *piVar5 = iStack_2c * 0x100;
      *piVar4 = iStack_28 * 0x100;
      iStack_40 = local_24 * *piVar4 >> 8;
      iStack_44 = local_24 * *piVar5 >> 8;
      iStack_20 = iStack_20 << 8;
      iStack_3c = iStack_44;
      iStack_38 = iStack_40;
      iStack_48 = __16__rt_sdiv(iStack_20,iStack_44 << 8);
      iStack_40 = __16__rt_sdiv(iStack_20,iStack_38 << 8);
      iStack_44 = iStack_48;
      *piVar5 = iStack_48;
      *piVar4 = iStack_40;
    }
    if (0x80 < *(ushort *)((int)param_2 + 0x12)) {
      piVar7 = param_2 + 0x68;
      piVar6 = param_2 + 0x69;
      iStack_3c = *piVar7 - *piVar5;
      iStack_38 = param_2[0x69] - *piVar4;
      iStack_34 = iStack_3c;
      iStack_30 = iStack_38;
      iStack_2c = iStack_3c;
      iStack_28 = iStack_38;
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iVar2 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 == 0) {
        if (*(int *)(iStack_1c + 4) < 0) {
          iStack_38 = -local_24;
          piVar4 = &iStack_38;
        }
        else {
          piVar4 = &local_24;
        }
        iStack_34 = *piVar7 - *piVar4;
        iStack_30 = param_2[0x69];
        iVar2 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar2 == 0) {
          iStack_34 = *piVar7;
          if (*(int *)(iStack_1c + 8) < 0) {
            iStack_38 = -local_24;
            piVar4 = &iStack_38;
          }
          else {
            piVar4 = &local_24;
          }
          iStack_30 = param_2[0x69] - *piVar4;
          iVar2 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2);
          if (iVar2 == 0) {
            __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
            return 0;
          }
          *piVar7 = iStack_34;
          *piVar6 = iStack_30;
        }
        else {
          *piVar7 = iStack_34;
          *piVar6 = iStack_30;
        }
      }
      else {
        *piVar7 = iStack_2c;
        *piVar6 = iStack_28;
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08034A0A @ 0x08034A0A */

void sub_08034A0A(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C184;
  }
  return;
}


/* sub_08034A20 @ 0x08034A20 */

void sub_08034A20(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_0800EEB0(param_2,0x13);
  if (iVar1 == 0) {
    sub_0800ECDA(param_2,0x14);
    *(undefined2 *)(param_2 + 0x12) = 0x47;
    *(undefined1 *)(param_2 + 0x11) = 8;
  }
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}


/* sub_08034A4A @ 0x08034A4A */

void sub_08034A4A(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  if (*(short *)((int)param_2 + 0x12) != 0) {
    *(short *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + -1;
  }
  if (*(short *)((int)param_2 + 0x12) == 0x23) {
    sub_0800ECDA(param_2,0x12);
    param_2[0x68] = param_2[0x82];
    param_2[0x69] = param_2[0x83];
  }
  else if (*(short *)((int)param_2 + 0x12) == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    return;
  }
  uVar1 = *(ushort *)((int)param_2 + 0x12);
  if (uVar1 < 0x24) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 2);
    return;
  }
  *(char *)((int)param_2 + 0x11) = (char)((int)(uVar1 - 0x24) >> 2);
  return;
}


/* sub_08034AA4 @ 0x08034AA4 */

undefined4 * sub_08034AA4(void)

{
  return &DAT_03003238;
}


/* sub_08034AAC @ 0x08034AAC */

void sub_08034AAC(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_08034AB8 @ 0x08034AB8 */

void sub_08034AB8(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  int iStack_10;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x28) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
    if ((uVar1 == 0x18) && (iVar2 = sub_080116FC(&DAT_03001c4c), 0x7ff < iVar2)) {
      iStack_14 = (param_2[0x68] >> 8) + *(int *)(&DAT_08759440 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_10 = (param_2[0x69] >> 8) + *(int *)(&DAT_08759444 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_080359D4(0,&iStack_14,(char)param_2[4],param_2);
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08034B46 @ 0x08034B46 */

void sub_08034B46(undefined4 param_1,int param_2)

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
  sub_0800ED18(param_2,&DAT_0300323c);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_08034B94 @ 0x08034B94 */

bool sub_08034B94(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_0300323c;
}


/* sub_08034BA6 @ 0x08034BA6 */

undefined4 * sub_08034BA6(void)

{
  return &DAT_03003240;
}


/* sub_08034BC0 @ 0x08034BC0 */

void sub_08034BC0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12,param_3,param_4,param_4);
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}


/* sub_08034BDE @ 0x08034BDE */

void sub_08034BDE(int param_1,int *param_2)

{
  ushort uVar1;
  int local_64;
  int local_60;
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
  int local_34 [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 == 0x24) {
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    sub_0800ECDA(param_2,0x14);
    sub_08046FF4(local_34,&stack0xffffffec,8,0x8050751);
    local_34[7] = 0;
    local_34[6] = 0x2000;
    local_34[1] = 0x2000;
    local_34[0] = 0;
    local_34[2] = 0;
    local_34[5] = 0;
    local_34[3] = 0xffffe000;
    local_34[4] = 0xffffe000;
    local_44 = *(int *)(DAT_03001c34 + 0x1a0) + local_34[*(int *)(param_1 + 4) * 2];
    local_40 = *(int *)(DAT_03001c34 + 0x1a4) + local_34[*(int *)(param_1 + 4) * 2 + 1];
    local_4c = local_44 >> 8;
    local_48 = local_40 >> 8;
    local_3c = local_4c;
    local_38 = local_48;
    sub_0800FDFA(&local_64,param_2);
    local_54 = local_5c - local_64;
    local_50 = local_58 - local_60;
    sub_08009816(&local_4c,&DAT_030019a4,&local_3c,&local_54);
    param_2[0x68] = local_4c << 8;
    param_2[0x69] = local_48 << 8;
  }
  else {
    if (uVar1 == 0x48) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    if (0x35 < uVar1) {
      param_2[0x73] = 1;
      goto _08034CD8;
    }
  }
  if (*(ushort *)((int)param_2 + 0x12) < 0x24) {
    *(char *)((int)param_2 + 0x11) = (char)(*(ushort *)((int)param_2 + 0x12) >> 2);
    return;
  }
_08034CD8:
  *(char *)((int)param_2 + 0x11) = (char)((int)(*(ushort *)((int)param_2 + 0x12) - 0x24) >> 2);
  return;
}


/* sub_08034CE2 @ 0x08034CE2 */

undefined4 * sub_08034CE2(void)

{
  return &DAT_03003244;
}


/* sub_08034CF8 @ 0x08034CF8 */

void sub_08034CF8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800FDFA(&local_40,DAT_03001c34);
  local_2c = local_3c + local_34 >> 1;
  local_30 = local_40 + local_38 >> 1;
  sub_0800FDFA(&local_28,param_2,local_34,param_4,local_30,local_2c);
  local_2c = local_2c - (local_24 + local_1c >> 1);
  if (local_30 - (local_28 + local_20 >> 1) < 1) {
    if (local_2c < 1) {
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
  }
  else if (local_2c < 1) {
    *(undefined1 *)(param_2 + 0x10) = 3;
  }
  else {
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}


/* sub_08034D86 @ 0x08034D86 */

void sub_08034D86(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x12);
  *(undefined1 *)(param_2 + 0x11) = 0;
  if (uVar1 == 0) {
    sub_0800ECDA(param_2,0x12);
  }
  else if (uVar1 == 0xc0) {
    sub_0800ECDA(param_2,0x13);
  }
  if (0x7f < uVar1) {
    uVar1 = uVar1 - 0x80 & 0xffff;
    if (uVar1 < 0x80) {
      *(short *)(param_2 + 0x176) =
           (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xb);
    }
    else {
      *(undefined2 *)(param_2 + 0x176) = 0;
    }
    if (uVar1 < 0x40) {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    else {
      *(byte *)(param_2 + 0x11) = (byte)((uVar1 << 0x1a) >> 0x1f);
    }
  }
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 8;
  return;
}


/* sub_08034DE8 @ 0x08034DE8 */

undefined4 sub_08034DE8(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_44 [4];
  undefined1 auStack_40 [16];
  int local_30;
  int local_2c;
  undefined *local_28;
  int *local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int *local_14;
  
  if (*(ushort *)((int)param_2 + 0x12) == 0x100) {
    local_30 = CONCAT31(local_30._1_3_,(char)param_2[4]);
    local_28 = &gUnknown_086B8088;
    local_2c = 0x400;
    local_24 = param_2;
    sub_0800FE78(auStack_40,param_2);
    local_44[0] = 0;
    local_14 = param_2;
    sub_08011C0C(&DAT_03001c4c,0,local_44);
    uVar1 = 1;
  }
  else {
    if (*(ushort *)((int)param_2 + 0x12) - 0x81 < 0x7f) {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      local_24 = (int *)((*(int *)(&DAT_08759484 + (uint)*(byte *)(param_2 + 4) * 8) << 7) >> 8);
      local_28 = (undefined *)
                 ((*(int *)(&DAT_08759480 + (uint)*(byte *)(param_2 + 4) * 8) << 7) >> 8);
      local_30 = param_2[0x68] + (int)local_28;
      local_2c = param_2[0x69] + (int)local_24;
      iStack_20 = local_30;
      iStack_1c = local_2c;
      iStack_18 = local_30;
      local_14 = (int *)local_2c;
      iVar2 = __call_via_r2(param_2,&iStack_18,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      }
      else {
        param_2[0x68] = iStack_18;
        param_2[0x69] = (int)local_14;
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08034EC0 @ 0x08034EC0 */

undefined4 * sub_08034EC0(void)

{
  return &DAT_0300324c;
}


/* sub_08034ED8 @ 0x08034ED8 */

undefined4 sub_08034ED8(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
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
  
  if (DAT_03001b94 == 0) {
    uVar2 = 0;
  }
  else {
    sub_0800FDFA(&iStack_4c);
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
      iVar4 = iStack_24;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_18 < 1;
      iVar4 = iStack_20;
    }
    if (iVar4 < 8) {
      uVar2 = 0;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_24 = iStack_1c * 0x100;
      iStack_20 = iStack_18 * 0x100;
      iStack_48 = *(int *)(param_1 + 4) * iStack_20 >> 8;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      iStack_44 = iStack_4c;
      iStack_40 = iStack_48;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_4c << 8);
      iStack_38 = __16__rt_sdiv(iVar4 * 0x100,iStack_40 << 8);
      iStack_4c = param_2[0x68] + iVar3;
      iStack_48 = param_2[0x69] + iStack_38;
      iStack_3c = iVar3;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      iStack_2c = iStack_4c;
      iStack_28 = iStack_48;
      iVar4 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar4 == 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
        uVar2 = 1;
      }
      else {
        param_2[0x68] = iStack_2c;
        param_2[0x69] = iStack_28;
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* sub_08035050 @ 0x08035050 */

undefined4 * sub_08035050(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B6A8;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_08035070 @ 0x08035070 */

void sub_08035070(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0803507C @ 0x0803507C */

void sub_0803507C(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_18;
  int iStack_14;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 8) {
    *(undefined1 *)((int)param_2 + 0x11) = 0;
  }
  else if (uVar1 < 0x10) {
    *(undefined1 *)((int)param_2 + 0x11) = 1;
  }
  else if (uVar1 == 0x10) {
    *(undefined1 *)((int)param_2 + 0x11) = 2;
    iVar2 = sub_080116FC(&DAT_03001c4c);
    if (0xbf < iVar2) {
      iStack_18 = (param_2[0x68] >> 8) + *(int *)(&DAT_087594b0 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_14 = (param_2[0x69] >> 8) + *(int *)(&DAT_087594b4 + (uint)*(byte *)(param_2 + 4) * 8);
      uVar3 = sub_080355EC(0,&iStack_18,(char)param_2[4],param_2,iStack_18);
      *(undefined4 *)(param_1 + 4) = uVar3;
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
  }
  else {
    iVar2 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[iVar2] == *(int *)(param_1 + 4)) {
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_03001c50);
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08035138 @ 0x08035138 */

void sub_08035138(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_03001c50) {
    do {
      if ((&DAT_03001c54)[iVar1] == *(int *)(param_1 + 4)) {
        sub_08011C70(&DAT_03001c4c,0x26,*(int *)(param_1 + 4),&DAT_03001c50,param_4);
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_03001c50);
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0803516E @ 0x0803516E */

void sub_0803516E(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
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
    puVar2 = (undefined4 *)sub_0803D5B8(8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804CD3C;
    }
    sub_0800ECDA(param_2,4);
    sub_0800ED18(param_2,puVar2);
    local_18 = &_08049ACC;
    if (local_14 != (int *)0x0) {
      __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
    }
  }
  return;
}


/* sub_080351EE @ 0x080351EE */

bool sub_080351EE(undefined4 param_1,int param_2)

{
  return *(int *)(*(int *)(param_2 + 0x58) + 100) != *(int *)(param_2 + 0x50);
}


/* sub_08035204 @ 0x08035204 */

undefined4 * sub_08035204(void)

{
  return &DAT_03003250;
}


/* sub_08035220 @ 0x08035220 */

void sub_08035220(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_0803522C @ 0x0803522C */

void sub_0803522C(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_2 + 0x12);
  *(undefined1 *)(param_2 + 0x11) = 0;
  if (0x7f < uVar2) {
    uVar1 = uVar2 - 0x80 & 0xffff;
    *(short *)(param_2 + 0x176) =
         (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xd);
    if (uVar1 < 0x40) {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x11) = 2;
    }
  }
  *(short *)(param_2 + 0x12) = (short)(uVar2 + 8);
  if ((uVar2 + 8 & 0xffff) == 0x100) {
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  return;
}


/* sub_08035274 @ 0x08035274 */

undefined4 sub_08035274(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_54 [16];
  int iStack_44;
  int iStack_40;
  undefined1 auStack_3c [8];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  
  if (DAT_03001c34 == 0) {
    return 0;
  }
  piVar3 = (int *)(param_1 + 4);
  iStack_1c = param_1;
  piStack_18 = param_2;
  if (*(short *)((int)param_2 + 0x12) == 0) {
    sub_0800FDFA(auStack_54);
    sub_0804F900(&iStack_44,auStack_54);
    sub_0800FDFA(auStack_3c,param_2);
    sub_0804F900(&iStack_2c,auStack_3c);
    iStack_24 = iStack_44 - iStack_2c;
    iStack_20 = iStack_40 - iStack_28;
    iStack_2c = iStack_24;
    if (iStack_24 < 0) {
      iStack_2c = -iStack_24;
    }
    iStack_28 = iStack_20;
    if (iStack_20 < 0) {
      iStack_28 = -iStack_20;
    }
    *piVar3 = 0;
    *(int *)(param_1 + 8) = 0;
    if (iStack_28 < iStack_2c) {
      if (iStack_28 < 8) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        uVar1 = 3;
        if (iStack_24 < 1) {
          uVar1 = 2;
        }
        *(undefined1 *)(param_2 + 4) = uVar1;
        return 1;
      }
      if (iStack_20 < 1) {
        *(undefined1 *)(param_2 + 4) = 1;
        *(undefined4 *)(iStack_1c + 8) = 0xfffffe80;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
        *(undefined4 *)(iStack_1c + 8) = 0x180;
      }
    }
    else {
      if (iStack_2c < 8) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        *(bool *)(param_2 + 4) = iStack_20 < 1;
        return 1;
      }
      if (iStack_24 < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        *piVar3 = -0x180;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        *piVar3 = 0x180;
      }
    }
  }
  if (0x80 < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iStack_34 = param_2[0x68] + *piVar3;
    iStack_30 = param_2[0x69] + *(int *)(param_1 + 8);
    iStack_2c = iStack_34;
    iStack_28 = iStack_30;
    iStack_24 = iStack_34;
    iStack_20 = iStack_30;
    iVar2 = __call_via_r2(param_2,&iStack_24,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    }
    else {
      param_2[0x68] = iStack_24;
      param_2[0x69] = iStack_20;
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    }
  }
  return 0;
}


/* sub_080353D0 @ 0x080353D0 */

void sub_080353D0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B210;
  }
  return;
}


/* sub_080353E2 @ 0x080353E2 */

undefined4 sub_080353E2(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_58 [16];
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
  int local_20;
  int iStack_1c;
  int *piStack_18;
  
  local_20 = 0x180;
  if (DAT_03001c34 == 0) {
    uVar1 = 1;
  }
  else {
    piVar5 = (int *)(param_1 + 4);
    piVar7 = (int *)(param_1 + 8);
    iStack_1c = param_1;
    piStack_18 = param_2;
    if (*(short *)((int)param_2 + 0x12) == 0) {
      sub_0800FDFA(auStack_58);
      sub_0804F900(&iStack_48,auStack_58);
      sub_0800FDFA(&iStack_40,param_2);
      sub_0804F900(&iStack_30,&iStack_40);
      iStack_28 = iStack_48 - iStack_30;
      iStack_24 = iStack_44 - iStack_2c;
      iStack_30 = iStack_28;
      if (iStack_28 < 0) {
        iStack_30 = -iStack_28;
      }
      iStack_2c = iStack_24;
      if (iStack_24 < 0) {
        iStack_2c = -iStack_24;
      }
      if (iStack_2c < iStack_30) {
        uVar3 = 2;
        if (iStack_28 < 1) {
          uVar3 = 3;
        }
        *(undefined1 *)(param_2 + 4) = uVar3;
        iVar2 = iStack_30;
      }
      else {
        *(bool *)(param_2 + 4) = 0 < iStack_24;
        iVar2 = iStack_2c;
      }
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      *piVar5 = iStack_28 * 0x100;
      *piVar7 = iStack_24 * 0x100;
      iStack_3c = local_20 * *piVar7 >> 8;
      iStack_40 = local_20 * *piVar5 >> 8;
      iStack_38 = iStack_40;
      iStack_34 = iStack_3c;
      iStack_44 = __16__rt_sdiv(iVar2 * 0x100,iStack_40 << 8,iStack_3c,local_20 * *piVar7,iStack_28,
                                iStack_24);
      iStack_3c = __16__rt_sdiv(iVar2 * 0x100,iStack_34 << 8);
      iStack_40 = iStack_44;
      *piVar5 = iStack_44;
      *piVar7 = iStack_3c;
    }
    piVar4 = param_2 + 0x68;
    piVar6 = param_2 + 0x69;
    iStack_38 = *piVar4 - *piVar5;
    iStack_34 = param_2[0x69] - *piVar7;
    iStack_30 = iStack_38;
    iStack_2c = iStack_34;
    iStack_28 = iStack_38;
    iStack_24 = iStack_34;
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iVar2 = __call_via_r2(param_2,&iStack_28,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      if (*(int *)(iStack_1c + 4) < 0) {
        iStack_34 = -local_20;
        piVar5 = &iStack_34;
      }
      else {
        piVar5 = &local_20;
      }
      iStack_30 = *piVar4 - *piVar5;
      iStack_2c = param_2[0x69];
      iVar2 = __call_via_r2(param_2,&iStack_30,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 == 0) {
        iStack_30 = *piVar4;
        if (*(int *)(iStack_1c + 8) < 0) {
          iStack_34 = -local_20;
          piVar5 = &iStack_34;
        }
        else {
          piVar5 = &local_20;
        }
        iStack_2c = param_2[0x69] - *piVar5;
        iVar2 = __call_via_r2(param_2,&iStack_30,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar2 == 0) {
          __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
          return 0;
        }
        *piVar4 = iStack_30;
        *piVar6 = iStack_2c;
      }
      else {
        *piVar4 = iStack_30;
        *piVar6 = iStack_2c;
      }
    }
    else {
      *piVar4 = iStack_28;
      *piVar6 = iStack_24;
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_080355D4 @ 0x080355D4 */

void sub_080355D4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B730;
  }
  return;
}


/* sub_080355EC @ 0x080355EC */

undefined4 * sub_080355EC(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x44), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x80;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x80);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x80);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x80);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804C098;
    uVar3 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[1] = param_2[1];
    if (param_3 == 0) {
      param_1[1] = param_2[1] + 0x2c;
    }
    param_1[0x10] = param_4;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xd] = 8;
    param_1[6] = 0xffffffff;
    param_1[0xe] = param_3;
    uVar3 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar3;
    iVar2 = param_1[0xe] * 0x18;
    iVar1 = param_1[0xe] * 8;
    param_1[0xf] = &gUnknown_08759620 + iVar2;
    uVar3 = *(undefined4 *)(&DAT_087594f0 + iVar1);
    param_1[0xc] = *(undefined4 *)(&DAT_087594f4 + iVar1);
    param_1[0xb] = uVar3;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                 *(int *)(&DAT_08759628 + iVar2),0x40);
    sub_08049138((uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010040,*(int *)(param_1[0xf] + 0x14),
                 0x40);
  }
  return param_1;
}


/* sub_080356B2 @ 0x080356B2 */

void sub_080356B2(undefined4 *param_1,int param_2)

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


/* sub_080356DC @ 0x080356DC */

void sub_080356DC(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  int iStack_18;
  int iStack_14;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (param_2 != 0) {
      iStack_18 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
      iStack_34 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
      uStack_24 = *(undefined4 *)(param_1 + 0x40);
      uStack_30 = (undefined1)*(undefined4 *)(param_1 + 0x38);
      puStack_28 = &gUnknown_086B8088;
      uStack_2c = 0x400;
      auStack_44[0] = 0;
      iStack_40 = iStack_18 + -8;
      iStack_38 = iStack_18 + 8;
      iStack_3c = iStack_34 + -8;
      iStack_34 = iStack_34 + 8;
      iStack_14 = param_1;
      iVar1 = sub_08009324(&iStack_40,DAT_03001a50);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        iVar1 = sub_08011C0C(&DAT_03001c4c,0,auStack_44);
        if (iVar1 == 0) {
          if (*(int *)(param_1 + 0x34) < 0x34) {
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
          else {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\x01') &&
          (iVar1 = *(int *)(param_1 + 0x34) + -4, *(int *)(param_1 + 0x34) = iVar1, iVar1 < 1)) {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}


/* sub_08035796 @ 0x08035796 */

void sub_08035796(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_080357A6 @ 0x080357A6 */

undefined4 sub_080357A6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030019bc;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20) - DAT_030019c0;
  *(int *)(param_1 + 0x24) = iVar1;
  return 1;
}


/* sub_080357D2 @ 0x080357D2 */

void sub_080357D2(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x3c) + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x24) + (int)*pcVar1 + *param_5;
  uVar2 = *(int *)(param_1 + 0x28) + (int)pcVar1[1] + param_5[1];
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


/* sub_080358A4 @ 0x080358A4 */

undefined4 sub_080358A4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_18 = *param_2;
  local_28 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
  local_24 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
  local_20 = local_28;
  local_1c = local_24;
  sub_080357D2(param_1,1,&local_18,2,&local_20);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x34) + -1) {
    do {
      local_28 = iVar1 * *(int *)(param_1 + 0x2c);
      local_24 = iVar1 * *(int *)(param_1 + 0x30);
      sub_080357D2(param_1,0,&local_18,0,&local_28,local_24);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x34) + -1);
  }
  *param_2 = local_18;
  return 0;
}


/* sub_08035914 @ 0x08035914 */

undefined4 sub_08035914(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if ((int *)param_3[0xc] == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 5) == (param_1[0xe] ^ 1U)) {
      iVar3 = param_1[7] + param_1[0xd] * param_1[0xb];
      iVar2 = param_1[8] + param_1[0xd] * param_1[0xc];
      if ((((param_3[1] < iVar3 + 0xc) && (iVar3 + -0xc < param_3[3])) && (param_3[2] < iVar2 + 0xc)
          ) && (iVar2 + -0xc < param_3[4])) {
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
    uVar1 = 0;
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
    uVar1 = 0;
  }
  else if (param_2 == 0x26) {
    if (param_1 == param_3) {
      sub_08011944(&DAT_03001c4c,param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_080359C2 @ 0x080359C2 */

undefined4 sub_080359C2(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_080359D4 @ 0x080359D4 */

undefined4 * sub_080359D4(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x800,param_4);
    *param_1 = &_0804B9B4;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    param_1[6] = &gUnknown_0875A6A8 + param_3 * 0xc;
    param_1[0x10] = *(undefined4 *)(&gUnknown_08759688 + param_3 * 8);
    param_1[0x11] = *(undefined4 *)(&DAT_0875968c + param_3 * 8);
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_08035A34 @ 0x08035A34 */

void sub_08035A34(int param_1)

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


/* sub_08035A80 @ 0x08035A80 */

void sub_08035A80(int param_1,int param_2)

{
  int iVar1;
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
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  sub_08019B4E(param_1);
  if ((((DAT_030019bc < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x28) < DAT_030019c4)) &&
      (DAT_030019c0 < *(int *)(param_1 + 0x34))) && (*(int *)(param_1 + 0x2c) < DAT_030019c8)) {
    iVar1 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
    if (iVar1 == 0) {
      sub_08035A34(param_1);
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
      iVar1 = sub_08011C70(&DAT_03001c4c,0,auStack_48);
      if (iVar1 != 0) {
        sub_08035A34(param_1);
      }
    }
  }
  else {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}


/* sub_08035B34 @ 0x08035B34 */

undefined4 sub_08035B34(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else {
      if ((((**(char **)(param_3 + 0x1c) == '\x01') &&
           (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
          (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
         ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34) &&
          (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))) {
        sub_08035A34();
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


/* sub_08035B94 @ 0x08035B94 */

void sub_08035B94(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = 0;
  puVar2 = param_4;
  if (iVar3 != 0) {
    puVar2 = &DAT_03001c50;
    param_3 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[param_3] == iVar3) {
          iVar1 = iVar3 + 0x214;
          break;
        }
        param_3 = param_3 + 1;
      } while (param_3 < DAT_03001c50);
    }
  }
  sub_08012588(*(undefined4 *)(param_1 + 8),iVar1,param_3,puVar2,param_4);
  return;
}


/* sub_08035BD0 @ 0x08035BD0 */

undefined4 * sub_08035BD0(void)

{
  return &DAT_03003258;
}


/* sub_08035BD8 @ 0x08035BD8 */

void sub_08035BD8(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_08035BE4 @ 0x08035BE4 */

void sub_08035BE4(undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  cVar7 = '\0';
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar2 < 8) {
    cVar7 = (char)(uVar1 >> 2);
  }
  else if (uVar2 < 0x38) {
    cVar7 = (byte)((uVar2 + 8) * 0x10000000 >> 0x1e) + 2;
    *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + -8;
  }
  else if (uVar2 < 200) {
    sub_0800FDFA(&iStack_2c,param_2);
    iStack_34 = iStack_2c + iStack_24 >> 1;
    iStack_30 = iStack_28 + iStack_20 >> 1;
    iStack_1c = iStack_34;
    iStack_18 = iStack_30;
    sub_0800FDFA(&iStack_34,DAT_03001c34);
    iVar3 = iStack_30 + iStack_28 >> 1;
    iVar6 = iStack_34 + iStack_2c >> 1;
    piVar4 = (int *)(param_2 + 0x1a0);
    if (iStack_1c < iVar6) {
      *piVar4 = *piVar4 + 0x100;
    }
    else if (iVar6 < iStack_1c) {
      *piVar4 = *piVar4 + -0x100;
    }
    piVar4 = (int *)(param_2 + 0x1a4);
    if (iStack_18 < iVar3) {
      *piVar4 = *piVar4 + 0x100;
    }
    else if (iVar3 < iStack_18) {
      *piVar4 = *piVar4 + -0x100;
    }
  }
  else if (uVar2 < 0xf8) {
    cVar7 = (byte)((uVar2 << 0x1c) >> 0x1e) + 2;
    *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + 8;
  }
  else {
    sub_0800FDFA(&iStack_2c,param_2);
    iStack_34 = iStack_2c + iStack_24 >> 1;
    iStack_30 = iStack_28 + iStack_20 >> 1;
    iStack_1c = iStack_34;
    iStack_18 = iStack_30;
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar3) {
      iVar3 = sub_0803FACC(0x1000);
      iStack_2c = iStack_1c + 0xf;
      iStack_28 = iStack_18 + 5;
      iStack_24 = iStack_2c;
      iStack_20 = iStack_28;
      uVar5 = sub_0802A81C(0,&iStack_24,&gUnknown_086FD9D0,4,iVar3 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar5);
    }
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar3) {
      iVar3 = sub_0803FACC(0x1000);
      iStack_2c = iStack_1c + -0xc;
      iStack_28 = iStack_18 + 10;
      iStack_24 = iStack_2c;
      iStack_20 = iStack_28;
      uVar5 = sub_0802A81C(0,&iStack_24,&gUnknown_086FD9D0,4,iVar3 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar5);
    }
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar3) {
      iVar3 = sub_0803FACC(0x1000);
      iStack_2c = iStack_1c + -3;
      iStack_28 = iStack_18 + -0xf;
      iStack_24 = iStack_2c;
      iStack_20 = iStack_28;
      uVar5 = sub_0802A81C(0,&iStack_24,&gUnknown_086FD9D0,4,iVar3 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar5);
      cVar7 = '\0';
    }
  }
  *(char *)(param_2 + 0x11) = cVar7;
  return;
}


/* sub_08035DCA @ 0x08035DCA */

undefined4 * sub_08035DCA(void)

{
  return &DAT_03003260;
}


/* sub_08035DE0 @ 0x08035DE0 */

void sub_08035DE0(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_08035DEC @ 0x08035DEC */

void sub_08035DEC(undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> 3;
  uVar2 = (uint)uVar1;
  if (((**(int **)(param_2 + 0x50) - 1U == uVar2) || (**(int **)(param_2 + 0x50) - 2U == uVar2)) &&
     (*(byte *)(param_2 + 0x11) != uVar2)) {
    *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + 0x800;
  }
  if (**(int **)(param_2 + 0x50) <= (int)uVar2) {
    sub_0800EE78();
    return;
  }
  *(char *)(param_2 + 0x11) = (char)uVar1;
  return;
}


/* sub_08035E34 @ 0x08035E34 */

undefined4 * sub_08035E34(void)

{
  return &DAT_03003268;
}


/* sub_08035E3C @ 0x08035E3C */

void sub_08035E3C(undefined4 param_1,int param_2)

{
  if (*(int *)(*(int *)(param_2 + 0x58) + 0xa0) == *(int *)(param_2 + 0x50)) {
    *(undefined2 *)(param_2 + 0x12) = 0;
    *(undefined1 *)(param_2 + 8) = 0x38;
    *(undefined1 *)(param_2 + 0x11) = 6;
  }
  return;
}


/* sub_08035E56 @ 0x08035E56 */

void sub_08035E56(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  iVar2 = (uVar1 >> 2) + 6;
  if (iVar2 < *(int *)param_2[0x14]) {
    *(char *)((int)param_2 + 0x11) = (char)iVar2;
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}


/* sub_08035E82 @ 0x08035E82 */

undefined4 * sub_08035E82(void)

{
  return &DAT_03003270;
}


/* sub_08035E8C @ 0x08035E8C */

int sub_08035E8C(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iStack_1c;
  int iStack_18;
  
  sub_0800FDFA(&iStack_1c);
  iVar1 = sub_08011C70(&DAT_03001c4c,0x21,&iStack_1c);
  if (iVar1 != 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    param_2[0x68] = iStack_1c << 8;
    param_2[0x69] = (iStack_18 + 0x10) * 0x100;
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    iVar1 = 1;
  }
  return iVar1;
}


/* sub_08035EE2 @ 0x08035EE2 */

undefined4 * sub_08035EE2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804B650;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08035F08 @ 0x08035F08 */

void sub_08035F08(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0xfff < iVar1) {
    local_14 = 200;
    local_10 = 0x88;
    uVar2 = sub_08036A44(0,&local_14);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0xfff < iVar1) {
    local_14 = 0x70;
    local_10 = 0x110;
    uVar2 = sub_08036A44(0,&local_14);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0xfff < iVar1) {
    local_14 = 0x128;
    local_10 = 0xf0;
    uVar2 = sub_08036A44(0,&local_14);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_08035F80 @ 0x08035F80 */

undefined4 * sub_08035F80(void)

{
  return &DAT_03003274;
}


/* sub_08035F8C @ 0x08035F8C */

void sub_08035F8C(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}


/* sub_08035F9E @ 0x08035F9E */

void sub_08035F9E(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = 1;
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  uVar3 = (uint)uVar2;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  if (uVar3 < 8) {
    uVar1 = (uint)(uVar2 >> 2);
  }
  else if (0x8b < uVar3) {
    uVar1 = (int)(uVar3 - 0x84) >> 2;
  }
  uVar4 = param_4;
  if (*(byte *)((int)param_2 + 0x11) != uVar1) {
    if (uVar1 == 1) {
      param_2[0x73] = 1;
      uVar4 = 1;
    }
    else if (uVar1 == 2) {
      uVar4 = 0;
      param_2[0x73] = 0;
    }
  }
  if ((int)uVar1 < *(int *)param_2[0x14]) {
    *(char *)((int)param_2 + 0x11) = (char)uVar1;
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,uVar4,param_4);
  }
  return;
}


/* sub_08035FF6 @ 0x08035FF6 */

void sub_08035FF6(undefined4 param_1,int param_2)

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
  sub_0800ED18(param_2,&DAT_03003278);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}


/* sub_08036044 @ 0x08036044 */

undefined4 sub_08036044(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  int iStack_50;
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
  
  piVar1 = DAT_03001c34;
  if (*(undefined4 **)(param_2 + 0x14) == &DAT_03003278) {
    if (*(short *)(param_2 + 0x12) == 0x8c) {
      if ((DAT_03001c34 == (int *)0x0) || (DAT_03001c34[0x73] == 0)) {
        return 0;
      }
      sub_0800FE78(&iStack_24,DAT_03001c34);
      sub_0800FE78(&iStack_34,param_2);
      iStack_44 = iStack_34 + iStack_2c >> 1;
      iStack_68 = iStack_30 + iStack_28 >> 1;
      iStack_74 = iStack_20 + iStack_18 >> 1;
      iStack_78 = iStack_24 + iStack_1c >> 1;
      iStack_80 = iStack_78 - iStack_44;
      iVar5 = iStack_74 - iStack_68;
      iVar3 = iStack_80;
      if (iStack_80 < 0) {
        iVar3 = -iStack_80;
      }
      iVar4 = iVar5;
      if (iVar5 < 0) {
        iVar4 = -iVar5;
      }
      iStack_7c = iVar5;
      iStack_3c = iStack_44;
      iStack_38 = iStack_68;
      if (iVar4 < iVar3) {
        iStack_60 = iStack_28 + 3;
        if (iStack_80 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 2;
          iStack_6c = iStack_34 + -4;
          iStack_64 = iStack_44;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 3;
          iStack_6c = iStack_44;
          iStack_64 = iStack_2c + 3;
        }
      }
      else {
        iStack_40 = iStack_68;
        sub_0800FDFA(&iStack_80,param_2);
        iStack_6c = iStack_80;
        iStack_64 = iStack_78;
        if (iVar5 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 1;
          iStack_68 = iStack_30;
          iStack_60 = iStack_7c;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 0;
          iStack_68 = iStack_30;
          iStack_60 = iStack_28 + -6;
        }
      }
      uStack_5c = *(undefined1 *)(param_2 + 0x10);
      puStack_54 = &gUnknown_086B8098;
      uStack_58 = 0x600;
      auStack_70[0] = 0;
      iVar3 = *piVar1;
      iStack_50 = param_2;
      iStack_40 = param_2;
      iVar3 = __call_via_r3(piVar1,0,auStack_70,*(int *)(iVar3 + 0x24) + iVar3);
      if (iVar3 != 0) {
        iVar3 = sub_0803FACC(2);
        sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_08036192 @ 0x08036192 */

undefined4 * sub_08036192(void)

{
  return &DAT_0300327c;
}


/* sub_080361B8 @ 0x080361B8 */

undefined4 sub_080361B8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  undefined *puStack_54;
  int iStack_50;
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
  
  piVar1 = DAT_03001c34;
  if (DAT_03001c34 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    sub_0800FE78(&iStack_24,DAT_03001c34);
    sub_0800FE78(&iStack_34,param_2);
    iStack_68 = iStack_30 + iStack_28 >> 1;
    iStack_44 = iStack_34 + iStack_2c >> 1;
    uStack_74 = (uint)*(byte *)(param_2 + 0x10);
    iStack_78 = iStack_20 + iStack_18 >> 1;
    iStack_7c = iStack_24 + iStack_1c >> 1;
    iStack_84 = iStack_7c - iStack_44;
    iVar5 = iStack_78 - iStack_68;
    iVar3 = iStack_84;
    if (iStack_84 < 0) {
      iVar3 = -iStack_84;
    }
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    iStack_80 = iVar5;
    iStack_3c = iStack_44;
    iStack_38 = iStack_68;
    if (iVar4 < iVar3) {
      iStack_60 = iStack_28 + 3;
      if (iStack_84 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 2;
        iStack_6c = iStack_34 + -4;
        iStack_64 = iStack_44;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 3;
        iStack_6c = iStack_44;
        iStack_64 = iStack_2c + 3;
      }
    }
    else {
      iStack_40 = iStack_68;
      sub_0800FDFA(&iStack_84,param_2);
      iStack_6c = iStack_84;
      iStack_64 = iStack_7c;
      if (iVar5 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
        iStack_68 = iStack_30;
        iStack_60 = iStack_80;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
        iStack_68 = iStack_30;
        iStack_60 = iStack_28 + -6;
      }
    }
    uStack_5c = *(undefined1 *)(param_2 + 0x10);
    puStack_54 = &gUnknown_086B8098;
    iStack_58 = *(int *)(param_1 + 0xc) << 10;
    auStack_70[0] = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      *(char *)(param_2 + 0x10) = (char)uStack_74;
    }
    iVar3 = *piVar1;
    iStack_50 = param_2;
    iStack_40 = param_2;
    iVar3 = __call_via_r3(piVar1,0,auStack_70,*(int *)(iVar3 + 0x24) + iVar3);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* sub_08036302 @ 0x08036302 */

void sub_08036302(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804B6E0;
    puVar2[1] = uVar1;
    puVar2[3] = 1;
    puVar2[4] = 0;
  }
  return;
}


/* sub_08036328 @ 0x08036328 */

void sub_08036328(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 2;
    puVar2[1] = uVar1;
    puVar2[4] = 0;
    *puVar2 = &_0804DF84;
  }
  return;
}


/* sub_0803634E @ 0x0803634E */

void sub_0803634E(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 1;
    puVar2[1] = uVar1;
    puVar2[4] = 1;
    *puVar2 = &_0804AD98;
  }
  return;
}


