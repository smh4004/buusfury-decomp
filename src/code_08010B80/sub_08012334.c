/* sub_08012334  (original: 0x08012334-0x0801236E in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int Text_LoadString2();
extern int sub_08012012();
extern int sub_0803D5B8();
extern undefined volatile _0804E27C;


undefined4 * sub_08012334(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1008), param_1 != (undefined4 *)0x0)) {
    uVar1 = Text_LoadString2(param_1,param_2,param_4);
    sub_08012012(param_1,uVar1,*(undefined1 *)(param_2 + 3),param_3,uVar2);
    *param_1 = &_0804E27C;
  }
  return param_1;
}

