/* sub_0800DFD4  (original: 0x0800DFD4-0x0800E00A in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_0800DFD4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(ushort *)(param_2 + 0x12) + 1;
  iVar1 = **(int **)(param_2 + 0x50);
  *(short *)(param_2 + 0x12) = (short)uVar2;
  if (iVar1 == 2) {
    *(bool *)(param_2 + 0x11) = 0xf0 < (uVar2 & 0xff);
  }
  else {
    *(char *)(param_2 + 0x11) = (char)(uVar2 * 0x200000 >> 0x18);
    if (iVar1 <= (int)(uVar2 * 0x200000 >> 0x18)) {
      *(undefined1 *)(param_2 + 0x11) = 0;
      *(undefined2 *)(param_2 + 0x12) = 0;
      return;
    }
  }
  return;
}

