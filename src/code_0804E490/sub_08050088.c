/* sub_08050088  (original: 0x08050088-0x080500A2 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08050088(undefined4 param_1,int param_2)

{
  if ((*(int *)(*(int *)(param_2 + 0x58) + 0xa0) == *(int *)(param_2 + 0x50)) &&
     (*(ushort *)(param_2 + 0x12) < 0xf8)) {
    return 0;
  }
  return 1;
}

