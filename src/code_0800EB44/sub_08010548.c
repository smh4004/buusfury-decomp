/* sub_08010548  (original: 0x08010548-0x0801056C in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804D038;


void sub_08010548(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D038;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
  }
  sub_0800ED18(param_1,puVar1);
  return;
}

