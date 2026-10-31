/* sub_0800965C  (original: 0x0800965C-0x08009670 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080092BC();
extern int sub_08009CC2();
extern undefined4 volatile DAT_03001990;
extern undefined2 volatile DAT_03001a68;


void sub_0800965C(undefined4 param_1)

{
  sub_080092BC(&DAT_03001990,param_1);
  sub_08009CC2(&DAT_03001a68);
  return;
}

