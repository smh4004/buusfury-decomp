/* sub_080043EE  (original: 0x080043EE-0x0800441E in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_080043EE(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xe4);
  iVar1 = 0;
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      uVar3 = ((int *)(param_1 + 0xe4))[iVar2 + 1];
      if (((uVar3 & 0xfffffff) == param_2) && (uVar3 >> 0x1c == 0)) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return iVar1;
}

