/* sub_0802262C  (original: 0x0802262C-0x08022644 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


ushort sub_0802262C(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_3 + 0x84);
  iVar1 = __call_via_r1(param_3,iVar1 + *param_3,iVar1,param_4,param_4);
  return *(ushort *)(iVar1 + 4) & 1;
}

