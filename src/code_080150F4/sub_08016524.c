/* sub_08016524  (original: 0x08016524-0x08016574 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080164D0();
extern int sub_0803D5B8();
extern undefined volatile _0804920C;
extern undefined volatile _08049D48;


undefined4 * sub_08016524(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x3d4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804920C;
  param_1[1] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  *param_1 = &_08049D48;
  param_1[0x4d] = 0;
  param_1[0xa1] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x43] = 2;
  sub_080164D0(param_1);
  return param_1;
}

