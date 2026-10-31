/* sub_08031D94  (original: 0x08031D94-0x08031E46 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern undefined volatile gUnknown_08319470;
extern ushort volatile DAT_03003304;
extern int volatile DAT_0300155c;
extern undefined volatile DAT_03003179;
extern undefined volatile DAT_0300317c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0831947C;


undefined4 sub_08031D94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
    if (*(int *)(param_1 + 0x11c) < 2) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0,param_4);
    }
    else {
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + -1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    iVar1 = *(int *)(param_1 + 0x114) * 8;
    iVar2 = *(int *)(param_1 + 0x11c) + 1;
    if ((DAT_0300155c < *(int *)(&DAT_0300317c + iVar1) * iVar2) ||
       (((byte)(&DAT_03003179)[iVar1] != 0 &&
        ((int)(uint)(byte)(&DAT_03003179)[iVar1] <= *(int *)(param_1 + 0x11c))))) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0,param_4);
    }
    else {
      *(int *)(param_1 + 0x11c) = iVar2;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  return 0;
}

