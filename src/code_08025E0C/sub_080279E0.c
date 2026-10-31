/* sub_080279E0  (original: 0x080279E0-0x08027A74 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_08049138();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03001a38;
extern undefined4 volatile DAT_03001a3c;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;
extern undefined volatile _08049680;
extern undefined volatile _0804D8A0;


undefined4 * sub_080279E0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x40;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x40);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804D8A0;
    param_1[4] = *param_2 + -8;
    param_1[5] = param_2[1] + -8;
    uVar2 = __16__rt_sdiv(DAT_03001a38,(param_2[2] - *param_2) * 0x400000);
    param_1[6] = uVar2;
    uVar2 = __16__rt_sdiv(DAT_03001a3c,(param_2[3] - param_2[1]) * 0x400000);
    param_1[7] = uVar2;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x874ea00,0x40);
  }
  return param_1;
}

