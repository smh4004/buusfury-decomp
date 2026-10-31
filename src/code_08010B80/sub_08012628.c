/* sub_08012628  (original: 0x08012628-0x08012664 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08012628(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  while (iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)param_1[iVar2];
    iVar2 = iVar1;
    if (piVar3 != (int *)0x0) {
      __call_via_r2(piVar3,1,*(int *)*piVar3 + *piVar3);
    }
  }
  *param_1 = 0;
  param_1[0x34] = 1;
  param_1[0x31] = 1;
  param_1[0x33] = 0;
  param_1[0x32] = param_1[0x32] + 1;
  return;
}

