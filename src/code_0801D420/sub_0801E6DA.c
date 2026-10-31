/* sub_0801E6DA  (original: 0x0801E6DA-0x0801E6FC in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 62% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080067D6();


void sub_0801E6DA(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x114) + 0x30) == 0) && (*(int *)(param_1 + 0x10c) == 1)) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  sub_080067D6();
  return;
}

