/* sub_0800A9FE  (original: 0x0800A9FE-0x0800AA4A in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800A9D0();
extern int sub_0803D63C();
extern int __call_via_r2();


void sub_0800A9FE(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  sub_0800A9D0();
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    do {
      piVar1 = (int *)param_1[iVar3 * 2 + 2];
      iVar2 = *piVar1;
      __call_via_r2(piVar1,*param_1,*(int *)(iVar2 + 8) + iVar2);
      piVar1 = (int *)param_1[iVar3 * 2 + 2];
      iVar2 = *piVar1;
      __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[1]);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

