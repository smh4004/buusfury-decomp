/* sub_080205E0  (original: 0x080205E0-0x080205F0 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_080205E0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_2 + 4);
  iVar2 = *(int *)(iVar1 + 0x40);
  __call_via_r1(*(int **)(param_2 + 4),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}

