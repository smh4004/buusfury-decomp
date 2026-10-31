/* Ghidra reference decompilation of code_0805249C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0805249C @ 0x0805249C */

void sub_0805249C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080524B4 @ 0x080524B4 */

void sub_080524B4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080524CC @ 0x080524CC */

void sub_080524CC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080524E4 @ 0x080524E4 */

void sub_080524E4(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080524F8 @ 0x080524F8 */

void sub_080524F8(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_0805250C @ 0x0805250C */

void sub_0805250C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052538 @ 0x08052538 */

void sub_08052538(undefined4 *param_1,int param_2)

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


/* sub_08052574 @ 0x08052574 */

void sub_08052574(undefined4 *param_1,int param_2)

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


/* sub_080525B0 @ 0x080525B0 */

void sub_080525B0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800EC34(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080525C8 @ 0x080525C8 */

void sub_080525C8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800EC34(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080525E0 @ 0x080525E0 */

void sub_080525E0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1b0);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 4);
    __call_via_r1(piVar1,iVar2 + *piVar1,iVar2,param_4,param_4);
  }
  piVar1 = *(int **)(param_1 + 0x18c);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  sub_0800EC34(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052624 @ 0x08052624 */

void sub_08052624(undefined4 *param_1,int param_2)

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


/* sub_08052660 @ 0x08052660 */

void sub_08052660(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052674 @ 0x08052674 */

void sub_08052674(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0804CFB8;
  iVar1 = *(int *)param_1[1];
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1((int *)param_1[1],iVar2 + iVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805269C @ 0x0805269C */

void sub_0805269C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080526B4 @ 0x080526B4 */

void sub_080526B4(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080526C8 @ 0x080526C8 */

void sub_080526C8(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080526DC @ 0x080526DC */

void sub_080526DC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18c);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  sub_0800EC34(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0805270C @ 0x0805270C */

void sub_0805270C(undefined4 *param_1,int param_2)

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


/* sub_08052748 @ 0x08052748 */

void sub_08052748(undefined4 *param_1,int param_2)

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


/* sub_08052784 @ 0x08052784 */

void sub_08052784(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052798 @ 0x08052798 */

void sub_08052798(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080527AC @ 0x080527AC */

void sub_080527AC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080527C4 @ 0x080527C4 */

void sub_080527C4(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804984C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_080527D8 @ 0x080527D8 */

void sub_080527D8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080527F0 @ 0x080527F0 */

void sub_080527F0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052808 @ 0x08052808 */

void sub_08052808(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_08049ACC;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052834 @ 0x08052834 */

void sub_08052834(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_08049ACC;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052860 @ 0x08052860 */

void sub_08052860(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052874 @ 0x08052874 */

void sub_08052874(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052888 @ 0x08052888 */

void sub_08052888(undefined4 *param_1,int param_2)

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


/* sub_080528C4 @ 0x080528C4 */

void sub_080528C4(undefined4 *param_1,int param_2)

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


/* sub_08052900 @ 0x08052900 */

void sub_08052900(undefined4 *param_1,int param_2)

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


/* sub_0805293C @ 0x0805293C */

void sub_0805293C(undefined4 *param_1,int param_2)

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


/* sub_08052978 @ 0x08052978 */

void sub_08052978(undefined4 *param_1,int param_2)

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


/* sub_080529B4 @ 0x080529B4 */

void sub_080529B4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080529CC @ 0x080529CC */

void sub_080529CC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080529E4 @ 0x080529E4 */

void sub_080529E4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080529FC @ 0x080529FC */

void sub_080529FC(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052A10 @ 0x08052A10 */

void sub_08052A10(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052A24 @ 0x08052A24 */

void sub_08052A24(undefined4 *param_1,int param_2)

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


/* sub_08052A60 @ 0x08052A60 */

void sub_08052A60(undefined4 *param_1,int param_2)

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


/* sub_08052A9C @ 0x08052A9C */

void sub_08052A9C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F58C(param_1 + 7,0,param_3,param_4,param_4);
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


/* sub_08052AE0 @ 0x08052AE0 */

void sub_08052AE0(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052AF4 @ 0x08052AF4 */

void sub_08052AF4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052B0C @ 0x08052B0C */

void sub_08052B0C(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052B20 @ 0x08052B20 */

void sub_08052B20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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


/* sub_08052B60 @ 0x08052B60 */

void sub_08052B60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08010B80(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052B78 @ 0x08052B78 */

void sub_08052B78(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052B90 @ 0x08052B90 */

void sub_08052B90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052BA8 @ 0x08052BA8 */

void sub_08052BA8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052BC0 @ 0x08052BC0 */

void sub_08052BC0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052BD8 @ 0x08052BD8 */

void sub_08052BD8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052BF0 @ 0x08052BF0 */

void sub_08052BF0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052C08 @ 0x08052C08 */

void sub_08052C08(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052C20 @ 0x08052C20 */

void sub_08052C20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052C38 @ 0x08052C38 */

void sub_08052C38(undefined4 *param_1,int param_2)

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


/* sub_08052C74 @ 0x08052C74 */

void sub_08052C74(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08010B80(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052C8C @ 0x08052C8C */

void sub_08052C8C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052CA4 @ 0x08052CA4 */

void sub_08052CA4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052CBC @ 0x08052CBC */

void sub_08052CBC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052CD4 @ 0x08052CD4 */

void sub_08052CD4(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052CE8 @ 0x08052CE8 */

void sub_08052CE8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052D14 @ 0x08052D14 */

void sub_08052D14(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08034294(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052D2C @ 0x08052D2C */

void sub_08052D2C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052D44 @ 0x08052D44 */

void sub_08052D44(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052D4C @ 0x08052D4C */

void sub_08052D4C(void)

{
  undefined4 unaff_r4;
  int unaff_r5;
  
  sub_08050D30();
  if (unaff_r5 != 0) {
    sub_0803D63C(unaff_r4);
  }
  return;
}


/* sub_08052D5C @ 0x08052D5C */

void sub_08052D5C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052D74 @ 0x08052D74 */

void sub_08052D74(undefined4 *param_1,int param_2)

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


/* sub_08052DB0 @ 0x08052DB0 */

void sub_08052DB0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08010B80(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052DC8 @ 0x08052DC8 */

void sub_08052DC8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050D30(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052DE0 @ 0x08052DE0 */

void sub_08052DE0(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052DF4 @ 0x08052DF4 */

void sub_08052DF4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052E20 @ 0x08052E20 */

void sub_08052E20(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804984C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052E34 @ 0x08052E34 */

void sub_08052E34(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052E48 @ 0x08052E48 */

void sub_08052E48(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0802573C(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08052E60 @ 0x08052E60 */

void sub_08052E60(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


/* sub_08052E74 @ 0x08052E74 */

void sub_08052E74(undefined4 *param_1,int param_2)

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


/* sub_08052EB0 @ 0x08052EB0 */

void sub_08052EB0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  return;
}


/* sub_08052EC8 @ 0x08052EC8 */

void sub_08052EC8(undefined4 *param_1)

{
  *param_1 = &_0804E454;
  return;
}


/* sub_08052ED4 @ 0x08052ED4 */

void sub_08052ED4(undefined4 *param_1)

{
  *param_1 = &_0804E47C;
  return;
}


/* sub_08052EE0 @ 0x08052EE0 */

undefined4 sub_08052EE0(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(*param_1 + 8);
  bVar2 = *(byte *)(*param_2 + 8);
  if (bVar1 != bVar2) {
    if (bVar2 < bVar1) {
      return 1;
    }
    return 0;
  }
  if (*(int *)(*param_1 + 4) < *(int *)(*param_2 + 4)) {
    return 1;
  }
  return 0;
}


/* sub_08052F08 @ 0x08052F08 */

int * sub_08052F08(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *param_2;
  iVar7 = *param_3;
  iVar8 = param_2[1];
  iVar3 = param_3[1];
  iVar4 = param_2[2];
  iVar5 = param_3[2];
  iVar1 = param_2[3];
  iVar2 = param_3[3];
  *param_1 = (((iVar7 * iVar6 - iVar3 * iVar8) - iVar5 * iVar4) - iVar2 * iVar1) + 0x4000 >> 0xf;
  param_1[3] = ((iVar2 * iVar6 + iVar7 * iVar1 + iVar5 * iVar8) - iVar3 * iVar4) + 0x4000 >> 0xf;
  param_1[1] = ((iVar3 * iVar6 + iVar7 * iVar8 + iVar2 * iVar4) - iVar5 * iVar1) + 0x4000 >> 0xf;
  param_1[2] = ((iVar5 * iVar6 + iVar7 * iVar4 + iVar3 * iVar1) - iVar2 * iVar8) + 0x4000 >> 0xf;
  return param_1 + 3;
}


/* sub_08052FB4 @ 0x08052FB4 */

void sub_08052FB4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  param_1[1] = param_2[1] + param_3[1];
  *param_1 = iVar1 + iVar2;
  return;
}


/* sub_08052FD4 @ 0x08052FD4 */

int * sub_08052FD4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_2[1];
  iVar4 = param_3[1];
  iVar5 = param_2[2];
  iVar6 = *param_3;
  iVar1 = param_2[3];
  iVar2 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = iVar3 + iVar4;
  param_1[2] = iVar5 + iVar6;
  param_1[3] = iVar1 + iVar2;
  return param_1 + 4;
}


/* sub_08053010 @ 0x08053010 */

int sub_08053010(int param_1)

{
  return param_1 % 10;
}


/* sub_08053014 @ 0x08053014 */

int sub_08053014(int param_1)

{
  return param_1 % 10;
}


/* sub_08053034 @ 0x08053034 */

int sub_08053034(int param_1)

{
  return param_1 % 100;
}


/* sub_08053038 @ 0x08053038 */

int sub_08053038(int param_1)

{
  return param_1 % 100;
}


/* sub_08053058 @ 0x08053058 */

int sub_08053058(int param_1)

{
  return param_1 % 1000;
}


/* sub_0805305C @ 0x0805305C */

int sub_0805305C(int param_1)

{
  return param_1 % 1000;
}


/* sub_08053080 @ 0x08053080 */

int sub_08053080(int param_1)

{
  return param_1 % 0xc;
}


/* sub_08053084 @ 0x08053084 */

int sub_08053084(int param_1)

{
  return param_1 % 0xc;
}


/* sub_080530A4 @ 0x080530A4 */

int sub_080530A4(int param_1)

{
  return param_1 % 3;
}


/* sub_080530A8 @ 0x080530A8 */

int sub_080530A8(int param_1)

{
  return param_1 % 3;
}


/* sub_080530C8 @ 0x080530C8 */

int sub_080530C8(int param_1)

{
  return param_1 % 0xe10;
}


/* sub_080530CC @ 0x080530CC */

int sub_080530CC(int param_1)

{
  return param_1 % 0xe10;
}


/* sub_080530F4 @ 0x080530F4 */

int sub_080530F4(int param_1)

{
  return param_1 % 0x3c;
}


/* sub_080530F8 @ 0x080530F8 */

int sub_080530F8(int param_1)

{
  return param_1 % 0x3c;
}


/* sub_0805311C @ 0x0805311C */

uint sub_0805311C(uint param_1)

{
  return param_1 % 10;
}


/* sub_08053120 @ 0x08053120 */

uint sub_08053120(uint param_1)

{
  return param_1 % 10;
}


/* sub_0805313C @ 0x0805313C */

uint sub_0805313C(uint param_1)

{
  return param_1 % 0x3c;
}


/* sub_08053140 @ 0x08053140 */

uint sub_08053140(uint param_1)

{
  return param_1 % 0x3c;
}


/* sub_0805315C @ 0x0805315C */

uint sub_0805315C(uint param_1)

{
  return param_1 % 6000;
}


/* sub_08053160 @ 0x08053160 */

uint sub_08053160(uint param_1)

{
  return param_1 % 6000;
}


/* sub_08053180 @ 0x08053180 */

uint sub_08053180(uint param_1)

{
  return param_1 % 0xfff1;
}


/* sub_08053184 @ 0x08053184 */

uint sub_08053184(uint param_1)

{
  return param_1 % 0xfff1;
}


/* sub_080531A4 @ 0x080531A4 */

void sub_080531A4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
_080531A6:
  if (param_1 < param_2) {
    puVar3 = param_1 + ((int)param_2 - (int)param_1 >> 3);
    if (param_1 != puVar3) {
      iVar1 = sub_08052EE0(puVar3,param_1);
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *puVar3;
        *puVar3 = uVar2;
      }
      iVar1 = sub_08052EE0(param_1,param_2);
      puVar3 = param_2;
      puVar4 = param_1;
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
      do {
        iVar1 = sub_08052EE0(puVar3,param_1);
        while (iVar1 != 0) {
          puVar3 = puVar3 + -1;
          iVar1 = sub_08052EE0(puVar3,param_1);
        }
        do {
          puVar4 = puVar4 + 1;
          if (puVar3 <= puVar4) {
            uVar2 = *param_1;
            *param_1 = *puVar3;
            *puVar3 = uVar2;
            sub_080531A4(param_1,puVar3 + -1);
            param_1 = puVar3 + 1;
            goto _080531A6;
          }
          iVar1 = sub_08052EE0(param_1,puVar4);
        } while (iVar1 != 0);
        uVar2 = *puVar4;
        *puVar4 = *puVar3;
        *puVar3 = uVar2;
        puVar3 = puVar3 + -1;
      } while( true );
    }
    iVar1 = sub_08052EE0(param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
  }
  return;
}


/* sub_0805324E @ 0x0805324E */

int * sub_0805324E(int *param_1,int *param_2,int *param_3)

{
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_1c = *param_3;
  if (*param_3 < *param_2) {
    iStack_1c = *param_2;
  }
  iStack_18 = param_3[1];
  if (param_3[1] < param_2[1]) {
    iStack_18 = param_2[1];
  }
  iStack_14 = param_3[2];
  if (param_2[2] < param_3[2]) {
    iStack_14 = param_2[2];
  }
  iStack_10 = param_3[3];
  if (param_2[3] < param_3[3]) {
    iStack_10 = param_2[3];
  }
  *param_1 = iStack_1c;
  param_1[1] = iStack_18;
  param_1[2] = iStack_14;
  param_1[3] = iStack_10;
  return param_1 + 4;
}


/* sub_08053250 @ 0x08053250 */

int * sub_08053250(int *param_1,int *param_2,int *param_3)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = *param_3;
  if (*param_3 < *param_2) {
    local_1c = *param_2;
  }
  local_18 = param_3[1];
  if (param_3[1] < param_2[1]) {
    local_18 = param_2[1];
  }
  local_14 = param_3[2];
  if (param_2[2] < param_3[2]) {
    local_14 = param_2[2];
  }
  local_10 = param_3[3];
  if (param_2[3] < param_3[3]) {
    local_10 = param_2[3];
  }
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  param_1[3] = local_10;
  return param_1 + 4;
}


/* sub_08053292 @ 0x08053292 */

void sub_08053292(int *param_1,int *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[2] < *param_2) {
    param_1[2] = *param_2;
  }
  if (param_1[3] < param_2[1]) {
    param_1[3] = param_2[1];
  }
  return;
}


/* sub_08053294 @ 0x08053294 */

void sub_08053294(int *param_1,int *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[2] < *param_2) {
    param_1[2] = *param_2;
  }
  if (param_1[3] < param_2[1]) {
    param_1[3] = param_2[1];
  }
  return;
}


/* sub_080532BE @ 0x080532BE */

undefined4 sub_080532BE(int *param_1,int *param_2)

{
  if ((((*param_1 < param_2[2]) && (*param_2 < param_1[2])) && (param_1[1] < param_2[3])) &&
     (param_2[1] < param_1[3])) {
    return 1;
  }
  return 0;
}


/* sub_080532C0 @ 0x080532C0 */

undefined4 sub_080532C0(int *param_1,int *param_2)

{
  if ((((*param_1 < param_2[2]) && (*param_2 < param_1[2])) && (param_1[1] < param_2[3])) &&
     (param_2[1] < param_1[3])) {
    return 1;
  }
  return 0;
}


/* sub_080532E8 @ 0x080532E8 */

/* WARNING: Removing unreachable block (ram,0x080539ac) */

undefined * sub_080532E8(undefined *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 in_lr;
  bool bVar10;
  
  puVar7 = (undefined *)((uint)param_2 & 0x80000000);
  uVar4 = (uint)param_2 & 0x7fffffff;
  uVar6 = uVar4 ^ uVar4 << 1;
  if ((uVar6 & 0x7f000000) == 0 && (uVar6 & 0xe00000) == 0) {
    if (((uint)param_2 & 0x100000) == 0) {
      if (param_1 == (undefined *)0x0 && uVar4 == 0) {
        return puVar7;
      }
      puVar2 = (uint *)sub_08047A2C();
      if ((*puVar2 & 0x800) == 0) {
        uVar4 = 0x100000;
      }
      else {
        iVar5 = 0;
        if (uVar4 == 0) {
          uVar4 = (uint)param_1 >> 0xb;
          param_1 = (undefined *)((int)param_1 << 0x15);
          iVar5 = -0x1500000;
        }
        if (uVar4 >> 5 == 0) {
          uVar4 = uVar4 << 0x10 | (uint)param_1 >> 0x10;
          param_1 = (undefined *)((int)param_1 << 0x10);
          iVar5 = iVar5 + -0x1000000;
        }
        if (uVar4 >> 0xd == 0) {
          uVar4 = uVar4 << 8 | (uint)param_1 >> 0x18;
          param_1 = (undefined *)((int)param_1 << 8);
          iVar5 = iVar5 + -0x800000;
        }
        if (uVar4 >> 0x11 == 0) {
          uVar4 = uVar4 << 4 | (uint)param_1 >> 0x1c;
          param_1 = (undefined *)((int)param_1 << 4);
          iVar5 = iVar5 + -0x400000;
        }
        if (uVar4 >> 0x13 == 0) {
          uVar4 = uVar4 << 2 | (uint)param_1 >> 0x1e;
          param_1 = (undefined *)((int)param_1 << 2);
          iVar5 = iVar5 + -0x200000;
        }
        if (uVar4 >> 0x14 == 0) {
          uVar4 = uVar4 << 1 | (uint)param_1 >> 0x1f;
          param_1 = (undefined *)((int)param_1 << 1);
          iVar5 = iVar5 + -0x100000;
        }
        uVar4 = uVar4 + iVar5;
      }
      goto _08053304;
    }
    puVar3 = (undefined *)((uint)param_1 | (int)param_2 << 0xc);
    puVar8 = &UNK_04000088;
    if (puVar3 == (undefined *)0x0) {
      return (undefined *)((uint)param_2 & 0xff8fffff);
    }
    if (((uint)param_2 & 0x80000) == 0) goto sub_08054850;
    puVar7 = (undefined *)0x0;
sub_08054E78:
    uVar4 = (uint)puVar8 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1;
      }
      if (uVar4 == 8 && ((uint)puVar8 & 0x40) == 0) {
        if (((uint)puVar8 & 0x10) == 0) {
          puVar7 = (undefined *)0x7fc00000;
        }
        else {
          puVar7 = (undefined *)0x0;
        }
        return puVar7;
      }
      if (((uint)puVar8 & 0x10000) != 0) {
        return (undefined *)0x0;
      }
      if (((uint)puVar8 & 0x20) == 0) {
        if (((uint)puVar8 & 0x10) == 0) {
          puVar7 = (undefined *)0x7fffffff;
          param_2 = param_1;
        }
        else {
          puVar7 = (undefined *)0xffffffff;
        }
        if (((uint)param_2 & 0x80000000) != 0) {
          puVar7 = (undefined *)~(uint)puVar7;
        }
        return puVar7;
      }
      puVar3 = (undefined *)0xffffffff;
      if (puVar7 != (undefined *)0x0) {
        puVar3 = (undefined *)0x0;
      }
      return puVar3;
    }
    puVar7 = (undefined *)0x8;
    goto sub_08054F3C;
  }
_08053304:
  puVar8 = (undefined *)0xc0000000;
  bVar10 = (bool)((byte)((uint)param_1 >> 0x1c) & 1);
  puVar3 = (undefined *)((int)param_1 << 4);
  if (bVar10 && puVar3 != (undefined *)0x0) {
_08053328:
    puVar8 = (undefined *)0x40000000;
    bVar10 = (undefined *)0xdfffffff < param_1;
    param_1 = param_1 + 0x20000000;
    uVar4 = uVar4 + bVar10;
  }
  else if (bVar10) {
    puVar3 = (undefined *)((uint)param_1 & 0x20000000);
    puVar8 = (undefined *)((int)puVar3 * 4 + -0x40000000);
    if (-1 < (int)puVar8) goto _08053328;
  }
  else if (puVar3 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  iVar5 = uVar4 + 0xc8000000;
  if (iVar5 < 0x100000) {
    uVar4 = uVar4 + 0xd4000000;
    puVar3 = puVar8;
    puVar1 = (undefined4 *)sub_08047A2C();
    if (((uint)*puVar1 & 0x800) == 0) {
      if ((int)uVar4 < 0x100000) {
        uVar4 = uVar4 & 0xffffff;
      }
      puVar7 = (undefined *)((uint)puVar7 | uVar4 << 3);
      param_1 = (undefined *)((uint)puVar7 | (uint)param_1 >> 0x1d);
      puVar2 = (uint *)sub_08047A2C();
      param_2 = (undefined *)*puVar2;
      if (((uint)param_2 & 0x1000000) != 0) {
        return (undefined *)((uint)param_1 & 0x80000000);
      }
      if (((uint)param_2 & 0x800) == 0) {
        puVar7 = (undefined *)
                 (0xc1 - ((uint)param_1 & 0x80000000 | (uint)param_1 >> 0x17 & 0xfffffeff));
        if (((uint)puVar7 & 0x7fffffff) < 0x18) {
          puVar8 = (undefined *)((int)param_1 << (0x20U - (int)puVar7 & 0xff));
          uVar4 = 0x20 - (0x20U - (int)puVar7);
          puVar7 = (undefined *)(uVar4 & 0x80000000);
          param_1 = (undefined *)
                    (((uint)param_1 & 0xffffff | 0x800000) >> (uVar4 & 0xff) | (uint)puVar7);
          if (puVar8 == (undefined *)0x0) {
            param_2 = (undefined *)0x0;
            puVar8 = puVar3;
            if (((uint)puVar3 & 0x40000000) == 0) {
              return param_1;
            }
          }
          else {
            *puVar2 = *puVar2 | 8;
            param_2 = (undefined *)((int)puVar8 << 1);
            if (SUB41((uint)puVar8 >> 0x1f,0)) {
              if (param_2 == (undefined *)0x0) {
                bVar10 = (bool)((byte)((uint)puVar3 >> 0x1e) & 1);
                puVar8 = (undefined *)~((int)puVar3 >> 0x1f);
                if (!bVar10 || puVar8 == (undefined *)0x0) {
                  param_1 = param_1 + 1;
                }
                if (!bVar10) {
                  param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
                }
              }
              else {
                param_1 = param_1 + 1;
              }
            }
            puVar7 = puVar8;
            puVar8 = (undefined *)((uint)puVar3 | 0x40000000);
          }
        }
        else {
          param_2 = (undefined *)(*puVar2 | 8);
          *puVar2 = (uint)param_2;
          if (SBORROW4((uint)puVar7 & 0x7fffffff,-0x7fffffe7)) {
            param_1 = (undefined *)((uint)puVar7 & 0x80000000);
          }
          else {
            uVar4 = (uint)param_1 & 0x7fffff;
            param_1 = (undefined *)((uint)puVar7 & 0x80000000) + 1;
            if (uVar4 == 0 && ((uint)puVar3 & 0x80000000) == 0) {
              param_1 = (undefined *)((uint)puVar7 & 0x80000000);
            }
          }
          puVar8 = (undefined *)0x40000000;
        }
        goto sub_08054850;
      }
      puVar8 = (undefined *)((uint)puVar3 | 0x20000000);
    }
    else {
      puVar8 = (undefined *)((uint)puVar3 | 0x20000088);
      param_2 = (undefined *)(uVar4 + 0x38000000 | (uint)puVar7);
      param_1 = (undefined *)((uint)param_1 & 0xe0000000);
      puVar3 = (undefined *)*puVar1;
    }
  }
  else {
    if (iVar5 < 0xff00000) {
      return (undefined *)((uint)puVar7 | iVar5 * 8 | (uint)param_1 >> 0x1d);
    }
    param_1 = (undefined *)((uint)param_1 & 0xe0000000);
    param_2 = (undefined *)(uVar4 + 0xf4000000 | (uint)puVar7);
    puVar8 = (undefined *)((uint)puVar8 | 0x10000088);
sub_08054850:
    if (((uint)puVar8 & 0x10) == 0) {
      puVar3 = param_2;
    }
    puVar2 = (uint *)sub_08047A2C();
    uVar4 = *puVar2;
    if (((uint)puVar8 & ~(uVar4 << 0x12) & 0x30000000) != 0) {
      puVar8 = (undefined *)((uint)puVar8 | 0x40000000);
    }
    puVar9 = (undefined *)((uint)puVar8 | uVar4 & 0x1c00000);
    *puVar2 = uVar4 | (uint)((int)puVar8 << 1) >> 0x1b;
    bVar10 = ((uint)puVar8 & 0xf) != 8;
    if (bVar10) {
      uVar6 = (uint)puVar8 & 0x70;
      puVar8 = (undefined *)((uint)puVar9 | uVar6 << 3);
    }
    else {
      uVar6 = 0x20000;
      puVar8 = puVar9;
    }
    if (!bVar10 && (uVar6 & ~(uint)puVar8) == 0) {
      puVar8 = (undefined *)((uint)puVar8 | 0xc00000);
    }
    if (((uint)puVar8 & 0x20000000) == 0) {
      if (((uint)puVar8 & 0x10000000) == 0) {
        if (((uint)puVar8 & 0x40000000) != 0) {
          uVar4 = uVar4 & 0x1000;
          goto joined_r0x08054900;
        }
        if (((uint)puVar8 & 0x8000000) == 0) {
          if ((uVar4 & 0x100) == 0) {
            puVar7 = param_2;
            if (((uint)puVar8 & 0x80) == 0) {
              puVar7 = param_1;
            }
            puVar7 = (undefined *)((uint)puVar7 & 0x80000000);
            if (((uint)puVar8 & 0x10) == 0) {
              param_1 = (undefined *)((uint)puVar7 | 0x7fc00000);
            }
            else {
              param_1 = (undefined *)0x0;
              param_2 = puVar7;
            }
            goto sub_08054E78;
          }
        }
        else if ((uVar4 & 0x200) == 0) {
          if (((uint)puVar8 & 0x10) == 0) {
            uVar4 = (uint)param_1 ^ (uint)puVar3;
          }
          else {
            uVar4 = (uint)param_2 ^ (uint)puVar7;
          }
          goto _08054948;
        }
      }
      else if ((uVar4 & 0x400) == 0) {
        if (((uint)puVar8 & 0x80) == 0) {
          uVar4 = (uint)param_1 & 0x80000000;
        }
        else {
          uVar4 = (uint)param_2 & 0x80000000;
        }
_08054948:
        if (((uint)puVar8 & 0x10) == 0) {
          puVar7 = (undefined *)(uVar4 & 0x80000000 | 0x7f800000);
        }
        else {
          puVar7 = (undefined *)0x0;
        }
        return puVar7;
      }
    }
    else {
      uVar4 = uVar4 & 0x800;
joined_r0x08054900:
      if (uVar4 == 0) {
        return param_1;
      }
    }
  }
  puVar7 = (undefined *)sub_080491E4(param_1,param_2,puVar3,puVar7,puVar8,in_lr,puVar8,in_lr);
  if (((uint)puVar8 & 0xf) != 9) {
    return puVar7;
  }
sub_08054F3C:
  if (((uint)puVar8 & 0x100000) == 0) {
    puVar8 = (undefined *)((uint)puVar8 & (int)puVar7 << 0x10);
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)0x1;
    }
    return puVar8;
  }
  if (((uint)puVar8 & 0xf0000) != 0) {
    if (((uint)puVar7 & 8) == 0) {
      return (undefined *)(2 - (int)puVar7);
    }
    return puVar7;
  }
  uVar4 = (int)puVar7 << 0x1d;
  if ((bool)((byte)((uint)puVar7 >> 3) & 1)) {
    uVar4 = uVar4 | 0x30000000;
  }
  puVar2 = (uint *)sub_08047A2C();
  *puVar2 = *puVar2 & 0xfffffff | uVar4;
  return puVar7;
}


/* sub_080532EC @ 0x080532EC */

/* WARNING: Removing unreachable block (ram,0x080539ac) */

undefined * sub_080532EC(undefined *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 in_lr;
  bool bVar10;
  
  puVar7 = (undefined *)((uint)param_2 & 0x80000000);
  uVar4 = (uint)param_2 & 0x7fffffff;
  uVar6 = uVar4 ^ uVar4 << 1;
  if ((uVar6 & 0x7f000000) == 0 && (uVar6 & 0xe00000) == 0) {
    if (((uint)param_2 & 0x100000) == 0) {
      if (param_1 == (undefined *)0x0 && uVar4 == 0) {
        return puVar7;
      }
      puVar2 = (uint *)sub_08047A2C();
      if ((*puVar2 & 0x800) == 0) {
        uVar4 = 0x100000;
      }
      else {
        iVar5 = 0;
        if (uVar4 == 0) {
          uVar4 = (uint)param_1 >> 0xb;
          param_1 = (undefined *)((int)param_1 << 0x15);
          iVar5 = -0x1500000;
        }
        if (uVar4 >> 5 == 0) {
          uVar4 = uVar4 << 0x10 | (uint)param_1 >> 0x10;
          param_1 = (undefined *)((int)param_1 << 0x10);
          iVar5 = iVar5 + -0x1000000;
        }
        if (uVar4 >> 0xd == 0) {
          uVar4 = uVar4 << 8 | (uint)param_1 >> 0x18;
          param_1 = (undefined *)((int)param_1 << 8);
          iVar5 = iVar5 + -0x800000;
        }
        if (uVar4 >> 0x11 == 0) {
          uVar4 = uVar4 << 4 | (uint)param_1 >> 0x1c;
          param_1 = (undefined *)((int)param_1 << 4);
          iVar5 = iVar5 + -0x400000;
        }
        if (uVar4 >> 0x13 == 0) {
          uVar4 = uVar4 << 2 | (uint)param_1 >> 0x1e;
          param_1 = (undefined *)((int)param_1 << 2);
          iVar5 = iVar5 + -0x200000;
        }
        if (uVar4 >> 0x14 == 0) {
          uVar4 = uVar4 << 1 | (uint)param_1 >> 0x1f;
          param_1 = (undefined *)((int)param_1 << 1);
          iVar5 = iVar5 + -0x100000;
        }
        uVar4 = uVar4 + iVar5;
      }
      goto _08053304;
    }
    puVar3 = (undefined *)((uint)param_1 | (int)param_2 << 0xc);
    puVar8 = &UNK_04000088;
    if (puVar3 == (undefined *)0x0) {
      return (undefined *)((uint)param_2 & 0xff8fffff);
    }
    if (((uint)param_2 & 0x80000) == 0) goto sub_08054850;
    puVar7 = (undefined *)0x0;
sub_08054E78:
    uVar4 = (uint)puVar8 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1;
      }
      if (uVar4 == 8 && ((uint)puVar8 & 0x40) == 0) {
        if (((uint)puVar8 & 0x10) == 0) {
          puVar7 = (undefined *)0x7fc00000;
        }
        else {
          puVar7 = (undefined *)0x0;
        }
        return puVar7;
      }
      if (((uint)puVar8 & 0x10000) != 0) {
        return (undefined *)0x0;
      }
      if (((uint)puVar8 & 0x20) == 0) {
        if (((uint)puVar8 & 0x10) == 0) {
          puVar7 = (undefined *)0x7fffffff;
          param_2 = param_1;
        }
        else {
          puVar7 = (undefined *)0xffffffff;
        }
        if (((uint)param_2 & 0x80000000) != 0) {
          puVar7 = (undefined *)~(uint)puVar7;
        }
        return puVar7;
      }
      puVar3 = (undefined *)0xffffffff;
      if (puVar7 != (undefined *)0x0) {
        puVar3 = (undefined *)0x0;
      }
      return puVar3;
    }
    puVar7 = (undefined *)0x8;
    goto sub_08054F3C;
  }
_08053304:
  puVar8 = (undefined *)0xc0000000;
  bVar10 = (bool)((byte)((uint)param_1 >> 0x1c) & 1);
  puVar3 = (undefined *)((int)param_1 << 4);
  if (bVar10 && puVar3 != (undefined *)0x0) {
_08053328:
    puVar8 = (undefined *)0x40000000;
    bVar10 = (undefined *)0xdfffffff < param_1;
    param_1 = param_1 + 0x20000000;
    uVar4 = uVar4 + bVar10;
  }
  else if (bVar10) {
    puVar3 = (undefined *)((uint)param_1 & 0x20000000);
    puVar8 = (undefined *)((int)puVar3 * 4 + -0x40000000);
    if (-1 < (int)puVar8) goto _08053328;
  }
  else if (puVar3 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  iVar5 = uVar4 + 0xc8000000;
  if (iVar5 < 0x100000) {
    uVar4 = uVar4 + 0xd4000000;
    puVar3 = puVar8;
    puVar1 = (undefined4 *)sub_08047A2C();
    if (((uint)*puVar1 & 0x800) == 0) {
      if ((int)uVar4 < 0x100000) {
        uVar4 = uVar4 & 0xffffff;
      }
      puVar7 = (undefined *)((uint)puVar7 | uVar4 << 3);
      param_1 = (undefined *)((uint)puVar7 | (uint)param_1 >> 0x1d);
      puVar2 = (uint *)sub_08047A2C();
      param_2 = (undefined *)*puVar2;
      if (((uint)param_2 & 0x1000000) != 0) {
        return (undefined *)((uint)param_1 & 0x80000000);
      }
      if (((uint)param_2 & 0x800) == 0) {
        puVar7 = (undefined *)
                 (0xc1 - ((uint)param_1 & 0x80000000 | (uint)param_1 >> 0x17 & 0xfffffeff));
        if (((uint)puVar7 & 0x7fffffff) < 0x18) {
          puVar8 = (undefined *)((int)param_1 << (0x20U - (int)puVar7 & 0xff));
          uVar4 = 0x20 - (0x20U - (int)puVar7);
          puVar7 = (undefined *)(uVar4 & 0x80000000);
          param_1 = (undefined *)
                    (((uint)param_1 & 0xffffff | 0x800000) >> (uVar4 & 0xff) | (uint)puVar7);
          if (puVar8 == (undefined *)0x0) {
            param_2 = (undefined *)0x0;
            puVar8 = puVar3;
            if (((uint)puVar3 & 0x40000000) == 0) {
              return param_1;
            }
          }
          else {
            *puVar2 = *puVar2 | 8;
            param_2 = (undefined *)((int)puVar8 << 1);
            if (SUB41((uint)puVar8 >> 0x1f,0)) {
              if (param_2 == (undefined *)0x0) {
                bVar10 = (bool)((byte)((uint)puVar3 >> 0x1e) & 1);
                puVar8 = (undefined *)~((int)puVar3 >> 0x1f);
                if (!bVar10 || puVar8 == (undefined *)0x0) {
                  param_1 = param_1 + 1;
                }
                if (!bVar10) {
                  param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
                }
              }
              else {
                param_1 = param_1 + 1;
              }
            }
            puVar7 = puVar8;
            puVar8 = (undefined *)((uint)puVar3 | 0x40000000);
          }
        }
        else {
          param_2 = (undefined *)(*puVar2 | 8);
          *puVar2 = (uint)param_2;
          if (SBORROW4((uint)puVar7 & 0x7fffffff,-0x7fffffe7)) {
            param_1 = (undefined *)((uint)puVar7 & 0x80000000);
          }
          else {
            uVar4 = (uint)param_1 & 0x7fffff;
            param_1 = (undefined *)((uint)puVar7 & 0x80000000) + 1;
            if (uVar4 == 0 && ((uint)puVar3 & 0x80000000) == 0) {
              param_1 = (undefined *)((uint)puVar7 & 0x80000000);
            }
          }
          puVar8 = (undefined *)0x40000000;
        }
        goto sub_08054850;
      }
      puVar8 = (undefined *)((uint)puVar3 | 0x20000000);
    }
    else {
      puVar8 = (undefined *)((uint)puVar3 | 0x20000088);
      param_2 = (undefined *)(uVar4 + 0x38000000 | (uint)puVar7);
      param_1 = (undefined *)((uint)param_1 & 0xe0000000);
      puVar3 = (undefined *)*puVar1;
    }
  }
  else {
    if (iVar5 < 0xff00000) {
      return (undefined *)((uint)puVar7 | iVar5 * 8 | (uint)param_1 >> 0x1d);
    }
    param_1 = (undefined *)((uint)param_1 & 0xe0000000);
    param_2 = (undefined *)(uVar4 + 0xf4000000 | (uint)puVar7);
    puVar8 = (undefined *)((uint)puVar8 | 0x10000088);
sub_08054850:
    if (((uint)puVar8 & 0x10) == 0) {
      puVar3 = param_2;
    }
    puVar2 = (uint *)sub_08047A2C();
    uVar4 = *puVar2;
    if (((uint)puVar8 & ~(uVar4 << 0x12) & 0x30000000) != 0) {
      puVar8 = (undefined *)((uint)puVar8 | 0x40000000);
    }
    puVar9 = (undefined *)((uint)puVar8 | uVar4 & 0x1c00000);
    *puVar2 = uVar4 | (uint)((int)puVar8 << 1) >> 0x1b;
    bVar10 = ((uint)puVar8 & 0xf) != 8;
    if (bVar10) {
      uVar6 = (uint)puVar8 & 0x70;
      puVar8 = (undefined *)((uint)puVar9 | uVar6 << 3);
    }
    else {
      uVar6 = 0x20000;
      puVar8 = puVar9;
    }
    if (!bVar10 && (uVar6 & ~(uint)puVar8) == 0) {
      puVar8 = (undefined *)((uint)puVar8 | 0xc00000);
    }
    if (((uint)puVar8 & 0x20000000) == 0) {
      if (((uint)puVar8 & 0x10000000) == 0) {
        if (((uint)puVar8 & 0x40000000) != 0) {
          uVar4 = uVar4 & 0x1000;
          goto joined_r0x08054900;
        }
        if (((uint)puVar8 & 0x8000000) == 0) {
          if ((uVar4 & 0x100) == 0) {
            puVar7 = param_2;
            if (((uint)puVar8 & 0x80) == 0) {
              puVar7 = param_1;
            }
            puVar7 = (undefined *)((uint)puVar7 & 0x80000000);
            if (((uint)puVar8 & 0x10) == 0) {
              param_1 = (undefined *)((uint)puVar7 | 0x7fc00000);
            }
            else {
              param_1 = (undefined *)0x0;
              param_2 = puVar7;
            }
            goto sub_08054E78;
          }
        }
        else if ((uVar4 & 0x200) == 0) {
          if (((uint)puVar8 & 0x10) == 0) {
            uVar4 = (uint)param_1 ^ (uint)puVar3;
          }
          else {
            uVar4 = (uint)param_2 ^ (uint)puVar7;
          }
          goto _08054948;
        }
      }
      else if ((uVar4 & 0x400) == 0) {
        if (((uint)puVar8 & 0x80) == 0) {
          uVar4 = (uint)param_1 & 0x80000000;
        }
        else {
          uVar4 = (uint)param_2 & 0x80000000;
        }
_08054948:
        if (((uint)puVar8 & 0x10) == 0) {
          puVar7 = (undefined *)(uVar4 & 0x80000000 | 0x7f800000);
        }
        else {
          puVar7 = (undefined *)0x0;
        }
        return puVar7;
      }
    }
    else {
      uVar4 = uVar4 & 0x800;
joined_r0x08054900:
      if (uVar4 == 0) {
        return param_1;
      }
    }
  }
  puVar7 = (undefined *)sub_080491E4(param_1,param_2,puVar3,puVar7,puVar8,in_lr,puVar8,in_lr);
  if (((uint)puVar8 & 0xf) != 9) {
    return puVar7;
  }
sub_08054F3C:
  if (((uint)puVar8 & 0x100000) == 0) {
    puVar8 = (undefined *)((uint)puVar8 & (int)puVar7 << 0x10);
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)0x1;
    }
    return puVar8;
  }
  if (((uint)puVar8 & 0xf0000) != 0) {
    if (((uint)puVar7 & 8) == 0) {
      return (undefined *)(2 - (int)puVar7);
    }
    return puVar7;
  }
  uVar4 = (int)puVar7 << 0x1d;
  if ((bool)((byte)((uint)puVar7 >> 3) & 1)) {
    uVar4 = uVar4 | 0x30000000;
  }
  puVar2 = (uint *)sub_08047A2C();
  *puVar2 = *puVar2 & 0xfffffff | uVar4;
  return puVar7;
}


/* sub_080534A4 @ 0x080534A4 */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_080534A4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  if ((~(param_2 << 1) & 0xffe00000) == 0 || (~(param_4 << 1) & 0xffe00000) == 0) {
    uVar7 = param_2 * 2 + (uint)(param_1 != 0);
    if (uVar7 < 0xffe00001) {
      uVar7 = param_4 * 2 + (uint)(param_3 != 0);
    }
    uVar10 = 0x4000011;
    if (0xffe00000 < uVar7) {
      uVar8 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
      uVar7 = uVar8;
      if (uVar8 < 0xfff00001) {
        uVar7 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
      }
      if (0xfff00000 < uVar7) goto sub_08054850;
      if (0xfffff < uVar8) {
        param_1 = param_3;
        param_2 = param_4;
      }
sub_08054E78:
      uVar7 = uVar10 & 0xf;
      if (uVar7 != 9) {
        if (uVar7 != 8) {
          return param_1;
        }
        if (uVar7 == 8) {
          if ((uVar10 & 0x10) == 0) {
            uVar7 = 0x7fc00000;
          }
          else {
            uVar7 = 0;
          }
          return uVar7;
        }
        if ((uVar10 & 0x10) == 0) {
          uVar7 = 0x7fffffff;
          param_2 = param_1;
        }
        else {
          uVar7 = 0xffffffff;
        }
        if ((param_2 & 0x80000000) != 0) {
          uVar7 = ~uVar7;
        }
        return uVar7;
      }
      uVar7 = 8;
      goto sub_08054F3C;
    }
    iVar9 = param_2 * 2 + (uint)(param_1 != 0);
    if (iVar9 != param_4 * 2 + (uint)(param_3 != 0)) {
      if (iVar9 == -0x200000) {
        return 0;
      }
      return 0;
    }
    param_1 = 0;
    if (-1 < (int)(param_2 ^ param_4)) {
      return param_1;
    }
    param_3 = 0;
    uVar10 = 0x4000011;
sub_08054850:
    uVar6 = param_3;
    if ((uVar10 & 0x10) == 0) {
      uVar6 = param_2;
    }
    puVar5 = (uint *)sub_08047A2C();
    uVar7 = *puVar5;
    if ((uVar10 & ~(uVar7 << 0x12) & 0x30000000) != 0) {
      uVar10 = uVar10 | 0x40000000;
    }
    uVar8 = uVar10 | uVar7 & 0x1c00000;
    *puVar5 = uVar7 | (uVar10 << 1) >> 0x1b;
    bVar11 = (uVar10 & 0xf) != 8;
    if (bVar11) {
      uVar2 = uVar10 & 0x70;
      uVar10 = uVar8 | uVar2 << 3;
    }
    else {
      uVar2 = 0x20000;
      uVar10 = uVar8;
    }
    if (!bVar11 && (uVar2 & ~uVar10) == 0) {
      uVar10 = uVar10 | 0xc00000;
    }
    if ((uVar10 & 0x10000000) == 0) {
      if ((uVar10 & 0x40000000) == 0) {
        if ((uVar7 & 0x100) == 0) {
          uVar7 = param_2;
          if ((uVar10 & 0x80) == 0) {
            uVar7 = param_1;
          }
          if ((uVar10 & 0x10) == 0) {
            param_1 = uVar7 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar7 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar7 & 0x1000) == 0) {
        return param_1;
      }
    }
    else if ((uVar7 & 0x400) == 0) {
      if ((uVar10 & 0x80) == 0) {
        param_2 = param_1;
      }
      if ((uVar10 & 0x10) == 0) {
        uVar7 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar7 = 0;
      }
      return uVar7;
    }
  }
  else {
    if ((int)(param_2 ^ param_4) < 0) {
      param_4 = param_4 ^ 0x80000000;
      uVar7 = param_1 - param_3;
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        uVar10 = param_2 - (param_4 + (param_3 > param_1)) ^ 0x80000000;
        bVar11 = CARRY4(param_3,uVar7);
        param_3 = param_3 + uVar7;
        param_4 = param_4 + uVar10 + (uint)bVar11;
        bVar11 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = param_2 - (uVar10 + bVar11);
      }
      uVar7 = param_2 >> 0x14;
      uVar10 = uVar7 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) == 0) {
        if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
          if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
            return param_1;
          }
        }
        else {
          uVar8 = param_2 & ~(uVar7 << 0x14);
          if ((uVar7 & 0x7ff) != 0) {
            uVar10 = uVar10 - 1;
            iVar9 = -((param_4 & 0x7fffffff) + (uint)(param_3 != 0));
            goto _08053740;
          }
          bVar11 = param_1 < param_3;
          param_1 = param_1 - param_3;
          param_2 = uVar8 - (param_4 + bVar11);
        }
_080538B4:
        uVar10 = 0x12;
        goto _080538B8;
      }
      uVar8 = param_2 & ~(uVar7 << 0x14);
      iVar9 = -0x100000 - ((param_4 & 0xfffff) + (uint)(param_3 != 0));
_08053740:
      uVar6 = -param_3;
      uVar2 = 0x20 - uVar10;
      if (uVar10 < 0x21) {
        uVar4 = uVar6 >> (uVar10 & 0xff);
        uVar3 = param_1 + uVar4;
        uVar8 = uVar8 + (iVar9 >> (uVar10 & 0xff)) + (uint)CARRY4(param_1,uVar4);
        uVar10 = iVar9 << (uVar2 & 0xff);
        uVar4 = uVar3 + uVar10;
        bVar11 = CARRY4(uVar8,(uint)CARRY4(uVar3,uVar10));
        iVar9 = uVar8 + CARRY4(uVar3,uVar10);
      }
      else {
        param_3 = param_3 * -2;
        if (param_3 != 0) {
          param_3 = 1;
        }
        uVar6 = param_3 | (iVar9 * 2 + (uint)CARRY4(uVar6,uVar6)) * 2;
        uVar10 = uVar10 - 0x20;
        uVar2 = 0x1e - uVar10;
        if (0x1e < uVar10 || uVar2 == 0) {
          return param_1;
        }
        uVar10 = iVar9 >> (uVar10 & 0xff);
        uVar4 = param_1 + uVar10;
        bVar11 = uVar8 != 0 || uVar8 < CARRY4(param_1,uVar10);
        iVar9 = uVar8 - !CARRY4(param_1,uVar10);
      }
      if (-1 < iVar9) {
        iVar9 = uVar6 << (uVar2 & 0xff);
        if (-1 < iVar9) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        if (uVar4 != 0 && iVar9 != -0x80000000) {
          return uVar4;
        }
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 & 0xfffffffe;
        }
        return uVar4;
      }
      uVar10 = uVar2 + 1 & 0xff;
      bVar11 = uVar10 == 0 && bVar11 || uVar10 != 0 && (bool)((byte)(uVar6 >> 0x20 - uVar10) & 1);
      param_1 = uVar4 * 2 + (uint)bVar11;
      iVar9 = iVar9 * 2 + (uint)(CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11));
      uVar8 = iVar9 + uVar7 * 0x200000;
      bVar11 = (bool)((byte)(uVar8 >> 0x14) & 1);
      if (bVar11 && uVar8 >> 0x15 != 0) {
        uVar7 = -((int)(uVar6 << uVar10) >> 0x1f);
        uVar8 = param_1 + uVar7;
        bVar11 = uVar8 == 0;
        if (!CARRY4(param_1,uVar7)) {
          bVar11 = uVar6 << uVar10 == -0x80000000;
        }
        if (!bVar11) {
          return uVar8;
        }
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 & 0xfffffffe;
        }
        return uVar8;
      }
      if (bVar11) {
        param_1 = (uint)((byte)iVar9 & 1) << 0x1f | param_1 >> 1;
        param_2 = (iVar9 >> 1) + uVar7 * 0x100000;
        goto _080538B4;
      }
      uVar10 = iVar9 + 0x200000;
      if (uVar10 == 0 && param_1 == 0) {
        return param_1;
      }
      iVar9 = (uVar7 & 0xfffff7ff) - 2;
      do {
        bVar11 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar10 = uVar10 * 2 + (uint)bVar11;
        iVar9 = iVar9 + -1;
      } while ((uVar10 & 0x100000) == 0);
      if (0 < iVar9) {
        return param_1;
      }
      param_2 = uVar10 + (param_2 & 0x80000000) + iVar9 * 0x100000 + 0x60000000;
      puVar5 = (uint *)sub_08047A2C();
      uVar10 = 0x12;
      param_4 = *puVar5;
      if ((param_4 & 0x1000000) != 0) {
        return 0;
      }
      if ((param_4 & 0x800) == 0) {
        uVar7 = param_2 & ~((param_2 >> 0x14) << 0x14);
        iVar9 = -(param_2 >> 0x14 & 0xfffff7ff);
        uVar8 = iVar9 + 0x601;
        uVar10 = uVar7 | 0x100000;
        if (uVar8 < 0x36) {
          if (uVar8 == 0x35) {
            uVar8 = 0;
            uVar6 = 0x80000000;
            if (param_1 != 0 || (uVar7 & 0xfffff) != 0) {
              uVar6 = 0x80000001;
            }
          }
          else if (uVar8 < 0x15) {
            uVar6 = param_1 << (0x20 - uVar8 & 0xff);
            uVar8 = uVar10 << (0x20 - uVar8 & 0xff) | param_1 >> (uVar8 & 0xff);
          }
          else {
            uVar7 = iVar9 + 0x5e1;
            if (uVar8 < 0x20 || uVar7 == 0) {
              uVar8 = uVar10 << (-uVar7 & 0xff) | param_1 >> (uVar8 & 0xff);
              uVar6 = param_1 << (-uVar7 & 0xff);
            }
            else {
              uVar8 = uVar10 >> (uVar7 & 0xff);
              uVar6 = uVar10 << (0x20 - uVar7 & 0xff);
              if (param_1 != 0) {
                uVar6 = uVar6 | 1;
              }
            }
          }
        }
        else {
          uVar6 = 1;
          uVar8 = 0;
        }
        if (uVar6 != 0) {
          if (SUB41(uVar6 >> 0x1f,0)) {
            if ((uVar6 & 0x7fffffff) == 0) {
              uVar8 = uVar8 + 1 & 0xfffffffe;
            }
            else {
              uVar8 = uVar8 + 1;
            }
          }
          puVar5 = (uint *)sub_08047A2C();
          *puVar5 = *puVar5 | 8;
          return uVar8;
        }
        return uVar8;
      }
    }
    else {
      uVar7 = param_1 - param_3;
      iVar9 = param_2 - (param_4 + (param_3 > param_1));
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        bVar11 = CARRY4(param_3,uVar7);
        param_3 = param_3 + uVar7;
        param_4 = param_4 + iVar9 + (uint)bVar11;
        bVar11 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = param_2 - (iVar9 + (uint)bVar11);
      }
      uVar7 = param_2 >> 0x14;
      uVar10 = uVar7 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) != 0) {
        param_2 = param_2 & ~(uVar7 << 0x14);
        param_4 = param_4 & 0x1fffff | 0x100000;
_08053500:
        uVar8 = 0x20 - uVar10;
        if (uVar10 < 0x21) {
          uVar2 = param_3 >> (uVar10 & 0xff);
          bVar11 = CARRY4(param_1,uVar2);
          uVar2 = param_1 + uVar2;
          uVar6 = param_4 << (uVar8 & 0xff);
          param_1 = uVar2 + uVar6;
          uVar10 = param_2 + (param_4 >> (uVar10 & 0xff)) + (uint)bVar11 + (uint)CARRY4(uVar2,uVar6)
          ;
          if (uVar10 < 0x100000) {
            param_2 = uVar10 + uVar7 * 0x100000;
            goto _08053524;
          }
_08053588:
          param_2 = (uVar10 + 0x100000 >> 1) + uVar7 * 0x100000;
          bVar11 = (bool)((byte)param_1 & 1);
          param_1 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | param_1 >> 1;
          if (!bVar11) {
_080535C0:
            param_4 = param_2 * 2;
            if (param_4 < 0xffe00000) {
              return param_1;
            }
            uVar10 = 0x10000011;
            param_2 = param_2 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(param_1,(uint)bVar11);
          param_1 = param_1 + bVar11;
          uVar7 = param_1;
          if (!bVar1) {
            uVar7 = param_3 << (uVar8 & 0xff);
          }
          if (uVar7 != 0) goto _080535C0;
        }
        else {
          param_3 = param_4 * 2 + (uint)(param_3 != 0);
          uVar10 = uVar10 - 0x20;
          bVar11 = uVar10 < 0x20;
          uVar8 = 0x1f - uVar10;
          if (bVar11) {
            param_4 = param_4 >> (uVar10 & 0xff);
            bVar11 = CARRY4(param_1,param_4);
            param_1 = param_1 + param_4;
          }
          else {
            uVar8 = 0;
          }
          param_2 = param_2 + uVar7 * 0x100000 + (uint)bVar11;
          if (uVar7 != param_2 >> 0x14) {
            uVar10 = param_2 + uVar7 * -0x100000;
            goto _08053588;
          }
_08053524:
          param_3 = param_3 << (uVar8 & 0xff);
          if (-1 < (int)param_3) {
            return param_1;
          }
          bVar11 = param_1 != 0xffffffff;
          param_1 = param_1 + 1;
          uVar7 = param_1;
          if (bVar11) {
            param_3 = param_3 << 1;
            uVar7 = param_3;
          }
          if (uVar7 != 0) {
            return param_1;
          }
        }
        if (param_1 == 0) {
          param_2 = param_2 + 1;
          param_1 = 0;
        }
        else {
          param_1 = param_1 & 0xfffffffe;
        }
        param_4 = param_2 << 1;
        if (param_4 < 0xffe00000) {
          return param_1;
        }
        uVar10 = 0x10000011;
        if (param_4 >= 0xffe00000) {
          param_2 = param_2 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        if ((uVar7 & 0x7ff) != 0) {
          return param_1;
        }
        if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
          return param_1;
        }
        uVar10 = 0x11;
      }
      else {
        param_2 = param_2 & ~(uVar7 << 0x14);
        if ((uVar7 & 0x7ff) != 0) {
          param_4 = param_4 & 0x7fffffff;
          uVar10 = uVar10 - 1;
          goto _08053500;
        }
        bVar11 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + param_4 + (uint)bVar11;
        uVar10 = 0x11;
      }
_080538B8:
      if (param_2 << 1 == 0 && param_1 == 0) {
        return param_1;
      }
      if (0x1fffff < param_2 << 1) {
        return param_1;
      }
      puVar5 = (uint *)sub_08047A2C();
      if ((*puVar5 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar5 & 0x800) == 0) {
        return param_1;
      }
      uVar7 = param_2 >> 0x1f | 0x6000000;
      param_2 = param_2 & 0x7fffffff;
      if (param_2 == 0 && param_1 >> 0xc == 0) {
        param_1 = param_1 << 0x14;
        uVar7 = uVar7 - 0x140000;
      }
      uVar8 = param_1;
      if (param_2 == 0) {
        param_2 = param_1 >> 0xc;
        uVar8 = param_1 << 0x14;
        uVar7 = uVar7 - 0x140000;
      }
      uVar2 = 0;
      if (param_2 >> 5 == 0) {
        param_2 = param_2 << 0x10;
        uVar2 = 0x10;
      }
      if (param_2 >> 0xd == 0) {
        param_2 = param_2 << 8;
        uVar2 = uVar2 + 8;
      }
      if (param_2 >> 0x11 == 0) {
        param_2 = param_2 << 4;
        uVar2 = uVar2 + 4;
      }
      if (param_2 >> 0x13 == 0) {
        param_2 = param_2 << 2;
        uVar2 = uVar2 + 2;
      }
      if (param_2 >> 0x14 == 0) {
        param_2 = param_2 << 1;
        uVar2 = uVar2 + 1;
      }
      param_1 = uVar8 << (uVar2 & 0xff);
      uVar6 = 0x20 - uVar2;
      param_2 = ((param_2 | uVar8 >> (uVar6 & 0xff)) ^ uVar7 * -0x80000000) +
                (uVar7 + uVar2 * -0x10000 & 0xfffffffe) * 0x10;
      param_4 = param_1;
    }
    uVar10 = uVar10 | 0x20000000;
  }
  uVar7 = sub_080491E4(param_1,param_2,uVar6,param_4);
  if ((uVar10 & 0xf) != 9) {
    return uVar7;
  }
sub_08054F3C:
  uVar10 = uVar10 & uVar7 << 0x10;
  if (uVar10 != 0) {
    uVar10 = 1;
  }
  return uVar10;
}


/* sub_080534A8 @ 0x080534A8 */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_080534A8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  if ((~(param_2 << 1) & 0xffe00000) == 0 || (~(param_4 << 1) & 0xffe00000) == 0) {
    uVar7 = param_2 * 2 + (uint)(param_1 != 0);
    if (uVar7 < 0xffe00001) {
      uVar7 = param_4 * 2 + (uint)(param_3 != 0);
    }
    uVar10 = 0x4000011;
    if (0xffe00000 < uVar7) {
      uVar8 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
      uVar7 = uVar8;
      if (uVar8 < 0xfff00001) {
        uVar7 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
      }
      if (0xfff00000 < uVar7) goto sub_08054850;
      if (0xfffff < uVar8) {
        param_1 = param_3;
        param_2 = param_4;
      }
sub_08054E78:
      uVar7 = uVar10 & 0xf;
      if (uVar7 != 9) {
        if (uVar7 != 8) {
          return param_1;
        }
        if (uVar7 == 8) {
          if ((uVar10 & 0x10) == 0) {
            uVar7 = 0x7fc00000;
          }
          else {
            uVar7 = 0;
          }
          return uVar7;
        }
        if ((uVar10 & 0x10) == 0) {
          uVar7 = 0x7fffffff;
          param_2 = param_1;
        }
        else {
          uVar7 = 0xffffffff;
        }
        if ((param_2 & 0x80000000) != 0) {
          uVar7 = ~uVar7;
        }
        return uVar7;
      }
      uVar7 = 8;
      goto sub_08054F3C;
    }
    iVar9 = param_2 * 2 + (uint)(param_1 != 0);
    if (iVar9 != param_4 * 2 + (uint)(param_3 != 0)) {
      if (iVar9 == -0x200000) {
        return 0;
      }
      return 0;
    }
    param_1 = 0;
    if (-1 < (int)(param_2 ^ param_4)) {
      return param_1;
    }
    param_3 = 0;
    uVar10 = 0x4000011;
sub_08054850:
    uVar6 = param_3;
    if ((uVar10 & 0x10) == 0) {
      uVar6 = param_2;
    }
    puVar5 = (uint *)sub_08047A2C();
    uVar7 = *puVar5;
    if ((uVar10 & ~(uVar7 << 0x12) & 0x30000000) != 0) {
      uVar10 = uVar10 | 0x40000000;
    }
    uVar8 = uVar10 | uVar7 & 0x1c00000;
    *puVar5 = uVar7 | (uVar10 << 1) >> 0x1b;
    bVar11 = (uVar10 & 0xf) != 8;
    if (bVar11) {
      uVar2 = uVar10 & 0x70;
      uVar10 = uVar8 | uVar2 << 3;
    }
    else {
      uVar2 = 0x20000;
      uVar10 = uVar8;
    }
    if (!bVar11 && (uVar2 & ~uVar10) == 0) {
      uVar10 = uVar10 | 0xc00000;
    }
    if ((uVar10 & 0x10000000) == 0) {
      if ((uVar10 & 0x40000000) == 0) {
        if ((uVar7 & 0x100) == 0) {
          uVar7 = param_2;
          if ((uVar10 & 0x80) == 0) {
            uVar7 = param_1;
          }
          if ((uVar10 & 0x10) == 0) {
            param_1 = uVar7 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar7 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar7 & 0x1000) == 0) {
        return param_1;
      }
    }
    else if ((uVar7 & 0x400) == 0) {
      if ((uVar10 & 0x80) == 0) {
        param_2 = param_1;
      }
      if ((uVar10 & 0x10) == 0) {
        uVar7 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar7 = 0;
      }
      return uVar7;
    }
  }
  else {
    if ((int)(param_2 ^ param_4) < 0) {
      param_4 = param_4 ^ 0x80000000;
      uVar7 = param_1 - param_3;
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        uVar10 = param_2 - (param_4 + (param_3 > param_1)) ^ 0x80000000;
        bVar11 = CARRY4(param_3,uVar7);
        param_3 = param_3 + uVar7;
        param_4 = param_4 + uVar10 + (uint)bVar11;
        bVar11 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = param_2 - (uVar10 + bVar11);
      }
      uVar7 = param_2 >> 0x14;
      uVar10 = uVar7 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) == 0) {
        if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
          if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
            return param_1;
          }
        }
        else {
          uVar8 = param_2 & ~(uVar7 << 0x14);
          if ((uVar7 & 0x7ff) != 0) {
            uVar10 = uVar10 - 1;
            iVar9 = -((param_4 & 0x7fffffff) + (uint)(param_3 != 0));
            goto _08053740;
          }
          bVar11 = param_1 < param_3;
          param_1 = param_1 - param_3;
          param_2 = uVar8 - (param_4 + bVar11);
        }
_080538B4:
        uVar10 = 0x12;
        goto _080538B8;
      }
      uVar8 = param_2 & ~(uVar7 << 0x14);
      iVar9 = -0x100000 - ((param_4 & 0xfffff) + (uint)(param_3 != 0));
_08053740:
      uVar6 = -param_3;
      uVar2 = 0x20 - uVar10;
      if (uVar10 < 0x21) {
        uVar4 = uVar6 >> (uVar10 & 0xff);
        uVar3 = param_1 + uVar4;
        uVar8 = uVar8 + (iVar9 >> (uVar10 & 0xff)) + (uint)CARRY4(param_1,uVar4);
        uVar10 = iVar9 << (uVar2 & 0xff);
        uVar4 = uVar3 + uVar10;
        bVar11 = CARRY4(uVar8,(uint)CARRY4(uVar3,uVar10));
        iVar9 = uVar8 + CARRY4(uVar3,uVar10);
      }
      else {
        param_3 = param_3 * -2;
        if (param_3 != 0) {
          param_3 = 1;
        }
        uVar6 = param_3 | (iVar9 * 2 + (uint)CARRY4(uVar6,uVar6)) * 2;
        uVar10 = uVar10 - 0x20;
        uVar2 = 0x1e - uVar10;
        if (0x1e < uVar10 || uVar2 == 0) {
          return param_1;
        }
        uVar10 = iVar9 >> (uVar10 & 0xff);
        uVar4 = param_1 + uVar10;
        bVar11 = uVar8 != 0 || uVar8 < CARRY4(param_1,uVar10);
        iVar9 = uVar8 - !CARRY4(param_1,uVar10);
      }
      if (-1 < iVar9) {
        iVar9 = uVar6 << (uVar2 & 0xff);
        if (-1 < iVar9) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        if (uVar4 != 0 && iVar9 != -0x80000000) {
          return uVar4;
        }
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 & 0xfffffffe;
        }
        return uVar4;
      }
      uVar10 = uVar2 + 1 & 0xff;
      bVar11 = uVar10 == 0 && bVar11 || uVar10 != 0 && (bool)((byte)(uVar6 >> 0x20 - uVar10) & 1);
      param_1 = uVar4 * 2 + (uint)bVar11;
      iVar9 = iVar9 * 2 + (uint)(CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11));
      uVar8 = iVar9 + uVar7 * 0x200000;
      bVar11 = (bool)((byte)(uVar8 >> 0x14) & 1);
      if (bVar11 && uVar8 >> 0x15 != 0) {
        uVar7 = -((int)(uVar6 << uVar10) >> 0x1f);
        uVar8 = param_1 + uVar7;
        bVar11 = uVar8 == 0;
        if (!CARRY4(param_1,uVar7)) {
          bVar11 = uVar6 << uVar10 == -0x80000000;
        }
        if (!bVar11) {
          return uVar8;
        }
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 & 0xfffffffe;
        }
        return uVar8;
      }
      if (bVar11) {
        param_1 = (uint)((byte)iVar9 & 1) << 0x1f | param_1 >> 1;
        param_2 = (iVar9 >> 1) + uVar7 * 0x100000;
        goto _080538B4;
      }
      uVar10 = iVar9 + 0x200000;
      if (uVar10 == 0 && param_1 == 0) {
        return param_1;
      }
      iVar9 = (uVar7 & 0xfffff7ff) - 2;
      do {
        bVar11 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar10 = uVar10 * 2 + (uint)bVar11;
        iVar9 = iVar9 + -1;
      } while ((uVar10 & 0x100000) == 0);
      if (0 < iVar9) {
        return param_1;
      }
      param_2 = uVar10 + (param_2 & 0x80000000) + iVar9 * 0x100000 + 0x60000000;
      puVar5 = (uint *)sub_08047A2C();
      uVar10 = 0x12;
      param_4 = *puVar5;
      if ((param_4 & 0x1000000) != 0) {
        return 0;
      }
      if ((param_4 & 0x800) == 0) {
        uVar7 = param_2 & ~((param_2 >> 0x14) << 0x14);
        iVar9 = -(param_2 >> 0x14 & 0xfffff7ff);
        uVar8 = iVar9 + 0x601;
        uVar10 = uVar7 | 0x100000;
        if (uVar8 < 0x36) {
          if (uVar8 == 0x35) {
            uVar8 = 0;
            uVar6 = 0x80000000;
            if (param_1 != 0 || (uVar7 & 0xfffff) != 0) {
              uVar6 = 0x80000001;
            }
          }
          else if (uVar8 < 0x15) {
            uVar6 = param_1 << (0x20 - uVar8 & 0xff);
            uVar8 = uVar10 << (0x20 - uVar8 & 0xff) | param_1 >> (uVar8 & 0xff);
          }
          else {
            uVar7 = iVar9 + 0x5e1;
            if (uVar8 < 0x20 || uVar7 == 0) {
              uVar8 = uVar10 << (-uVar7 & 0xff) | param_1 >> (uVar8 & 0xff);
              uVar6 = param_1 << (-uVar7 & 0xff);
            }
            else {
              uVar8 = uVar10 >> (uVar7 & 0xff);
              uVar6 = uVar10 << (0x20 - uVar7 & 0xff);
              if (param_1 != 0) {
                uVar6 = uVar6 | 1;
              }
            }
          }
        }
        else {
          uVar6 = 1;
          uVar8 = 0;
        }
        if (uVar6 != 0) {
          if (SUB41(uVar6 >> 0x1f,0)) {
            if ((uVar6 & 0x7fffffff) == 0) {
              uVar8 = uVar8 + 1 & 0xfffffffe;
            }
            else {
              uVar8 = uVar8 + 1;
            }
          }
          puVar5 = (uint *)sub_08047A2C();
          *puVar5 = *puVar5 | 8;
          return uVar8;
        }
        return uVar8;
      }
    }
    else {
      uVar7 = param_1 - param_3;
      iVar9 = param_2 - (param_4 + (param_3 > param_1));
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        bVar11 = CARRY4(param_3,uVar7);
        param_3 = param_3 + uVar7;
        param_4 = param_4 + iVar9 + (uint)bVar11;
        bVar11 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = param_2 - (iVar9 + (uint)bVar11);
      }
      uVar7 = param_2 >> 0x14;
      uVar10 = uVar7 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) != 0) {
        param_2 = param_2 & ~(uVar7 << 0x14);
        param_4 = param_4 & 0x1fffff | 0x100000;
_08053500:
        uVar8 = 0x20 - uVar10;
        if (uVar10 < 0x21) {
          uVar2 = param_3 >> (uVar10 & 0xff);
          bVar11 = CARRY4(param_1,uVar2);
          uVar2 = param_1 + uVar2;
          uVar6 = param_4 << (uVar8 & 0xff);
          param_1 = uVar2 + uVar6;
          uVar10 = param_2 + (param_4 >> (uVar10 & 0xff)) + (uint)bVar11 + (uint)CARRY4(uVar2,uVar6)
          ;
          if (uVar10 < 0x100000) {
            param_2 = uVar10 + uVar7 * 0x100000;
            goto _08053524;
          }
_08053588:
          param_2 = (uVar10 + 0x100000 >> 1) + uVar7 * 0x100000;
          bVar11 = (bool)((byte)param_1 & 1);
          param_1 = (uint)((byte)(uVar10 + 0x100000) & 1) << 0x1f | param_1 >> 1;
          if (!bVar11) {
_080535C0:
            param_4 = param_2 * 2;
            if (param_4 < 0xffe00000) {
              return param_1;
            }
            uVar10 = 0x10000011;
            param_2 = param_2 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(param_1,(uint)bVar11);
          param_1 = param_1 + bVar11;
          uVar7 = param_1;
          if (!bVar1) {
            uVar7 = param_3 << (uVar8 & 0xff);
          }
          if (uVar7 != 0) goto _080535C0;
        }
        else {
          param_3 = param_4 * 2 + (uint)(param_3 != 0);
          uVar10 = uVar10 - 0x20;
          bVar11 = uVar10 < 0x20;
          uVar8 = 0x1f - uVar10;
          if (bVar11) {
            param_4 = param_4 >> (uVar10 & 0xff);
            bVar11 = CARRY4(param_1,param_4);
            param_1 = param_1 + param_4;
          }
          else {
            uVar8 = 0;
          }
          param_2 = param_2 + uVar7 * 0x100000 + (uint)bVar11;
          if (uVar7 != param_2 >> 0x14) {
            uVar10 = param_2 + uVar7 * -0x100000;
            goto _08053588;
          }
_08053524:
          param_3 = param_3 << (uVar8 & 0xff);
          if (-1 < (int)param_3) {
            return param_1;
          }
          bVar11 = param_1 != 0xffffffff;
          param_1 = param_1 + 1;
          uVar7 = param_1;
          if (bVar11) {
            param_3 = param_3 << 1;
            uVar7 = param_3;
          }
          if (uVar7 != 0) {
            return param_1;
          }
        }
        if (param_1 == 0) {
          param_2 = param_2 + 1;
          param_1 = 0;
        }
        else {
          param_1 = param_1 & 0xfffffffe;
        }
        param_4 = param_2 << 1;
        if (param_4 < 0xffe00000) {
          return param_1;
        }
        uVar10 = 0x10000011;
        if (param_4 >= 0xffe00000) {
          param_2 = param_2 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        if ((uVar7 & 0x7ff) != 0) {
          return param_1;
        }
        if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
          return param_1;
        }
        uVar10 = 0x11;
      }
      else {
        param_2 = param_2 & ~(uVar7 << 0x14);
        if ((uVar7 & 0x7ff) != 0) {
          param_4 = param_4 & 0x7fffffff;
          uVar10 = uVar10 - 1;
          goto _08053500;
        }
        bVar11 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + param_4 + (uint)bVar11;
        uVar10 = 0x11;
      }
_080538B8:
      if (param_2 << 1 == 0 && param_1 == 0) {
        return param_1;
      }
      if (0x1fffff < param_2 << 1) {
        return param_1;
      }
      puVar5 = (uint *)sub_08047A2C();
      if ((*puVar5 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar5 & 0x800) == 0) {
        return param_1;
      }
      uVar7 = param_2 >> 0x1f | 0x6000000;
      param_2 = param_2 & 0x7fffffff;
      if (param_2 == 0 && param_1 >> 0xc == 0) {
        param_1 = param_1 << 0x14;
        uVar7 = uVar7 - 0x140000;
      }
      uVar8 = param_1;
      if (param_2 == 0) {
        param_2 = param_1 >> 0xc;
        uVar8 = param_1 << 0x14;
        uVar7 = uVar7 - 0x140000;
      }
      uVar2 = 0;
      if (param_2 >> 5 == 0) {
        param_2 = param_2 << 0x10;
        uVar2 = 0x10;
      }
      if (param_2 >> 0xd == 0) {
        param_2 = param_2 << 8;
        uVar2 = uVar2 + 8;
      }
      if (param_2 >> 0x11 == 0) {
        param_2 = param_2 << 4;
        uVar2 = uVar2 + 4;
      }
      if (param_2 >> 0x13 == 0) {
        param_2 = param_2 << 2;
        uVar2 = uVar2 + 2;
      }
      if (param_2 >> 0x14 == 0) {
        param_2 = param_2 << 1;
        uVar2 = uVar2 + 1;
      }
      param_1 = uVar8 << (uVar2 & 0xff);
      uVar6 = 0x20 - uVar2;
      param_2 = ((param_2 | uVar8 >> (uVar6 & 0xff)) ^ uVar7 * -0x80000000) +
                (uVar7 + uVar2 * -0x10000 & 0xfffffffe) * 0x10;
      param_4 = param_1;
    }
    uVar10 = uVar10 | 0x20000000;
  }
  uVar7 = sub_080491E4(param_1,param_2,uVar6,param_4);
  if ((uVar10 & 0xf) != 9) {
    return uVar7;
  }
sub_08054F3C:
  uVar10 = uVar10 & uVar7 << 0x10;
  if (uVar10 != 0) {
    uVar10 = 1;
  }
  return uVar10;
}


/* sub_08053694 @ 0x08053694 */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08053694(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  if ((~(param_2 << 1) & 0xffe00000) == 0 || (~(param_4 << 1) & 0xffe00000) == 0) {
    uVar5 = param_4 * 2 + (uint)(param_3 != 0);
    if (uVar5 < 0xffe00001) {
      uVar5 = param_2 * 2 + (uint)(param_1 != 0);
    }
    puVar10 = &REG_BG0VOFS;
    if (0xffe00000 < uVar5) {
      uVar8 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
      uVar5 = uVar8;
      if (uVar8 < 0xfff00001) {
        uVar5 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
      }
      if (0xfff00000 < uVar5) goto sub_08054850;
      if (0xfffff < uVar8) {
        param_3 = param_1;
        param_4 = param_2;
      }
sub_08054E78:
      uVar5 = (uint)puVar10 & 0xf;
      if (uVar5 != 9) {
        if (uVar5 != 8) {
          return param_3;
        }
        if (uVar5 == 8) {
          if (((uint)puVar10 & 0x10) == 0) {
            uVar5 = 0x7fc00000;
          }
          else {
            uVar5 = 0;
          }
          return uVar5;
        }
        if (((uint)puVar10 & 0x10) == 0) {
          uVar5 = 0x7fffffff;
          param_4 = param_3;
        }
        else {
          uVar5 = 0xffffffff;
        }
        if ((param_4 & 0x80000000) != 0) {
          uVar5 = ~uVar5;
        }
        return uVar5;
      }
      uVar5 = 8;
      goto sub_08054F3C;
    }
    iVar7 = param_4 * 2 + (uint)(param_3 != 0);
    if (iVar7 != param_2 * 2 + (uint)(param_1 != 0)) {
      if (iVar7 == -0x200000) {
        return 0;
      }
      return 0;
    }
    param_3 = 0;
    if ((int)(param_4 ^ param_2) < 0) {
      return 0;
    }
    param_1 = 0;
    puVar10 = &REG_BG0VOFS;
sub_08054850:
    uVar12 = param_1;
    if (((uint)puVar10 & 0x10) == 0) {
      uVar12 = param_4;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar5 = *puVar4;
    if (((uint)puVar10 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
      puVar10 = (undefined2 *)((uint)puVar10 | 0x40000000);
    }
    puVar11 = (undefined2 *)((uint)puVar10 | uVar5 & 0x1c00000);
    *puVar4 = uVar5 | (uint)((int)puVar10 << 1) >> 0x1b;
    bVar14 = ((uint)puVar10 & 0xf) != 8;
    if (bVar14) {
      uVar8 = (uint)puVar10 & 0x70;
      puVar10 = (undefined2 *)((uint)puVar11 | uVar8 << 3);
    }
    else {
      uVar8 = 0x20000;
      puVar10 = puVar11;
    }
    if (!bVar14 && (uVar8 & ~(uint)puVar10) == 0) {
      puVar10 = (undefined2 *)((uint)puVar10 | 0xc00000);
    }
    if (((uint)puVar10 & 0x10000000) == 0) {
      if (((uint)puVar10 & 0x40000000) == 0) {
        if ((uVar5 & 0x100) == 0) {
          uVar5 = param_4;
          if (((uint)puVar10 & 0x80) == 0) {
            uVar5 = param_3;
          }
          if (((uint)puVar10 & 0x10) == 0) {
            param_3 = uVar5 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_3 = 0;
            param_4 = uVar5 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar5 & 0x1000) == 0) {
        return param_3;
      }
    }
    else if ((uVar5 & 0x400) == 0) {
      if (((uint)puVar10 & 0x80) == 0) {
        param_4 = param_3;
      }
      if (((uint)puVar10 & 0x10) == 0) {
        uVar5 = param_4 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  else {
    uVar5 = param_2 ^ 0x80000000;
    if ((int)(param_2 ^ param_4) < 0) {
      uVar12 = param_1 - param_3;
      iVar7 = uVar5 - (param_4 + (param_3 > param_1));
      uVar8 = param_3;
      if (uVar5 <= param_4 && (uint)(param_3 <= param_1) <= uVar5 - param_4) {
        uVar8 = param_3 + uVar12;
        param_4 = param_4 + iVar7 + (uint)CARRY4(param_3,uVar12);
        bVar14 = param_1 < uVar12;
        param_1 = param_1 - uVar12;
        uVar5 = uVar5 - (iVar7 + (uint)bVar14);
      }
      uVar12 = uVar5 >> 0x14;
      uVar13 = uVar12 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar12 << 0x14);
        param_4 = param_4 & 0x1fffff | 0x100000;
_08053500:
        uVar6 = 0x20 - uVar13;
        if (uVar13 < 0x21) {
          uVar3 = uVar8 >> (uVar13 & 0xff);
          bVar14 = CARRY4(param_1,uVar3);
          uVar3 = param_1 + uVar3;
          uVar9 = param_4 << (uVar6 & 0xff);
          param_1 = uVar3 + uVar9;
          uVar5 = uVar5 + (param_4 >> (uVar13 & 0xff)) + (uint)bVar14 + (uint)CARRY4(uVar3,uVar9);
          if (uVar5 < 0x100000) {
            param_4 = uVar5 + uVar12 * 0x100000;
            goto _08053524;
          }
_08053588:
          param_4 = (uVar5 + 0x100000 >> 1) + uVar12 * 0x100000;
          bVar14 = (bool)((byte)param_1 & 1);
          param_3 = (uint)((byte)(uVar5 + 0x100000) & 1) << 0x1f | param_1 >> 1;
          param_1 = uVar8;
          if (!bVar14) {
_080535C0:
            param_2 = param_4 * 2;
            if (param_2 < 0xffe00000) {
              return param_3;
            }
            puVar10 = (undefined2 *)0x10000011;
            param_4 = param_4 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(param_3,(uint)bVar14);
          param_3 = param_3 + bVar14;
          uVar5 = param_3;
          if (!bVar1) {
            uVar5 = uVar8 << (uVar6 & 0xff);
          }
          if (uVar5 != 0) goto _080535C0;
        }
        else {
          uVar8 = param_4 * 2 + (uint)(uVar8 != 0);
          uVar13 = uVar13 - 0x20;
          bVar14 = uVar13 < 0x20;
          uVar6 = 0x1f - uVar13;
          if (bVar14) {
            param_4 = param_4 >> (uVar13 & 0xff);
            bVar14 = CARRY4(param_1,param_4);
            param_1 = param_1 + param_4;
          }
          else {
            uVar6 = 0;
          }
          param_4 = uVar5 + uVar12 * 0x100000 + (uint)bVar14;
          if (uVar12 != param_4 >> 0x14) {
            uVar5 = param_4 + uVar12 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar6 & 0xff);
          if (-1 < (int)uVar8) {
            return param_1;
          }
          param_3 = param_1 + 1;
          uVar5 = param_3;
          if (param_1 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar5 = uVar8;
          }
          param_1 = uVar8;
          if (uVar5 != 0) {
            return param_3;
          }
        }
        if (param_3 == 0) {
          param_4 = param_4 + 1;
          param_3 = 0;
        }
        else {
          param_3 = param_3 & 0xfffffffe;
        }
        param_2 = param_4 << 1;
        if (param_2 < 0xffe00000) {
          return param_3;
        }
        puVar10 = (undefined2 *)0x10000011;
        if (param_2 >= 0xffe00000) {
          param_4 = param_4 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (param_4 & 0x7fffffff) == 0) {
        if ((uVar12 & 0x7ff) != 0) {
          return param_1;
        }
        if (param_1 == 0 && (uVar5 & 0x7fffffff) == 0) {
          return param_1;
        }
        uVar8 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar12 << 0x14);
        if ((uVar12 & 0x7ff) != 0) {
          param_4 = param_4 & 0x7fffffff;
          uVar13 = uVar13 - 1;
          goto _08053500;
        }
        bVar14 = CARRY4(param_1,uVar8);
        param_1 = param_1 + uVar8;
        uVar5 = uVar5 + param_4 + (uint)bVar14;
        uVar8 = 0x11;
      }
_080538B8:
      if (uVar5 << 1 == 0 && param_1 == 0) {
        return param_1;
      }
      if (0x1fffff < uVar5 << 1) {
        return param_1;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return param_1;
      }
      uVar13 = uVar5 >> 0x1f | 0x6000000;
      uVar5 = uVar5 & 0x7fffffff;
      if (uVar5 == 0 && param_1 >> 0xc == 0) {
        param_1 = param_1 << 0x14;
        uVar13 = uVar13 - 0x140000;
      }
      if (uVar5 == 0) {
        uVar5 = param_1 >> 0xc;
        param_1 = param_1 << 0x14;
        uVar13 = uVar13 - 0x140000;
      }
      uVar6 = 0;
      if (uVar5 >> 5 == 0) {
        uVar5 = uVar5 << 0x10;
        uVar6 = 0x10;
      }
      if (uVar5 >> 0xd == 0) {
        uVar5 = uVar5 << 8;
        uVar6 = uVar6 + 8;
      }
      if (uVar5 >> 0x11 == 0) {
        uVar5 = uVar5 << 4;
        uVar6 = uVar6 + 4;
      }
      if (uVar5 >> 0x13 == 0) {
        uVar5 = uVar5 << 2;
        uVar6 = uVar6 + 2;
      }
      if (uVar5 >> 0x14 == 0) {
        uVar5 = uVar5 << 1;
        uVar6 = uVar6 + 1;
      }
      param_3 = param_1 << (uVar6 & 0xff);
      uVar12 = 0x20 - uVar6;
      param_4 = ((uVar5 | param_1 >> (uVar12 & 0xff)) ^ uVar13 * -0x80000000) +
                (uVar13 + uVar6 * -0x10000 & 0xfffffffe) * 0x10;
      param_2 = param_3;
    }
    else {
      param_4 = param_4 ^ 0x80000000;
      uVar8 = param_1 - param_3;
      if (uVar5 <= param_4 && (uint)(param_3 <= param_1) <= uVar5 - param_4) {
        uVar12 = uVar5 - (param_4 + (param_3 > param_1)) ^ 0x80000000;
        bVar14 = CARRY4(param_3,uVar8);
        param_3 = param_3 + uVar8;
        param_4 = param_4 + uVar12 + (uint)bVar14;
        bVar14 = param_1 < uVar8;
        param_1 = param_1 - uVar8;
        uVar5 = uVar5 - (uVar12 + bVar14);
      }
      uVar8 = uVar5 >> 0x14;
      uVar13 = uVar8 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) == 0) {
        if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
          if (param_1 == 0 && (uVar5 & 0x7fffffff) == 0) {
            return param_1;
          }
        }
        else {
          uVar6 = uVar5 & ~(uVar8 << 0x14);
          if ((uVar8 & 0x7ff) != 0) {
            uVar13 = uVar13 - 1;
            iVar7 = -((param_4 & 0x7fffffff) + (uint)(param_3 != 0));
            goto _08053740;
          }
          bVar14 = param_1 < param_3;
          param_1 = param_1 - param_3;
          uVar5 = uVar6 - (param_4 + bVar14);
        }
_080538B4:
        uVar8 = 0x12;
        goto _080538B8;
      }
      uVar6 = uVar5 & ~(uVar8 << 0x14);
      iVar7 = -0x100000 - ((param_4 & 0xfffff) + (uint)(param_3 != 0));
_08053740:
      uVar12 = -param_3;
      uVar9 = 0x20 - uVar13;
      if (uVar13 < 0x21) {
        uVar3 = uVar12 >> (uVar13 & 0xff);
        uVar2 = param_1 + uVar3;
        uVar6 = uVar6 + (iVar7 >> (uVar13 & 0xff)) + (uint)CARRY4(param_1,uVar3);
        uVar13 = iVar7 << (uVar9 & 0xff);
        uVar3 = uVar2 + uVar13;
        bVar14 = CARRY4(uVar6,(uint)CARRY4(uVar2,uVar13));
        iVar7 = uVar6 + CARRY4(uVar2,uVar13);
      }
      else {
        param_3 = param_3 * -2;
        if (param_3 != 0) {
          param_3 = 1;
        }
        uVar12 = param_3 | (iVar7 * 2 + (uint)CARRY4(uVar12,uVar12)) * 2;
        uVar13 = uVar13 - 0x20;
        uVar9 = 0x1e - uVar13;
        if (0x1e < uVar13 || uVar9 == 0) {
          return param_1;
        }
        uVar13 = iVar7 >> (uVar13 & 0xff);
        uVar3 = param_1 + uVar13;
        bVar14 = uVar6 != 0 || uVar6 < CARRY4(param_1,uVar13);
        iVar7 = uVar6 - !CARRY4(param_1,uVar13);
      }
      if (-1 < iVar7) {
        iVar7 = uVar12 << (uVar9 & 0xff);
        if (-1 < iVar7) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 != 0 && iVar7 != -0x80000000) {
          return uVar3;
        }
        if (uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        return uVar3;
      }
      uVar13 = uVar9 + 1 & 0xff;
      bVar14 = uVar13 == 0 && bVar14 || uVar13 != 0 && (bool)((byte)(uVar12 >> 0x20 - uVar13) & 1);
      param_3 = uVar3 * 2 + (uint)bVar14;
      iVar7 = iVar7 * 2 + (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar14));
      uVar6 = iVar7 + uVar8 * 0x200000;
      bVar14 = (bool)((byte)(uVar6 >> 0x14) & 1);
      if (bVar14 && uVar6 >> 0x15 != 0) {
        uVar5 = -((int)(uVar12 << uVar13) >> 0x1f);
        uVar8 = param_3 + uVar5;
        bVar14 = uVar8 == 0;
        if (!CARRY4(param_3,uVar5)) {
          bVar14 = uVar12 << uVar13 == -0x80000000;
        }
        if (!bVar14) {
          return uVar8;
        }
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 & 0xfffffffe;
        }
        return uVar8;
      }
      if (bVar14) {
        param_1 = (uint)((byte)iVar7 & 1) << 0x1f | param_3 >> 1;
        uVar5 = (iVar7 >> 1) + uVar8 * 0x100000;
        goto _080538B4;
      }
      uVar13 = iVar7 + 0x200000;
      if (uVar13 == 0 && param_3 == 0) {
        return param_3;
      }
      iVar7 = (uVar8 & 0xfffff7ff) - 2;
      do {
        bVar14 = CARRY4(param_3,param_3);
        param_3 = param_3 * 2;
        uVar13 = uVar13 * 2 + (uint)bVar14;
        iVar7 = iVar7 + -1;
      } while ((uVar13 & 0x100000) == 0);
      if (0 < iVar7) {
        return param_3;
      }
      param_4 = uVar13 + (uVar5 & 0x80000000) + iVar7 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar8 = 0x12;
      param_2 = *puVar4;
      if ((param_2 & 0x1000000) != 0) {
        return 0;
      }
      if ((param_2 & 0x800) == 0) {
        uVar5 = param_4 & ~((param_4 >> 0x14) << 0x14);
        iVar7 = -(param_4 >> 0x14 & 0xfffff7ff);
        uVar12 = iVar7 + 0x601;
        uVar8 = uVar5 | 0x100000;
        if (uVar12 < 0x36) {
          if (uVar12 == 0x35) {
            uVar12 = 0;
            uVar13 = 0x80000000;
            if (param_3 != 0 || (uVar5 & 0xfffff) != 0) {
              uVar13 = 0x80000001;
            }
          }
          else if (uVar12 < 0x15) {
            uVar13 = param_3 << (0x20 - uVar12 & 0xff);
            uVar12 = uVar8 << (0x20 - uVar12 & 0xff) | param_3 >> (uVar12 & 0xff);
          }
          else {
            uVar5 = iVar7 + 0x5e1;
            if (uVar12 < 0x20 || uVar5 == 0) {
              uVar12 = uVar8 << (-uVar5 & 0xff) | param_3 >> (uVar12 & 0xff);
              uVar13 = param_3 << (-uVar5 & 0xff);
            }
            else {
              uVar12 = uVar8 >> (uVar5 & 0xff);
              uVar13 = uVar8 << (0x20 - uVar5 & 0xff);
              if (param_3 != 0) {
                uVar13 = uVar13 | 1;
              }
            }
          }
        }
        else {
          uVar13 = 1;
          uVar12 = 0;
        }
        if (uVar13 != 0) {
          if (SUB41(uVar13 >> 0x1f,0)) {
            if ((uVar13 & 0x7fffffff) == 0) {
              uVar12 = uVar12 + 1 & 0xfffffffe;
            }
            else {
              uVar12 = uVar12 + 1;
            }
          }
          puVar4 = (uint *)sub_08047A2C();
          *puVar4 = *puVar4 | 8;
          return uVar12;
        }
        return uVar12;
      }
    }
    puVar10 = (undefined2 *)(uVar8 | 0x20000000);
  }
  uVar5 = sub_080491E4(param_3,param_4,uVar12,param_2);
  if (((uint)puVar10 & 0xf) != 9) {
    return uVar5;
  }
sub_08054F3C:
  uVar5 = (uint)puVar10 & uVar5 << 0x10;
  if (uVar5 != 0) {
    uVar5 = 1;
  }
  return uVar5;
}


/* sub_08053698 @ 0x08053698 */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_08053698(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  if ((~(param_2 << 1) & 0xffe00000) == 0 || (~(param_4 << 1) & 0xffe00000) == 0) {
    uVar5 = param_4 * 2 + (uint)(param_3 != 0);
    if (uVar5 < 0xffe00001) {
      uVar5 = param_2 * 2 + (uint)(param_1 != 0);
    }
    puVar10 = &REG_BG0VOFS;
    if (0xffe00000 < uVar5) {
      uVar8 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
      uVar5 = uVar8;
      if (uVar8 < 0xfff00001) {
        uVar5 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
      }
      if (0xfff00000 < uVar5) goto sub_08054850;
      if (0xfffff < uVar8) {
        param_3 = param_1;
        param_4 = param_2;
      }
sub_08054E78:
      uVar5 = (uint)puVar10 & 0xf;
      if (uVar5 != 9) {
        if (uVar5 != 8) {
          return param_3;
        }
        if (uVar5 == 8) {
          if (((uint)puVar10 & 0x10) == 0) {
            uVar5 = 0x7fc00000;
          }
          else {
            uVar5 = 0;
          }
          return uVar5;
        }
        if (((uint)puVar10 & 0x10) == 0) {
          uVar5 = 0x7fffffff;
          param_4 = param_3;
        }
        else {
          uVar5 = 0xffffffff;
        }
        if ((param_4 & 0x80000000) != 0) {
          uVar5 = ~uVar5;
        }
        return uVar5;
      }
      uVar5 = 8;
      goto sub_08054F3C;
    }
    iVar7 = param_4 * 2 + (uint)(param_3 != 0);
    if (iVar7 != param_2 * 2 + (uint)(param_1 != 0)) {
      if (iVar7 == -0x200000) {
        return 0;
      }
      return 0;
    }
    param_3 = 0;
    if ((int)(param_4 ^ param_2) < 0) {
      return 0;
    }
    param_1 = 0;
    puVar10 = &REG_BG0VOFS;
sub_08054850:
    uVar12 = param_1;
    if (((uint)puVar10 & 0x10) == 0) {
      uVar12 = param_4;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar5 = *puVar4;
    if (((uint)puVar10 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
      puVar10 = (undefined2 *)((uint)puVar10 | 0x40000000);
    }
    puVar11 = (undefined2 *)((uint)puVar10 | uVar5 & 0x1c00000);
    *puVar4 = uVar5 | (uint)((int)puVar10 << 1) >> 0x1b;
    bVar14 = ((uint)puVar10 & 0xf) != 8;
    if (bVar14) {
      uVar8 = (uint)puVar10 & 0x70;
      puVar10 = (undefined2 *)((uint)puVar11 | uVar8 << 3);
    }
    else {
      uVar8 = 0x20000;
      puVar10 = puVar11;
    }
    if (!bVar14 && (uVar8 & ~(uint)puVar10) == 0) {
      puVar10 = (undefined2 *)((uint)puVar10 | 0xc00000);
    }
    if (((uint)puVar10 & 0x10000000) == 0) {
      if (((uint)puVar10 & 0x40000000) == 0) {
        if ((uVar5 & 0x100) == 0) {
          uVar5 = param_4;
          if (((uint)puVar10 & 0x80) == 0) {
            uVar5 = param_3;
          }
          if (((uint)puVar10 & 0x10) == 0) {
            param_3 = uVar5 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_3 = 0;
            param_4 = uVar5 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar5 & 0x1000) == 0) {
        return param_3;
      }
    }
    else if ((uVar5 & 0x400) == 0) {
      if (((uint)puVar10 & 0x80) == 0) {
        param_4 = param_3;
      }
      if (((uint)puVar10 & 0x10) == 0) {
        uVar5 = param_4 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  else {
    uVar5 = param_2 ^ 0x80000000;
    if ((int)(param_2 ^ param_4) < 0) {
      uVar12 = param_1 - param_3;
      iVar7 = uVar5 - (param_4 + (param_3 > param_1));
      uVar8 = param_3;
      if (uVar5 <= param_4 && (uint)(param_3 <= param_1) <= uVar5 - param_4) {
        uVar8 = param_3 + uVar12;
        param_4 = param_4 + iVar7 + (uint)CARRY4(param_3,uVar12);
        bVar14 = param_1 < uVar12;
        param_1 = param_1 - uVar12;
        uVar5 = uVar5 - (iVar7 + (uint)bVar14);
      }
      uVar12 = uVar5 >> 0x14;
      uVar13 = uVar12 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) != 0) {
        uVar5 = uVar5 & ~(uVar12 << 0x14);
        param_4 = param_4 & 0x1fffff | 0x100000;
_08053500:
        uVar6 = 0x20 - uVar13;
        if (uVar13 < 0x21) {
          uVar3 = uVar8 >> (uVar13 & 0xff);
          bVar14 = CARRY4(param_1,uVar3);
          uVar3 = param_1 + uVar3;
          uVar9 = param_4 << (uVar6 & 0xff);
          param_1 = uVar3 + uVar9;
          uVar5 = uVar5 + (param_4 >> (uVar13 & 0xff)) + (uint)bVar14 + (uint)CARRY4(uVar3,uVar9);
          if (uVar5 < 0x100000) {
            param_4 = uVar5 + uVar12 * 0x100000;
            goto _08053524;
          }
_08053588:
          param_4 = (uVar5 + 0x100000 >> 1) + uVar12 * 0x100000;
          bVar14 = (bool)((byte)param_1 & 1);
          param_3 = (uint)((byte)(uVar5 + 0x100000) & 1) << 0x1f | param_1 >> 1;
          param_1 = uVar8;
          if (!bVar14) {
_080535C0:
            param_2 = param_4 * 2;
            if (param_2 < 0xffe00000) {
              return param_3;
            }
            puVar10 = (undefined2 *)0x10000011;
            param_4 = param_4 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(param_3,(uint)bVar14);
          param_3 = param_3 + bVar14;
          uVar5 = param_3;
          if (!bVar1) {
            uVar5 = uVar8 << (uVar6 & 0xff);
          }
          if (uVar5 != 0) goto _080535C0;
        }
        else {
          uVar8 = param_4 * 2 + (uint)(uVar8 != 0);
          uVar13 = uVar13 - 0x20;
          bVar14 = uVar13 < 0x20;
          uVar6 = 0x1f - uVar13;
          if (bVar14) {
            param_4 = param_4 >> (uVar13 & 0xff);
            bVar14 = CARRY4(param_1,param_4);
            param_1 = param_1 + param_4;
          }
          else {
            uVar6 = 0;
          }
          param_4 = uVar5 + uVar12 * 0x100000 + (uint)bVar14;
          if (uVar12 != param_4 >> 0x14) {
            uVar5 = param_4 + uVar12 * -0x100000;
            goto _08053588;
          }
_08053524:
          uVar8 = uVar8 << (uVar6 & 0xff);
          if (-1 < (int)uVar8) {
            return param_1;
          }
          param_3 = param_1 + 1;
          uVar5 = param_3;
          if (param_1 != 0xffffffff) {
            uVar8 = uVar8 << 1;
            uVar5 = uVar8;
          }
          param_1 = uVar8;
          if (uVar5 != 0) {
            return param_3;
          }
        }
        if (param_3 == 0) {
          param_4 = param_4 + 1;
          param_3 = 0;
        }
        else {
          param_3 = param_3 & 0xfffffffe;
        }
        param_2 = param_4 << 1;
        if (param_2 < 0xffe00000) {
          return param_3;
        }
        puVar10 = (undefined2 *)0x10000011;
        if (param_2 >= 0xffe00000) {
          param_4 = param_4 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (uVar8 == 0 && (param_4 & 0x7fffffff) == 0) {
        if ((uVar12 & 0x7ff) != 0) {
          return param_1;
        }
        if (param_1 == 0 && (uVar5 & 0x7fffffff) == 0) {
          return param_1;
        }
        uVar8 = 0x11;
      }
      else {
        uVar5 = uVar5 & ~(uVar12 << 0x14);
        if ((uVar12 & 0x7ff) != 0) {
          param_4 = param_4 & 0x7fffffff;
          uVar13 = uVar13 - 1;
          goto _08053500;
        }
        bVar14 = CARRY4(param_1,uVar8);
        param_1 = param_1 + uVar8;
        uVar5 = uVar5 + param_4 + (uint)bVar14;
        uVar8 = 0x11;
      }
_080538B8:
      if (uVar5 << 1 == 0 && param_1 == 0) {
        return param_1;
      }
      if (0x1fffff < uVar5 << 1) {
        return param_1;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return param_1;
      }
      uVar13 = uVar5 >> 0x1f | 0x6000000;
      uVar5 = uVar5 & 0x7fffffff;
      if (uVar5 == 0 && param_1 >> 0xc == 0) {
        param_1 = param_1 << 0x14;
        uVar13 = uVar13 - 0x140000;
      }
      if (uVar5 == 0) {
        uVar5 = param_1 >> 0xc;
        param_1 = param_1 << 0x14;
        uVar13 = uVar13 - 0x140000;
      }
      uVar6 = 0;
      if (uVar5 >> 5 == 0) {
        uVar5 = uVar5 << 0x10;
        uVar6 = 0x10;
      }
      if (uVar5 >> 0xd == 0) {
        uVar5 = uVar5 << 8;
        uVar6 = uVar6 + 8;
      }
      if (uVar5 >> 0x11 == 0) {
        uVar5 = uVar5 << 4;
        uVar6 = uVar6 + 4;
      }
      if (uVar5 >> 0x13 == 0) {
        uVar5 = uVar5 << 2;
        uVar6 = uVar6 + 2;
      }
      if (uVar5 >> 0x14 == 0) {
        uVar5 = uVar5 << 1;
        uVar6 = uVar6 + 1;
      }
      param_3 = param_1 << (uVar6 & 0xff);
      uVar12 = 0x20 - uVar6;
      param_4 = ((uVar5 | param_1 >> (uVar12 & 0xff)) ^ uVar13 * -0x80000000) +
                (uVar13 + uVar6 * -0x10000 & 0xfffffffe) * 0x10;
      param_2 = param_3;
    }
    else {
      param_4 = param_4 ^ 0x80000000;
      uVar8 = param_1 - param_3;
      if (uVar5 <= param_4 && (uint)(param_3 <= param_1) <= uVar5 - param_4) {
        uVar12 = uVar5 - (param_4 + (param_3 > param_1)) ^ 0x80000000;
        bVar14 = CARRY4(param_3,uVar8);
        param_3 = param_3 + uVar8;
        param_4 = param_4 + uVar12 + (uint)bVar14;
        bVar14 = param_1 < uVar8;
        param_1 = param_1 - uVar8;
        uVar5 = uVar5 - (uVar12 + bVar14);
      }
      uVar8 = uVar5 >> 0x14;
      uVar13 = uVar8 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) == 0) {
        if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
          if (param_1 == 0 && (uVar5 & 0x7fffffff) == 0) {
            return param_1;
          }
        }
        else {
          uVar6 = uVar5 & ~(uVar8 << 0x14);
          if ((uVar8 & 0x7ff) != 0) {
            uVar13 = uVar13 - 1;
            iVar7 = -((param_4 & 0x7fffffff) + (uint)(param_3 != 0));
            goto _08053740;
          }
          bVar14 = param_1 < param_3;
          param_1 = param_1 - param_3;
          uVar5 = uVar6 - (param_4 + bVar14);
        }
_080538B4:
        uVar8 = 0x12;
        goto _080538B8;
      }
      uVar6 = uVar5 & ~(uVar8 << 0x14);
      iVar7 = -0x100000 - ((param_4 & 0xfffff) + (uint)(param_3 != 0));
_08053740:
      uVar12 = -param_3;
      uVar9 = 0x20 - uVar13;
      if (uVar13 < 0x21) {
        uVar3 = uVar12 >> (uVar13 & 0xff);
        uVar2 = param_1 + uVar3;
        uVar6 = uVar6 + (iVar7 >> (uVar13 & 0xff)) + (uint)CARRY4(param_1,uVar3);
        uVar13 = iVar7 << (uVar9 & 0xff);
        uVar3 = uVar2 + uVar13;
        bVar14 = CARRY4(uVar6,(uint)CARRY4(uVar2,uVar13));
        iVar7 = uVar6 + CARRY4(uVar2,uVar13);
      }
      else {
        param_3 = param_3 * -2;
        if (param_3 != 0) {
          param_3 = 1;
        }
        uVar12 = param_3 | (iVar7 * 2 + (uint)CARRY4(uVar12,uVar12)) * 2;
        uVar13 = uVar13 - 0x20;
        uVar9 = 0x1e - uVar13;
        if (0x1e < uVar13 || uVar9 == 0) {
          return param_1;
        }
        uVar13 = iVar7 >> (uVar13 & 0xff);
        uVar3 = param_1 + uVar13;
        bVar14 = uVar6 != 0 || uVar6 < CARRY4(param_1,uVar13);
        iVar7 = uVar6 - !CARRY4(param_1,uVar13);
      }
      if (-1 < iVar7) {
        iVar7 = uVar12 << (uVar9 & 0xff);
        if (-1 < iVar7) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 != 0 && iVar7 != -0x80000000) {
          return uVar3;
        }
        if (uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        return uVar3;
      }
      uVar13 = uVar9 + 1 & 0xff;
      bVar14 = uVar13 == 0 && bVar14 || uVar13 != 0 && (bool)((byte)(uVar12 >> 0x20 - uVar13) & 1);
      param_3 = uVar3 * 2 + (uint)bVar14;
      iVar7 = iVar7 * 2 + (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar14));
      uVar6 = iVar7 + uVar8 * 0x200000;
      bVar14 = (bool)((byte)(uVar6 >> 0x14) & 1);
      if (bVar14 && uVar6 >> 0x15 != 0) {
        uVar5 = -((int)(uVar12 << uVar13) >> 0x1f);
        uVar8 = param_3 + uVar5;
        bVar14 = uVar8 == 0;
        if (!CARRY4(param_3,uVar5)) {
          bVar14 = uVar12 << uVar13 == -0x80000000;
        }
        if (!bVar14) {
          return uVar8;
        }
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 & 0xfffffffe;
        }
        return uVar8;
      }
      if (bVar14) {
        param_1 = (uint)((byte)iVar7 & 1) << 0x1f | param_3 >> 1;
        uVar5 = (iVar7 >> 1) + uVar8 * 0x100000;
        goto _080538B4;
      }
      uVar13 = iVar7 + 0x200000;
      if (uVar13 == 0 && param_3 == 0) {
        return param_3;
      }
      iVar7 = (uVar8 & 0xfffff7ff) - 2;
      do {
        bVar14 = CARRY4(param_3,param_3);
        param_3 = param_3 * 2;
        uVar13 = uVar13 * 2 + (uint)bVar14;
        iVar7 = iVar7 + -1;
      } while ((uVar13 & 0x100000) == 0);
      if (0 < iVar7) {
        return param_3;
      }
      param_4 = uVar13 + (uVar5 & 0x80000000) + iVar7 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar8 = 0x12;
      param_2 = *puVar4;
      if ((param_2 & 0x1000000) != 0) {
        return 0;
      }
      if ((param_2 & 0x800) == 0) {
        uVar5 = param_4 & ~((param_4 >> 0x14) << 0x14);
        iVar7 = -(param_4 >> 0x14 & 0xfffff7ff);
        uVar12 = iVar7 + 0x601;
        uVar8 = uVar5 | 0x100000;
        if (uVar12 < 0x36) {
          if (uVar12 == 0x35) {
            uVar12 = 0;
            uVar13 = 0x80000000;
            if (param_3 != 0 || (uVar5 & 0xfffff) != 0) {
              uVar13 = 0x80000001;
            }
          }
          else if (uVar12 < 0x15) {
            uVar13 = param_3 << (0x20 - uVar12 & 0xff);
            uVar12 = uVar8 << (0x20 - uVar12 & 0xff) | param_3 >> (uVar12 & 0xff);
          }
          else {
            uVar5 = iVar7 + 0x5e1;
            if (uVar12 < 0x20 || uVar5 == 0) {
              uVar12 = uVar8 << (-uVar5 & 0xff) | param_3 >> (uVar12 & 0xff);
              uVar13 = param_3 << (-uVar5 & 0xff);
            }
            else {
              uVar12 = uVar8 >> (uVar5 & 0xff);
              uVar13 = uVar8 << (0x20 - uVar5 & 0xff);
              if (param_3 != 0) {
                uVar13 = uVar13 | 1;
              }
            }
          }
        }
        else {
          uVar13 = 1;
          uVar12 = 0;
        }
        if (uVar13 != 0) {
          if (SUB41(uVar13 >> 0x1f,0)) {
            if ((uVar13 & 0x7fffffff) == 0) {
              uVar12 = uVar12 + 1 & 0xfffffffe;
            }
            else {
              uVar12 = uVar12 + 1;
            }
          }
          puVar4 = (uint *)sub_08047A2C();
          *puVar4 = *puVar4 | 8;
          return uVar12;
        }
        return uVar12;
      }
    }
    puVar10 = (undefined2 *)(uVar8 | 0x20000000);
  }
  uVar5 = sub_080491E4(param_3,param_4,uVar12,param_2);
  if (((uint)puVar10 & 0xf) != 9) {
    return uVar5;
  }
sub_08054F3C:
  uVar5 = (uint)puVar10 & uVar5 << 0x10;
  if (uVar5 != 0) {
    uVar5 = 1;
  }
  return uVar5;
}


/* sub_080536DC @ 0x080536DC */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_080536DC(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if ((~(param_2 << 1) & 0xffe00000) == 0 || (~(param_4 << 1) & 0xffe00000) == 0) {
    uVar7 = param_2 * 2 + (uint)(param_1 != 0);
    if (uVar7 < 0xffe00001) {
      uVar7 = param_4 * 2 + (uint)(param_3 != 0);
    }
    puVar9 = &REG_BG0VOFS;
    if (0xffe00000 < uVar7) {
      uVar11 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
      uVar7 = uVar11;
      if (uVar11 < 0xfff00001) {
        uVar7 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
      }
      if (0xfff00000 < uVar7) goto sub_08054850;
      if (0xfffff < uVar11) {
        param_1 = param_3;
        param_2 = param_4;
      }
sub_08054E78:
      uVar7 = (uint)puVar9 & 0xf;
      if (uVar7 != 9) {
        if (uVar7 != 8) {
          return param_1;
        }
        if (uVar7 == 8) {
          if (((uint)puVar9 & 0x10) == 0) {
            uVar7 = 0x7fc00000;
          }
          else {
            uVar7 = 0;
          }
          return uVar7;
        }
        if (((uint)puVar9 & 0x10) == 0) {
          uVar7 = 0x7fffffff;
          param_2 = param_1;
        }
        else {
          uVar7 = 0xffffffff;
        }
        if ((param_2 & 0x80000000) != 0) {
          uVar7 = ~uVar7;
        }
        return uVar7;
      }
      uVar7 = 8;
      goto sub_08054F3C;
    }
    iVar6 = param_2 * 2 + (uint)(param_1 != 0);
    if (iVar6 != param_4 * 2 + (uint)(param_3 != 0)) {
      if (iVar6 == -0x200000) {
        return 0;
      }
      return 0;
    }
    param_1 = 0;
    if ((int)(param_2 ^ param_4) < 0) {
      return 0;
    }
    param_3 = 0;
    puVar9 = &REG_BG0VOFS;
sub_08054850:
    uVar11 = param_3;
    if (((uint)puVar9 & 0x10) == 0) {
      uVar11 = param_2;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar7 = *puVar4;
    if (((uint)puVar9 & ~(uVar7 << 0x12) & 0x30000000) != 0) {
      puVar9 = (undefined2 *)((uint)puVar9 | 0x40000000);
    }
    puVar10 = (undefined2 *)((uint)puVar9 | uVar7 & 0x1c00000);
    *puVar4 = uVar7 | (uint)((int)puVar9 << 1) >> 0x1b;
    bVar13 = ((uint)puVar9 & 0xf) != 8;
    if (bVar13) {
      uVar12 = (uint)puVar9 & 0x70;
      puVar9 = (undefined2 *)((uint)puVar10 | uVar12 << 3);
    }
    else {
      uVar12 = 0x20000;
      puVar9 = puVar10;
    }
    if (!bVar13 && (uVar12 & ~(uint)puVar9) == 0) {
      puVar9 = (undefined2 *)((uint)puVar9 | 0xc00000);
    }
    if (((uint)puVar9 & 0x10000000) == 0) {
      if (((uint)puVar9 & 0x40000000) == 0) {
        if ((uVar7 & 0x100) == 0) {
          uVar7 = param_2;
          if (((uint)puVar9 & 0x80) == 0) {
            uVar7 = param_1;
          }
          if (((uint)puVar9 & 0x10) == 0) {
            param_1 = uVar7 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar7 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar7 & 0x1000) == 0) {
        return param_1;
      }
    }
    else if ((uVar7 & 0x400) == 0) {
      if (((uint)puVar9 & 0x80) == 0) {
        param_2 = param_1;
      }
      if (((uint)puVar9 & 0x10) == 0) {
        uVar7 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar7 = 0;
      }
      return uVar7;
    }
  }
  else {
    if ((int)(param_2 ^ param_4) < 0) {
      param_4 = param_4 ^ 0x80000000;
      uVar7 = param_1 - param_3;
      iVar6 = param_2 - (param_4 + (param_3 > param_1));
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        bVar13 = CARRY4(param_3,uVar7);
        param_3 = param_3 + uVar7;
        param_4 = param_4 + iVar6 + (uint)bVar13;
        bVar13 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = param_2 - (iVar6 + (uint)bVar13);
      }
      uVar7 = param_2 >> 0x14;
      uVar11 = uVar7 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) != 0) {
        param_2 = param_2 & ~(uVar7 << 0x14);
        param_4 = param_4 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar11;
        if (uVar11 < 0x21) {
          uVar8 = param_3 >> (uVar11 & 0xff);
          bVar13 = CARRY4(param_1,uVar8);
          uVar8 = param_1 + uVar8;
          uVar5 = param_4 << (uVar12 & 0xff);
          param_1 = uVar8 + uVar5;
          uVar11 = param_2 + (param_4 >> (uVar11 & 0xff)) + (uint)bVar13 + (uint)CARRY4(uVar8,uVar5)
          ;
          if (uVar11 < 0x100000) {
            param_2 = uVar11 + uVar7 * 0x100000;
            goto _08053524;
          }
_08053588:
          param_2 = (uVar11 + 0x100000 >> 1) + uVar7 * 0x100000;
          bVar13 = (bool)((byte)param_1 & 1);
          param_1 = (uint)((byte)(uVar11 + 0x100000) & 1) << 0x1f | param_1 >> 1;
          if (!bVar13) {
_080535C0:
            param_4 = param_2 * 2;
            if (param_4 < 0xffe00000) {
              return param_1;
            }
            puVar9 = (undefined2 *)0x10000011;
            param_2 = param_2 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(param_1,(uint)bVar13);
          param_1 = param_1 + bVar13;
          uVar7 = param_1;
          if (!bVar1) {
            uVar7 = param_3 << (uVar12 & 0xff);
          }
          if (uVar7 != 0) goto _080535C0;
        }
        else {
          param_3 = param_4 * 2 + (uint)(param_3 != 0);
          uVar11 = uVar11 - 0x20;
          bVar13 = uVar11 < 0x20;
          uVar12 = 0x1f - uVar11;
          if (bVar13) {
            param_4 = param_4 >> (uVar11 & 0xff);
            bVar13 = CARRY4(param_1,param_4);
            param_1 = param_1 + param_4;
          }
          else {
            uVar12 = 0;
          }
          param_2 = param_2 + uVar7 * 0x100000 + (uint)bVar13;
          if (uVar7 != param_2 >> 0x14) {
            uVar11 = param_2 + uVar7 * -0x100000;
            goto _08053588;
          }
_08053524:
          param_3 = param_3 << (uVar12 & 0xff);
          if (-1 < (int)param_3) {
            return param_1;
          }
          bVar13 = param_1 != 0xffffffff;
          param_1 = param_1 + 1;
          uVar7 = param_1;
          if (bVar13) {
            param_3 = param_3 << 1;
            uVar7 = param_3;
          }
          if (uVar7 != 0) {
            return param_1;
          }
        }
        if (param_1 == 0) {
          param_2 = param_2 + 1;
          param_1 = 0;
        }
        else {
          param_1 = param_1 & 0xfffffffe;
        }
        param_4 = param_2 << 1;
        if (param_4 < 0xffe00000) {
          return param_1;
        }
        puVar9 = (undefined2 *)0x10000011;
        if (param_4 >= 0xffe00000) {
          param_2 = param_2 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        if ((uVar7 & 0x7ff) != 0) {
          return param_1;
        }
        if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
          return param_1;
        }
        uVar7 = 0x11;
      }
      else {
        param_2 = param_2 & ~(uVar7 << 0x14);
        if ((uVar7 & 0x7ff) != 0) {
          param_4 = param_4 & 0x7fffffff;
          uVar11 = uVar11 - 1;
          goto _08053500;
        }
        bVar13 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + param_4 + (uint)bVar13;
        uVar7 = 0x11;
      }
_080538B8:
      if (param_2 << 1 == 0 && param_1 == 0) {
        return param_1;
      }
      if (0x1fffff < param_2 << 1) {
        return param_1;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return param_1;
      }
      uVar12 = param_2 >> 0x1f | 0x6000000;
      param_2 = param_2 & 0x7fffffff;
      if (param_2 == 0 && param_1 >> 0xc == 0) {
        param_1 = param_1 << 0x14;
        uVar12 = uVar12 - 0x140000;
      }
      uVar5 = param_1;
      if (param_2 == 0) {
        param_2 = param_1 >> 0xc;
        uVar5 = param_1 << 0x14;
        uVar12 = uVar12 - 0x140000;
      }
      uVar8 = 0;
      if (param_2 >> 5 == 0) {
        param_2 = param_2 << 0x10;
        uVar8 = 0x10;
      }
      if (param_2 >> 0xd == 0) {
        param_2 = param_2 << 8;
        uVar8 = uVar8 + 8;
      }
      if (param_2 >> 0x11 == 0) {
        param_2 = param_2 << 4;
        uVar8 = uVar8 + 4;
      }
      if (param_2 >> 0x13 == 0) {
        param_2 = param_2 << 2;
        uVar8 = uVar8 + 2;
      }
      if (param_2 >> 0x14 == 0) {
        param_2 = param_2 << 1;
        uVar8 = uVar8 + 1;
      }
      param_1 = uVar5 << (uVar8 & 0xff);
      uVar11 = 0x20 - uVar8;
      param_2 = ((param_2 | uVar5 >> (uVar11 & 0xff)) ^ uVar12 * -0x80000000) +
                (uVar12 + uVar8 * -0x10000 & 0xfffffffe) * 0x10;
      param_4 = param_1;
    }
    else {
      uVar7 = param_1 - param_3;
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        uVar11 = param_2 - (param_4 + (param_3 > param_1)) ^ 0x80000000;
        bVar13 = CARRY4(param_3,uVar7);
        param_3 = param_3 + uVar7;
        param_4 = param_4 + uVar11 + (uint)bVar13;
        bVar13 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = param_2 - (uVar11 + bVar13);
      }
      uVar7 = param_2 >> 0x14;
      uVar12 = uVar7 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) == 0) {
        if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
          if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
            return param_1;
          }
        }
        else {
          uVar5 = param_2 & ~(uVar7 << 0x14);
          if ((uVar7 & 0x7ff) != 0) {
            uVar12 = uVar12 - 1;
            iVar6 = -((param_4 & 0x7fffffff) + (uint)(param_3 != 0));
            goto _08053740;
          }
          bVar13 = param_1 < param_3;
          param_1 = param_1 - param_3;
          param_2 = uVar5 - (param_4 + bVar13);
        }
_080538B4:
        uVar7 = 0x12;
        goto _080538B8;
      }
      uVar5 = param_2 & ~(uVar7 << 0x14);
      iVar6 = -0x100000 - ((param_4 & 0xfffff) + (uint)(param_3 != 0));
_08053740:
      uVar11 = -param_3;
      uVar8 = 0x20 - uVar12;
      if (uVar12 < 0x21) {
        uVar3 = uVar11 >> (uVar12 & 0xff);
        uVar2 = param_1 + uVar3;
        uVar5 = uVar5 + (iVar6 >> (uVar12 & 0xff)) + (uint)CARRY4(param_1,uVar3);
        uVar12 = iVar6 << (uVar8 & 0xff);
        uVar3 = uVar2 + uVar12;
        bVar13 = CARRY4(uVar5,(uint)CARRY4(uVar2,uVar12));
        iVar6 = uVar5 + CARRY4(uVar2,uVar12);
      }
      else {
        param_3 = param_3 * -2;
        if (param_3 != 0) {
          param_3 = 1;
        }
        uVar11 = param_3 | (iVar6 * 2 + (uint)CARRY4(uVar11,uVar11)) * 2;
        uVar12 = uVar12 - 0x20;
        uVar8 = 0x1e - uVar12;
        if (0x1e < uVar12 || uVar8 == 0) {
          return param_1;
        }
        uVar12 = iVar6 >> (uVar12 & 0xff);
        uVar3 = param_1 + uVar12;
        bVar13 = uVar5 != 0 || uVar5 < CARRY4(param_1,uVar12);
        iVar6 = uVar5 - !CARRY4(param_1,uVar12);
      }
      if (-1 < iVar6) {
        iVar6 = uVar11 << (uVar8 & 0xff);
        if (-1 < iVar6) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 != 0 && iVar6 != -0x80000000) {
          return uVar3;
        }
        if (uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        return uVar3;
      }
      uVar12 = uVar8 + 1 & 0xff;
      bVar13 = uVar12 == 0 && bVar13 || uVar12 != 0 && (bool)((byte)(uVar11 >> 0x20 - uVar12) & 1);
      param_1 = uVar3 * 2 + (uint)bVar13;
      iVar6 = iVar6 * 2 + (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar13));
      uVar5 = iVar6 + uVar7 * 0x200000;
      bVar13 = (bool)((byte)(uVar5 >> 0x14) & 1);
      if (bVar13 && uVar5 >> 0x15 != 0) {
        uVar7 = -((int)(uVar11 << uVar12) >> 0x1f);
        uVar5 = param_1 + uVar7;
        bVar13 = uVar5 == 0;
        if (!CARRY4(param_1,uVar7)) {
          bVar13 = uVar11 << uVar12 == -0x80000000;
        }
        if (!bVar13) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar13) {
        param_1 = (uint)((byte)iVar6 & 1) << 0x1f | param_1 >> 1;
        param_2 = (iVar6 >> 1) + uVar7 * 0x100000;
        goto _080538B4;
      }
      uVar12 = iVar6 + 0x200000;
      if (uVar12 == 0 && param_1 == 0) {
        return param_1;
      }
      iVar6 = (uVar7 & 0xfffff7ff) - 2;
      do {
        bVar13 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar12 = uVar12 * 2 + (uint)bVar13;
        iVar6 = iVar6 + -1;
      } while ((uVar12 & 0x100000) == 0);
      if (0 < iVar6) {
        return param_1;
      }
      param_2 = uVar12 + (param_2 & 0x80000000) + iVar6 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar7 = 0x12;
      param_4 = *puVar4;
      if ((param_4 & 0x1000000) != 0) {
        return 0;
      }
      if ((param_4 & 0x800) == 0) {
        uVar7 = param_2 & ~((param_2 >> 0x14) << 0x14);
        iVar6 = -(param_2 >> 0x14 & 0xfffff7ff);
        uVar12 = iVar6 + 0x601;
        uVar11 = uVar7 | 0x100000;
        if (uVar12 < 0x36) {
          if (uVar12 == 0x35) {
            uVar12 = 0;
            uVar5 = 0x80000000;
            if (param_1 != 0 || (uVar7 & 0xfffff) != 0) {
              uVar5 = 0x80000001;
            }
          }
          else if (uVar12 < 0x15) {
            uVar5 = param_1 << (0x20 - uVar12 & 0xff);
            uVar12 = uVar11 << (0x20 - uVar12 & 0xff) | param_1 >> (uVar12 & 0xff);
          }
          else {
            uVar7 = iVar6 + 0x5e1;
            if (uVar12 < 0x20 || uVar7 == 0) {
              uVar12 = uVar11 << (-uVar7 & 0xff) | param_1 >> (uVar12 & 0xff);
              uVar5 = param_1 << (-uVar7 & 0xff);
            }
            else {
              uVar12 = uVar11 >> (uVar7 & 0xff);
              uVar5 = uVar11 << (0x20 - uVar7 & 0xff);
              if (param_1 != 0) {
                uVar5 = uVar5 | 1;
              }
            }
          }
        }
        else {
          uVar5 = 1;
          uVar12 = 0;
        }
        if (uVar5 != 0) {
          if (SUB41(uVar5 >> 0x1f,0)) {
            if ((uVar5 & 0x7fffffff) == 0) {
              uVar12 = uVar12 + 1 & 0xfffffffe;
            }
            else {
              uVar12 = uVar12 + 1;
            }
          }
          puVar4 = (uint *)sub_08047A2C();
          *puVar4 = *puVar4 | 8;
          return uVar12;
        }
        return uVar12;
      }
    }
    puVar9 = (undefined2 *)(uVar7 | 0x20000000);
  }
  uVar7 = sub_080491E4(param_1,param_2,uVar11,param_4);
  if (((uint)puVar9 & 0xf) != 9) {
    return uVar7;
  }
