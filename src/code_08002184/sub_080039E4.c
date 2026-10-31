/* sub_080039E4  (original: 0x080039E4-0x08003A14 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_0300158c;


void sub_080039E4(int *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = *(ushort *)(&DAT_0300158c + param_1[iVar2] * 0x68);
  *param_1 = iVar2;
  param_1[iVar2] = (uint)uVar1;
  return;
}

