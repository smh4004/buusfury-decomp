/* sub_0800DA26  (original: 0x0800DA26-0x0800DA3E in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800DA26(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = *param_3;
  param_1[1] = param_3[1] - param_2[1];
  *param_1 = iVar1 - (iVar2 >> 1);
  return;
}

