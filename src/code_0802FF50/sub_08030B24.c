/* sub_08030B24  (original: 0x08030B24-0x08030B46 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_04000053;
extern undefined1 volatile REG_BLDALPHA;


bool sub_08030B24(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58) + -1;
  *(int *)(param_1 + 0x58) = iVar1;
  REG_BLDALPHA = (char)iVar1;
  DAT_04000053 = '\x10' - (char)*(undefined4 *)(param_1 + 0x58);
  return *(int *)(param_1 + 0x58) == 0;
}

