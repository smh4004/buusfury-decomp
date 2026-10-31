/* sub_08007C12  (original: 0x08007C12-0x08007D98 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 72% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int Wfz_LoadContainer();
extern undefined volatile gUnknown_08070808;


void sub_08007C12(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  unsigned int __frame[525];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_834 ((undefined1 *)((char *)__frame + 0x0))
#define local_34 ((uint *)((char *)__frame + 0x800))
#define uStack_20 (*(uint *)((char *)__frame + 0x814))
#define iStack_1c (*(int *)((char *)__frame + 0x818))
#define local_18 (*(int * *)((char *)__frame + 0x81c))
  local_34[0] = 0xff;
  local_34[1] = 0xff;
  local_34[2] = 0xff;
  local_34[3] = 0xff;
  uVar7 = 0;
  uVar4 = 0;
  do {
    iVar1 = param_2[1] + uVar4;
    if ((iVar1 < 0) || ((int)(uint)*(byte *)(*(int *)(param_1 + 8) + 0x15) <= iVar1)) {
      uVar7 = uVar7 | 3 << ((uVar4 & 0x7f) << 1);
    }
    else {
      iVar2 = 0;
      do {
        uVar8 = uVar4 * 2 + iVar2;
        iVar6 = *param_2 + iVar2;
        if ((iVar6 < 0) ||
           (uStack_20 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x14), (int)uStack_20 <= iVar6)) {
          uVar7 = uVar7 | 1 << (uVar8 & 0xff);
        }
        else {
          local_34[uVar8] = uStack_20 * iVar1 + iVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  uVar8 = 0;
  uVar4 = 0;
  do {
    iVar1 = uVar4 * 4;
    uVar5 = local_34[uVar4];
    if (uVar5 == 0xff) {
      *(undefined **)(iVar1 + param_1 + 0x10) = &gUnknown_08070808;
    }
    else if (*(int *)(*(int *)(param_1 + 8) + uVar5 * 4 + 0x18) == 0) {
      *(undefined **)(iVar1 + param_1 + 0x10) = &gUnknown_08070808;
      uVar7 = uVar7 | 1 << (uVar4 & 0xff);
    }
    else {
      uVar3 = 0;
      do {
        if (*(byte *)(param_1 + uVar3 + 0x20) == uVar5) {
          uVar8 = uVar8 | 1 << (uVar3 & 0xff);
          uVar7 = uVar7 | 1 << (uVar4 & 0xff);
          *(uint *)(iVar1 + param_1 + 0x10) = uVar3 * 0x800 + param_1 + 0x4c;
          break;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 4);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  uVar4 = 0;
  iStack_1c = param_1;
  local_18 = param_2;
  do {
    if ((1 << (uVar4 & 0xff) & uVar7) == 0) {
      uVar5 = 0;
      do {
        if ((1 << (uVar5 & 0xff) & uVar8) == 0) {
          uVar8 = uVar8 | 1 << (uVar5 & 0xff);
          uVar3 = local_34[uVar4];
          *(char *)(param_1 + uVar5 + 0x20) = (char)uVar3;
          local_34[4] = uVar5 * 0x800 + param_1 + 0x4c;
          *(uint *)(uVar4 * 4 + param_1 + 0x10) = local_34[4];
          Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 8) + uVar3 * 4 + 0x18),auStack_834);
          sub_08049138(local_34[4],(int)auStack_834,0x800);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 4);
    }
    uVar4 = uVar4 + 1;
    if (3 < (int)uVar4) {
      iVar1 = local_18[1];
      *(int *)(param_1 + 0x24) = *local_18;
      *(int *)(param_1 + 0x28) = iVar1;
      iVar1 = local_18[1];
      *(int *)(param_1 + 0x2c) = *local_18 << 8;
      *(int *)(param_1 + 0x30) = iVar1 << 8;
      return;
    }
  } while( true );
}

