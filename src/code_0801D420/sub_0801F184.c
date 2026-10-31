/* sub_0801F184  (original: 0x0801F184-0x0801F22A in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002f54;


void sub_0801F184(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined2 uStack_14;
  
  switch(param_3) {
  case 4:
    bVar1 = *param_2;
    iVar5 = 2;
    *(uint *)(param_1 + 300) = (uint)(param_2[1] != 0);
    if (DAT_03002f54 == 0) {
      iVar4 = 0;
      if (bVar1 != 0) {
        do {
          bVar2 = param_2[iVar5];
          iVar7 = iVar5 + 2;
          bVar3 = param_2[iVar5 + 1];
          iVar6 = iVar5 + 3;
          iVar5 = iVar5 + 4;
          uStack_14 = CONCAT11(param_2[iVar6],param_2[iVar7]);
          iVar4 = iVar4 + 1;
          piVar8 = (int *)(*(int *)(param_1 + 0x130) + 0xbcc);
          iVar6 = *piVar8;
          *piVar8 = iVar6 + 1;
          *(ushort *)(piVar8 + iVar6 * 2 + 1) = CONCAT11(bVar3,bVar2);
          *(undefined2 *)((int)piVar8 + iVar6 * 8 + 6) = 0;
          *(undefined2 *)(piVar8 + iVar6 * 2 + 2) = uStack_14;
        } while (iVar4 < (int)(uint)bVar1);
      }
      DAT_03002f54 = 1;
    }
    break;
  case 5:
  case 6:
  case 7:
    *(undefined4 *)(param_1 + 300) = 1;
  }
  return;
}

