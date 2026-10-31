/* sub_08022644  (original: 0x08022644-0x0802266E in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801268A();
extern int __call_via_r3();
extern int volatile DAT_03002b2c;
extern undefined4 volatile DAT_03002a64;


void sub_08022644(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03002b2c;
  iVar2 = *param_2;
  __call_via_r3(param_2,param_3,iVar2,*(int *)(iVar2 + 4) + iVar2,param_4);
  if (DAT_03002b2c == iVar1) {
    sub_0801268A(&DAT_03002a64,param_2);
  }
  return;
}

