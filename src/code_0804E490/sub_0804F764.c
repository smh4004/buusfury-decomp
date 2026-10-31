/* sub_0804F764  (original: 0x0804F764-0x0804F784 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08037106();
extern int sub_0803D63C();


void sub_0804F764(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08037106();
  }
  *(short *)(param_2 + 0x12) = (short)(**(int **)(param_2 + 0x50) << 3);
  sub_0803D63C(param_1);
  return;
}

