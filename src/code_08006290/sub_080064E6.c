/* sub_080064E6  (original: 0x080064E6-0x08006512 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006B5E();
extern int __call_via_r2();
extern undefined4 volatile DAT_03001914;


void sub_080064E6(int *param_1)

{
  if (param_1[0x46] != DAT_03001914) {
    sub_08006B5E(&DAT_03001914);
  }
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

