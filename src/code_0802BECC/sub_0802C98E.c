/* sub_0802C98E  (original: 0x0802C98E-0x0802C9DA in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049144();
extern undefined1 volatile REG_MOSAIC;
extern undefined2 volatile REG_BG1CNT;
extern undefined2 volatile REG_BG0CNT;
extern undefined1 volatile DAT_0400004d;
extern undefined2 volatile REG_BG3CNT;
extern undefined2 volatile REG_BG2CNT;


void sub_0802C98E(void)

{
  ushort uVar1;
  
  REG_MOSAIC = 0xff;
  DAT_0400004d = 0xff;
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 | 0x40;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 | 0x40;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 | 0x40;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 | 0x40;
  sub_08049144(0x5000000,0x805632c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}

