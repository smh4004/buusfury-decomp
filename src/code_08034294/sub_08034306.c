/* sub_08034306  (original: 0x08034306-0x0803431C in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08034306(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = **(int **)(param_1 + 4);
    iVar2 = *(int *)(iVar1 + 8);
    __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + iVar1,iVar2,param_4);
  }
  return;
}

