/* sub_08009680  (original: 0x08009680-0x08009692 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08009220();
extern undefined4 volatile DAT_03001990;


void sub_08009680(int param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  sub_08009220(&DAT_03001990);
  return;
}

