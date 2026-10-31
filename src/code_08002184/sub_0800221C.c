/* sub_0800221C  (original: 0x0800221C-0x080022B4 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int Scene_Load();
extern int sub_0803D8A0();
extern int sub_08009196();
extern int sub_0803D5B8();
extern int sub_08050714();
extern int volatile DAT_0300100c;
extern undefined1 volatile DAT_0300197c;
extern undefined volatile _0804C588;


void sub_0800221C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(int *)((char *)__frame + 0x0))
#define local_18 (*(int *)((char *)__frame + 0x4))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_18 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_1c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  sub_08050714(0,0x40);
  sub_0803D8A0();
  if (DAT_0300100c != 0) {
    sub_08009196(&DAT_0300197c);
    DAT_0300100c = 0;
  }
  Scene_Load(&DAT_0300197c,iVar2,iVar4,iVar3,&local_1c,0,1);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C588;
    puVar1[2] = 0x10;
    puVar1[1] = 0;
  }
  sub_0803D8A0();
  return;
}

