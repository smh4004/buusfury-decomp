/* sub_08023AAA  (original: 0x08023AAA-0x08023C20 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046FF4();
extern int sub_08004838();
extern int sub_080503A4();
extern int sub_0803D8A0();
extern int sub_08040160();
extern int sub_08005460();
extern int sub_0803D5B8();
extern int sub_0803D850();
extern undefined1 volatile DAT_03002f58;
extern int volatile DAT_03002f5c;
extern undefined volatile _08049B2C;
extern undefined volatile _0804920C;
extern undefined volatile _0804B550;
extern undefined volatile _0804CAA8;


undefined4 sub_08023AAA(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10c)) {
    case 0:
    case 1:
      *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x38) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x38) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10c) * 4 + param_1 + 0x114) + 0x38) = 1;
      DAT_03002f58 = *(int *)(param_1 + 0x10c) == 0;
      break;
    case 2:
    case 4:
    case 6:
      *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x38) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x38) = 0;
      *(undefined4 *)(*(int *)(param_1 + 300) + 0x38) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10c) * 4 + param_1 + 0x114) + 0x38) = 1;
      DAT_03002f5c = *(int *)(param_1 + 0x10c) + -2;
      break;
    case 9:
      puVar1 = (undefined4 *)sub_0803D5B8(0x11c);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *(undefined1 *)(puVar1 + 0x45) = 0;
        *puVar1 = &_0804B550;
        puVar1[0x46] = 0;
      }
      iVar2 = sub_0803D8A0();
      if (iVar2 != 2) {
        sub_080503A4(0);
        sub_08040160();
        return 0;
      }
      puVar1 = (undefined4 *)sub_0803D5B8(0xf6c);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *puVar1 = &_0804CAA8;
        puVar1[0x65] = 0;
        puVar1[0x161] = 0;
        sub_08004838(puVar1 + 0x17d);
        sub_08046FF4((int)puVar1 + 0xeca,(int)puVar1 + 0xed6,2,0x8050869);
        sub_08046FF4(puVar1 + 0x3b6,puVar1 + 0x3ba,4,0x8050535);
        sub_08046FF4((int)puVar1 + 0xf32,(int)puVar1 + 0xf3e,2,0x8050869);
        sub_08046FF4(puVar1 + 0x3d0,puVar1 + 0x3d4,4,0x8050535);
      }
      sub_0803D850(puVar1);
      return 1;
    }
  }
  else if (param_3 == 1) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
    if (puVar1 != (undefined4 *)0x0) {
      sub_08005460(puVar1,0x5e,0xd,1,param_4);
      *puVar1 = &_08049B2C;
      puVar1[0xbe] = 1;
    }
    sub_0803D850(puVar1);
    return 1;
  }
  return 0;
}

