/* sub_08006182  (original: 0x08006182-0x080061B2 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern ushort volatile DAT_03003304;


undefined4 sub_08006182(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (((DAT_03003304 & 9) == 0) ||
     (piVar1 = *(int **)(param_1 + 4), piVar1[0x43] != *(int *)(param_1 + 8))) {
    uVar2 = 0;
  }
  else {
    uVar2 = __call_via_r3(piVar1,param_1,*(undefined4 *)(param_1 + 0x28),
                          *(int *)(*piVar1 + 0x20) + *piVar1,param_4);
  }
  return uVar2;
}

