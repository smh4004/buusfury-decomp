/* sub_08050484  (original: 0x08050484-0x0805049C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();


void sub_08050484(int *param_1,int param_2)

{
  if ((param_1 != (int *)0x0) || (param_1 = (int *)sub_0803D5B8(4), param_1 != (int *)0x0)) {
    *param_1 = param_2 << 8;
  }
  return;
}

