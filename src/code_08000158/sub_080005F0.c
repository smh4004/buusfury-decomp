/* sub_080005F0  (original: 0x080005F0-0x08000604 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_0300197d;


void sub_080005F0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0300197d;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}

