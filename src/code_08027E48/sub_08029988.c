/* sub_08029988  (original: 0x08029988-0x080299A2 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08029988(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 0x22c);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 0xc);
    __call_via_r2(piVar1,param_2,iVar2 + *piVar1,iVar2,param_4);
  }
  return;
}

