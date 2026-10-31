/* sub_08017F14  (original: 0x08017F14-0x08017F38 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08017F14(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *(int *)(param_1 + 0x48) = *param_2;
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = *param_2 - (uint)(**(byte **)(param_1 + 0x60) >> 1);
  *(int *)(param_1 + 0x38) = iVar1;
  *(uint *)(param_1 + 0x40) = iVar1 + (uint)**(byte **)(param_1 + 0x60);
  *(int *)(param_1 + 4) = param_2[1];
  return;
}

