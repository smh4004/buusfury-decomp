/* sub_080510A0  (original: 0x080510A0-0x080510C8 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0803D63C();
extern undefined volatile _0804E444;


void sub_080510A0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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

