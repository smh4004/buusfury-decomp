/* sub_08016428  (original: 0x08016428-0x080164A0 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


undefined4 sub_08016428(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x2000;
  uVar2 = (uint)(*(int *)(param_1 + 0x28) << 0x17) >> 7 | 0x2000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | *(uint *)(param_1 + 0x2c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(*(int *)(param_1 + 0x10) + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  iVar4 = (int)(((uint)(*(int *)(param_1 + 0x18) >> 0x1f) >> 0x1d) + *(int *)(param_1 + 0x18)) >> 3;
  if (*(int *)(param_1 + 0x20) != iVar4) {
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(param_1 + 0x24) + iVar4 * 0x40,0x40);
    *(int *)(param_1 + 0x20) = iVar4;
  }
  return 0;
}

