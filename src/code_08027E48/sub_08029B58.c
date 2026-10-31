/* sub_08029B58  (original: 0x08029B58-0x08029BB6 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE78();
extern int volatile DAT_03001b94;
extern undefined4 volatile DAT_03001b50;


undefined4 sub_08029B58(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_28 (*(int *)((char *)__frame + 0x0))
#define iStack_24 (*(int *)((char *)__frame + 0x4))
#define iStack_20 (*(int *)((char *)__frame + 0x8))
#define iStack_1c (*(int *)((char *)__frame + 0xc))
#define iStack_18 (*(int *)((char *)__frame + 0x10))
#define iStack_14 (*(int *)((char *)__frame + 0x14))
#define iStack_10 (*(int *)((char *)__frame + 0x18))
#define iStack_c (*(int *)((char *)__frame + 0x1c))
  if (DAT_03001b94 == 0) {
    uVar1 = 0;
  }
  else if (*(undefined4 **)(DAT_03001b94 + 0x14) == &DAT_03001b50) {
    sub_0800FE78(&iStack_18);
    sub_0800FE78(&iStack_28,param_2);
    if ((((iStack_28 + -8 < iStack_10) && (iStack_18 < iStack_20 + 8)) &&
        (iStack_24 + -8 < iStack_c)) && (iStack_14 < iStack_1c + 8)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

