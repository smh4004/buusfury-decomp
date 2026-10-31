/* sub_0803BEB2  (original: 0x0803BEB2-0x0803BED0 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0803BEB2(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}

