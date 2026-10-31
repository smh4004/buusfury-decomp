/* sub_08026C9C  (original: 0x08026C9C-0x08026CDA in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804DA60;


void sub_08026C9C(undefined4 *param_1,undefined4 param_2,int param_3,undefined2 param_4,
                 short param_5)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804DA60;
    param_1[7] = param_3;
    param_1[4] = param_2;
    *(undefined2 *)(param_1 + 3) = param_4;
    *(short *)(param_1 + 5) = *(short *)(param_3 + 0x14) + param_5;
    param_1[6] = (uint)(*(char *)(param_3 + 0x16) != '\0');
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[1] = *(undefined4 *)(param_3 + 0xc);
  }
  return;
}

