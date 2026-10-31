/* sub_080005DC  (original: 0x080005DC-0x080005F0 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_0300197c;


void sub_080005DC(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0300197c;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}

