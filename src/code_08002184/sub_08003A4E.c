/* sub_08003A4E  (original: 0x08003A4E-0x08003A74 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();


void sub_08003A4E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = sub_080001C6(param_1[iVar1 + -1]);
  *(int *)(iVar1 + 0x1a8) = iVar2 << 10;
  return;
}

