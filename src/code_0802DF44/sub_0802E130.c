/* sub_0802E130  (original: 0x0802E130-0x0802E146 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();


void sub_0802E130(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,3,0,param_4,param_4);
  return;
}

