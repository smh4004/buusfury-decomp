/* sub_08005460  (original: 0x08005460-0x080054BA in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_08004D38();
extern int sub_0803D5B8();
extern undefined volatile _08049728;
extern undefined volatile _0804920C;


undefined4 *
sub_08005460(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x2f8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    *param_1 = &_08049728;
    sub_08004D38(param_1 + 0x4b);
    param_1[0x45] = param_2;
    param_1[0x46] = param_3;
    param_1[0x4a] = 0;
    param_1[0x48] = param_4;
    param_1[0x47] = 0xffffffff;
    *(undefined1 *)(param_1 + 0x49) = 6;
  }
  return param_1;
}

