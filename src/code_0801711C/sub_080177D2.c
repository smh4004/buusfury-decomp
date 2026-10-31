/* sub_080177D2  (original: 0x080177D2-0x08017806 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_080176D6();


bool sub_080177D2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x404) + 1;
  *(int *)(param_1 + 0x404) = iVar1;
  iVar1 = __16__rt_sdiv(*(undefined4 *)(param_1 + 0x408),iVar1 * 0x100,param_3,param_4,param_4);
  sub_080176D6(param_1,0x100 - iVar1);
  return *(int *)(param_1 + 0x408) <= *(int *)(param_1 + 0x404);
}

