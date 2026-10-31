/* sub_0802EC00  (original: 0x0802EC00-0x0802EC3E in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_03001560;


int sub_0802EC00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x160);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return -1;
    }
  } while (-1 < (int)((uint)(byte)(&DAT_03001560)[*(int *)(iVar1 * 8 + param_1 + 0x118) * 0x68] <<
                     0x1e));
  return iVar1;
}

