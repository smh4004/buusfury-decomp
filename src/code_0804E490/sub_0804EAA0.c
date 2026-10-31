/* sub_0804EAA0  (original: 0x0804EAA0-0x0804EAC4 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03001b38;


void sub_0804EAA0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  sub_0800ECDA(param_2,0x11);
  sub_0800ED18(param_2,&DAT_03001b38);
  return;
}

