/* sub_08050EC8  (original: 0x08050EC8-0x08050EF0 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0803D63C();
extern undefined volatile _0804E444;


void sub_08050EC8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

