/* sub_0800A278  (original: 0x0800A278-0x0800A2A8 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern undefined volatile _08049ECC;


undefined4 * sub_0800A278(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  *param_1 = &_08049ECC;
  uVar1 = param_2 * 0x20 + 0x7ffU & 0xfffff800;
  *(char *)((int)param_1 + 5) = (char)(uVar1 >> 8);
  param_1[5] = param_2;
  uVar2 = __16__rt_sdiv(param_2,uVar1 + param_2 + -1,param_3,param_4,param_4);
  param_1[3] = uVar2;
  param_1[2] = 0;
  param_1[4] = param_2 << 4;
  return param_1;
}

