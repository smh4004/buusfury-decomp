/* sub_08034108  (original: 0x08034108-0x08034124 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


undefined4 sub_08034108(undefined4 param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_2 + 0x10) == (*param_3 ^ 1)) {
    uVar1 = __call_via_r3();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

