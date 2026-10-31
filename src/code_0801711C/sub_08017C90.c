/* sub_08017C90  (original: 0x08017C90-0x08017CE2 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 86% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800EC34();
extern int sub_0803D63C();
extern int __call_via_r1();
extern int sub_08004102();
extern int __call_via_r2();
extern undefined volatile _0804C92C;


void sub_08017C90(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_0804C92C;
  sub_08004102(param_1 + 0x70);
  piVar1 = (int *)param_1[0x6c];
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,*(int *)(*piVar1 + 4) + *piVar1);
  }
  piVar1 = (int *)param_1[99];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  sub_0800EC34(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

