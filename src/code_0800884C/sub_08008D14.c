/* sub_08008D14  (original: 0x08008D14-0x08008D44 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int Area_Lookup();
extern int sub_08008B30();


void sub_08008D14(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = Area_Lookup();
  sub_08008B30(param_1,uVar1,param_4,param_5,param_6);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

