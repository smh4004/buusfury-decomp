/* sub_0803F07C  (original: 0x0803F07C-0x0803F0E6 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 16% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803EFD0();
extern int sub_0803E152();


void sub_0803F07C(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    while (uVar1 = (uint)*(ushort *)(param_1 + 8), (int)uVar1 < param_3) {
      if (uVar1 != 0) {
        iVar2 = 0;
        do {
          sub_0803E152(iVar2 * 0x60 + param_1 + 0x18,param_2,uVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xf);
        param_2 = (uint)*(ushort *)(param_1 + 8) * 4 + param_2;
        param_3 = param_3 - (uint)*(ushort *)(param_1 + 8);
      }
      sub_0803EFD0(param_1);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 6);
    }
    iVar2 = 0;
    do {
      sub_0803E152(iVar2 * 0x60 + param_1 + 0x18,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xf);
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - (short)param_3;
  }
  return;
}

