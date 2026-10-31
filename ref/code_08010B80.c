/* Ghidra reference decompilation of code_08010B80 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08010B80 @ 0x08010B80 */

void sub_08010B80(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = &_0804C9F0;
  DAT_03001c34 = 0;
  iVar1 = *(int *)param_1[0x8b];
  __call_via_r2((int *)param_1[0x8b],param_1,*(int *)(iVar1 + 4) + iVar1,param_4,param_4);
  sub_0800E6F8(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08010BB8 @ 0x08010BB8 */

void sub_08010BB8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x224);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r1(*(int **)(param_1 + 0x224),iVar2 + iVar1,iVar2,param_4,param_4);
  *(undefined4 *)(param_1 + 0x224) = param_2;
  return;
}


/* sub_08010BD2 @ 0x08010BD2 */

void sub_08010BD2(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x22c);
  __call_via_r2(*(int **)(param_1 + 0x22c),param_1,*(int *)(iVar1 + 8) + iVar1);
  sub_0800EF08(param_1);
  return;
}


/* sub_08010BF2 @ 0x08010BF2 */

undefined4 sub_08010BF2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  
  sub_0800E8E6();
  if ((DAT_03001c38 == 0) && (*(int *)(param_2 + 0x18) != 0)) {
    iVar2 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
    puVar6 = (ushort *)(iVar2 + 0x16);
    if (*puVar6 == 0) {
      uVar1 = 1;
    }
    else {
      piVar5 = param_1 + 0x8a;
      iVar3 = *piVar5 + *(int *)(param_2 + 0x18);
      *piVar5 = iVar3;
      iVar4 = iVar3 >> 10;
      if (iVar4 == 0) {
        uVar1 = 0;
      }
      else {
        *piVar5 = iVar3 + iVar4 * -0x400;
        if ((short)*puVar6 < iVar4) {
          do {
            *puVar6 = 0;
          } while (*puVar6 != 0);
        }
        else {
          iVar3 = ((uint)*puVar6 - iVar4) * 0x10000;
          do {
            *puVar6 = (ushort)((uint)iVar3 >> 0x10);
          } while ((int)(short)*puVar6 != iVar3 >> 0x10);
        }
        if ((int)((uint)*(byte *)(iVar2 + 0x13) << 0x1f) < 0) {
          sub_08013C66();
        }
        if (*puVar6 == 0) {
          iVar2 = *(int *)(*param_1 + 0x7c);
          __call_via_r1(param_1,iVar2 + *param_1,iVar2,0,param_4);
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08010C9C @ 0x08010C9C */

void sub_08010C9C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x224);
  iVar2 = *(int *)(iVar1 + 4);
  __call_via_r2(*(int **)(param_1 + 0x224),param_1,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_08010CB4 @ 0x08010CB4 */

void sub_08010CB4(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x224);
  __call_via_r3(*(int **)(param_1 + 0x224),param_1,param_2,*piVar1 + (int)piVar1);
  return;
}


/* sub_08010CD0 @ 0x08010CD0 */

void sub_08010CD0(int *param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  sub_0800E97E();
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
  puVar2 = (ushort *)(iVar1 + 0x16);
  iVar3 = *param_2 + 0x3ff >> 10;
  if ((int)*(short *)(iVar1 + 0x18) < (short)*puVar2 + iVar3) {
    *puVar2 = *(ushort *)(iVar1 + 0x18);
  }
  else {
    iVar3 = ((uint)*puVar2 + iVar3) * 0x10000;
    do {
      *puVar2 = (ushort)((uint)iVar3 >> 0x10);
    } while ((int)(short)*puVar2 != iVar3 >> 0x10);
  }
  if ((int)((uint)*(byte *)(iVar1 + 0x13) << 0x1f) < 0) {
    sub_08013C66();
  }
  return;
}


/* sub_08010D0C @ 0x08010D0C */

void sub_08010D0C(int param_1,short *param_2,short param_3)

{
  do {
    *param_2 = param_3;
  } while (*param_2 != param_3);
  if ((int)((uint)*(byte *)(param_1 + 0x13) << 0x1f) < 0) {
    sub_08013C66();
  }
  return;
}


/* sub_08010D26 @ 0x08010D26 */

undefined4 sub_08010D26(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x22c) + 4);
    iVar3 = *piVar1;
    iVar3 = __call_via_r1(piVar1,*(int *)(iVar3 + 0xc) + iVar3);
    if ((*(int *)(param_1 + 0x14) == iVar3) && (iVar3 = sub_0800EEB0(param_1,0), iVar3 != 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else if ((*(undefined **)(param_1 + 0x14) == (&gUnknown_0807273C)[param_2]) &&
          (iVar3 = sub_0800EEB0(param_1,param_2,param_3,param_4,param_4), iVar3 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_08010D7C @ 0x08010D7C */

void sub_08010D7C(int param_1)

{
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  sub_0800ECDA(param_1,1);
  sub_0800ED18(param_1,&DAT_03002b54);
  return;
}


/* sub_08010D9A @ 0x08010D9A */

void sub_08010D9A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_08010DAA @ 0x08010DAA */

void sub_08010DAA(void)

{
  int iVar1;
  undefined4 in_r3;
  
  if (DAT_03001c34 == 0) {
    if ((DAT_03002844 != 0) && (iVar1 = sub_08011C70(DAT_03002844,9,0,in_r3,in_r3), iVar1 != 0)) {
      sub_0801064C();
    }
  }
  else {
    sub_0801064C();
  }
  return;
}


/* sub_08010DDE @ 0x08010DDE */

int * sub_08010DDE(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *local_18;
  
  local_18 = param_1 + 0x70;
  if (param_2 == 10) {
    sub_0801712C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18)
    ;
    DAT_03001c34 = (int *)0x0;
  }
  else if (param_2 < 0xb) {
    piVar2 = param_3 + 5;
    piVar1 = param_3 + 1;
    if (param_2 == 0) {
      if ((((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
           (sub_0800FE78(&iStack_28,param_1), *piVar1 < iStack_20)) &&
          ((iStack_28 < param_3[3] && (param_3[2] < iStack_1c)))) && (iStack_24 < param_3[4])) {
        if (local_18[3] != 0) {
          sub_0800E9D8(param_1,piVar2);
          __call_via_r2(param_1,piVar2,*(int *)(*param_1 + 0x58) + *param_1);
        }
        return (int *)0x1;
      }
      return (int *)0x0;
    }
    if (param_2 == 1) {
      if ((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
         ((sub_0800FDFA(&iStack_28,param_1), *piVar1 < iStack_20 &&
          (((iStack_28 < param_3[3] && (param_3[2] < iStack_1c)) && (iStack_24 < param_3[4])))))) {
        if (local_18[3] != 0) {
          sub_0800E9D8(param_1,piVar2);
          __call_via_r2(param_1,piVar2,*(int *)(*param_1 + 0x58) + *param_1);
        }
        return (int *)0x1;
      }
      return (int *)0x0;
    }
    if (param_2 == 2) {
      if (((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
          ((sub_0800FE78(&iStack_28,param_1), *piVar1 < iStack_20 &&
           ((iStack_28 < param_3[3] && (param_3[2] < iStack_1c)))))) && (iStack_24 < param_3[4])) {
        return (int *)0x1;
      }
      return (int *)0x0;
    }
    if (param_2 == 9) {
      return param_1;
    }
  }
  else if (param_2 == 0xb) {
    sub_0801711C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18)
    ;
    DAT_03001c34 = param_1;
  }
  else {
    if (param_2 == 0x1a) {
      iVar3 = *(int *)param_1[0x8b];
      __call_via_r2((int *)param_1[0x8b],param_1,*(int *)(iVar3 + 0xc) + iVar3);
      return (int *)0x0;
    }
    if (param_2 == 0x28) {
      iVar3 = *param_3;
      iVar4 = param_3[1];
      sub_0800FE78(&iStack_28,param_1);
      if (iVar3 < iStack_28) {
        sub_0800FE78(&iStack_28,param_1);
        iVar3 = iStack_28;
      }
      sub_0800FE78(&iStack_28,param_1);
      if (iStack_20 < iVar3) {
        sub_0800FE78(&iStack_28,param_1);
        iVar3 = iStack_20;
      }
      sub_0800FE78(&iStack_28,param_1);
      if (iVar4 < iStack_24) {
        sub_0800FE78(&iStack_28,param_1);
        iVar4 = iStack_24;
      }
      sub_0800FE78(&iStack_28,param_1);
      if (iStack_1c < iVar4) {
        sub_0800FE78(&iStack_28,param_1);
        iVar4 = iStack_1c;
      }
      iVar4 = (*param_3 - iVar3) * (*param_3 - iVar3) + (param_3[1] - iVar4) * (param_3[1] - iVar4);
      iVar3 = param_3[2] * param_3[2];
      if ((iVar3 - iVar4 != 0 && iVar4 <= iVar3) && (local_18[3] != 0)) {
        sub_0800E9D8(param_1,param_3 + 3);
        __call_via_r2(param_1,param_3 + 3,*(int *)(*param_1 + 0x58) + *param_1);
        return (int *)0x1;
      }
      return (int *)0x0;
    }
  }
  piVar1 = (int *)sub_080102D8(param_1,param_2,param_3);
  return piVar1;
}


/* sub_08010E04 @ 0x08010E04 */

int * sub_08010E04(int *param_1)

{
  int *unaff_r4;
  char *unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (unaff_r7 == 0) {
    if (((((*unaff_r5 == '\0') || (*unaff_r5 == '\x02')) &&
         (sub_0800FE78(), *param_1 < in_stack_00000008)) &&
        ((in_stack_00000000 < param_1[2] && (param_1[1] < in_stack_0000000c)))) &&
       (in_stack_00000004 < param_1[3])) {
      if (*(int *)(in_stack_00000010 + 0xc) != 0) {
        sub_0800E9D8(unaff_r4,unaff_r6);
        __call_via_r2(unaff_r4,unaff_r6,*(int *)(*unaff_r4 + 0x58) + *unaff_r4);
      }
      unaff_r4 = (int *)0x1;
    }
    else {
      unaff_r4 = (int *)0x0;
    }
  }
  else if (unaff_r7 == 1) {
    if (((*unaff_r5 == '\0') || (*unaff_r5 == '\x02')) &&
       ((sub_0800FDFA(), *param_1 < in_stack_00000008 &&
        (((in_stack_00000000 < param_1[2] && (param_1[1] < in_stack_0000000c)) &&
         (in_stack_00000004 < param_1[3])))))) {
      if (*(int *)(in_stack_00000010 + 0xc) != 0) {
        sub_0800E9D8(unaff_r4,unaff_r6);
        __call_via_r2(unaff_r4,unaff_r6,*(int *)(*unaff_r4 + 0x58) + *unaff_r4);
      }
      unaff_r4 = (int *)0x1;
    }
    else {
      unaff_r4 = (int *)0x0;
    }
  }
  else if (unaff_r7 == 2) {
    if ((((*unaff_r5 == '\0') || (*unaff_r5 == '\x02')) &&
        ((sub_0800FE78(), *param_1 < in_stack_00000008 &&
         ((in_stack_00000000 < param_1[2] && (param_1[1] < in_stack_0000000c)))))) &&
       (in_stack_00000004 < param_1[3])) {
      unaff_r4 = (int *)0x1;
    }
    else {
      unaff_r4 = (int *)0x0;
    }
  }
  else if (unaff_r7 != 9) {
    unaff_r4 = (int *)sub_080102D8(unaff_r4,unaff_r7,unaff_r5);
  }
  return unaff_r4;
}


/* sub_08011050 @ 0x08011050 */

void sub_08011050(void)

{
  sub_0801155C();
  return;
}


/* sub_08011058 @ 0x08011058 */

undefined4 sub_08011058(int *param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x20) == param_1) {
      uVar1 = 0;
    }
    else if ((((*param_3 == '\x01') || (*param_3 == '\x02')) &&
             (sub_0800FE78(&iStack_20,param_1), *(int *)(param_3 + 4) < iStack_18)) &&
            (((iStack_20 < *(int *)(param_3 + 0xc) && (*(int *)(param_3 + 8) < iStack_14)) &&
             ((iStack_1c < *(int *)(param_3 + 0x10) && (param_1[0x73] != 0)))))) {
      sub_0800E9D8(param_1,param_3 + 0x14);
      __call_via_r2(param_1,param_3 + 0x14,*(int *)(*param_1 + 0x58) + *param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08010DDE(param_1);
  }
  return uVar1;
}


/* sub_080110D6 @ 0x080110D6 */

undefined4 *
sub_080110D6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = param_1;
  uVar2 = param_3;
  uVar3 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1bc), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,&DAT_03001b0c,param_4,param_5,puVar1,param_2,uVar2,uVar3);
    *param_1 = &_0804CEF4;
    sub_0800A93C(param_1 + 0x6c,param_3);
  }
  return param_1;
}


/* sub_080110D8 @ 0x080110D8 */

undefined4 *
sub_080110D8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = param_1;
  uVar2 = param_3;
  uVar3 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1bc), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,&DAT_03001b0c,param_4,param_5,puVar1,param_2,uVar2,uVar3);
    *param_1 = &_0804CEF4;
    sub_0800A93C(param_1 + 0x6c,param_3);
  }
  return param_1;
}


