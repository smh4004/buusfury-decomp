/* sub_0802BFEC  (original: 0x0802BFEC-0x0802C040 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_0802BFEC(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      *puVar1 = 0x80002000;
      uVar3 = (uint)((*(int *)(param_1 + 0x14) + iVar2) * 0x800000) >> 7 | 0x80002000;
      *puVar1 = uVar3;
      *puVar1 = uVar3 | *(uint *)(param_1 + 0x18) & 0xff;
      puVar1[1] = (uint)*(ushort *)(param_1 + 0xc) + iVar2 & 0x3ff | puVar1[1] & 0xfffff000;
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  *param_2 = puVar1;
  return 0;
}

