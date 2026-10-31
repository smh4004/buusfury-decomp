/* sub_08000382  (original: 0x08000382-0x080003A8 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001068;
extern undefined2 volatile DAT_0300157c;


void sub_08000382(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = (&DAT_0300157c)[(uint)DAT_03001068 * 0x34];
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}

