/* sub_0802BDF4  (original: 0x0802BDF4-0x0802BE5A in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0802BDF4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_2 + 4);
  piVar3 = (int *)(iVar2 + 0x24);
  iVar1 = *(int *)(iVar2 + 0x30);
  iVar5 = *(int *)(iVar2 + 0x28);
  *(int *)(param_1 + 0x10) = *(int *)(iVar2 + 0x2c) - *piVar3;
  *(int *)(param_1 + 0x14) = iVar1 - iVar5;
  iVar1 = *piVar3;
  iVar5 = *(int *)(iVar2 + 0x28);
  iVar4 = *piVar3;
  *(int *)(param_1 + 0x24) = *(int *)(iVar2 + 0x28) << 8;
  *(int *)(param_1 + 0x20) = iVar4 << 8;
  *(undefined4 *)(param_1 + 0x28) = 0x2c;
  *(int *)(param_1 + 0x18) = (*(int *)(param_1 + 8) - iVar1) * 0x5d3 >> 8;
  *(int *)(param_1 + 0x1c) = ((*(int *)(param_1 + 0xc) - iVar5) * 0x5d3 + -0xba60 >> 8) + -0x200;
  return;
}

