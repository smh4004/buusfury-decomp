/* sub_0803311C  (original: 0x0803311C-0x08033132 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802082A();
extern int sub_0803D63C();


void sub_0803311C(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    sub_0802082A();
  }
  sub_0803D63C(param_1);
  return;
}

