/* sub_0800E6B8  (original: 0x0800E6B8-0x0800E6F8 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 80% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_0800E7F6();
extern int volatile DAT_03001b90;
extern undefined4 volatile DAT_03001b94;
extern undefined volatile _0804D0F8;


undefined4 *
sub_0800E6B8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x224), param_1 != (undefined4 *)0x0)) {
    sub_0800E7F6(param_1,param_2,param_3,param_4,uVar2);
    *param_1 = &_0804D0F8;
    puVar1 = &DAT_03001b94 + DAT_03001b90;
    DAT_03001b90 = DAT_03001b90 + 1;
    *puVar1 = param_1;
  }
  return param_1;
}

