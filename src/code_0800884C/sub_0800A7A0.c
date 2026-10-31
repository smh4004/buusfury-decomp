/* sub_0800A7A0  (original: 0x0800A7A0-0x0800A7DE in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800A278();
extern int __call_via_r2();
extern int sub_0803D5B8();
extern undefined volatile _0804D4E4;


undefined4 * sub_0800A7A0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  puVar4 = (undefined4 *)sub_0803D5B8(0x58);
  if (puVar4 != (undefined4 *)0x0) {
    sub_0800A278(puVar4,*(undefined4 *)(param_1 + 4));
    *puVar4 = &_0804D4E4;
    uVar1 = *(ushort *)(param_1 + 10);
    uVar2 = *(ushort *)(param_1 + 0xc);
    uVar3 = *(ushort *)(param_1 + 0xe);
    puVar4[0x12] = (uint)*(ushort *)(param_1 + 8);
    puVar4[0x13] = (uint)uVar1;
    puVar4[0x14] = (uint)uVar2;
    puVar4[0x15] = (uint)uVar3;
  }
  return puVar4;
}

