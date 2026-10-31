/* sub_0801191A  (original: 0x0801191A-0x0801192C in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_0801191A(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  piVar1[iVar2 + 1] = param_2;
  return;
}

