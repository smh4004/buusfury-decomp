/* sub_080022E6  (original: 0x080022E6-0x08002390 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int __call_via_r2();
extern int sub_0803D5B8();
extern int sub_08008D44();
extern int sub_08050714();
extern undefined4 volatile DAT_03002a58;
extern int * volatile DAT_03001c34;
extern undefined1 volatile DAT_0300197c;
extern undefined volatile _080495B4;


void sub_080022E6(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(undefined2 *)((char *)__frame + 0x0))
#define local_12 (*(undefined2 *)((char *)__frame + 0x2))
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_12 = (undefined2)param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_14 = (undefined2)param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar3 = param_1[iVar3 + -2];
  DAT_03002a58 = 1;
  if (DAT_03001c34 != (int *)0x0) {
    __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
  }
  sub_08050714(0,0x40);
  sub_0803D8A0();
  piVar1 = (int *)sub_08008D44(&DAT_0300197c,iVar3,iVar4,&local_14);
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_080495B4;
    puVar2[1] = 0;
    puVar2[2] = 4;
  }
  sub_0803D8A0();
  __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
  return;
}

