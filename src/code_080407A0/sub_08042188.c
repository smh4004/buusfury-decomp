/* sub_08042188  (original: 0x08042188-0x080421A0 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804225C();


void sub_08042188(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0x20;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0x7ff9;
  *(char **)(param_1 + 0xc) = "TESTING";
  *(code **)(param_1 + 0x10) = sub_0804225C;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0xf0;
  *(undefined2 *)(param_1 + 0x18) = 0xf0;
  return;
}

