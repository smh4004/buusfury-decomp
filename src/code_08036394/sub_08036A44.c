/* sub_08036A44  (original: 0x08036A44-0x08036AC2 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801124C();
extern int sub_08011732();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile _0804AF50;
extern undefined1 volatile gUnknown_0875F7AC;


undefined4 * sub_08036A44(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x3c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x1000;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x1000);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x1000);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x1000);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804AF50;
    uVar2 = *param_2;
    iVar1 = param_2[1];
    param_1[0xe] = &gUnknown_0875F7AC;
    param_1[4] = uVar2;
    param_1[5] = iVar1;
    *(undefined1 *)(param_1 + 2) = 0x3c;
    param_1[0xc] = 0;
    param_1[1] = iVar1;
    param_1[0xd] = 0;
    param_1[8] = param_1[4];
    param_1[9] = iVar1;
    param_1[0xb] = iVar1 + 0x40;
    param_1[10] = param_1[4] + 0x40;
  }
  return param_1;
}

