/* sub_08034CF8  (original: 0x08034CF8-0x08034D86 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern undefined4 volatile DAT_03001c34;


void sub_08034CF8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_40 (*(int *)((char *)__frame + 0x0))
#define local_3c (*(int *)((char *)__frame + 0x4))
#define local_38 (*(int *)((char *)__frame + 0x8))
#define local_34 (*(int *)((char *)__frame + 0xc))
#define local_30 (*(int *)((char *)__frame + 0x10))
#define local_2c (*(int *)((char *)__frame + 0x14))
#define local_28 (*(int *)((char *)__frame + 0x18))
#define local_24 (*(int *)((char *)__frame + 0x1c))
#define local_20 (*(int *)((char *)__frame + 0x20))
#define local_1c (*(int *)((char *)__frame + 0x24))
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800FDFA(&local_40,DAT_03001c34);
  local_2c = local_3c + local_34 >> 1;
  local_30 = local_40 + local_38 >> 1;
  sub_0800FDFA(&local_28,param_2,local_34,param_4,local_30,local_2c);
  local_2c = local_2c - (local_24 + local_1c >> 1);
  if (local_30 - (local_28 + local_20 >> 1) < 1) {
    if (local_2c < 1) {
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
  }
  else if (local_2c < 1) {
    *(undefined1 *)(param_2 + 0x10) = 3;
  }
  else {
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}

