/* sub_08003B94  (original: 0x08003B94-0x08003BEA in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800927E();
extern int sub_0803A84A();
extern undefined4 volatile DAT_03001990;


void sub_08003B94(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(int *)((char *)__frame + 0x0))
#define local_c (*(int *)((char *)__frame + 0x4))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  local_c = param_1[iVar2 + -2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_10 = param_1[iVar2];
  iVar1 = sub_0803A84A(0,0,&local_10,iVar3,iVar1,1);
  sub_0800927E(&DAT_03001990,*(undefined1 *)(iVar1 + 4),iVar1);
  return;
}

