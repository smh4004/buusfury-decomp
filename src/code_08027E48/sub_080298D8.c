/* sub_080298D8  (original: 0x080298D8-0x08029902 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int sub_0800ECDA();
extern undefined volatile _0804C314;


void sub_080298D8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 3;
    *puVar1 = &_0804C314;
  }
  sub_0800ECDA(param_2,1);
  sub_0800ED18(param_2,puVar1);
  return;
}

