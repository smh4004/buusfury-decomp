/* sub_080094B8  (original: 0x080094B8-0x080094F0 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_080094B8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = *param_2;
  iVar2 = param_2[1];
  param_1[6] = iVar1 >> 10;
  param_1[7] = iVar2 >> 10;
  param_1[8] = (iVar1 >> 10) + 0xf0;
  param_1[9] = (iVar2 >> 10) + 0xa0;
  param_1[10] = *param_1 + param_1[0xc] >> 10;
  param_1[0xb] = param_1[1] + param_1[0xd] >> 10;
  return;
}

