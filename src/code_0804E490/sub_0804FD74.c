/* sub_0804FD74  (original: 0x0804FD74-0x0804FDA0 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int sub_0803D63C();


void sub_0804FD74(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 4) = uVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  sub_0803D63C();
  iVar1 = **(int **)(param_2 + 0xc);
  __call_via_r3(*(int **)(param_2 + 0xc),param_2,param_3,*(int *)(iVar1 + 4) + iVar1,param_4);
  return;
}

