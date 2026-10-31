/* sub_080115B0  (original: 0x080115B0-0x080116FC in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08052EE0();
extern int __call_via_r2();
extern int sub_0803DA54();
extern int sub_080531A4();
extern undefined volatile DAT_03003498;


void sub_080115B0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  unsigned int __frame[138];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define puStack_228 (*(undefined * *)((char *)__frame + 0x0))
#define puStack_224 (*(undefined * *)((char *)__frame + 0x4))
#define uStack_220 (*(undefined4 *)((char *)__frame + 0x8))
#define local_21c ((int *)((char *)__frame + 0xc))
#define local_18 (*(int *)((char *)__frame + 0x210))
  local_21c[0] = 0;
  iVar4 = *(int *)(param_1 + 4);
  local_18 = param_1;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar6 = (int *)(iVar4 * 4 + param_1 + 8);
    piVar1 = (int *)*piVar6;
    iVar2 = *piVar1;
    iVar2 = __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
    if (iVar2 != 0) {
      local_21c[local_21c[0] + 1] = *piVar6;
      local_21c[0] = local_21c[0] + 1;
    }
  }
  piVar1 = local_21c + 1;
  piVar6 = local_21c + local_21c[0];
  if (piVar1 < piVar6) {
    piVar5 = piVar1 + ((int)piVar6 - (int)piVar1 >> 3);
    if (piVar1 != piVar5) {
      iVar4 = sub_08052EE0(piVar5,piVar1);
      if (iVar4 != 0) {
        iVar4 = *piVar5;
        *piVar5 = local_21c[1];
        local_21c[1] = iVar4;
      }
      iVar4 = sub_08052EE0(piVar1,piVar6);
      piVar5 = piVar6;
      piVar7 = piVar1;
      if (iVar4 != 0) {
        iVar4 = *piVar6;
        *piVar6 = local_21c[1];
        local_21c[1] = iVar4;
      }
      do {
        iVar4 = sub_08052EE0(piVar5,piVar1);
        while (iVar4 != 0) {
          piVar5 = piVar5 + -1;
          iVar4 = sub_08052EE0(piVar5,piVar1);
        }
        do {
          piVar7 = piVar7 + 1;
          if (piVar5 <= piVar7) {
            iVar4 = *piVar5;
            *piVar5 = local_21c[1];
            local_21c[1] = iVar4;
            sub_080531A4(piVar1,piVar5 + -1);
            sub_080531A4(piVar5 + 1,piVar6);
            goto _080116A2;
          }
          iVar4 = sub_08052EE0(piVar1,piVar7);
        } while (iVar4 != 0);
        iVar4 = *piVar7;
        *piVar7 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = piVar5 + -1;
      } while( true );
    }
    iVar4 = sub_08052EE0(piVar1,piVar6);
    if (iVar4 != 0) {
      iVar4 = *piVar6;
      *piVar6 = local_21c[1];
      local_21c[1] = iVar4;
    }
  }
_080116A2:
  sub_0803DA54(&DAT_03003498);
  puStack_228 = &DAT_03003498;
  iVar4 = 0;
  puStack_224 = &DAT_03003498;
  uStack_220 = 0;
  if (0 < local_21c[0]) {
    piVar1 = (int *)(local_18 + 0x208);
    do {
      piVar6 = (int *)local_21c[iVar4 + 1];
      iVar2 = *piVar6;
      iVar2 = __call_via_r2(piVar6,&puStack_228,*(int *)(iVar2 + 0x10) + iVar2);
      if (iVar2 != 0) {
        iVar2 = *piVar1;
        iVar3 = local_21c[iVar4 + 1];
        *piVar1 = iVar2 + 1;
        piVar1[iVar2 + 1] = iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_21c[0]);
  }
  return;
}

