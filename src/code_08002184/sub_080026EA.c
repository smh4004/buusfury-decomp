/* sub_080026EA  (original: 0x080026EA-0x08002702 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009172();
extern undefined1 volatile DAT_0300197c;


void sub_080026EA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08009172(&DAT_0300197c,param_1[iVar1],param_3,param_4,param_4);
  return;
}

