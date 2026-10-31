/* sub_080110D8  (original: 0x080110D8-0x0801111C in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 80% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800FD74();
extern int sub_0800A93C();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03001b0c;
extern undefined volatile _0804CEF4;


undefined4 *
sub_080110D8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = param_1;
  uVar2 = param_3;
  uVar3 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1bc), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,&DAT_03001b0c,param_4,param_5,puVar1,param_2,uVar2,uVar3);
    *param_1 = &_0804CEF4;
    sub_0800A93C(param_1 + 0x6c,param_3);
  }
  return param_1;
}

