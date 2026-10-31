/* sub_0802AA5E  (original: 0x0802AA5E-0x0802AA80 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int volatile DAT_03000f94;


undefined4 sub_0802AA5E(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x1e8)) {
    uVar1 = __call_via_r3();
    return uVar1;
  }
  return 0;
}

