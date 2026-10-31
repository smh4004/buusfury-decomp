/* sub_08035274  (original: 0x08035274-0x080353D0 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804F900();
extern int __call_via_r2();
extern int sub_0800FDFA();
extern int volatile DAT_03001c34;


undefined4 sub_08035274(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  unsigned int __frame[21];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_54 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_44 (*(int *)((char *)__frame + 0x10))
#define iStack_40 (*(int *)((char *)__frame + 0x14))
#define auStack_3c ((undefined1 *)((char *)__frame + 0x18))
#define iStack_34 (*(int *)((char *)__frame + 0x20))
#define iStack_30 (*(int *)((char *)__frame + 0x24))
#define iStack_2c (*(int *)((char *)__frame + 0x28))
#define iStack_28 (*(int *)((char *)__frame + 0x2c))
#define iStack_24 (*(int *)((char *)__frame + 0x30))
#define iStack_20 (*(int *)((char *)__frame + 0x34))
#define iStack_1c (*(int *)((char *)__frame + 0x38))
#define piStack_18 (*(int * *)((char *)__frame + 0x3c))
  if (DAT_03001c34 == 0) {
    return 0;
  }
  piVar3 = (int *)(param_1 + 4);
  iStack_1c = param_1;
  piStack_18 = param_2;
  if (*(short *)((int)param_2 + 0x12) == 0) {
    sub_0800FDFA(auStack_54);
    sub_0804F900(&iStack_44,auStack_54);
    sub_0800FDFA(auStack_3c,param_2);
    sub_0804F900(&iStack_2c,auStack_3c);
    iStack_24 = iStack_44 - iStack_2c;
    iStack_20 = iStack_40 - iStack_28;
    iStack_2c = iStack_24;
    if (iStack_24 < 0) {
      iStack_2c = -iStack_24;
    }
    iStack_28 = iStack_20;
    if (iStack_20 < 0) {
      iStack_28 = -iStack_20;
    }
    *piVar3 = 0;
    *(int *)(param_1 + 8) = 0;
    if (iStack_28 < iStack_2c) {
      if (iStack_28 < 8) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        uVar1 = 3;
        if (iStack_24 < 1) {
          uVar1 = 2;
        }
        *(undefined1 *)(param_2 + 4) = uVar1;
        return 1;
      }
      if (iStack_20 < 1) {
        *(undefined1 *)(param_2 + 4) = 1;
        *(undefined4 *)(iStack_1c + 8) = 0xfffffe80;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
        *(undefined4 *)(iStack_1c + 8) = 0x180;
      }
    }
    else {
      if (iStack_2c < 8) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        *(bool *)(param_2 + 4) = iStack_20 < 1;
        return 1;
      }
      if (iStack_24 < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        *piVar3 = -0x180;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        *piVar3 = 0x180;
      }
    }
  }
  if (0x80 < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iStack_34 = param_2[0x68] + *piVar3;
    iStack_30 = param_2[0x69] + *(int *)(param_1 + 8);
    iStack_2c = iStack_34;
    iStack_28 = iStack_30;
    iStack_24 = iStack_34;
    iStack_20 = iStack_30;
    iVar2 = __call_via_r2(param_2,&iStack_24,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    }
    else {
      param_2[0x68] = iStack_24;
      param_2[0x69] = iStack_20;
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    }
  }
  return 0;
}

