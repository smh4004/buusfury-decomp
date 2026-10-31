/* sub_0802A9C6  (original: 0x0802A9C6-0x0802A9EC in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


undefined4 sub_0802A9C6(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0xb) {
    param_1[0xc] = 0;
  }
  else if (param_2 == 0xc) {
    iVar1 = *(int *)(*param_1 + 8);
    __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  }
  return 0;
}

