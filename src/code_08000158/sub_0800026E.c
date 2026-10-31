/* sub_0800026E  (original: 0x0800026E-0x08000282 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int * volatile DAT_03001030;


void sub_0800026E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_03001030;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