/* sub_0801111C @ 0x0801111C */

undefined4 * sub_0801111C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1bc), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,&DAT_03001b0c,param_3,0xffffffff);
    *param_1 = &_0804CEF4;
    sub_0800A93C(param_1 + 0x6c,&gUnknown_080727C0);
  }
  return param_1;
}


/* sub_08011162 @ 0x08011162 */

void sub_08011162(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_1,(&PTR_DAT_080727c8)[param_2],&PTR_DAT_080727c8,param_4,param_4);
  return;
}


/* sub_08011172 @ 0x08011172 */

undefined4 sub_08011172(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(undefined **)(param_1 + 0x14) == (&PTR_DAT_080727c8)[param_2]) &&
     (iVar1 = sub_0800EEB0(), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_08011192 @ 0x08011192 */

void sub_08011192(int param_1)

{
  sub_0800A95A(param_1 + 0x1b0,param_1);
  sub_0800EF08(param_1);
  return;
}


/* sub_080111A8 @ 0x080111A8 */

undefined4 * sub_080111A8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1;
  uVar1 = sub_08000158(*(undefined4 *)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0x1bc);
  if (puVar2 != (undefined4 *)0x0) {
    sub_0800FD74(puVar2,uVar1,&DAT_03001b0c,param_1 + 8,param_2,iVar3);
    *puVar2 = &_0804CEF4;
    sub_0800A93C(puVar2 + 0x6c,param_1 + 0x10);
  }
  return puVar2;
}


/* sub_08011200 @ 0x08011200 */

void sub_08011200(undefined1 *param_1,int param_2)

{
  if ((byte)param_1[param_2 * 10 + 0x69d] == 0xff) {
    *param_1 = param_1[param_2 * 10 + 0x69c];
  }
  else {
    param_1[(uint)(byte)param_1[param_2 * 10 + 0x69d] * 10 + 0x69c] = param_1[param_2 * 10 + 0x69c];
  }
  if ((byte)param_1[param_2 * 10 + 0x69c] != 0xff) {
    param_1[(uint)(byte)param_1[param_2 * 10 + 0x69c] * 10 + 0x69d] = param_1[param_2 * 10 + 0x69d];
  }
  return;
}


/* sub_0801124C @ 0x0801124C */

int sub_0801124C(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (uint)*param_1;
  uVar3 = param_2 >> 6;
  uVar7 = 0xff;
  uVar4 = 0x7fffffff;
  if (uVar6 != 0xff) {
    do {
      uVar5 = (uint)*(ushort *)(param_1 + uVar6 * 10 + 0x698);
      if (uVar5 < uVar4) {
        if (uVar5 == uVar3) {
          param_1[uVar6 * 10 + 0x694] = 1;
          sub_08011200(param_1,uVar6);
          param_1[*(ushort *)(param_1 + uVar6 * 10 + 0x696) + 0xc00] = (byte)uVar6;
          return (uint)*(ushort *)(param_1 + uVar6 * 10 + 0x696) << 1;
        }
        if ((int)uVar3 < (int)uVar5) {
          uVar4 = uVar5;
          uVar7 = uVar6;
        }
      }
      uVar6 = (uint)param_1[uVar6 * 10 + 0x69c];
    } while (uVar6 != 0xff);
    if (uVar7 != 0xff) {
      bVar1 = param_1[1];
      uVar4 = (uint)bVar1;
      if (uVar4 != 0xff) {
        bVar2 = param_1[uVar4 * 10 + 0x69a];
        param_1[1] = bVar2;
        if (bVar2 != 0xff) {
          param_1[(uint)bVar2 * 10 + 0x69b] = 0xff;
        }
        param_1[uVar4 * 10 + 0x69b] = (byte)uVar7;
        param_1[uVar4 * 10 + 0x69a] = param_1[uVar7 * 10 + 0x69a];
        if (param_1[uVar7 * 10 + 0x69a] != 0xff) {
          param_1[(uint)param_1[uVar7 * 10 + 0x69a] * 10 + 0x69b] = bVar1;
        }
        param_1[uVar7 * 10 + 0x69a] = bVar1;
        *(short *)(param_1 + uVar7 * 10 + 0x698) =
             *(short *)(param_1 + uVar7 * 10 + 0x698) - (short)uVar3;
        param_1[uVar4 * 10 + 0x694] = 1;
        *(short *)(param_1 + uVar4 * 10 + 0x696) =
             *(short *)(param_1 + uVar7 * 10 + 0x696) + *(short *)(param_1 + uVar7 * 10 + 0x698);
        *(short *)(param_1 + uVar4 * 10 + 0x698) = (short)uVar3;
        param_1[*(ushort *)(param_1 + uVar4 * 10 + 0x696) + 0xc00] = bVar1;
        return (uint)*(ushort *)(param_1 + uVar4 * 10 + 0x696) << 1;
      }
      param_1[uVar7 * 10 + 0x694] = 1;
      sub_08011200(param_1,uVar7);
      param_1[*(ushort *)(param_1 + uVar7 * 10 + 0x696) + 0xc00] = (byte)uVar7;
      return (uint)*(ushort *)(param_1 + uVar7 * 10 + 0x696) << 1;
    }
  }
  return -1;
}


/* sub_08011346 @ 0x08011346 */

void sub_08011346(byte *param_1,int param_2)

{
  byte bVar1;
  
  param_1[param_2 * 10 + 0x694] = 0;
  param_1[param_2 * 10 + 0x69d] = 0xff;
  bVar1 = *param_1;
  param_1[param_2 * 10 + 0x69c] = bVar1;
  if (bVar1 != 0xff) {
    param_1[(uint)bVar1 * 10 + 0x69d] = (byte)param_2;
  }
  *param_1 = (byte)param_2;
  return;
}


/* sub_0801137C @ 0x0801137C */

void sub_0801137C(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_2 * 10 + param_1;
  *(undefined1 *)(iVar2 + 0x694) = 0xff;
  *(undefined1 *)(iVar2 + 0x69b) = 0xff;
  bVar1 = *(byte *)(param_1 + 1);
  *(byte *)(iVar2 + 0x69a) = bVar1;
  if (bVar1 != 0xff) {
    *(char *)((uint)bVar1 * 10 + param_1 + 0x69b) = (char)param_2;
  }
  *(char *)(param_1 + 1) = (char)param_2;
  return;
}


