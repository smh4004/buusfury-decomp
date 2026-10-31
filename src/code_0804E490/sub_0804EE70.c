/* sub_0804EE70  (original: 0x0804EE70-0x0804EE90 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001c34;


bool sub_0804EE70(void)

{
  return *(int *)(*(int *)(DAT_03001c34 + 0x58) + 0xa8) != *(int *)(DAT_03001c34 + 0x50);
}

