/* sub_0804ED78  (original: 0x0804ED78-0x0804ED98 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03000f94;


undefined4 sub_0804ED78(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x210)) {
    return 1;
  }
  return 0;
}

