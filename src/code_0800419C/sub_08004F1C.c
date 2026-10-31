/* sub_08004F1C  (original: 0x08004F1C-0x08004F50 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0804912C();


void sub_08004F1C(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint a1;
  
  a1 = 0x1010101;
  param_2 = *(int *)(param_1 + 0x24) + param_3 * *(int *)(param_1 + 0x28) + param_2;
  if (param_5 != 0) {
    do {
      sub_0804912C(param_2,a1,param_4);
      param_5 = param_5 + -1;
      param_2 = *(int *)(param_1 + 0x28) + param_2;
      a1 = a1 ^ 0x31313131;
    } while (param_5 != 0);
  }
  return;
}

