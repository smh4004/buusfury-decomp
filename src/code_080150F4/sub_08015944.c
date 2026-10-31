/* sub_08015944  (original: 0x08015944-0x08015958 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08015944(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_2 + 4);
  __call_via_r2(*(int **)(param_2 + 4),*(undefined1 *)(param_1 + 8),*(int *)(iVar1 + 0x28) + iVar1,
                param_1,param_4);
  return;
}

