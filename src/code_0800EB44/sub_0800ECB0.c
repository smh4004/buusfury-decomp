/* sub_0800ECB0  (original: 0x0800ECB0-0x0800ECDA in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013E38();
extern int sub_0804E490();
extern int sub_0804FE20();


void sub_0800ECB0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    sub_0804FE20(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8));
  }
  iVar1 = sub_08013E38(*param_2,param_2[1]);
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 != 0) {
    sub_0804E490(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 2));
  }
  return;
}

