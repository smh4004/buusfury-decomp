/* sub_08004962  (original: 0x08004962-0x080049F2 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080502BC();
extern int sub_0803FC4E();
extern int sub_0803FBDE();
extern int sub_08004838();
extern int volatile DAT_03000f94;
extern undefined1 volatile DAT_0300197c;
extern undefined1 volatile DAT_0300197d;
extern undefined1 volatile DAT_0300197e;
extern undefined volatile DAT_03004a68;


void sub_08004962(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  unsigned int __frame[562];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_8c8 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_3f8 (*(int *)((char *)__frame + 0x4d0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x8a8))
  *(undefined1 *)(param_1 + 0x8a0) = DAT_0300197c;
  *(undefined1 *)(param_1 + 0x8a1) = DAT_0300197d;
  *(undefined1 *)(param_1 + 0x8a2) = DAT_0300197e;
  *(short *)(param_1 + 0x8a4) = (short)*param_3;
  *(short *)(param_1 + 0x8a6) = (short)param_3[1];
  bVar1 = *(byte *)(param_1 + 1);
  *(byte *)(param_1 + 1) = bVar1 | 1;
  if (param_4 == 0) {
    *(byte *)(param_1 + 1) = bVar1 & 0xf7 | 1;
  }
  else {
    *(byte *)(param_1 + 1) = bVar1 | 9;
  }
  sub_08004838(auStack_8c8);
  sub_080502BC(auStack_8c8,param_1);
  iStack_3f8 = DAT_03000f94 + iStack_3f8;
  uStack_20 = sub_0803FC4E(auStack_8c8,0x8a8);
  sub_0803FBDE(&DAT_03004a68,param_2 * 0x8b0 + 0x10,auStack_8c8,0x8b0);
  return;
}

