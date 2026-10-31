/* sub_08000CE8  (original: 0x08000CE8-0x08000D0A in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801934E();
extern int sub_0803D8A0();
extern int volatile DAT_03001008;
extern undefined4 volatile DAT_03002bac;


void sub_08000CE8(void)

{
  if (DAT_03001008 == 0) {
    sub_0801934E(&DAT_03002bac);
  }
  else {
    sub_0803D8A0();
    DAT_03002bac = 0;
    DAT_03001008 = 0;
  }
  return;
}

