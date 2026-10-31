/* sub_080162CC  (original: 0x080162CC-0x080162E6 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_08016304();
extern undefined volatile DAT_03001c4c;


void sub_080162CC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = sub_08016304(0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),param_1,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

