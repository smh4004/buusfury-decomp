/* sub_08024C38  (original: 0x08024C38-0x08024C54 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08011A1E();
extern int sub_080115B0();
extern undefined volatile DAT_03001c4c;


void sub_08024C38(int *param_1)

{
  __call_via_r1(param_1,*(int *)(*param_1 + 0x3c) + *param_1);
  sub_08011A1E(&DAT_03001c4c);
  sub_080115B0(&DAT_03001c4c);
  return;
}

