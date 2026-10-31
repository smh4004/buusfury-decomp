/* sub_080051B0  (original: 0x080051B0-0x080051E6 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int sub_080051B0(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x24) + param_3 * *(int *)(param_1 + 0x28) + param_2);
  *puVar1 = 0x2f;
  puVar1 = puVar1 + *(int *)(param_1 + 0x28) + -1;
  for (iVar2 = (param_4 - param_3) + -2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0x2f;
    puVar1[1] = 0x30;
    puVar1[2] = 0x31;
    puVar1 = puVar1 + *(int *)(param_1 + 0x28);
  }
  puVar1[1] = 0x31;
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
