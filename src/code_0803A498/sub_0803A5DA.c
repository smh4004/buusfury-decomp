/* sub_0803A5DA  (original: 0x0803A5DA-0x0803A61A in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_030032d0;


bool sub_0803A5DA(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    sub_0800ECDA(param_2,0x12,param_3,param_4,param_4);
    sub_0800ED18(param_2,&DAT_030032d0);
  }
  *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + -0x80;
  return *(int *)(*(int *)(param_2 + 0x58) + 0x9c) != *(int *)(param_2 + 0x50);
}

