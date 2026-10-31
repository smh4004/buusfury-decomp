/* sub_08036DD6  (original: 0x08036DD6-0x08036DF2 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802ED98();
extern int sub_080210B6();
extern int volatile DAT_030019b0;
extern undefined4 volatile DAT_030019a4;
extern undefined4 volatile DAT_03002bd8;


void sub_08036DD6(int param_1)

{
  sub_080210B6(&DAT_03002bd8);
  DAT_030019b0 = *(int *)(param_1 + 8) << 10;
  sub_0802ED98(&DAT_030019a4);
  return;
}

