/* sub_08013F7C  (original: 0x08013F7C-0x08014028 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 24% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08005FA8();
extern int sub_08005FB2();
extern int __call_via_r3();
extern ushort volatile DAT_03003306;
extern ushort volatile DAT_03003304;


undefined4 sub_08013F7C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x20) + 2);
  if (*(int *)(*(int *)(param_1 + 4) + 0x108) == param_1) {
    if ((DAT_03003306 & uVar1) == 0) {
      if ((*(int *)(param_1 + 0xc) != 0) &&
         (iVar3 = *(int *)(param_1 + 0x18) + -1, *(int *)(param_1 + 0x18) = iVar3, iVar3 == 0)) {
        if (4 < *(int *)(param_1 + 0x1c)) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) / 2;
        }
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(param_1 + 8) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
          iVar3 = **(int **)(param_1 + 4);
          __call_via_r3(*(int **)(param_1 + 4),param_1,*(undefined4 *)(param_1 + 0x14),
                        *(int *)(iVar3 + 0x20) + iVar3,param_4);
        }
      }
    }
    else {
      sub_08005FB2(param_1);
      if (*(int *)(param_1 + 8) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
        iVar3 = **(int **)(param_1 + 4);
        __call_via_r3(*(int **)(param_1 + 4),param_1,*(undefined4 *)(param_1 + 0x14),
                      *(int *)(iVar3 + 0x20) + iVar3,param_4);
      }
    }
    uVar2 = 1;
  }
  else {
    if ((DAT_03003304 & uVar1) != 0) {
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x18) = 0x10;
      *(undefined4 *)(param_1 + 0x1c) = 0x10;
      sub_08005FA8(param_1);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

