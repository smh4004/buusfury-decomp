/* sub_0801BAE6  (original: 0x0801BAE6-0x0801BB08 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0804F944();


void sub_0801BAE6(int param_1,int param_2)

{
  sub_0804F944(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  sub_0800ECDA(param_2,0x13);
  return;
}

