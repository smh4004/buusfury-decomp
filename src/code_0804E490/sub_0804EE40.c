/* sub_0804EE40  (original: 0x0804EE40-0x0804EE5C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001c34;


undefined4 sub_0804EE40(void)

{
  if (*(int *)(*(int *)(DAT_03001c34 + 0x58) + 0xa8) == *(int *)(DAT_03001c34 + 0x50)) {
    return 1;
  }
  return 0;
}

