/* sub_0803E3CA  (original: 0x0803E3CA-0x0803E3E4 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_0803E3CA(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((*(byte *)(iVar2 * 0x40 + param_1 + 0x10) & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return iVar1;
}

