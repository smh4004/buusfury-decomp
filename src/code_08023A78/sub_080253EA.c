/* sub_080253EA  (original: 0x080253EA-0x08025404 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08024BE6();
extern int sub_08024BF2();
extern undefined2 volatile REG_BLDCNT;


void sub_080253EA(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_08024BE6();
    REG_BLDCNT = 0x3e41;
  }
  else {
    sub_08024BF2();
  }
  return;
}

