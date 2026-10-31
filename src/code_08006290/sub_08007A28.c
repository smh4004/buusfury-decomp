/* sub_08007A28  (original: 0x08007A28-0x08007A3E in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern undefined volatile DAT_0600e000;


void sub_08007A28(int param_1)

{
  sub_0804912C((int)(&DAT_0600e000 + (uint)*(byte *)(param_1 + 4) * 0x800),0,0x800);
  return;
}

