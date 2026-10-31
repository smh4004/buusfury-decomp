/* sub_0803B294  (original: 0x0803B294-0x0803B2A8 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern char volatile DAT_030032e4;


undefined4 sub_0803B294(void)

{
  if ((DAT_030032e4 != '\x03') && (DAT_030032e4 != '\x01')) {
    return 0;
  }
  return 1;
}

