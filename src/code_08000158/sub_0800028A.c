/* sub_0800028A  (original: 0x0800028A-0x0800029E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_03001030;


void sub_0800028A(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001030 + 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

