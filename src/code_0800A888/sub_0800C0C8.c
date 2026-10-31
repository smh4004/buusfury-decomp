/* sub_0800C0C8  (original: 0x0800C0C8-0x0800C144 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern int sub_0803F540();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile gUnknown_0806E050;
extern undefined volatile _0804D8C8;


undefined4 * sub_0800C0C8(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x50), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0xf00;
  iVar1 = sub_0801124C(&DAT_03001c4c,0xf00);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0xf00);
    iVar1 = sub_0801124C(&DAT_03001c4c,0xf00);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804D8C8;
  sub_0803F540(param_1 + 7,0xf0,0x10);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0x11;
  param_1[10] = &gUnknown_0806E050;
  param_1[8] = 0x78;
  param_1[9] = 0xb;
  *(undefined1 *)((int)param_1 + 0x1f) = 2;
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  param_1[0xf] = 0x803f5a5;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}

