/* sub_08000BF0  (original: 0x08000BF0-0x08000C36 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801111C();
extern int sub_08000158();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_08000BF0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[2];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_8 ((undefined4 *)((char *)__frame + 0x0))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_8[0] = CONCAT22((short)iVar2,(short)param_1[iVar3]);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_08000158(param_1[iVar2]);
  uVar1 = sub_0801111C(0,uVar1,local_8);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

