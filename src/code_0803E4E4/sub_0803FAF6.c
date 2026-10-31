/* sub_0803FAF6  (original: 0x0803FAF6-0x0803FB1E in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


uint sub_0803FAF6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar1 = 0xf;
  do {
    uVar3 = (1 << (uVar1 & 0xff)) + uVar2 << (uVar1 & 0xff);
    if (uVar3 <= param_1) {
      param_1 = param_1 - uVar3;
      uVar2 = uVar2 | 2 << (uVar1 & 0xff);
    }
    uVar1 = uVar1 - 1;
  } while (-1 < (int)uVar1);
  return uVar2 >> 1;
}

