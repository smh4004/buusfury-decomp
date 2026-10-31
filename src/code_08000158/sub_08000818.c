/* sub_08000818  (original: 0x08000818-0x08000840 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern undefined volatile gUnknown_083192A8;


void sub_08000818(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0803E378(iVar2 + 0x5c4,&gUnknown_083192A8 + param_1[iVar1] * 0xc,0x40,0);
  return;
}

