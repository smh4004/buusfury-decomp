/* sub_0802D2F0  (original: 0x0802D2F0-0x0802D306 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_030030b0;


void sub_0802D2F0(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_030030b0);
  return;
}

