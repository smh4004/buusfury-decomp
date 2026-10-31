/* sub_08000604  (original: 0x08000604-0x08000618 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_0300197e;


void sub_08000604(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0300197e;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}

