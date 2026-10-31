/* sub_08006BE8  (original: 0x08006BE8-0x08006C18 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern int sub_080193AE();
extern int sub_08011E94();
extern int __call_via_r2();
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002bd8;


void sub_08006BE8(int *param_1)

{
  sub_08011E94(&DAT_03001c4c);
  sub_08011C0C(&DAT_03001c4c,0xe,0);
  sub_080193AE(&DAT_03002bd8,0xe);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

