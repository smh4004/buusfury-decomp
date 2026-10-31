/* sub_0801FD60  (original: 0x0801FD60-0x0801FDF6 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F556();
extern int sub_0801FC7A();
extern int sub_080502FC();
extern int sub_0803D8A0();
extern int sub_08040160();
extern int sub_08005460();
extern int sub_0803D5B8();
extern int sub_0803D850();
extern int sub_08050414();
extern int sub_0801FA3C();
extern undefined volatile _0804B5AC;
extern undefined volatile _08049B5C;
extern undefined volatile _08049B2C;
extern undefined volatile _0804B604;
extern undefined volatile _0804920C;
extern undefined volatile _0804CAD4;


undefined4 sub_0801FD60(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 1) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
    if (puVar1 != (undefined4 *)0x0) {
      sub_08005460(puVar1,0x5e,0xd,1);
      *puVar1 = &_08049B2C;
      puVar1[0xbe] = 0;
    }
    sub_0803D850(puVar1);
    uVar3 = 1;
  }
  else {
    if (param_3 == 7) {
      puVar1 = (undefined4 *)sub_0803D5B8(0x11c);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
        *puVar1 = &_0804920C;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *(undefined1 *)(puVar1 + 0x45) = 0;
        *puVar1 = &_0804CAD4;
        puVar1[0x46] = param_1;
      }
      iVar2 = sub_0803D8A0();
      if (iVar2 == 2) {
        puVar1 = (undefined4 *)sub_0803D5B8(0x120);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          *puVar1 = &_0804920C;
          puVar1[0x43] = 0;
          puVar1[0x42] = 0;
          puVar1[0x44] = 0;
          *puVar1 = &_0804B604;
          puVar1[0x45] = param_1;
        }
        iVar2 = sub_0803D8A0();
        if (iVar2 == 2) {
          sub_0801F556(param_1);
          sub_080502FC(0,7);
          sub_08040160();
          puVar1 = (undefined4 *)sub_0803D5B8(0x118);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = &_0804920C;
            puVar1[0x43] = 0;
            puVar1[0x42] = 0;
            puVar1[0x44] = 0;
            *puVar1 = &_08049B5C;
            puVar1[0x45] = 0;
          }
          sub_0803D8A0();
          puVar1 = (undefined4 *)sub_0803D5B8(0x114);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = &_0804920C;
            puVar1[0x43] = 0;
            puVar1[0x42] = 0;
            puVar1[0x44] = 0;
            *puVar1 = &_0804B5AC;
          }
          sub_0803D850();
          return 1;
        }
      }
      sub_08050414(0);
      sub_08040160();
    }
    if (*(char *)(param_1 + 0x114) == '\0') {
      uVar3 = sub_0801FC7A(param_1,0,param_3);
    }
    else if (*(char *)(param_1 + 0x114) == '\x01') {
      uVar3 = sub_0801FA3C(param_1,0,param_3);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

