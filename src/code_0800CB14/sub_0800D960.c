/* sub_0800D960  (original: 0x0800D960-0x0800D9F0 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801124C();
extern int sub_08011732();
extern int sub_0803D5B8();
extern int sub_0800D918();
extern int volatile DAT_03001afc;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile _0804A85C;


undefined4 * sub_0800D960(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    iVar3 = param_2[1] * *param_2;
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)iVar3;
    iVar1 = sub_0801124C(&DAT_03001c4c,iVar3);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,iVar3);
      iVar1 = sub_0801124C(&DAT_03001c4c,iVar3);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804A85C;
    param_1[5] = param_2;
    param_1[4] = param_2[2];
    uVar2 = *param_3;
    param_1[7] = param_3[1];
    param_1[6] = uVar2;
    iVar1 = *param_2;
    param_1[9] = param_1[7] + param_2[1];
    param_1[8] = param_1[6] + iVar1;
    param_1[1] = param_1[9];
    sub_0800D918(param_1);
    DAT_03001afc = DAT_03001afc + 1;
  }
  return param_1;
}

