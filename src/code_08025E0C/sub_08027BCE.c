/* sub_08027BCE  (original: 0x08027BCE-0x08027BE6 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08027D3E();


bool sub_08027BCE(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    sub_08027D3E(*(undefined4 *)(param_1 + 0x18));
  }
  return iVar1 == 0;
}

