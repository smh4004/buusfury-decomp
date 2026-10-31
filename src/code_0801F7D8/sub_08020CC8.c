/* sub_08020CC8  (original: 0x08020CC8-0x08020CF4 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c0;


undefined4 sub_08020CC8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) - DAT_030019bc;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x24) - DAT_030019c0;
  *(int *)(param_1 + 0x28) = iVar1;
  return 1;
}

