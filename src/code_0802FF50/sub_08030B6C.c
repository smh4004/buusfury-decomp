/* sub_08030B6C  (original: 0x08030B6C-0x08030BF4 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern int volatile DAT_03002a60;
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03001c4c;


undefined4 sub_08030B6C(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = (uint)DAT_03003304;
  iVar3 = param_4;
  if (iVar2 != 0) {
    if (((int)(uVar1 << 0x19) < 0) && (DAT_03002a60 = DAT_03002a60 + -1, DAT_03002a60 < 0)) {
      DAT_03002a60 = iVar2 + -1;
    }
    iVar3 = -((int)(uVar1 << 0x18) >> 0x1f);
    if (iVar3 != 0) {
      iVar3 = DAT_03002a60 + 1;
      DAT_03002a60 = iVar3;
      if (iVar2 <= iVar3) {
        iVar2 = 0;
        DAT_03002a60 = 0;
      }
    }
  }
  if ((int)(uVar1 << 0x1e) < 0) {
    DAT_03002a60 = -1;
    if (*(int *)(param_1 + 0x54) != 0) {
      sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x54),iVar2,iVar3,param_4);
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0x8030b21;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0x8030b25;
    }
  }
  if ((DAT_03003304 & 1) != 0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x54));
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0x8030b21;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0x8030b25;
    }
  }
  return 0;
}

