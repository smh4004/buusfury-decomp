/* sub_08014A9C  (original: 0x08014A9C-0x08014AC8 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/4 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08006B5E();
extern undefined4 volatile DAT_03001914;


void sub_08014A9C(int *param_1)

{
  if (param_1[0x46] != DAT_03001914) {
    sub_08006B5E(&DAT_03001914);
  }
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

