/* sub_080105FA  (original: 0x080105FA-0x08010634 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int __call_via_r2();


undefined4 sub_080105FA(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,param_3,*(int *)(*param_2 + 0x5c) + *param_2);
  if (iVar1 != 0) {
    return 1;
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    return 0;
  }
  __call_via_r3(param_1,param_2,param_3,*(int *)(*param_1 + 0xc) + *param_1);
  return 0;
}

