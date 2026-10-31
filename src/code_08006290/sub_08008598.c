/* sub_08008598  (original: 0x08008598-0x080086D8 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int Wfz_LoadContainer();
extern undefined volatile gUnknown_08071020;


void sub_08008598(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  unsigned int __frame[273];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_444 ((undefined1 *)((char *)__frame + 0x0))
#define aiStack_44 ((int *)((char *)__frame + 0x400))
#define iStack_20 (*(int *)((char *)__frame + 0x424))
#define iStack_1c (*(int *)((char *)__frame + 0x428))
#define local_18 (*(int * *)((char *)__frame + 0x42c))
  piVar9 = aiStack_44;
  iVar7 = -1;
  iStack_1c = param_1;
  local_18 = param_2;
  do {
    iVar5 = local_18[1] + iVar7;
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + 5);
    if (iVar5 < 0) {
      iVar5 = iVar5 + uVar1;
    }
    else if ((int)uVar1 <= iVar5) {
      iVar5 = iVar5 - uVar1;
    }
    iVar3 = -1;
    do {
      iVar2 = *local_18 + iVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
      }
      else {
        uVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
        if ((int)uVar1 <= iVar2) {
          iVar2 = iVar2 - uVar1;
        }
      }
      iVar3 = iVar3 + 1;
      *piVar9 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4) * iVar5 + iVar2;
      piVar9 = piVar9 + 1;
    } while (iVar3 < 2);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  uVar8 = 0;
  uVar6 = 0;
  uVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + aiStack_44[uVar1] * 4 + 8) == 0) {
      *(undefined **)(uVar1 * 4 + param_1 + 8) = &gUnknown_08071020;
      uVar8 = uVar8 | 1 << (uVar1 & 0xff);
    }
    else {
      uVar4 = 0;
      do {
        if (*(int *)(uVar4 * 4 + param_1 + 0x2c) == aiStack_44[uVar1]) {
          uVar6 = uVar6 | 1 << (uVar4 & 0xff);
          uVar8 = uVar8 | 1 << (uVar1 & 0xff);
          *(uint *)(uVar1 * 4 + param_1 + 8) = uVar4 * 0x400 + param_1 + 0x3a0;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 9);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 9);
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0xff) & uVar8) == 0) {
      uVar4 = 0;
      do {
        if ((1 << (uVar4 & 0xff) & uVar6) == 0) {
          uVar6 = uVar6 | 1 << (uVar4 & 0xff);
          iVar7 = aiStack_44[uVar1];
          *(int *)(uVar4 * 4 + param_1 + 0x2c) = iVar7;
          iStack_20 = uVar4 * 0x400 + param_1 + 0x3a0;
          *(int *)(uVar1 * 4 + param_1 + 8) = iStack_20;
          Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4 + 8),auStack_444);
          sub_08049138(iStack_20,(int)auStack_444,0x400);
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 9);
    }
    uVar1 = uVar1 + 1;
    if (8 < (int)uVar1) {
      iVar7 = *local_18;
      *(int *)(param_1 + 0x54) = local_18[1];
      *(int *)(param_1 + 0x50) = iVar7;
      return;
    }
  } while( true );
}

