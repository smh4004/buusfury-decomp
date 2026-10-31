/* sub_08021EF8  (original: 0x08021EF8-0x08021F0A in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_08021EF8(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    do {
      if ((int)(param_2 << 0x1f) < 0) {
        iVar1 = iVar1 + 1;
      }
      param_2 = param_2 >> 1;
    } while (param_2 != 0);
  }
  return iVar1;
}

