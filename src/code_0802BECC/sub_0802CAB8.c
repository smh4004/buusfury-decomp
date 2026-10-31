/* sub_0802CAB8  (original: 0x0802CAB8-0x0802CAF8 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0802CAB8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + (*(int *)(param_1 + 8) - *(int *)(iVar1 + 0x24))
  ;
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + (iVar3 - *(int *)(iVar1 + 0x28));
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x18);
  return;
}

