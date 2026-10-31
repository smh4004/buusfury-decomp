/* sub_08036394  (original: 0x08036394-0x080363C4 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int volatile DAT_03000f94;
extern undefined volatile _0804A6D0;


void sub_08036394(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804A6D0;
    param_1[1] = param_2;
    param_1[6] = param_4;
    param_1[5] = param_3;
    param_1[4] = 0;
    param_1[3] = (DAT_03000f94 - param_4) + -1;
  }
  return;
}

