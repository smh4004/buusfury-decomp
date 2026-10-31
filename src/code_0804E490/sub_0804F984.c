/* sub_0804F984  (original: 0x0804F984-0x0804F9A0 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002f54;


undefined4 sub_0804F984(int param_1)

{
  if ((DAT_03002f54 == 1) && (*(int *)(param_1 + 300) == 1)) {
    return 1;
  }
  return 0;
}

