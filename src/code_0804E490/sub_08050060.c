/* sub_08050060  (original: 0x08050060-0x08050078 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_030032a0;


bool sub_08050060(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_030032a0;
}

