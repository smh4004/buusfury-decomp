/* sub_0800385A  (original: 0x0800385A-0x0800386C in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern undefined2 volatile DAT_03002b68;


void sub_0800385A(void)

{
  DAT_03002b68 = __16__rt_sdiv(2,DAT_03002b68);
  return;
}

