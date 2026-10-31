/* sub_08034294  (original: 0x08034294-0x080342A8 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined volatile _0804BCA8;


void sub_08034294(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0804BCA8;
  iVar1 = *(int *)param_1[1];
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1((int *)param_1[1],iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}

