/* sub_0802B9A8  (original: 0x0802B9A8-0x0802BA18 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801124C();
extern int sub_08011732();
extern int sub_08049138();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;
extern undefined volatile _0804B400;
extern undefined volatile _08049680;


undefined4 * sub_0802B9A8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0xa0), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0x700;
  iVar1 = sub_0801124C(&DAT_03001c4c,0x700);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0x700);
    iVar1 = sub_0801124C(&DAT_03001c4c,0x700);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804B400;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 2) = 0x10;
  param_1[1] = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined1 *)((int)param_1 + iVar1 + 0x10) = 0xff;
    iVar1 = iVar2;
  } while (iVar2 < 5);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),0x8753008,0x400);
  return param_1;
}

