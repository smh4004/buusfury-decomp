/* sub_08050D30  (original: 0x08050D30-0x08050D5C in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 61% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803D63C();
extern undefined volatile _08049ACC;


void sub_08050D30(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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

