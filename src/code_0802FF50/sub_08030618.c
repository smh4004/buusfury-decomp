/* sub_08030618  (original: 0x08030618-0x08030630 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08030618(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  iVar1 = *(int *)(*param_1 + 8);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}

