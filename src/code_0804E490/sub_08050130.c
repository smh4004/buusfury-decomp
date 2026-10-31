/* sub_08050130  (original: 0x08050130-0x08050148 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03003120;


bool sub_08050130(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003120;
}

