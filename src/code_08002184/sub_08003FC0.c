/* sub_08003FC0  (original: 0x08003FC0-0x08003FEE in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08003FC0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x44);
  iVar2 = piVar3[*(int *)(param_1 + 0x44)] + -1;
  piVar3[*(int *)(param_1 + 0x44)] = iVar2;
  puVar1 = (undefined1 *)*param_2;
  if (iVar2 == 0) {
    *param_2 = (int)(puVar1 + 2);
    *piVar3 = *piVar3 + -1;
    return;
  }
  *param_2 = (int)puVar1 - (uint)CONCAT11(*puVar1,puVar1[1]);
  return;
}

