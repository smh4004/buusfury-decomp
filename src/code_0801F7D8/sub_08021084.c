/* sub_08021084  (original: 0x08021084-0x08021094 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03001964;


bool sub_08021084(int param_1)

{
  return *(undefined4 **)(param_1 + 8) != &DAT_03001964;
}

