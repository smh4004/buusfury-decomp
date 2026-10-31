/* sub_0801AB96  (original: 0x0801AB96-0x0801ABBE in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E302();
extern int sub_08038DEC();
extern int sub_0803D63C();
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08319428;


void sub_0801AB96(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
    sub_08038DEC(*(undefined4 *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}

