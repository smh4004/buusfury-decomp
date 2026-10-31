/* sub_08007B78  (original: 0x08007B78-0x08007C12 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 98% of instructions covered.
 */
#include "ghidra_types.h"
extern int Wfz_LoadContainer();
extern int sub_0803D5B8();
extern undefined volatile _08049410;
extern undefined volatile gUnknown_08070808;


undefined4 * sub_08007B78(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x204c), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_08049410;
    param_1[2] = param_3;
    *(undefined1 *)(param_1 + 8) = 0xff;
    *(undefined1 *)((int)param_1 + 0x21) = 0xff;
    *(undefined1 *)((int)param_1 + 0x22) = 0xff;
    *(undefined1 *)((int)param_1 + 0x23) = 0xff;
    param_1[4] = &gUnknown_08070808;
    param_1[5] = &gUnknown_08070808;
    param_1[6] = &gUnknown_08070808;
    param_1[7] = &gUnknown_08070808;
    param_1[3] = (int)*(short *)(param_3 + 0x16);
    param_1[0xf] = *(undefined4 *)(param_3 + 4);
    param_1[0x10] = *(undefined4 *)(param_3 + 8);
    param_1[0x11] = *(undefined4 *)(param_1[2] + 0xc);
    param_1[0x12] = *(undefined4 *)(param_1[2] + 0x10);
    uVar3 = (uint)*(byte *)(param_1[2] + 0x15) * (uint)*(byte *)(param_1[2] + 0x14);
    if ((uVar3 < 5) && (iVar2 = 0, uVar3 != 0)) {
      do {
        iVar1 = *(int *)(param_1[2] + iVar2 * 4 + 0x18);
        if (iVar1 != 0) {
          *(char *)((int)param_1 + iVar2 + 0x20) = (char)iVar2;
          Wfz_LoadContainer(iVar1,param_1 + iVar2 * 0x200 + 0x13);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar3);
    }
  }
  return param_1;
}

