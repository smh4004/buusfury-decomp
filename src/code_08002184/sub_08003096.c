/* sub_08003096  (original: 0x08003096-0x080030DA in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined4 volatile DAT_03001990;


void sub_08003096(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(int *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = *(int *)(&DAT_03001990)[param_1[iVar1]];
  __call_via_r2((int *)(&DAT_03001990)[param_1[iVar1]],&local_c,*(int *)(iVar2 + 0xc) + iVar2);
  return;
}