sub_08054F3C:
  uVar7 = (uint)puVar9 & uVar7 << 0x10;
  if (uVar7 != 0) {
    uVar7 = 1;
  }
  return uVar7;
}


/* sub_080536E0 @ 0x080536E0 */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sub_080536E0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if ((~(param_2 << 1) & 0xffe00000) == 0 || (~(param_4 << 1) & 0xffe00000) == 0) {
    uVar7 = param_2 * 2 + (uint)(param_1 != 0);
    if (uVar7 < 0xffe00001) {
      uVar7 = param_4 * 2 + (uint)(param_3 != 0);
    }
    puVar9 = &REG_BG0VOFS;
    if (0xffe00000 < uVar7) {
      uVar11 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
      uVar7 = uVar11;
      if (uVar11 < 0xfff00001) {
        uVar7 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
      }
      if (0xfff00000 < uVar7) goto sub_08054850;
      if (0xfffff < uVar11) {
        param_1 = param_3;
        param_2 = param_4;
      }
sub_08054E78:
      uVar7 = (uint)puVar9 & 0xf;
      if (uVar7 != 9) {
        if (uVar7 != 8) {
          return param_1;
        }
        if (uVar7 == 8) {
          if (((uint)puVar9 & 0x10) == 0) {
            uVar7 = 0x7fc00000;
          }
          else {
            uVar7 = 0;
          }
          return uVar7;
        }
        if (((uint)puVar9 & 0x10) == 0) {
          uVar7 = 0x7fffffff;
          param_2 = param_1;
        }
        else {
          uVar7 = 0xffffffff;
        }
        if ((param_2 & 0x80000000) != 0) {
          uVar7 = ~uVar7;
        }
        return uVar7;
      }
      uVar7 = 8;
      goto sub_08054F3C;
    }
    iVar6 = param_2 * 2 + (uint)(param_1 != 0);
    if (iVar6 != param_4 * 2 + (uint)(param_3 != 0)) {
      if (iVar6 == -0x200000) {
        return 0;
      }
      return 0;
    }
    param_1 = 0;
    if ((int)(param_2 ^ param_4) < 0) {
      return 0;
    }
    param_3 = 0;
    puVar9 = &REG_BG0VOFS;
sub_08054850:
    uVar11 = param_3;
    if (((uint)puVar9 & 0x10) == 0) {
      uVar11 = param_2;
    }
    puVar4 = (uint *)sub_08047A2C();
    uVar7 = *puVar4;
    if (((uint)puVar9 & ~(uVar7 << 0x12) & 0x30000000) != 0) {
      puVar9 = (undefined2 *)((uint)puVar9 | 0x40000000);
    }
    puVar10 = (undefined2 *)((uint)puVar9 | uVar7 & 0x1c00000);
    *puVar4 = uVar7 | (uint)((int)puVar9 << 1) >> 0x1b;
    bVar13 = ((uint)puVar9 & 0xf) != 8;
    if (bVar13) {
      uVar12 = (uint)puVar9 & 0x70;
      puVar9 = (undefined2 *)((uint)puVar10 | uVar12 << 3);
    }
    else {
      uVar12 = 0x20000;
      puVar9 = puVar10;
    }
    if (!bVar13 && (uVar12 & ~(uint)puVar9) == 0) {
      puVar9 = (undefined2 *)((uint)puVar9 | 0xc00000);
    }
    if (((uint)puVar9 & 0x10000000) == 0) {
      if (((uint)puVar9 & 0x40000000) == 0) {
        if ((uVar7 & 0x100) == 0) {
          uVar7 = param_2;
          if (((uint)puVar9 & 0x80) == 0) {
            uVar7 = param_1;
          }
          if (((uint)puVar9 & 0x10) == 0) {
            param_1 = uVar7 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar7 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar7 & 0x1000) == 0) {
        return param_1;
      }
    }
    else if ((uVar7 & 0x400) == 0) {
      if (((uint)puVar9 & 0x80) == 0) {
        param_2 = param_1;
      }
      if (((uint)puVar9 & 0x10) == 0) {
        uVar7 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar7 = 0;
      }
      return uVar7;
    }
  }
  else {
    if ((int)(param_2 ^ param_4) < 0) {
      param_4 = param_4 ^ 0x80000000;
      uVar7 = param_1 - param_3;
      iVar6 = param_2 - (param_4 + (param_3 > param_1));
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        bVar13 = CARRY4(param_3,uVar7);
        param_3 = param_3 + uVar7;
        param_4 = param_4 + iVar6 + (uint)bVar13;
        bVar13 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = param_2 - (iVar6 + (uint)bVar13);
      }
      uVar7 = param_2 >> 0x14;
      uVar11 = uVar7 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) != 0) {
        param_2 = param_2 & ~(uVar7 << 0x14);
        param_4 = param_4 & 0x1fffff | 0x100000;
_08053500:
        uVar12 = 0x20 - uVar11;
        if (uVar11 < 0x21) {
          uVar8 = param_3 >> (uVar11 & 0xff);
          bVar13 = CARRY4(param_1,uVar8);
          uVar8 = param_1 + uVar8;
          uVar5 = param_4 << (uVar12 & 0xff);
          param_1 = uVar8 + uVar5;
          uVar11 = param_2 + (param_4 >> (uVar11 & 0xff)) + (uint)bVar13 + (uint)CARRY4(uVar8,uVar5)
          ;
          if (uVar11 < 0x100000) {
            param_2 = uVar11 + uVar7 * 0x100000;
            goto _08053524;
          }
_08053588:
          param_2 = (uVar11 + 0x100000 >> 1) + uVar7 * 0x100000;
          bVar13 = (bool)((byte)param_1 & 1);
          param_1 = (uint)((byte)(uVar11 + 0x100000) & 1) << 0x1f | param_1 >> 1;
          if (!bVar13) {
_080535C0:
            param_4 = param_2 * 2;
            if (param_4 < 0xffe00000) {
              return param_1;
            }
            puVar9 = (undefined2 *)0x10000011;
            param_2 = param_2 + 0xa0000000;
            goto sub_08054850;
          }
          bVar1 = CARRY4(param_1,(uint)bVar13);
          param_1 = param_1 + bVar13;
          uVar7 = param_1;
          if (!bVar1) {
            uVar7 = param_3 << (uVar12 & 0xff);
          }
          if (uVar7 != 0) goto _080535C0;
        }
        else {
          param_3 = param_4 * 2 + (uint)(param_3 != 0);
          uVar11 = uVar11 - 0x20;
          bVar13 = uVar11 < 0x20;
          uVar12 = 0x1f - uVar11;
          if (bVar13) {
            param_4 = param_4 >> (uVar11 & 0xff);
            bVar13 = CARRY4(param_1,param_4);
            param_1 = param_1 + param_4;
          }
          else {
            uVar12 = 0;
          }
          param_2 = param_2 + uVar7 * 0x100000 + (uint)bVar13;
          if (uVar7 != param_2 >> 0x14) {
            uVar11 = param_2 + uVar7 * -0x100000;
            goto _08053588;
          }
_08053524:
          param_3 = param_3 << (uVar12 & 0xff);
          if (-1 < (int)param_3) {
            return param_1;
          }
          bVar13 = param_1 != 0xffffffff;
          param_1 = param_1 + 1;
          uVar7 = param_1;
          if (bVar13) {
            param_3 = param_3 << 1;
            uVar7 = param_3;
          }
          if (uVar7 != 0) {
            return param_1;
          }
        }
        if (param_1 == 0) {
          param_2 = param_2 + 1;
          param_1 = 0;
        }
        else {
          param_1 = param_1 & 0xfffffffe;
        }
        param_4 = param_2 << 1;
        if (param_4 < 0xffe00000) {
          return param_1;
        }
        puVar9 = (undefined2 *)0x10000011;
        if (param_4 >= 0xffe00000) {
          param_2 = param_2 + 0xa0000000;
        }
        goto sub_08054850;
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        if ((uVar7 & 0x7ff) != 0) {
          return param_1;
        }
        if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
          return param_1;
        }
        uVar7 = 0x11;
      }
      else {
        param_2 = param_2 & ~(uVar7 << 0x14);
        if ((uVar7 & 0x7ff) != 0) {
          param_4 = param_4 & 0x7fffffff;
          uVar11 = uVar11 - 1;
          goto _08053500;
        }
        bVar13 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + param_4 + (uint)bVar13;
        uVar7 = 0x11;
      }
