/* sub_08038886  (original: 0x08038886-0x0803893E in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_0801124C();
extern int sub_08011732();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;
extern undefined volatile _08049680;
extern undefined volatile gUnknown_08770D0C;
extern undefined volatile _0804DD6C;


undefined4 * sub_08038886(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x40), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x600;
    uVar2 = sub_0801124C(&DAT_03001c4c,0x600);
    if (uVar2 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x600);
      uVar2 = sub_0801124C(&DAT_03001c4c,0x600);
    }
    *(short *)(param_1 + 3) = (short)uVar2;
    *param_1 = &_0804DD6C;
    iVar4 = *param_2;
    iVar3 = param_2[1];
    param_1[5] = iVar3;
    param_1[4] = iVar4;
    param_1[0xf] = 0;
    param_1[0xd] = param_3;
    bVar1 = *(byte *)(param_3 + 0x10);
    param_1[0xe] = (uint)bVar1;
    param_1[0xb] = &gUnknown_08770D0C + (uint)bVar1 * 0x3c;
    param_1[0xc] = &gUnknown_08770D0C + (uint)bVar1 * 0x3c;
    param_1[10] = 0;
    param_1[6] = iVar4 + -0x10;
    param_1[7] = iVar3 + -0x10;
    param_1[1] = iVar3;
    param_1[8] = iVar4 + 0x10;
    param_1[9] = iVar3 + 0x10;
    *(undefined1 *)(param_1 + 2) = 0x37;
    sub_08049138((int)(&DAT_06010000 + (uVar2 & 0xffff) * 0x20),0x876e2f4,0x400);
    sub_08049138((uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010400,*(int *)(param_1[0xb] + 8),0x200)
    ;
  }
  return param_1;
}

