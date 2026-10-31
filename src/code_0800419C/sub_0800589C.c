/* sub_0800589C  (original: 0x0800589C-0x080058AC in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080115B0();
extern int sub_080067D6();
extern undefined volatile DAT_03001c4c;


void sub_0800589C(void)

{
  sub_080067D6();
  sub_080115B0(&DAT_03001c4c);
  return;
}

