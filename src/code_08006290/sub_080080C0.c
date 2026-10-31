/* sub_080080C0  (original: 0x080080C0-0x08008174 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int Wfz_LoadContainer();
extern int sub_08046FF4();
extern int sub_0803D5B8();
extern undefined2 volatile DAT_04000022;
extern undefined4 volatile DAT_03000fb4;
extern undefined2 volatile REG_IE;
extern undefined volatile gUnknown_08071020;
extern undefined2 volatile DAT_04000026;
extern undefined volatile _08049C84;


undefined4 * sub_080080C0(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x27a0), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049C84;
    sub_08046FF4(param_1 + 0x18,param_1 + 0x80,4,0x8050525);
    sub_08046FF4(param_1 + 0x80,param_1 + 0xe8,4,0x8050525);
    param_1[1] = param_2;
    param_1[0x17] = 0;
    iVar3 = 0;
    do {
      param_1[iVar3 + 0xb] = 0xff;
      iVar2 = iVar3 + 1;
      param_1[iVar3 + 2] = &gUnknown_08071020;
      iVar3 = iVar2;
    } while (iVar2 < 9);
    uVar4 = (uint)*(byte *)(param_1[1] + 5) * (uint)*(byte *)(param_1[1] + 4);
    if ((uVar4 < 10) && (iVar3 = 0, uVar4 != 0)) {
      do {
        iVar2 = *(int *)(param_1[1] + iVar3 * 4 + 8);
        if (iVar2 != 0) {
          param_1[iVar3 + 0xb] = iVar3;
          Wfz_LoadContainer(iVar2,param_1 + iVar3 * 0x100 + 0xe8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar4);
    }
    DAT_03000fb4 = 0x8008099;
    uVar1 = REG_IE;
    REG_IE = uVar1 | 2;
    DAT_04000022 = 0;
    DAT_04000026 = 0;
  }
  return param_1;
}

