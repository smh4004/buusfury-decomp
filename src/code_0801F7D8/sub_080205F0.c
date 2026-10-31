/* sub_080205F0  (original: 0x080205F0-0x08020610 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();


void sub_080205F0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x40) + *piVar1);
  __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
  return;
}

