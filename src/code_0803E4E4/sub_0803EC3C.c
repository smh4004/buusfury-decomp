/* sub_0803EC3C  (original: 0x0803EC3C-0x0803EC5A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();
extern int __16__rt_sdiv();
extern undefined1 volatile DAT_030038a8;
extern undefined2 volatile DAT_030038aa;


void sub_0803EC3C(int param_1)

{
  sub_0803E4E4();
  DAT_030038a8 = *(undefined1 *)(param_1 + 0x5e);
  DAT_030038aa = __16__rt_sdiv(DAT_030038a8,40000);
  return;
}

