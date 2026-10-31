/* sub_08000958  (original: 0x08000958-0x0800097A in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009728();
extern undefined4 volatile DAT_030019a4;


void sub_08000958(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_08009728(&DAT_030019a4,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}

