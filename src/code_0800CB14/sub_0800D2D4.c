/* sub_0800D2D4  (original: 0x0800D2D4-0x0800D2F0 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801268A();
extern undefined4 volatile DAT_03002a64;


void sub_0800D2D4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x10);
  __call_via_r2(*(int **)(param_1 + 0x10),param_2,*(int *)(iVar1 + 0x28) + iVar1);
  sub_0801268A(&DAT_03002a64,param_1);
  return;
}

