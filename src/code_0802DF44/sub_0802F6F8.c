/* sub_0802F6F8  (original: 0x0802F6F8-0x0802F708 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03003108;


int sub_0802F6F8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (*(undefined4 **)(param_2 + 0x14) != &DAT_03003108) {
    iVar1 = 0;
  }
  return param_3 - iVar1;
}

