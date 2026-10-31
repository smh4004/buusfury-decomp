/* sub_0804E59C  (original: 0x0804E59C-0x0804E5B8 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern undefined4 volatile DAT_0300326c;


void sub_0804E59C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*(int *)(param_2 + 0x58) + 0xa0) == *(int *)(param_2 + 0x50)) {
    sub_0800ED18(param_2,&DAT_0300326c,*(int *)(param_2 + 0x50),param_4,param_4);
  }
  return;
}

