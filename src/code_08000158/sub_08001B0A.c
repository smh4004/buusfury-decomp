/* sub_08001B0A  (original: 0x08001B0A-0x08001B6C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0805082C();
extern undefined4 volatile DAT_03002bac;


void sub_08001B0A(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  local_10 = param_1[iVar2 + -1];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_14 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  uVar1 = sub_0805082C(0,&local_14,1,iVar3);
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,uVar1,iVar3);
  return;
}

