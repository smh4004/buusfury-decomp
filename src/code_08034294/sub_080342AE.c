/* sub_080342AE  (original: 0x080342AE-0x08034306 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


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

