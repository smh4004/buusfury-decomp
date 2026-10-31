/* sub_0800FE08  (original: 0x0800FE08-0x0800FE34 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: sp.
 */
#include "ghidra_types.h"


int * sub_0800FE08(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x19c);
  bVar2 = *(byte *)(param_2 + 0x19d);
  *param_1 = param_3 >> 8;
  param_1[1] = param_4 >> 8;
  param_1[2] = (param_3 >> 8) + (uint)bVar1;
  param_1[3] = (param_4 >> 8) + (uint)bVar2;
  return param_1 + 4;
}

