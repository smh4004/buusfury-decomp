/* sub_080242EC  (original: 0x080242EC-0x080243EC in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08024120();
extern int sub_08040160();
extern int sub_0804912C();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002f50;
extern undefined volatile _08049E64;
extern undefined4 volatile DAT_03002f54;
extern undefined4 volatile DAT_03002fb0;
extern undefined4 volatile DAT_03002fb4;
extern undefined volatile _080492EC;


void sub_080242EC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  sub_08024120();
  if (*(int *)(param_1 + 0x128) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x120);
    uVar3 = *(undefined4 *)(param_1 + 0x124);
    puVar1 = (undefined4 *)sub_0803D5B8(0x144);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_080492EC;
      *(undefined1 *)(puVar1 + 0x45) = 7;
      puVar1[0x47] = 0;
      puVar1[0x48] = 0;
      puVar1[0x46] = 0;
      sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
      sub_0804912C((int)(puVar1 + 0x41),0,0x10);
      puVar1[0x49] = 0xffff;
      DAT_03002f50 = 0;
      DAT_03002f54 = 0;
      *puVar1 = &_08049E64;
      puVar1[0x4e] = 0;
      DAT_03002fb0 = 0xffffffff;
      puVar1[0x4c] = uVar2;
      puVar1[0x4d] = uVar3;
      puVar1[0x4f] = 0;
      puVar1[0x50] = 0;
      DAT_03002fb4 = 0;
    }
    sub_08040160(puVar1);
  }
  else if (*(int *)(param_1 + 0x128) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x118);
    puVar1 = (undefined4 *)sub_0803D5B8(0x144);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_080492EC;
      *(undefined1 *)(puVar1 + 0x45) = 7;
      puVar1[0x47] = 0;
      puVar1[0x48] = 0;
      puVar1[0x46] = 0;
      sub_0804912C((int)(puVar1 + 0x21),-1,0x80);
      sub_0804912C((int)(puVar1 + 0x41),0,0x10);
      puVar1[0x49] = 0xffff;
      DAT_03002f50 = 0;
      DAT_03002f54 = 0;
      *puVar1 = &_08049E64;
      puVar1[0x4e] = 1;
      DAT_03002fb0 = 0xffffffff;
      puVar1[0x4b] = uVar2;
      puVar1[0x4f] = 0;
      puVar1[0x50] = 0;
      DAT_03002fb4 = 0;
    }
    sub_08040160(puVar1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}

