/* sub_080097A6  (original: 0x080097A6-0x080097C2 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080097A6(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  param_1[0xc] = iVar1;
  param_1[0xd] = param_2[1];
  param_1[10] = *param_1 + iVar1 >> 10;
  param_1[0xb] = param_1[1] + param_1[0xd] >> 10;
  return;
}

