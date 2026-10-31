/* sub_08000840  (original: 0x08000840-0x08000872 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile DAT_03003e5c;


void sub_08000840(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + param_1[iVar1 + -1] * 0xc,iVar2,0);
  return;
}

