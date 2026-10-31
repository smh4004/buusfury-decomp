/* sub_0804E9E8  (original: 0x0804E9E8-0x0804EA0C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804BECC;


void sub_0804E9E8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BECC;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  sub_0800ED18(param_2,puVar1);
  return;
}

