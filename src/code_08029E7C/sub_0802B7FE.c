/* sub_0802B7FE  (original: 0x0802B7FE-0x0802B844 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FF44();
extern int sub_08019858();
extern int __call_via_r2();


void sub_0802B7FE(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_14 ((undefined1 *)((char *)__frame + 0x0))
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 4);
    if (*(short *)((int)param_2 + 0x12) == 0x10) {
      sub_0800FF44(auStack_14,param_2);
      sub_08019858(auStack_14,param_2,1);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

