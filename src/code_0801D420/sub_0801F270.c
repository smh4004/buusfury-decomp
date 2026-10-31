/* sub_0801F270  (original: 0x0801F270-0x0801F2DE in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern int sub_08040160();
extern int sub_08024120();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002f50;
extern undefined4 volatile DAT_03002f54;
extern undefined volatile _0804BC30;
extern undefined volatile _080492EC;


void sub_0801F270(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  sub_08024120();
  uVar1 = *(undefined1 *)(param_1 + 0x118);
  puVar2 = (undefined4 *)sub_0803D5B8(0x130);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_080492EC;
    *(undefined1 *)(puVar2 + 0x45) = 6;
    puVar2[0x47] = 0;
    puVar2[0x48] = 0;
    puVar2[0x46] = 0;
    sub_0804912C((int)(puVar2 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar2 + 0x41),0,0x10);
    puVar2[0x49] = 0xffff;
    DAT_03002f50 = 0;
    DAT_03002f54 = 0;
    *puVar2 = &_0804BC30;
    *(undefined1 *)((int)puVar2 + 0x12e) = 0;
    *(undefined1 *)((int)puVar2 + 0x12f) = 0;
    *(undefined1 *)((int)puVar2 + 0x12d) = 0;
    *(undefined1 *)(puVar2 + 0x4b) = uVar1;
  }
  sub_08040160(puVar2);
  return;
}

