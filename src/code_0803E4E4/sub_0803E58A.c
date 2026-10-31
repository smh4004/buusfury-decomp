/* sub_0803E58A  (original: 0x0803E58A-0x0803E5AC in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();
extern char volatile DAT_030038a6;
extern char volatile DAT_030038a5;
extern int volatile DAT_030038b4;


void sub_0803E58A(int param_1)

{
  sub_0803E4E4();
  DAT_030038a5 = DAT_030038a6 + -1;
  DAT_030038b4 = *(byte *)(param_1 + 0x5e) - 1;
  return;
}

