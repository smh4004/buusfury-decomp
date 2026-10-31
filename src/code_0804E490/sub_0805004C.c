/* sub_0805004C  (original: 0x0805004C-0x08050060 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03001b30;


bool sub_0805004C(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) == &DAT_03001b30;
}

