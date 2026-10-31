/* sub_08002B7C  (original: 0x08002B7C-0x08002BA2 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_03001560;


void sub_08002B7C(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03001560)[param_1[iVar1] * 0x68] = (&DAT_03001560)[param_1[iVar1] * 0x68] | 1;
  return;
}

