/* sub_0804F4E8  (original: 0x0804F4E8-0x0804F4FC in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0804F4E8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)(*param_1 + 0x10) + *param_1,param_4,param_4);
  }
  return;
}

