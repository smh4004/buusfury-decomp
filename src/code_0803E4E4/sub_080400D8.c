/* sub_080400D8  (original: 0x080400D8-0x080400EE in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08040048();
extern int sub_0803D5B8();
extern undefined volatile _08049644;


void sub_080400D8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049644;
  }
  sub_08040048();
  return;
}

