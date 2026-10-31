/* sub_0800AD14  (original: 0x0800AD14-0x0800AD3E in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


undefined4 sub_0800AD14(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 10) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  else if (param_2 == 0xc) {
    __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
  }
  return 0;
}

