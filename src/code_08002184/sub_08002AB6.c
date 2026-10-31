/* sub_08002AB6  (original: 0x08002AB6-0x08002AE4 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013A90();
extern undefined1 volatile DAT_03001560;


void sub_08002AB6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  sub_08013A90(&DAT_03001560 + param_1[iVar2 + -1] * 0x68,iVar1,0x4f8,0x68,param_4);
  return;
}

