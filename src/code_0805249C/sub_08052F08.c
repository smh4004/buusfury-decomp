/* sub_08052F08  (original: 0x08052F08-0x08052FB4 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int * sub_08052F08(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *param_2;
  iVar7 = *param_3;
  iVar8 = param_2[1];
  iVar3 = param_3[1];
  iVar4 = param_2[2];
  iVar5 = param_3[2];
  iVar1 = param_2[3];
  iVar2 = param_3[3];
  *param_1 = (((iVar7 * iVar6 - iVar3 * iVar8) - iVar5 * iVar4) - iVar2 * iVar1) + 0x4000 >> 0xf;
  param_1[3] = ((iVar2 * iVar6 + iVar7 * iVar1 + iVar5 * iVar8) - iVar3 * iVar4) + 0x4000 >> 0xf;
  param_1[1] = ((iVar3 * iVar6 + iVar7 * iVar8 + iVar2 * iVar4) - iVar5 * iVar1) + 0x4000 >> 0xf;
  param_1[2] = ((iVar5 * iVar6 + iVar7 * iVar4 + iVar3 * iVar1) - iVar2 * iVar8) + 0x4000 >> 0xf;
  return param_1 + 3;
}

