/* sub_08003072  (original: 0x08003072-0x08003096 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int sub_0803D5B8();
extern int sub_08011C0C();
extern undefined volatile _08049978;


void sub_08003072(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08011C0C(*(undefined4 *)(param_1 + 0x18),0x27,0,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049978;
    puVar1[1] = 1;
  }
  sub_0803D8A0();
  return;
}

