/* sub_08005FBE  (original: 0x08005FBE-0x08005FD4 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile _0804A238;


undefined4 *
sub_08005FBE(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[1] = param_2;
  *param_1 = &_0804A238;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  return param_1;
}

