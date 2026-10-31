/* sub_080074C4  (original: 0x080074C4-0x080074EC in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08009AEC();
extern undefined volatile _0804C11C;


undefined4 * sub_080074C4(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_0804C11C;
  }
  return param_1;
}

