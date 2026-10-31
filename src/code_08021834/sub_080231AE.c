/* sub_080231AE  (original: 0x080231AE-0x080232A6 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004448();
extern int sub_080049F2();
extern int sub_080042FC();
extern int sub_08049138();
extern undefined4 volatile DAT_03001910;
extern int volatile DAT_0300155c;
extern int volatile DAT_0300114c;
extern undefined1 volatile DAT_03001068;
extern undefined1 volatile DAT_0300106a;
extern undefined4 volatile DAT_03001150;


void sub_080231AE(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar2 = DAT_0300155c;
  *(int *)(param_1 + 0x580) = DAT_0300155c;
  bVar6 = iVar2 != 0;
  iVar2 = 0;
  do {
    cVar1 = (&DAT_0300106a)[iVar2];
    *(char *)(param_1 + iVar2 + 0x141) = cVar1;
    if (cVar1 != '\0') {
      bVar6 = true;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x53);
  piVar5 = (int *)(param_1 + 0x194);
  iVar2 = 0;
  if (DAT_0300114c < 1) {
    if (!bVar6) goto _0802329C;
  }
  else {
    do {
      uVar3 = (&DAT_03001150)[iVar2];
      iVar2 = iVar2 + 1;
      iVar4 = *piVar5;
      *piVar5 = iVar4 + 1;
      piVar5[iVar4 + 1] = uVar3 & 0xfffffff;
    } while (iVar2 < DAT_0300114c);
  }
  sub_08049138(0x3001068,param_1 + 0x5f4,0x8a8);
  DAT_0300155c = DAT_0300155c + *(int *)(param_1 + 0x580);
  iVar2 = 0;
  do {
    uVar3 = (uint)(byte)(&DAT_0300106a)[iVar2] + (uint)*(byte *)(param_1 + iVar2 + 0x141);
    if (uVar3 < 0x100) {
      (&DAT_0300106a)[iVar2] = (char)uVar3;
    }
    else {
      (&DAT_0300106a)[iVar2] = 0xff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x53);
  iVar2 = 0;
  if (0 < *piVar5) {
    do {
      sub_08004448(&DAT_03001068,piVar5[iVar2 + 1]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar5);
  }
  sub_08049138(param_1 + 0x5f4,0x3001068,0x8a8);
  sub_080049F2(&DAT_03001068,DAT_03001910);
_0802329C:
  sub_080042FC(&DAT_03001068);
  return;
}

