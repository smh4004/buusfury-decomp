/* sub_080058AC  (original: 0x080058AC-0x080058C6 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011A1E();
extern int sub_080067F4();
extern int sub_0801157E();
extern undefined volatile DAT_03001c4c;


void sub_080058AC(undefined4 param_1)

{
  sub_0801157E(&DAT_03001c4c);
  sub_08011A1E(&DAT_03001c4c);
  sub_080067F4(param_1);
  return;
}

