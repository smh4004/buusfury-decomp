/* sub_08052FB4  (original: 0x08052FB4-0x08052FD4 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08052FB4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  param_1[1] = param_2[1] + param_3[1];
  *param_1 = iVar1 + iVar2;
  return;
}

