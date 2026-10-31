/* sub_08037B48  (original: 0x08037B48-0x08037B96 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE78();
extern undefined4 volatile DAT_03001c34;


undefined4 sub_08037B48(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_28 (*(int *)((char *)__frame + 0x0))
#define local_24 (*(int *)((char *)__frame + 0x4))
#define local_20 (*(int *)((char *)__frame + 0x8))
#define local_1c (*(int *)((char *)__frame + 0xc))
#define local_18 (*(int *)((char *)__frame + 0x10))
#define local_14 (*(int *)((char *)__frame + 0x14))
#define local_10 (*(int *)((char *)__frame + 0x18))
#define local_c (*(int *)((char *)__frame + 0x1c))
  sub_0800FE78(&local_18,DAT_03001c34);
  local_18 = local_18 + 6;
  local_10 = local_10 + -6;
  sub_0800FE78(&local_28,param_2);
  if ((((local_18 < local_20) && (local_28 < local_10)) && (local_14 < local_1c)) &&
     (local_24 < local_c)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

