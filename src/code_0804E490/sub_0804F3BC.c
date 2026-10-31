/* sub_0804F3BC  (original: 0x0804F3BC-0x0804F3F4 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0803D63C();
extern undefined volatile _0804BDA8;


void sub_0804F3BC(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_0804BDA8;
    if (0 < (int)param_1[1]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 2];
        __call_via_r1((int *)param_1[iVar2 + 2],*(int *)(iVar1 + 0xc) + iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[1]);
    }
    sub_0803D63C(param_1);
  }
  return;
}

