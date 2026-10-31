/* sub_08032A64  (original: 0x08032A64-0x08032B7C in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803282A();
extern int sub_0800FDFA();
extern int sub_0803287E();
extern int sub_08032948();
extern int volatile DAT_03001c34;


undefined4 sub_08032A64(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_48 (*(int *)((char *)__frame + 0x0))
#define iStack_44 (*(int *)((char *)__frame + 0x4))
#define iStack_40 (*(int *)((char *)__frame + 0x8))
#define iStack_3c (*(int *)((char *)__frame + 0xc))
#define iStack_38 (*(int *)((char *)__frame + 0x10))
#define iStack_34 (*(int *)((char *)__frame + 0x14))
#define iStack_30 (*(int *)((char *)__frame + 0x18))
#define iStack_2c (*(int *)((char *)__frame + 0x1c))
#define iStack_28 (*(int *)((char *)__frame + 0x20))
#define iStack_24 (*(int *)((char *)__frame + 0x24))
#define iStack_20 (*(int *)((char *)__frame + 0x28))
#define iStack_1c (*(int *)((char *)__frame + 0x2c))
#define iStack_18 (*(int *)((char *)__frame + 0x30))
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  if (DAT_03001c34 != 0) {
    sub_0800FDFA(&iStack_48);
    iStack_34 = iStack_44 + iStack_3c >> 1;
    iStack_38 = iStack_48 + iStack_40 >> 1;
    sub_0800FDFA(&iStack_30,param_2);
    iStack_1c = iStack_2c + iStack_24 >> 1;
    iStack_20 = iStack_30 + iStack_28 >> 1;
    iVar1 = iStack_38 - iStack_20;
    iVar2 = iStack_34 - iStack_1c;
    iStack_18 = 0;
    if ((iVar1 + 1U < 3) || (iVar2 + 1U < 3)) {
      iStack_18 = 1;
    }
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = -iVar1;
    }
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = -iVar2;
    }
    if (iVar3 < iVar4) {
      if (iVar1 < 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 3;
      }
      if (iVar2 < 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar6 = iVar2 < 0;
      if (iVar1 < 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
    }
    if (iStack_18 == 0) {
      iVar1 = sub_08032948(param_1,param_2,uVar6,iVar4,iVar1,iVar2);
      if (iVar1 == 0) {
        iVar1 = sub_08032948(param_1,param_2,uVar5);
        if (iVar1 == 0) {
          iStack_18 = 1;
        }
        else {
          sub_0803287E(param_1,param_2,uVar5);
        }
      }
      else {
        sub_0803287E(param_1,param_2,uVar6);
      }
    }
    if (iStack_18 == 1) {
      sub_0803282A(param_1,param_2,uVar5);
    }
  }
  return 0;
}

