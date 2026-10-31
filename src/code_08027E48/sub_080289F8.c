/* sub_080289F8  (original: 0x080289F8-0x08028A24 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c0;


undefined4 sub_080289F8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) - DAT_030019bc;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x24) - DAT_030019c0;
  *(int *)(param_1 + 0x30) = iVar1;
  return 1;
}

