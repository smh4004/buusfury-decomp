/* sub_08050878  (original: 0x08050878-0x080508C4 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 97% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080060A8();
extern int sub_0803D5B8();
extern undefined volatile _0804D82C;


undefined4 *
sub_08050878(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    sub_080060A8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
    *param_1 = &_0804D82C;
  }
  return param_1;
}

