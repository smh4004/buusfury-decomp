/* sub_080369B2  (original: 0x080369B2-0x080369D0 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804B080;


void sub_080369B2(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0x32;
    puVar1[1] = uVar2;
    puVar1[5] = 0;
    *puVar1 = &_0804B080;
  }
  return;
}

