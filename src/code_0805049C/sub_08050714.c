/* sub_08050714  (original: 0x08050714-0x08050750 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080176AC();
extern int sub_0803D5B8();
extern undefined volatile _0804BBA4;


undefined4 * sub_08050714(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x40c), param_1 != (undefined4 *)0x0)) {
    sub_080176AC(param_1);
    *param_1 = &_0804BBA4;
    param_1[0x101] = 0;
    param_1[0x102] = param_2;
  }
  return param_1;
}

