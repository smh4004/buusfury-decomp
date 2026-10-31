/* sub_08006BA0  (original: 0x08006BA0-0x08006BD0 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08011C0C();
extern int sub_08011AA0();
extern int volatile DAT_03002bac;
extern undefined volatile DAT_03001c4c;


void sub_08006BA0(int *param_1)

{
  sub_08011AA0(&DAT_03001c4c);
  if (DAT_03002bac == 0) {
    sub_08011C0C(&DAT_03001c4c,0xc,0);
  }
  __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
  return;
}

