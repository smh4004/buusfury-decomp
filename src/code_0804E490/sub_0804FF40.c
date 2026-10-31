/* sub_0804FF40  (original: 0x0804FF40-0x0804FF58 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_0804FF40(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  if (iVar1 != 0) {
    __call_via_r2(param_1,param_2,*(int *)*param_1 + *param_1);
  }
  return 0;
}

