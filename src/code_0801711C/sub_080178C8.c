/* sub_080178C8  (original: 0x080178C8-0x0801794C in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803F58C();
extern int sub_0803F9B8();
extern int Wfz_LoadContainer();
extern int sub_08011732();
extern int sub_0803F540();
extern int sub_0803D5B8();
extern int sub_0801124C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804C974;
extern undefined volatile DAT_06010000;
extern undefined volatile gUnknown_086B7E8C;
extern undefined volatile _08049680;


undefined4 * sub_080178C8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x24))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x100);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804C974;
    param_1[4] = 0;
    param_1[5] = param_2;
    sub_0803F540(auStack_48,0x10,0x10);
    Wfz_LoadContainer(&gUnknown_086B7E8C,uStack_24);
    sub_0803F9B8(auStack_48,&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20);
    param_1[1] = 1;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_0803F58C(auStack_48,0);
  }
  return param_1;
}