/* sub_080113B0 @ 0x080113B0 */

void sub_080113B0(undefined1 *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = (undefined1)param_2;
  *(short *)(param_1 + param_2 * 10 + 0x698) =
       *(short *)(param_1 + param_2 * 10 + 0x698) + *(short *)(param_1 + param_3 * 10 + 0x698);
  param_1[param_2 * 10 + 0x69a] = param_1[param_3 * 10 + 0x69a];
  if ((byte)param_1[param_3 * 10 + 0x69a] != 0xff) {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69a] * 10 + 0x69b] = uVar2;
  }
  param_1[param_2 * 10 + 0x69d] = param_1[param_3 * 10 + 0x69d];
  if ((byte)param_1[param_3 * 10 + 0x69d] == 0xff) {
    *param_1 = uVar2;
  }
  else {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69d] * 10 + 0x69c] = uVar2;
  }
  param_1[param_2 * 10 + 0x69c] = param_1[param_3 * 10 + 0x69c];
  if ((byte)param_1[param_3 * 10 + 0x69c] != 0xff) {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69c] * 10 + 0x69d] = uVar2;
  }
  param_1[param_3 * 10 + 0x694] = 0xff;
  param_1[param_3 * 10 + 0x69b] = 0xff;
  bVar1 = param_1[1];
  param_1[param_3 * 10 + 0x69a] = bVar1;
  if (bVar1 != 0xff) {
    param_1[(uint)bVar1 * 10 + 0x69b] = (char)param_3;
  }
  param_1[1] = (char)param_3;
  return;
}


/* sub_0801142A @ 0x0801142A */

void sub_0801142A(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = param_1[(param_2 >> 1) + 0xc00];
  uVar5 = (uint)bVar1;
  param_1[uVar5 * 10 + 0x694] = 0;
  uVar2 = (uint)param_1[uVar5 * 10 + 0x69a];
  if (uVar2 == 0xff) {
    uVar2 = (uint)param_1[uVar5 * 10 + 0x69b];
    if (uVar2 == 0xff) {
      *param_1 = bVar1;
      param_1[uVar5 * 10 + 0x69c] = 0xff;
      param_1[uVar5 * 10 + 0x69d] = 0xff;
    }
    else if (param_1[uVar2 * 10 + 0x694] == 0) {
      *(short *)(param_1 + uVar2 * 10 + 0x698) =
           *(short *)(param_1 + uVar2 * 10 + 0x698) + *(short *)(param_1 + uVar5 * 10 + 0x698);
      param_1[uVar2 * 10 + 0x69a] = 0xff;
      sub_0801137C(param_1,uVar5);
    }
    else {
      sub_08011346(param_1,uVar5,param_1[uVar2 * 10 + 0x694],uVar2 * 4,param_4);
    }
  }
  else {
    pbVar3 = param_1 + uVar2 * 10 + 0x694;
    uVar4 = (uint)param_1[uVar5 * 10 + 0x69b];
    if (uVar4 == 0xff) {
      if (*pbVar3 == 0) {
        sub_080113B0(param_1,uVar5,uVar2);
      }
      else {
        sub_08011346(param_1,uVar5);
      }
    }
    else if (*pbVar3 == 0) {
      if (param_1[uVar4 * 10 + 0x694] == 0) {
        sub_08011200(param_1);
        *(short *)(param_1 + uVar4 * 10 + 0x698) =
             *(short *)(param_1 + uVar5 * 10 + 0x698) + *(short *)(pbVar3 + 4) +
             *(short *)(param_1 + uVar4 * 10 + 0x698);
        param_1[uVar4 * 10 + 0x69a] = pbVar3[6];
        if (pbVar3[6] != 0xff) {
          param_1[(uint)pbVar3[6] * 10 + 0x69b] = param_1[uVar5 * 10 + 0x69b];
        }
        sub_0801137C(param_1,param_1[uVar5 * 10 + 0x69a]);
        sub_0801137C(param_1,uVar5);
      }
      else {
        sub_080113B0(param_1,uVar5,uVar2);
      }
    }
    else if (param_1[uVar4 * 10 + 0x694] == 0) {
      *(short *)(param_1 + uVar4 * 10 + 0x698) =
           *(short *)(param_1 + uVar4 * 10 + 0x698) + *(short *)(param_1 + uVar5 * 10 + 0x698);
      param_1[uVar4 * 10 + 0x69a] = param_1[uVar5 * 10 + 0x69a];
      param_1[uVar2 * 10 + 0x69b] = param_1[uVar5 * 10 + 0x69b];
      sub_0801137C(param_1,uVar5);
    }
    else {
      sub_08011346(param_1,uVar5);
    }
  }
  return;
}


/* sub_0801155C @ 0x0801155C */

undefined4 sub_0801155C(undefined4 param_1,int param_2)

{
  if (param_2 == 0xf) {
    return 2;
  }
  return 0;
}


/* sub_08011568 @ 0x08011568 */

void sub_08011568(int param_1)

{
  sub_0801142A(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xc));
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  return;
}


/* sub_0801157E @ 0x0801157E */

void sub_0801157E(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  sub_0803DA62(&DAT_03003498);
  piVar3 = (int *)(param_1 + 0x208);
  iVar1 = *piVar3;
  while (-1 < iVar1 + -1) {
    iVar2 = *(int *)piVar3[iVar1];
    __call_via_r1((int *)piVar3[iVar1],*(int *)(iVar2 + 0x14) + iVar2);
    iVar1 = iVar1 + -1;
  }
  *piVar3 = 0;
  return;
}


/* sub_080115B0 @ 0x080115B0 */

void sub_080115B0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined *puStack_228;
  undefined *puStack_224;
  undefined4 uStack_220;
  int local_21c [129];
  int local_18;
  
  local_21c[0] = 0;
  iVar4 = *(int *)(param_1 + 4);
  local_18 = param_1;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar6 = (int *)(iVar4 * 4 + param_1 + 8);
    piVar1 = (int *)*piVar6;
    iVar2 = *piVar1;
    iVar2 = __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
    if (iVar2 != 0) {
      local_21c[local_21c[0] + 1] = *piVar6;
      local_21c[0] = local_21c[0] + 1;
    }
  }
  piVar1 = local_21c + 1;
  piVar6 = local_21c + local_21c[0];
  if (piVar1 < piVar6) {
    piVar5 = piVar1 + ((int)piVar6 - (int)piVar1 >> 3);
    if (piVar1 != piVar5) {
      iVar4 = sub_08052EE0(piVar5,piVar1);
      if (iVar4 != 0) {
        iVar4 = *piVar5;
        *piVar5 = local_21c[1];
        local_21c[1] = iVar4;
      }
      iVar4 = sub_08052EE0(piVar1,piVar6);
      piVar5 = piVar6;
      piVar7 = piVar1;
      if (iVar4 != 0) {
        iVar4 = *piVar6;
        *piVar6 = local_21c[1];
        local_21c[1] = iVar4;
      }
      do {
        iVar4 = sub_08052EE0(piVar5,piVar1);
        while (iVar4 != 0) {
          piVar5 = piVar5 + -1;
          iVar4 = sub_08052EE0(piVar5,piVar1);
        }
        do {
          piVar7 = piVar7 + 1;
          if (piVar5 <= piVar7) {
            iVar4 = *piVar5;
            *piVar5 = local_21c[1];
            local_21c[1] = iVar4;
            sub_080531A4(piVar1,piVar5 + -1);
            sub_080531A4(piVar5 + 1,piVar6);
            goto _080116A2;
          }
          iVar4 = sub_08052EE0(piVar1,piVar7);
        } while (iVar4 != 0);
        iVar4 = *piVar7;
        *piVar7 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = piVar5 + -1;
      } while( true );
    }
    iVar4 = sub_08052EE0(piVar1,piVar6);
    if (iVar4 != 0) {
      iVar4 = *piVar6;
      *piVar6 = local_21c[1];
      local_21c[1] = iVar4;
    }
  }
_080116A2:
  sub_0803DA54(&DAT_03003498);
  puStack_228 = &DAT_03003498;
  iVar4 = 0;
  puStack_224 = &DAT_03003498;
  uStack_220 = 0;
  if (0 < local_21c[0]) {
    piVar1 = (int *)(local_18 + 0x208);
    do {
      piVar6 = (int *)local_21c[iVar4 + 1];
      iVar2 = *piVar6;
      iVar2 = __call_via_r2(piVar6,&puStack_228,*(int *)(iVar2 + 0x10) + iVar2);
      if (iVar2 != 0) {
        iVar2 = *piVar1;
        iVar3 = local_21c[iVar4 + 1];
        *piVar1 = iVar2 + 1;
        piVar1[iVar2 + 1] = iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_21c[0]);
  }
  return;
}


/* sub_080116FC @ 0x080116FC */

int sub_080116FC(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 4) == 0x80) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    bVar1 = *param_1;
    while (uVar2 = (uint)bVar1, uVar2 != 0xff) {
      if (uVar4 < *(ushort *)(param_1 + uVar2 * 10 + 0x698)) {
        uVar4 = (uint)*(ushort *)(param_1 + uVar2 * 10 + 0x698);
      }
      bVar1 = param_1[uVar2 * 10 + 0x69c];
    }
    iVar3 = uVar4 << 6;
  }
  return iVar3;
}


/* sub_08011732 @ 0x08011732 */

