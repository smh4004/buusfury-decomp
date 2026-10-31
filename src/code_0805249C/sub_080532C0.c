/* sub_080532C0  (original: 0x080532C0-0x080532E8 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_080532C0(int *param_1,int *param_2)

{
  if ((((*param_1 < param_2[2]) && (*param_2 < param_1[2])) && (param_1[1] < param_2[3])) &&
     (param_2[1] < param_1[3])) {
    return 1;
  }
  return 0;
}

