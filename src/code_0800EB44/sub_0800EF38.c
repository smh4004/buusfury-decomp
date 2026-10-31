/* sub_0800EF38  (original: 0x0800EF38-0x0800EF66 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_0800EF38(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) =
       *(undefined4 *)
        (*(int *)(param_1 + 0x50) + (uint)*(byte *)(param_1 + 0x11) * 0x10 +
         (uint)*(byte *)(param_1 + 0x10) * 4 + 4);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 100) = 1;
  return 1;
}

