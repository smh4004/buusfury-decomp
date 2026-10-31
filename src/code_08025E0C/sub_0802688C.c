/* sub_0802688C  (original: 0x0802688C-0x0802692C in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern int volatile DAT_03001b94;


undefined4 sub_0802688C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_40 (*(int *)((char *)__frame + 0x0))
#define iStack_3c (*(int *)((char *)__frame + 0x4))
#define iStack_38 (*(int *)((char *)__frame + 0x8))
#define iStack_34 (*(int *)((char *)__frame + 0xc))
#define iStack_30 (*(int *)((char *)__frame + 0x10))
#define iStack_2c (*(int *)((char *)__frame + 0x14))
#define iStack_28 (*(int *)((char *)__frame + 0x18))
#define iStack_24 (*(int *)((char *)__frame + 0x1c))
#define iStack_20 (*(int *)((char *)__frame + 0x20))
#define iStack_1c (*(int *)((char *)__frame + 0x24))
  if ((DAT_03001b94 == 0) || (*(int *)(DAT_03001b94 + 0x1cc) == 0)) {
    uVar1 = 0;
  }
  else {
    sub_0800FDFA(&iStack_40);
    iStack_2c = iStack_3c + iStack_34 >> 1;
    iStack_30 = iStack_40 + iStack_38 >> 1;
    sub_0800FDFA(&iStack_28,param_2,iStack_34,param_4,iStack_30,iStack_2c);
    iStack_30 = iStack_30 - (iStack_28 + iStack_20 >> 1);
    iStack_2c = iStack_2c - (iStack_24 + iStack_1c >> 1);
    if (iStack_30 < 0) {
      iStack_30 = -iStack_30;
    }
    if (iStack_2c < 0) {
      iStack_2c = -iStack_2c;
    }
    if ((iStack_30 < 0x10) || (iStack_2c < 0x10)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

