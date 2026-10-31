/* sub_08002D7E  (original: 0x08002D7E-0x08002DBC in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();


void sub_08002D7E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = sub_080001C6(param_1[iVar1]);
  iVar1 = *(int *)(iVar1 + 0x1a4);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1 >> 8;
  return;
}

