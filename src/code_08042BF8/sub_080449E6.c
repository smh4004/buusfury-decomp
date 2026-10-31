/* sub_080449E6  (original: 0x080449E6-0x08044A0C in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804481E();
extern int volatile DAT_0300525c;


void sub_080449E6(uint param_1,undefined4 param_2)

{
  sub_0804481E(0x40,1 << (param_1 & 0xff) & 0xff,param_2,DAT_0300525c + 0x98,0x1a);
  return;
}