void sub_08011732(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_24;
  
  local_24 = 0;
  iVar1 = sub_080116FC(param_1);
  if (iVar1 < param_2) {
    piVar2 = (int *)(param_1 + 0x40c);
    iVar1 = param_1 + 4;
    do {
      iVar5 = *(int *)(param_1 + 4);
joined_r0x08011754:
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) break;
        piVar3 = *(int **)(iVar5 * 4 + iVar1 + 4);
        iVar4 = __call_via_r2(piVar3,local_24,*(int *)(*piVar3 + 0x18) + *piVar3);
        if (iVar4 == 1) {
          __call_via_r1(piVar3,*(int *)(*piVar3 + 4) + *piVar3);
          sub_0804FE54(iVar1,iVar5);
        }
        else {
          if (iVar4 != 2) goto joined_r0x08011754;
          __call_via_r1(piVar3,*(int *)(*piVar3 + 0x1c) + *piVar3);
          iVar4 = *piVar2;
          *piVar2 = iVar4 + 1;
          piVar2[iVar4 + 1] = (int)piVar3;
          sub_0804FE54(iVar1,iVar5);
        }
      } while ((local_24 < 0xb) || (iVar4 = sub_080116FC(param_1), iVar4 < param_2));
      local_24 = local_24 + 1;
      iVar5 = sub_080116FC(param_1);
    } while (iVar5 < param_2);
    sub_080115B0(param_1);
    sub_0803DA62(&DAT_03003498);
    piVar2 = (int *)(param_1 + 0x208);
    iVar1 = *piVar2;
    while (-1 < iVar1 + -1) {
      iVar5 = *(int *)piVar2[iVar1];
      __call_via_r1((int *)piVar2[iVar1],*(int *)(iVar5 + 0x14) + iVar5);
      iVar1 = iVar1 + -1;
    }
    *piVar2 = 0;
  }
  return;
}


/* sub_08011818 @ 0x08011818 */

void sub_08011818(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = sub_0801124C(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe),param_3,param_4,param_4);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe));
    iVar1 = sub_0801124C(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe));
  }
  *(short *)(param_1 + 0xc) = (short)iVar1;
  return;
}


/* sub_0801183E @ 0x0801183E */

void sub_0801183E(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0xe) = param_2;
  if (*(short *)(param_1 + 0xc) != -1) {
    sub_0801142A(&DAT_03001c4c);
    iVar1 = sub_0801124C(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe));
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe),param_3,0,param_4);
      iVar1 = sub_0801124C(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe));
    }
    *(short *)(param_1 + 0xc) = (short)iVar1;
  }
  return;
}


/* sub_08011874 @ 0x08011874 */

undefined4 *
sub_08011874(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  *param_1 = &_0804ABA0;
  sub_0804E490();
  return param_1;
}


/* sub_08011890 @ 0x08011890 */

void sub_08011890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xc);
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  sub_0804E490(param_2,param_3,param_4);
  return;
}


/* sub_080118D4 @ 0x080118D4 */

undefined4 sub_080118D4(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == 10) {
    pcVar2 = *(char **)(param_1 + 0xc);
    cVar1 = *pcVar2;
    *pcVar2 = cVar1 + -1;
    if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
      pcVar2[2] = -1;
      pcVar2[3] = -1;
    }
    return 0;
  }
  if (param_2 == 0xb) {
    sub_0804E490(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
    return 0;
  }
  return 0;
}


/* sub_0801191A @ 0x0801191A */

void sub_0801191A(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  piVar1[iVar2 + 1] = param_2;
  return;
}


/* sub_0801192C @ 0x0801192C */

void sub_0801192C(int param_1)

{
  sub_0804FE54();
  *(undefined4 **)(*(int *)(param_1 + 4) * 4 + param_1 + 8) = &DAT_03002a4c;
  return;
}


/* sub_08011944 @ 0x08011944 */

void sub_08011944(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = param_1 + 4;
  iVar1 = -1;
  iVar2 = iVar1;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      param_3 = *(int **)(iVar3 * 4 + iVar5 + 4);
      iVar2 = iVar3;
      if (param_3 == param_2) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  if (iVar2 == -1) {
    piVar4 = (int *)(param_1 + 0x40c);
    iVar5 = *piVar4;
    iVar2 = iVar1;
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        iVar2 = iVar3;
        param_3 = (int *)piVar4[iVar2 + 1];
        if (param_3 == param_2) break;
        iVar3 = iVar2 + 1;
        iVar2 = iVar1;
      } while (iVar3 < iVar5);
    }
    sub_0804FE54(piVar4,iVar2,param_3,iVar5,param_4);
    piVar4[*piVar4 + 1] = (int)&DAT_03002a4c;
  }
  else {
    sub_0804FE54(iVar5);
    *(undefined4 **)(*(int *)(param_1 + 4) * 4 + iVar5 + 4) = &DAT_03002a4c;
  }
  __call_via_r1(param_2,*(int *)(*param_2 + 4) + *param_2);
  return;
}


/* sub_080119BC @ 0x080119BC */

void sub_080119BC(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 4);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if (piVar4[iVar2 + 1] == param_2) goto _080119DE;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = -1;
_080119DE:
  if (iVar2 == -1) {
    piVar1 = (int *)(param_1 + 0x40c);
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        iVar2 = piVar1[iVar3 + 1];
        if (iVar2 == param_2) goto _08011A0A;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar1);
    }
    iVar3 = -1;
_08011A0A:
    sub_0804FE54(piVar1,iVar3,iVar3,iVar2,param_4);
    iVar2 = *piVar4;
    *piVar4 = iVar2 + 1;
    piVar4[iVar2 + 1] = param_3;
  }
  else {
    piVar4[iVar2 + 1] = param_3;
  }
  return;
}


/* sub_08011A1E @ 0x08011A1E */

void sub_08011A1E(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x610);
  iVar3 = *piVar5;
  while (iVar1 = iVar3, iVar3 = iVar1 + -1, -1 < iVar3) {
    piVar4 = (int *)piVar5[iVar1];
    iVar2 = piVar4[1];
    piVar4[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      iVar2 = *piVar5;
      *piVar5 = iVar2 + -1;
      iVar2 = (iVar2 + -1) - iVar3;
      if (iVar2 != 0) {
        sub_08049138((int)(piVar5 + iVar1),(int)(piVar5 + iVar1 + 1),iVar2 * 4);
      }
      __call_via_r1(piVar4,*(int *)(*piVar4 + 0xc) + *piVar4);
      __call_via_r1(piVar4,*(int *)(*piVar4 + 8) + *piVar4);
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    piVar5 = *(int **)(iVar3 * 4 + param_1 + 8);
    iVar1 = *piVar5;
    __call_via_r1(piVar5,*(int *)(iVar1 + 8) + iVar1);
  }
  return;
}


/* sub_08011AA0 @ 0x08011AA0 */

void sub_08011AA0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x610);
  iVar1 = *piVar5;
  while (iVar2 = iVar1, iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)piVar5[iVar2];
    iVar4 = __call_via_r1(piVar3,*(int *)(*piVar3 + 4) + *piVar3);
    if ((iVar4 != 0) && (iVar4 = piVar3[1], piVar3[1] = iVar4 + -1, iVar4 + -1 == 0)) {
      iVar4 = *piVar5;
      *piVar5 = iVar4 + -1;
      iVar4 = (iVar4 + -1) - iVar1;
      if (iVar4 != 0) {
        sub_08049138((int)(piVar5 + iVar2),(int)(piVar5 + iVar2 + 1),iVar4 * 4);
      }
      __call_via_r1(piVar3,*(int *)(*piVar3 + 0xc) + *piVar3);
      __call_via_r1(piVar3,*(int *)(*piVar3 + 8) + *piVar3);
    }
  }
  return;
}


/* sub_08011B04 @ 0x08011B04 */

void sub_08011B04(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *unaff_r11;
  bool bVar6;
  
  iVar3 = *(int *)(param_1 + 4);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    iVar2 = **(int **)(param_1 + iVar3 * 4 + 8);
    __call_via_r1(*(int **)(param_1 + iVar3 * 4 + 8),*(int *)(iVar2 + 4) + iVar2);
  }
  piVar4 = (int *)(param_1 + 0x40c);
  iVar3 = *piVar4;
  while (-1 < iVar3 + -1) {
    iVar2 = *(int *)piVar4[iVar3];
    __call_via_r1((int *)piVar4[iVar3],*(int *)(iVar2 + 4) + iVar2);
    iVar3 = iVar3 + -1;
  }
  piVar5 = (int *)(param_1 + 0x610);
  iVar3 = *piVar5;
  while (-1 < iVar3 + -1) {
    iVar2 = *(int *)piVar5[iVar3];
    __call_via_r1((int *)piVar5[iVar3],*(int *)(iVar2 + 8) + iVar2);
    iVar3 = iVar3 + -1;
  }
  sub_0804912C((int)(param_1 + 8),0x3002a4c,0x200);
  sub_0804912C((int)(param_1 + 0x20c),0x3002a4c,0x200);
  sub_0804912C((int)(param_1 + 0x410),0x3002a4c,0x200);
  sub_0804912C((int)(param_1 + 0x614),0x3001c44,0x80);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *piVar4 = 0;
  *piVar5 = 0;
  sub_0804912C((int)(param_1 + 0x694),-1,0x564);
  param_1[0x694] = 0;
  *(undefined2 *)(param_1 + 0x696) = 0;
  *(undefined2 *)(param_1 + 0x698) = 0x200;
  iVar3 = 1;
  bVar6 = false;
  iVar2 = 0x200;
  do {
    uVar1 = (undefined1)iVar3;
    iVar3 = iVar2;
    if (!bVar6) {
      param_1 = (undefined1 *)unaff_r11[-2];
      param_4 = unaff_r11[-3];
      iVar3 = unaff_r11[-4];
      uVar1 = (undefined1)*unaff_r11;
      unaff_r11 = (undefined4 *)unaff_r11[3];
    }
    *(undefined1 *)(param_4 + 0xb) = uVar1;
    bVar6 = iVar3 == 0x8a;
    iVar2 = iVar3;
  } while (iVar3 < 0x8a);
  param_1[0x6a5] = 0xff;
  param_1[0xbf4] = 0xff;
  *param_1 = 0;
  param_1[1] = 1;
  return;
}


