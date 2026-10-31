/* sub_08025E2E  (original: 0x08025E2E-0x08025E50 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 84% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08024A7C();
extern int sub_0803D5B8();
extern undefined volatile _0804A994;


undefined4 * sub_08025E2E(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_08024A7C(puVar1);
  *puVar1 = &_0804A994;
  return puVar1;
}

