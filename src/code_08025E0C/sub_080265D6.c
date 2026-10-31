/* sub_080265D6  (original: 0x080265D6-0x080265E8 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03002fc4;


bool sub_080265D6(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03002fc4;
}

