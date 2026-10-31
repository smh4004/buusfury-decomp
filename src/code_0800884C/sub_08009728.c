/* sub_08009728  (original: 0x08009728-0x08009744 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_04000053;
extern undefined1 volatile REG_BLDALPHA;


void sub_08009728(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(param_2 * 0x290 >> 0xc);
  *(undefined1 *)(param_1 + 0xa1) = uVar1;
  *(undefined1 *)(param_1 + 0xa0) = (char)(param_3 * 0x290 >> 0xc);
  REG_BLDALPHA = uVar1;
  DAT_04000053 = *(undefined1 *)(param_1 + 0xa0);
  return;
}

