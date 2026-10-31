/* sub_0804FA44  (original: 0x0804FA44-0x0804FA58 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0804FA44(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 0x10) == '\0')) {
    return 1;
  }
  return 0;
}

