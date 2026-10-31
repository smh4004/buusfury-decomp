/* sub_0801AF3C  (original: 0x0801AF3C-0x0801AFE2 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_080134B8();
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_08013598();
extern int sub_0800FF44();
extern int sub_08019858();


void sub_0801AF3C(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_1c ((undefined1 *)((char *)__frame + 0x0))
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x28) {
    if (uVar1 == 0x10) {
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      sub_0800FF44(auStack_1c,param_2);
      sub_08019858(auStack_1c,param_2,1);
    }
  }
  else {
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    iVar4 = *(short *)(iVar2 + 0x1c) * 0xccd + 0xffff >> 0x10;
    if ((*(char *)(param_1 + 4) == '\0') || (iVar3 = sub_080134B8(iVar2,iVar4), iVar3 == 0)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(undefined1 *)(param_1 + 4) = 0;
      sub_08013598(iVar2,iVar4);
      *(char *)((int)param_2 + 0x11) = '\x03' - *(char *)((int)param_2 + 0x11);
      *(undefined2 *)((int)param_2 + 0x12) = 0x10;
      sub_0800FF44(auStack_1c,param_2);
      sub_08019858(auStack_1c,param_2,1);
    }
  }
  return;
}

