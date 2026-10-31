/* sub_08019F14  (original: 0x08019F14-0x08019F4A in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804E2D8;


void sub_08019F14(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804E2D8;
    puVar2[3] = (uint)bVar1;
    puVar2[1] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}

