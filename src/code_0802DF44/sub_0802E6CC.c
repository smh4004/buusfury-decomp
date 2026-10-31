/* sub_0802E6CC  (original: 0x0802E6CC-0x0802E6FA in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080115B0();
extern int sub_0801157E();
extern int __call_via_r2();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0802E6CC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011944(&DAT_03001c4c,param_1[3],param_3,param_4,param_4);
  sub_080115B0(&DAT_03001c4c);
  sub_0801157E(&DAT_03001c4c);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

