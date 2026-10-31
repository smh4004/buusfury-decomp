/* sub_08029C90  (original: 0x08029C90-0x08029D14 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern int volatile DAT_03001b94;


undefined4 sub_08029C90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_48 (*(int *)((char *)__frame + 0x0))
#define local_44 (*(int *)((char *)__frame + 0x4))
#define local_40 (*(int *)((char *)__frame + 0x8))
#define local_3c (*(int *)((char *)__frame + 0xc))
#define local_38 (*(int *)((char *)__frame + 0x10))
#define local_34 (*(int *)((char *)__frame + 0x14))
#define local_30 (*(int *)((char *)__frame + 0x18))
#define local_2c (*(int *)((char *)__frame + 0x1c))
#define local_28 (*(int *)((char *)__frame + 0x20))
#define local_24 (*(int *)((char *)__frame + 0x24))
  uVar1 = 0;
  if (DAT_03001b94 != 0) {
    sub_0800FDFA(&local_48);
    local_34 = local_44 + local_3c >> 1;
    local_38 = local_48 + local_40 >> 1;
    sub_0800FDFA(&local_30,param_2,local_3c,param_4,local_38,local_34);
    local_38 = local_38 - (local_30 + local_28 >> 1);
    local_34 = local_34 - (local_2c + local_24 >> 1);
    if (local_38 * local_38 + local_34 * local_34 <= *(int *)(param_1 + 0xc)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

