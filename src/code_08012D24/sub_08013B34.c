/* sub_08013B34  (original: 0x08013B34-0x08013B54 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 87% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_08013B34(int param_1)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0xc) == 0) {
    return 0;
  }
  bVar1 = *(char *)(param_1 + 0x15) + 1;
  *(byte *)(param_1 + 0x15) = bVar1;
  if (*(byte *)(param_1 + 0xc) <= bVar1) {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return 1;
}

