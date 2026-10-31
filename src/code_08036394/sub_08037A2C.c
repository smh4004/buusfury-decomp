/* sub_08037A2C  (original: 0x08037A2C-0x08037A42 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08037A2C(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(ushort *)(param_2 + 0x12) - 1;
  if (iVar1 < 0) {
    iVar1 = **(int **)(param_2 + 0x50) * 8 + -1;
  }
  *(short *)(param_2 + 0x12) = (short)iVar1;
  *(char *)(param_2 + 0x11) = (char)(iVar1 >> 3);
  return;
}