_080538B8:
      if (param_2 << 1 == 0 && param_1 == 0) {
        return param_1;
      }
      if (0x1fffff < param_2 << 1) {
        return param_1;
      }
      puVar4 = (uint *)sub_08047A2C();
      if ((*puVar4 & 0x1000000) != 0) {
        return 0;
      }
      if ((*puVar4 & 0x800) == 0) {
        return param_1;
      }
      uVar12 = param_2 >> 0x1f | 0x6000000;
      param_2 = param_2 & 0x7fffffff;
      if (param_2 == 0 && param_1 >> 0xc == 0) {
        param_1 = param_1 << 0x14;
        uVar12 = uVar12 - 0x140000;
      }
      uVar5 = param_1;
      if (param_2 == 0) {
        param_2 = param_1 >> 0xc;
        uVar5 = param_1 << 0x14;
        uVar12 = uVar12 - 0x140000;
      }
      uVar8 = 0;
      if (param_2 >> 5 == 0) {
        param_2 = param_2 << 0x10;
        uVar8 = 0x10;
      }
      if (param_2 >> 0xd == 0) {
        param_2 = param_2 << 8;
        uVar8 = uVar8 + 8;
      }
      if (param_2 >> 0x11 == 0) {
        param_2 = param_2 << 4;
        uVar8 = uVar8 + 4;
      }
      if (param_2 >> 0x13 == 0) {
        param_2 = param_2 << 2;
        uVar8 = uVar8 + 2;
      }
      if (param_2 >> 0x14 == 0) {
        param_2 = param_2 << 1;
        uVar8 = uVar8 + 1;
      }
      param_1 = uVar5 << (uVar8 & 0xff);
      uVar11 = 0x20 - uVar8;
      param_2 = ((param_2 | uVar5 >> (uVar11 & 0xff)) ^ uVar12 * -0x80000000) +
                (uVar12 + uVar8 * -0x10000 & 0xfffffffe) * 0x10;
      param_4 = param_1;
    }
    else {
      uVar7 = param_1 - param_3;
      if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
        uVar11 = param_2 - (param_4 + (param_3 > param_1)) ^ 0x80000000;
        bVar13 = CARRY4(param_3,uVar7);
        param_3 = param_3 + uVar7;
        param_4 = param_4 + uVar11 + (uint)bVar13;
        bVar13 = param_1 < uVar7;
        param_1 = param_1 - uVar7;
        param_2 = param_2 - (uVar11 + bVar13);
      }
      uVar7 = param_2 >> 0x14;
      uVar12 = uVar7 - (param_4 >> 0x14);
      if ((param_4 & 0x7ff00000) == 0) {
        if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
          if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
            return param_1;
          }
        }
        else {
          uVar5 = param_2 & ~(uVar7 << 0x14);
          if ((uVar7 & 0x7ff) != 0) {
            uVar12 = uVar12 - 1;
            iVar6 = -((param_4 & 0x7fffffff) + (uint)(param_3 != 0));
            goto _08053740;
          }
          bVar13 = param_1 < param_3;
          param_1 = param_1 - param_3;
          param_2 = uVar5 - (param_4 + bVar13);
        }
