/* sub_08018820  (original: 0x08018820-0x08018836 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03000f94;


void sub_08018820(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c8) = 0;
  *(undefined4 *)(param_2 + 0x210) = DAT_03000f94;
  return;
}

