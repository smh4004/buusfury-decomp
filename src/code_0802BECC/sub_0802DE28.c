/* sub_0802DE28  (original: 0x0802DE28-0x0802DE66 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03001b20;


undefined4 sub_0802DE28(undefined4 param_1,int param_2)

{
  if (*(int *)(*(int *)(param_2 + 0x58) + 0x9c) != *(int *)(param_2 + 0x50)) {
    sub_0800ECDA(param_2,0x12);
    sub_0800ED18(param_2,&DAT_03001b20);
  }
  if (-0x14 < *(short *)(param_2 + 0x176)) {
    *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + -1;
    return 0;
  }
  return 1;
}

