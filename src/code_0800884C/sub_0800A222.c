/* sub_0800A222  (original: 0x0800A222-0x0800A268 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 79% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803D5B8();
extern undefined volatile _0804D4D4;


undefined4 * sub_0800A222(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  if (iVar2 == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 6);
  sVar1 = *(short *)(param_1 + 4);
  puVar3 = (undefined4 *)sub_0803D5B8(8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_0804D4D4;
    puVar3[1] = (int)sVar1;
  }
  return puVar3;
}

