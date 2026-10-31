/* sub_0804F874  (original: 0x0804F874-0x0804F892 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();


void sub_0804F874(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  __16__rt_sdiv(*(undefined4 *)(*(int *)(param_1 + 0x224) + 4),
                (*(int *)(param_1 + 0x28c) >> 10) * param_2,0x200,param_4,param_4);
  return;
}

