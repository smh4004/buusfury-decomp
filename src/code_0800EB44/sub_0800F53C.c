/* sub_0800F53C  (original: 0x0800F53C-0x0800F558 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03001ba4;


void sub_0800F53C(int param_1)

{
  *(uint *)(param_1 + 0x1c) = (uint)*(byte *)(param_1 + 0x11);
  *(uint *)(param_1 + 0x20) = (uint)*(ushort *)(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 **)(param_1 + 0x14) = &DAT_03001ba4;
  return;
}