/* sub_08011C0C @ 0x08011C0C */

uint sub_08011C0C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = 0;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
    iVar3 = *piVar1;
    uVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    uVar5 = uVar5 | uVar2;
  }
  iVar4 = *(int *)(param_1 + 0x40c);
  while (-1 < iVar4 + -1) {
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar4];
    iVar3 = *piVar1;
    uVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    uVar5 = uVar5 | uVar2;
    iVar4 = iVar4 + -1;
  }
  return uVar5;
}


/* sub_08011C70 @ 0x08011C70 */

int sub_08011C70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar3) {
    param_4 = param_1 + 4;
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_4 + 4);
      iVar2 = *piVar1;
      iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar2 + 0x24) + iVar2);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x40c);
  do {
    if (iVar3 + -1 < 0) {
      return 0;
    }
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar3];
    iVar2 = *piVar1;
    iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar2 + 0x24) + iVar2,param_4);
    iVar3 = iVar3 + -1;
  } while (iVar2 == 0);
  return iVar2;
}


/* sub_08011CCA @ 0x08011CCA */

int sub_08011CCA(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = 0;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
    iVar3 = *piVar1;
    iVar3 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    if (iVar3 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x40c);
  while (iVar3 = iVar4 + -1, -1 < iVar3) {
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar4];
    iVar4 = *piVar1;
    iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar4 + 0x24) + iVar4);
    iVar4 = iVar3;
    if (iVar2 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  return iVar5;
}


/* sub_08011D36 @ 0x08011D36 */

/* WARNING: Removing unreachable block (ram,0x08011d62) */
/* WARNING: Removing unreachable block (ram,0x08011d5e) */
/* WARNING: Removing unreachable block (ram,0x08011d82) */
/* WARNING: Removing unreachable block (ram,0x08011d8a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08011D36(int param_1)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  undefined4 *extraout_r1_00;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined *puVar8;
  char cVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined8 uVar14;
  undefined4 local_98;
  undefined1 auStack_94 [128];
  
  local_98 = 0;
  iVar5 = 0x80;
  sub_0804912C((int)auStack_94,0x3001c44,0x80);
  piVar7 = (int *)(param_1 + 0x610);
  iVar1 = *piVar7;
  uVar10 = iVar1 == 0;
  if (0 < iVar1) {
    if (!(bool)uVar10) {
      unaff_r6[-1] = &local_98;
      unaff_r6[-2] = piVar7;
    }
    puVar8 = &UNK_08011d6d;
    uVar14 = __call_via_r1(iVar1,iVar5 + extraout_r1);
    puVar3 = (undefined4 *)((ulonglong)uVar14 >> 0x20);
    bVar11 = (int)uVar14 == 0;
    if (bVar11) {
      if (bVar11) {
        uRamfffffff0 = 0;
        uRamffffffec = 0;
        _SHIFT = puVar8;
        piRamfffffff4 = piVar7;
        uRamfffffff8 = unaff_r11;
        puRamfffffffc = &local_98;
      }
      uVar12 = !bVar11;
      if (!(bool)uVar12) {
        unaff_r9 = 0;
      }
      uVar10 = !(bool)uVar12 || bVar11;
      cVar9 = '\0';
      cVar13 = '\0';
    }
    else {
      uVar2 = *(uint *)*unaff_r6;
      uVar6 = *(uint *)(uVar2 + 8);
      uVar12 = CARRY4(uVar6,uVar2);
      cVar13 = SCARRY4(uVar6,uVar2);
      cVar9 = (int)(uVar6 + uVar2) < 0;
      uVar10 = uVar6 + uVar2 == 0;
      __call_via_r1();
      puVar3 = extraout_r1_00;
    }
    puVar4 = puVar3;
    if (!(bool)uVar12) {
      puVar4 = puVar3 + -0x20a;
      *puVar3 = unaff_r6;
    }
    if ((bool)uVar10 || cVar9 != cVar13) {
      coprocessor_storelong(2,in_cr4,puVar4);
    }
  }
  if (!(bool)uVar10) {
    coprocessor_load(2,in_cr2,unaff_r9);
  }
  sub_08046DD0(piVar7);
  return;
}


/* sub_08011DB4 @ 0x08011DB4 */

void sub_08011DB4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_08011C0C(param_1,10,0,param_4,param_4);
  sub_08011D36(param_1);
  uVar1 = sub_0803E44C(&DAT_03003e5c);
  *(undefined4 *)(param_1 + 0xbfc) = uVar1;
  iVar2 = sub_0803D5B8(0xe00);
  if (iVar2 != 0) {
    sub_08046DD0(iVar2,param_1,0xe00);
  }
  *(int *)(param_1 + 0xbf8) = iVar2;
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  sub_08011B04(param_1);
  return;
}


/* sub_08011E0E @ 0x08011E0E */

void sub_08011E0E(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = (int *)(param_1 + 0x610);
  iVar1 = 0;
  if (0 < *piVar3) {
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0xbf8) + 0x610);
      iVar5 = piVar3[iVar1 + 1];
      iVar4 = *piVar2;
      iVar1 = iVar1 + 1;
      *piVar2 = iVar4 + 1;
      piVar2[iVar4 + 1] = iVar5;
    } while (iVar1 < *piVar3);
  }
  *piVar3 = 0;
  sub_08011B04(param_1);
  uVar6 = *(undefined4 *)(param_1 + 0xbf8);
  sub_08046DD0(param_1,uVar6,0xe00);
  sub_0803D63C(uVar6);
  sub_0803E4A0(&DAT_03003e5c,*(undefined4 *)(param_1 + 0xbfc));
  sub_08011C0C(param_1,0xb,0);
  return;
}


/* sub_08011E80 @ 0x08011E80 */

undefined * sub_08011E80(uint param_1)

{
  return &UNK_08072830 + (param_1 >> 0xc & 0xc | param_1 >> 0x1e) * 8;
}


/* sub_08011E94 @ 0x08011E94 */

void sub_08011E94(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_1 + 0x40c);
  iVar3 = *piVar4 + -1;
  if (-1 < iVar3) {
    piVar5 = (int *)(param_1 + 4);
    do {
      iVar2 = *piVar5;
      piVar1 = (int *)piVar4[iVar3 + 1];
      *piVar5 = iVar2 + 1;
      piVar5[iVar2 + 1] = (int)piVar1;
      __call_via_r1(piVar1,*(int *)(*piVar1 + 0x20) + *piVar1);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *piVar4 = 0;
  return;
}


/* sub_08011EC8 @ 0x08011EC8 */

void sub_08011EC8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if (*(int **)(iVar3 * 4 + param_1 + 4 + 4) == param_2) goto _08011EEC;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  iVar3 = -1;
_08011EEC:
  iVar2 = *(int *)(*param_2 + 0x1c);
  __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_0804FE54(param_1 + 4,iVar3);
  piVar1 = (int *)(param_1 + 0x40c);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  piVar1[iVar3 + 1] = (int)param_2;
  return;
}


/* sub_08011F20 @ 0x08011F20 */

undefined4 sub_08011F20(uint param_1)

{
  if ((param_1 != 0) && (param_1 != 7)) {
    if ((int)param_1 < 8) {
      param_1 = (uint)*(byte *)((int)&DAT_086b82fa +
                               (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18 +
                               param_1 + 1);
    }
    return *(undefined4 *)(&gUnknown_086F393C + param_1 * 4);
  }
  return 0;
}


/* sub_08011F5A @ 0x08011F5A */

undefined4 * sub_08011F5A(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iStack_80;
  undefined2 uStack_7c;
  undefined4 uStack_3c;
  undefined4 *puStack_28;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049E84;
    param_1[1] = param_3;
    iStack_80 = 0;
    uStack_3c = 0;
    ScriptVM_Run(&iStack_80,param_2,*(undefined4 *)(param_4 + 0x14));
    if (iStack_80 == 1) {
      *(undefined2 *)param_1[1] = uStack_7c;
    }
    if (puStack_28 != *(undefined4 **)(param_4 + 0x14)) {
      *(undefined4 *)(param_4 + 0x18) = *puStack_28;
      *(undefined4 *)(param_4 + 0x1c) = puStack_28[1];
      *(undefined4 *)(param_4 + 0x20) = puStack_28[2];
      *(undefined4 *)(param_4 + 0x24) = puStack_28[3];
      *(int *)(param_4 + 0x14) = param_4 + 0x18;
    }
  }
  return param_1;
}


/* sub_08011FC6 @ 0x08011FC6 */

int sub_08011FC6(int param_1,int param_2,int param_3,int param_4)

{
  sub_08049120(param_1 + 8,param_2 + 4,param_3,param_4);
  return param_1 + 8;
}


/* sub_08011FD6 @ 0x08011FD6 */

undefined4 * sub_08011FD6(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int a2;
  int a3;
  int iVar1;
  
  a2 = param_3;
  a3 = param_4;
  iVar1 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x808), param_1 != (undefined4 *)0x0)) {
    sub_08049120((int)(param_1 + 2),param_2 + 4,a2,a3);
    sub_08011F5A(param_1,param_1 + 2,param_3,param_4,iVar1);
    *param_1 = &_0804CD74;
  }
  return param_1;
}


/* sub_08012012 @ 0x08012012 */

