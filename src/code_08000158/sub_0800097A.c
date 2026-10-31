/* sub_0800097A  (original: 0x0800097A-0x0800099C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080096EA();
extern undefined4 volatile DAT_030019a4;


void sub_0800097A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_080096EA(&DAT_030019a4,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}

