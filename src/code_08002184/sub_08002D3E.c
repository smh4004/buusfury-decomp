/* sub_08002D3E  (original: 0x08002D3E-0x08002D7E in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();


void sub_08002D3E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = sub_080001C6(param_1[iVar1]);
  iVar2 = *(int *)(iVar1 + 0x1a0);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2 >> 8;
  return;
}

