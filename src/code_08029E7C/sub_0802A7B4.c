/* sub_0802A7B4  (original: 0x0802A7B4-0x0802A7F4 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802A7F4();


void sub_0802A7B4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x38) = uVar1;
  if (uVar1 >> 0x10 != 0) {
    uVar1 = *(int *)(param_1 + 0x34) + ((int)uVar1 >> 0x10) * 0xc;
    *(uint *)(param_1 + 0x34) = uVar1;
    if ((uint)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x3c) * 0xc) <= uVar1) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x44);
    }
    sub_0802A7F4(param_1);
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffff;
  return;
}

