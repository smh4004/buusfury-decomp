/* sub_080043D8  (original: 0x080043D8-0x080043EE in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int Player_AddExp();


void sub_080043D8(byte *param_1)

{
  Player_AddExp(param_1 + (uint)*param_1 * 0x68 + 0x4f8);
  return;
}

