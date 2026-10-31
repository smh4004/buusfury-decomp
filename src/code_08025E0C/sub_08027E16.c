/* sub_08027E16  (original: 0x08027E16-0x08027E2E in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_080115B0();
extern undefined volatile DAT_03001c4c;


void sub_08027E16(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r1(*(int **)(param_1 + 4),iVar2 + iVar1,iVar2,param_4,param_4);
  sub_080115B0(&DAT_03001c4c);
  return;
}

