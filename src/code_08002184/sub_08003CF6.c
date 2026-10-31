/* sub_08003CF6  (original: 0x08003CF6-0x08003D16 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08003CF6(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *param_1 = iVar1;
  return;
}

