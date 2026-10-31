/* sub_080187F0  (original: 0x080187F0-0x08018820 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_080187F0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,7,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,7,*(int *)(*param_2 + 0x28) + *param_2);
    param_2[0x72] = 1;
  }
  return 1;
}

