/* sub_08050364  (original: 0x08050364-0x080503A4 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 76% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08046FF4();
extern int sub_0803D5B8();


int sub_08050364(int param_1)

{
  if ((param_1 == 0) && (param_1 = sub_0803D5B8(0x68), param_1 == 0)) {
    return 0;
  }
  sub_08046FF4(param_1 + 0x2e,param_1 + 0x3a,2,0x8050869);
  sub_08046FF4(param_1 + 0x3c,param_1 + 0x4c,4,0x8050535);
  return param_1;
}

