/* sub_0800B32C  (original: 0x0800B32C-0x0800B354 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 68% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined4 volatile DAT_03002a60;
extern ushort volatile DAT_03003304;


void sub_0800B32C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = -((int)((uint)DAT_03003304 << 0x1e) >> 0x1f);
  puVar2 = param_4;
  if (iVar1 != 0) {
    puVar2 = &DAT_03002a60;
    DAT_03002a60 = 0xffffffff;
    iVar1 = 0x800ae65;
    *(undefined4 *)(param_1 + 0xb4) = 0x800ae65;
  }
  __call_via_r1(param_1,*(undefined4 *)(param_1 + 0xb4),iVar1,puVar2,param_4);
  return;
}

