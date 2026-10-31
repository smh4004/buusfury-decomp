/* sub_0803E574  (original: 0x0803E574-0x0803E58A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();
extern undefined1 volatile DAT_030038a7;


void sub_0803E574(int param_1)

{
  sub_0803E4E4();
  DAT_030038a7 = *(undefined1 *)(param_1 + 0x5e);
  return;
}

