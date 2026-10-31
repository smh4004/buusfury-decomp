/* sub_0803A84A  (original: 0x0803A84A-0x0803A898 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803A7FC();
extern int sub_0803D5B8();
extern undefined volatile _080493B4;


undefined4 *
sub_0803A84A(undefined4 *param_1,undefined1 param_2,undefined4 *param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x830), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_080493B4;
    *(undefined1 *)((int)param_1 + 10) = param_5;
    *(undefined1 *)((int)param_1 + 9) = param_6;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar1 = *param_3;
    param_1[5] = param_3[1];
    param_1[4] = uVar1;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_0803A7FC(param_1,param_4);
  }
  return param_1;
}

