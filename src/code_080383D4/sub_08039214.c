/* sub_08039214  (original: 0x08039214-0x0803923A in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


bool sub_08039214(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_2 + 0x1f0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1f8)) {
    iVar2 = iVar2 + 1;
  }
  return *(int *)(param_1 + 0xc) == iVar2;
}

