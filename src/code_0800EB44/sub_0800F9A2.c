/* sub_0800F9A2  (original: 0x0800F9A2-0x0800F9C2 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern undefined4 volatile DAT_03001a54;


void sub_0800F9A2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x291) == '\0') {
    sub_08009930(param_2,DAT_03001a54,param_3,param_1,param_4);
  }
  return;
}

