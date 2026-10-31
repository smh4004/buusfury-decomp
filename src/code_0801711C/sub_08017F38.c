/* sub_08017F38  (original: 0x08017F38-0x08017F5A in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int * sub_08017F38(int *param_1,byte *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3[1];
  iVar2 = *(int *)(param_2 + 8);
  *param_1 = (*param_3 + *(int *)(param_2 + 4)) - (uint)(*param_2 >> 1);
  param_1[1] = iVar1 + iVar2;
  return param_1 + 2;
}

