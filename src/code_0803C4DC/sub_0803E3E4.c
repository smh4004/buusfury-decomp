/* sub_0803E3E4  (original: 0x0803E3E4-0x0803E3F6 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int sub_0803E3E4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x40;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + param_1 + 0x10) = 0;
  } while (iVar1 < 0x10);
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
