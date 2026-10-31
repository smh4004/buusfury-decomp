/* sub_0800393C  (original: 0x0800393C-0x08003978 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013BCC();
extern undefined1 volatile DAT_03001560;


void sub_0800393C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = sub_08013BCC(&DAT_03001560 + param_1[iVar1 + -1] * 0x68,iVar2);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

