/* sub_08012B5E  (original: 0x08012B5E-0x08012B90 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080135A2();
extern int __call_via_r1();
extern int __call_via_r2();


void sub_08012B5E(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
  iVar2 = sub_080135A2(iVar1,*(undefined1 *)(iVar1 + 0x15));
  iVar3 = __call_via_r1(iVar1,*(undefined4 *)(iVar2 + 0x10));
  if (iVar3 != 0) {
    __call_via_r2(iVar1,param_1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}

