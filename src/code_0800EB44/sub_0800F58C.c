/* sub_0800F58C  (original: 0x0800F58C-0x0800F5C6 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 74% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_0800EB60();
extern undefined volatile _0804D174;


undefined4 * sub_0800F58C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x194), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800EB60(param_1,param_2,param_3);
  param_1[99] = 0;
  *param_1 = &_0804D174;
  param_1[100] = param_1;
  return param_1;
}

