/* sub_0803B240  (original: 0x0803B240-0x0803B294 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE78();
extern int sub_0801191A();
extern int sub_0803AEA8();
extern undefined1 volatile DAT_030032e4;
extern undefined volatile DAT_03001c4c;


void sub_0803B240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  DAT_030032e4 = 0;
  sub_0800FE78(&local_28,param_2);
  local_18 = local_28 + local_20 >> 1;
  local_14 = local_24 + local_1c >> 1;
  local_10 = local_18 + 2;
  local_c = local_14 + -0x11;
  uVar1 = sub_0803AEA8(0,&local_10,param_2,param_4,local_10,local_c);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

