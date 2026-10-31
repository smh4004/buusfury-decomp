/* sub_0801A946  (original: 0x0801A946-0x0801A964 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_0802082A();


void sub_0801A946(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28) = 1;
  }
  sub_0802082A(*(undefined4 *)(param_1 + 8));
  sub_0803D63C(param_1);
  return;
}

