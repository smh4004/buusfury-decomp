/* sub_08008174  (original: 0x08008174-0x08008192 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804E47C;
extern undefined2 volatile REG_IE;
extern undefined volatile _08049C84;


void sub_08008174(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  
  *param_1 = &_08049C84;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xfffd;
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

