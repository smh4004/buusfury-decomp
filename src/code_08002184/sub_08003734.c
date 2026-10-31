/* sub_08003734  (original: 0x08003734-0x0800374C in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern ushort volatile DAT_03003304;


void sub_08003734(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)DAT_03003304;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = uVar1 & 1;
  return;
}

