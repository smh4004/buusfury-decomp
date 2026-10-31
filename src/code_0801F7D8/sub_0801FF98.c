/* sub_0801FF98  (original: 0x0801FF98-0x0801FFE0 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08005740();
extern int sub_08040160();
extern int sub_080504B4();
extern undefined2 volatile REG_DISPCNT;


void sub_0801FF98(int param_1)

{
  ushort uVar1;
  
  sub_08005740();
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x1040;
  if (*(int *)(param_1 + 0x2f8) != 0) {
    sub_080504B4(0);
    sub_08040160();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2b4) + 8) =
       *(undefined4 *)(param_1 + 300 + *(int *)(param_1 + 0x10c) * 0x80);
  return;
}

