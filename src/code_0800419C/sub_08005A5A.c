/* sub_08005A5A  (original: 0x08005A5A-0x08005ABE in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0800664E();
extern int sub_08013E64();
extern int sub_08005740();
extern undefined2 volatile REG_DISPCNT;


void sub_08005A5A(undefined4 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  sub_08005740();
  uVar2 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar2);
  uVar2 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar2);
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x1040;
  return;
}

