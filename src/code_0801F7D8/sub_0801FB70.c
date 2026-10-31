/* sub_0801FB70  (original: 0x0801FB70-0x0801FB98 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();


undefined4 sub_0801FB70(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_2[param_3 * 2 + 1];
  param_2[param_3 * 2 + 1] = iVar1 - param_4;
  if (iVar1 - param_4 == 0) {
    iVar1 = *param_2;
    *param_2 = iVar1 + -1;
    iVar1 = (iVar1 + -1) - param_3;
    if (iVar1 != 0) {
      sub_08049138((int)(param_2 + param_3 * 2 + 1),(int)(param_2 + param_3 * 2 + 3),iVar1 * 8);
    }
  }
  return 1;
}

