/* sub_0800DEB0  (original: 0x0800DEB0-0x0800DED0 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 81% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0800DEB0(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar2 = (uint)(uVar1 >> *(sbyte *)(param_1 + 4));
  if (**(int **)(param_2 + 0x50) <= (int)uVar2) {
    *(undefined2 *)(param_2 + 0x12) = 0;
    uVar2 = 0;
  }
  *(char *)(param_2 + 0x11) = (char)uVar2;
  return;
}

