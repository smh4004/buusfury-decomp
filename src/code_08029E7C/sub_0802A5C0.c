/* sub_0802A5C0  (original: 0x0802A5C0-0x0802A5EC in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c0;


undefined4 sub_0802A5C0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) - DAT_030019bc;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x24) - DAT_030019c0;
  *(int *)(param_1 + 0x30) = iVar1;
  return 1;
}

