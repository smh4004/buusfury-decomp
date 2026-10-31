/* sub_0800EB60  (original: 0x0800EB60-0x0800EC34 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 87% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08013E38();
extern int sub_0804E490();
extern int sub_0801124C();
extern int sub_08011732();
extern int sub_0803D5B8();
extern int __call_via_r2();
extern undefined4 volatile DAT_03001ba4;
extern undefined volatile DAT_03001ba8;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804AC20;
extern undefined volatile gUnknown_080725F0;
extern undefined volatile _08049680;


undefined4 * sub_0800EB60(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18c), param_1 != (undefined4 *)0x0)) {
    uVar1 = *(undefined2 *)(param_2 + 2);
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = uVar1;
    iVar2 = sub_0801124C(&DAT_03001c4c,uVar1);
    if (iVar2 == -1) {
      sub_08011732(&DAT_03001c4c,uVar1);
      iVar2 = sub_0801124C(&DAT_03001c4c,uVar1);
    }
    *(short *)(param_1 + 3) = (short)iVar2;
    *param_1 = &_0804AC20;
    param_1[5] = param_3;
    param_1[0x16] = param_2;
    param_1[9] = 0;
    param_1[0x13] = 0;
    if (*(undefined4 **)(param_2 + 0x50) != (undefined4 *)0x0) {
      param_1[0x13] = **(undefined4 **)(param_2 + 0x50);
      sub_0804E490(&DAT_03001ba8,&gUnknown_080725F0,0x80);
    }
    param_1[0x14] = *(undefined4 *)(param_2 + 0x54);
    *(undefined2 *)(param_1 + 0x5d) = 0;
    *(undefined2 *)((int)param_1 + 0x176) = 0;
    param_1[0x60] = 0;
    param_1[6] = &DAT_03001ba4;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    iVar2 = param_1[0x16];
    param_1[0xd] = *(undefined4 *)(iVar2 + 4);
    param_1[0xf] = *(undefined4 *)(iVar2 + 4);
    *(undefined1 *)(param_1 + 4) = 0;
    uVar3 = sub_0803D5B8(*(undefined2 *)(iVar2 + 2));
    param_1[0x10] = uVar3;
    iVar2 = sub_08013E38(*(undefined1 *)(param_1[0x16] + 10),*(undefined1 *)(param_1[0x16] + 0xb));
    param_1[0x17] = iVar2;
    if (iVar2 != 0) {
      sub_0804E490(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2))
      ;
    }
    piVar4 = *(int **)param_1[5];
    __call_via_r2((int *)param_1[5],param_1,*piVar4 + (int)piVar4);
  }
  return param_1;
}

