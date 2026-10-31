/* sub_0803643C  (original: 0x0803643C-0x080364C6 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_0801124C();
extern int sub_08011732();
extern int sub_0803D5B8();
extern undefined volatile _0804BAF4;
extern int volatile DAT_03002a64;
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002a68;
extern undefined volatile DAT_06010000;
extern undefined volatile _08049680;


undefined4 * sub_0803643C(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x9c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0xf40;
    uVar1 = sub_0801124C(&DAT_03001c4c,0xf40);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0xf40);
      uVar1 = sub_0801124C(&DAT_03001c4c,0xf40);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804BAF4;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 2) = 0x11;
    param_1[4] = (&DAT_03002a68)[(DAT_03002a64 - param_2) + -1];
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x875a750,0x40);
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      param_1[iVar2 + 6] = 0xffffffff;
      iVar2 = iVar3;
    } while (iVar3 < 0x20);
    param_1[0x26] = 0xffffffff;
  }
  return param_1;
}

