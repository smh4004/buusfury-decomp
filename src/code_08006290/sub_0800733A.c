/* sub_0800733A  (original: 0x0800733A-0x08007368 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08004102();
extern int sub_0803D63C();
extern undefined volatile _08049784;
extern undefined volatile _0804E444;


void sub_0800733A(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08049784;
  sub_08004102(param_1 + 5);
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],*piVar1 + (int)piVar1);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

