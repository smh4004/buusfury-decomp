/* sub_08009AEC  (original: 0x08009AEC-0x08009B08 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r0();
extern undefined volatile _0804E444;


undefined4 * sub_08009AEC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &_0804E444;
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  uVar1 = __call_via_r0(*(undefined4 *)(param_2 + 4));
  param_1[3] = uVar1;
  return param_1;
}

