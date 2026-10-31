/* sub_0804EAD4  (original: 0x0804EAD4-0x0804EAF4 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03003038;


void sub_0804EAD4(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_1 + 8);
  DAT_03003038 = 0;
  return;
}