_080538B4:
        uVar7 = 0x12;
        goto _080538B8;
      }
      uVar5 = param_2 & ~(uVar7 << 0x14);
      iVar6 = -0x100000 - ((param_4 & 0xfffff) + (uint)(param_3 != 0));
_08053740:
      uVar11 = -param_3;
      uVar8 = 0x20 - uVar12;
      if (uVar12 < 0x21) {
        uVar3 = uVar11 >> (uVar12 & 0xff);
        uVar2 = param_1 + uVar3;
        uVar5 = uVar5 + (iVar6 >> (uVar12 & 0xff)) + (uint)CARRY4(param_1,uVar3);
        uVar12 = iVar6 << (uVar8 & 0xff);
        uVar3 = uVar2 + uVar12;
        bVar13 = CARRY4(uVar5,(uint)CARRY4(uVar2,uVar12));
        iVar6 = uVar5 + CARRY4(uVar2,uVar12);
      }
      else {
        param_3 = param_3 * -2;
        if (param_3 != 0) {
          param_3 = 1;
        }
        uVar11 = param_3 | (iVar6 * 2 + (uint)CARRY4(uVar11,uVar11)) * 2;
        uVar12 = uVar12 - 0x20;
        uVar8 = 0x1e - uVar12;
        if (0x1e < uVar12 || uVar8 == 0) {
          return param_1;
        }
        uVar12 = iVar6 >> (uVar12 & 0xff);
        uVar3 = param_1 + uVar12;
        bVar13 = uVar5 != 0 || uVar5 < CARRY4(param_1,uVar12);
        iVar6 = uVar5 - !CARRY4(param_1,uVar12);
      }
      if (-1 < iVar6) {
        iVar6 = uVar11 << (uVar8 & 0xff);
        if (-1 < iVar6) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 != 0 && iVar6 != -0x80000000) {
          return uVar3;
        }
        if (uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        return uVar3;
      }
      uVar12 = uVar8 + 1 & 0xff;
      bVar13 = uVar12 == 0 && bVar13 || uVar12 != 0 && (bool)((byte)(uVar11 >> 0x20 - uVar12) & 1);
      param_1 = uVar3 * 2 + (uint)bVar13;
      iVar6 = iVar6 * 2 + (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar13));
      uVar5 = iVar6 + uVar7 * 0x200000;
      bVar13 = (bool)((byte)(uVar5 >> 0x14) & 1);
      if (bVar13 && uVar5 >> 0x15 != 0) {
        uVar7 = -((int)(uVar11 << uVar12) >> 0x1f);
        uVar5 = param_1 + uVar7;
        bVar13 = uVar5 == 0;
        if (!CARRY4(param_1,uVar7)) {
          bVar13 = uVar11 << uVar12 == -0x80000000;
        }
        if (!bVar13) {
          return uVar5;
        }
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xfffffffe;
        }
        return uVar5;
      }
      if (bVar13) {
        param_1 = (uint)((byte)iVar6 & 1) << 0x1f | param_1 >> 1;
        param_2 = (iVar6 >> 1) + uVar7 * 0x100000;
        goto _080538B4;
      }
      uVar12 = iVar6 + 0x200000;
      if (uVar12 == 0 && param_1 == 0) {
        return param_1;
      }
      iVar6 = (uVar7 & 0xfffff7ff) - 2;
      do {
        bVar13 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar12 = uVar12 * 2 + (uint)bVar13;
        iVar6 = iVar6 + -1;
      } while ((uVar12 & 0x100000) == 0);
      if (0 < iVar6) {
        return param_1;
      }
      param_2 = uVar12 + (param_2 & 0x80000000) + iVar6 * 0x100000 + 0x60000000;
      puVar4 = (uint *)sub_08047A2C();
      uVar7 = 0x12;
      param_4 = *puVar4;
      if ((param_4 & 0x1000000) != 0) {
        return 0;
      }
      if ((param_4 & 0x800) == 0) {
        uVar7 = param_2 & ~((param_2 >> 0x14) << 0x14);
        iVar6 = -(param_2 >> 0x14 & 0xfffff7ff);
        uVar12 = iVar6 + 0x601;
        uVar11 = uVar7 | 0x100000;
        if (uVar12 < 0x36) {
          if (uVar12 == 0x35) {
            uVar12 = 0;
            uVar5 = 0x80000000;
            if (param_1 != 0 || (uVar7 & 0xfffff) != 0) {
              uVar5 = 0x80000001;
            }
          }
          else if (uVar12 < 0x15) {
            uVar5 = param_1 << (0x20 - uVar12 & 0xff);
            uVar12 = uVar11 << (0x20 - uVar12 & 0xff) | param_1 >> (uVar12 & 0xff);
          }
          else {
            uVar7 = iVar6 + 0x5e1;
            if (uVar12 < 0x20 || uVar7 == 0) {
              uVar12 = uVar11 << (-uVar7 & 0xff) | param_1 >> (uVar12 & 0xff);
              uVar5 = param_1 << (-uVar7 & 0xff);
            }
            else {
              uVar12 = uVar11 >> (uVar7 & 0xff);
              uVar5 = uVar11 << (0x20 - uVar7 & 0xff);
              if (param_1 != 0) {
                uVar5 = uVar5 | 1;
              }
            }
          }
        }
        else {
          uVar5 = 1;
          uVar12 = 0;
        }
        if (uVar5 != 0) {
          if (SUB41(uVar5 >> 0x1f,0)) {
            if ((uVar5 & 0x7fffffff) == 0) {
              uVar12 = uVar12 + 1 & 0xfffffffe;
            }
            else {
              uVar12 = uVar12 + 1;
            }
          }
          puVar4 = (uint *)sub_08047A2C();
          *puVar4 = *puVar4 | 8;
          return uVar12;
        }
        return uVar12;
      }
    }
    puVar9 = (undefined2 *)(uVar7 | 0x20000000);
  }
  uVar7 = sub_080491E4(param_1,param_2,uVar11,param_4);
  if (((uint)puVar9 & 0xf) != 9) {
    return uVar7;
  }
sub_08054F3C:
  uVar7 = (uint)puVar9 & uVar7 << 0x10;
  if (uVar7 != 0) {
    uVar7 = 1;
  }
  return uVar7;
}


/* sub_08053950 @ 0x08053950 */

uint sub_08053950(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  undefined4 in_lr;
  bool bVar5;
  
  uVar4 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
  uVar3 = uVar4;
  if (uVar4 < 0xfff00001) {
    uVar3 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
  }
  if (uVar3 < 0xfff00001) {
    if (0xfffff < uVar4) {
      param_1 = param_3;
      param_2 = param_4;
    }
sub_08054E78:
    uVar3 = in_r12 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 != 8) {
        return param_1;
      }
      if (uVar3 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar3 = 0x7fc00000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar3 = 0xffffffff;
        if ((param_3 & 0x80000000) != 0) {
          uVar3 = 0;
        }
        return uVar3;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar3 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar3 = ~uVar3;
      }
      return uVar3;
    }
    uVar3 = 8;
    goto sub_08054F3C;
  }
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar3 = *puVar1;
  if ((in_r12 & ~(uVar3 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar3 & 0x1c00000;
  *puVar1 = uVar3 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar2 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar2 << 3;
  }
  else {
    uVar2 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar2 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar3 = uVar3 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar3 & 0x100) == 0) {
          param_3 = param_2;
          if ((in_r12 & 0x80) == 0) {
            param_3 = param_1;
          }
          param_3 = param_3 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = param_3 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = param_3;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar3 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar3 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar3 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = uVar3 & 0x800;
joined_r0x08054900:
    if (uVar3 == 0) {
      return param_1;
    }
  }
  uVar3 = sub_080491E4(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar3 = in_r12 & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08053954 @ 0x08053954 */

uint sub_08053954(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  undefined4 in_lr;
  bool bVar5;
  
  uVar4 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
  uVar3 = uVar4;
  if (uVar4 < 0xfff00001) {
    uVar3 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
  }
  if (uVar3 < 0xfff00001) {
    if (0xfffff < uVar4) {
      param_1 = param_3;
      param_2 = param_4;
    }
sub_08054E78:
    uVar3 = in_r12 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 != 8) {
        return param_1;
      }
      if (uVar3 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar3 = 0x7fc00000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar3 = 0xffffffff;
        if ((param_3 & 0x80000000) != 0) {
          uVar3 = 0;
        }
        return uVar3;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar3 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar3 = ~uVar3;
      }
      return uVar3;
    }
    uVar3 = 8;
    goto sub_08054F3C;
  }
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar3 = *puVar1;
  if ((in_r12 & ~(uVar3 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar3 & 0x1c00000;
  *puVar1 = uVar3 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar2 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar2 << 3;
  }
  else {
    uVar2 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar2 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar3 = uVar3 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar3 & 0x100) == 0) {
          param_3 = param_2;
          if ((in_r12 & 0x80) == 0) {
            param_3 = param_1;
          }
          param_3 = param_3 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = param_3 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = param_3;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar3 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar3 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar3 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = uVar3 & 0x800;
joined_r0x08054900:
    if (uVar3 == 0) {
      return param_1;
    }
  }
  uVar3 = sub_080491E4(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar3 = in_r12 & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08053994 @ 0x08053994 */

uint sub_08053994(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  uint uVar4;
  undefined4 in_lr;
  bool bVar5;
  
  if ((param_2 & 0x80000) != 0) {
    uVar2 = in_r12 & 0x4f;
    if (uVar2 == 0x48) {
      param_3 = 0x48;
      goto sub_08054850;
    }
sub_08054E78:
    uVar4 = in_r12 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1;
      }
      if (uVar4 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar2 = 0x7fc00000;
        }
        else {
          uVar2 = 0;
        }
        return uVar2;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar4 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar2 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar2 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar2 = ~uVar2;
      }
      return uVar2;
    }
    uVar2 = 8;
    goto sub_08054F3C;
  }
sub_08054850:
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08054900:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar2;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08053998 @ 0x08053998 */

uint sub_08053998(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  uint uVar4;
  undefined4 in_lr;
  bool bVar5;
  
  if ((param_2 & 0x80000) != 0) {
    uVar2 = in_r12 & 0x4f;
    if (uVar2 == 0x48) {
      param_3 = 0x48;
      goto sub_08054850;
    }
sub_08054E78:
    uVar4 = in_r12 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1;
      }
      if (uVar4 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar2 = 0x7fc00000;
        }
        else {
          uVar2 = 0;
        }
        return uVar2;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar4 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar2 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar2 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar2 = ~uVar2;
      }
      return uVar2;
    }
    uVar2 = 8;
    goto sub_08054F3C;
  }
sub_08054850:
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08054900:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar2;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_080539B0 @ 0x080539B0 */

uint sub_080539B0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  undefined4 in_lr;
  bool bVar5;
  bool bVar6;
  
  uVar3 = param_2 * 2;
  bVar5 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    uVar3 = param_4 * 2;
    bVar5 = uVar3 == 0xffe00000;
  }
  bVar6 = bVar5;
  if (bVar5) {
    bVar6 = param_3 == 0;
  }
  if (!bVar5 && uVar3 < 0xffe00000 || bVar6) {
    if ((int)(param_2 | param_4) < 0) {
      bVar5 = SBORROW4(param_4,param_2);
      if (param_4 == param_2) {
        bVar5 = SBORROW4(param_3,param_1);
      }
      if (!bVar5) {
        return param_1;
      }
    }
    else {
      bVar5 = SBORROW4(param_2,param_4);
      if (param_2 == param_4) {
        bVar5 = SBORROW4(param_1,param_3);
      }
      if (!bVar5) {
        return param_1;
      }
    }
    return param_1;
  }
  if ((in_r12 & 0x50000) == 0) {
    uVar4 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
    uVar3 = uVar4;
    if (uVar4 < 0xfff00001) {
      uVar3 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
    }
    if (0xfff00000 < uVar3) goto sub_08054850;
    if (0xfffff < uVar4) {
      param_1 = param_3;
      param_2 = param_4;
    }
sub_08054E78:
    uVar3 = in_r12 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 != 8) {
        return param_1;
      }
      if (uVar3 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar3 = 0x7fc00000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar3 = 0xffffffff;
        if ((param_3 & 0x80000000) != 0) {
          uVar3 = 0;
        }
        return uVar3;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar3 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar3 = ~uVar3;
      }
      return uVar3;
    }
    uVar3 = 8;
    goto sub_08054F3C;
  }
sub_08054850:
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar3 = *puVar1;
  if ((in_r12 & ~(uVar3 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar3 & 0x1c00000;
  *puVar1 = uVar3 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar2 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar2 << 3;
  }
  else {
    uVar2 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar2 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar3 = uVar3 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar3 & 0x100) == 0) {
          param_3 = param_2;
          if ((in_r12 & 0x80) == 0) {
            param_3 = param_1;
          }
          param_3 = param_3 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = param_3 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = param_3;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar3 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar3 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar3 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = uVar3 & 0x800;
joined_r0x08054900:
    if (uVar3 == 0) {
      return param_1;
    }
  }
  uVar3 = sub_080491E4(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar3 = in_r12 & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_080539B4 @ 0x080539B4 */

uint sub_080539B4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  undefined4 in_lr;
  bool bVar5;
  bool bVar6;
  
  uVar3 = param_2 * 2;
  bVar5 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    uVar3 = param_4 * 2;
    bVar5 = uVar3 == 0xffe00000;
  }
  bVar6 = bVar5;
  if (bVar5) {
    bVar6 = param_3 == 0;
  }
  if (!bVar5 && uVar3 < 0xffe00000 || bVar6) {
    if ((int)(param_2 | param_4) < 0) {
      bVar5 = SBORROW4(param_4,param_2);
      if (param_4 == param_2) {
        bVar5 = SBORROW4(param_3,param_1);
      }
      if (!bVar5) {
        return param_1;
      }
    }
    else {
      bVar5 = SBORROW4(param_2,param_4);
      if (param_2 == param_4) {
        bVar5 = SBORROW4(param_1,param_3);
      }
      if (!bVar5) {
        return param_1;
      }
    }
    return param_1;
  }
  if ((in_r12 & 0x50000) == 0) {
    uVar4 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
    uVar3 = uVar4;
    if (uVar4 < 0xfff00001) {
      uVar3 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
    }
    if (0xfff00000 < uVar3) goto sub_08054850;
    if (0xfffff < uVar4) {
      param_1 = param_3;
      param_2 = param_4;
    }
sub_08054E78:
    uVar3 = in_r12 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 != 8) {
        return param_1;
      }
      if (uVar3 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar3 = 0x7fc00000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar3 = 0xffffffff;
        if ((param_3 & 0x80000000) != 0) {
          uVar3 = 0;
        }
        return uVar3;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar3 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar3 = ~uVar3;
      }
      return uVar3;
    }
    uVar3 = 8;
    goto sub_08054F3C;
  }
