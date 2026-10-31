/* sub_080035F4  (original: 0x080035F4-0x08003626 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08031808();


void sub_080035F4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar3 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar2 = param_1[iVar4 + -1];
  *param_1 = iVar4 + -3;
  iVar1 = param_1[iVar4 + -2];
  *param_1 = iVar4 + -4;
  sub_08031808(param_1[iVar4 + -3],iVar1,iVar2,iVar3);
  return;
}

