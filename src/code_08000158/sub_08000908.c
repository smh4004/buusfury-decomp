/* sub_08000908  (original: 0x08000908-0x0800091E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: different-exit.
 */
#include "ghidra_types.h"
extern int sub_080096AC();
extern undefined4 volatile DAT_030019a4;


void sub_08000908(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080096AC(&DAT_030019a4,param_1[iVar1]);
  return;
}

