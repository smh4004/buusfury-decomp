/* sub_0802A81C  (original: 0x0802A81C-0x0802A8AA in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801124C();
extern int sub_08011732();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804CF3C;
extern undefined volatile _08049680;


undefined4 *
sub_0802A81C(undefined4 *param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x44), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)param_6;
    iVar3 = sub_0801124C(&DAT_03001c4c,param_6);
    if (iVar3 == -1) {
      sub_08011732(&DAT_03001c4c,param_6);
      iVar3 = sub_0801124C(&DAT_03001c4c,param_6);
    }
    *(short *)(param_1 + 3) = (short)iVar3;
    *param_1 = &_0804CF3C;
    uVar4 = *param_2;
    param_1[5] = param_2[1];
    param_1[4] = uVar4;
    param_1[0xd] = param_3;
    param_1[0xf] = param_4;
    param_1[0x10] = param_5;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 2) = param_7;
    param_1[1] = param_1[5];
    cVar2 = *param_3;
    param_1[8] = param_1[4] - (int)cVar2;
    iVar3 = param_1[5] - (int)param_3[1];
    param_1[9] = iVar3;
    bVar1 = param_3[2];
    param_1[0xb] = iVar3 + (uint)(byte)param_3[3];
    param_1[10] = (param_1[4] - (int)cVar2) + (uint)bVar1;
  }
  return param_1;
}

