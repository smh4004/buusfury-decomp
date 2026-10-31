/* sub_08022186  (original: 0x08022186-0x080222C2 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08022368();
extern int sub_0801191A();
extern int sub_080222E0();
extern int sub_080115B0();
extern int sub_08011944();
extern int sub_08049138();
extern undefined volatile DAT_03001c4c;


void sub_08022186(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
  piVar5 = (int *)(param_1 + 0x1d4);
  if (*(int *)(param_1 + 4) != 0) {
    local_1c = *(int *)(*(int *)(param_1 + 8) + 0x2c);
    local_18 = *(int *)(*(int *)(param_1 + 8) + 0x30);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar4 = iVar1 * 0x1c + param_1 + 0xc;
        if ((((*(int *)(iVar4 + 4) <= local_1c) && (local_1c < *(int *)(iVar4 + 0xc))) &&
            (*(int *)(iVar4 + 8) <= local_18)) &&
           ((local_18 < *(int *)(iVar4 + 0x10) && (*(int *)(iVar4 + 0x14) == 0)))) {
          *(undefined4 *)(iVar4 + 0x14) = 1;
          piVar2 = *(int **)(param_1 + 0x1d0);
          iVar1 = *piVar2;
          *piVar2 = iVar1 + 1;
          iVar3 = *(int *)(iVar4 + 0x18);
          piVar2[iVar1 * 2 + 2] = *(int *)(iVar4 + 0x1c);
          piVar2[iVar1 * 2 + 1] = iVar3;
          local_24 = *(int *)(iVar4 + 4) + *(int *)(iVar4 + 0xc) >> 1;
          local_20 = *(int *)(iVar4 + 8) + *(int *)(iVar4 + 0x10) >> 1;
          iVar1 = sub_080222E0(0,&local_24);
          sub_08022368();
          sub_0801191A(&DAT_03001c4c,iVar1);
          iVar4 = *piVar5;
          *piVar5 = iVar4 + 1;
          piVar5[iVar4 + 1] = iVar1;
          iVar1 = *(int *)(param_1 + 4) + -1;
          *(int *)(param_1 + 4) = iVar1;
          if (iVar1 == 0) {
            if (*piVar5 < 1) goto _08022262;
            iVar1 = 0;
            goto _08022252;
          }
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
  }
  goto _08022296;
  while (iVar1 = iVar1 + 1, iVar1 < *piVar5) {
_08022252:
    if (piVar5[iVar1 + 1] == *(int *)(param_1 + 8)) goto _08022266;
  }
_08022262:
  iVar1 = -1;
_08022266:
  iVar4 = *piVar5;
  *piVar5 = iVar4 + -1;
  iVar4 = (iVar4 + -1) - iVar1;
  if (iVar4 != 0) {
    sub_08049138((int)(piVar5 + iVar1 + 1),(int)(piVar5 + iVar1 + 2),iVar4 * 4);
  }
  sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 8));
_08022296:
  iVar1 = 0;
  if (0 < *piVar5) {
    do {
      iVar4 = *(int *)piVar5[iVar1 + 1];
      __call_via_r1((int *)piVar5[iVar1 + 1],*(int *)(iVar4 + 8) + iVar4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *piVar5);
  }
  sub_080115B0(&DAT_03001c4c);
  return;
}

