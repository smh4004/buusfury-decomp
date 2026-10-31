/* sub_080125FA  (original: 0x080125FA-0x08012628 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804CF94;


void sub_080125FA(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804CF94;
    puVar1[1] = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 4);
    puVar1[3] = *(undefined4 *)(param_1 + 8);
    puVar1[2] = uVar2;
  }
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  *(undefined2 *)(param_1 + 4) = 0x8000;
  *(undefined2 *)(param_1 + 6) = 0x8000;
  *(undefined2 *)(param_1 + 8) = 0x7fff;
  *(undefined2 *)(param_1 + 10) = 0x7fff;
  return;
}

