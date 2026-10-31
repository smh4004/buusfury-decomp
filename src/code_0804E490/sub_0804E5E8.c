/* sub_0804E5E8  (original: 0x0804E5E8-0x0804E608 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03003158;


void sub_0804E5E8(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined2 *)(param_2 + 0x12) = 0;
  sub_0800ECDA(param_2,0);
  sub_0800ED18(param_2,&DAT_03003158);
  return;
}

