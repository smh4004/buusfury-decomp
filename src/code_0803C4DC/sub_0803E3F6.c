/* sub_0803E3F6  (original: 0x0803E3F6-0x0803E40C in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E0B6();


void sub_0803E3F6(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0803E0B6(iVar1 * 0x40 + param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

