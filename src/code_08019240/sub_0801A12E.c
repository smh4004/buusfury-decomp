/* sub_0801A12E  (original: 0x0801A12E-0x0801A168 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804E088;


void sub_0801A12E(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e);
  puVar2 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804E088;
    puVar2[5] = (uint)bVar1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}

