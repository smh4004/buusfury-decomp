/* sub_08002DBC  (original: 0x08002DBC-0x08002DE0 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();


void sub_08002DBC(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_080001C6(param_1[iVar2]);
  bVar1 = *(byte *)(iVar2 + 0x10);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (uint)bVar1;
  return;
}

