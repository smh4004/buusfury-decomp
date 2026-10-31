/* sub_08028144  (original: 0x08028144-0x0802821A in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DADA();
extern int sub_08011732();
extern int sub_08027E48();
extern int sub_0801124C();
extern int Wfz_LoadContainer();
extern int sub_08049138();
extern int sub_0803D5B8();
extern int sub_0803F540();
extern int sub_0803FACC();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile gUnknown_08071758;
extern undefined volatile gUnknown_082B9BA0;
extern undefined volatile _0804C9C8;


undefined4 * sub_08028144(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x9c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x2800;
    iVar2 = sub_0801124C(&DAT_03001c4c,0x2800);
    if (iVar2 == -1) {
      sub_08011732(&DAT_03001c4c,0x2800);
      iVar2 = sub_0801124C(&DAT_03001c4c,0x2800);
    }
    *(short *)(param_1 + 3) = (short)iVar2;
    *param_1 = &_0804C9C8;
    puVar3 = param_1 + 0xd;
    sub_0803F540(puVar3,0xa0,0x40);
    sub_0803F540(param_1 + 0x1a,0xa0,0x40);
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    param_1[8] = (8 - param_2) * 3;
    param_1[5] = 0;
    param_1[0xc] = 0x802812d;
    Wfz_LoadContainer(&gUnknown_08071758,param_1[0x23]);
    sub_08049138(param_1[0x16],param_1[0x23],0x2800);
    sub_08027E48(param_1);
    iVar2 = 0;
    do {
      uVar1 = sub_0803FACC(6);
      iVar4 = iVar2 + 1;
      *(undefined1 *)((int)param_1 + iVar2 + 0x24) = uVar1;
      iVar2 = iVar4;
    } while (iVar4 < 5);
    *(undefined1 *)((int)param_1 + 0x37) = 2;
    *(undefined1 *)((int)param_1 + 0x36) = 1;
    param_1[0x15] = 0x803f70d;
    *(undefined1 *)puVar3 = 1;
    param_1[0x10] = &gUnknown_082B9BA0;
    param_1[0xe] = 0x50;
    param_1[0xf] = 0x1c;
    sub_0803DADA(puVar3,L"Watch This!");
  }
  return param_1;
}

