/* sub_0803D4E8  (original: 0x0803D4E8-0x0803D520 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 92% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_03003488;
extern undefined volatile DAT_02000008;


void sub_0803D4E8(int param_1)

{
  ushort uVar1;
  
  *(undefined1 *)(param_1 + 6) = 1;
  uVar1 = *(ushort *)(param_1 + 8);
  if (*(ushort *)(param_1 + 10) == 0) {
    if (uVar1 == 0) {
      DAT_03003488 = 0;
    }
    else {
      DAT_03003488 = (uint)uVar1 * 4 + 0x2000000;
    }
  }
  else {
    *(ushort *)(&DAT_02000008 + (uint)*(ushort *)(param_1 + 10) * 4) = uVar1;
  }
  if (*(ushort *)(param_1 + 8) != 0) {
    *(undefined2 *)((uint)*(ushort *)(param_1 + 8) * 4 + 0x200000a) = *(undefined2 *)(param_1 + 10);
  }
  return;
}

