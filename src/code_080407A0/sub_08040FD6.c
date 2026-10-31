/* sub_08040FD6  (original: 0x08040FD6-0x0804102A in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern uint volatile DAT_03004a7c;
extern int volatile DAT_03004a90;
extern byte volatile DAT_03004a6c;


undefined4 sub_08040FD6(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  DAT_03004a7c = (uint)(DAT_03004a90 << 0x18 < 0);
  if (DAT_03004a90 << 0x17 < 0) {
    bVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
    if ((bVar1 < 2) && (bVar1 == DAT_03004a6c)) {
      if (param_1[1] < 1) {
        uVar2 = 1;
        param_1[1] = 0;
      }
      else {
        param_1[1] = param_1[1] + -1;
      }
    }
    else {
      DAT_03004a6c = bVar1;
      param_1[1] = 10;
    }
  }
  return uVar2;
}

