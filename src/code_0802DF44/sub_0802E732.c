/* sub_0802E732  (original: 0x0802E732-0x0802E7AA in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0803F540();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804A394;
extern undefined4 volatile gUnknown_0807012C;
extern undefined volatile _08049680;


undefined4 * sub_0802E732(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0x200;
  iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0x200);
    iVar1 = sub_0801124C(&DAT_03001c4c,0x200);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804A394;
  sub_0803F540(param_1 + 4,0x20);
  param_1[7] = &gUnknown_0807012C;
  *(undefined1 *)((int)param_1 + 0x13) = 2;
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  param_1[0xc] = 0x803f5a5;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0x78;
  param_1[6] = 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0x7fffffff;
  param_1[0x11] = 0;
  return param_1;
}

