/* sub_08026DE4  (original: 0x08026DE4-0x08026E6A in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 73% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_08049138();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;
extern undefined volatile _0804D634;
extern undefined volatile _08049680;


undefined4 * sub_08026DE4(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x40;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x40);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x40);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804D634;
    uVar2 = param_2[1];
    uVar3 = *param_2;
    param_1[8] = uVar2;
    param_1[7] = uVar3;
    param_1[4] = param_3;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 2) = 0x37;
    param_1[1] = uVar2;
    if (param_3 == 0) {
      sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x874cfac,0x40);
    }
    else {
      sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x874cf2c,0x40);
    }
  }
  return param_1;
}

