/* sub_0804FEF8  (original: 0x0804FEF8-0x0804FF0C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03001b30;


int sub_0804FEF8(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_2 != &DAT_03001b30) {
    iVar1 = 0;
  }
  return param_3 - iVar1;
}

