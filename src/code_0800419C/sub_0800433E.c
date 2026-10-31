/* sub_0800433E  (original: 0x0800433E-0x08004364 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_0800433E(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x68;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 - ((int)((uint)*(byte *)(iVar3 + param_1 + 0x4f8) << 0x1f) >> 0x1f);
  } while (iVar2 < 8);
  return iVar1;
}

