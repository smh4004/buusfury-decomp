/* sub_0800BF34  (original: 0x0800BF34-0x0800BF94 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 83% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800BE90();
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804B528;
extern undefined volatile _08049680;


undefined4 *
sub_0800BF34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0xf00;
    iVar1 = sub_0801124C(&DAT_03001c4c,0xf00);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0xf00,param_3,0,param_4);
      iVar1 = sub_0801124C(&DAT_03001c4c,0xf00);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804B528;
    param_1[5] = param_2;
    *(undefined1 *)(param_1 + 2) = 0x10;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0xf0;
    sub_0800BE90(param_1);
  }
  return param_1;
}

