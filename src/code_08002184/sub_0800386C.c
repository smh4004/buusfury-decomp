/* sub_0800386C  (original: 0x0800386C-0x0800387E in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern undefined1 volatile DAT_03002b5d;


void sub_0800386C(void)

{
  DAT_03002b5d = __16__rt_sdiv(2,DAT_03002b5d);
  return;
}

