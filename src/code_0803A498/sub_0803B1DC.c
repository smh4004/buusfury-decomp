/* sub_0803B1DC  (original: 0x0803B1DC-0x0803B1F0 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803A7FC();


undefined4 sub_0803B1DC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803A7FC(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x10) >> 8 & 0xff,param_3,param_4,
               param_4);
  return 0;
}

