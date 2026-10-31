/* sub_08020332  (original: 0x08020332-0x080203DE in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int sub_08004DC0();
extern int sub_0803D5B8();
extern int sub_080058AC();
extern int sub_0803D850();
extern int volatile DAT_03002f50;
extern undefined volatile _0804B5AC;
extern undefined volatile _0804BB48;
extern undefined volatile _0804920C;


undefined4 sub_08020332(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_03002f50 == 0) {
    iVar3 = sub_08004DC0(param_1 + 300);
    if (iVar3 == 0) {
      sub_080058AC(param_1);
      puVar1 = (undefined4 *)sub_0803D5B8(0x118);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *puVar1 = &_0804BB48;
        *(undefined1 *)(puVar1 + 0x45) = 2;
      }
      sub_0803D8A0();
      puVar1 = (undefined4 *)sub_0803D5B8(0x114);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *puVar1 = &_0804B5AC;
      }
      sub_0803D850();
      uVar2 = 0;
    }
    else {
      uVar2 = sub_080058AC(param_1);
    }
  }
  else {
    DAT_03002f50 = 0;
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    uVar2 = 0;
  }
  return uVar2;
}

