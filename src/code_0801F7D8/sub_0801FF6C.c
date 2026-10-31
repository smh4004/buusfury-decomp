/* sub_0801FF6C  (original: 0x0801FF6C-0x0801FF98 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03002f50;


void sub_0801FF6C(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (((param_3 != 0) && (param_3 != 1)) && (param_3 != 2)) {
    *(undefined4 *)(param_1 + 300) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 300) + 1;
  *(int *)(param_1 + 300) = iVar1;
  if (0x14 < iVar1) {
    DAT_03002f50 = 1;
  }
  return;
}

