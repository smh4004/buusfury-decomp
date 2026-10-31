/* sub_0804FE54  (original: 0x0804FE54-0x0804FE72 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 50% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();


void sub_0804FE54(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = (iVar1 + -1) - param_2;
  if (iVar1 != 0) {
    sub_08049138((int)(param_1 + param_2 + 1),(int)(param_1 + param_2 + 2),iVar1 * 4);
  }
  return;
}

