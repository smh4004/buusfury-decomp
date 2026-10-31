/* sub_08005864  (original: 0x08005864-0x08005882 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011B04();
extern int __call_via_r2();
extern undefined volatile DAT_03001c4c;


void sub_08005864(int *param_1)

{
  sub_08011B04(&DAT_03001c4c);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

