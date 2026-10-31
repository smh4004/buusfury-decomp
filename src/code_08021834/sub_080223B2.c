/* sub_080223B2  (original: 0x080223B2-0x08022470 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c0;


undefined4 sub_080223B2(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x30) - DAT_030019c0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x2c) - DAT_030019bc;
  *(int *)(param_1 + 0x24) = iVar1;
  pcVar5 = *(char **)(param_1 + 0x28);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)*pcVar5;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - (int)pcVar5[1];
  puVar2 = (uint *)*param_2;
  uVar6 = *(uint *)(pcVar5 + 4);
  *puVar2 = uVar6;
  uVar4 = (uint)(*(int *)(param_1 + 0x20) << 0x17) >> 7;
  *puVar2 = uVar4 | uVar6 & 0xfe00ffff;
  *puVar2 = uVar4 | uVar6 & 0xfe00ff00 | *(uint *)(param_1 + 0x24) & 0xff;
  puVar2[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x28) + 4);
  puVar3 = puVar2 + 2;
  *puVar3 = uVar4 | 0x20000000;
  uVar6 = (uint)(*(int *)(param_1 + 0x20) << 0x17) >> 7;
  *puVar3 = uVar4 & 0xfe00ffff | 0x20000000 | uVar6;
  *puVar3 = uVar4 & 0xfe00ff00 | 0x20000000 | uVar6 |
            *(int *)(param_1 + 0x24) + (uint)*(byte *)(*(int *)(param_1 + 0x28) + 3) & 0xff;
  puVar2[3] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[3] & 0xfffff000;
  *param_2 = (int)(puVar2 + 4);
  return 0;
}

