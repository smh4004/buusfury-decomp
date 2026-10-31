/* sub_0800AB0C  (original: 0x0800AB0C-0x0800AB2E in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800A9D0();
extern int __call_via_r2();


void sub_0800AB0C(undefined4 *param_1)

{
  int iVar1;
  
  sub_0800A9D0();
  iVar1 = *(int *)param_1[param_1[1] * 2];
  __call_via_r2((int *)param_1[param_1[1] * 2],*param_1,*(int *)(iVar1 + 4) + iVar1);
  return;
}

