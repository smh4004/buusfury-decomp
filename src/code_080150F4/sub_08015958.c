/* sub_08015958  (original: 0x08015958-0x08015978 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


int sub_08015958(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = 1;
  }
  else {
    iVar1 = **(int **)(param_2 + 4);
    iVar2 = *(int *)(iVar1 + 0x34);
    iVar1 = __call_via_r2(*(int **)(param_2 + 4),*(char *)(param_1 + 8),iVar2 + iVar1,iVar2,param_4)
    ;
    iVar1 = 1 - iVar1;
  }
  return iVar1;
}

