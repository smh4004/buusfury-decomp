/* sub_08040322  (original: 0x08040322-0x08040346 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


uint sub_08040322(byte *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0xff) &
        (uint)*(ushort *)(param_1 + ((*param_1 + 0x3f) * 0x4000000 >> 0x19) + 8)) != 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 10);
  return 0xffffffff;
}

