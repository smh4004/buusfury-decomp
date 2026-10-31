/* sub_0800CF7A  (original: 0x0800CF7A-0x0800CFE0 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;


undefined4 sub_0800CF7A(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x20) + 0x10);
  *puVar1 = uVar2;
  uVar3 = (uint)((*(int *)(param_1 + 0x24) - DAT_030019cc) * 0x800000) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = *(int *)(param_1 + 0x28) - DAT_030019d0 & 0xffU | uVar2 & 0xfe00ff00 | uVar3;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = *(ushort *)(param_1 + 0x16) & 0x3ff | uVar2 | uVar3 & 0xfffff000;
  return 0;
}

