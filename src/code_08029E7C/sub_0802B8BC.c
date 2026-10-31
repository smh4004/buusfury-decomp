/* sub_0802B8BC  (original: 0x0802B8BC-0x0802B8F0 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_0802B8BC(byte *param_1,byte *param_2)

{
  return ((uint)*param_2 - (uint)*param_1) * ((uint)*param_2 - (uint)*param_1) +
         ((uint)param_2[1] - (uint)param_1[1]) * ((uint)param_2[1] - (uint)param_1[1]) +
         ((uint)param_2[2] - (uint)param_1[2]) * ((uint)param_2[2] - (uint)param_1[2]) +
         ((uint)param_2[3] - (uint)param_1[3]) * ((uint)param_2[3] - (uint)param_1[3]);
}