sub_08054850:
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar3 = *puVar1;
  if ((in_r12 & ~(uVar3 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar3 & 0x1c00000;
  *puVar1 = uVar3 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar2 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar2 << 3;
  }
  else {
    uVar2 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar2 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar3 = uVar3 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar3 & 0x100) == 0) {
          param_3 = param_2;
          if ((in_r12 & 0x80) == 0) {
            param_3 = param_1;
          }
          param_3 = param_3 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = param_3 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = param_3;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar3 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar3 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar3 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = uVar3 & 0x800;
joined_r0x08054900:
    if (uVar3 == 0) {
      return param_1;
    }
  }
  uVar3 = sub_080491E4(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar3 = in_r12 & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08053A1C @ 0x08053A1C */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */

uint sub_08053A1C(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined4 in_lr;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  
  if ((~(param_4 >> 4) & 0x7ff0000) != 0 && (~(param_2 >> 4) & 0x7ff0000) != 0) {
    uVar3 = param_4 >> 4 & 0x7ff0000;
    uVar4 = uVar3 | (param_4 ^ param_2) >> 0x1f;
    uVar6 = param_2 >> 4 & 0x7ff0000;
    if (uVar6 == 0 || (param_4 & 0x7ff00000) == 0) {
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
          return param_3;
        }
        goto _08053CEC;
      }
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        puVar8 = (undefined2 *)&UNK_08000014;
        goto sub_08054850;
      }
      if (uVar6 == 0) {
        iVar5 = 0x10000;
        param_2 = param_2 & 0x7fffffff;
        if (param_2 == 0 && param_1 >> 0xc == 0) {
          param_1 = param_1 << 0x14;
          iVar5 = -0x130000;
        }
        uVar1 = param_1;
        if (param_2 == 0) {
          param_2 = param_1 >> 0xc;
          uVar1 = param_1 << 0x14;
          iVar5 = iVar5 + -0x140000;
        }
        uVar7 = 0;
        if (param_2 >> 5 == 0) {
          param_2 = param_2 << 0x10;
          uVar7 = 0x10;
        }
        if (param_2 >> 0xd == 0) {
          param_2 = param_2 << 8;
          uVar7 = uVar7 + 8;
        }
        if (param_2 >> 0x11 == 0) {
          param_2 = param_2 << 4;
          uVar7 = uVar7 + 4;
        }
        if (param_2 >> 0x13 == 0) {
          param_2 = param_2 << 2;
          uVar7 = uVar7 + 2;
        }
        if (param_2 >> 0x14 == 0) {
          param_2 = param_2 << 1;
          uVar7 = uVar7 + 1;
        }
        uVar6 = iVar5 + uVar7 * -0x10000;
        param_1 = uVar1 << (uVar7 & 0xff);
        param_2 = param_2 | uVar1 >> (0x20 - uVar7 & 0xff);
      }
      if (uVar3 == 0) {
        iVar5 = uVar4 + 0x10000;
        param_4 = param_4 & 0x7fffffff;
        if (param_4 == 0 && param_3 >> 0xc == 0) {
          param_3 = param_3 << 0x14;
          iVar5 = uVar4 - 0x130000;
        }
        uVar3 = param_3;
        if (param_4 == 0) {
          param_4 = param_3 >> 0xc;
          uVar3 = param_3 << 0x14;
          iVar5 = iVar5 + -0x140000;
        }
        uVar1 = 0;
        if (param_4 >> 5 == 0) {
          param_4 = param_4 << 0x10;
          uVar1 = 0x10;
        }
        if (param_4 >> 0xd == 0) {
          param_4 = param_4 << 8;
          uVar1 = uVar1 + 8;
        }
        if (param_4 >> 0x11 == 0) {
          param_4 = param_4 << 4;
          uVar1 = uVar1 + 4;
        }
        if (param_4 >> 0x13 == 0) {
          param_4 = param_4 << 2;
          uVar1 = uVar1 + 2;
        }
        if (param_4 >> 0x14 == 0) {
          param_4 = param_4 << 1;
          uVar1 = uVar1 + 1;
        }
        uVar4 = iVar5 + uVar1 * -0x10000;
        param_3 = uVar3 << (uVar1 & 0xff);
        param_4 = param_4 | uVar3 >> (0x20 - uVar1 & 0xff);
      }
    }
    iVar5 = (uVar4 - uVar6) + 0x3fc0000;
    param_2 = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
    param_1 = param_1 << 0xb;
    uVar12 = sub_08053CF8(param_3 << 0xb,param_4 << 0xb | param_3 >> 0x15 | 0x80000000);
    param_2 = param_2 + (iVar5 >> 0x10);
    uVar3 = (int)uVar12 << 0x15;
    param_3 = (uint)(uVar12 >> 0xb);
    param_4 = (int)((uVar12 >> 0xb) >> 0x20) + param_2 * 0x100000 ^ uVar4 * -0x80000000;
    if (uVar3 != 0) {
      bVar10 = SUB41(uVar3 >> 0x1f,0);
      if (bVar10) {
        if ((uVar12 & 0x3ff) == 0) {
          param_2 = 0x80000000;
        }
        else {
          param_2 = 0;
        }
        uVar1 = param_3 + bVar10;
        param_4 = param_4 + CARRY4(param_3,(uint)bVar10);
        uVar3 = 0x40000000;
        param_3 = uVar1 & ~(param_2 >> 0x1f);
        if ((uVar1 & param_2 >> 0x1f) != 0) {
          uVar3 = 0xc0000000;
        }
      }
      else {
        uVar3 = 0xc0000000;
      }
    }
    if ((-1 < (int)(param_4 ^ uVar4 * -0x80000000)) &&
       ((param_4 & 0x7ff00000) != 0 && (~param_4 & 0x7ff00000) != 0)) {
      return param_3;
    }
    bVar11 = SBORROW4(iVar5,0x4000000);
    bVar10 = (int)((uVar4 - uVar6) + -0x40000) < 0;
    if (iVar5 < 0x4000001) {
      param_4 = param_4 + 0x60000000;
    }
    if (bVar10 == bVar11) {
      param_4 = param_4 + 0xa0000000;
    }
    puVar8 = (undefined2 *)(uVar3 | 0x14);
    if (bVar10 == bVar11) {
      puVar8 = (undefined2 *)(uVar3 | 0x10000014);
    }
    if (iVar5 != 0x4000000 && bVar10 == bVar11) goto sub_08054850;
    puVar2 = (uint *)sub_08047A2C();
    param_2 = *puVar2;
    if ((param_2 & 0x1000000) != 0) {
      return 0;
    }
    if ((param_2 & 0x800) == 0) {
      if ((int)param_4 < 0) {
        puVar8 = (undefined2 *)((uint)puVar8 | 0x10000);
      }
      uVar3 = param_4 & ~((param_4 >> 0x14) << 0x14);
      iVar5 = -(param_4 >> 0x14 & 0xfffff7ff);
      uVar6 = iVar5 + 0x601;
      uVar4 = uVar3 | 0x100000;
      if (uVar6 < 0x36) {
        if (uVar6 == 0x35) {
          uVar6 = 0;
          uVar1 = 0x80000000;
          if (param_3 != 0 || (uVar3 & 0xfffff) != 0) {
            uVar1 = 0x80000001;
          }
        }
        else if (uVar6 < 0x15) {
          uVar1 = param_3 << (0x20 - uVar6 & 0xff);
          uVar6 = uVar4 << (0x20 - uVar6 & 0xff) | param_3 >> (uVar6 & 0xff);
        }
        else {
          uVar3 = iVar5 + 0x5e1;
          if (uVar6 < 0x20 || uVar3 == 0) {
            uVar6 = uVar4 << (-uVar3 & 0xff) | param_3 >> (uVar6 & 0xff);
            uVar1 = param_3 << (-uVar3 & 0xff);
          }
          else {
            uVar6 = uVar4 >> (uVar3 & 0xff);
            uVar1 = uVar4 << (0x20 - uVar3 & 0xff);
            if (param_3 != 0) {
              uVar1 = uVar1 | 1;
            }
          }
        }
      }
      else {
        uVar1 = 1;
        uVar6 = 0;
      }
      if (uVar1 != 0) {
        if (SUB41(uVar1 >> 0x1f,0)) {
          if (((uVar1 & 0x7fffffff) == 0) && (-1 < (int)puVar8 >> 0x1e)) {
            if ((int)puVar8 >> 0x1e == 0) {
              uVar6 = uVar6 + 1 & 0xfffffffe;
            }
          }
          else {
            uVar6 = uVar6 + 1;
          }
        }
        puVar2 = (uint *)sub_08047A2C();
        *puVar2 = *puVar2 | 8;
        return uVar6;
      }
      return uVar6;
    }
    puVar8 = (undefined2 *)((uint)puVar8 | 0x20000000);
    goto sub_08054F14;
  }
  uVar3 = param_4 * 2;
  bVar10 = uVar3 == 0xffe00000 && param_3 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_3 == 0) {
    bVar10 = param_2 * 2 == 0xffe00000;
    uVar3 = param_2 * 2;
  }
  bVar11 = bVar10;
  if (bVar10) {
    bVar11 = param_1 == 0;
  }
  puVar8 = &REG_BG1HOFS;
  if ((bVar10 || 0xffdfffff < uVar3) && !bVar11) {
    uVar4 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
    uVar3 = uVar4;
    if (uVar4 < 0xfff00001) {
      uVar3 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
    }
    if (0xfff00000 < uVar3) goto sub_08054850;
    if (0xfffff < uVar4) {
      param_3 = param_1;
      param_4 = param_2;
    }
sub_08054E78:
    uVar3 = (uint)puVar8 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 != 8) {
        return param_3;
      }
      if (uVar3 == 8) {
        if (((uint)puVar8 & 0x10) == 0) {
          uVar3 = 0x7fc00000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      if (((uint)puVar8 & 0x10) == 0) {
        uVar3 = 0x7fffffff;
        param_4 = param_3;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if ((param_4 & 0x80000000) != 0) {
        uVar3 = ~uVar3;
      }
      return uVar3;
    }
    uVar3 = 8;
    goto sub_08054F3C;
  }
  if ((~(param_4 >> 4) & 0x7ff0000) != 0) {
    return 0;
  }
  param_3 = 0;
  if ((~(param_2 >> 4) & 0x7ff0000) != 0) {
    return param_3;
  }
_08053CEC:
  puVar8 = &REG_BG1HOFS;
sub_08054850:
  if (((uint)puVar8 & 0x10) == 0) {
    param_1 = param_4;
  }
  puVar2 = (uint *)sub_08047A2C();
  uVar3 = *puVar2;
  if (((uint)puVar8 & ~(uVar3 << 0x12) & 0x30000000) != 0) {
    puVar8 = (undefined2 *)((uint)puVar8 | 0x40000000);
  }
  puVar9 = (undefined2 *)((uint)puVar8 | uVar3 & 0x1c00000);
  *puVar2 = uVar3 | (uint)((int)puVar8 << 1) >> 0x1b;
  bVar10 = ((uint)puVar8 & 0xf) != 8;
  if (bVar10) {
    uVar4 = (uint)puVar8 & 0x70;
    puVar8 = (undefined2 *)((uint)puVar9 | uVar4 << 3);
  }
  else {
    uVar4 = 0x20000;
    puVar8 = puVar9;
  }
  if (!bVar10 && (uVar4 & ~(uint)puVar8) == 0) {
    puVar8 = (undefined2 *)((uint)puVar8 | 0xc00000);
  }
  if (((uint)puVar8 & 0x20000000) == 0) {
    if (((uint)puVar8 & 0x10000000) == 0) {
      if (((uint)puVar8 & 0x40000000) != 0) {
        uVar3 = uVar3 & 0x1000;
        goto joined_r0x08054900;
      }
      if (((uint)puVar8 & 0x8000000) == 0) {
        if ((uVar3 & 0x100) == 0) {
          uVar3 = param_4;
          if (((uint)puVar8 & 0x80) == 0) {
            uVar3 = param_3;
          }
          if (((uint)puVar8 & 0x10) == 0) {
            param_3 = uVar3 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_3 = 0;
            param_4 = uVar3 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar3 & 0x200) == 0) {
        if (((uint)puVar8 & 0x10) == 0) {
          param_4 = param_3 ^ param_1;
        }
        else {
          param_4 = param_4 ^ param_2;
        }
        goto _08054948;
      }
    }
    else if ((uVar3 & 0x400) == 0) {
      if (((uint)puVar8 & 0x80) == 0) {
        param_4 = param_3 & 0x80000000;
      }
      else {
        param_4 = param_4 & 0x80000000;
      }
_08054948:
      if (((uint)puVar8 & 0x10) == 0) {
        uVar3 = param_4 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = uVar3 & 0x800;
joined_r0x08054900:
    if (uVar3 == 0) {
      return param_3;
    }
  }
sub_08054F14:
  uVar3 = sub_080491E4(param_3,param_4,param_1,param_2,puVar8,in_lr,puVar8,in_lr);
  if (((uint)puVar8 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if (((uint)puVar8 & 0x100000) == 0) {
    uVar3 = (uint)puVar8 & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if (((uint)puVar8 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar2 = (uint *)sub_08047A2C();
    *puVar2 = *puVar2 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08053A20 @ 0x08053A20 */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */

uint sub_08053A20(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined4 in_lr;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  
  if ((~(param_4 >> 4) & 0x7ff0000) != 0 && (~(param_2 >> 4) & 0x7ff0000) != 0) {
    uVar3 = param_4 >> 4 & 0x7ff0000;
    uVar4 = uVar3 | (param_4 ^ param_2) >> 0x1f;
    uVar6 = param_2 >> 4 & 0x7ff0000;
    if (uVar6 == 0 || (param_4 & 0x7ff00000) == 0) {
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
          return param_3;
        }
        goto _08053CEC;
      }
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        puVar8 = (undefined2 *)&UNK_08000014;
        goto sub_08054850;
      }
      if (uVar6 == 0) {
        iVar5 = 0x10000;
        param_2 = param_2 & 0x7fffffff;
        if (param_2 == 0 && param_1 >> 0xc == 0) {
          param_1 = param_1 << 0x14;
          iVar5 = -0x130000;
        }
        uVar1 = param_1;
        if (param_2 == 0) {
          param_2 = param_1 >> 0xc;
          uVar1 = param_1 << 0x14;
          iVar5 = iVar5 + -0x140000;
        }
        uVar7 = 0;
        if (param_2 >> 5 == 0) {
          param_2 = param_2 << 0x10;
          uVar7 = 0x10;
        }
        if (param_2 >> 0xd == 0) {
          param_2 = param_2 << 8;
          uVar7 = uVar7 + 8;
        }
        if (param_2 >> 0x11 == 0) {
          param_2 = param_2 << 4;
          uVar7 = uVar7 + 4;
        }
        if (param_2 >> 0x13 == 0) {
          param_2 = param_2 << 2;
          uVar7 = uVar7 + 2;
        }
        if (param_2 >> 0x14 == 0) {
          param_2 = param_2 << 1;
          uVar7 = uVar7 + 1;
        }
        uVar6 = iVar5 + uVar7 * -0x10000;
        param_1 = uVar1 << (uVar7 & 0xff);
        param_2 = param_2 | uVar1 >> (0x20 - uVar7 & 0xff);
      }
      if (uVar3 == 0) {
        iVar5 = uVar4 + 0x10000;
        param_4 = param_4 & 0x7fffffff;
        if (param_4 == 0 && param_3 >> 0xc == 0) {
          param_3 = param_3 << 0x14;
          iVar5 = uVar4 - 0x130000;
        }
        uVar3 = param_3;
        if (param_4 == 0) {
          param_4 = param_3 >> 0xc;
          uVar3 = param_3 << 0x14;
          iVar5 = iVar5 + -0x140000;
        }
        uVar1 = 0;
        if (param_4 >> 5 == 0) {
          param_4 = param_4 << 0x10;
          uVar1 = 0x10;
        }
        if (param_4 >> 0xd == 0) {
          param_4 = param_4 << 8;
          uVar1 = uVar1 + 8;
        }
        if (param_4 >> 0x11 == 0) {
          param_4 = param_4 << 4;
          uVar1 = uVar1 + 4;
        }
        if (param_4 >> 0x13 == 0) {
          param_4 = param_4 << 2;
          uVar1 = uVar1 + 2;
        }
        if (param_4 >> 0x14 == 0) {
          param_4 = param_4 << 1;
          uVar1 = uVar1 + 1;
        }
        uVar4 = iVar5 + uVar1 * -0x10000;
        param_3 = uVar3 << (uVar1 & 0xff);
        param_4 = param_4 | uVar3 >> (0x20 - uVar1 & 0xff);
      }
    }
    iVar5 = (uVar4 - uVar6) + 0x3fc0000;
    param_2 = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
    param_1 = param_1 << 0xb;
    uVar12 = sub_08053CF8(param_3 << 0xb,param_4 << 0xb | param_3 >> 0x15 | 0x80000000);
    param_2 = param_2 + (iVar5 >> 0x10);
    uVar3 = (int)uVar12 << 0x15;
    param_3 = (uint)(uVar12 >> 0xb);
    param_4 = (int)((uVar12 >> 0xb) >> 0x20) + param_2 * 0x100000 ^ uVar4 * -0x80000000;
    if (uVar3 != 0) {
      bVar10 = SUB41(uVar3 >> 0x1f,0);
      if (bVar10) {
        if ((uVar12 & 0x3ff) == 0) {
          param_2 = 0x80000000;
        }
        else {
          param_2 = 0;
        }
        uVar1 = param_3 + bVar10;
        param_4 = param_4 + CARRY4(param_3,(uint)bVar10);
        uVar3 = 0x40000000;
        param_3 = uVar1 & ~(param_2 >> 0x1f);
        if ((uVar1 & param_2 >> 0x1f) != 0) {
          uVar3 = 0xc0000000;
        }
      }
      else {
        uVar3 = 0xc0000000;
      }
    }
    if ((-1 < (int)(param_4 ^ uVar4 * -0x80000000)) &&
       ((param_4 & 0x7ff00000) != 0 && (~param_4 & 0x7ff00000) != 0)) {
      return param_3;
    }
    bVar11 = SBORROW4(iVar5,0x4000000);
    bVar10 = (int)((uVar4 - uVar6) + -0x40000) < 0;
    if (iVar5 < 0x4000001) {
      param_4 = param_4 + 0x60000000;
    }
    if (bVar10 == bVar11) {
      param_4 = param_4 + 0xa0000000;
    }
    puVar8 = (undefined2 *)(uVar3 | 0x14);
    if (bVar10 == bVar11) {
      puVar8 = (undefined2 *)(uVar3 | 0x10000014);
    }
    if (iVar5 != 0x4000000 && bVar10 == bVar11) goto sub_08054850;
    puVar2 = (uint *)sub_08047A2C();
    param_2 = *puVar2;
    if ((param_2 & 0x1000000) != 0) {
      return 0;
    }
    if ((param_2 & 0x800) == 0) {
      if ((int)param_4 < 0) {
        puVar8 = (undefined2 *)((uint)puVar8 | 0x10000);
      }
      uVar3 = param_4 & ~((param_4 >> 0x14) << 0x14);
      iVar5 = -(param_4 >> 0x14 & 0xfffff7ff);
      uVar6 = iVar5 + 0x601;
      uVar4 = uVar3 | 0x100000;
      if (uVar6 < 0x36) {
        if (uVar6 == 0x35) {
          uVar6 = 0;
          uVar1 = 0x80000000;
          if (param_3 != 0 || (uVar3 & 0xfffff) != 0) {
            uVar1 = 0x80000001;
          }
        }
        else if (uVar6 < 0x15) {
          uVar1 = param_3 << (0x20 - uVar6 & 0xff);
          uVar6 = uVar4 << (0x20 - uVar6 & 0xff) | param_3 >> (uVar6 & 0xff);
        }
        else {
          uVar3 = iVar5 + 0x5e1;
          if (uVar6 < 0x20 || uVar3 == 0) {
            uVar6 = uVar4 << (-uVar3 & 0xff) | param_3 >> (uVar6 & 0xff);
            uVar1 = param_3 << (-uVar3 & 0xff);
          }
          else {
            uVar6 = uVar4 >> (uVar3 & 0xff);
            uVar1 = uVar4 << (0x20 - uVar3 & 0xff);
            if (param_3 != 0) {
              uVar1 = uVar1 | 1;
            }
          }
        }
      }
      else {
        uVar1 = 1;
        uVar6 = 0;
      }
      if (uVar1 != 0) {
        if (SUB41(uVar1 >> 0x1f,0)) {
          if (((uVar1 & 0x7fffffff) == 0) && (-1 < (int)puVar8 >> 0x1e)) {
            if ((int)puVar8 >> 0x1e == 0) {
              uVar6 = uVar6 + 1 & 0xfffffffe;
            }
          }
          else {
            uVar6 = uVar6 + 1;
          }
        }
        puVar2 = (uint *)sub_08047A2C();
        *puVar2 = *puVar2 | 8;
        return uVar6;
      }
      return uVar6;
    }
    puVar8 = (undefined2 *)((uint)puVar8 | 0x20000000);
    goto sub_08054F14;
  }
  uVar3 = param_4 * 2;
  bVar10 = uVar3 == 0xffe00000 && param_3 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_3 == 0) {
    bVar10 = param_2 * 2 == 0xffe00000;
    uVar3 = param_2 * 2;
  }
  bVar11 = bVar10;
  if (bVar10) {
    bVar11 = param_1 == 0;
  }
  puVar8 = &REG_BG1HOFS;
  if ((bVar10 || 0xffdfffff < uVar3) && !bVar11) {
    uVar4 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
    uVar3 = uVar4;
    if (uVar4 < 0xfff00001) {
      uVar3 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
    }
    if (0xfff00000 < uVar3) goto sub_08054850;
    if (0xfffff < uVar4) {
      param_3 = param_1;
      param_4 = param_2;
    }
sub_08054E78:
    uVar3 = (uint)puVar8 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 != 8) {
        return param_3;
      }
      if (uVar3 == 8) {
        if (((uint)puVar8 & 0x10) == 0) {
          uVar3 = 0x7fc00000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      if (((uint)puVar8 & 0x10) == 0) {
        uVar3 = 0x7fffffff;
        param_4 = param_3;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if ((param_4 & 0x80000000) != 0) {
        uVar3 = ~uVar3;
      }
      return uVar3;
    }
    uVar3 = 8;
    goto sub_08054F3C;
  }
  if ((~(param_4 >> 4) & 0x7ff0000) != 0) {
    return 0;
  }
  param_3 = 0;
  if ((~(param_2 >> 4) & 0x7ff0000) != 0) {
    return param_3;
  }
_08053CEC:
  puVar8 = &REG_BG1HOFS;
sub_08054850:
  if (((uint)puVar8 & 0x10) == 0) {
    param_1 = param_4;
  }
  puVar2 = (uint *)sub_08047A2C();
  uVar3 = *puVar2;
  if (((uint)puVar8 & ~(uVar3 << 0x12) & 0x30000000) != 0) {
    puVar8 = (undefined2 *)((uint)puVar8 | 0x40000000);
  }
  puVar9 = (undefined2 *)((uint)puVar8 | uVar3 & 0x1c00000);
  *puVar2 = uVar3 | (uint)((int)puVar8 << 1) >> 0x1b;
  bVar10 = ((uint)puVar8 & 0xf) != 8;
  if (bVar10) {
    uVar4 = (uint)puVar8 & 0x70;
    puVar8 = (undefined2 *)((uint)puVar9 | uVar4 << 3);
  }
  else {
    uVar4 = 0x20000;
    puVar8 = puVar9;
  }
  if (!bVar10 && (uVar4 & ~(uint)puVar8) == 0) {
    puVar8 = (undefined2 *)((uint)puVar8 | 0xc00000);
  }
  if (((uint)puVar8 & 0x20000000) == 0) {
    if (((uint)puVar8 & 0x10000000) == 0) {
      if (((uint)puVar8 & 0x40000000) != 0) {
        uVar3 = uVar3 & 0x1000;
        goto joined_r0x08054900;
      }
      if (((uint)puVar8 & 0x8000000) == 0) {
        if ((uVar3 & 0x100) == 0) {
          uVar3 = param_4;
          if (((uint)puVar8 & 0x80) == 0) {
            uVar3 = param_3;
          }
          if (((uint)puVar8 & 0x10) == 0) {
            param_3 = uVar3 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_3 = 0;
            param_4 = uVar3 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar3 & 0x200) == 0) {
        if (((uint)puVar8 & 0x10) == 0) {
          param_4 = param_3 ^ param_1;
        }
        else {
          param_4 = param_4 ^ param_2;
        }
        goto _08054948;
      }
    }
    else if ((uVar3 & 0x400) == 0) {
      if (((uint)puVar8 & 0x80) == 0) {
        param_4 = param_3 & 0x80000000;
      }
      else {
        param_4 = param_4 & 0x80000000;
      }
_08054948:
      if (((uint)puVar8 & 0x10) == 0) {
        uVar3 = param_4 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = uVar3 & 0x800;
joined_r0x08054900:
    if (uVar3 == 0) {
      return param_3;
    }
  }
sub_08054F14:
  uVar3 = sub_080491E4(param_3,param_4,param_1,param_2,puVar8,in_lr,puVar8,in_lr);
  if (((uint)puVar8 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if (((uint)puVar8 & 0x100000) == 0) {
    uVar3 = (uint)puVar8 & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if (((uint)puVar8 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar2 = (uint *)sub_08047A2C();
    *puVar2 = *puVar2 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08053A40 @ 0x08053A40 */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */

uint sub_08053A40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined4 in_lr;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  
  if ((~(param_2 >> 4) & 0x7ff0000) != 0 && (~(param_4 >> 4) & 0x7ff0000) != 0) {
    uVar3 = param_2 >> 4 & 0x7ff0000;
    uVar4 = uVar3 | (param_2 ^ param_4) >> 0x1f;
    uVar6 = param_4 >> 4 & 0x7ff0000;
    if (uVar6 == 0 || (param_2 & 0x7ff00000) == 0) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
          return param_1;
        }
        goto _08053CEC;
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        puVar8 = (undefined2 *)&UNK_08000014;
        goto sub_08054850;
      }
      if (uVar6 == 0) {
        iVar5 = 0x10000;
        param_4 = param_4 & 0x7fffffff;
        if (param_4 == 0 && param_3 >> 0xc == 0) {
          param_3 = param_3 << 0x14;
          iVar5 = -0x130000;
        }
        uVar1 = param_3;
        if (param_4 == 0) {
          param_4 = param_3 >> 0xc;
          uVar1 = param_3 << 0x14;
          iVar5 = iVar5 + -0x140000;
        }
        uVar7 = 0;
        if (param_4 >> 5 == 0) {
          param_4 = param_4 << 0x10;
          uVar7 = 0x10;
        }
        if (param_4 >> 0xd == 0) {
          param_4 = param_4 << 8;
          uVar7 = uVar7 + 8;
        }
        if (param_4 >> 0x11 == 0) {
          param_4 = param_4 << 4;
          uVar7 = uVar7 + 4;
        }
        if (param_4 >> 0x13 == 0) {
          param_4 = param_4 << 2;
          uVar7 = uVar7 + 2;
        }
        if (param_4 >> 0x14 == 0) {
          param_4 = param_4 << 1;
          uVar7 = uVar7 + 1;
        }
        uVar6 = iVar5 + uVar7 * -0x10000;
        param_3 = uVar1 << (uVar7 & 0xff);
        param_4 = param_4 | uVar1 >> (0x20 - uVar7 & 0xff);
      }
      if (uVar3 == 0) {
        iVar5 = uVar4 + 0x10000;
        param_2 = param_2 & 0x7fffffff;
        if (param_2 == 0 && param_1 >> 0xc == 0) {
          param_1 = param_1 << 0x14;
          iVar5 = uVar4 - 0x130000;
        }
        uVar3 = param_1;
        if (param_2 == 0) {
          param_2 = param_1 >> 0xc;
          uVar3 = param_1 << 0x14;
          iVar5 = iVar5 + -0x140000;
        }
        uVar1 = 0;
        if (param_2 >> 5 == 0) {
          param_2 = param_2 << 0x10;
          uVar1 = 0x10;
        }
        if (param_2 >> 0xd == 0) {
          param_2 = param_2 << 8;
          uVar1 = uVar1 + 8;
        }
        if (param_2 >> 0x11 == 0) {
          param_2 = param_2 << 4;
          uVar1 = uVar1 + 4;
        }
        if (param_2 >> 0x13 == 0) {
          param_2 = param_2 << 2;
          uVar1 = uVar1 + 2;
        }
        if (param_2 >> 0x14 == 0) {
          param_2 = param_2 << 1;
          uVar1 = uVar1 + 1;
        }
        uVar4 = iVar5 + uVar1 * -0x10000;
        param_1 = uVar3 << (uVar1 & 0xff);
        param_2 = param_2 | uVar3 >> (0x20 - uVar1 & 0xff);
      }
    }
    iVar5 = (uVar4 - uVar6) + 0x3fc0000;
    param_4 = param_4 << 0xb | param_3 >> 0x15 | 0x80000000;
    param_3 = param_3 << 0xb;
    uVar12 = sub_08053CF8(param_1 << 0xb,param_2 << 0xb | param_1 >> 0x15 | 0x80000000);
    param_4 = param_4 + (iVar5 >> 0x10);
    uVar3 = (int)uVar12 << 0x15;
    param_1 = (uint)(uVar12 >> 0xb);
    param_2 = (int)((uVar12 >> 0xb) >> 0x20) + param_4 * 0x100000 ^ uVar4 * -0x80000000;
    if (uVar3 != 0) {
      bVar10 = SUB41(uVar3 >> 0x1f,0);
      if (bVar10) {
        if ((uVar12 & 0x3ff) == 0) {
          param_4 = 0x80000000;
        }
        else {
          param_4 = 0;
        }
        uVar1 = param_1 + bVar10;
        param_2 = param_2 + CARRY4(param_1,(uint)bVar10);
        uVar3 = 0x40000000;
        param_1 = uVar1 & ~(param_4 >> 0x1f);
        if ((uVar1 & param_4 >> 0x1f) != 0) {
          uVar3 = 0xc0000000;
        }
      }
      else {
        uVar3 = 0xc0000000;
      }
    }
    if ((-1 < (int)(param_2 ^ uVar4 * -0x80000000)) &&
       ((param_2 & 0x7ff00000) != 0 && (~param_2 & 0x7ff00000) != 0)) {
      return param_1;
    }
    bVar11 = SBORROW4(iVar5,0x4000000);
    bVar10 = (int)((uVar4 - uVar6) + -0x40000) < 0;
    if (iVar5 < 0x4000001) {
      param_2 = param_2 + 0x60000000;
    }
    if (bVar10 == bVar11) {
      param_2 = param_2 + 0xa0000000;
    }
    puVar8 = (undefined2 *)(uVar3 | 0x14);
    if (bVar10 == bVar11) {
      puVar8 = (undefined2 *)(uVar3 | 0x10000014);
    }
    if (iVar5 != 0x4000000 && bVar10 == bVar11) goto sub_08054850;
    puVar2 = (uint *)sub_08047A2C();
    param_4 = *puVar2;
    if ((param_4 & 0x1000000) != 0) {
      return 0;
    }
    if ((param_4 & 0x800) == 0) {
      if ((int)param_2 < 0) {
        puVar8 = (undefined2 *)((uint)puVar8 | 0x10000);
      }
      uVar3 = param_2 & ~((param_2 >> 0x14) << 0x14);
      iVar5 = -(param_2 >> 0x14 & 0xfffff7ff);
      uVar6 = iVar5 + 0x601;
      uVar4 = uVar3 | 0x100000;
      if (uVar6 < 0x36) {
        if (uVar6 == 0x35) {
          uVar6 = 0;
          uVar1 = 0x80000000;
          if (param_1 != 0 || (uVar3 & 0xfffff) != 0) {
            uVar1 = 0x80000001;
          }
        }
        else if (uVar6 < 0x15) {
          uVar1 = param_1 << (0x20 - uVar6 & 0xff);
          uVar6 = uVar4 << (0x20 - uVar6 & 0xff) | param_1 >> (uVar6 & 0xff);
        }
        else {
          uVar3 = iVar5 + 0x5e1;
          if (uVar6 < 0x20 || uVar3 == 0) {
            uVar6 = uVar4 << (-uVar3 & 0xff) | param_1 >> (uVar6 & 0xff);
            uVar1 = param_1 << (-uVar3 & 0xff);
          }
          else {
            uVar6 = uVar4 >> (uVar3 & 0xff);
            uVar1 = uVar4 << (0x20 - uVar3 & 0xff);
            if (param_1 != 0) {
              uVar1 = uVar1 | 1;
            }
          }
        }
      }
      else {
        uVar1 = 1;
        uVar6 = 0;
      }
      if (uVar1 != 0) {
        if (SUB41(uVar1 >> 0x1f,0)) {
          if (((uVar1 & 0x7fffffff) == 0) && (-1 < (int)puVar8 >> 0x1e)) {
            if ((int)puVar8 >> 0x1e == 0) {
              uVar6 = uVar6 + 1 & 0xfffffffe;
            }
          }
          else {
            uVar6 = uVar6 + 1;
          }
        }
        puVar2 = (uint *)sub_08047A2C();
        *puVar2 = *puVar2 | 8;
        return uVar6;
      }
      return uVar6;
    }
    puVar8 = (undefined2 *)((uint)puVar8 | 0x20000000);
    goto sub_08054F14;
  }
  uVar3 = param_2 * 2;
  bVar10 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    bVar10 = param_4 * 2 == 0xffe00000;
    uVar3 = param_4 * 2;
  }
  bVar11 = bVar10;
  if (bVar10) {
    bVar11 = param_3 == 0;
  }
  puVar8 = &REG_BG1HOFS;
  if ((bVar10 || 0xffdfffff < uVar3) && !bVar11) {
    uVar4 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
    uVar3 = uVar4;
    if (uVar4 < 0xfff00001) {
      uVar3 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
    }
    if (0xfff00000 < uVar3) goto sub_08054850;
    if (0xfffff < uVar4) {
      param_1 = param_3;
      param_2 = param_4;
    }
sub_08054E78:
    uVar3 = (uint)puVar8 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 != 8) {
        return param_1;
      }
      if (uVar3 == 8) {
        if (((uint)puVar8 & 0x10) == 0) {
          uVar3 = 0x7fc00000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      if (((uint)puVar8 & 0x10) == 0) {
        uVar3 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar3 = ~uVar3;
      }
      return uVar3;
    }
    uVar3 = 8;
    goto sub_08054F3C;
  }
  if ((~(param_2 >> 4) & 0x7ff0000) != 0) {
    return 0;
  }
  param_1 = 0;
  if ((~(param_4 >> 4) & 0x7ff0000) != 0) {
    return param_1;
  }
_08053CEC:
  puVar8 = &REG_BG1HOFS;
sub_08054850:
  if (((uint)puVar8 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar2 = (uint *)sub_08047A2C();
  uVar3 = *puVar2;
  if (((uint)puVar8 & ~(uVar3 << 0x12) & 0x30000000) != 0) {
    puVar8 = (undefined2 *)((uint)puVar8 | 0x40000000);
  }
  puVar9 = (undefined2 *)((uint)puVar8 | uVar3 & 0x1c00000);
  *puVar2 = uVar3 | (uint)((int)puVar8 << 1) >> 0x1b;
  bVar10 = ((uint)puVar8 & 0xf) != 8;
  if (bVar10) {
    uVar4 = (uint)puVar8 & 0x70;
    puVar8 = (undefined2 *)((uint)puVar9 | uVar4 << 3);
  }
  else {
    uVar4 = 0x20000;
    puVar8 = puVar9;
  }
  if (!bVar10 && (uVar4 & ~(uint)puVar8) == 0) {
    puVar8 = (undefined2 *)((uint)puVar8 | 0xc00000);
  }
  if (((uint)puVar8 & 0x20000000) == 0) {
    if (((uint)puVar8 & 0x10000000) == 0) {
      if (((uint)puVar8 & 0x40000000) != 0) {
        uVar3 = uVar3 & 0x1000;
        goto joined_r0x08054900;
      }
      if (((uint)puVar8 & 0x8000000) == 0) {
        if ((uVar3 & 0x100) == 0) {
          uVar3 = param_2;
          if (((uint)puVar8 & 0x80) == 0) {
            uVar3 = param_1;
          }
          if (((uint)puVar8 & 0x10) == 0) {
            param_1 = uVar3 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar3 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar3 & 0x200) == 0) {
        if (((uint)puVar8 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar3 & 0x400) == 0) {
      if (((uint)puVar8 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if (((uint)puVar8 & 0x10) == 0) {
        uVar3 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = uVar3 & 0x800;
joined_r0x08054900:
    if (uVar3 == 0) {
      return param_1;
    }
  }
sub_08054F14:
  uVar3 = sub_080491E4(param_1,param_2,param_3,param_4,puVar8,in_lr,puVar8,in_lr);
  if (((uint)puVar8 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if (((uint)puVar8 & 0x100000) == 0) {
    uVar3 = (uint)puVar8 & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if (((uint)puVar8 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar2 = (uint *)sub_08047A2C();
    *puVar2 = *puVar2 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08053A44 @ 0x08053A44 */

/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */

uint sub_08053A44(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined4 in_lr;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  
  if ((~(param_2 >> 4) & 0x7ff0000) != 0 && (~(param_4 >> 4) & 0x7ff0000) != 0) {
    uVar3 = param_2 >> 4 & 0x7ff0000;
    uVar4 = uVar3 | (param_2 ^ param_4) >> 0x1f;
    uVar6 = param_4 >> 4 & 0x7ff0000;
    if (uVar6 == 0 || (param_2 & 0x7ff00000) == 0) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
          return param_1;
        }
        goto _08053CEC;
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
        puVar8 = (undefined2 *)&UNK_08000014;
        goto sub_08054850;
      }
      if (uVar6 == 0) {
        iVar5 = 0x10000;
        param_4 = param_4 & 0x7fffffff;
        if (param_4 == 0 && param_3 >> 0xc == 0) {
          param_3 = param_3 << 0x14;
          iVar5 = -0x130000;
        }
        uVar1 = param_3;
        if (param_4 == 0) {
          param_4 = param_3 >> 0xc;
          uVar1 = param_3 << 0x14;
          iVar5 = iVar5 + -0x140000;
        }
        uVar7 = 0;
        if (param_4 >> 5 == 0) {
          param_4 = param_4 << 0x10;
          uVar7 = 0x10;
        }
        if (param_4 >> 0xd == 0) {
          param_4 = param_4 << 8;
          uVar7 = uVar7 + 8;
        }
        if (param_4 >> 0x11 == 0) {
          param_4 = param_4 << 4;
          uVar7 = uVar7 + 4;
        }
        if (param_4 >> 0x13 == 0) {
          param_4 = param_4 << 2;
          uVar7 = uVar7 + 2;
        }
        if (param_4 >> 0x14 == 0) {
          param_4 = param_4 << 1;
          uVar7 = uVar7 + 1;
        }
        uVar6 = iVar5 + uVar7 * -0x10000;
        param_3 = uVar1 << (uVar7 & 0xff);
        param_4 = param_4 | uVar1 >> (0x20 - uVar7 & 0xff);
      }
      if (uVar3 == 0) {
        iVar5 = uVar4 + 0x10000;
        param_2 = param_2 & 0x7fffffff;
        if (param_2 == 0 && param_1 >> 0xc == 0) {
          param_1 = param_1 << 0x14;
          iVar5 = uVar4 - 0x130000;
        }
        uVar3 = param_1;
        if (param_2 == 0) {
          param_2 = param_1 >> 0xc;
          uVar3 = param_1 << 0x14;
          iVar5 = iVar5 + -0x140000;
        }
        uVar1 = 0;
        if (param_2 >> 5 == 0) {
          param_2 = param_2 << 0x10;
          uVar1 = 0x10;
        }
        if (param_2 >> 0xd == 0) {
          param_2 = param_2 << 8;
          uVar1 = uVar1 + 8;
        }
        if (param_2 >> 0x11 == 0) {
          param_2 = param_2 << 4;
          uVar1 = uVar1 + 4;
        }
        if (param_2 >> 0x13 == 0) {
          param_2 = param_2 << 2;
          uVar1 = uVar1 + 2;
        }
        if (param_2 >> 0x14 == 0) {
          param_2 = param_2 << 1;
          uVar1 = uVar1 + 1;
        }
        uVar4 = iVar5 + uVar1 * -0x10000;
        param_1 = uVar3 << (uVar1 & 0xff);
        param_2 = param_2 | uVar3 >> (0x20 - uVar1 & 0xff);
      }
    }
    iVar5 = (uVar4 - uVar6) + 0x3fc0000;
    param_4 = param_4 << 0xb | param_3 >> 0x15 | 0x80000000;
    param_3 = param_3 << 0xb;
    uVar12 = sub_08053CF8(param_1 << 0xb,param_2 << 0xb | param_1 >> 0x15 | 0x80000000);
    param_4 = param_4 + (iVar5 >> 0x10);
    uVar3 = (int)uVar12 << 0x15;
    param_1 = (uint)(uVar12 >> 0xb);
    param_2 = (int)((uVar12 >> 0xb) >> 0x20) + param_4 * 0x100000 ^ uVar4 * -0x80000000;
    if (uVar3 != 0) {
      bVar10 = SUB41(uVar3 >> 0x1f,0);
      if (bVar10) {
        if ((uVar12 & 0x3ff) == 0) {
          param_4 = 0x80000000;
        }
        else {
          param_4 = 0;
        }
        uVar1 = param_1 + bVar10;
        param_2 = param_2 + CARRY4(param_1,(uint)bVar10);
        uVar3 = 0x40000000;
        param_1 = uVar1 & ~(param_4 >> 0x1f);
        if ((uVar1 & param_4 >> 0x1f) != 0) {
          uVar3 = 0xc0000000;
        }
      }
      else {
        uVar3 = 0xc0000000;
      }
    }
    if ((-1 < (int)(param_2 ^ uVar4 * -0x80000000)) &&
       ((param_2 & 0x7ff00000) != 0 && (~param_2 & 0x7ff00000) != 0)) {
      return param_1;
    }
    bVar11 = SBORROW4(iVar5,0x4000000);
    bVar10 = (int)((uVar4 - uVar6) + -0x40000) < 0;
    if (iVar5 < 0x4000001) {
      param_2 = param_2 + 0x60000000;
    }
    if (bVar10 == bVar11) {
      param_2 = param_2 + 0xa0000000;
    }
    puVar8 = (undefined2 *)(uVar3 | 0x14);
    if (bVar10 == bVar11) {
      puVar8 = (undefined2 *)(uVar3 | 0x10000014);
    }
    if (iVar5 != 0x4000000 && bVar10 == bVar11) goto sub_08054850;
    puVar2 = (uint *)sub_08047A2C();
    param_4 = *puVar2;
    if ((param_4 & 0x1000000) != 0) {
      return 0;
    }
    if ((param_4 & 0x800) == 0) {
      if ((int)param_2 < 0) {
        puVar8 = (undefined2 *)((uint)puVar8 | 0x10000);
      }
      uVar3 = param_2 & ~((param_2 >> 0x14) << 0x14);
      iVar5 = -(param_2 >> 0x14 & 0xfffff7ff);
      uVar6 = iVar5 + 0x601;
      uVar4 = uVar3 | 0x100000;
      if (uVar6 < 0x36) {
        if (uVar6 == 0x35) {
          uVar6 = 0;
          uVar1 = 0x80000000;
          if (param_1 != 0 || (uVar3 & 0xfffff) != 0) {
            uVar1 = 0x80000001;
          }
        }
        else if (uVar6 < 0x15) {
          uVar1 = param_1 << (0x20 - uVar6 & 0xff);
          uVar6 = uVar4 << (0x20 - uVar6 & 0xff) | param_1 >> (uVar6 & 0xff);
        }
        else {
          uVar3 = iVar5 + 0x5e1;
          if (uVar6 < 0x20 || uVar3 == 0) {
            uVar6 = uVar4 << (-uVar3 & 0xff) | param_1 >> (uVar6 & 0xff);
            uVar1 = param_1 << (-uVar3 & 0xff);
          }
          else {
            uVar6 = uVar4 >> (uVar3 & 0xff);
            uVar1 = uVar4 << (0x20 - uVar3 & 0xff);
            if (param_1 != 0) {
              uVar1 = uVar1 | 1;
            }
          }
        }
      }
      else {
        uVar1 = 1;
        uVar6 = 0;
      }
      if (uVar1 != 0) {
        if (SUB41(uVar1 >> 0x1f,0)) {
          if (((uVar1 & 0x7fffffff) == 0) && (-1 < (int)puVar8 >> 0x1e)) {
            if ((int)puVar8 >> 0x1e == 0) {
              uVar6 = uVar6 + 1 & 0xfffffffe;
            }
          }
          else {
            uVar6 = uVar6 + 1;
          }
        }
        puVar2 = (uint *)sub_08047A2C();
        *puVar2 = *puVar2 | 8;
        return uVar6;
      }
      return uVar6;
    }
    puVar8 = (undefined2 *)((uint)puVar8 | 0x20000000);
    goto sub_08054F14;
  }
  uVar3 = param_2 * 2;
  bVar10 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    bVar10 = param_4 * 2 == 0xffe00000;
    uVar3 = param_4 * 2;
  }
  bVar11 = bVar10;
  if (bVar10) {
    bVar11 = param_3 == 0;
  }
  puVar8 = &REG_BG1HOFS;
  if ((bVar10 || 0xffdfffff < uVar3) && !bVar11) {
    uVar4 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
    uVar3 = uVar4;
    if (uVar4 < 0xfff00001) {
      uVar3 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
    }
    if (0xfff00000 < uVar3) goto sub_08054850;
    if (0xfffff < uVar4) {
      param_1 = param_3;
      param_2 = param_4;
    }
sub_08054E78:
    uVar3 = (uint)puVar8 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 != 8) {
        return param_1;
      }
      if (uVar3 == 8) {
        if (((uint)puVar8 & 0x10) == 0) {
          uVar3 = 0x7fc00000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      if (((uint)puVar8 & 0x10) == 0) {
        uVar3 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar3 = ~uVar3;
      }
      return uVar3;
    }
    uVar3 = 8;
    goto sub_08054F3C;
  }
  if ((~(param_2 >> 4) & 0x7ff0000) != 0) {
    return 0;
  }
  param_1 = 0;
  if ((~(param_4 >> 4) & 0x7ff0000) != 0) {
    return param_1;
  }
_08053CEC:
  puVar8 = &REG_BG1HOFS;
sub_08054850:
  if (((uint)puVar8 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar2 = (uint *)sub_08047A2C();
  uVar3 = *puVar2;
  if (((uint)puVar8 & ~(uVar3 << 0x12) & 0x30000000) != 0) {
    puVar8 = (undefined2 *)((uint)puVar8 | 0x40000000);
  }
  puVar9 = (undefined2 *)((uint)puVar8 | uVar3 & 0x1c00000);
  *puVar2 = uVar3 | (uint)((int)puVar8 << 1) >> 0x1b;
  bVar10 = ((uint)puVar8 & 0xf) != 8;
  if (bVar10) {
    uVar4 = (uint)puVar8 & 0x70;
    puVar8 = (undefined2 *)((uint)puVar9 | uVar4 << 3);
  }
  else {
    uVar4 = 0x20000;
    puVar8 = puVar9;
  }
  if (!bVar10 && (uVar4 & ~(uint)puVar8) == 0) {
    puVar8 = (undefined2 *)((uint)puVar8 | 0xc00000);
  }
  if (((uint)puVar8 & 0x20000000) == 0) {
    if (((uint)puVar8 & 0x10000000) == 0) {
      if (((uint)puVar8 & 0x40000000) != 0) {
        uVar3 = uVar3 & 0x1000;
        goto joined_r0x08054900;
      }
      if (((uint)puVar8 & 0x8000000) == 0) {
        if ((uVar3 & 0x100) == 0) {
          uVar3 = param_2;
          if (((uint)puVar8 & 0x80) == 0) {
            uVar3 = param_1;
          }
          if (((uint)puVar8 & 0x10) == 0) {
            param_1 = uVar3 & 0x80000000 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar3 & 0x80000000;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar3 & 0x200) == 0) {
        if (((uint)puVar8 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar3 & 0x400) == 0) {
      if (((uint)puVar8 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if (((uint)puVar8 & 0x10) == 0) {
        uVar3 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = uVar3 & 0x800;
joined_r0x08054900:
    if (uVar3 == 0) {
      return param_1;
    }
  }
sub_08054F14:
  uVar3 = sub_080491E4(param_1,param_2,param_3,param_4,puVar8,in_lr,puVar8,in_lr);
  if (((uint)puVar8 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if (((uint)puVar8 & 0x100000) == 0) {
    uVar3 = (uint)puVar8 & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if (((uint)puVar8 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar2 = (uint *)sub_08047A2C();
    *puVar2 = *puVar2 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08053CF4 @ 0x08053CF4 */

undefined8 sub_08053CF4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  
  uVar7 = param_4 >> 0x10;
  uVar6 = param_3 >> 0x10;
  uVar8 = param_4 & ~(uVar7 << 0x10);
  param_3 = param_3 & ~(uVar6 << 0x10);
  uVar9 = (uint)*(byte *)((param_4 >> 0x18) + 0x8053ed8);
  iVar10 = ((0x800000 - (uVar7 * uVar9 + uVar9)) * uVar9 >> 0x13) + 2;
  uVar11 = 0x20000000 - ((param_4 >> 0xd) * iVar10 + iVar10);
  uVar9 = uVar11 >> 0x10;
  uVar9 = uVar9 * iVar10 + ((uVar11 & ~(uVar9 << 0x10)) * iVar10 >> 0x10) >> 6;
  uVar11 = (uint)((byte)param_2 & 1) << 0x1f | param_1 >> 1;
  if ((bool)((byte)param_1 & 1)) {
    uVar12 = 0x80000000;
  }
  else {
    uVar12 = 0;
  }
  uVar1 = uVar9 * (param_2 >> 0x10) >> 0x10;
  uVar3 = uVar11 - uVar1 * uVar6;
  uVar13 = uVar1 * param_3;
  bVar19 = uVar13 * 0x10000 <= uVar12;
  uVar12 = uVar12 + uVar13 * -0x10000;
  uVar13 = uVar13 >> 0x10;
  bVar2 = uVar3 - uVar13 < (uint)bVar19;
  bVar20 = uVar13 < uVar3 || bVar2;
  uVar4 = uVar3 - (uVar13 + !bVar19);
  uVar14 = uVar1 * uVar8;
  if (uVar13 < uVar3 || bVar2) {
    bVar20 = uVar14 * 0x10000 <= uVar4;
  }
  uVar4 = uVar4 + uVar14 * -0x10000;
  uVar14 = ((param_2 >> 1) - (uVar7 * uVar1 + (uint)(uVar11 < uVar1 * uVar6))) -
           ((uVar14 >> 0x10) + (uint)!bVar20);
  uVar11 = uVar9 * (uVar14 >> 2) >> 0x10;
  uVar13 = uVar11 * uVar6;
  bVar19 = uVar13 * 0x80000 <= uVar12;
  uVar12 = uVar12 + uVar13 * -0x80000;
  uVar13 = uVar13 >> 0xd;
  bVar2 = uVar4 - uVar13 < (uint)bVar19;
  bVar20 = uVar13 < uVar4 || bVar2;
  uVar3 = uVar4 - (uVar13 + !bVar19);
  uVar15 = uVar7 * uVar11;
  if (uVar13 < uVar4 || bVar2) {
    bVar20 = uVar15 * 0x80000 <= uVar3;
  }
  uVar3 = uVar3 + uVar15 * -0x80000;
  uVar13 = uVar11 * param_3;
  bVar21 = uVar13 * 8 <= uVar12;
  uVar4 = uVar13 >> 0x1d;
  bVar2 = uVar3 - uVar4 < (uint)bVar21;
  bVar19 = uVar4 < uVar3 || bVar2;
  uVar5 = uVar3 - (uVar4 + !bVar21);
  uVar16 = uVar11 * uVar8;
  if (uVar4 < uVar3 || bVar2) {
    bVar19 = uVar16 * 8 <= uVar5;
  }
  uVar5 = uVar5 + uVar16 * -8;
  uVar16 = ((uVar14 - ((uVar15 >> 0xd) + (uint)!bVar20)) - ((uVar16 >> 0x1d) + (uint)!bVar19)) *
           0x4000000 | uVar5 >> 6;
  uVar4 = uVar5 * 0x4000000 | uVar12 + uVar13 * -8 >> 6;
  uVar13 = uVar13 * -0x20000000;
  uVar5 = uVar9 * (uVar16 >> 0xf);
  uVar12 = uVar5 >> 0x10;
  uVar14 = uVar4 - uVar12 * uVar6;
  uVar3 = uVar12 * param_3;
  bVar19 = uVar3 * 0x10000 <= uVar13;
  uVar13 = uVar13 + uVar3 * -0x10000;
  uVar3 = uVar3 >> 0x10;
  bVar2 = uVar14 - uVar3 < (uint)bVar19;
  bVar20 = uVar3 < uVar14 || bVar2;
  uVar15 = uVar14 - (uVar3 + !bVar19);
  uVar17 = uVar12 * uVar8;
  if (uVar3 < uVar14 || bVar2) {
    bVar20 = uVar17 * 0x10000 <= uVar15;
  }
  uVar15 = uVar15 + uVar17 * -0x10000;
  uVar14 = (uVar16 - (uVar7 * uVar12 + (uint)(uVar4 < uVar12 * uVar6))) -
           ((uVar17 >> 0x10) + (uint)!bVar20);
  uVar9 = uVar9 * (uVar14 >> 2) >> 0x10;
  uVar3 = uVar9 * uVar6;
  bVar19 = uVar3 * 0x80000 <= uVar13;
  uVar13 = uVar13 + uVar3 * -0x80000;
  uVar3 = uVar3 >> 0xd;
  bVar2 = uVar15 - uVar3 < (uint)bVar19;
  bVar20 = uVar3 < uVar15 || bVar2;
  uVar4 = uVar15 - (uVar3 + !bVar19);
  uVar16 = uVar7 * uVar9;
  if (uVar3 < uVar15 || bVar2) {
    bVar20 = uVar16 * 0x80000 <= uVar4;
  }
  uVar4 = uVar4 + uVar16 * -0x80000;
  uVar15 = uVar9 * param_3;
  bVar21 = uVar15 * 8 <= uVar13;
  uVar3 = uVar15 >> 0x1d;
  bVar2 = uVar4 - uVar3 < (uint)bVar21;
  bVar19 = uVar3 < uVar4 || bVar2;
  uVar17 = uVar4 - (uVar3 + !bVar21);
  uVar18 = uVar9 * uVar8;
  if (uVar3 < uVar4 || bVar2) {
    bVar19 = uVar18 * 8 <= uVar17;
  }
  uVar17 = uVar17 + uVar18 * -8;
  uVar3 = uVar17 * 0x4000000 | uVar13 + uVar15 * -8 >> 6;
  uVar13 = uVar15 * -0x20000000;
  uVar4 = uVar12 * 0x400000 + uVar9 * 0x200;
  uVar8 = uVar8 | uVar7 << 0x10;
  param_3 = param_3 | uVar6 << 0x10;
  uVar7 = uVar15 * -0x40000000;
  uVar6 = uVar3 * 2 + (uint)CARRY4(uVar13,uVar13);
  uVar3 = (((uVar14 - ((uVar16 >> 0xd) + (uint)!bVar20)) - ((uVar18 >> 0x1d) + (uint)!bVar19)) *
           0x4000000 | uVar17 >> 6) * 2 +
          (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)CARRY4(uVar13,uVar13)));
  bVar2 = uVar3 - uVar8 < (uint)(param_3 <= uVar6);
  uVar13 = uVar3;
  if (uVar8 < uVar3 || bVar2) {
    uVar13 = uVar3 - (uVar8 + (param_3 > uVar6));
    uVar6 = uVar6 - param_3;
  }
  uVar15 = uVar15 * -0x80000000;
  bVar19 = CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)CARRY4(uVar7,uVar7));
  uVar7 = uVar6 * 2 + (uint)CARRY4(uVar7,uVar7);
  bVar20 = CARRY4(uVar13 * 2,(uint)bVar19);
  bVar21 = CARRY4(uVar13,uVar13) || bVar20;
  uVar6 = uVar13 * 2 + (uint)bVar19;
  bVar19 = bVar21 < (uVar8 < uVar6 || uVar6 - uVar8 < (uint)(param_3 <= uVar7));
  if ((CARRY4(uVar13,uVar13) || bVar20) || bVar19) {
    uVar6 = uVar6 - (uVar8 + (param_3 > uVar7));
    uVar7 = uVar7 - param_3;
  }
  bVar22 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)CARRY4(uVar15,uVar15));
  uVar7 = uVar7 * 2 + (uint)CARRY4(uVar15,uVar15);
  bVar20 = CARRY4(uVar6 * 2,(uint)bVar22);
  bVar23 = CARRY4(uVar6,uVar6) || bVar20;
  uVar13 = uVar6 * 2 + (uint)bVar22;
  bVar22 = bVar23 < (uVar8 < uVar13 || uVar13 - uVar8 < (uint)(param_3 <= uVar7));
  if ((CARRY4(uVar6,uVar6) || bVar20) || bVar22) {
    uVar13 = uVar13 - (uVar8 + (param_3 > uVar7));
    uVar7 = uVar7 - param_3;
  }
  uVar13 = uVar13 | uVar7;
  if (uVar13 != 0) {
    uVar13 = 1;
  }
  uVar7 = (((uint)(uVar8 < uVar3 || bVar2) * 2 + (uint)(bVar21 || bVar19)) * 2 +
          (uint)(bVar23 || bVar22)) * 0x200;
  iVar10 = uVar1 * 0x10000 + uVar11 * 8 + (uVar5 >> 0x1a) +
           (uint)CARRY4(uVar12 * 0x400000,uVar9 * 0x200) + (uint)CARRY4(uVar4,uVar7);
  uVar13 = uVar4 + uVar7 | uVar13;
  if (iVar10 < 0) {
    return CONCAT44(iVar10,uVar13);
  }
  return CONCAT44(iVar10 * 2 + (uint)CARRY4(uVar13,uVar13),uVar13 * 2);
}


/* sub_08053CF8 @ 0x08053CF8 */

undefined8 sub_08053CF8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  
  uVar7 = param_4 >> 0x10;
  uVar6 = param_3 >> 0x10;
  uVar8 = param_4 & ~(uVar7 << 0x10);
  param_3 = param_3 & ~(uVar6 << 0x10);
  uVar9 = (uint)*(byte *)((param_4 >> 0x18) + 0x8053ed8);
  iVar10 = ((0x800000 - (uVar7 * uVar9 + uVar9)) * uVar9 >> 0x13) + 2;
  uVar11 = 0x20000000 - ((param_4 >> 0xd) * iVar10 + iVar10);
  uVar9 = uVar11 >> 0x10;
  uVar9 = uVar9 * iVar10 + ((uVar11 & ~(uVar9 << 0x10)) * iVar10 >> 0x10) >> 6;
  uVar11 = (uint)((byte)param_2 & 1) << 0x1f | param_1 >> 1;
  if ((bool)((byte)param_1 & 1)) {
    uVar12 = 0x80000000;
  }
  else {
    uVar12 = 0;
  }
  uVar1 = uVar9 * (param_2 >> 0x10) >> 0x10;
  uVar3 = uVar11 - uVar1 * uVar6;
  uVar13 = uVar1 * param_3;
  bVar19 = uVar13 * 0x10000 <= uVar12;
  uVar12 = uVar12 + uVar13 * -0x10000;
  uVar13 = uVar13 >> 0x10;
  bVar2 = uVar3 - uVar13 < (uint)bVar19;
  bVar20 = uVar13 < uVar3 || bVar2;
  uVar4 = uVar3 - (uVar13 + !bVar19);
  uVar14 = uVar1 * uVar8;
  if (uVar13 < uVar3 || bVar2) {
    bVar20 = uVar14 * 0x10000 <= uVar4;
  }
  uVar4 = uVar4 + uVar14 * -0x10000;
  uVar14 = ((param_2 >> 1) - (uVar7 * uVar1 + (uint)(uVar11 < uVar1 * uVar6))) -
           ((uVar14 >> 0x10) + (uint)!bVar20);
  uVar11 = uVar9 * (uVar14 >> 2) >> 0x10;
  uVar13 = uVar11 * uVar6;
  bVar19 = uVar13 * 0x80000 <= uVar12;
  uVar12 = uVar12 + uVar13 * -0x80000;
  uVar13 = uVar13 >> 0xd;
  bVar2 = uVar4 - uVar13 < (uint)bVar19;
  bVar20 = uVar13 < uVar4 || bVar2;
  uVar3 = uVar4 - (uVar13 + !bVar19);
  uVar15 = uVar7 * uVar11;
  if (uVar13 < uVar4 || bVar2) {
    bVar20 = uVar15 * 0x80000 <= uVar3;
  }
  uVar3 = uVar3 + uVar15 * -0x80000;
  uVar13 = uVar11 * param_3;
  bVar21 = uVar13 * 8 <= uVar12;
  uVar4 = uVar13 >> 0x1d;
  bVar2 = uVar3 - uVar4 < (uint)bVar21;
  bVar19 = uVar4 < uVar3 || bVar2;
  uVar5 = uVar3 - (uVar4 + !bVar21);
  uVar16 = uVar11 * uVar8;
  if (uVar4 < uVar3 || bVar2) {
    bVar19 = uVar16 * 8 <= uVar5;
  }
  uVar5 = uVar5 + uVar16 * -8;
  uVar16 = ((uVar14 - ((uVar15 >> 0xd) + (uint)!bVar20)) - ((uVar16 >> 0x1d) + (uint)!bVar19)) *
           0x4000000 | uVar5 >> 6;
  uVar4 = uVar5 * 0x4000000 | uVar12 + uVar13 * -8 >> 6;
  uVar13 = uVar13 * -0x20000000;
  uVar5 = uVar9 * (uVar16 >> 0xf);
  uVar12 = uVar5 >> 0x10;
  uVar14 = uVar4 - uVar12 * uVar6;
  uVar3 = uVar12 * param_3;
  bVar19 = uVar3 * 0x10000 <= uVar13;
  uVar13 = uVar13 + uVar3 * -0x10000;
  uVar3 = uVar3 >> 0x10;
  bVar2 = uVar14 - uVar3 < (uint)bVar19;
  bVar20 = uVar3 < uVar14 || bVar2;
  uVar15 = uVar14 - (uVar3 + !bVar19);
  uVar17 = uVar12 * uVar8;
  if (uVar3 < uVar14 || bVar2) {
    bVar20 = uVar17 * 0x10000 <= uVar15;
  }
  uVar15 = uVar15 + uVar17 * -0x10000;
  uVar14 = (uVar16 - (uVar7 * uVar12 + (uint)(uVar4 < uVar12 * uVar6))) -
           ((uVar17 >> 0x10) + (uint)!bVar20);
  uVar9 = uVar9 * (uVar14 >> 2) >> 0x10;
  uVar3 = uVar9 * uVar6;
  bVar19 = uVar3 * 0x80000 <= uVar13;
  uVar13 = uVar13 + uVar3 * -0x80000;
  uVar3 = uVar3 >> 0xd;
  bVar2 = uVar15 - uVar3 < (uint)bVar19;
  bVar20 = uVar3 < uVar15 || bVar2;
  uVar4 = uVar15 - (uVar3 + !bVar19);
  uVar16 = uVar7 * uVar9;
  if (uVar3 < uVar15 || bVar2) {
    bVar20 = uVar16 * 0x80000 <= uVar4;
  }
  uVar4 = uVar4 + uVar16 * -0x80000;
  uVar15 = uVar9 * param_3;
  bVar21 = uVar15 * 8 <= uVar13;
  uVar3 = uVar15 >> 0x1d;
  bVar2 = uVar4 - uVar3 < (uint)bVar21;
  bVar19 = uVar3 < uVar4 || bVar2;
  uVar17 = uVar4 - (uVar3 + !bVar21);
  uVar18 = uVar9 * uVar8;
  if (uVar3 < uVar4 || bVar2) {
    bVar19 = uVar18 * 8 <= uVar17;
  }
  uVar17 = uVar17 + uVar18 * -8;
  uVar3 = uVar17 * 0x4000000 | uVar13 + uVar15 * -8 >> 6;
  uVar13 = uVar15 * -0x20000000;
  uVar4 = uVar12 * 0x400000 + uVar9 * 0x200;
  uVar8 = uVar8 | uVar7 << 0x10;
  param_3 = param_3 | uVar6 << 0x10;
  uVar7 = uVar15 * -0x40000000;
  uVar6 = uVar3 * 2 + (uint)CARRY4(uVar13,uVar13);
  uVar3 = (((uVar14 - ((uVar16 >> 0xd) + (uint)!bVar20)) - ((uVar18 >> 0x1d) + (uint)!bVar19)) *
           0x4000000 | uVar17 >> 6) * 2 +
          (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)CARRY4(uVar13,uVar13)));
  bVar2 = uVar3 - uVar8 < (uint)(param_3 <= uVar6);
  uVar13 = uVar3;
  if (uVar8 < uVar3 || bVar2) {
    uVar13 = uVar3 - (uVar8 + (param_3 > uVar6));
    uVar6 = uVar6 - param_3;
  }
  uVar15 = uVar15 * -0x80000000;
  bVar19 = CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)CARRY4(uVar7,uVar7));
  uVar7 = uVar6 * 2 + (uint)CARRY4(uVar7,uVar7);
  bVar20 = CARRY4(uVar13 * 2,(uint)bVar19);
  bVar21 = CARRY4(uVar13,uVar13) || bVar20;
  uVar6 = uVar13 * 2 + (uint)bVar19;
  bVar19 = bVar21 < (uVar8 < uVar6 || uVar6 - uVar8 < (uint)(param_3 <= uVar7));
  if ((CARRY4(uVar13,uVar13) || bVar20) || bVar19) {
    uVar6 = uVar6 - (uVar8 + (param_3 > uVar7));
    uVar7 = uVar7 - param_3;
  }
  bVar22 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)CARRY4(uVar15,uVar15));
  uVar7 = uVar7 * 2 + (uint)CARRY4(uVar15,uVar15);
  bVar20 = CARRY4(uVar6 * 2,(uint)bVar22);
  bVar23 = CARRY4(uVar6,uVar6) || bVar20;
  uVar13 = uVar6 * 2 + (uint)bVar22;
  bVar22 = bVar23 < (uVar8 < uVar13 || uVar13 - uVar8 < (uint)(param_3 <= uVar7));
  if ((CARRY4(uVar6,uVar6) || bVar20) || bVar22) {
    uVar13 = uVar13 - (uVar8 + (param_3 > uVar7));
    uVar7 = uVar7 - param_3;
  }
  uVar13 = uVar13 | uVar7;
  if (uVar13 != 0) {
    uVar13 = 1;
  }
  uVar7 = (((uint)(uVar8 < uVar3 || bVar2) * 2 + (uint)(bVar21 || bVar19)) * 2 +
          (uint)(bVar23 || bVar22)) * 0x200;
  iVar10 = uVar1 * 0x10000 + uVar11 * 8 + (uVar5 >> 0x1a) +
           (uint)CARRY4(uVar12 * 0x400000,uVar9 * 0x200) + (uint)CARRY4(uVar4,uVar7);
  uVar13 = uVar4 + uVar7 | uVar13;
  if (iVar10 < 0) {
    return CONCAT44(iVar10,uVar13);
  }
  return CONCAT44(iVar10 * 2 + (uint)CARRY4(uVar13,uVar13),uVar13 * 2);
}


/* sub_08053FE8 @ 0x08053FE8 */

undefined8 sub_08053FE8(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x40000000;
  uVar1 = param_1 >> 0x10;
  bVar3 = uVar1 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    iVar2 = 0x41000000;
  }
  if (bVar3) {
    return CONCAT44(param_1,uVar1);
  }
  if ((param_1 & 0xff000000) == 0) {
    param_1 = param_1 << 8;
  }
  else {
    iVar2 = iVar2 + 0x800000;
  }
  if ((param_1 & 0xf0000000) == 0) {
    param_1 = param_1 << 4;
  }
  else {
    iVar2 = iVar2 + 0x400000;
  }
  if ((param_1 & 0xc0000000) == 0) {
    param_1 = param_1 << 2;
    uVar1 = param_1;
  }
  else {
    iVar2 = iVar2 + 0x200000;
    uVar1 = param_1 & 0xc0000000;
  }
  if ((int)uVar1 < 0) {
    iVar2 = iVar2 + 0x100000;
  }
  else {
    param_1 = param_1 << 1;
  }
  return CONCAT44(iVar2 + ((int)param_1 >> 0xb),param_1 << 0x15);
}


/* sub_08053FEC @ 0x08053FEC */

undefined8 sub_08053FEC(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x40000000;
  uVar1 = param_1 >> 0x10;
  bVar3 = uVar1 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    iVar2 = 0x41000000;
  }
  if (!bVar3) {
    if ((param_1 & 0xff000000) == 0) {
      param_1 = param_1 << 8;
    }
    else {
      iVar2 = iVar2 + 0x800000;
    }
    if ((param_1 & 0xf0000000) == 0) {
      param_1 = param_1 << 4;
    }
    else {
      iVar2 = iVar2 + 0x400000;
    }
    if ((param_1 & 0xc0000000) == 0) {
      param_1 = param_1 << 2;
      uVar1 = param_1;
    }
    else {
      iVar2 = iVar2 + 0x200000;
      uVar1 = param_1 & 0xc0000000;
    }
    if ((int)uVar1 < 0) {
      iVar2 = iVar2 + 0x100000;
    }
    else {
      param_1 = param_1 << 1;
    }
    return CONCAT44(iVar2 + ((int)param_1 >> 0xb),param_1 << 0x15);
  }
  return CONCAT44(param_1,uVar1);
}


/* sub_08053FF8 @ 0x08053FF8 */

undefined8 sub_08053FF8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0x80000000;
  if (uVar2 != 0) {
    param_1 = -param_1;
  }
  uVar2 = uVar2 | 0x40000000;
  uVar1 = param_1 >> 0x10;
  bVar3 = uVar1 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    uVar2 = uVar2 + 0x1000000;
  }
  if (bVar3) {
    return CONCAT44(param_1,uVar1);
  }
  if ((param_1 & 0xff000000) == 0) {
    param_1 = param_1 << 8;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  if ((param_1 & 0xf0000000) == 0) {
    param_1 = param_1 << 4;
  }
  else {
    uVar2 = uVar2 + 0x400000;
  }
  if ((param_1 & 0xc0000000) == 0) {
    param_1 = param_1 << 2;
    uVar1 = param_1;
  }
  else {
    uVar2 = uVar2 + 0x200000;
    uVar1 = param_1 & 0xc0000000;
  }
  if ((int)uVar1 < 0) {
    uVar2 = uVar2 + 0x100000;
  }
  else {
    param_1 = param_1 << 1;
  }
  return CONCAT44(uVar2 + ((int)param_1 >> 0xb),param_1 << 0x15);
}


/* sub_08053FFC @ 0x08053FFC */

undefined8 sub_08053FFC(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0x80000000;
  if (uVar2 != 0) {
    param_1 = -param_1;
  }
  uVar2 = uVar2 | 0x40000000;
  uVar1 = param_1 >> 0x10;
  bVar3 = uVar1 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    uVar2 = uVar2 + 0x1000000;
  }
  if (bVar3) {
    return CONCAT44(param_1,uVar1);
  }
  if ((param_1 & 0xff000000) == 0) {
    param_1 = param_1 << 8;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  if ((param_1 & 0xf0000000) == 0) {
    param_1 = param_1 << 4;
  }
  else {
    uVar2 = uVar2 + 0x400000;
  }
  if ((param_1 & 0xc0000000) == 0) {
    param_1 = param_1 << 2;
    uVar1 = param_1;
  }
  else {
    uVar2 = uVar2 + 0x200000;
    uVar1 = param_1 & 0xc0000000;
  }
  if ((int)uVar1 < 0) {
    uVar2 = uVar2 + 0x100000;
  }
  else {
    param_1 = param_1 << 1;
  }
  return CONCAT44(uVar2 + ((int)param_1 >> 0xb),param_1 << 0x15);
}


/* sub_08054054 @ 0x08054054 */

/* WARNING: Removing unreachable block (ram,0x08054854) */
/* WARNING: Removing unreachable block (ram,0x08053954) */
/* WARNING: Removing unreachable block (ram,0x08053970) */
/* WARNING: Removing unreachable block (ram,0x08053974) */
/* WARNING: Removing unreachable block (ram,0x0805398c) */
/* WARNING: Removing unreachable block (ram,0x08053978) */
/* WARNING: Removing unreachable block (ram,0x08053980) */
/* WARNING: Removing unreachable block (ram,0x08053988) */
/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548ac) */
/* WARNING: Removing unreachable block (ram,0x080548b4) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054984) */
/* WARNING: Removing unreachable block (ram,0x08054970) */
/* WARNING: Removing unreachable block (ram,0x08054ef8) */
/* WARNING: Removing unreachable block (ram,0x08054e88) */
/* WARNING: Removing unreachable block (ram,0x08054e8c) */
/* WARNING: Removing unreachable block (ram,0x08054e90) */
/* WARNING: Removing unreachable block (ram,0x08054e98) */
/* WARNING: Removing unreachable block (ram,0x08054ea0) */
/* WARNING: Removing unreachable block (ram,0x08054eac) */
/* WARNING: Removing unreachable block (ram,0x08054eb0) */
/* WARNING: Removing unreachable block (ram,0x08054ec0) */
/* WARNING: Removing unreachable block (ram,0x08054ec4) */
/* WARNING: Removing unreachable block (ram,0x08054ecc) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054efc) */
/* WARNING: Removing unreachable block (ram,0x08054f04) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */

uint sub_08054054(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  bool bVar4;
  bool bVar5;
  
  uVar3 = param_2 | param_4;
  if ((int)uVar3 < 0) {
    if ((int)(uVar3 + 0x100000) < 0) {
      bVar4 = (param_2 & 0x7fffffff) == 0;
      bVar5 = param_1 == 0 && bVar4;
      if (param_1 == 0 && bVar4) {
        bVar5 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      }
      if (!bVar5) {
        bVar5 = param_4 == param_2;
      }
      if (!bVar5) {
        return param_1;
      }
      return param_1;
    }
    if (param_2 << 1 < 0xffe00000 && param_4 << 1 < 0xffe00000) {
      return param_1;
    }
  }
  else {
    if (-1 < (int)(uVar3 + 0x100000)) {
      if (param_2 != param_4) {
        return param_1;
      }
      return param_1;
    }
    if (-1 < (int)(param_2 + 0x100000) && -1 < (int)(param_4 + 0x100000)) {
      return param_1;
    }
  }
  uVar3 = param_2 * 2;
  bVar4 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    uVar3 = param_4 * 2;
    bVar4 = uVar3 == 0xffe00000;
  }
  bVar5 = bVar4;
  if (bVar4) {
    bVar5 = param_3 == 0;
  }
  if (!bVar4 && uVar3 < 0xffe00000 || bVar5) {
    if ((int)(param_2 | param_4) < 0) {
      bVar4 = SBORROW4(param_4,param_2);
      if (param_4 == param_2) {
        bVar4 = SBORROW4(param_3,param_1);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    else {
      bVar4 = SBORROW4(param_2,param_4);
      if (param_2 == param_4) {
        bVar4 = SBORROW4(param_1,param_3);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    return param_1;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  *puVar1 = uVar2 | 1;
  uVar3 = uVar2 & 0x1c00000 | 0x4130099;
  if ((uVar2 & 0x100) == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,uVar3,in_lr,uVar3,in_lr);
    if ((uVar3 & 0xf) != 9) {
      return uVar2;
    }
  }
  if ((uVar3 & 0x100000) != 0) {
    if ((uVar3 & 0xf0000) == 0) {
      uVar3 = uVar2 << 0x1d;
      if ((bool)((byte)(uVar2 >> 3) & 1)) {
        uVar3 = uVar3 | 0x30000000;
      }
      puVar1 = (uint *)sub_08047A2C();
      *puVar1 = *puVar1 & 0xfffffff | uVar3;
      return uVar2;
    }
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  uVar3 = uVar3 & uVar2 << 0x10;
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_08054058 @ 0x08054058 */

/* WARNING: Removing unreachable block (ram,0x08054854) */
/* WARNING: Removing unreachable block (ram,0x08053954) */
/* WARNING: Removing unreachable block (ram,0x08053970) */
/* WARNING: Removing unreachable block (ram,0x08053974) */
/* WARNING: Removing unreachable block (ram,0x0805398c) */
/* WARNING: Removing unreachable block (ram,0x08053978) */
/* WARNING: Removing unreachable block (ram,0x08053980) */
/* WARNING: Removing unreachable block (ram,0x08053988) */
/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548ac) */
/* WARNING: Removing unreachable block (ram,0x080548b4) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054984) */
/* WARNING: Removing unreachable block (ram,0x08054970) */
/* WARNING: Removing unreachable block (ram,0x08054ef8) */
/* WARNING: Removing unreachable block (ram,0x08054e88) */
/* WARNING: Removing unreachable block (ram,0x08054e8c) */
/* WARNING: Removing unreachable block (ram,0x08054e90) */
/* WARNING: Removing unreachable block (ram,0x08054e98) */
/* WARNING: Removing unreachable block (ram,0x08054ea0) */
/* WARNING: Removing unreachable block (ram,0x08054eac) */
/* WARNING: Removing unreachable block (ram,0x08054eb0) */
/* WARNING: Removing unreachable block (ram,0x08054ec0) */
/* WARNING: Removing unreachable block (ram,0x08054ec4) */
/* WARNING: Removing unreachable block (ram,0x08054ecc) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x08054efc) */
/* WARNING: Removing unreachable block (ram,0x08054f04) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */

uint sub_08054058(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  bool bVar4;
  bool bVar5;
  
  uVar3 = param_2 | param_4;
  if ((int)uVar3 < 0) {
    if ((int)(uVar3 + 0x100000) < 0) {
      bVar4 = (param_2 & 0x7fffffff) == 0;
      bVar5 = param_1 == 0 && bVar4;
      if (param_1 == 0 && bVar4) {
        bVar5 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      }
      if (!bVar5) {
        bVar5 = param_4 == param_2;
      }
      if (!bVar5) {
        return param_1;
      }
      return param_1;
    }
    if (param_2 << 1 < 0xffe00000 && param_4 << 1 < 0xffe00000) {
      return param_1;
    }
  }
  else {
    if (-1 < (int)(uVar3 + 0x100000)) {
      if (param_2 != param_4) {
        return param_1;
      }
      return param_1;
    }
    if (-1 < (int)(param_2 + 0x100000) && -1 < (int)(param_4 + 0x100000)) {
      return param_1;
    }
  }
  uVar3 = param_2 * 2;
  bVar4 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    uVar3 = param_4 * 2;
    bVar4 = uVar3 == 0xffe00000;
  }
  bVar5 = bVar4;
  if (bVar4) {
    bVar5 = param_3 == 0;
  }
  if (!bVar4 && uVar3 < 0xffe00000 || bVar5) {
    if ((int)(param_2 | param_4) < 0) {
      bVar4 = SBORROW4(param_4,param_2);
      if (param_4 == param_2) {
        bVar4 = SBORROW4(param_3,param_1);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    else {
      bVar4 = SBORROW4(param_2,param_4);
      if (param_2 == param_4) {
        bVar4 = SBORROW4(param_1,param_3);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    return param_1;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  *puVar1 = uVar2 | 1;
  uVar3 = uVar2 & 0x1c00000 | 0x4130099;
  if ((uVar2 & 0x100) == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,uVar3,in_lr,uVar3,in_lr);
    if ((uVar3 & 0xf) != 9) {
      return uVar2;
    }
  }
  if ((uVar3 & 0x100000) != 0) {
    if ((uVar3 & 0xf0000) == 0) {
      uVar3 = uVar2 << 0x1d;
      if ((bool)((byte)(uVar2 >> 3) & 1)) {
        uVar3 = uVar3 | 0x30000000;
      }
      puVar1 = (uint *)sub_08047A2C();
      *puVar1 = *puVar1 & 0xfffffff | uVar3;
      return uVar2;
    }
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  uVar3 = uVar3 & uVar2 << 0x10;
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_080540D8 @ 0x080540D8 */

/* WARNING: Removing unreachable block (ram,0x08054854) */
/* WARNING: Removing unreachable block (ram,0x08053954) */
/* WARNING: Removing unreachable block (ram,0x08053970) */
/* WARNING: Removing unreachable block (ram,0x08053974) */
/* WARNING: Removing unreachable block (ram,0x0805398c) */
/* WARNING: Removing unreachable block (ram,0x08053978) */
/* WARNING: Removing unreachable block (ram,0x08053980) */
/* WARNING: Removing unreachable block (ram,0x08053988) */
/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548b4) */
/* WARNING: Removing unreachable block (ram,0x080548ac) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x08054984) */
/* WARNING: Removing unreachable block (ram,0x08054970) */
/* WARNING: Removing unreachable block (ram,0x08054ef8) */
/* WARNING: Removing unreachable block (ram,0x08054e88) */
/* WARNING: Removing unreachable block (ram,0x08054e8c) */
/* WARNING: Removing unreachable block (ram,0x08054e90) */
/* WARNING: Removing unreachable block (ram,0x08054e98) */
/* WARNING: Removing unreachable block (ram,0x08054eb0) */
/* WARNING: Removing unreachable block (ram,0x08054efc) */
/* WARNING: Removing unreachable block (ram,0x08054f04) */
/* WARNING: Removing unreachable block (ram,0x08054eac) */
/* WARNING: Removing unreachable block (ram,0x08054ec0) */
/* WARNING: Removing unreachable block (ram,0x08054ec4) */
/* WARNING: Removing unreachable block (ram,0x08054ecc) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */

uint sub_080540D8(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  bool bVar4;
  bool bVar5;
  
  uVar3 = param_2 | param_4;
  if ((int)uVar3 < 0) {
    if ((int)(uVar3 + 0x100000) < 0) {
      bVar4 = (param_2 & 0x7fffffff) == 0;
      bVar5 = param_1 == 0 && bVar4;
      if (param_1 == 0 && bVar4) {
        bVar5 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      }
      if (!bVar5) {
        bVar5 = param_4 == param_2;
      }
      if (!bVar5) {
        return param_1;
      }
      return param_1;
    }
    if (param_2 << 1 < 0xffe00000 && param_4 << 1 < 0xffe00000) {
      return param_1;
    }
  }
  else {
    if (-1 < (int)(uVar3 + 0x100000)) {
      if (param_2 != param_4) {
        return param_1;
      }
      return param_1;
    }
    if (-1 < (int)(param_2 + 0x100000) && -1 < (int)(param_4 + 0x100000)) {
      return param_1;
    }
  }
  uVar3 = param_2 * 2;
  bVar4 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    uVar3 = param_4 * 2;
    bVar4 = uVar3 == 0xffe00000;
  }
  bVar5 = bVar4;
  if (bVar4) {
    bVar5 = param_3 == 0;
  }
  if (!bVar4 && uVar3 < 0xffe00000 || bVar5) {
    if ((int)(param_2 | param_4) < 0) {
      bVar4 = SBORROW4(param_4,param_2);
      if (param_4 == param_2) {
        bVar4 = SBORROW4(param_3,param_1);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    else {
      bVar4 = SBORROW4(param_2,param_4);
      if (param_2 == param_4) {
        bVar4 = SBORROW4(param_1,param_3);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    return param_1;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  *puVar1 = uVar2 | 1;
  uVar3 = uVar2 & 0x1c00000 | 0x4160099;
  if ((uVar2 & 0x100) == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,uVar3,in_lr,uVar3,in_lr);
    if ((uVar3 & 0xf) != 9) {
      return uVar2;
    }
  }
  if ((uVar3 & 0x100000) != 0) {
    if ((uVar3 & 0xf0000) == 0) {
      uVar3 = uVar2 << 0x1d;
      if ((bool)((byte)(uVar2 >> 3) & 1)) {
        uVar3 = uVar3 | 0x30000000;
      }
      puVar1 = (uint *)sub_08047A2C();
      *puVar1 = *puVar1 & 0xfffffff | uVar3;
      return uVar2;
    }
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  uVar3 = uVar3 & uVar2 << 0x10;
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_080540DC @ 0x080540DC */

/* WARNING: Removing unreachable block (ram,0x08054854) */
/* WARNING: Removing unreachable block (ram,0x08053954) */
/* WARNING: Removing unreachable block (ram,0x08053970) */
/* WARNING: Removing unreachable block (ram,0x08053974) */
/* WARNING: Removing unreachable block (ram,0x0805398c) */
/* WARNING: Removing unreachable block (ram,0x08053978) */
/* WARNING: Removing unreachable block (ram,0x08053980) */
/* WARNING: Removing unreachable block (ram,0x08053988) */
/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548b4) */
/* WARNING: Removing unreachable block (ram,0x080548ac) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x08054984) */
/* WARNING: Removing unreachable block (ram,0x08054970) */
/* WARNING: Removing unreachable block (ram,0x08054ef8) */
/* WARNING: Removing unreachable block (ram,0x08054e88) */
/* WARNING: Removing unreachable block (ram,0x08054e8c) */
/* WARNING: Removing unreachable block (ram,0x08054e90) */
/* WARNING: Removing unreachable block (ram,0x08054e98) */
/* WARNING: Removing unreachable block (ram,0x08054eb0) */
/* WARNING: Removing unreachable block (ram,0x08054efc) */
/* WARNING: Removing unreachable block (ram,0x08054f04) */
/* WARNING: Removing unreachable block (ram,0x08054eac) */
/* WARNING: Removing unreachable block (ram,0x08054ec0) */
/* WARNING: Removing unreachable block (ram,0x08054ec4) */
/* WARNING: Removing unreachable block (ram,0x08054ecc) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */

uint sub_080540DC(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  bool bVar4;
  bool bVar5;
  
  uVar3 = param_2 | param_4;
  if ((int)uVar3 < 0) {
    if ((int)(uVar3 + 0x100000) < 0) {
      bVar4 = (param_2 & 0x7fffffff) == 0;
      bVar5 = param_1 == 0 && bVar4;
      if (param_1 == 0 && bVar4) {
        bVar5 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      }
      if (!bVar5) {
        bVar5 = param_4 == param_2;
      }
      if (!bVar5) {
        return param_1;
      }
      return param_1;
    }
    if (param_2 << 1 < 0xffe00000 && param_4 << 1 < 0xffe00000) {
      return param_1;
    }
  }
  else {
    if (-1 < (int)(uVar3 + 0x100000)) {
      if (param_2 != param_4) {
        return param_1;
      }
      return param_1;
    }
    if (-1 < (int)(param_2 + 0x100000) && -1 < (int)(param_4 + 0x100000)) {
      return param_1;
    }
  }
  uVar3 = param_2 * 2;
  bVar4 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    uVar3 = param_4 * 2;
    bVar4 = uVar3 == 0xffe00000;
  }
  bVar5 = bVar4;
  if (bVar4) {
    bVar5 = param_3 == 0;
  }
  if (!bVar4 && uVar3 < 0xffe00000 || bVar5) {
    if ((int)(param_2 | param_4) < 0) {
      bVar4 = SBORROW4(param_4,param_2);
      if (param_4 == param_2) {
        bVar4 = SBORROW4(param_3,param_1);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    else {
      bVar4 = SBORROW4(param_2,param_4);
      if (param_2 == param_4) {
        bVar4 = SBORROW4(param_1,param_3);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    return param_1;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  *puVar1 = uVar2 | 1;
  uVar3 = uVar2 & 0x1c00000 | 0x4160099;
  if ((uVar2 & 0x100) == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,uVar3,in_lr,uVar3,in_lr);
    if ((uVar3 & 0xf) != 9) {
      return uVar2;
    }
  }
  if ((uVar3 & 0x100000) != 0) {
    if ((uVar3 & 0xf0000) == 0) {
      uVar3 = uVar2 << 0x1d;
      if ((bool)((byte)(uVar2 >> 3) & 1)) {
        uVar3 = uVar3 | 0x30000000;
      }
      puVar1 = (uint *)sub_08047A2C();
      *puVar1 = *puVar1 & 0xfffffff | uVar3;
      return uVar2;
    }
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  uVar3 = uVar3 & uVar2 << 0x10;
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_0805415C @ 0x0805415C */

uint sub_0805415C(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 in_lr;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  
  if ((~(param_2 >> 4) & 0x7ff0000) != 0 && (~(param_4 >> 4) & 0x7ff0000) != 0) {
    uVar15 = param_2 >> 4 & 0x7ff0000;
    uVar16 = uVar15 | (param_2 ^ param_4) >> 0x1f;
    uVar8 = param_4 >> 4 & 0x7ff0000;
    if (uVar8 == 0 || (param_2 & 0x7ff00000) == 0) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0
         ) {
        return 0;
      }
      if (uVar8 == 0) {
        iVar17 = 0x10000;
        param_4 = param_4 & 0x7fffffff;
        if (param_4 == 0 && param_3 >> 0xc == 0) {
          param_3 = param_3 << 0x14;
          iVar17 = -0x130000;
        }
        uVar7 = param_3;
        if (param_4 == 0) {
          param_4 = param_3 >> 0xc;
          uVar7 = param_3 << 0x14;
          iVar17 = iVar17 + -0x140000;
        }
        uVar9 = 0;
        if (param_4 >> 5 == 0) {
          param_4 = param_4 << 0x10;
          uVar9 = 0x10;
        }
        if (param_4 >> 0xd == 0) {
          param_4 = param_4 << 8;
          uVar9 = uVar9 + 8;
        }
        if (param_4 >> 0x11 == 0) {
          param_4 = param_4 << 4;
          uVar9 = uVar9 + 4;
        }
        if (param_4 >> 0x13 == 0) {
          param_4 = param_4 << 2;
          uVar9 = uVar9 + 2;
        }
        if (param_4 >> 0x14 == 0) {
          param_4 = param_4 << 1;
          uVar9 = uVar9 + 1;
        }
        uVar8 = iVar17 + uVar9 * -0x10000;
        param_3 = uVar7 << (uVar9 & 0xff);
        param_4 = param_4 | uVar7 >> (0x20 - uVar9 & 0xff);
      }
      if (uVar15 == 0) {
        iVar17 = uVar16 + 0x10000;
        param_2 = param_2 & 0x7fffffff;
        if (param_2 == 0 && param_1 >> 0xc == 0) {
          param_1 = param_1 << 0x14;
          iVar17 = uVar16 - 0x130000;
        }
        uVar15 = param_1;
        if (param_2 == 0) {
          param_2 = param_1 >> 0xc;
          uVar15 = param_1 << 0x14;
          iVar17 = iVar17 + -0x140000;
        }
        uVar7 = 0;
        if (param_2 >> 5 == 0) {
          param_2 = param_2 << 0x10;
          uVar7 = 0x10;
        }
        if (param_2 >> 0xd == 0) {
          param_2 = param_2 << 8;
          uVar7 = uVar7 + 8;
        }
        if (param_2 >> 0x11 == 0) {
          param_2 = param_2 << 4;
          uVar7 = uVar7 + 4;
        }
        if (param_2 >> 0x13 == 0) {
          param_2 = param_2 << 2;
          uVar7 = uVar7 + 2;
        }
        if (param_2 >> 0x14 == 0) {
          param_2 = param_2 << 1;
          uVar7 = uVar7 + 1;
        }
        uVar16 = iVar17 + uVar7 * -0x10000;
        param_1 = uVar15 << (uVar7 & 0xff);
        param_2 = param_2 | uVar15 >> (0x20 - uVar7 & 0xff);
      }
    }
    iVar17 = uVar16 + uVar8 + -0x3fc0000;
    uVar15 = param_2 & 0x1fffff | 0x100000;
    uVar7 = param_4 & 0x1fffff | 0x100000;
    lVar1 = (ulonglong)param_3 * (ulonglong)uVar15;
    uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar2 = (ulonglong)uVar7 * (ulonglong)param_1;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar4 = lVar1 + lVar2;
    uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar3 = (ulonglong)uVar7 * (ulonglong)uVar15;
    uVar15 = (uint)lVar3;
    uVar13 = (uint)((ulonglong)param_3 * (ulonglong)param_1 >> 0x20);
    lVar5 = lVar4 + CONCAT44(uVar15,uVar13);
    uVar7 = (uint)lVar5;
    uVar11 = (uint)((ulonglong)lVar5 >> 0x20);
    param_4 = (int)((ulonglong)lVar3 >> 0x20) +
              (uint)(CARRY4(uVar9,uVar12) ||
                    CARRY4(uVar9 + uVar12,(uint)CARRY4((uint)lVar2,(uint)lVar1))) +
              (uint)(CARRY4(uVar10,uVar15) ||
                    CARRY4(uVar10 + uVar15,(uint)CARRY4((uint)lVar4,uVar13)));
    if ((int)((ulonglong)param_3 * (ulonglong)param_1) != 0) {
      uVar7 = uVar7 | 1;
    }
    iVar14 = (0x1ff < param_4) + 0x14;
    param_3 = (iVar17 >> 0x10) + -4 + (uint)(0x1ff < param_4);
    uVar15 = 0x20 - iVar14;
    param_1 = uVar11 << (uVar15 & 0xff) | uVar7 >> iVar14;
    param_2 = (param_4 << (uVar15 & 0xff) | uVar11 >> iVar14) + param_3 * 0x100000 ^
              uVar16 * -0x80000000;
    uVar7 = uVar7 << (uVar15 & 0xff);
    if (uVar7 != 0) {
      bVar18 = SUB41(uVar7 >> 0x1f,0);
      if (bVar18) {
        if ((uVar7 & 0x7fffffff) == 0) {
          param_4 = param_4 | 0x80000000;
        }
        uVar15 = param_1 + bVar18;
        param_2 = param_2 + CARRY4(param_1,(uint)bVar18);
        uVar7 = 0x40000000;
        param_1 = uVar15 & ~(param_4 >> 0x1f);
        if ((uVar15 & param_4 >> 0x1f) != 0) {
          uVar7 = 0xc0000000;
        }
      }
      else {
        uVar7 = 0xc0000000;
      }
    }
    if ((-1 < (int)(param_2 ^ uVar16 * -0x80000000)) &&
       ((param_2 & 0x7ff00000) != 0 && (~param_2 & 0x7ff00000) != 0)) {
      return param_1;
    }
    bVar19 = SBORROW4(iVar17,0x4000000);
    bVar18 = (int)(uVar16 + uVar8 + -0x7fc0000) < 0;
    if (iVar17 < 0x4000001) {
      param_2 = param_2 + 0x60000000;
    }
    if (bVar18 == bVar19) {
      param_2 = param_2 + 0xa0000000;
    }
    uVar15 = uVar7 | 0x13;
    if (bVar18 == bVar19) {
      uVar15 = uVar7 | 0x10000013;
    }
    if (iVar17 != 0x4000000 && bVar18 == bVar19) goto sub_08054850;
    puVar6 = (uint *)sub_08047A2C();
    param_4 = *puVar6;
    if ((param_4 & 0x1000000) != 0) {
      return 0;
    }
    if ((param_4 & 0x800) == 0) {
      if ((int)param_2 < 0) {
        uVar15 = uVar15 | 0x10000;
      }
      uVar8 = param_2 & ~((param_2 >> 0x14) << 0x14);
      iVar17 = -(param_2 >> 0x14 & 0xfffff7ff);
      uVar7 = iVar17 + 0x601;
      uVar16 = uVar8 | 0x100000;
      if (uVar7 < 0x36) {
        if (uVar7 == 0x35) {
          uVar7 = 0;
          uVar9 = 0x80000000;
          if (param_1 != 0 || (uVar8 & 0xfffff) != 0) {
            uVar9 = 0x80000001;
          }
        }
        else if (uVar7 < 0x15) {
          uVar9 = param_1 << (0x20 - uVar7 & 0xff);
          uVar7 = uVar16 << (0x20 - uVar7 & 0xff) | param_1 >> (uVar7 & 0xff);
        }
        else {
          uVar8 = iVar17 + 0x5e1;
          if (uVar7 < 0x20 || uVar8 == 0) {
            uVar7 = uVar16 << (-uVar8 & 0xff) | param_1 >> (uVar7 & 0xff);
            uVar9 = param_1 << (-uVar8 & 0xff);
          }
          else {
            uVar7 = uVar16 >> (uVar8 & 0xff);
            uVar9 = uVar16 << (0x20 - uVar8 & 0xff);
            if (param_1 != 0) {
              uVar9 = uVar9 | 1;
            }
          }
        }
      }
      else {
        uVar9 = 1;
        uVar7 = 0;
      }
      if (uVar9 != 0) {
        if (SUB41(uVar9 >> 0x1f,0)) {
          if (((uVar9 & 0x7fffffff) == 0) && (-1 < (int)uVar15 >> 0x1e)) {
            if ((int)uVar15 >> 0x1e == 0) {
              uVar7 = uVar7 + 1 & 0xfffffffe;
            }
          }
          else {
            uVar7 = uVar7 + 1;
          }
        }
        puVar6 = (uint *)sub_08047A2C();
        *puVar6 = *puVar6 | 8;
        return uVar7;
      }
      return uVar7;
    }
    uVar15 = uVar15 | 0x20000000;
    goto sub_08054F14;
  }
  uVar8 = param_2 * 2;
  bVar18 = uVar8 == 0xffe00000 && param_1 == 0;
  if (uVar8 < 0xffe00000 || uVar8 == 0xffe00000 && param_1 == 0) {
    bVar18 = param_4 * 2 == 0xffe00000;
    uVar8 = param_4 * 2;
  }
  bVar19 = bVar18;
  if (bVar18) {
    bVar19 = param_3 == 0;
  }
  uVar15 = 0x4000013;
  if ((bVar18 || 0xffdfffff < uVar8) && !bVar19) {
    uVar16 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
    uVar8 = uVar16;
    if (uVar16 < 0xfff00001) {
      uVar8 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
    }
    if (0xfff00000 < uVar8) goto sub_08054850;
    if (0xfffff < uVar16) {
      param_1 = param_3;
      param_2 = param_4;
    }
sub_08054E78:
    uVar8 = uVar15 & 0xf;
    if (uVar8 != 9) {
      if (uVar8 != 8) {
        return param_1;
      }
      if (uVar8 == 8 && (uVar15 & 0x40) == 0) {
        if ((uVar15 & 0x10) == 0) {
          uVar8 = 0x7fc00000;
        }
        else {
          uVar8 = 0;
        }
        return uVar8;
      }
      if ((uVar15 & 0x10000) != 0) {
        return 0;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar8 = 0xffffffff;
        if ((param_3 & 0x80000000) != 0) {
          uVar8 = 0;
        }
        return uVar8;
      }
      if ((uVar15 & 0x10) == 0) {
        uVar8 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar8 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar8 = ~uVar8;
      }
      return uVar8;
    }
    uVar8 = 8;
    goto sub_08054F3C;
  }
  if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)
     ) {
    return 0;
  }
  uVar15 = 0x4000013;
sub_08054850:
  if ((uVar15 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar6 = (uint *)sub_08047A2C();
  uVar8 = *puVar6;
  if ((uVar15 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
    uVar15 = uVar15 | 0x40000000;
  }
  uVar16 = uVar15 | uVar8 & 0x1c00000;
  *puVar6 = uVar8 | (uVar15 << 1) >> 0x1b;
  bVar18 = (uVar15 & 0xf) != 8;
  if (bVar18) {
    uVar7 = uVar15 & 0x70;
    uVar15 = uVar16 | uVar7 << 3;
  }
  else {
    uVar7 = 0x20000;
    uVar15 = uVar16;
  }
  if (!bVar18 && (uVar7 & ~uVar15) == 0) {
    uVar15 = uVar15 | 0xc00000;
  }
  if ((uVar15 & 0x20000000) == 0) {
    if ((uVar15 & 0x10000000) == 0) {
      if ((uVar15 & 0x40000000) != 0) {
        uVar8 = uVar8 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((uVar15 & 0x8000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          param_3 = param_2;
          if ((uVar15 & 0x80) == 0) {
            param_3 = param_1;
          }
          param_3 = param_3 & 0x80000000;
          if ((uVar15 & 0x10) == 0) {
            param_1 = param_3 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = param_3;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x200) == 0) {
        if ((uVar15 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar15 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((uVar15 & 0x10) == 0) {
        uVar8 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    uVar8 = uVar8 & 0x800;
joined_r0x08054900:
    if (uVar8 == 0) {
      return param_1;
    }
  }
sub_08054F14:
  uVar8 = sub_080491E4(param_1,param_2,param_3,param_4,uVar15,in_lr,uVar15,in_lr);
  if ((uVar15 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  if ((uVar15 & 0x100000) == 0) {
    uVar15 = uVar15 & uVar8 << 0x10;
    if (uVar15 != 0) {
      uVar15 = 1;
    }
    return uVar15;
  }
  if ((uVar15 & 0xf0000) == 0) {
    uVar15 = uVar8 << 0x1d;
    if ((bool)((byte)(uVar8 >> 3) & 1)) {
      uVar15 = uVar15 | 0x30000000;
    }
    puVar6 = (uint *)sub_08047A2C();
    *puVar6 = *puVar6 & 0xfffffff | uVar15;
    return uVar8;
  }
  if ((uVar8 & 8) != 0) {
    return uVar8;
  }
  return 2 - uVar8;
}


/* sub_08054160 @ 0x08054160 */

uint sub_08054160(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 in_lr;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  
  if ((~(param_2 >> 4) & 0x7ff0000) != 0 && (~(param_4 >> 4) & 0x7ff0000) != 0) {
    uVar15 = param_2 >> 4 & 0x7ff0000;
    uVar16 = uVar15 | (param_2 ^ param_4) >> 0x1f;
    uVar8 = param_4 >> 4 & 0x7ff0000;
    if (uVar8 == 0 || (param_2 & 0x7ff00000) == 0) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0
         ) {
        return 0;
      }
      if (uVar8 == 0) {
        iVar17 = 0x10000;
        param_4 = param_4 & 0x7fffffff;
        if (param_4 == 0 && param_3 >> 0xc == 0) {
          param_3 = param_3 << 0x14;
          iVar17 = -0x130000;
        }
        uVar7 = param_3;
        if (param_4 == 0) {
          param_4 = param_3 >> 0xc;
          uVar7 = param_3 << 0x14;
          iVar17 = iVar17 + -0x140000;
        }
        uVar9 = 0;
        if (param_4 >> 5 == 0) {
          param_4 = param_4 << 0x10;
          uVar9 = 0x10;
        }
        if (param_4 >> 0xd == 0) {
          param_4 = param_4 << 8;
          uVar9 = uVar9 + 8;
        }
        if (param_4 >> 0x11 == 0) {
          param_4 = param_4 << 4;
          uVar9 = uVar9 + 4;
        }
        if (param_4 >> 0x13 == 0) {
          param_4 = param_4 << 2;
          uVar9 = uVar9 + 2;
        }
        if (param_4 >> 0x14 == 0) {
          param_4 = param_4 << 1;
          uVar9 = uVar9 + 1;
        }
        uVar8 = iVar17 + uVar9 * -0x10000;
        param_3 = uVar7 << (uVar9 & 0xff);
        param_4 = param_4 | uVar7 >> (0x20 - uVar9 & 0xff);
      }
      if (uVar15 == 0) {
        iVar17 = uVar16 + 0x10000;
        param_2 = param_2 & 0x7fffffff;
        if (param_2 == 0 && param_1 >> 0xc == 0) {
          param_1 = param_1 << 0x14;
          iVar17 = uVar16 - 0x130000;
        }
        uVar15 = param_1;
        if (param_2 == 0) {
          param_2 = param_1 >> 0xc;
          uVar15 = param_1 << 0x14;
          iVar17 = iVar17 + -0x140000;
        }
        uVar7 = 0;
        if (param_2 >> 5 == 0) {
          param_2 = param_2 << 0x10;
          uVar7 = 0x10;
        }
        if (param_2 >> 0xd == 0) {
          param_2 = param_2 << 8;
          uVar7 = uVar7 + 8;
        }
        if (param_2 >> 0x11 == 0) {
          param_2 = param_2 << 4;
          uVar7 = uVar7 + 4;
        }
        if (param_2 >> 0x13 == 0) {
          param_2 = param_2 << 2;
          uVar7 = uVar7 + 2;
        }
        if (param_2 >> 0x14 == 0) {
          param_2 = param_2 << 1;
          uVar7 = uVar7 + 1;
        }
        uVar16 = iVar17 + uVar7 * -0x10000;
        param_1 = uVar15 << (uVar7 & 0xff);
        param_2 = param_2 | uVar15 >> (0x20 - uVar7 & 0xff);
      }
    }
    iVar17 = uVar16 + uVar8 + -0x3fc0000;
    uVar15 = param_2 & 0x1fffff | 0x100000;
    uVar7 = param_4 & 0x1fffff | 0x100000;
    lVar1 = (ulonglong)param_3 * (ulonglong)uVar15;
    uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar2 = (ulonglong)uVar7 * (ulonglong)param_1;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar4 = lVar1 + lVar2;
    uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar3 = (ulonglong)uVar7 * (ulonglong)uVar15;
    uVar15 = (uint)lVar3;
    uVar13 = (uint)((ulonglong)param_3 * (ulonglong)param_1 >> 0x20);
    lVar5 = lVar4 + CONCAT44(uVar15,uVar13);
    uVar7 = (uint)lVar5;
    uVar11 = (uint)((ulonglong)lVar5 >> 0x20);
    param_4 = (int)((ulonglong)lVar3 >> 0x20) +
              (uint)(CARRY4(uVar9,uVar12) ||
                    CARRY4(uVar9 + uVar12,(uint)CARRY4((uint)lVar2,(uint)lVar1))) +
              (uint)(CARRY4(uVar10,uVar15) ||
                    CARRY4(uVar10 + uVar15,(uint)CARRY4((uint)lVar4,uVar13)));
    if ((int)((ulonglong)param_3 * (ulonglong)param_1) != 0) {
      uVar7 = uVar7 | 1;
    }
    iVar14 = (0x1ff < param_4) + 0x14;
    param_3 = (iVar17 >> 0x10) + -4 + (uint)(0x1ff < param_4);
    uVar15 = 0x20 - iVar14;
    param_1 = uVar11 << (uVar15 & 0xff) | uVar7 >> iVar14;
    param_2 = (param_4 << (uVar15 & 0xff) | uVar11 >> iVar14) + param_3 * 0x100000 ^
              uVar16 * -0x80000000;
    uVar7 = uVar7 << (uVar15 & 0xff);
    if (uVar7 != 0) {
      bVar18 = SUB41(uVar7 >> 0x1f,0);
      if (bVar18) {
        if ((uVar7 & 0x7fffffff) == 0) {
          param_4 = param_4 | 0x80000000;
        }
        uVar15 = param_1 + bVar18;
        param_2 = param_2 + CARRY4(param_1,(uint)bVar18);
        uVar7 = 0x40000000;
        param_1 = uVar15 & ~(param_4 >> 0x1f);
        if ((uVar15 & param_4 >> 0x1f) != 0) {
          uVar7 = 0xc0000000;
        }
      }
      else {
        uVar7 = 0xc0000000;
      }
    }
    if ((-1 < (int)(param_2 ^ uVar16 * -0x80000000)) &&
       ((param_2 & 0x7ff00000) != 0 && (~param_2 & 0x7ff00000) != 0)) {
      return param_1;
    }
    bVar19 = SBORROW4(iVar17,0x4000000);
    bVar18 = (int)(uVar16 + uVar8 + -0x7fc0000) < 0;
    if (iVar17 < 0x4000001) {
      param_2 = param_2 + 0x60000000;
    }
    if (bVar18 == bVar19) {
      param_2 = param_2 + 0xa0000000;
    }
    uVar15 = uVar7 | 0x13;
    if (bVar18 == bVar19) {
      uVar15 = uVar7 | 0x10000013;
    }
    if (iVar17 != 0x4000000 && bVar18 == bVar19) goto sub_08054850;
    puVar6 = (uint *)sub_08047A2C();
    param_4 = *puVar6;
    if ((param_4 & 0x1000000) != 0) {
      return 0;
    }
    if ((param_4 & 0x800) == 0) {
      if ((int)param_2 < 0) {
        uVar15 = uVar15 | 0x10000;
      }
      uVar8 = param_2 & ~((param_2 >> 0x14) << 0x14);
      iVar17 = -(param_2 >> 0x14 & 0xfffff7ff);
      uVar7 = iVar17 + 0x601;
      uVar16 = uVar8 | 0x100000;
      if (uVar7 < 0x36) {
        if (uVar7 == 0x35) {
          uVar7 = 0;
          uVar9 = 0x80000000;
          if (param_1 != 0 || (uVar8 & 0xfffff) != 0) {
            uVar9 = 0x80000001;
          }
        }
        else if (uVar7 < 0x15) {
          uVar9 = param_1 << (0x20 - uVar7 & 0xff);
          uVar7 = uVar16 << (0x20 - uVar7 & 0xff) | param_1 >> (uVar7 & 0xff);
        }
        else {
          uVar8 = iVar17 + 0x5e1;
          if (uVar7 < 0x20 || uVar8 == 0) {
            uVar7 = uVar16 << (-uVar8 & 0xff) | param_1 >> (uVar7 & 0xff);
            uVar9 = param_1 << (-uVar8 & 0xff);
          }
          else {
            uVar7 = uVar16 >> (uVar8 & 0xff);
            uVar9 = uVar16 << (0x20 - uVar8 & 0xff);
            if (param_1 != 0) {
              uVar9 = uVar9 | 1;
            }
          }
        }
      }
      else {
        uVar9 = 1;
        uVar7 = 0;
      }
      if (uVar9 != 0) {
        if (SUB41(uVar9 >> 0x1f,0)) {
          if (((uVar9 & 0x7fffffff) == 0) && (-1 < (int)uVar15 >> 0x1e)) {
            if ((int)uVar15 >> 0x1e == 0) {
              uVar7 = uVar7 + 1 & 0xfffffffe;
            }
          }
          else {
            uVar7 = uVar7 + 1;
          }
        }
        puVar6 = (uint *)sub_08047A2C();
        *puVar6 = *puVar6 | 8;
        return uVar7;
      }
      return uVar7;
    }
    uVar15 = uVar15 | 0x20000000;
    goto sub_08054F14;
  }
  uVar8 = param_2 * 2;
  bVar18 = uVar8 == 0xffe00000 && param_1 == 0;
  if (uVar8 < 0xffe00000 || uVar8 == 0xffe00000 && param_1 == 0) {
    bVar18 = param_4 * 2 == 0xffe00000;
    uVar8 = param_4 * 2;
  }
  bVar19 = bVar18;
  if (bVar18) {
    bVar19 = param_3 == 0;
  }
  uVar15 = 0x4000013;
  if ((bVar18 || 0xffdfffff < uVar8) && !bVar19) {
    uVar16 = param_2 * 2 + 0x100000 + (uint)(param_1 != 0);
    uVar8 = uVar16;
    if (uVar16 < 0xfff00001) {
      uVar8 = param_4 * 2 + 0x100000 + (uint)(param_3 != 0);
    }
    if (0xfff00000 < uVar8) goto sub_08054850;
    if (0xfffff < uVar16) {
      param_1 = param_3;
      param_2 = param_4;
    }
sub_08054E78:
    uVar8 = uVar15 & 0xf;
    if (uVar8 != 9) {
      if (uVar8 != 8) {
        return param_1;
      }
      if (uVar8 == 8 && (uVar15 & 0x40) == 0) {
        if ((uVar15 & 0x10) == 0) {
          uVar8 = 0x7fc00000;
        }
        else {
          uVar8 = 0;
        }
        return uVar8;
      }
      if ((uVar15 & 0x10000) != 0) {
        return 0;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar8 = 0xffffffff;
        if ((param_3 & 0x80000000) != 0) {
          uVar8 = 0;
        }
        return uVar8;
      }
      if ((uVar15 & 0x10) == 0) {
        uVar8 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar8 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar8 = ~uVar8;
      }
      return uVar8;
    }
    uVar8 = 8;
    goto sub_08054F3C;
  }
  if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)
     ) {
    return 0;
  }
  uVar15 = 0x4000013;
sub_08054850:
  if ((uVar15 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar6 = (uint *)sub_08047A2C();
  uVar8 = *puVar6;
  if ((uVar15 & ~(uVar8 << 0x12) & 0x30000000) != 0) {
    uVar15 = uVar15 | 0x40000000;
  }
  uVar16 = uVar15 | uVar8 & 0x1c00000;
  *puVar6 = uVar8 | (uVar15 << 1) >> 0x1b;
  bVar18 = (uVar15 & 0xf) != 8;
  if (bVar18) {
    uVar7 = uVar15 & 0x70;
    uVar15 = uVar16 | uVar7 << 3;
  }
  else {
    uVar7 = 0x20000;
    uVar15 = uVar16;
  }
  if (!bVar18 && (uVar7 & ~uVar15) == 0) {
    uVar15 = uVar15 | 0xc00000;
  }
  if ((uVar15 & 0x20000000) == 0) {
    if ((uVar15 & 0x10000000) == 0) {
      if ((uVar15 & 0x40000000) != 0) {
        uVar8 = uVar8 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((uVar15 & 0x8000000) == 0) {
        if ((uVar8 & 0x100) == 0) {
          param_3 = param_2;
          if ((uVar15 & 0x80) == 0) {
            param_3 = param_1;
          }
          param_3 = param_3 & 0x80000000;
          if ((uVar15 & 0x10) == 0) {
            param_1 = param_3 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = param_3;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar8 & 0x200) == 0) {
        if ((uVar15 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar8 & 0x400) == 0) {
      if ((uVar15 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((uVar15 & 0x10) == 0) {
        uVar8 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  else {
    uVar8 = uVar8 & 0x800;
joined_r0x08054900:
    if (uVar8 == 0) {
      return param_1;
    }
  }
sub_08054F14:
  uVar8 = sub_080491E4(param_1,param_2,param_3,param_4,uVar15,in_lr,uVar15,in_lr);
  if ((uVar15 & 0xf) != 9) {
    return uVar8;
  }
sub_08054F3C:
  if ((uVar15 & 0x100000) == 0) {
    uVar15 = uVar15 & uVar8 << 0x10;
    if (uVar15 != 0) {
      uVar15 = 1;
    }
    return uVar15;
  }
  if ((uVar15 & 0xf0000) == 0) {
    uVar15 = uVar8 << 0x1d;
    if ((bool)((byte)(uVar8 >> 3) & 1)) {
      uVar15 = uVar15 | 0x30000000;
    }
    puVar6 = (uint *)sub_08047A2C();
    *puVar6 = *puVar6 & 0xfffffff | uVar15;
    return uVar8;
  }
  if ((uVar8 & 8) != 0) {
    return uVar8;
  }
  return 2 - uVar8;
}


/* sub_0805441C @ 0x0805441C */

/* WARNING: Removing unreachable block (ram,0x080539ac) */
/* WARNING: Removing unreachable block (ram,0x08054854) */
/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548b4) */
/* WARNING: Removing unreachable block (ram,0x080548ac) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054984) */
/* WARNING: Removing unreachable block (ram,0x08054970) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */
/* WARNING: Removing unreachable block (ram,0x08054f34) */
/* WARNING: Removing unreachable block (ram,0x08054eac) */
/* WARNING: Removing unreachable block (ram,0x08054ef8) */
/* WARNING: Removing unreachable block (ram,0x08054fb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong sub_0805441C(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  bool bVar16;
  longlong lVar17;
  
  if ((param_2 & 0x7ff00000) == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    if (-1 < (int)param_2) {
      iVar6 = 1;
      if (param_2 == 0 && param_1 >> 0xc == 0) {
        param_1 = param_1 << 0x14;
        iVar6 = -0x13;
      }
      uVar2 = param_1;
      if (param_2 == 0) {
        param_2 = param_1 >> 0xc;
        uVar2 = param_1 << 0x14;
        iVar6 = iVar6 + -0x14;
      }
      uVar15 = 0;
      if (param_2 >> 5 == 0) {
        param_2 = param_2 << 0x10;
        uVar15 = 0x10;
      }
      if (param_2 >> 0xd == 0) {
        param_2 = param_2 << 8;
        uVar15 = uVar15 + 8;
      }
      if (param_2 >> 0x11 == 0) {
        param_2 = param_2 << 4;
        uVar15 = uVar15 + 4;
      }
      if (param_2 >> 0x13 == 0) {
        param_2 = param_2 << 2;
        uVar15 = uVar15 + 2;
      }
      if (param_2 >> 0x14 == 0) {
        param_2 = param_2 << 1;
        uVar15 = uVar15 + 1;
      }
      uVar13 = iVar6 - uVar15;
      param_1 = uVar2 << (uVar15 & 0xff);
      param_2 = param_2 | uVar2 >> (0x20 - uVar15 & 0xff);
_08054450:
      if ((bool)((byte)(uVar13 + 0xfd) & 1)) {
        iVar6 = (int)param_1 >> 0x1f;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 - iVar6;
      }
      uVar2 = param_1 << 10;
      uVar8 = 0x40000000;
      uVar9 = 0;
      uVar5 = (param_2 << 10 | param_1 >> 0x16) + 0xc0000000;
      uVar15 = 0x10000000;
      do {
        uVar10 = uVar5 - uVar8;
        uVar11 = uVar10;
        if (uVar8 <= uVar5) {
          uVar11 = uVar10 - uVar15;
        }
        if (uVar8 <= uVar5 && uVar15 <= uVar10) {
          uVar8 = uVar8 + uVar15 * 2;
          uVar5 = uVar11;
        }
        iVar6 = (int)uVar2 >> 0x1f;
        uVar2 = uVar2 * 2;
        uVar5 = uVar5 * 2 - iVar6;
        bVar16 = (bool)((byte)uVar15 & 1);
        uVar15 = uVar15 >> 1;
      } while (uVar15 != 0);
      uVar11 = uVar5 - (uVar8 + !bVar16);
      uVar15 = uVar2;
      if (uVar8 < uVar5 || uVar5 - uVar8 < (uint)bVar16) {
        if (uVar11 != 0 || uVar11 < (0x7fffffff < uVar2)) {
          uVar8 = uVar8 + 1;
          uVar15 = uVar2 + 0x80000000;
          uVar5 = uVar11 - (0x7fffffff >= uVar2);
        }
      }
      uVar2 = uVar15 << 1;
      uVar5 = uVar5 * 2 - ((int)uVar15 >> 0x1f);
      uVar15 = 0x40000000;
      do {
        uVar12 = uVar2 - uVar9;
        uVar10 = uVar5 - (uVar8 + (uVar9 > uVar2));
        uVar11 = uVar2;
        if (uVar8 < uVar5 || uVar5 - uVar8 < (uint)(uVar9 <= uVar2)) {
          if (uVar10 != 0 || uVar10 < (uVar15 <= uVar12)) {
            uVar9 = uVar9 + uVar15 * 2;
            uVar11 = uVar12 - uVar15;
            uVar5 = uVar10 - (uVar15 > uVar12);
          }
        }
        uVar2 = uVar11 << 1;
        uVar5 = uVar5 * 2 - ((int)uVar11 >> 0x1f);
        uVar15 = uVar15 >> 1;
      } while (uVar15 != 0x80);
      uVar5 = uVar5 | uVar2;
      if (uVar5 != 0) {
        uVar5 = 2;
      }
      uVar15 = uVar9 >> 10 | uVar8 << 0x16;
      iVar6 = (uVar8 >> 10) + ((uVar13 + 0xfd >> 1) + 0x180) * 0x100000;
      uVar2 = (uint)((byte)(uVar9 >> 9) & 1) << 0x1f | uVar5 >> 1;
      if (uVar2 != 0) {
        bVar1 = (byte)(uVar2 >> 0x1f);
        uVar2 = uVar15 + bVar1;
        if (uVar5 >> 1 == 0) {
          uVar2 = uVar2 & 0xfffffffe;
        }
        return CONCAT44(iVar6 + (uint)CARRY4(uVar15,(uint)bVar1),uVar2);
      }
      return CONCAT44(iVar6,uVar15);
    }
  }
  else if ((~param_2 & 0x7ff00000) == 0) {
    puVar14 = (undefined *)0x4000017;
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      if (-1 < (int)param_2) {
        return CONCAT44(param_2,param_1);
      }
    }
    else if ((param_2 & 0x80000) != 0) goto sub_08054E78;
  }
  else if ((param_2 & 0x80000000) == 0) {
    uVar13 = param_2 >> 0x14;
    param_2 = param_2 & ~(uVar13 << 0x14) | 0x100000;
    goto _08054450;
  }
  puVar3 = (uint *)sub_08047A2C();
  uVar2 = *puVar3;
  *puVar3 = uVar2 | 1;
  puVar14 = &UNK_04000097;
  if ((uVar2 & 0x100) != 0) {
    lVar17 = sub_080491E4(param_1,param_2,param_3,param_4);
    return lVar17;
  }
  param_2 = param_2 & 0x80000000 | 0x7ff80000;
  param_1 = 0;
sub_08054E78:
  uVar2 = (uint)puVar14 & 0xf;
  if (uVar2 == 9) {
    return (ulonglong)param_2 << 0x20;
  }
  if (uVar2 != 8) {
    return CONCAT44(param_2,param_1);
  }
  if (uVar2 == 8) {
    return 0x7ff8000000000000;
  }
  uVar7 = 0x7fffffff;
  uVar4 = 0xffffffff;
  if ((param_2 & 0x80000000) != 0) {
    uVar4 = 0;
    uVar7 = 0x80000000;
  }
  return CONCAT44(uVar7,uVar4);
}


/* sub_08054420 @ 0x08054420 */

/* WARNING: Removing unreachable block (ram,0x080539ac) */
/* WARNING: Removing unreachable block (ram,0x08054854) */
/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x08054f44) */
/* WARNING: Removing unreachable block (ram,0x08054f68) */
/* WARNING: Removing unreachable block (ram,0x08054f70) */
/* WARNING: Removing unreachable block (ram,0x08054f74) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548b4) */
/* WARNING: Removing unreachable block (ram,0x080548ac) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054f4c) */
/* WARNING: Removing unreachable block (ram,0x08054f5c) */
/* WARNING: Removing unreachable block (ram,0x08054f54) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054984) */
/* WARNING: Removing unreachable block (ram,0x08054970) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */
/* WARNING: Removing unreachable block (ram,0x08054f34) */
/* WARNING: Removing unreachable block (ram,0x08054eac) */
/* WARNING: Removing unreachable block (ram,0x08054ef8) */
/* WARNING: Removing unreachable block (ram,0x08054fb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong sub_08054420(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  bool bVar16;
  longlong lVar17;
  
  if ((param_2 & 0x7ff00000) == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    if (-1 < (int)param_2) {
      iVar6 = 1;
      if (param_2 == 0 && param_1 >> 0xc == 0) {
        param_1 = param_1 << 0x14;
        iVar6 = -0x13;
      }
      uVar2 = param_1;
      if (param_2 == 0) {
        param_2 = param_1 >> 0xc;
        uVar2 = param_1 << 0x14;
        iVar6 = iVar6 + -0x14;
      }
      uVar15 = 0;
      if (param_2 >> 5 == 0) {
        param_2 = param_2 << 0x10;
        uVar15 = 0x10;
      }
      if (param_2 >> 0xd == 0) {
        param_2 = param_2 << 8;
        uVar15 = uVar15 + 8;
      }
      if (param_2 >> 0x11 == 0) {
        param_2 = param_2 << 4;
        uVar15 = uVar15 + 4;
      }
      if (param_2 >> 0x13 == 0) {
        param_2 = param_2 << 2;
        uVar15 = uVar15 + 2;
      }
      if (param_2 >> 0x14 == 0) {
        param_2 = param_2 << 1;
        uVar15 = uVar15 + 1;
      }
      uVar13 = iVar6 - uVar15;
      param_1 = uVar2 << (uVar15 & 0xff);
      param_2 = param_2 | uVar2 >> (0x20 - uVar15 & 0xff);
_08054450:
      if ((bool)((byte)(uVar13 + 0xfd) & 1)) {
        iVar6 = (int)param_1 >> 0x1f;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 - iVar6;
      }
      uVar2 = param_1 << 10;
      uVar8 = 0x40000000;
      uVar9 = 0;
      uVar5 = (param_2 << 10 | param_1 >> 0x16) + 0xc0000000;
      uVar15 = 0x10000000;
      do {
        uVar10 = uVar5 - uVar8;
        uVar11 = uVar10;
        if (uVar8 <= uVar5) {
          uVar11 = uVar10 - uVar15;
        }
        if (uVar8 <= uVar5 && uVar15 <= uVar10) {
          uVar8 = uVar8 + uVar15 * 2;
          uVar5 = uVar11;
        }
        iVar6 = (int)uVar2 >> 0x1f;
        uVar2 = uVar2 * 2;
        uVar5 = uVar5 * 2 - iVar6;
        bVar16 = (bool)((byte)uVar15 & 1);
        uVar15 = uVar15 >> 1;
      } while (uVar15 != 0);
      uVar11 = uVar5 - (uVar8 + !bVar16);
      uVar15 = uVar2;
      if (uVar8 < uVar5 || uVar5 - uVar8 < (uint)bVar16) {
        if (uVar11 != 0 || uVar11 < (0x7fffffff < uVar2)) {
          uVar8 = uVar8 + 1;
          uVar15 = uVar2 + 0x80000000;
          uVar5 = uVar11 - (0x7fffffff >= uVar2);
        }
      }
      uVar2 = uVar15 << 1;
      uVar5 = uVar5 * 2 - ((int)uVar15 >> 0x1f);
      uVar15 = 0x40000000;
      do {
        uVar12 = uVar2 - uVar9;
        uVar10 = uVar5 - (uVar8 + (uVar9 > uVar2));
        uVar11 = uVar2;
        if (uVar8 < uVar5 || uVar5 - uVar8 < (uint)(uVar9 <= uVar2)) {
          if (uVar10 != 0 || uVar10 < (uVar15 <= uVar12)) {
            uVar9 = uVar9 + uVar15 * 2;
            uVar11 = uVar12 - uVar15;
            uVar5 = uVar10 - (uVar15 > uVar12);
          }
        }
        uVar2 = uVar11 << 1;
        uVar5 = uVar5 * 2 - ((int)uVar11 >> 0x1f);
        uVar15 = uVar15 >> 1;
      } while (uVar15 != 0x80);
      uVar5 = uVar5 | uVar2;
      if (uVar5 != 0) {
        uVar5 = 2;
      }
      uVar15 = uVar9 >> 10 | uVar8 << 0x16;
      iVar6 = (uVar8 >> 10) + ((uVar13 + 0xfd >> 1) + 0x180) * 0x100000;
      uVar2 = (uint)((byte)(uVar9 >> 9) & 1) << 0x1f | uVar5 >> 1;
      if (uVar2 != 0) {
        bVar1 = (byte)(uVar2 >> 0x1f);
        uVar2 = uVar15 + bVar1;
        if (uVar5 >> 1 == 0) {
          uVar2 = uVar2 & 0xfffffffe;
        }
        return CONCAT44(iVar6 + (uint)CARRY4(uVar15,(uint)bVar1),uVar2);
      }
      return CONCAT44(iVar6,uVar15);
    }
  }
  else if ((~param_2 & 0x7ff00000) == 0) {
    puVar14 = (undefined *)0x4000017;
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      if (-1 < (int)param_2) {
        return CONCAT44(param_2,param_1);
      }
    }
    else if ((param_2 & 0x80000) != 0) goto sub_08054E78;
  }
  else if ((param_2 & 0x80000000) == 0) {
    uVar13 = param_2 >> 0x14;
    param_2 = param_2 & ~(uVar13 << 0x14) | 0x100000;
    goto _08054450;
  }
  puVar3 = (uint *)sub_08047A2C();
  uVar2 = *puVar3;
  *puVar3 = uVar2 | 1;
  puVar14 = &UNK_04000097;
  if ((uVar2 & 0x100) != 0) {
    lVar17 = sub_080491E4(param_1,param_2,param_3,param_4);
    return lVar17;
  }
  param_2 = param_2 & 0x80000000 | 0x7ff80000;
  param_1 = 0;
sub_08054E78:
  uVar2 = (uint)puVar14 & 0xf;
  if (uVar2 == 9) {
    return (ulonglong)param_2 << 0x20;
  }
  if (uVar2 != 8) {
    return CONCAT44(param_2,param_1);
  }
  if (uVar2 == 8) {
    return 0x7ff8000000000000;
  }
  uVar7 = 0x7fffffff;
  uVar4 = 0xffffffff;
  if ((param_2 & 0x80000000) != 0) {
    uVar4 = 0;
    uVar7 = 0x80000000;
  }
  return CONCAT44(uVar7,uVar4);
}


/* sub_08054540 @ 0x08054540 */

undefined8 sub_08054540(uint param_1,int param_2)

{
  uint in_lr;
  
  return CONCAT44(param_2 + (uint)CARRY4(param_1,(uint)(in_lr < 0x400001)),
                  param_1 + (in_lr < 0x400001));
}


/* sub_08054614 @ 0x08054614 */

uint sub_08054614(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  
  puVar2 = (uint *)sub_08047A2C();
  if ((*puVar2 & 0x1000000) != 0) {
    return 0;
  }
  if ((*puVar2 & 0x800) == 0) {
    if ((int)param_2 < 0) {
      in_r12 = in_r12 | 0x10000;
    }
    uVar3 = param_2 & ~((param_2 >> 0x14) << 0x14);
    iVar1 = -(param_2 >> 0x14 & 0xfffff7ff);
    uVar5 = iVar1 + 0x601;
    uVar4 = uVar3 | 0x100000;
    if (uVar5 < 0x36) {
      if (uVar5 == 0x35) {
        uVar5 = 0;
        uVar6 = 0x80000000;
        if (param_1 != 0 || (uVar3 & 0xfffff) != 0) {
          uVar6 = 0x80000001;
        }
      }
      else if (uVar5 < 0x15) {
        uVar6 = param_1 << (0x20 - uVar5 & 0xff);
        uVar5 = uVar4 << (0x20 - uVar5 & 0xff) | param_1 >> (uVar5 & 0xff);
      }
      else {
        uVar3 = iVar1 + 0x5e1;
        if (uVar5 < 0x20 || uVar3 == 0) {
          uVar5 = uVar4 << (-uVar3 & 0xff) | param_1 >> (uVar5 & 0xff);
          uVar6 = param_1 << (-uVar3 & 0xff);
        }
        else {
          uVar5 = uVar4 >> (uVar3 & 0xff);
          uVar6 = uVar4 << (0x20 - uVar3 & 0xff);
          if (param_1 != 0) {
            uVar6 = uVar6 | 1;
          }
        }
      }
    }
    else {
      uVar6 = 1;
      uVar5 = 0;
    }
    if (uVar6 != 0) {
      if (SUB41(uVar6 >> 0x1f,0)) {
        if (((uVar6 & 0x7fffffff) == 0) && (-1 < (int)in_r12 >> 0x1e)) {
          if ((int)in_r12 >> 0x1e == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
        }
        else {
          uVar5 = uVar5 + 1;
        }
      }
      puVar2 = (uint *)sub_08047A2C();
      *puVar2 = *puVar2 | 8;
      return uVar5;
    }
    return uVar5;
  }
  uVar3 = sub_080491E4();
  if ((in_r12 & 0xf) != 9) {
    return uVar3;
  }
  if ((in_r12 & 0x100000) == 0) {
    uVar3 = (in_r12 | 0x20000000) & uVar3 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar2 = (uint *)sub_08047A2C();
    *puVar2 = *puVar2 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08054618 @ 0x08054618 */

uint sub_08054618(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  
  puVar2 = (uint *)sub_08047A2C();
  if ((*puVar2 & 0x1000000) != 0) {
    return 0;
  }
  if ((*puVar2 & 0x800) == 0) {
    if ((int)param_2 < 0) {
      in_r12 = in_r12 | 0x10000;
    }
    uVar3 = param_2 & ~((param_2 >> 0x14) << 0x14);
    iVar1 = -(param_2 >> 0x14 & 0xfffff7ff);
    uVar5 = iVar1 + 0x601;
    uVar4 = uVar3 | 0x100000;
    if (uVar5 < 0x36) {
      if (uVar5 == 0x35) {
        uVar5 = 0;
        uVar6 = 0x80000000;
        if (param_1 != 0 || (uVar3 & 0xfffff) != 0) {
          uVar6 = 0x80000001;
        }
      }
      else if (uVar5 < 0x15) {
        uVar6 = param_1 << (0x20 - uVar5 & 0xff);
        uVar5 = uVar4 << (0x20 - uVar5 & 0xff) | param_1 >> (uVar5 & 0xff);
      }
      else {
        uVar3 = iVar1 + 0x5e1;
        if (uVar5 < 0x20 || uVar3 == 0) {
          uVar5 = uVar4 << (-uVar3 & 0xff) | param_1 >> (uVar5 & 0xff);
          uVar6 = param_1 << (-uVar3 & 0xff);
        }
        else {
          uVar5 = uVar4 >> (uVar3 & 0xff);
          uVar6 = uVar4 << (0x20 - uVar3 & 0xff);
          if (param_1 != 0) {
            uVar6 = uVar6 | 1;
          }
        }
      }
    }
    else {
      uVar6 = 1;
      uVar5 = 0;
    }
    if (uVar6 != 0) {
      if (SUB41(uVar6 >> 0x1f,0)) {
        if (((uVar6 & 0x7fffffff) == 0) && (-1 < (int)in_r12 >> 0x1e)) {
          if ((int)in_r12 >> 0x1e == 0) {
            uVar5 = uVar5 + 1 & 0xfffffffe;
          }
        }
        else {
          uVar5 = uVar5 + 1;
        }
      }
      puVar2 = (uint *)sub_08047A2C();
      *puVar2 = *puVar2 | 8;
      return uVar5;
    }
    return uVar5;
  }
  uVar3 = sub_080491E4();
  if ((in_r12 & 0xf) != 9) {
    return uVar3;
  }
  if ((in_r12 & 0x100000) != 0) {
    if ((in_r12 & 0xf0000) == 0) {
      uVar4 = uVar3 << 0x1d;
      if ((bool)((byte)(uVar3 >> 3) & 1)) {
        uVar4 = uVar4 | 0x30000000;
      }
      puVar2 = (uint *)sub_08047A2C();
      *puVar2 = *puVar2 & 0xfffffff | uVar4;
      return uVar3;
    }
    if ((uVar3 & 8) != 0) {
      return uVar3;
    }
    return 2 - uVar3;
  }
  uVar3 = (in_r12 | 0x20000000) & uVar3 << 0x10;
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_0805477C @ 0x0805477C */

uint sub_0805477C(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint in_r12;
  undefined4 in_lr;
  uint uVar4;
  
  puVar2 = (uint *)sub_08047A2C();
  if ((*puVar2 & 0x1000000) != 0) {
    return 0;
  }
  if ((*puVar2 & 0x800) == 0) {
    return param_1;
  }
  uVar4 = param_2 >> 0x1f | 0x6000000;
  param_2 = param_2 & 0x7fffffff;
  if (param_2 == 0 && param_1 >> 0xc == 0) {
    param_1 = param_1 << 0x14;
    uVar4 = uVar4 - 0x140000;
  }
  if (param_2 == 0) {
    param_2 = param_1 >> 0xc;
    param_1 = param_1 << 0x14;
    uVar4 = uVar4 - 0x140000;
  }
  uVar3 = 0;
  if (param_2 >> 5 == 0) {
    param_2 = param_2 << 0x10;
    uVar3 = 0x10;
  }
  if (param_2 >> 0xd == 0) {
    param_2 = param_2 << 8;
    uVar3 = uVar3 + 8;
  }
  if (param_2 >> 0x11 == 0) {
    param_2 = param_2 << 4;
    uVar3 = uVar3 + 4;
  }
  if (param_2 >> 0x13 == 0) {
    param_2 = param_2 << 2;
    uVar3 = uVar3 + 2;
  }
  if (param_2 >> 0x14 == 0) {
    param_2 = param_2 << 1;
    uVar3 = uVar3 + 1;
  }
  iVar1 = param_1 << (uVar3 & 0xff);
  in_r12 = in_r12 | 0x20000000;
  uVar4 = sub_080491E4(iVar1,((param_2 | param_1 >> (0x20 - uVar3 & 0xff)) ^ uVar4 * -0x80000000) +
                             (uVar4 + uVar3 * -0x10000 & 0xfffffffe) * 0x10,0x20 - uVar3,iVar1,
                       in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar4;
  }
  if ((in_r12 & 0x100000) == 0) {
    in_r12 = in_r12 & uVar4 << 0x10;
    if (in_r12 != 0) {
      in_r12 = 1;
    }
    return in_r12;
  }
  if ((in_r12 & 0xf0000) != 0) {
    if ((uVar4 & 8) == 0) {
      return 2 - uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar4 << 0x1d;
  if ((bool)((byte)(uVar4 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar2 = (uint *)sub_08047A2C();
  *puVar2 = *puVar2 & 0xfffffff | uVar3;
  return uVar4;
}


/* sub_08054780 @ 0x08054780 */

uint sub_08054780(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint in_r12;
  undefined4 in_lr;
  uint uVar4;
  
  puVar2 = (uint *)sub_08047A2C();
  if ((*puVar2 & 0x1000000) != 0) {
    return 0;
  }
  if ((*puVar2 & 0x800) == 0) {
    return param_1;
  }
  uVar4 = param_2 >> 0x1f | 0x6000000;
  param_2 = param_2 & 0x7fffffff;
  if (param_2 == 0 && param_1 >> 0xc == 0) {
    param_1 = param_1 << 0x14;
    uVar4 = uVar4 - 0x140000;
  }
  if (param_2 == 0) {
    param_2 = param_1 >> 0xc;
    param_1 = param_1 << 0x14;
    uVar4 = uVar4 - 0x140000;
  }
  uVar3 = 0;
  if (param_2 >> 5 == 0) {
    param_2 = param_2 << 0x10;
    uVar3 = 0x10;
  }
  if (param_2 >> 0xd == 0) {
    param_2 = param_2 << 8;
    uVar3 = uVar3 + 8;
  }
  if (param_2 >> 0x11 == 0) {
    param_2 = param_2 << 4;
    uVar3 = uVar3 + 4;
  }
  if (param_2 >> 0x13 == 0) {
    param_2 = param_2 << 2;
    uVar3 = uVar3 + 2;
  }
  if (param_2 >> 0x14 == 0) {
    param_2 = param_2 << 1;
    uVar3 = uVar3 + 1;
  }
  iVar1 = param_1 << (uVar3 & 0xff);
  in_r12 = in_r12 | 0x20000000;
  uVar4 = sub_080491E4(iVar1,((param_2 | param_1 >> (0x20 - uVar3 & 0xff)) ^ uVar4 * -0x80000000) +
                             (uVar4 + uVar3 * -0x10000 & 0xfffffffe) * 0x10,0x20 - uVar3,iVar1,
                       in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar4;
  }
  if ((in_r12 & 0x100000) == 0) {
    in_r12 = in_r12 & uVar4 << 0x10;
    if (in_r12 != 0) {
      in_r12 = 1;
    }
    return in_r12;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar3 = uVar4 << 0x1d;
    if ((bool)((byte)(uVar4 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar2 = (uint *)sub_08047A2C();
    *puVar2 = *puVar2 & 0xfffffff | uVar3;
    return uVar4;
  }
  if ((uVar4 & 8) != 0) {
    return uVar4;
  }
  return 2 - uVar4;
}


/* sub_0805484C @ 0x0805484C */

uint sub_0805484C(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  uint uVar5;
  undefined4 in_lr;
  bool bVar6;
  
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar5 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar6 = (in_r12 & 0xf) != 8;
  if (bVar6) {
    uVar3 = in_r12 & 0x70;
    uVar5 = uVar5 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
  }
  if (!bVar6 && (uVar3 & ~uVar5) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  if ((uVar5 & 0x20000000) == 0) {
    if ((uVar5 & 0x10000000) == 0) {
      if ((uVar5 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((uVar5 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((uVar5 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((uVar5 & 0x10) == 0) {
            uVar3 = uVar2 | 0x7fc00000;
          }
          else {
            uVar3 = 0;
            param_2 = uVar2;
          }
          uVar4 = uVar5 & 0xf;
          if (uVar4 != 9) {
            if (uVar4 != 8) {
              return uVar3;
            }
            if (uVar4 == 8 && (uVar5 & 0x40) == 0) {
              if ((uVar5 & 0x10) == 0) {
                uVar2 = 0x7fc00000;
              }
              else {
                uVar2 = 0;
              }
              return uVar2;
            }
            if ((uVar5 & 0x10000) != 0) {
              return 0;
            }
            if ((uVar5 & 0x20) != 0) {
              uVar5 = 0xffffffff;
              if (uVar2 != 0) {
                uVar5 = 0;
              }
              return uVar5;
            }
            if ((uVar5 & 0x10) == 0) {
              uVar2 = 0x7fffffff;
              param_2 = uVar3;
            }
            else {
              uVar2 = 0xffffffff;
            }
            if ((param_2 & 0x80000000) != 0) {
              uVar2 = ~uVar2;
            }
            return uVar2;
          }
          uVar2 = 8;
          goto sub_08054F3C;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((uVar5 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((uVar5 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((uVar5 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08054900:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,uVar5,in_lr,uVar5,in_lr);
  if ((uVar5 & 0xf) != 9) {
    return uVar2;
  }
sub_08054F3C:
  if ((uVar5 & 0x100000) == 0) {
    uVar5 = uVar5 & uVar2 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((uVar5 & 0xf0000) == 0) {
    uVar5 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar5 = uVar5 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar5;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08054850 @ 0x08054850 */

uint sub_08054850(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  uint uVar5;
  undefined4 in_lr;
  bool bVar6;
  
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar5 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar6 = (in_r12 & 0xf) != 8;
  if (bVar6) {
    uVar3 = in_r12 & 0x70;
    uVar5 = uVar5 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
  }
  if (!bVar6 && (uVar3 & ~uVar5) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  if ((uVar5 & 0x20000000) == 0) {
    if ((uVar5 & 0x10000000) == 0) {
      if ((uVar5 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((uVar5 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((uVar5 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((uVar5 & 0x10) == 0) {
            uVar3 = uVar2 | 0x7fc00000;
          }
          else {
            uVar3 = 0;
            param_2 = uVar2;
          }
          uVar4 = uVar5 & 0xf;
          if (uVar4 != 9) {
            if (uVar4 != 8) {
              return uVar3;
            }
            if (uVar4 == 8 && (uVar5 & 0x40) == 0) {
              if ((uVar5 & 0x10) == 0) {
                uVar2 = 0x7fc00000;
              }
              else {
                uVar2 = 0;
              }
              return uVar2;
            }
            if ((uVar5 & 0x10000) != 0) {
              return 0;
            }
            if ((uVar5 & 0x20) != 0) {
              uVar5 = 0xffffffff;
              if (uVar2 != 0) {
                uVar5 = 0;
              }
              return uVar5;
            }
            if ((uVar5 & 0x10) == 0) {
              uVar2 = 0x7fffffff;
              param_2 = uVar3;
            }
            else {
              uVar2 = 0xffffffff;
            }
            if ((param_2 & 0x80000000) != 0) {
              uVar2 = ~uVar2;
            }
            return uVar2;
          }
          uVar2 = 8;
          goto sub_08054F3C;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((uVar5 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((uVar5 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((uVar5 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08054900:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,uVar5,in_lr,uVar5,in_lr);
  if ((uVar5 & 0xf) != 9) {
    return uVar2;
  }
sub_08054F3C:
  if ((uVar5 & 0x100000) == 0) {
    uVar5 = uVar5 & uVar2 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((uVar5 & 0xf0000) == 0) {
    uVar5 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar5 = uVar5 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar5;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_080549B4 @ 0x080549B4 */

/* WARNING: Removing unreachable block (ram,0x08054854) */
/* WARNING: Removing unreachable block (ram,0x08054a60) */
/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548a4) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x0805496c) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */

uint sub_080549B4(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 in_lr;
  bool bVar5;
  int iVar6;
  
  if ((param_1 + 0x800000 & 0x7f000000) != 0) {
    if (-1 < (int)param_1 >> 3) {
      return param_1 << 0x1d;
    }
    return param_1 << 0x1d;
  }
  if ((param_1 + 0x800000 & 0x800000) != 0) {
    if ((param_1 & 0x7fffffff) == 0) {
      return 0;
    }
    uVar2 = param_1 << 3;
    uVar3 = uVar2 >> 0x10;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar2 = param_1 << 0x13;
      bVar5 = uVar2 == 0;
    }
    if (bVar5) {
      return uVar3;
    }
    if ((uVar2 & 0xff000000) == 0) {
      uVar2 = uVar2 << 8;
    }
    if ((uVar2 & 0xf0000000) == 0) {
      uVar2 = uVar2 << 4;
    }
    uVar3 = uVar2 & 0xc0000000;
    if (uVar3 == 0) {
      uVar2 = uVar2 << 2;
      uVar3 = uVar2;
    }
    if (-1 < (int)uVar3) {
      uVar2 = uVar2 << 1;
    }
    return uVar2 << 0x15;
  }
  iVar6 = param_1 << 9;
  puVar4 = &REG_BG2HOFS;
  if (iVar6 == 0) {
    return 0;
  }
  if ((param_1 & 0x400000) == 0) {
    puVar1 = (uint *)sub_08047A2C();
    uVar2 = *puVar1;
    puVar4 = (undefined2 *)(uVar2 & 0x1c00000 | 0x4000018);
    *puVar1 = uVar2 | 1;
    if ((~(uint)puVar4 & 0x20000) == 0) {
      puVar4 = (undefined2 *)(uVar2 & 0x1c00000 | 0x4c00018);
    }
    if ((uVar2 & 0x100) != 0) {
      uVar2 = sub_080491E4(param_1,param_2,iVar6,param_4,puVar4,in_lr,puVar4,in_lr);
      if (((uint)puVar4 & 0xf) != 9) {
        return uVar2;
      }
      goto sub_08054F3C;
    }
    uVar2 = param_1 & 0x80000000;
    if (((uint)puVar4 & 0x10) == 0) {
      param_1 = uVar2 | 0x7fc00000;
    }
    else {
      param_1 = 0;
      param_2 = uVar2;
    }
  }
  uVar2 = (uint)puVar4 & 0xf;
  if (uVar2 != 9) {
    if (uVar2 != 8) {
      return param_1;
    }
    if (uVar2 == 8) {
      if (((uint)puVar4 & 0x10) == 0) {
        uVar2 = 0x7fc00000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    if (((uint)puVar4 & 0x10) == 0) {
      uVar2 = 0x7fffffff;
      param_2 = param_1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    if ((param_2 & 0x80000000) != 0) {
      uVar2 = ~uVar2;
    }
    return uVar2;
  }
  uVar2 = 8;
sub_08054F3C:
  if (((uint)puVar4 & 0x100000) == 0) {
    uVar2 = (uint)puVar4 & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if (((uint)puVar4 & 0xf0000) != 0) {
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  uVar3 = uVar2 << 0x1d;
  if ((bool)((byte)(uVar2 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar1 = (uint *)sub_08047A2C();
  *puVar1 = *puVar1 & 0xfffffff | uVar3;
  return uVar2;
}


/* sub_080549B8 @ 0x080549B8 */

/* WARNING: Removing unreachable block (ram,0x08054854) */
/* WARNING: Removing unreachable block (ram,0x08054a60) */
/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548a4) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x0805496c) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */

uint sub_080549B8(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 in_lr;
  bool bVar5;
  int iVar6;
  
  if ((param_1 + 0x800000 & 0x7f000000) != 0) {
    if (-1 < (int)param_1 >> 3) {
      return param_1 << 0x1d;
    }
    return param_1 << 0x1d;
  }
  if ((param_1 + 0x800000 & 0x800000) != 0) {
    if ((param_1 & 0x7fffffff) == 0) {
      return 0;
    }
    uVar2 = param_1 << 3;
    uVar3 = uVar2 >> 0x10;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar2 = param_1 << 0x13;
      bVar5 = uVar2 == 0;
    }
    if (bVar5) {
      return uVar3;
    }
    if ((uVar2 & 0xff000000) == 0) {
      uVar2 = uVar2 << 8;
    }
    if ((uVar2 & 0xf0000000) == 0) {
      uVar2 = uVar2 << 4;
    }
    uVar3 = uVar2 & 0xc0000000;
    if (uVar3 == 0) {
      uVar2 = uVar2 << 2;
      uVar3 = uVar2;
    }
    if (-1 < (int)uVar3) {
      uVar2 = uVar2 << 1;
    }
    return uVar2 << 0x15;
  }
  iVar6 = param_1 << 9;
  puVar4 = &REG_BG2HOFS;
  if (iVar6 == 0) {
    return 0;
  }
  if ((param_1 & 0x400000) == 0) {
    puVar1 = (uint *)sub_08047A2C();
    uVar2 = *puVar1;
    puVar4 = (undefined2 *)(uVar2 & 0x1c00000 | 0x4000018);
    *puVar1 = uVar2 | 1;
    if ((~(uint)puVar4 & 0x20000) == 0) {
      puVar4 = (undefined2 *)(uVar2 & 0x1c00000 | 0x4c00018);
    }
    if ((uVar2 & 0x100) != 0) {
      uVar2 = sub_080491E4(param_1,param_2,iVar6,param_4,puVar4,in_lr,puVar4,in_lr);
      if (((uint)puVar4 & 0xf) != 9) {
        return uVar2;
      }
      goto sub_08054F3C;
    }
    uVar2 = param_1 & 0x80000000;
    if (((uint)puVar4 & 0x10) == 0) {
      param_1 = uVar2 | 0x7fc00000;
    }
    else {
      param_1 = 0;
      param_2 = uVar2;
    }
  }
  uVar2 = (uint)puVar4 & 0xf;
  if (uVar2 != 9) {
    if (uVar2 != 8) {
      return param_1;
    }
    if (uVar2 == 8) {
      if (((uint)puVar4 & 0x10) == 0) {
        uVar2 = 0x7fc00000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    if (((uint)puVar4 & 0x10) == 0) {
      uVar2 = 0x7fffffff;
      param_2 = param_1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    if ((param_2 & 0x80000000) != 0) {
      uVar2 = ~uVar2;
    }
    return uVar2;
  }
  uVar2 = 8;
sub_08054F3C:
  if (((uint)puVar4 & 0x100000) == 0) {
    uVar2 = (uint)puVar4 & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if (((uint)puVar4 & 0xf0000) != 0) {
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  uVar3 = uVar2 << 0x1d;
  if ((bool)((byte)(uVar2 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar1 = (uint *)sub_08047A2C();
  *puVar1 = *puVar1 & 0xfffffff | uVar3;
  return uVar2;
}


