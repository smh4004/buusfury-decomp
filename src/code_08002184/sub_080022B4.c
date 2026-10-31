/* sub_080022B4  (original: 0x080022B4-0x080022E6 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int sub_080091B8();
extern int sub_0803D5B8();
extern int sub_08050714();
extern undefined1 volatile DAT_0300197c;
extern undefined volatile _0804C588;


void sub_080022B4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08050714(0,0x10,param_3,param_4,param_4);
  sub_0803D8A0();
  sub_080091B8(&DAT_0300197c);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C588;
    puVar1[2] = 0x10;
    puVar1[1] = 0;
  }
  sub_0803D8A0();
  return;
}

