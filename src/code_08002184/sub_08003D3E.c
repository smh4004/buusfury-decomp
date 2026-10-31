/* sub_08003D3E  (original: 0x08003D3E-0x08003D52 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08003D3E(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  *param_1 = *param_1 + param_1[1];
  return;
}

