/* sub_08052B20  (original: 0x08052B20-0x08052B60 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800E6F8();
extern int sub_0803D63C();
extern undefined volatile _0804C9F0;
extern undefined4 volatile DAT_03001c34;


void sub_08052B20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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

