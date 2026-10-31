/* sub_0804F9A4  (original: 0x0804F9A4-0x0804F9BC in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_0804F9A4(int *param_1,uint param_2)

{
  if (0xfe < param_2) {
    return param_1[1] + 1;
  }
  return *(ushort *)(*param_1 + (uint)*(ushort *)(*param_1 + param_2 * 2) * 2) + 1;
}

