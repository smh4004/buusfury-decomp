/* sub_080003E4  (original: 0x080003E4-0x080003F6 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03002bb0;


void sub_080003E4(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03002bb0;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}

