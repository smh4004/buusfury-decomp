/* sub_0802C630  (original: 0x0802C630-0x0802C644 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0802C630(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x15);
  *(char *)(param_1 + 0x15) = cVar1 + -1;
  if (cVar1 == '\0') {
    return 1;
  }
  return 0;
}

