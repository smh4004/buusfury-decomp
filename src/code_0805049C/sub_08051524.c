/* sub_08051524  (original: 0x08051524-0x08051550 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803D63C();
extern undefined volatile _08049ACC;


void sub_08051524(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_08049ACC;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

