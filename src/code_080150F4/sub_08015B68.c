/* sub_08015B68  (original: 0x08015B68-0x08015B9E in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 91% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08007858();
extern int sub_08021094();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bd8;
extern undefined volatile _0804D27C;


undefined4 * sub_08015B68(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804D27C;
  uVar1 = sub_08007858(0,param_2,param_3);
  sub_08021094(&DAT_03002bd8,uVar1);
  return param_1;
}

