/* sub_0801782C  (original: 0x0801782C-0x0801785C in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801774C();
extern int __16__rt_sdiv();


bool sub_0801782C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x404) + 1;
  *(int *)(param_1 + 0x404) = iVar1;
  uVar2 = __16__rt_sdiv(*(undefined4 *)(param_1 + 0x408),iVar1 * 0x100,param_3,param_4,param_4);
  sub_0801774C(param_1,uVar2);
  return *(int *)(param_1 + 0x408) <= *(int *)(param_1 + 0x404);
}

