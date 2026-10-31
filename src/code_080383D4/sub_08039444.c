/* sub_08039444  (original: 0x08039444-0x08039472 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();


undefined4 sub_08039444(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1f0);
  uVar1 = sub_0803FACC(8);
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1f8)) {
    uVar1 = uVar1 + 1;
    *(uint *)(iVar2 + 0x204) = uVar1 & 7;
  }
  return 1;
}

