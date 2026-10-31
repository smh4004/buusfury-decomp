/* sub_0804F944  (original: 0x0804F944-0x0804F964 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0804F944(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1a4);
  *param_1 = *(int *)(param_2 + 0x1a0) >> 8;
  param_1[1] = iVar1 >> 8;
  return;
}

