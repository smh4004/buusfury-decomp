/* sub_0803D850  (original: 0x0803D850-0x0803D876 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined4 volatile DAT_0300348c;
extern undefined4 volatile _03000F90;


void sub_0803D850(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _03000F90;
  _03000F90 = &DAT_0300348c;
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 8);
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
  _03000F90 = param_1;
  return;
}

