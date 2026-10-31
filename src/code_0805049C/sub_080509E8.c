/* sub_080509E8  (original: 0x080509E8-0x080509FC in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804E47C;


void sub_080509E8(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

