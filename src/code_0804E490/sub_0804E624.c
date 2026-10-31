/* sub_0804E624  (original: 0x0804E624-0x0804E63C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0804E624(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = 0;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2,param_1,param_4);
  return;
}

