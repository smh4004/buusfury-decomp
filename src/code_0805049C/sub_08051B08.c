/* sub_08051B08  (original: 0x08051B08-0x08051B28 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08010D9A();
extern int sub_0803D63C();
extern undefined volatile _080491F0;


void sub_08051B08(undefined4 *param_1,int param_2)

{
  sub_08010D9A(param_1[3]);
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

