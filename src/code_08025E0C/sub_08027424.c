/* sub_08027424  (original: 0x08027424-0x08027448 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_0800ED80();
extern undefined volatile _0804AE38;


void sub_08027424(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AE38;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  sub_0800ED80(param_1,puVar1);
  *(undefined1 *)(param_1 + 8) = 0x28;
  return;
}

