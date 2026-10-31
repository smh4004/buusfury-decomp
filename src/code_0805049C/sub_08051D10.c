/* sub_08051D10  (original: 0x08051D10-0x08051D40 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800EC34();
extern int sub_0803D63C();


void sub_08051D10(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18c);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  sub_0800EC34(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

