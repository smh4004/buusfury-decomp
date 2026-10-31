/* sub_08026954  (original: 0x08026954-0x0802697E in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804B230;


void sub_08026954(undefined4 *param_1,int *param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804B230;
    param_1[1] = *param_2 * 0x71d >> 8;
    param_1[2] = param_2[1] * 0x71d >> 8;
  }
  return;
}

