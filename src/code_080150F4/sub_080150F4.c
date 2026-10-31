/* sub_080150F4  (original: 0x080150F4-0x0801514A in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 38% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080067D6();
extern undefined volatile DAT_0300158c;


void sub_080150F4(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    uVar1 = *(int *)(param_1 + 0x154) + 1;
    *(uint *)(param_1 + 0x154) = uVar1;
    if ((uVar1 & 7) == 0) {
      if (*(short *)(&DAT_0300158c +
                    *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc +
                             *(int *)(param_1 + 300) + 0x54) * 0x68) != 0) {
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
    }
  }
  sub_080067D6();
  return;
}

