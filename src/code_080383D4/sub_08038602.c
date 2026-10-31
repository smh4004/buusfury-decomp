/* sub_08038602  (original: 0x08038602-0x0803862E in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c0;


undefined4 sub_08038602(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030019bc;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x20) - DAT_030019c0;
  *(int *)(param_1 + 0x2c) = iVar1;
  return 1;
}

