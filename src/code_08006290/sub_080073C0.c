/* sub_080073C0  (original: 0x080073C0-0x080073F0 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08009AEC();
extern undefined volatile _08049BD4;


undefined4 * sub_080073C0(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_08049BD4;
    param_1[5] = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return param_1;
}

