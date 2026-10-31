/* sub_080206B8  (original: 0x080206B8-0x08020768 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 89% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_08049138();
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03000f94;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile DAT_06010000;
extern undefined volatile _0804AEF8;
extern undefined volatile _08049680;
extern undefined volatile gUnknown_083192CC;


undefined4 *
sub_080206B8(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x54), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x300;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x300);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x300);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x300);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804AEF8;
    uVar2 = param_2[1];
    param_1[8] = *param_2;
    param_1[9] = uVar2;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[1] = param_2[1];
    param_1[0x14] = param_4;
    param_1[6] = 0;
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xe] = 8;
    param_1[0x10] = param_5;
    *(undefined1 *)((int)param_1 + 0x12) =
         *(undefined1 *)(param_5 + (uint)(*(byte *)(param_4 + 0x10) >> 1));
    iVar1 = *(int *)(param_5 + 8);
    param_1[0x13] = iVar1;
    param_1[0x12] = iVar1;
    param_1[0x11] = iVar1;
    param_1[5] = DAT_03000f94;
    param_1[7] = 0xffffffff;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),*(int *)(iVar1 + 8),
                 0x40);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0);
  }
  return param_1;
}

