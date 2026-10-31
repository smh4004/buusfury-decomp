/* sub_0802C93E  (original: 0x0802C93E-0x0802C964 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_BG1CNT;
extern undefined2 volatile REG_BG0CNT;
extern undefined2 volatile REG_BG3CNT;
extern undefined2 volatile REG_BG2CNT;


void sub_0802C93E(void)

{
  ushort uVar1;
  
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 & 0xffbf;
  return;
}

