/* sub_0803E5AC  (original: 0x0803E5AC-0x0803E5DA in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 73% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0803E5AC(int param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar1 >> 0x18);
  if (iVar1 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfc;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}

