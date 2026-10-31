/* sub_080088C8  (original: 0x080088C8-0x080088E6 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _080498B0;


void sub_080088C8(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_080498B0;
    param_1[2] = param_3;
  }
  return;
}

