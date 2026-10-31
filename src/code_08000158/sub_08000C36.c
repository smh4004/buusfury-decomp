/* sub_08000C36  (original: 0x08000C36-0x08000C4E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009108();
extern undefined1 volatile DAT_0300197c;


void sub_08000C36(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08009108(&DAT_0300197c,param_1[iVar1],param_3,param_4,param_4);
  return;
}

