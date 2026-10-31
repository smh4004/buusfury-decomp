/* sub_08002B4A  (original: 0x08002B4A-0x08002B7C in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_03001560;


void sub_08002B4A(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  bVar1 = (&DAT_03001560)[param_1[iVar2] * 0x68];
  *param_1 = iVar2;
  param_1[iVar2] = bVar1 & 1;
  return;
}

