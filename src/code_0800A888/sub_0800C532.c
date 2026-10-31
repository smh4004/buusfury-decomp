/* sub_0800C532  (original: 0x0800C532-0x0800C574 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern ushort volatile DAT_03001afa;


undefined4 sub_0800C532(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x2000;
  uVar1 = (uint)(*(int *)(param_1 + 0x2c) << 0x17) >> 7 | 0x2000;
  *puVar2 = uVar1;
  *puVar2 = *(uint *)(param_1 + 0x30) & 0xff | uVar1;
  puVar2[1] = puVar2[1] & 0xfffffc00 | 0xc00 | DAT_03001afa & 0x3ff;
  return 0;
}

