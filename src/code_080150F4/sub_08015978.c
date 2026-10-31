/* sub_08015978  (original: 0x08015978-0x0801599C in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED80();
extern int sub_0803D5B8();
extern undefined volatile _0804A7A0;


void sub_08015978(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A7A0;
    *(undefined1 *)(puVar1 + 1) = 0xc;
  }
  sub_0800ED80(uVar2,puVar1);
  return;
}

