/* sub_08012D8A  (original: 0x08012D8A-0x08012DEE in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08012B5E();
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_08012A24();


void sub_08012D8A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 0x84);
  iVar1 = __call_via_r1(param_2,iVar1 + *param_2,iVar1,param_4,param_4);
  if (((uint)*(ushort *)(iVar1 + 2) << 0x18) >> 0x1c != 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((*(ushort *)(iVar1 + 4) & 1) == 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((int)((uint)*(ushort *)(iVar1 + 4) << 0x1e) < 0) {
      sub_08012B5E(param_2);
    }
  }
  else {
    sub_08012A24(param_2);
  }
  return;
}

