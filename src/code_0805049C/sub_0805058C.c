/* sub_0805058C  (original: 0x0805058C-0x080505B0 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804A920;


void sub_0805058C(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0x100;
    param_1[2] = 0x10;
    *param_1 = &_0804A920;
  }
  return;
}

