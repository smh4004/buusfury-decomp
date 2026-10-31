/* sub_08032FE0  (original: 0x08032FE0-0x08033002 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804C690;


void sub_08032FE0(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    param_1[3] = 0;
    param_1[1] = 0;
    *param_1 = &_0804C690;
    param_1[5] = param_2;
    param_1[4] = 0;
  }
  return;
}

