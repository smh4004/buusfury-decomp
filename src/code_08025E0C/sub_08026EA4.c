/* sub_08026EA4  (original: 0x08026EA4-0x08026EE6 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_08026EA4(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x2000;
  uVar2 = (uint)(*(int *)(param_1 + 0x1c) << 0x17) >> 7 | 0x2000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | *(uint *)(param_1 + 0x20) & 0xff;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffffc00 | 0xc00;
  return 0;
}

