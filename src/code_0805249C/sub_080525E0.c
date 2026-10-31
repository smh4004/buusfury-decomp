/* sub_080525E0  (original: 0x080525E0-0x08052624 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 83% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_0800EC34();
extern int sub_0803D63C();


void sub_080525E0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1b0);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 4);
    __call_via_r1(piVar1,iVar2 + *piVar1,iVar2,param_4,param_4);
  }
  piVar1 = *(int **)(param_1 + 0x18c);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  sub_0800EC34(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

