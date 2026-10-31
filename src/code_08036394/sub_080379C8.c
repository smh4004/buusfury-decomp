/* sub_080379C8  (original: 0x080379C8-0x08037A04 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE78();
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c4;
extern int volatile DAT_030019c0;
extern int volatile DAT_030019c8;


undefined4 sub_080379C8(void)

{
  undefined4 uVar1;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(int *)((char *)__frame + 0x0))
#define local_14 (*(int *)((char *)__frame + 0x4))
#define local_10 (*(int *)((char *)__frame + 0x8))
#define local_c (*(int *)((char *)__frame + 0xc))
  sub_0800FE78(&local_18);
  if ((((DAT_030019bc < local_10) && (local_18 < DAT_030019c4)) && (DAT_030019c0 < local_c)) &&
     (local_14 < DAT_030019c8)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

