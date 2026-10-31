/* sub_08024048  (original: 0x08024048-0x080240B0 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08024120();
extern int sub_08040160();
extern int sub_0804912C();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002f50;
extern undefined4 volatile DAT_03002f54;
extern undefined volatile _08049A9C;
extern undefined volatile _080492EC;


void sub_08024048(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  sub_08024120();
  uVar1 = *(undefined1 *)(param_1 + 0x11c);
  puVar2 = (undefined4 *)sub_0803D5B8(0x134);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_080492EC;
    *(undefined1 *)(puVar2 + 0x45) = uVar1;
    puVar2[0x47] = 0;
    puVar2[0x48] = 0;
    puVar2[0x46] = 0;
    sub_0804912C((int)(puVar2 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar2 + 0x41),0,0x10);
    puVar2[0x49] = 0xffff;
    DAT_03002f50 = 0;
    DAT_03002f54 = 0;
    *puVar2 = &_08049A9C;
    puVar2[0x4b] = 0;
    *(undefined1 *)(puVar2 + 0x4c) = uVar1;
  }
  sub_08040160(puVar2);
  return;
}

