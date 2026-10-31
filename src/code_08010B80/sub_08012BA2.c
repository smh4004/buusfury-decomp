/* sub_08012BA2  (original: 0x08012BA2-0x08012BC6 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_08012BA2(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 8));
  }
  sub_0803D63C(param_1);
  return;
}

