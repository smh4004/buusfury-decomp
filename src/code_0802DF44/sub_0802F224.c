/* sub_0802F224  (original: 0x0802F224-0x0802F23A in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0802F224(undefined4 param_1,int param_2)

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

