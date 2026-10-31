/* sub_0800FD54  (original: 0x0800FD54-0x0800FD74 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800F68C();
extern undefined volatile gUnknown_08711274;


void sub_0800FD54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800F68C(0,param_1,&gUnknown_08711274 + *(int *)(param_1 + 8) * 0x1c,param_2,param_4);
  return;
}

