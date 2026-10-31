/* sub_0801BAB0  (original: 0x0801BAB0-0x0801BAE6 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046DD0();
extern int sub_0803D5B8();
extern undefined volatile _0804E334;


undefined4 * sub_0801BAB0(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804E334;
    sub_08046DD0(param_1 + 2,param_2,0x34);
    param_1[0x11] = 0xffffffe8;
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  return param_1;
}

