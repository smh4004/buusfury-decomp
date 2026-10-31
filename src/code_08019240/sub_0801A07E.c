/* sub_0801A07E  (original: 0x0801A07E-0x0801A0AA in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804DC5C;


void sub_0801A07E(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DC5C;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
  }
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,puVar1);
  return;
}

