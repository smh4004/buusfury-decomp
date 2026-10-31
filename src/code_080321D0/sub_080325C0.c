/* sub_080325C0  (original: 0x080325C0-0x080326F4 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_0803D876();
extern int sub_08004468();
extern int sub_08049138();
extern int sub_08031FCE();
extern int volatile DAT_0300155c;
extern undefined1 volatile DAT_03001068;
extern undefined1 volatile DAT_0300106a;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0831947C;
extern undefined volatile gUnknown_08319494;


undefined4 sub_080325C0(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(param_1 + 0x8c0);
  if (param_3 == 0) {
    piVar2 = (int *)(param_1 + 0x114);
    if (*piVar2 != 0) {
      iVar3 = *piVar4;
      DAT_0300155c = DAT_0300155c + *(int *)(param_1 + 0x8c8) * piVar2[iVar3 * 2 + 2];
      if ((char)piVar2[iVar3 * 2 + 1] == '\0') {
        uVar1 = *(ushort *)((int)piVar2 + iVar3 * 8 + 6);
        (&DAT_0300106a)[uVar1] = (&DAT_0300106a)[uVar1] - (char)*(undefined4 *)(param_1 + 0x8c8);
      }
      else if (((char)piVar2[iVar3 * 2 + 1] == '\x01') && (iVar5 = 0, 0 < *(int *)(param_1 + 0x8c8))
              ) {
        do {
          sub_08004468(&DAT_03001068,*(undefined2 *)((int)piVar2 + iVar3 * 8 + 6));
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x8c8));
      }
      *(char *)((int)piVar2 + iVar3 * 8 + 5) =
           *(char *)((int)piVar2 + iVar3 * 8 + 5) - (char)*(undefined4 *)(param_1 + 0x8c8);
      *(undefined4 *)(param_1 + 0x8c8) = 1;
      if (*(char *)((int)piVar2 + iVar3 * 8 + 5) == '\0') {
        iVar3 = *piVar4;
        iVar5 = *piVar2;
        *piVar2 = iVar5 + -1;
        iVar5 = (iVar5 + -1) - iVar3;
        if (iVar5 != 0) {
          sub_08049138((int)(piVar2 + iVar3 * 2 + 1),(int)(piVar2 + iVar3 * 2 + 3),iVar5 * 8);
        }
        if ((*piVar2 <= *piVar4) && (iVar3 = *piVar2 + -1, *piVar4 = iVar3, iVar3 < 0)) {
          *piVar4 = 0;
        }
      }
      *(undefined4 *)(param_1 + 0x110) = 0;
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319494,0x40);
    }
  }
  else {
    if (param_3 == 1) {
      sub_0803D876(1);
      return 1;
    }
    if (param_3 == 2) {
      *(undefined4 *)(param_1 + 0x8c8) = 1;
      *piVar4 = *piVar4 + -1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      sub_08031FCE(param_1);
    }
    else if (param_3 == 3) {
      *(undefined4 *)(param_1 + 0x8c8) = 1;
      *piVar4 = *piVar4 + 1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      sub_08031FCE(param_1);
    }
  }
  return 0;
}

