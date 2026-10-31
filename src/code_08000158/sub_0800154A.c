/* sub_0800154A  (original: 0x0800154A-0x080015BA in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802B8F0();
extern int sub_080001C6();
extern int sub_0801936A();
extern undefined4 volatile DAT_03002bac;


void sub_0800154A(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(undefined4 *)((char *)__frame + 0x0))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar3 = param_1[iVar3];
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar4 = param_1[iVar4];
  iVar5 = *param_1;
  *param_1 = iVar5 + -1;
  local_10 = CONCAT31(CONCAT21(CONCAT11((char)iVar2,(char)iVar3),(char)iVar4),(char)param_1[iVar5]);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  uVar1 = sub_0802B8F0(0,&local_10);
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar1,iVar3);
  return;
}

