/* sub_0802EBBE  (original: 0x0802EBBE-0x0802EC00 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_03001560;


int sub_0802EBBE(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x160);
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 0x114) <= iVar1) {
      return -1;
    }
  } while (-1 < (int)((uint)(byte)(&DAT_03001560)[((int *)(param_1 + 0x114))[iVar1 * 2 + 1] * 0x68]
                     << 0x1e));
  return iVar1;
}

