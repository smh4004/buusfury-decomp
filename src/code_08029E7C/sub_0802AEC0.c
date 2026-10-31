/* sub_0802AEC0  (original: 0x0802AEC0-0x0802AEDA in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0802AEC0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (0x1f < uVar1) {
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  *(char *)(param_2 + 0x11) = (char)(*(ushort *)(param_2 + 0x12) >> 3);
  return;
}

