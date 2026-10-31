/* sub_08015AF0  (original: 0x08015AF0-0x08015B1E in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804D4BC;


void sub_08015AF0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    *param_1 = &_0804D4BC;
    param_1[10] = param_2;
    uVar1 = param_3[1];
    param_1[0xb] = *param_3;
    param_1[0xc] = uVar1;
  }
  return;
}

