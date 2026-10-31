/* sub_0804E7DC  (original: 0x0804E7DC-0x0804E800 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03001b20;


void sub_0804E7DC(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_03001b20);
  return;
}

