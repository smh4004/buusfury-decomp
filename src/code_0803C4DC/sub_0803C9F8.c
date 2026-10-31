/* sub_0803C9F8  (original: 0x0803C9F8-0x0803CA3A in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803C8FC();


void sub_0803C9F8(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x10) {
    *(undefined1 *)((int)param_2 + 0x11) = 0;
  }
  else {
    *(char *)((int)param_2 + 0x11) = (char)((int)(uVar2 - 0x10) >> 3) + '\x01';
  }
  if (uVar2 == 0x10) {
    sub_0803C8FC(param_1,param_2);
  }
  if (3 < *(byte *)((int)param_2 + 0x11)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

