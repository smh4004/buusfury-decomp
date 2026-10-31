/* sub_0800D09E  (original: 0x0800D09E-0x0800D128 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/4 snapshots, 83% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800D026();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804CDAC;
extern undefined volatile _0804BA78;
extern undefined volatile _0804E454;


undefined4 * sub_0800D09E(undefined4 *param_1,undefined4 *param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x38), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804E454;
    param_1[3] = 0;
    *param_1 = &_0804CDAC;
    param_1[8] = param_2;
    param_1[4] = param_1;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    param_1[9] = *param_2;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    param_1[0xc] = param_2[3];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1[8] + 0x16);
    param_1[1] = param_2[3];
    param_1[7] = (uint)(*(char *)(param_1[8] + 0x17) != '\0');
    *(undefined2 *)(param_1 + 5) = param_4;
    param_1[6] = 0;
    *param_1 = &_0804BA78;
    param_1[0xd] = param_3;
    if (*(short *)(param_3 + 0x16) == -1) {
      uVar1 = sub_0801124C(&DAT_03001c4c,
                           *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x34) + 0x2c) + 4));
      *(undefined2 *)(param_3 + 0x16) = uVar1;
      sub_0800D026(param_3);
    }
    *(short *)((int)param_1 + 0x16) = *(short *)(param_3 + 0x16) + *(short *)(param_1[8] + 0x14);
  }
  return param_1;
}

