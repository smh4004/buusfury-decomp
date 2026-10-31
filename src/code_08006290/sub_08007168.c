/* sub_08007168  (original: 0x08007168-0x0800717C in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern ushort volatile DAT_03003302;


undefined4 sub_08007168(int param_1)

{
  if ((DAT_03003302 & *(byte *)(param_1 + 4)) != 0) {
    return 1;
  }
  return 0;
}

