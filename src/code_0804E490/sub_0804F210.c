/* sub_0804F210  (original: 0x0804F210-0x0804F248 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0803D63C();
extern undefined volatile _0804AAF4;


void sub_0804F210(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_0804AAF4;
    if (0 < (int)param_1[2]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 3];
        __call_via_r1((int *)param_1[iVar2 + 3],*(int *)(iVar1 + 0xc) + iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[2]);
    }
    sub_0803D63C(param_1);
  }
  return;
}

