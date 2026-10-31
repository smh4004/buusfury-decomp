/* sub_0803EE84  (original: 0x0803EE84-0x0803EEC8 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 45% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gUnknown_087B6904;


void sub_0803EE84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x4a) >> 2;
  *(byte *)(param_1 + 0x4a) = bVar1 << 2;
  if (((int)((uint)bVar1 << 0x1f) < 0) && (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x40))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x40);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  if (*(byte *)(param_1 + 0x58) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x5d);
    if ((*(byte *)(param_1 + 0x58) & 0x88) == 0) {
      uVar2 = 0;
    }
    __call_via_r1(param_1,(&gUnknown_087B6904)[uVar2],&gUnknown_087B6904,0x88,param_4);
  }
  return;
}

