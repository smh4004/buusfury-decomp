/* sub_08003DF8  (original: 0x08003DF8-0x08003E12 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08003DF8(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)puVar1[1] <= (int)*puVar1);
  return;
}

