/* sub_08002704  (original: 0x08002704-0x08002720 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08008AA0();
extern undefined4 volatile DAT_03002a58;


void sub_08002704(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  if (*(int *)(*(int *)(param_1 + 0x28) + 0xcc) != 0) {
    param_3 = &DAT_03002a58;
    DAT_03002a58 = 1;
  }
  sub_08008AA0(*(undefined4 *)(param_1 + 0xc),0,param_3,param_4,param_4);
  return;
}

