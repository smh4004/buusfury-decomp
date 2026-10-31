/* sub_0802FC3C  (original: 0x0802FC3C-0x0802FC52 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0802FC3C(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x20);
  *(char *)(param_1 + 0x20) = cVar1 + -1;
  if (cVar1 == '\0') {
    return 1;
  }
  return 0;
}

