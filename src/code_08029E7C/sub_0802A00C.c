/* sub_0802A00C  (original: 0x0802A00C-0x0802A028 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803BB00();
extern int volatile DAT_03001c34;


void sub_0802A00C(int param_1)

{
  undefined4 *puVar1;
  
  if (DAT_03001c34 != 0) {
    puVar1 = (undefined4 *)(DAT_03001c34 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(DAT_03001c34 + 0x1a0);
    *(undefined4 *)(param_1 + 0x20) = *puVar1;
    sub_0803BB00();
  }
  return;
}

