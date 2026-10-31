/* sub_0801934E  (original: 0x0801934E-0x0801936A in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_0803D8A0();
extern undefined volatile _0804C0C4;


void sub_0801934E(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C0C4;
  }
  sub_0803D8A0();
  *param_1 = 0;
  return;
}

