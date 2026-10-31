/* sub_0803D876  (original: 0x0803D876-0x0803D8A0 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined4 volatile DAT_03003494;
extern undefined4 volatile DAT_03003490;
extern undefined4 volatile _03000F90;
extern undefined4 volatile DAT_0300348c;


void sub_0803D876(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _03000F90;
  _03000F90 = &DAT_0300348c;
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 8);
  DAT_03003494 = param_1;
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  __call_via_r1(&DAT_03003490,*(int *)(DAT_03003490 + 4) + DAT_03003490);
  _03000F90 = &DAT_03003490;
  return;
}

