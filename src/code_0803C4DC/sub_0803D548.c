/* sub_0803D548  (original: 0x0803D548-0x0803D56A in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_02000004;


void sub_0803D548(ushort *param_1,ushort *param_2)

{
  param_1[1] = param_1[1] + param_2[1] + 2;
  *param_1 = *param_2;
  if (*param_2 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)*param_2 * 4) = param_2[2];
  }
  return;
}

