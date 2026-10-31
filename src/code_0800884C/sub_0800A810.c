/* sub_0800A810  (original: 0x0800A810-0x0800A82C in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800A4A4();


void sub_0800A810(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  sub_0800A4A4(0,param_1);
  return;
}

