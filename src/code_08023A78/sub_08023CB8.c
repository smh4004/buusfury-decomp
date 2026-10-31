/* sub_08023CB8  (original: 0x08023CB8-0x08023DBA in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __16__rt_sdiv();
extern int __call_via_r3();


void sub_08023CB8(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = *(int **)(param_2 + 4);
  iVar6 = piVar7[0x69];
  *(int *)(param_1 + 0x10) = (piVar7[0x68] >> 8) << 8;
  *(int *)(param_1 + 0x14) = (iVar6 >> 8) << 8;
  iVar6 = piVar7[0x69];
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x38) * 0x100;
  uVar2 = __16__rt_sdiv(iVar8,(*(int *)(param_1 + 0x18) - (piVar7[0x68] >> 8)) * 0x10000);
  uVar3 = __16__rt_sdiv(iVar8,(iVar4 - (iVar6 >> 8)) * 0x10000);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = iVar4;
  if (iVar4 < 0) {
    iVar6 = -iVar4;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  iVar8 = iVar5;
  if (iVar5 < 0) {
    iVar8 = -iVar5;
  }
  if (iVar8 < iVar6) {
    if (iVar4 < 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined1 *)(piVar7 + 4) = uVar1;
  }
  else {
    *(char *)(piVar7 + 4) = '\x01' - (-1 < iVar5);
  }
  iVar6 = piVar7[0x5e];
  *(int *)(param_1 + 0x24) = piVar7[0x5f];
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x20) = iVar6;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38) * 4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x38) * -4;
  __call_via_r3(piVar7,0xe,0,*(int *)(*piVar7 + 0x30) + *piVar7,uVar2,uVar2,uVar3,uVar2);
  __call_via_r1(piVar7,*(int *)(*piVar7 + 0x3c) + *piVar7);
  *(undefined1 *)(piVar7 + 2) = 0x24;
  return;
}

