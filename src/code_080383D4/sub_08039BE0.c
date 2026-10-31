/* sub_08039BE0  (original: 0x08039BE0-0x08039BFC in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


bool sub_08039BE0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,9,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  return iVar1 == 0;
}

