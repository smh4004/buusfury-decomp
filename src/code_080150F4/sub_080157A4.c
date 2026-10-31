/* sub_080157A4  (original: 0x080157A4-0x08015882 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 22% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_080135D2();
extern ushort volatile DAT_03003304;
extern undefined1 volatile DAT_03001560;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08319488;


undefined4 sub_080157A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x130) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x10c) * 4 + param_1;
      piVar3 = (int *)(iVar2 + 0x140);
      if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
        if (*(int *)(iVar2 + 0x134) < *piVar3) {
          *piVar3 = *piVar3 + -1;
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
      }
      if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
        iVar2 = sub_080135D2(&DAT_03001560 +
                             *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc +
                                      *(int *)(param_1 + 300) + 0x54) * 0x68);
        if ((*piVar3 < iVar2) && (0 < *(int *)(param_1 + 0x150))) {
          *piVar3 = *piVar3 + 1;
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

