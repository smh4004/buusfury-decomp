/* sub_0803A7FC  (original: 0x0803A7FC-0x0803A84A in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0803A7FC(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb) = param_2;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x10) - (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) - (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x14) + (uint)*(byte *)(param_1 + 0xb);
  return;
}

