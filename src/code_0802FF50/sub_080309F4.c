/* sub_080309F4  (original: 0x080309F4-0x08030A2C in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080301F8();
extern int sub_0803D5B8();
extern undefined volatile _0804D20C;
extern undefined volatile gUnknown_087581F4;


undefined4 * sub_080309F4(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    sub_080301F8(param_1,&gUnknown_087581F4);
    *param_1 = &_0804D20C;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[10] = param_2 * 0x290 >> 8;
  }
  return param_1;
}

