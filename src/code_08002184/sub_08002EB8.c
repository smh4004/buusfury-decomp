/* sub_08002EB8  (original: 0x08002EB8-0x08002EE2 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int sub_08027DB0();


void sub_08002EB8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08027DB0(0,param_1[iVar1]);
  iVar1 = sub_0803D8A0();
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1 + -1;
  return;
}

