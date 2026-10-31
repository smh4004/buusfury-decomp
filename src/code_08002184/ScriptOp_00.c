/* ScriptOp_00  (original: 0x08003C74-0x08003C8A in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void ScriptOp_00(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_2;
  *param_2 = pbVar3 + 1;
  iVar2 = *param_1;
  bVar1 = *pbVar3;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (uint)bVar1;
  return;
}

