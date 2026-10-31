/* sub_0800A6EE  (original: 0x0800A6EE-0x0800A75A in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int __call_via_r2();


int sub_0800A6EE(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x48)) ||
       (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x4c))) ||
      (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x40))) ||
     (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x44))) {
    iVar1 = 0;
  }
  else {
    __call_via_r3(param_2,param_1 + 0x28,1,*(int *)(*param_2 + 0x4c) + *param_2,param_4);
    iVar1 = __call_via_r2(param_2,param_1 + 0x38,*(int *)(*param_2 + 0x50) + *param_2);
    iVar2 = param_1 + 0x38;
    if (iVar1 == 0) {
      iVar2 = param_1 + 0x28;
    }
    __call_via_r3(param_2,iVar2,0,*(int *)(*param_2 + 0x4c) + *param_2,param_4);
  }
  return iVar1;
}

