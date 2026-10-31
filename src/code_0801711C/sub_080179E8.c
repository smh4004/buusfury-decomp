/* sub_080179E8  (original: 0x080179E8-0x08017A14 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803F540();
extern int sub_0803D5B8();
extern undefined volatile _080492B8;


undefined4 * sub_080179E8(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x3c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492B8;
  sub_0803F540(param_1 + 2,0xf0,0xa0);
  param_1[1] = 0;
  return param_1;
}

