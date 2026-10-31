/* sub_0800387E  (original: 0x0800387E-0x08003890 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern undefined1 volatile DAT_03002b5e;


void sub_0800387E(void)

{
  DAT_03002b5e = __16__rt_sdiv(2,DAT_03002b5e);
  return;
}

