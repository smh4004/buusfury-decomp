/* sub_08003D66  (original: 0x08003D66-0x08003D7A in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08003D66(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  *param_1 = param_1[1] * *param_1;
  return;
}

