/* sub_08006880  (original: 0x08006880-0x080068B8 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804BF3C;


void sub_08006880(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,int param_8)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    param_1[1] = param_2;
    *param_1 = &_0804BF3C;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = param_6;
    param_1[5] = param_7;
    param_1[7] = param_5;
    param_1[6] = (param_8 - param_6) + -2;
  }
  return;
}

