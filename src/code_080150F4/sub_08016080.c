/* sub_08016080  (original: 0x08016080-0x080160CA in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08016080(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    *param_2 = *(int *)(param_1 + 0x48);
    param_2[1] = *(int *)(param_1 + 0x30) + -8;
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 < *(int *)(param_1 + 0x3c)) {
      do {
        iVar3 = iVar2 * 0xc;
        iVar2 = iVar2 + 1;
        *param_2 = *(int *)(iVar3 + param_1 + 0x58) + *param_2 + 10;
      } while (iVar2 < *(int *)(param_1 + 0x3c));
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

