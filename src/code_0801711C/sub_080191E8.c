/* sub_080191E8  (original: 0x080191E8-0x0801920E in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_080190AA();
extern undefined volatile _0804B6D0;


undefined4 * sub_080191E8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080190AA(puVar1,param_1,param_2);
    *puVar1 = &_0804B6D0;
  }
  return puVar1;
}

