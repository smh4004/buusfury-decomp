/* sub_0800ABC8  (original: 0x0800ABC8-0x0800AC40 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800AB54();
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804C904;
extern undefined volatile _08049680;


undefined4 *
sub_0800ABC8(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x28), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x100);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804C904;
    param_1[5] = *param_3;
    param_1[6] = param_4;
    param_1[7] = param_5;
    iVar1 = param_2[1];
    param_1[8] = (*param_2 + -0x10) * 8;
    param_1[9] = iVar1 << 3;
    sub_0800AB54(param_1);
  }
  return param_1;
}

