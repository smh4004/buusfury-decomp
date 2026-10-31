/* sub_0803E302  (original: 0x0803E302-0x0803E32C in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"


int sub_0803E302(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xf;
  while ((iVar2 = iVar1 * 0x40 + param_1, (*(byte *)(iVar2 + 0x10) & 1) == 0 ||
         (*(int *)(iVar2 + 0x28) != param_2))) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return param_1;
    }
  }
  param_1 = iVar1 * 0x40 + param_1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
