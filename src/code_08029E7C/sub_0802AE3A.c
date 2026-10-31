/* sub_0802AE3A  (original: 0x0802AE3A-0x0802AE76 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0802AE3A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  if (*(short *)((int)param_2 + 0x176) < 0) {
    *(short *)((int)param_2 + 0x176) = *(short *)((int)param_2 + 0x176) + 1;
  }
  else {
    uVar1 = *(short *)((int)param_2 + 0x12) + 1;
    *(ushort *)((int)param_2 + 0x12) = uVar1;
    if (7 < uVar1) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,0x16,param_4);
      return;
    }
  }
  *(char *)((int)param_2 + 0x11) = (char)(*(ushort *)((int)param_2 + 0x12) >> 3);
  return;
}

