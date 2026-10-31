/* sub_0800620C  (original: 0x0800620C-0x08006248 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803DADA();
extern undefined volatile gUnknown_0806E050;


void sub_0800620C(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_2 = 1;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f70d;
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    uVar1 = 6;
  }
  else {
    uVar1 = 2;
  }
  param_2[3] = uVar1;
  *(undefined **)(param_2 + 0xc) = &gUnknown_0806E050;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 8) = uVar2;
  sub_0803DADA(param_2,*(undefined4 *)(param_1 + 0x1c));
  return;
}

