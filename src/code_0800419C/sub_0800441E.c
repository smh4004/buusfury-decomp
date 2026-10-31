/* sub_0800441E  (original: 0x0800441E-0x08004448 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_0800441E(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xe4);
  iVar1 = 0;
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      if ((((int *)(param_1 + 0xe4))[iVar2 + 1] & 0xfffffffU) == param_2) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return iVar1;
}

