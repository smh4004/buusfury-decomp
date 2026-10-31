/* sub_08001304  (original: 0x08001304-0x08001336 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804C800;


void sub_08001304(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar6 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar5 = param_1[iVar3 + -2];
  *param_1 = iVar3 + -4;
  iVar7 = param_1[iVar3 + -3];
  *param_1 = iVar3 + -5;
  iVar3 = param_1[iVar3 + -4];
  if (iVar6 < 2) {
    iVar6 = 2;
  }
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804C800;
    puVar1[2] = iVar7;
    puVar1[3] = iVar5;
    puVar1[4] = iVar4;
    puVar1[5] = iVar6;
    puVar1[7] = iVar6 >> 1;
    puVar1[6] = iVar6;
    uVar2 = __16__rt_sdiv(iVar6 >> 1,0x100);
    puVar1[8] = uVar2;
  }
  iVar3 = sub_080001C6(iVar3);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar3 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}

