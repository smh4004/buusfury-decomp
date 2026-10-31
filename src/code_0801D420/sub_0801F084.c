/* sub_0801F084  (original: 0x0801F084-0x0801F0F6 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern int sub_08040160();
extern int sub_08024120();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002f50;
extern undefined4 volatile DAT_03002f54;
extern undefined volatile _0804C5E8;
extern undefined volatile _080492EC;


void sub_0801F084(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  sub_08024120();
  uVar2 = *(undefined4 *)(param_1 + 0x118);
  puVar1 = (undefined4 *)sub_0803D5B8(0x134);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080492EC;
    *(undefined1 *)(puVar1 + 0x45) = 4;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x46] = 0;
    sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
    sub_0804912C((int)(puVar1 + 0x41),0,0x10);
    puVar1[0x49] = 0xffff;
    DAT_03002f50 = 0;
    *puVar1 = &_0804C5E8;
    puVar1[0x4b] = 0;
    DAT_03002f54 = 0;
    puVar1[0x4c] = uVar2;
  }
  sub_08040160(puVar1);
  return;
}

