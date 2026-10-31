/* sub_08052EB0  (original: 0x08052EB0-0x08052EC8 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined volatile _0804E444;


void sub_08052EB0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804E444;
  piVar1 = *(int **)param_1[3];
  iVar2 = *piVar1;
  __call_via_r1((int *)param_1[3],iVar2 + (int)piVar1,iVar2,param_4,param_4);
  return;
}

