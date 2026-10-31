/* sub_08015ABC  (original: 0x08015ABC-0x08015AEE in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_08015ABC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 4);
  iVar2 = *(int *)(*piVar1 + 0x3c);
  __call_via_r1(piVar1,iVar2 + *piVar1,iVar2,param_4,param_4);
  piVar1[0x68] = *(int *)(param_1 + 8) << 8;
  piVar1[0x69] = *(int *)(param_1 + 0xc) << 8;
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x40) + *piVar1);
  return;
}

