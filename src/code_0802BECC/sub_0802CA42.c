/* sub_0802CA42  (original: 0x0802CA42-0x0802CA72 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile REG_MOSAIC;
extern undefined2 volatile REG_BG1CNT;
extern undefined2 volatile REG_BG0CNT;
extern undefined1 volatile DAT_0400004d;
extern undefined2 volatile REG_BG3CNT;
extern undefined2 volatile REG_BG2CNT;


void sub_0802CA42(void)

{
  ushort uVar1;
  
  REG_MOSAIC = 0;
  DAT_0400004d = 0;
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 | 0x40;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 | 0x40;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 | 0x40;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 | 0x40;
  return;
}

