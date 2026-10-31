/* sub_08024A2C  (original: 0x08024A2C-0x08024A54 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009AEC();
extern int sub_0803D5B8();
extern undefined volatile _080499D4;


undefined4 * sub_08024A2C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_080499D4;
  }
  return param_1;
}

