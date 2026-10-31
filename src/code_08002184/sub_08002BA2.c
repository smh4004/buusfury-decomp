/* sub_08002BA2  (original: 0x08002BA2-0x08002BC8 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_03001560;


void sub_08002BA2(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03001560)[param_1[iVar1] * 0x68] = (&DAT_03001560)[param_1[iVar1] * 0x68] & 0xfe;
  return;
}

