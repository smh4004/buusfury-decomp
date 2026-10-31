/* sub_08006D5C  (original: 0x08006D5C-0x08006D80 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08010D7C();
extern int sub_0803D5B8();


undefined4 * sub_08006D5C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = param_2;
    sub_08010D7C(param_2);
  }
  return param_1;
}

