/* sub_08007FE8  (original: 0x08007FE8-0x0800800A in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08007FE8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  *(int *)(param_1 + 0x44) = iVar2;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  *(int *)(param_1 + 0x48) = iVar1;
  *(int *)(param_1 + 0x44) = iVar2 + *param_2 * 0x400;
  *(int *)(param_1 + 0x48) = iVar1 + param_2[1] * 0x400;
  return;
}

