/* sub_0800700C  (original: 0x0800700C-0x08007040 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_080115B0();
extern int * volatile DAT_03002be0;
extern undefined volatile DAT_03001c4c;


void sub_0800700C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*DAT_03002be0 + 0xc);
  __call_via_r1(DAT_03002be0,iVar1 + *DAT_03002be0,iVar1,param_4,param_4);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
  sub_080115B0(&DAT_03001c4c);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x20) + *param_1);
  return;
}

