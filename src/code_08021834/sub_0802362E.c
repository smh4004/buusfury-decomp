/* sub_0802362E  (original: 0x0802362E-0x08023770 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080067F4();
extern int sub_08011A1E();
extern int sub_0801157E();
extern int sub_08046FF4();
extern int sub_08004838();
extern int sub_080115B0();
extern int sub_0803D8A0();
extern int sub_08005460();
extern int sub_08011B04();
extern int sub_0803D5B8();
extern int sub_0803D850();
extern int volatile DAT_03002f50;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049B2C;
extern undefined2 volatile REG_DISPCNT;
extern undefined volatile _0804920C;
extern undefined volatile _0804B550;
extern undefined volatile _0804CAA8;


undefined4 sub_0802362E(undefined4 param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  sub_0801157E(&DAT_03001c4c);
  sub_08011A1E(&DAT_03001c4c);
  if (DAT_03002f50 == 0) {
    uVar4 = sub_080067F4(param_1);
  }
  else {
    DAT_03002f50 = 0;
    sub_08011B04(&DAT_03001c4c);
    sub_080115B0(&DAT_03001c4c);
    sub_0801157E(&DAT_03001c4c);
    uVar1 = REG_DISPCNT;
    REG_DISPCNT = uVar1 & 0xfeff;
    puVar2 = (undefined4 *)sub_0803D5B8(0x11c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804920C;
      puVar2[1] = 0;
      puVar2[0x43] = 0;
      puVar2[0x42] = 0;
      puVar2[0x44] = 0;
      *(undefined1 *)(puVar2 + 0x45) = 0;
      *puVar2 = &_0804B550;
      puVar2[0x46] = 0;
    }
    iVar3 = sub_0803D8A0();
    if (iVar3 == 2) {
      puVar2 = (undefined4 *)sub_0803D5B8(0xf6c);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804CAA8;
        puVar2[0x65] = 0;
        puVar2[0x161] = 0;
        sub_08004838(puVar2 + 0x17d);
        sub_08046FF4((int)puVar2 + 0xeca,(int)puVar2 + 0xed6,2,0x8050869);
        sub_08046FF4(puVar2 + 0x3b6,puVar2 + 0x3ba,4,0x8050535);
        sub_08046FF4((int)puVar2 + 0xf32,(int)puVar2 + 0xf3e,2,0x8050869);
        sub_08046FF4(puVar2 + 0x3d0,puVar2 + 0x3d4,4,0x8050535);
      }
      sub_0803D850(puVar2);
      uVar4 = 0;
    }
    else {
      uVar1 = REG_DISPCNT;
      REG_DISPCNT = uVar1 | 0x1100;
      puVar2 = (undefined4 *)sub_0803D5B8(0x2fc);
      if (puVar2 != (undefined4 *)0x0) {
        sub_08005460(puVar2,0x5e,0xd,1);
        *puVar2 = &_08049B2C;
        puVar2[0xbe] = 1;
      }
      sub_0803D850(puVar2);
      uVar4 = 0;
    }
  }
  return uVar4;
}

