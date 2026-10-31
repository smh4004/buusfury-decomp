/* sub_08000874  (original: 0x08000874-0x08000898 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E302();
extern undefined volatile gUnknown_083192A8;


void sub_08000874(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0803E302(iVar2 + 0x5c4,&gUnknown_083192A8 + param_1[iVar1] * 0xc,iVar2,param_1[iVar1] * 2,
               param_4);
  return;
}

