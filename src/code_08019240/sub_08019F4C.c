/* sub_08019F4C  (original: 0x08019F4C-0x08019F72 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080134B8();


undefined4 sub_08019F4C(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,*(short *)(param_1 + 0x1c) * 0xccd + 0xffff >> 0x10,0xffff,0xccd,
                         param_4);
  }
  return uVar1;
}

