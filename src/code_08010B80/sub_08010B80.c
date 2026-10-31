/* sub_08010B80  (original: 0x08010B80-0x08010BB8 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int __call_via_r2();
extern int sub_0800E6F8();
extern undefined volatile _0804C9F0;
extern undefined4 volatile DAT_03001c34;


void sub_08010B80(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = &_0804C9F0;
  DAT_03001c34 = 0;
  iVar1 = *(int *)param_1[0x8b];
  __call_via_r2((int *)param_1[0x8b],param_1,*(int *)(iVar1 + 4) + iVar1,param_4,param_4);
  sub_0800E6F8(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

