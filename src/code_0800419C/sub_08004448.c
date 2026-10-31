/* sub_08004448  (original: 0x08004448-0x08004468 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08004448(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xe4);
  if (*piVar1 != 0xfa) {
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    piVar1[iVar2 + 1] = param_2 & 0xfffffff;
  }
  return;
}

