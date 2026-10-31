/* sub_08017DA2  (original: 0x08017DA2-0x08017DCA in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08017C1C();
extern int sub_08000158();


void sub_08017DA2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = sub_08000158(*(undefined4 *)(param_1 + 0x10));
  sub_08017C1C(0,uVar1,*(undefined4 *)(param_1 + 0xc),param_1 + 0x14,param_1 + 8,param_2);
  return;
}

