/* sub_08021C7C  (original: 0x08021C7C-0x08021CC0 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08040182();
extern undefined2 volatile DAT_03002dae;
extern undefined2 volatile DAT_03002db0;
extern undefined2 volatile DAT_03002db2;
extern undefined2 volatile DAT_03002f38;
extern undefined2 volatile DAT_03002c1a;
extern undefined2 volatile DAT_03002c1c;
extern undefined2 volatile DAT_03002c1e;
extern undefined2 volatile DAT_03002da4;


void sub_08021C7C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  sub_08040182();
  DAT_03002dae = 0;
  DAT_03002db0 = 0;
  DAT_03002db2 = 0;
  DAT_03002f38 = 0;
  DAT_03002c1a = 0;
  DAT_03002c1c = 0;
  DAT_03002c1e = 0;
  DAT_03002da4 = 0;
  return;
}

