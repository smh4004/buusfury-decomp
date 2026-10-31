/* sub_08050568  (original: 0x08050568-0x0805058C in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804A4B8;


void sub_08050568(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[2] = 0x10;
    *param_1 = &_0804A4B8;
  }
  return;
}

