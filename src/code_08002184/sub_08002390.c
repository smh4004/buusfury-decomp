/* sub_08002390  (original: 0x08002390-0x08002404 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08008D44();
extern int * volatile DAT_03001c34;
extern undefined4 volatile DAT_03002a58;
extern undefined1 volatile DAT_0300197c;


void sub_08002390(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(undefined2 *)((char *)__frame + 0x0))
#define local_12 (*(undefined2 *)((char *)__frame + 0x2))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_12 = (undefined2)param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = (undefined2)param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  *param_1 = iVar1 + -2;
  iVar2 = param_1[iVar1 + -1];
  *param_1 = iVar1 + -3;
  iVar1 = param_1[iVar1 + -2];
  if (DAT_03001c34 != (int *)0x0) {
    __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
  }
  DAT_03002a58 = 1;
  sub_08008D44(&DAT_0300197c,iVar1,iVar2,&local_14);
  return;
}

