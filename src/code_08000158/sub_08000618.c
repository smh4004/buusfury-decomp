/* sub_08000618  (original: 0x08000618-0x0800062C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001068;


void sub_08000618(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03001068;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}

