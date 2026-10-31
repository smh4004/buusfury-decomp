/* sub_080381B0  (original: 0x080381B0-0x080381DC in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c0;


undefined4 sub_080381B0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030019bc;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20) - DAT_030019c0;
  *(int *)(param_1 + 0x24) = iVar1;
  return 1;
}

