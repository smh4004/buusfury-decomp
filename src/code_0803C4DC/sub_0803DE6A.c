/* sub_0803DE6A  (original: 0x0803DE6A-0x0803DEFA in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 83% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0803DE6A(int param_1,short *param_2,int param_3,undefined4 *param_4)

{
  short sVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  
  for (; sVar1 = *param_2, sVar1 != 0; param_2 = param_2 + 1) {
    if (((sVar1 != 0x20) && (sVar1 != 10)) && (sVar1 != 0xb)) goto _0803DE88;
  }
  param_4[3] = 1;
_0803DE88:
  *param_4 = param_2;
  param_4[1] = param_2;
  param_4[3] = 0;
  puVar5 = (ushort *)0x0;
  uVar6 = 0;
  param_4[2] = 0;
_0803DE96:
  do {
    puVar2 = (ushort *)param_4[1];
    uVar3 = (uint)*puVar2;
    if (uVar3 == 0) {
      param_4[3] = 1;
      return;
    }
    if (uVar3 == 0x20) {
      uVar6 = param_4[2];
      puVar5 = puVar2;
    }
    else {
      if (uVar3 == 10) {
        return;
      }
      if (uVar3 == 0xb) {
        param_4[3] = 1;
        return;
      }
      if (uVar3 == 8) {
        param_4[1] = puVar2 + 2;
        goto _0803DE96;
      }
    }
    if (uVar3 < 0xff) {
      iVar4 = **(int **)(param_1 + 0xc);
      uVar3 = (uint)*(ushort *)(iVar4 + (uint)*(ushort *)(iVar4 + uVar3 * 2) * 2);
    }
    else {
      uVar3 = (*(int **)(param_1 + 0xc))[1];
    }
    iVar4 = param_4[2] + uVar3 + 1;
    if (param_3 < iVar4) {
      if (puVar5 == (ushort *)0x0) {
        return;
      }
      param_4[1] = puVar5;
      param_4[2] = uVar6;
      return;
    }
    param_4[1] = puVar2 + 1;
    param_4[2] = iVar4;
  } while( true );
}

