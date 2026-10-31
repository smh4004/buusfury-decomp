/* Ghidra reference decompilation of code_08049F98 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08049F98 @ 0x08049F98 */

undefined4 sub_08049F98(int param_1)

{
  if (*(int *)(param_1 + 0x30) <= *(int *)(param_1 + 0x28)) {
    return 0;
  }
  return 1;
}


/* sub_08049FAC @ 0x08049FAC */

void sub_08049FAC(undefined4 param_1,int param_2)

{
  sub_0800B354(param_1,param_2 + -0xc);
  return;
}


/* sub_0804A46C @ 0x0804A46C */

void sub_0804A46C(int param_1)

{
  bool in_ZR;
  
  if (in_ZR) {
    param_1 = 0;
  }
  sub_080065C0(param_1 + -0x114);
  return;
}


/* sub_0804A490 @ 0x0804A490 */

void sub_0804A490(int param_1)

{
  sub_080065E4(param_1 + -0x114);
  return;
}


/* sub_0804A4A4 @ 0x0804A4A4 */

void sub_0804A4A4(int param_1)

{
  sub_0800660E(param_1 + -0x114);
  return;
}


/* sub_0804AC0C @ 0x0804AC0C */

void sub_0804AC0C(undefined4 param_1,int param_2)

{
  sub_08030FB8(param_1,param_2 + -0xc);
  return;
}


/* sub_0804B8C4 @ 0x0804B8C4 */

/* WARNING: Control flow encountered bad instruction data */

void sub_0804B8C4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* sub_0804B8D8 @ 0x0804B8D8 */

void sub_0804B8D8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int unaff_r4;
  bool in_ZR;
  
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & unaff_r4 >> 0x20);
  }
  *param_1 = &_0804984C;
  param_1[-2] = &_08049ACC;
  piVar1 = (int *)param_1[-1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1 + -2);
  }
  return;
}


/* sub_0804B8F0 @ 0x0804B8F0 */

int sub_0804B8F0(int param_1)

{
  return param_1 + -8;
}


/* sub_0804B904 @ 0x0804B904 */

void sub_0804B904(int param_1)

{
  sub_080211FA(param_1 + -8);
  return;
}


