/* sub_08000B0A  (original: 0x08000B0A-0x08000B1C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_0300106a;


void sub_08000B0A(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 * 4 + param_1);
  *puVar1 = (uint)(byte)(&DAT_0300106a)[*puVar1];
  return;
}

