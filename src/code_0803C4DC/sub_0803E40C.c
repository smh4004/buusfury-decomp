/* sub_0803E40C  (original: 0x0803E40C-0x0803E42A in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E152();


void sub_0803E40C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0803E152(iVar1 * 0x40 + param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

