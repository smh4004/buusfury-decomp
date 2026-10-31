/* sub_08040284  (original: 0x08040284-0x080402D6 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03000f94;


undefined4 sub_08040284(byte *param_1,ushort param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
    iVar3 = 0;
    if (param_3 != 0) {
      do {
        if (0x3f < iVar3) {
          return 0;
        }
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) {
          uVar2 = 0x3f;
        }
        if ((*(ushort *)(param_1 + uVar2 * 2 + 8) & param_2) != 0) {
          if (*(int *)(param_1 + uVar2 * 4 + 0x88) < DAT_03000f94 - param_4) {
            return 0;
          }
          param_3 = param_3 + -1;
        }
        iVar3 = iVar3 + 1;
      } while (param_3 != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

