/* sub_0803A898  (original: 0x0803A898-0x0803A8AC in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0803A898(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  iVar1 = *(int *)(*param_1 + 8);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}

