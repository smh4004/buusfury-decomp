/* sub_08003C8A  (original: 0x08003C8A-0x08003CBE in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08003C8A(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  do {
    uVar3 = (uint)*(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    uVar4 = uVar3 & 0x7f;
    iVar2 = iVar2 * 0x80 + uVar4;
  } while ((int)(uVar3 << 0x18) < 0);
  iVar2 = iVar2 >> 1;
  if ((int)(uVar4 << 0x1f) < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

