/* sub_0800D6D2  (original: 0x0800D6D2-0x0800D72E in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800DA92();


void sub_0800D6D2(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  sub_0800DA92();
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x4c) + 0xc);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x58) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x5c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffff000 |
              *(ushort *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 2) & 0x3ff;
  return;
}

