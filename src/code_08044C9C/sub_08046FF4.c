/* sub_08046FF4  (original: 0x08046FF4-0x08047016 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error, equal.
 */
#include "ghidra_types.h"
extern int __call_via_r7();


void sub_08046FF4(int param_1,int param_2,int param_3)

{
  if (param_1 != param_2) {
    do {
      __call_via_r7(param_1);
      param_1 = param_1 + param_3;
    } while (param_1 != param_2);
  }
  return;
}

