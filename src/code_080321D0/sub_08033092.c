/* sub_08033092  (original: 0x08033092-0x080330AA in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08033092(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (0x5a < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}

