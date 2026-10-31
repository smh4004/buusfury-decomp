/* sub_08024574  (original: 0x08024574-0x080245D0 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08024120();
extern int sub_08040160();
extern int sub_0804912C();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002f50;
extern undefined4 volatile DAT_03002f54;
extern undefined volatile _0804A1F4;
extern undefined volatile _080492EC;


void sub_08024574(void)

{
  undefined4 *puVar1;
  
  sub_08024120();
  puVar1 = (undefined4 *)sub_0803D5B8(300);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080492EC;
    *(undefined1 *)(puVar1 + 0x45) = 5;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x46] = 0;
    sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar1 + 0x41),0,0x10);
    puVar1[0x49] = 0xffff;
    DAT_03002f50 = 0;
    *puVar1 = &_0804A1F4;
    DAT_03002f54 = 0;
  }
  sub_08040160(puVar1);
  return;
}

