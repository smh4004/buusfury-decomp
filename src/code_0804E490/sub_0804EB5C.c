/* sub_0804EB5C  (original: 0x0804EB5C-0x0804EB78 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0804EB5C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2,0,param_4);
  return;
}

