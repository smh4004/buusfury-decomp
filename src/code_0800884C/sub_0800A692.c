/* sub_0800A692  (original: 0x0800A692-0x0800A6B8 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int __call_via_r2();


void sub_0800A692(int param_1,int *param_2)

{
  __call_via_r3(param_2,param_1 + 0x38,1,*(int *)(*param_2 + 0x4c) + *param_2);
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  return;
}

