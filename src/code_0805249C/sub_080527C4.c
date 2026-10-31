/* sub_080527C4  (original: 0x080527C4-0x080527D8 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804984C;


void sub_080527C4(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804984C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

