/* sub_08003D7A  (original: 0x08003D7A-0x08003D92 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();


void sub_08003D7A(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  iVar1 = __16__rt_sdiv(param_1[1],*param_1);
  *param_1 = iVar1;
  return;
}

