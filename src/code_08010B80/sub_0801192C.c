/* sub_0801192C  (original: 0x0801192C-0x08011944 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804FE54();
extern undefined4 volatile DAT_03002a4c;


void sub_0801192C(int param_1)

{
  sub_0804FE54();
  *(undefined4 **)(*(int *)(param_1 + 4) * 4 + param_1 + 8) = &DAT_03002a4c;
  return;
}

