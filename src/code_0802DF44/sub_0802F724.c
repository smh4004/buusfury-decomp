/* sub_0802F724  (original: 0x0802F724-0x0802F742 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0802F724(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_2 + 500) == 0) {
    return 1;
  }
  piVar1 = (int *)(*(int *)(param_2 + 500) + 0x204);
  *piVar1 = *piVar1 + -1;
  return 1;
}

