/* sub_08006DD6  (original: 0x08006DD6-0x08006E0A in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08010D7C();
extern int sub_0803D5B8();
extern undefined volatile _0804B57C;
extern undefined volatile _080495B4;


undefined4 * sub_08006DD6(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080495B4;
    param_1[1] = 0;
    param_1[2] = 8;
    param_1[3] = param_2;
    sub_08010D7C(param_2);
    *param_1 = &_0804B57C;
  }
  return param_1;
}

