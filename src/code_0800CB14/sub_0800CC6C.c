/* sub_0800CC6C  (original: 0x0800CC6C-0x0800CD00 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0800CC6C(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = param_2[2];
  if (iVar3 < 0x10) {
    puVar1 = (uint *)*param_2;
    *param_2 = puVar1 + 2;
    iVar2 = param_2[1];
    param_2[1] = iVar2 + 0x20;
    param_2[2] = iVar3 + 1;
    uVar4 = *(uint *)(*(int *)(param_1 + 0x20) + 0x10);
    *puVar1 = uVar4 | 0x300;
    uVar5 = (uint)(*(int *)(param_1 + 0x4c) << 0x17) >> 7;
    *puVar1 = uVar4 & 0xfe00ffff | 0x300 | uVar5;
    uVar6 = *(uint *)(param_1 + 0x50) & 0xff;
    *puVar1 = uVar4 & 0xfe00ff00 | 0x300 | uVar5 | uVar6;
    uVar8 = puVar1[1];
    uVar7 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    puVar1[1] = uVar7 | uVar8 & 0xfffff3ff;
    puVar1[1] = uVar7 | uVar8 & 0xfffff000 | *(ushort *)(param_1 + 0x16) & 0x3ff;
    *puVar1 = (uint)(iVar3 << 0x1b) >> 2 | uVar4 & 0xc000ff00 | 0x300 | uVar5 | uVar6;
    *(short *)(iVar2 + 6) = (short)*(undefined4 *)(param_1 + 0x58);
    *(undefined2 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0x16) = 0;
    *(short *)(iVar2 + 0x1e) = (short)*(undefined4 *)(param_1 + 0x58);
  }
  return 0;
}

