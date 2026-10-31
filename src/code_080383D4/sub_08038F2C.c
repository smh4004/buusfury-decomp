/* sub_08038F2C  (original: 0x08038F2C-0x08039078 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int __call_via_r2();
extern int sub_0800FE34();
extern int volatile DAT_03001bb0;
extern undefined4 volatile DAT_03001bb4;


int sub_08038F2C(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_44 (*(int *)((char *)__frame + 0x0))
#define iStack_40 (*(int *)((char *)__frame + 0x4))
#define iStack_3c (*(int *)((char *)__frame + 0x8))
#define iStack_38 (*(int *)((char *)__frame + 0xc))
#define iStack_34 (*(int *)((char *)__frame + 0x10))
#define iStack_30 (*(int *)((char *)__frame + 0x14))
#define iStack_2c (*(int *)((char *)__frame + 0x18))
#define iStack_28 (*(int *)((char *)__frame + 0x1c))
#define iStack_24 (*(int *)((char *)__frame + 0x20))
#define iStack_20 (*(int *)((char *)__frame + 0x24))
#define iStack_1c (*(int *)((char *)__frame + 0x28))
#define piStack_18 (*(int * *)((char *)__frame + 0x2c))
  iVar4 = DAT_03001bb0;
  if (DAT_03001bb0 != 0) {
    iStack_1c = param_1;
    piStack_18 = param_2;
    sub_0800FE34(&iStack_34,param_2);
    iStack_38 = iStack_30 + iStack_28 >> 1;
    iStack_3c = iStack_34 + iStack_2c >> 1;
    iVar3 = 0;
    iVar4 = 0x7fffffff;
    iStack_24 = iStack_3c;
    iStack_20 = iStack_38;
    if (0 < DAT_03001bb0) {
      do {
        sub_0800FE34(&iStack_44,(&DAT_03001bb4)[iVar3]);
        iStack_30 = iStack_40 + iStack_38 >> 1;
        iStack_34 = iStack_44 + iStack_3c >> 1;
        iStack_3c = iStack_34 - iStack_24;
        iStack_38 = iStack_30 - iStack_20;
        iVar2 = iStack_3c * iStack_3c + iStack_38 * iStack_38;
        if (iVar2 < iVar4) {
          iVar4 = iVar2;
          iStack_2c = iStack_3c;
          iStack_28 = iStack_38;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_03001bb0);
    }
    iStack_34 = iStack_2c;
    if (iStack_2c < 0) {
      iStack_34 = -iStack_2c;
    }
    iStack_30 = iStack_28;
    if (iStack_28 < 0) {
      iStack_30 = -iStack_28;
    }
    if (iStack_30 < iStack_34) {
      uVar1 = 3;
      if (iStack_2c < 1) {
        uVar1 = 2;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar4 = iStack_34;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_28 < 1;
      iVar4 = iStack_30;
    }
    if (iVar4 < 4) {
      iVar4 = 0;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      iStack_34 = iStack_2c * 0x100;
      iStack_30 = iStack_28 * 0x100;
      iStack_40 = *(int *)(iStack_1c + 4) * iStack_30 >> 8;
      iStack_44 = *(int *)(iStack_1c + 4) * iStack_34 >> 8;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_44 << 8);
      iVar4 = __16__rt_sdiv(iVar4 * 0x100,iStack_40 << 8);
      param_2[0x68] = param_2[0x68] + iVar3;
      param_2[0x69] = param_2[0x69] + iVar4;
      iVar4 = 1;
    }
  }
  return iVar4;
}

