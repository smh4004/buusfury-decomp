/* sub_0804EFDC  (original: 0x0804EFDC-0x0804EFF8 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804D504;


void sub_0804EFDC(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &_0804D504;
    puVar1[6] = 0;
  }
  return;
}

