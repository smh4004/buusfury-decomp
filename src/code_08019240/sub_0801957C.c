/* sub_0801957C  (original: 0x0801957C-0x08019594 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern ushort volatile DAT_03003304;


undefined4 sub_0801957C(void)

{
  if (((DAT_03003304 & 1) == 0) && (-1 < (int)((uint)DAT_03003304 << 0x1e))) {
    return 0;
  }
  return 1;
}

