/* sub_0803ADC0  (original: 0x0803ADC0-0x0803AE10 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0803ADC0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x10) - (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) - (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 0xb);
  *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x14) + (uint)*(byte *)(param_1 + 0xb);
  return;
}

