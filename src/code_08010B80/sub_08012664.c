/* sub_08012664  (original: 0x08012664-0x0801268A in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_08012664(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  for (param_2 = param_2 + -1; -1 < param_2; param_2 = param_2 + -1) {
    puVar1 = *(undefined4 **)(param_3 + param_2 * 4);
    iVar2 = __call_via_r1(puVar1,*puVar1);
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    param_1[iVar3 + 1] = iVar2;
  }
  return;
}