undefined4 * sub_08012012(undefined4 *param_1,short *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049E90;
    sub_08011732(&DAT_03001c4c,0x1000);
    uStack_1c = sub_0801124C(&DAT_03001c4c,0x1000);
    sub_08011732(&DAT_03001c4c,0x1000);
    uStack_1a = sub_0801124C(&DAT_03001c4c,0x1000);
    if ((param_3 != 0) && (param_3 != 7)) {
      sub_08011732(&DAT_03001c4c,0x1000);
      uStack_16 = sub_0801124C(&DAT_03001c4c,0x1000);
    }
    sub_08011732(&DAT_03001c4c,0x800);
    uStack_18 = sub_0801124C(&DAT_03001c4c,0x800);
    uStack_24 = 0x78;
    uStack_20 = 0x28;
    if (param_3 == 0) {
      uStack_20 = 0x78;
    }
    else if (param_3 == 1) {
      if (-1 < *(int *)(param_4 + 4)) {
        uStack_20 = 0x78;
      }
    }
    else if (*(int *)(param_4 + 4) < 0) {
      uStack_20 = 0x78;
    }
    if (*param_2 == 0x21) {
      uStack_20 = 0x28;
      param_2 = param_2 + 1;
    }
    if (*param_2 == 0x40) {
      uStack_20 = 0x50;
      param_2 = param_2 + 1;
    }
    if (*param_2 == 0x23) {
      uStack_20 = 0x78;
      param_2 = param_2 + 1;
    }
    uVar1 = sub_0800B188(0,&uStack_1c,param_2,&uStack_24);
    param_1[1] = uVar1;
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return param_1;
}


/* sub_08012166 @ 0x08012166 */

undefined4 sub_08012166(int param_1)

{
  int iVar1;
  
  iVar1 = sub_0800B32C(*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
    sub_08011E94(&DAT_03001c4c);
    return 1;
  }
  return 0;
}


/* sub_080121A8 @ 0x080121A8 */

int sub_080121A8(int param_1,int param_2)

{
  undefined1 *local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [64];
  undefined4 local_38;
  
  local_7c = 0;
  local_38 = 0;
  ScriptVM_Run(&local_7c,param_2 + 8);
  local_80 = auStack_78;
  sub_0803DB7C(param_1 + 8,*(undefined4 *)(param_2 + 4),&local_80);
  return param_1 + 8;
}


/* sub_080121D8 @ 0x080121D8 */

undefined4 * sub_080121D8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [64];
  undefined4 uStack_4c;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1008), param_1 != (undefined4 *)0x0)) {
    uStack_90 = 0;
    uStack_4c = 0;
    ScriptVM_Run(&uStack_90,param_2 + 8,param_4);
    puStack_94 = auStack_8c;
    sub_0803DB7C(param_1 + 2,*(undefined4 *)(param_2 + 4),&puStack_94);
    puStack_94 = (undefined1 *)0x0;
    sub_08012012(param_1,param_1 + 2,*(undefined1 *)(param_2 + 3),uStack_1c);
    *param_1 = &_0804D0BC;
  }
  return param_1;
}


/* Text_LoadString @ 0x08012230 */

int Text_LoadString(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_0803D5B8(0x10000);
  Wfz_LoadContainer(*(undefined4 *)
                     ((int)&gTextBankTable + ((uint)(*(int *)(param_2 + 4) << 0x1a) >> 0x18)),iVar1)
  ;
  sub_08049144(param_1 + 8,((*(uint *)(param_2 + 4) << 0xb) >> 0x11) * 2 + iVar1,
               (*(uint *)(param_2 + 4) >> 0x15) << 1);
  *(undefined2 *)((*(uint *)(param_2 + 4) >> 0x15) * 2 + param_1 + 8) = 0;
  sub_0803D63C(iVar1);
  return param_1 + 8;
}


/* sub_0801227E @ 0x0801227E */

undefined4 * sub_0801227E(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x1008), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  uVar1 = Text_LoadString(param_1,param_2);
  sub_08012012(param_1,uVar1,*(undefined1 *)(param_2 + 3),param_3);
  *param_1 = &_0804CD80;
  return param_1;
}


/* Text_LoadString2 @ 0x080122B4 */

int Text_LoadString2(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *local_1090;
  undefined4 local_108c;
  undefined1 auStack_1088 [64];
  undefined4 local_1048;
  undefined2 auStack_1020 [2048];
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  
  local_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  iVar1 = sub_0803D5B8(0x10000);
  Wfz_LoadContainer(*(undefined4 *)
                     ((int)&gTextBankTable + ((uint)(*(int *)(param_2 + 4) << 0x1a) >> 0x18)),iVar1)
  ;
  sub_08049144((int)auStack_1020,((*(uint *)(param_2 + 4) << 0xb) >> 0x11) * 2 + iVar1,
               (*(uint *)(param_2 + 4) >> 0x15) << 1);
  auStack_1020[*(uint *)(param_2 + 4) >> 0x15] = 0;
  sub_0803D63C(iVar1);
  local_108c = 0;
  local_1048 = 0;
  ScriptVM_Run(&local_108c,param_2 + 8,local_18);
  local_1090 = auStack_1088;
  iVar1 = local_20 + 8;
  sub_0803DB7C(iVar1,auStack_1020,&local_1090);
  return iVar1;
}


/* sub_08012334 @ 0x08012334 */

undefined4 * sub_08012334(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1008), param_1 != (undefined4 *)0x0)) {
    uVar1 = Text_LoadString2(param_1,param_2,param_4);
    sub_08012012(param_1,uVar1,*(undefined1 *)(param_2 + 3),param_3,uVar2);
    *param_1 = &_0804E27C;
  }
  return param_1;
}


/* sub_0801236E @ 0x0801236E */

undefined4 * sub_0801236E(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804A7C4;
    uVar1 = sub_08030C16(0,param_2 + 4);
    param_1[1] = uVar1;
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return param_1;
}


/* sub_080123A2 @ 0x080123A2 */

undefined4 sub_080123A2(int param_1)

{
  int iVar1;
  
  iVar1 = __call_via_r1(*(int *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 4) + 0x60));
  if (iVar1 != 0) {
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
    return 1;
  }
  return 0;
}


/* sub_080123E8 @ 0x080123E8 */

void sub_080123E8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011F5A(0,param_2 + 3,param_1 + 8,param_1,param_4);
  return;
}


/* sub_080123FA @ 0x080123FA */

void sub_080123FA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011FD6(0,param_2,param_1 + 8,param_1,param_4);
  return;
}


/* sub_0801240A @ 0x0801240A */

void sub_0801240A(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08012012(0,param_2 + 4,*(undefined1 *)(param_2 + 3),param_1 + 0xc,param_4);
  return;
}


/* sub_0801241C @ 0x0801241C */

void sub_0801241C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_080121D8(0,param_2,param_1 + 0xc,*(undefined4 *)(param_1 + 0x14),param_4);
  return;
}


/* sub_0801242C @ 0x0801242C */

void sub_0801242C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0801227E(0,param_2,param_1 + 0xc,param_4,param_4);
  return;
}


/* sub_08012430 @ 0x08012430 */

void sub_08012430(void)

{
  sub_0801227E(0);
  return;
}


/* sub_0801243A @ 0x0801243A */

void sub_0801243A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08012334(0,param_2,param_1 + 0xc,*(undefined4 *)(param_1 + 0x14),param_4);
  return;
}


/* sub_0801244A @ 0x0801244A */

void sub_0801244A(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 2) = 0;
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AEB0;
  }
  return;
}


/* sub_08012464 @ 0x08012464 */

void sub_08012464(void)

{
  sub_0801236E(0);
  return;
}


/* sub_0801246E @ 0x0801246E */

undefined4 *
sub_0801246E(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x2c), param_1 != (undefined4 *)0x0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar1 = param_4[1];
    param_1[3] = *param_4;
    param_1[4] = uVar1;
    param_1[10] = 0;
    if (param_5 == (undefined4 *)0x0) {
      param_5 = param_1 + 6;
    }
    param_1[5] = param_5;
    if (DAT_03002a5c == 0) {
      DAT_03002a58 = 0;
    }
    DAT_03002a5c = DAT_03002a5c + 1;
    *(undefined2 *)(param_1 + 2) = *param_3;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    sub_08011C0C(&DAT_03001c4c,0xf,0);
  }
  return param_1;
}


/* sub_080124D2 @ 0x080124D2 */

void sub_080124D2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03002a5c = DAT_03002a5c + -1;
  sub_08011C0C(&DAT_03001c4c,0x10,0,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080124F8 @ 0x080124F8 */

undefined4 sub_080124F8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  
  do {
    if (param_1[10] != 0) {
      iVar2 = *(int *)param_1[10];
      iVar2 = __call_via_r1((int *)param_1[10],*(int *)(iVar2 + 8) + iVar2);
      if (iVar2 != 0) {
        piVar1 = (int *)param_1[10];
        if (piVar1 != (int *)0x0) {
          __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
        }
        param_1[10] = 0;
      }
      return 0;
    }
    while( true ) {
      puVar3 = *(undefined2 **)(*param_1 + (uint)*(ushort *)(param_1 + 2) * 4);
      if ((uint)puVar3 >> 0x10 == 0) {
        *(short *)(param_1 + 2) = (short)puVar3;
        if (DAT_03002a58 == 0) {
          *(short *)param_1[1] = (short)puVar3;
        }
        return 1;
      }
      *(undefined2 *)(param_1 + 2) = *puVar3;
      piVar1 = (int *)__call_via_r2(param_1,puVar3,
                                    (&PTR_sub_080123E8_1_080728ac)[*(byte *)(puVar3 + 1)]);
      param_1[10] = (int)piVar1;
      iVar2 = __call_via_r1(piVar1,*(int *)(*piVar1 + 4) + *piVar1);
      if (iVar2 != 0) break;
      piVar1 = (int *)param_1[10];
      if (piVar1 != (int *)0x0) {
        __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
      }
      param_1[10] = 0;
    }
  } while( true );
}


