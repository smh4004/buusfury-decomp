/* sub_08003904  (original: 0x08003904-0x0800393C in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013B54();
extern undefined1 volatile DAT_03001560;


void sub_08003904(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar2 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar1 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  sub_08013B54(&DAT_03001560 + param_1[iVar3 + -2] * 0x68,iVar1,iVar2);
  return;
}

