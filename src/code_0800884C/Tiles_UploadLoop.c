/* Tiles_UploadLoop  (original: 0x08009BD4-0x08009CC2 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/6 snapshots, 87% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int Tiles_Animate1();
extern int Wfz_LoadContainer();
extern int sub_0803D63C();
extern int sub_0803D5B8();


void Tiles_UploadLoop(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[455];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_71c ((ushort *)((char *)__frame + 0x0))
#define iStack_1c (*(int *)((char *)__frame + 0x700))
#define local_18 (*(int *)((char *)__frame + 0x704))
  iVar5 = *(int *)(*(int *)(param_2 + 0x48) + 4) / 2;
  iStack_1c = param_1;
  local_18 = param_2;
  Wfz_LoadContainer(*(undefined4 *)(param_2 + 0x48),local_71c);
  iVar1 = 1;
  if (1 < iVar5) {
    do {
      iVar2 = iVar1 + 1;
      local_71c[iVar1] = local_71c[iVar1] + local_71c[iVar1 + -1] + 1;
      iVar1 = iVar2;
    } while (iVar2 < iVar5);
  }
  iVar3 = sub_0803D5B8(0x4000);
  iVar2 = 0x6000000;
  iVar1 = 0;
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      while ((iVar4 < iVar5 && ((uint)(local_71c[iVar4] >> 8) == (uint)(local_71c[iVar1] >> 8)))) {
        iVar4 = iVar4 + 1;
      }
      Wfz_LoadContainer(*(undefined4 *)
                         (*(int *)(local_18 + 0x4c) + (uint)(local_71c[iVar1] >> 8) * 4),iVar3);
      for (; iVar1 < iVar4; iVar1 = iVar1 + 1) {
        sub_08049138(iVar2,(((uint)local_71c[iVar1] << 0x18) >> 0x12) + iVar3,0x40);
        iVar2 = iVar2 + 0x40;
      }
    } while (iVar1 < iVar5);
  }
  sub_0803D63C(iVar3);
  iVar1 = iStack_1c;
  iVar5 = 0;
  if (0 < *(int *)(iStack_1c + 4)) {
    do {
      Tiles_Animate1(iVar5 * 8 + iVar1 + 8);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iStack_1c + 4));
  }
  return;
}

