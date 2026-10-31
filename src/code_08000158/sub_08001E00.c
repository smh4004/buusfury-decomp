/* sub_08001E00  (original: 0x08001E00-0x08001E2C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern undefined volatile DAT_03001c4c;


void sub_08001E00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar1 + -1]);
  *(int *)(iVar1 + 0x18) = iVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 0x30) + iVar2;
  return;
}

