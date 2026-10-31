/* sub_08039182  (original: 0x08039182-0x080391AC in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E6F8();
extern int sub_0803D63C();
extern int sub_0800A9FE();
extern undefined volatile _0804D514;


void sub_08039182(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0804D514;
  sub_0800A9FE(param_1 + 0x8a,0,param_3,param_4,param_4);
  sub_0800E6F8(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

