/* sub_0804EC5C  (original: 0x0804EC5C-0x0804EC8C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern int sub_08026212();
extern undefined1 volatile DAT_04000053;
extern undefined1 volatile REG_BLDALPHA;
extern undefined2 volatile REG_BLDCNT;


void sub_0804EC5C(undefined4 param_1)

{
  sub_0804912C(0x6000000,0,0x18000);
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BLDCNT = 0x3f5f;
  sub_08026212(param_1);
  return;
}

