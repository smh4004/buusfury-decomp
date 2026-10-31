/* sub_08036DF2  (original: 0x08036DF2-0x08036E2A in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802ED98();
extern int sub_080210B6();
extern int sub_080094F0();
extern int volatile DAT_03001a34;
extern undefined4 volatile DAT_030019a4;
extern int volatile DAT_030019a8;
extern undefined4 volatile DAT_03002bd8;


void sub_08036DF2(int param_1)

{
  sub_080210B6(&DAT_03002bd8);
  if (DAT_03001a34 == 0) {
    sub_080094F0(&DAT_030019a4,param_1 + 8);
  }
  else {
    DAT_030019a4 = *(int *)(param_1 + 8) << 10;
    DAT_030019a8 = *(int *)(param_1 + 0xc) << 10;
    sub_0802ED98(&DAT_030019a4);
  }
  return;
}

