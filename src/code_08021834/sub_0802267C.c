/* sub_0802267C  (original: 0x0802267C-0x080226C0 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


ushort sub_0802267C(int param_1,int param_2)

{
  undefined2 local_4;
  
  return (ushort)((uint)(*(int *)(param_1 + 0x118) << 0x18) >> 0x15) |
         *(byte *)(param_1 + 0x114) & 7 | (ushort)((local_4 >> 3 & 0x1fffff00) << 3) & 0xf7ff |
         (ushort)((uint)(param_2 << 0x1f) >> 0x14);
}

