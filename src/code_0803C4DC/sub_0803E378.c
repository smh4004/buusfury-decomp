/* sub_0803E378  (original: 0x0803E378-0x0803E3A8 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 79% of instructions covered.
 */
#include "ghidra_types.h"


int sub_0803E378(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
      param_1 = iVar1 * 0x40 + param_1;
      *(undefined4 *)(param_1 + 0x28) = param_2;
      *(undefined4 *)(param_1 + 0x30) = 0x4000;
      *(undefined1 *)(param_1 + 0x12) = param_3;
      *(undefined1 *)(param_1 + 0x13) = param_4;
      *(undefined1 *)(param_1 + 0x10) = 0x1f;
      return param_1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}

