/* sub_0800927E  (original: 0x0800927E-0x0800929C in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800927E(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  *(undefined4 *)(param_1 + param_2 * 4) = param_3;
  return;
}

