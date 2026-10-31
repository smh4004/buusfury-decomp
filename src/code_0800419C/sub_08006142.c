/* sub_08006142  (original: 0x08006142-0x08006182 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803DADA();
extern undefined4 volatile gUnknown_0807012C;


void sub_08006142(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_2 = *(undefined1 *)(param_1 + 0x2c);
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    uVar1 = 6;
  }
  else {
    uVar1 = 2;
  }
  param_2[3] = uVar1;
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 8) = uVar2;
  sub_0803DADA(param_2,*(undefined4 *)(param_1 + 0x1c));
  return;
}

