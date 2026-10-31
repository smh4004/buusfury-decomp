/* sub_08014124  (original: 0x08014124-0x08014156 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804A254;


void sub_08014124(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    param_1[1] = param_2;
    *param_1 = &_0804A254;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[5] = param_5;
    *(undefined1 *)(param_1 + 6) = param_7;
    param_1[4] = param_6;
    param_1[7] = param_8;
  }
  return;
}

