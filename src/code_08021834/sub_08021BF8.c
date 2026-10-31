/* sub_08021BF8  (original: 0x08021BF8-0x08021C40 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049168();
extern int sub_0803D5B8();
extern undefined2 volatile DAT_03002f3c;
extern undefined4 volatile DAT_03002f40;
extern undefined4 volatile DAT_03002f44;
extern undefined volatile _080492D4;


undefined4 * sub_08021BF8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080492D4;
    DAT_03002f3c = 1;
    DAT_03002f40 = 1;
    DAT_03002f44 = 0;
    sub_08049168(0x3002da8,0,4);
    sub_08049168(0x3002f48,0,4);
  }
  return param_1;
}

