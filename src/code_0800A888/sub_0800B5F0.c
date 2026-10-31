/* sub_0800B5F0  (original: 0x0800B5F0-0x0800B664 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern int sub_0803F540();
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile gUnknown_0807012C;
extern undefined volatile _08049680;
extern undefined volatile _0804B4D8;


undefined4 * sub_0800B5F0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x200;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x200);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804B4D8;
    sub_0803F540(param_1 + 6,0x20,0x10);
    param_1[4] = 0xffffffff;
    param_1[5] = param_2;
    param_1[9] = &gUnknown_0807012C;
    *(undefined1 *)((int)param_1 + 0x1b) = 2;
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    param_1[0xe] = 0x803f70d;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return param_1;
}

