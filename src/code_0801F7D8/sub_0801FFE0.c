/* sub_0801FFE0  (original: 0x0801FFE0-0x0801FFF6 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08005864();
extern undefined2 volatile REG_DISPCNT;


void sub_0801FFE0(void)

{
  ushort uVar1;
  
  sub_08005864();
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xefbf;
  return;
}

