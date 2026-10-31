/* sub_0801E84A  (original: 0x0801E84A-0x0801E970 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_0804019A();
extern int sub_080502FC();
extern int sub_0803D8A0();
extern int sub_08005460();
extern int sub_08040160();
extern int sub_0803D5B8();
extern int sub_0803D850();
extern undefined volatile _0804AEBC;
extern undefined4 volatile DAT_03002bd4;
extern undefined volatile DAT_03003e5c;
extern undefined volatile _08049B2C;
extern undefined volatile _0804920C;
extern undefined volatile gUnknown_08319488;


undefined4 sub_0801E84A(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *(undefined1 *)(puVar1 + 0x45) = 0;
      *puVar1 = &_0804AEBC;
      puVar1[0x46] = 0;
      *(undefined1 *)(puVar1 + 0x47) = 2;
    }
    iVar2 = sub_0803D8A0();
    if (iVar2 == 2) {
      sub_0804019A(&DAT_03002bd4);
      puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
      if (puVar1 != (undefined4 *)0x0) {
        sub_08005460(puVar1,0x5e,0xd,1);
        *puVar1 = &_08049B2C;
        puVar1[0xbe] = 1;
      }
      sub_0803D850(puVar1);
      return 1;
    }
    sub_080502FC(0,0);
    sub_08040160();
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    puVar1 = (undefined4 *)sub_0803D5B8(0x120);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *(undefined1 *)(puVar1 + 0x45) = 0;
      *puVar1 = &_0804AEBC;
      puVar1[0x46] = 0;
      *(undefined1 *)(puVar1 + 0x47) = 1;
    }
    iVar2 = sub_0803D8A0();
    if (iVar2 == 2) {
      sub_0804019A(&DAT_03002bd4);
      puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
      if (puVar1 != (undefined4 *)0x0) {
        sub_08005460(puVar1,0x5e,0xd,1);
        *puVar1 = &_08049B2C;
        puVar1[0xbe] = 0;
      }
      sub_0803D850(puVar1);
      return 1;
    }
    sub_080502FC(0,0);
    sub_08040160();
  }
  return 0;
}

