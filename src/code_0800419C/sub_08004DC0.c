/* sub_08004DC0  (original: 0x08004DC0-0x08004DD8 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08004DC0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 0x80) != 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 0;
}

