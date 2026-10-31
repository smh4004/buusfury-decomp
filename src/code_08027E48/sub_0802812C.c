/* sub_0802812C  (original: 0x0802812C-0x08028144 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0802812C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  if (7 < iVar1) {
    *(undefined4 *)(param_1 + 0x30) = 0x8028035;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}

