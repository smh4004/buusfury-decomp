/* sub_0803EBFC  (original: 0x0803EBFC-0x0803EC10 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();


void sub_0803EBFC(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 2) + -1;
  *(char *)(param_2 + 2) = cVar1;
  if (cVar1 == '\0') {
    sub_0803E4E4();
  }
  return;
}

