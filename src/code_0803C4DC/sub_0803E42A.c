/* sub_0803E42A  (original: 0x0803E42A-0x0803E44C in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int sub_0803E42A(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x40 + param_1;
    *(undefined1 *)(iVar1 + 0x34) = param_2;
    iVar2 = iVar2 + 1;
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 0x10;
  } while (iVar2 < 0x10);
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
