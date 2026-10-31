/* sub_08034574  (original: 0x08034574-0x080345FC in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE78();
extern int volatile DAT_03001b94;


undefined4 sub_08034574(undefined4 param_1,undefined4 param_2)

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
  if ((DAT_03001b94 == 0) || (*(int *)(DAT_03001b94 + 0x1cc) == 0)) {
    uVar1 = 0;
  }
  else {
    sub_0800FE78(&iStack_18);
    sub_0800FE78(&iStack_28,param_2);
    if ((((iStack_18 + iStack_10 >> 1) - (iStack_28 + iStack_20 >> 1)) + 0x2fU < 0x5f) &&
       (((iStack_14 + iStack_c >> 1) - (iStack_24 + iStack_1c >> 1)) + 0x2fU < 0x5f)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

