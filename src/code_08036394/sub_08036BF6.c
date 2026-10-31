/* sub_08036BF6  (original: 0x08036BF6-0x08036C4E in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


bool sub_08036BF6(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x38) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x18) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x1c) & 0xff;
  uVar2 = puVar1[1];
  puVar1[1] = uVar2 | 0xc00;
  puVar1[1] = uVar2 & 0xfffffc00 | 0xc00 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  return *(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x30);
}

