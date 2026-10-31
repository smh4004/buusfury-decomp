/* sub_08040382  (original: 0x08040382-0x080403EC in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08040382(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1 * *param_1 >> 10;
  param_1[1] = iVar1 * param_1[1] >> 10;
  param_1[2] = iVar1 * param_1[2] >> 10;
  iVar1 = *param_2;
  param_1[3] = iVar1 * param_1[3] >> 10;
  param_1[4] = iVar1 * param_1[4] >> 10;
  param_1[5] = iVar1 * param_1[5] >> 10;
  iVar1 = *param_2;
  param_1[6] = iVar1 * param_1[6] >> 10;
  param_1[7] = iVar1 * param_1[7] >> 10;
  param_1[8] = iVar1 * param_1[8] >> 10;
  iVar1 = *param_2;
  param_1[9] = iVar1 * param_1[9] >> 10;
  param_1[10] = iVar1 * param_1[10] >> 10;
  param_1[0xb] = iVar1 * param_1[0xb] >> 10;
  return;
}

