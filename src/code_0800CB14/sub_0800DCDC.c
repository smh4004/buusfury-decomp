/* sub_0800DCDC  (original: 0x0800DCDC-0x0800DD10 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800D30E();
extern int sub_0803D5B8();
extern undefined volatile _0804C508;


undefined4 * sub_0800DCDC(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x84), param_1 != (undefined4 *)0x0)) {
    sub_0800D30E(param_1,*(undefined4 *)(param_2 + 4),param_3,param_4,uVar1);
    *param_1 = &_0804C508;
    param_1[0x20] = param_2;
  }
  return param_1;
}

