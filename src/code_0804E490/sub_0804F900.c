/* sub_0804F900  (original: 0x0804F900-0x0804F92C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0804F900(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  param_1[1] = param_2[1] + param_2[3] >> 1;
  *param_1 = iVar1 + iVar2 >> 1;
  return;
}

