/* sub_08015FFC  (original: 0x08015FFC-0x0801602C in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern undefined volatile gUnknown_0806E050;


void sub_08015FFC(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x4c);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  piVar1[iVar3 * 3 + 1] = param_2;
  piVar1[iVar3 * 3 + 2] = param_3;
  iVar2 = sub_0803FFE8(&gUnknown_0806E050);
  piVar1[iVar3 * 3 + 3] = iVar2;
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}

