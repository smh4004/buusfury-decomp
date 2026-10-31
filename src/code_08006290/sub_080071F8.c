/* sub_080071F8  (original: 0x080071F8-0x080072CC in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006D98();
extern int __call_via_r1();
extern int sub_0803D8A0();
extern int sub_08008D44();
extern int __call_via_r2();
extern int sub_08006DD6();
extern undefined1 volatile DAT_0300197c;


void sub_080071F8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(undefined4 *)((char *)__frame + 0x0))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_18 (*(int *)((char *)__frame + 0x8))
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((*(ushort *)(iVar1 + 2) & (ushort)*(byte *)(param_1 + 0x11)) != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    local_1c = ((int)*(short *)(iVar4 + 0x14) - (int)*(short *)(iVar4 + 8)) + (param_2[0x68] >> 8);
    local_18 = ((int)*(short *)(iVar4 + 0x16) - (int)*(short *)(iVar4 + 10)) + (param_2[0x69] >> 8);
    local_20 = CONCAT22((short)local_18,(short)local_1c);
    iVar2 = __call_via_r2(param_2,2,*(int *)(*param_2 + 0x34) + *param_2);
    iVar1 = param_2[0x8c];
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
    sub_08006D98(0,param_2);
    sub_0803D8A0();
    piVar3 = (int *)sub_08008D44(&DAT_0300197c,*(undefined1 *)(iVar4 + 0x11),
                                 *(undefined1 *)(iVar4 + 0x12),&local_20);
    *(undefined1 *)(piVar3 + 4) = *(undefined1 *)(iVar4 + 0x10);
    sub_08006DD6(0,piVar3);
    sub_0803D8A0();
    if (iVar2 != 0) {
      *(short *)(piVar3 + 0x8c) = (short)iVar1;
      __call_via_r2(piVar3,2,*(int *)(*piVar3 + 0x28) + *piVar3);
    }
  }
  return;
}

