/* sub_080096AC  (original: 0x080096AC-0x080096C4 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_DISPCNT;


void sub_080096AC(int param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xa2) | (ushort)(0x100 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0xa2) = uVar1;
  REG_DISPCNT = uVar1;
  return;
}

