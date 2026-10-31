/* sub_08013F0C  (original: 0x08013F0C-0x08013F24 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08013F0C(int param_1,int param_2,int param_3)

{
  byte bVar1;
  
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x28) = param_3;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 5);
  *(uint *)(param_1 + 0x2c) = param_2 + (uint)*(byte *)(*(int *)(param_1 + 0x20) + 4);
  *(uint *)(param_1 + 0x30) = param_3 + (uint)bVar1;
  return;
}

