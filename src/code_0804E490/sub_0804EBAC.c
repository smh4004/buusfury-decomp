/* sub_0804EBAC  (original: 0x0804EBAC-0x0804EBC8 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03003130;


void sub_0804EBAC(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_03003130);
  return;
}

