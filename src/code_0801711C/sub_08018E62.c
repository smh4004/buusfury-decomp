/* sub_08018E62  (original: 0x08018E62-0x08018E74 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


undefined4 sub_08018E62(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 0x70);
  __call_via_r1(param_2,iVar1 + *param_2,iVar1,param_4,param_4);
  return 2;
}

