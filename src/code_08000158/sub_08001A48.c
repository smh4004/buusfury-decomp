/* sub_08001A48  (original: 0x08001A48-0x08001AB0 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08015AF0();
extern int sub_080001C6();
extern int sub_0801936A();
extern undefined4 volatile DAT_03002bac;


void sub_08001A48(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar1 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar3 = param_1[iVar3 + -1];
  uVar2 = sub_080001C6(iVar1);
  uVar2 = sub_08015AF0(0,uVar2,&local_14);
  iVar1 = sub_080001C6(iVar3);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = iVar1 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar2,iVar3);
  return;
}

