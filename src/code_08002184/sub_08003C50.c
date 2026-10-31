/* sub_08003C50  (original: 0x08003C50-0x08003C74 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_08003C50(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  do {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    uVar3 = uVar2 & 0x7f;
    iVar1 = iVar1 * 0x80 + uVar3;
  } while ((int)(uVar2 << 0x18) < 0);
  if ((int)(uVar3 << 0x1f) < 0) {
    return -(iVar1 >> 1);
  }
  return iVar1 >> 1;
}

