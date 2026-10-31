/* sub_08019074  (original: 0x08019074-0x080190AA in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int __call_via_r1();
extern undefined volatile _0804BDA8;


void sub_08019074(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0804BDA8;
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    do {
      iVar1 = *(int *)param_1[iVar2 + 2];
      __call_via_r1((int *)param_1[iVar2 + 2],*(int *)(iVar1 + 0xc) + iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