/* sub_08012588 @ 0x08012588 */

void sub_08012588(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [44];
  undefined2 local_c [2];
  
  local_c[0] = 0;
  sub_0801246E(auStack_38,param_1,local_c,&DAT_080728a4,param_2);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D18;
    puVar1[1] = auStack_38;
  }
  sub_0803D8A0(puVar1);
  DAT_03002a5c = DAT_03002a5c + -1;
  sub_08011C0C(&DAT_03001c4c,0x10,0);
  return;
}


/* sub_080125E0 @ 0x080125E0 */

undefined4 sub_080125E0(void)

{
  return 0x1c4;
}


/* sub_080125E6 @ 0x080125E6 */

void sub_080125E6(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  __call_via_r3(param_2,param_3,iVar1,*(int *)(iVar1 + 4) + iVar1,param_4);
  return;
}


/* sub_080125E8 @ 0x080125E8 */

void sub_080125E8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  __call_via_r3(param_2,param_3,iVar1,*(int *)(iVar1 + 4) + iVar1,param_4);
  return;
}


/* sub_080125FA @ 0x080125FA */

void sub_080125FA(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CF94;
    puVar1[1] = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 4);
    puVar1[3] = *(undefined4 *)(param_1 + 8);
    puVar1[2] = uVar2;
  }
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  *(undefined2 *)(param_1 + 4) = 0x8000;
  *(undefined2 *)(param_1 + 6) = 0x8000;
  *(undefined2 *)(param_1 + 8) = 0x7fff;
  *(undefined2 *)(param_1 + 10) = 0x7fff;
  return;
}


/* sub_08012628 @ 0x08012628 */

void sub_08012628(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  while (iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)param_1[iVar2];
    iVar2 = iVar1;
    if (piVar3 != (int *)0x0) {
      __call_via_r2(piVar3,1,*(int *)*piVar3 + *piVar3);
    }
  }
  *param_1 = 0;
  param_1[0x34] = 1;
  param_1[0x31] = 1;
  param_1[0x33] = 0;
  param_1[0x32] = param_1[0x32] + 1;
  return;
}


/* sub_08012664 @ 0x08012664 */

void sub_08012664(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  for (param_2 = param_2 + -1; -1 < param_2; param_2 = param_2 + -1) {
    puVar1 = *(undefined4 **)(param_3 + param_2 * 4);
    iVar2 = __call_via_r1(puVar1,*puVar1);
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    param_1[iVar3 + 1] = iVar2;
  }
  return;
}


/* sub_0801268A @ 0x0801268A */

void sub_0801268A(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if ((int *)param_1[iVar1 + 1] == param_2) goto _080126AA;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = -1;
_080126AA:
  *param_1 = iVar2 + -1;
  iVar2 = (iVar2 + -1) - iVar1;
  if (iVar2 != 0) {
    sub_08049138((int)(param_1 + iVar1 + 1),(int)(param_1 + iVar1 + 2),iVar2 * 4);
  }
  if (param_2 != (int *)0x0) {
    __call_via_r2(param_2,1,*(int *)*param_2 + *param_2);
  }
  return;
}


/* sub_080126D4 @ 0x080126D4 */

void sub_080126D4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  
  if (((param_1[0x34] != 0) && (param_2 != (int *)0x0)) &&
     (iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2),
     *(short *)(iVar2 + 0x16) != 0)) {
    iVar2 = param_2[0x68] >> 8;
    uVar7 = CONCAT22((short)((uint)param_2[0x69] >> 8),(short)((uint)param_2[0x68] >> 8));
    param_1[0x31] = param_1[0x31] + 1;
    param_1[0x33] = 1;
    iVar9 = iVar2;
    iVar6 = *param_1;
    do {
      iVar1 = iVar6;
      iVar6 = iVar1 + -1;
      if (iVar6 < 0) goto _080127A6;
      iVar3 = param_1[iVar1];
    } while ((((short)uVar7 < *(short *)(iVar3 + 4)) || (*(short *)(iVar3 + 8) <= (short)uVar7)) ||
            ((sVar8 = (short)((uint)uVar7 >> 0x10), sVar8 < *(short *)(iVar3 + 6) ||
             ((*(short *)(iVar3 + 10) <= sVar8 ||
              (iVar5 = **(int **)(iVar3 + 0xc),
              iVar3 = __call_via_r3(*(int **)(iVar3 + 0xc),iVar3,param_2,*(int *)(iVar5 + 8) + iVar5
                                    ,iVar2,uVar7,iVar9), iVar3 == 0))))));
    piVar4 = *(int **)(param_1[iVar1] + 0xc);
    iVar6 = *piVar4;
    __call_via_r3(piVar4,param_1[iVar1],param_2,*(int *)(iVar6 + 4) + iVar6,iVar2,uVar7,iVar9);
_080127A6:
    param_1[0x33] = 0;
  }
  return;
}


/* sub_08012700 @ 0x08012700 */

void sub_08012700(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  char in_ZR;
  int iStack00000000;
  short sStack00000004;
  short sStack00000006;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  
  if (in_ZR == '\0') {
    iStack00000000 = *(int *)(unaff_r5 + 0x1a0) >> 8;
    iStack0000000c = *(int *)(unaff_r5 + 0x1a4) >> 8;
    sStack00000004 = (short)((uint)*(int *)(unaff_r5 + 0x1a0) >> 8);
    sStack00000006 = (short)((uint)*(int *)(unaff_r5 + 0x1a4) >> 8);
    *(int *)(unaff_r7 + 4) = *(int *)(unaff_r7 + 4) + 1;
    *(undefined4 *)(unaff_r7 + 0xc) = 1;
    iStack00000008 = iStack00000000;
    iVar4 = *unaff_r6;
    do {
      iVar1 = iVar4;
      iVar4 = iVar1 + -1;
      if (iVar4 < 0) goto _080127A6;
      iStack00000010 = unaff_r6[iVar1];
    } while ((((sStack00000004 < *(short *)(iStack00000010 + 4)) ||
              (*(short *)(iStack00000010 + 8) <= sStack00000004)) ||
             (sStack00000006 < *(short *)(iStack00000010 + 6))) ||
            ((*(short *)(iStack00000010 + 10) <= sStack00000006 ||
             (iVar3 = **(int **)(iStack00000010 + 0xc),
             iVar3 = __call_via_r3(*(int **)(iStack00000010 + 0xc),iStack00000010,unaff_r5,
                                   *(int *)(iVar3 + 8) + iVar3), iVar3 == 0))));
    piVar2 = *(int **)(unaff_r6[iVar1] + 0xc);
    iVar4 = *piVar2;
    __call_via_r3(piVar2,unaff_r6[iVar1],unaff_r5,*(int *)(iVar4 + 4) + iVar4);
_080127A6:
    *(undefined4 *)(unaff_r7 + 0xc) = 0;
  }
  return;
}


/* sub_080127AE @ 0x080127AE */

undefined4 sub_080127AE(int *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    sVar1 = (short)((uint)*(undefined4 *)(param_2 + 0x1a0) >> 8);
    sVar2 = (short)((uint)*(undefined4 *)(param_2 + 0x1a4) >> 8);
    iVar3 = *param_1;
    do {
      iVar6 = iVar3 + -1;
      if (iVar6 < 0) {
        return 0;
      }
      iVar5 = param_1[iVar3];
      iVar3 = iVar6;
    } while ((((sVar1 < *(short *)(iVar5 + 4)) || (*(short *)(iVar5 + 8) <= sVar1)) ||
             (sVar2 < *(short *)(iVar5 + 6))) ||
            ((*(short *)(iVar5 + 10) <= sVar2 ||
             (iVar6 = **(int **)(iVar5 + 0xc),
             iVar6 = __call_via_r2(*(int **)(iVar5 + 0xc),param_2,*(int *)(iVar6 + 0xc) + iVar6),
             iVar6 == 0))));
    uVar4 = 1;
  }
  return uVar4;
}


/* sub_08012846 @ 0x08012846 */

void sub_08012846(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *param_1) {
    do {
      piVar6 = (int *)param_1[iVar7 + 1];
      iVar2 = piVar6[2];
      sVar1 = *(short *)((int)piVar6 + 10);
      iVar3 = (short)piVar6[1] + 0xf;
      iVar5 = *(short *)((int)piVar6 + 6) + 7;
      if ((((iVar3 < DAT_030019c4) && (DAT_030019bc < (short)iVar2)) && (iVar5 < DAT_030019c8)) &&
         ((DAT_030019c0 < sVar1 &&
          (iVar4 = __call_via_r1(piVar6,*(int *)(*piVar6 + 8) + *piVar6), iVar4 != 0)))) {
        iVar4 = *param_2;
        *param_2 = iVar4 + 1;
        param_2[iVar4 * 7 + 5] = 0;
        param_2[iVar4 * 7 + 1] = iVar3;
        param_2[iVar4 * 7 + 2] = iVar5;
        param_2[iVar4 * 7 + 3] = (int)(short)iVar2;
        param_2[iVar4 * 7 + 4] = (int)sVar1;
        *(undefined1 *)(param_2 + iVar4 * 7 + 6) = 1;
        param_2[iVar4 * 7 + 7] = (int)piVar6;
        if (*param_2 == 0x10) {
          return;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_1);
  }
  return;
}


/* sub_08012900 @ 0x08012900 */

void sub_08012900(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *param_1;
  while (iVar2 = iVar1, iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)param_1[iVar2];
    iVar4 = __call_via_r1(piVar3,*(int *)(*piVar3 + 0xc) + *piVar3);
    if (iVar4 == 0) {
      iVar4 = *param_1;
      *param_1 = iVar4 + -1;
      iVar4 = (iVar4 + -1) - iVar1;
      if (iVar4 != 0) {
        sub_08049138((int)(param_1 + iVar2),(int)(param_1 + iVar2 + 1),iVar4 * 4);
      }
      if (piVar3 != (int *)0x0) {
        __call_via_r2(piVar3,1,*(int *)*piVar3 + *piVar3);
      }
    }
  }
  param_1[0x31] = 1;
  param_1[0x33] = 0;
  param_1[0x32] = param_1[0x32] + 1;
  return;
}


