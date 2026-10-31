/* sub_080210D6  (original: 0x080210D6-0x080210F2 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03001964;


void sub_080210D6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  *(undefined4 *)(iVar1 * 4 + param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = &DAT_03001964;
  return;
}

