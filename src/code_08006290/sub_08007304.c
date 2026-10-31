/* sub_08007304  (original: 0x08007304-0x0800733A in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08009AEC();
extern undefined volatile _08049784;


undefined4 * sub_08007304(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_08049784;
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return param_1;
}

