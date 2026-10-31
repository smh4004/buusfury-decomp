/* sub_08006D98  (original: 0x08006D98-0x08006DCE in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08010D7C();
extern int sub_0803D5B8();
extern undefined volatile _0804BB74;
extern undefined volatile _080496CC;


undefined4 * sub_08006D98(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080496CC;
    param_1[1] = 0x100;
    param_1[2] = 8;
    param_1[3] = param_2;
    sub_08010D7C(param_2);
    *param_1 = &_0804BB74;
  }
  return param_1;
}

