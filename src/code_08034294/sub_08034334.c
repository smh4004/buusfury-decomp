/* sub_08034334  (original: 0x08034334-0x08034354 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08034334(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_3 + 0x1a8);
  iVar2 = *(int *)(param_1 + 4) * 0x400;
  if ((iVar1 != iVar2 && iVar1 + *(int *)(param_1 + 4) * -0x400 < 0 == SBORROW4(iVar1,iVar2)) &&
     (iVar1 + *(int *)(param_1 + 8) * -0x400 < 0 != SBORROW4(iVar1,*(int *)(param_1 + 8) * 0x400)))
  {
    return 1;
  }
  return 0;
}

