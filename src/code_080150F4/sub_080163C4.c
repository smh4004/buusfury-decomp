/* sub_080163C4  (original: 0x080163C4-0x080163E6 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


int sub_080163C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) <= (int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3) {
    sub_08011944(&DAT_03001c4c,param_1,*(int *)(param_1 + 0x1c),param_4,param_4);
  }
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
