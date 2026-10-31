/* sub_080204B0  (original: 0x080204B0-0x080204D0 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined2 volatile REG_DISPCNT;


void sub_080204B0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}

