/* sub_08013F24  (original: 0x08013F24-0x08013F58 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803F922();


void sub_08013F24(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = 2;
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar1 = 1, *(int *)(*(int *)(param_1 + 4) + 0x108) != param_1)) {
      iVar1 = 0;
    }
    sub_0803F922(param_2,*(int *)(param_1 + 0x38) + iVar1 * *(int *)(param_1 + 0x34),param_1 + 0x24)
    ;
  }
  return;
}

