/* sub_08002EE2  (original: 0x08002EE2-0x08002F72 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801375E();
extern undefined1 volatile DAT_03001560;
extern undefined volatile DAT_03001568;


void sub_08002EE2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar3 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar7 = param_1[iVar1 + -1];
  *param_1 = iVar1 + -3;
  iVar6 = param_1[iVar1 + -2];
  *param_1 = iVar1 + -4;
  iVar8 = param_1[iVar1 + -3];
  *param_1 = iVar1 + -5;
  if (iVar3 != -1) {
    iVar3 = iVar3 * 0x3c;
  }
  pbVar5 = &DAT_03001560 + param_1[iVar1 + -4] * 0x68;
  *(int *)(&DAT_03001568 + param_1[iVar1 + -4] * 0x68) = iVar3;
  pbVar4 = &DAT_03001560 + iVar6 * 0x68;
  pbVar2 = &DAT_03001560 + iVar7 * 0x68;
  sub_0801375E(pbVar5,pbVar2,pbVar4,iVar8,param_4);
  *pbVar5 = *pbVar5 | 3;
  *pbVar2 = *pbVar2 & 0xfe;
  *pbVar4 = *pbVar4 & 0xfe;
  return;
}

