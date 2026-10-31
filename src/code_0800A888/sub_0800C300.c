/* sub_0800C300  (original: 0x0800C300-0x0800C368 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0800C298();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804D878;
extern undefined volatile _08049680;


undefined4 * sub_0800C300(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x200;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x200);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804D878;
    param_1[5] = param_2;
    iVar1 = sub_08011C70(&DAT_03001c4c,8,*(undefined1 *)(param_2 + 4));
    param_1[4] = iVar1;
    param_1[1] = *(int *)(iVar1 + 4) + 1;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar1 + 8);
    sub_0800C298(param_1);
  }
  return param_1;
}