/* sub_08012960 @ 0x08012960 */

void sub_08012960(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  int iStack_20;
  int *piStack_1c;
  int iStack_18;
  
  local_24 = param_2 + 1;
  local_2c = *param_2 >> 8;
  local_28 = *local_24 >> 8;
  iStack_20 = param_1;
  piStack_1c = param_2;
  iStack_18 = param_3;
  iVar1 = sub_080097C2(&DAT_030019a4,&local_2c);
  piVar3 = (int *)(param_1 + 0x1a0);
  piVar2 = (int *)(param_1 + 0x1a4);
  if (iVar1 == 0) {
    iStack_30 = *param_2;
    if ((iStack_18 << 0x1f < 0) && (((local_2c & 7) < 2 || (5 < (local_2c & 7))))) {
      uStack_38 = local_2c + 4 & 0xfffffff8;
      uStack_34 = local_28;
      iVar1 = sub_080097C2(&DAT_030019a4,&uStack_38,param_1 + 0x19c);
      if (iVar1 != 0) {
        iVar1 = param_2[1];
        *piVar3 = uStack_38 << 8;
        *piVar2 = iVar1;
        iStack_30 = uStack_38 << 8;
        local_2c = uStack_38;
      }
    }
    if ((iStack_18 << 0x1e < 0) && (((local_28 & 7) < 2 || (5 < (local_28 & 7))))) {
      uStack_38 = local_2c;
      uStack_34 = local_28 + 4 & 0xfffffff8;
      iVar1 = sub_080097C2(&DAT_030019a4,&uStack_38,param_1 + 0x19c);
      if (iVar1 != 0) {
        *piVar3 = iStack_30;
        *piVar2 = uStack_34 << 8;
      }
    }
  }
  else {
    *piVar3 = *param_2;
    *piVar2 = *local_24;
  }
  return;
}


/* sub_08012A24 @ 0x08012A24 */

void sub_08012A24(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iStack_64;
  int iStack_60;
  undefined1 auStack_5c [4];
  int local_58;
  int *local_54;
  int local_50;
  int *local_4c;
  undefined1 local_48 [4];
  undefined1 auStack_44 [12];
  int iStack_38;
  int local_34;
  int local_30;
  undefined *local_2c;
  int *local_28;
  int iStack_24;
  int *local_18;
  
  piVar3 = param_1 + 0x68;
  piVar4 = param_1 + 0x69;
  local_18 = param_1;
  if (DAT_03001988 == 0) {
    iStack_38 = *piVar3 >> 8;
    local_34 = *piVar4 >> 8;
    local_30 = iStack_38;
    local_2c = (undefined *)local_34;
    sub_08052FD4(&local_28,&UNK_083c340c + (uint)*(byte *)(param_1 + 4) * 0x10,&local_30);
    sub_08011C70(&DAT_03001c4c,3,&local_28);
  }
  else {
    local_34 = CONCAT31(local_34._1_3_,(char)param_1[4]);
    local_2c = &gUnknown_086B8098;
    local_30 = 0x400;
    local_48[0] = 1;
    local_58 = *piVar3 >> 8;
    local_54 = (int *)(*piVar4 >> 8);
    local_50 = local_58;
    local_4c = local_54;
    local_28 = param_1;
    sub_08052FD4(auStack_44,&UNK_083c344c + (uint)*(byte *)(param_1 + 4) * 0x10,&local_50);
    iVar2 = sub_08011C0C(&DAT_03001c4c,0,local_48);
    if (iVar2 == 0) {
      iStack_64 = *piVar3 >> 8;
      iStack_60 = *piVar4 >> 8;
      sub_08052FD4(auStack_5c,&UNK_083c340c + (uint)*(byte *)(param_1 + 4) * 0x10,&iStack_64);
      local_4c = param_1;
      iVar2 = sub_08011C70(&DAT_03001c4c,3,auStack_5c);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = sub_080127AE(&DAT_03002a64,param_1);
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      iVar2 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
      if (iStack_24 != 0) {
        sub_0800797C(0xf,0x4b);
      }
    }
    iVar2 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
    if (*(short *)(iVar2 + 0x16) != 0) {
      cVar1 = sub_0803FACC(3);
      __call_via_r2(param_1,cVar1 + '\x04',*(int *)(*param_1 + 0x28) + *param_1);
    }
  }
  return;
}


/* sub_08012B5E @ 0x08012B5E */

void sub_08012B5E(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
  iVar2 = sub_080135A2(iVar1,*(undefined1 *)(iVar1 + 0x15));
  iVar3 = __call_via_r1(iVar1,*(undefined4 *)(iVar2 + 0x10));
  if (iVar3 != 0) {
    __call_via_r2(iVar1,param_1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}


/* sub_08012B90 @ 0x08012B90 */

void sub_08012B90(undefined4 param_1,int param_2)

{
  sub_0800DE60();
  *(undefined4 *)(param_2 + 0x1c8) = 1;
  return;
}


/* sub_08012BA2 @ 0x08012BA2 */

void sub_08012BA2(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 8));
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_08012BC6 @ 0x08012BC6 */

void sub_08012BC6(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = __call_via_r1(param_2,*(int *)(iVar3 + 0x84) + iVar3,iVar3,param_4,param_4);
    if ((int)((uint)*(ushort *)(iVar3 + 2) << 0x17) < 0) {
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (((int)((uint)*(ushort *)(iVar3 + 4) << 0x1e) < 0) &&
         (iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2),
         *(short *)(iVar3 + 0x1a) != 0)) {
        uVar2 = sub_0801DFE0(0,param_2);
        *(undefined4 *)(param_1 + 8) = uVar2;
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  else {
    iVar3 = __call_via_r1(param_2,*(int *)(iVar3 + 0x80) + iVar3,iVar3,param_4,param_4);
    iVar1 = *(int *)(param_1 + 4) + ((uint)*(byte *)(iVar3 + 0x57) * 0x3277 >> 4);
    *(int *)(param_1 + 4) = iVar1;
    sub_08013504(iVar3,iVar1 >> 0x10);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff;
    if (*(short *)(iVar3 + 0x1a) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x44) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(*param_2 + 0x84);
      iVar3 = __call_via_r1(param_2,iVar3 + *param_2,iVar3,0,param_4);
      if (((int)((uint)*(ushort *)(iVar3 + 2) << 0x1e) < 0) &&
         (iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2),
         (int)((uint)*(ushort *)(iVar3 + 2) << 0x17) < 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined4 *)(iVar1 + 0x44) = uVar2;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x40);
    if ((iVar3 == 0) && (*(int *)(*(int *)(param_1 + 8) + 0x44) == 0)) {
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 2) << 0x17) < 0) {
        sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    else if (iVar3 < 0x18) {
      *(undefined1 *)((int)param_2 + 0x1b9) = 0x80;
      *(undefined1 *)(param_2 + 0x6e) = 0x80;
    }
    else {
      *(undefined1 *)((int)param_2 + 0x1b9) = 0;
      *(undefined1 *)(param_2 + 0x6e) = 0;
    }
  }
  return;
}


/* sub_08012C06 @ 0x08012C06 */

void sub_08012C06(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r4;
  int *unaff_r5;
  int iVar3;
  
  if (*(short *)(param_1 + 0x1a) == 0) {
    *(undefined4 *)(*(int *)(unaff_r4 + 8) + 0x44) = 0;
  }
  else {
    iVar3 = *(int *)(unaff_r4 + 8);
    iVar2 = __call_via_r1(unaff_r5,*(int *)(*unaff_r5 + 0x84) + *unaff_r5);
    if (((int)((uint)*(ushort *)(iVar2 + 2) << 0x1e) < 0) &&
       (iVar2 = __call_via_r1(unaff_r5,*(int *)(*unaff_r5 + 0x84) + *unaff_r5),
       (int)((uint)*(ushort *)(iVar2 + 2) << 0x17) < 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(undefined4 *)(iVar3 + 0x44) = uVar1;
  }
  iVar2 = *(int *)(*(int *)(unaff_r4 + 8) + 0x40);
  if ((iVar2 == 0) && (*(int *)(*(int *)(unaff_r4 + 8) + 0x44) == 0)) {
    iVar2 = __call_via_r1(unaff_r5,*(int *)(*unaff_r5 + 0x84) + *unaff_r5);
    if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x17) < 0) {
      sub_08011944(&DAT_03001c4c,*(undefined4 *)(unaff_r4 + 8));
      *(undefined4 *)(unaff_r4 + 8) = 0;
    }
    else {
      __call_via_r2(unaff_r5,0,*(int *)(*unaff_r5 + 0x28) + *unaff_r5);
    }
  }
  else if (iVar2 < 0x18) {
    *(undefined1 *)((int)unaff_r5 + 0x1b9) = 0x80;
    *(undefined1 *)(unaff_r5 + 0x6e) = 0x80;
  }
  else {
    *(undefined1 *)((int)unaff_r5 + 0x1b9) = 0;
    *(undefined1 *)(unaff_r5 + 0x6e) = 0;
  }
  return;
}


