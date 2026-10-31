/* sub_0803F0E6  (original: 0x0803F0E6-0x0803F110 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int sub_0803F0E6(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x60 + param_1;
    *(undefined1 *)(iVar2 + 0x62) = 0;
    *(undefined1 *)(iVar2 + 0x77) = 0;
    *(undefined1 *)(iVar2 + 0x70) = 0;
    *(undefined1 *)(iVar2 + 0x28) = 0;
    iVar1 = iVar1 + 1;
    *(int *)(iVar2 + 0x44) = iVar2 + 0x18;
  } while (iVar1 < 0xf);
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
