/* sub_0801AB3E  (original: 0x0801AB3E-0x0801AB5C in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0801AB3E(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}

