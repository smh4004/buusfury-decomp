/* sub_0800DAE6  (original: 0x0800DAE6-0x0800DB1C in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800DAE6(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x1c) = param_2[1];
  *(int *)(param_1 + 0x18) = iVar1;
  iVar2 = **(int **)(param_1 + 0x14);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x1c) + (*(int **)(param_1 + 0x14))[1];
  *(int *)(param_1 + 0x20) = iVar1 + iVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x24);
  return;
}

