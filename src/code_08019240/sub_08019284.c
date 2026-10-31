/* sub_08019284  (original: 0x08019284-0x08019298 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined volatile gUnknown_0870F514;


void sub_08019284(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(*(undefined4 **)(&gUnknown_0870F514 + *(int *)(param_1 + 0xc) * 8),param_2,
                **(undefined4 **)(&gUnknown_0870F514 + *(int *)(param_1 + 0xc) * 8),param_4,param_4)
  ;
  return;
}

