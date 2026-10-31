/* sub_08043368  (original: 0x08043368-0x0804337C in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03004d08;
extern undefined2 volatile DAT_03004cde;
extern undefined2 volatile DAT_03004cdc;
extern char volatile DAT_03004cca;


void sub_08043368(void)

{
  if (DAT_03004cca != '\0') {
    DAT_03004cca = 0;
    if (DAT_03004d08 != 0) {
      __call_via_r2(0x45,0);
    }
    DAT_03004cde = 0;
    DAT_03004cdc = 0;
    return;
  }
  return;
}

