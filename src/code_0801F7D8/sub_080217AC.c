/* sub_080217AC  (original: 0x080217AC-0x08021802 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_080217AC(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x10) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x14) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffffc00;
  puVar1[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar3 & 0xfffff000;
  return 0;
}

