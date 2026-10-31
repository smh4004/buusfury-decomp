/* sub_0803A6A0  (original: 0x0803A6A0-0x0803A736 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080116FC();
extern int sub_0800EE78();
extern int sub_08036FA2();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_0803A6A0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_18 (*(int *)((char *)__frame + 0x0))
#define iStack_14 (*(int *)((char *)__frame + 0x4))
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (**(int **)(param_2 + 0x50) * 8 - (uint)uVar1 == 0) {
    iVar2 = sub_080116FC(&DAT_03001c4c);
    if (iVar2 < 0x600) {
      sub_0800EE78(param_2);
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 0;
      iVar2 = *(int *)(param_2 + 0x1a0) >> 8;
      iStack_18 = iVar2 + 0x20;
      iStack_14 = (*(int *)(param_2 + 0x1a4) >> 8) + -0x10;
      uVar3 = sub_08036FA2(0,&iStack_18,param_2,2,iStack_18,iStack_14,iVar2);
      *(undefined4 *)(param_1 + 4) = uVar3;
      sub_0801191A(&DAT_03001c4c,uVar3);
    }
  }
  else if ((int)(uint)(uVar1 >> 3) < **(int **)(param_2 + 0x50)) {
    *(char *)(param_2 + 0x11) = (char)(uVar1 >> 3);
  }
  else if (300 < uVar1) {
    sub_0800EE78(param_2);
  }
  return;
}

