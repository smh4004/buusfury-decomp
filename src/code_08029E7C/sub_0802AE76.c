/* sub_0802AE76  (original: 0x0802AE76-0x0802AE98 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0800ECDA();
extern undefined4 volatile DAT_03003024;


void sub_0802AE76(undefined4 param_1,int param_2)

{
  if (*(int *)(*(int *)(param_2 + 0x58) + 0xa0) == *(int *)(param_2 + 0x50)) {
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,&DAT_03003024);
  }
  return;
}

