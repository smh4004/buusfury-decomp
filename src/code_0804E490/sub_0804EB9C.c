/* sub_0804EB9C  (original: 0x0804EB9C-0x0804EBAC in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0804EB9C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  iVar2 = *piVar1;
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + (int)piVar1,iVar2,param_4);
  return;
}

