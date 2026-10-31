/* sub_08006BD0  (original: 0x08006BD0-0x08006BE8 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern int sub_080193AE();
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002bd8;


void sub_08006BD0(void)

{
  sub_08011C0C(&DAT_03001c4c,0xd,0);
  sub_080193AE(&DAT_03002bd8,0xd);
  return;
}

