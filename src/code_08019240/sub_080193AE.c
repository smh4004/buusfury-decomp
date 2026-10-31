/* sub_080193AE  (original: 0x080193AE-0x08019444 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 49% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_08019444();
extern undefined4 volatile DAT_03002bac;


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

